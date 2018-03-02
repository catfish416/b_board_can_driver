#include "spiThread.h"
#include <time.h>
#include <unistd.h>
#include <sys/prctl.h>
#include <sched.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include "inter_comm.h"
#include "CLinuxTimer.h"
#include "CLinuxMutex.h"
#include "resue.h"
extern "C" {
  #include "ipcl.h"
  #include "hal_plock.h"
  
}
EXTERN_VAR CLinuxTimer *spi_timer;
  uint32_t spitime = 0;
void spi_handler_func(sigval_t v)
{
    
   	spi_timer->os_timer_handler(pthread_task[spi_taskid].task_id);
   			
}

spiThread::spiThread(const char *m_name):
CThread(m_name)
{

	unsigned char i;
	w_block = 0;
	rt_block = 0xFF;
	for(i=0; i< TASK_NUM;i++ )
		{
		  if(0 == strcmp(m_name,pthread_task[i].task_name))
		  	{
		  	    task_id = pthread_task[i].task_id;
				task_event = pthread_task[i].task_event;
				break;
		  	}
		}
	message = (Frame_Type *)malloc(sizeof(Frame_Type));
   	
	

}



spiThread::~spiThread()
{
   
   free(message);
}

void spiThread::mainLoop()
{
 
           prctl(PR_SET_NAME,pthread_task[task_id].task_name);
		       cpu_set_t mask;
        CPU_ZERO(&mask);
        CPU_SET(3, &mask); 
	 // printf("spi tid is =%ld\n",gettid());
    uint8_t *send_msg = (uint8_t *)message;
   uint8_t rcv_msg[20] = {0};
   uint8_t shift_rcv_msg[8][19] = {0};
   uint8_t five_time_send = 0;
   SPI_Close(V850_channel);
    MOTION_OUTPUT_TRIG motion;
   PATH_TO_CONTROL_TRIG path;
   EPM_TO_CONTROL_TRIG EPM_Data;
   MAPMOTION_TRIG  Map;
   SPI_Config_T spi_config = DRV_SPI_CFG;
   spi_fd = SPI_Open(V850_channel,&spi_config);
   if(spi_fd == -1 )
   	{
   	  printf("spi open fial!\n");
   	} 
      unsigned char data[5] = {0,15,0,15,3};
   os_event_type event_mask = 0x00;
    
	spi_timer->os_timer_create(task_id);
	spi_timer->set_timerspec(data);
	spi_timer->os_timer_start( );
	
     while(1)
	{
        	memset(arrary,0,sizeof(arrary)/sizeof(arrary[0]));
	  event_mask = 	spi_timer->pt_mutex->os_event_wait(task_id); 
	  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
	 {
		  event_mask &= ~PERDIOC_TIMER_EVENT;
		   
	  		  struct timespec tks;
		 clock_gettime(CLOCK_MONOTONIC, &tks);
	         uint32_t ktime = tks.tv_sec * 1000 + tks.tv_nsec / 1000000;
		if((ktime-spitime) <13 || (ktime-spitime) >17)
		{
		    printf("....spi period time = %d\n",ktime-spitime);
		}
		spitime =  ktime;
		#ifdef  SPI_DEBUG_PRINTF
			struct timespec ts;
	         clock_gettime(CLOCK_MONOTONIC, &ts);
				 uint64_t time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
		#endif
             Get_PathPlanOutput(&path );
             Get_EPMOutput(&EPM_Data);
             Get_MapMotion(&Map);
			 #if 1
    Map.End_Flag =  1; 
    Map.PreviewDistance = 1000;  
    Map.TrackerLateralError = -20;
    Map.VehicleOffset_Now = 255;   
    Map.Final_a = -2;   
   Map.PreviewLateralDistance = 1234;
   #endif
    #if 0		
	EPM_Data.Left_Lane_Quality  = 0x03;
	EPM_Data.Right_Lane_Quality = 0x01;	
	EPM_Data.BusOff =  0xB0;  
	EPM_Data.ObsMStatus  = 0xB7;    
	EPM_Data.Left_Lane_End = 0x1423;    
	EPM_Data.Right_Lane_End = 0x1234;    
	EPM_Data.Next_Left_Lane_C0_PosRght = 0x1234;  
	EPM_Data.Next_Left_Lane_C2_PosTRght = 0x1357 ;   
	EPM_Data.Next_Left_Lane_C3_PosTRght = 0x0034 ;     
	EPM_Data.Next_Right_Lane_C0_PosRght = 0x2660;
	#endif		 
           memcpy(arrary,&path,sizeof(PATH_TO_CONTROL_TRIG));  /*0 block*/
	   memcpy(arrary+16,&EPM_Data,sizeof(EPM_TO_CONTROL_TRIG));/*1-5 block*/
	    memcpy(arrary+96,&Map,sizeof(MAPMOTION_TRIG));/*6 block*/
		five_time_send++;
	   if(five_time_send > 5)
	   {
	   	five_time_send = 7;
	   for(uint8_t i=0;i<7;i++)
	   {
           
  	      transmit_message(CMD_W,message,i);  
	      SPI_Transfer(V850_channel, send_msg, rcv_msg,20);
		  #if 0
	     printf("SPI send ...");		
	    for(uint8_t j=0;j<20;j++)			
	    {			       			         
	      printf("  %x ",send_msg[j]);			        
	      send_msg[j]  = 0x00;					   			
	    }			
	     printf("\n");			
	    
	   #endif
   	       usleep(300);	
	   }
             transmit_message(CMD_R_T,message,7);  
	     SPI_Transfer(V850_channel, send_msg, rcv_msg,20);
	     usleep(300);	
	    transmit_message(CMD_R_R,message,7);  
	     SPI_Transfer(V850_channel, send_msg, rcv_msg,20);
	    printf("SPI receive ...");		
	    for(uint8_t j=0;j<20;j++)			
	    {			        
	   	printf("  %x ",rcv_msg[j]);				
		 			
	}		 			
	   printf("\n");
             for(uint8_t j=0;j<8;j++)
             	{
             	   uint8_t temp1 =(0xFF<<(j+1));
		  uint8_t  temp3 =  temp1 >>(j+1);
		   uint8_t temp2 = 0xFF <<(7-j);	
		 //  printf("temp3 = %x temp2= %x\n", temp3,temp2);
             	      for(uint8_t n=0;n<19;n++)
             	      	{
             	      	       shift_rcv_msg[j][n] = ((rcv_msg[n] &temp3)<<(j+1))  |(( rcv_msg[n+1] &temp2)>>(7-j));
			  //   printf("%x  ",shift_rcv_msg[j][n]);
				
             	      	}
			    printf("\n");  
		         if((0 == CRC8_function(&shift_rcv_msg[j][0],19)) && (shift_rcv_msg[j][0] == 0xCC) &&(shift_rcv_msg[j][4] == 0xCC))
				{
				   motion.DrvBrkEng = shift_rcv_msg[j][1];
	                           motion.ResSwAct = shift_rcv_msg[j][2];
	                           motion.EPS_Status = shift_rcv_msg[j][3];
				    printf("DrvBrkEng = %x ResSwAct= %x EPS_Status= %x\n", motion.DrvBrkEng,motion.ResSwAct,motion.EPS_Status);
				   break;
				}
				
             	         
             	}
		
	   	}
	    
	   Set_MotionOutput(motion);
	 	#ifdef  SPI_DEBUG_PRINTF 
				clock_gettime(CLOCK_MONOTONIC, &ts);
				uint64_t   period = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
			         printf("SPI  function time =  %ld\n",period -time);
			       #endif
	  }
	  
     }
 
	
}





