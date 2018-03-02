#include "CLinuxMutex.h"
#include "COperatingSystemFactory.h"
#include "CLinuxMsgQueuet.h"
#include "CLinuxTimer.h"
#include "data_fusing.h"
#include <sys/prctl.h>
#include "cyclequeue.h"
#include "inter_comm.h"

extern "C" {
#include "EPM_Driver_Fcn.h"
#include "ESR_Driver_Fcn.h"
#include "ESR_CoorAlig_Fcn.h"
#include "Camera_DataGen_Fcn.h"
#include "GlobalFusion_Fcn.h"
#include "EPM_Ln_ObjGenFcn.h"
#include "SRR_Driver_Fcn_20ms.h"
#include "SRR_Driver_Fcn_100ms.h"
#include "LFSRR_DataGen_Fcn.h"
#include "LRSRR_DataGen_Fcn.h"
#include "RFSRR_DataGen_Fcn.h"
#include "RRSRR_DataGen_Fcn.h"
#include "SideFusion_Fcn.h"
#include "SideOccupy_Fcn.h"
#include "interface.h"
}

EXTERN_VAR CLinuxMsgQueuet *qfusing_rev;
EXTERN_VAR CLinuxMsgQueuet *qeth_rev;
EXTERN_VAR FUSING_OUTPUT_TRIG Fusing_output;
FUSING_TRIG trggier[TRIG_NUM];
/*Camera */
EXTERN_VAR real_T Camera_Data[200];



/*ESR */
EXTERN_VAR real_T ESR_Data[256] ;
cycleQueue<FUSING_OUTPUT_TRIG> QFUSING(3);
cycleQueue<SIDEOCC> QSIDEOCC(3);
cycleQueue<EPM_TO_CONTROL_TRIG>QEPM(3);
cycleQueue<GENERAL_STATUS>QSTATUS(3);
cycleQueue<SPEED_AND_DISTANCE>QSPEED(3);

/**
*@brief   send driver to ESR or Camera
*param 1:FUSING_PORT_T port -- can port
*param 2:uint32_t canid -- can id
*param 3:uint8_t *Send_buffet -- send buffer  to CAN port
*param 4:uint8_t buffer_size-- send buffer size
* return: NO
*/

void Fusing_to_CanMsg(FUSING_PORT_T port,uint32_t canid,uint8_t *Send_buffer,uint8_t buffer_size)
{
   uint8_t p_msg[14] = {0};
   p_msg[0] = port;
   p_msg[1] = 8;
   p_msg[2] = canid >> 24;
   p_msg[3] = (canid >> 16)& 0xFF;
   p_msg[4] = (canid >> 8)& 0xFF;
   p_msg[5] = canid & 0xFF;
  for(uint8_t i=0;i<buffer_size;i++)
  {
	p_msg[6+i] = Send_buffer[i]; 
  }
  qeth_rev->sendMsg(eththread_taskid,p_msg,14);
}

/**
*@brief  output  data fusing resulte to cyclequeue
*param : FUSING_OUTPUT_TRIG Fusing -- output data
*/

void Set_FusingOutput(FUSING_OUTPUT_TRIG Fusing)
{
   QFUSING.push(Fusing);
  
}
/**
*@brief  get  data fusing resulte from cyclequeue
*param : FUSING_OUTPUT_TRIG Fusing -- output data
*/

void Get_FusingOutput(FUSING_OUTPUT_TRIG* Fusing)
{
   QFUSING.pop(Fusing);
   
}

/**
*@brief  EPM data resulte to cyclequeue
*param : FUSING_OUTPUT_TRIG Fusing -- output data
*/

void Set_SideOccOutput(SIDEOCC Data)
{
   QSIDEOCC.push(Data);
  
}
/**
*@brief  get  data fusing resulte from cyclequeue
*param : FUSING_OUTPUT_TRIG Fusing -- output data
*/

void Get_SideOccOutput(SIDEOCC* Data)
{
   QSIDEOCC.pop(Data);
 }


/**
*@brief  output  side occupy data resulte to cyclequeue
*param : EPM_TO_CONTROL_TRIG  EPM_Data;
*/

void Set_EPMOutput(EPM_TO_CONTROL_TRIG  EPM_Data)
{
   QEPM.push(EPM_Data);
   
}
/**
*@brief  get  EPM resulte from cyclequeue
*param : EPM_TO_CONTROL_TRIG  EPM_Data
*/

void Get_EPMOutput(EPM_TO_CONTROL_TRIG * EPM_Data)
{
   QEPM.pop(EPM_Data);

}

/**
*@brief general status 2 resulte to cyclequeue
*param : GENERAL_STATUS  STATUS_Data;
*/

void Set_StatusOutput(GENERAL_STATUS  STATUS_Data)
{
   QSTATUS.push(STATUS_Data);
   
}
/**
*@brief  get  general status 2 resulte from cyclequeue
*param : GENERAL_STATUS * STATUS_Data
*/

void Get_StatusOutput(GENERAL_STATUS * STATUS_Data)
{
   QSTATUS.pop(STATUS_Data);

}

/**
*@brief Speed and distance resulte to cyclequeue
*param : SPEED_AND_DISTANCE  Speed_Data
*/

void Set_SpeedOutput(SPEED_AND_DISTANCE  Speed_Data)
{
   QSPEED.push(Speed_Data);
   
}
/**
*@brief  get  Speed and distance resulte from cyclequeue
*param : SPEED_AND_DISTANCE * Speed_Data
*/

void Get_SpeedOutput(SPEED_AND_DISTANCE * Speed_Data)
{
   QSPEED.pop(Speed_Data);

}

/**
*@brief   after timer arrive  enter this function
*param : sigval_t v -- signal value
* return: NO
*/
uint32_t fusingtime = 0;
void Fusingthread_handler_func(sigval_t v)
{
   
	qfusing_rev->p_timer->os_timer_handler(pthread_task[fusingthread_taskid].task_id);
		 			 
}


/**
*@brief  FusingThread construct function -- acquire task id and task event
*param : m_name -- thread name
* return: NO
*/

FusingThread::FusingThread(const char *m_name):
CThread(m_name)
{
   
	for(uint8_t i=0; i<TASK_NUM;i++ )
		{
		  if(0 == strcmp(m_name,pthread_task[i].task_name))
		  	{
		  	    task_id = pthread_task[i].task_id;
				task_event = pthread_task[i].task_event;
				break;
		  	}
		}


}


/**
*@brief  FusingThread deconstruct function 
*param :NO
* return: NO
*/

FusingThread::~FusingThread()
{

}

/**
*@brief  Fusing handle function 
*param :NO
* return: NO
*/
uint16_t period_1s =0;
void FusingThread::mainLoop()
{


	prctl(PR_SET_NAME,pthread_task[task_id].task_name);
	os_event_type event_mask;
	GENERAL_STATUS status;
	SPEED_AND_DISTANCE speed_distance;
	uint8_t p_msg[18] = {0};
	uint8_t  data[5] = {0,10,0,10,3};
	uint32_t CAN_ID = 0;
	uint8_t period_20ms = 0;
	uint8_t period_100ms = 0;
	
       	  LFSRR_Side_initialize( );  
	  LRSRR_Side_initialize( );  
	  RFSRR_Side_initialize( );  
	  RRSRR_Side_initialize( );  
	  Gobal_Side_initialize( );
	  Glbal_Data_initialize( );
	  Camera_Global_initialize();
	  ESR_Global_initialize();
	ESR_CoorAlig_Fcn_initialize( );
	EPM_Driver_Fcn_initialize( );
	ESR_Driver_Fcn_initialize( );
	SRR_Driver_Fcn_20ms_initialize( );
	SRR_Driver_Fcn_100ms_initialize( );
	Camera_DataGen_Fcn_initialize( );
	LFSRR_DataGen_Fcn_initialize();
	LRSRR_DataGen_Fcn_initialize();
	RFSRR_DataGen_Fcn_initialize();
	RRSRR_DataGen_Fcn_initialize();
	GlobalFusion_Fcn_initialize( );
	EPM_Ln_ObjGenFcn_initialize( );
	SideOccupy_Fcn_initialize( );
	
	qfusing_rev->p_timer->os_timer_create(task_id);
	qfusing_rev->p_timer->set_timerspec(data);
	qfusing_rev->p_timer->os_timer_start( );
	
	memset(trggier,0,sizeof(FUSING_TRIG)*TRIG_NUM);
	while(1)
		{
		    
            event_mask = 	qfusing_rev->p_timer->pt_mutex->os_event_wait(task_id); 
		   	
			if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
			{
			   event_mask &= ~NEW_MESSAGE_EVENT;
			   
			  while(qfusing_rev->recvMsg(task_id, p_msg,sizeof(p_msg)))
			  {
			     
			     switch(p_msg[0]) //signal_port
			     {
			         case ETH_V2X:
					 	  break;
     	             case ETH_CAN1:
					 	  
					 	  CAN_ID = Analy_Can1(p_msg+5); /*can frame*/
						  if(CAN_ID == 0x53F ) /*ESR trigger*/
						  {
                                                     printf("can1 id = %x\n",CAN_ID);
						    trggier[ESR_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
							trggier[ESR_ID].flag = true;
						  }
						 else if(CAN_ID == 0x4AA )/*SRR_LF trigger*/
						 {
						      //printf("can1 id = %x\n",CAN_ID);
						    trggier[SRR_LF_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
							trggier[SRR_LF_ID].flag = true;
						 }
						 else
						 {
						 }
					 	  break;
		             case ETH_CAN2:
					 	 CAN_ID = Analy_Can2(p_msg+5); /*can frame*/
						
						 if(CAN_ID == 0x4AA )/*SRR_RR trigger*/
						 {
						      printf("can2 id = %x\n",CAN_ID);
						    trggier[SRR_RR_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
							trggier[SRR_RR_ID].flag = true;
						 }
						 else if(CAN_ID == 501 )
						 {
						        memcpy(&status.temp_buffer[0],&p_msg[5],13);
							Set_StatusOutput(status);
						 }
						 else if(CAN_ID == 1001 )
						 {
						    memcpy(&speed_distance.temp_buffer[0],&p_msg[5],13);
						    Set_SpeedOutput(speed_distance);
						 }
						 else
						 	{}
					 	  
					 	  break;
		             case ETH_CAN3:
					 	CAN_ID = Analy_Can3(&p_msg[5]); /*can frame*/
						  if(CAN_ID == 0x756 ) /*cammera trigger*/
						  {
                                                       printf("can3 id = %x\n",CAN_ID);
						    trggier[CAMERA_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
							trggier[CAMERA_ID].flag = true;
							
							
						  }
						 else if(CAN_ID == 0x4AA )/*SRR_RF trigger*/
						 {
						    //  printf("can3 id = %x\n",CAN_ID);
						    trggier[SRR_RF_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
							trggier[SRR_RF_ID].flag = true;
						 }
						 else
						 {
						 }
					 	  break;
		             case ETH_CAN4:
					 	CAN_ID = Analy_Can4(&p_msg[5]); /*can frame*/
						
						if(CAN_ID == 0x4AA )/*SRR_LR trigger*/
						 {
						   printf("can4 id = %x\n",CAN_ID);
						    trggier[SRR_LR_ID].time_stamp = (p_msg[1]<< 24) | (p_msg[2]<< 16) | (p_msg[3] <<8) | p_msg[4];
						   trggier[SRR_LR_ID].flag = true;
						 }
						 else
						 {
						 }
					 	break;
    	             case ETH_GPS:
					 	 break;
			     }
			  }
          
			
			  
			}
			if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT) /*10ms*/
			{
				    event_mask &= ~PERDIOC_TIMER_EVENT;
				 struct timespec tks;
		 clock_gettime(CLOCK_MONOTONIC, &tks);
	         uint32_t ktime = tks.tv_sec * 1000 + tks.tv_nsec / 1000000;	
			 if((ktime-fusingtime) !=10)
		  printf("....fusing period time = %d\n",ktime-fusingtime);
		fusingtime =  ktime;
         
		
			  #ifdef  FUSING_DEBUG_PRINTF 
		
		struct timespec ts;
	         clock_gettime(CLOCK_MONOTONIC, &ts);
				 uint64_t time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
		#endif
				period_20ms++;
				period_100ms++;
				period_1s++;

				   if(period_100ms>=10)/*100ms*/
			    {
			      /*send to camera message*/
				  period_100ms=0;
				  SRR_Driver_Fcn_100ms_step();
				  Fusing_to_CanMsg(ETH_CAN1,0xa1,F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Buffer,7);
				  Fusing_to_CanMsg(ETH_CAN2,0xa1,F_Master_Time_Sync_RR_u.F_Master_Time_Sync_RR_Buffer,7);
				  Fusing_to_CanMsg(ETH_CAN3,0xa1,F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Buffer,7);
				  Fusing_to_CanMsg(ETH_CAN4,0xa1,F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Buffer,7);

                                   Fusing_to_CanMsg(ETH_CAN1,0x310,Body_Info_FOB_LR_u.Body_Info_FOB_LR_Buffer,6);
			           Fusing_to_CanMsg(ETH_CAN2,0x310,Body_Info_FOB_RR_u.Body_Info_FOB_RR_Buffer,6);
				   Fusing_to_CanMsg(ETH_CAN3,0x310,Body_Info_FOB_RF_u.Body_Info_FOB_RF_Buffer,6);
				   Fusing_to_CanMsg(ETH_CAN4,0x310,Body_Info_FOB_LF_u.Body_Info_FOB_LF_Buffer,6);
								   
				  
				  
			    }
			  else{}
				if(period_20ms>=2) /*20ms*/
				{
				   /*send to SRR message*/
				  period_20ms = 0;
				  EPM_Ln_ObjGenFcn_step( );
			    	  EPM_Driver_Fcn_step( );
				  Fusing_to_CanMsg(ETH_CAN3,0x550,Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Buffer,7);
                                  ESR_Driver_Fcn_step( );
				  Fusing_to_CanMsg(ETH_CAN1,0x4F0,Vehicle1_u.Vehicle1_Buffer,8);
				  SRR_Driver_Fcn_20ms_step();
				  Fusing_to_CanMsg(ETH_CAN1,0x306,F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Buffer,8);
				  Fusing_to_CanMsg(ETH_CAN2,0x306,F_Vehicle_Path_Estimate_RR_u.F_Vehicle_Path_Estimate_RR_Buffer,8);
			          Fusing_to_CanMsg(ETH_CAN3,0x306,F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Buffer,8);
			          Fusing_to_CanMsg(ETH_CAN4,0x306,F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Buffer,8);

			          Fusing_to_CanMsg(ETH_CAN1,0x308,F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Buffer,7);
			          Fusing_to_CanMsg(ETH_CAN2,0x308,F_Vehicle_Path_Data_2_RR_u.F_Vehicle_Path_Data_2_RR_Buffer,7);
				  Fusing_to_CanMsg(ETH_CAN3,0x308,F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Buffer,7);
				  Fusing_to_CanMsg(ETH_CAN4,0x308,F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Buffer,7);
				 // Fusing_to_CanMsg(ETH_GPS,0x308,F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Buffer,7);
			        Set_EPMOutput(epm_data);	 
		 

				
				   
				}
				else
				{}
		
			
				 Get_Egolane_Output(&Ego_lane);
				// printf("fusing get ego lane =%lf\n",Ego_lane);
				 ESR_CoorAlig_Fcn_step( );
				 trggier[ESR_ID].flag = false;
				 Camera_DataGen_Fcn_step( );
				 trggier[CAMERA_ID].flag = false;
				 LFSRR_DataGen_Fcn_step( );
				  trggier[SRR_LF_ID].flag = false;
				  LRSRR_DataGen_Fcn_step( );
	                          trggier[SRR_LR_ID].flag = false;
				  RFSRR_DataGen_Fcn_step( );
				  trggier[SRR_RF_ID].flag = false;
				   RRSRR_DataGen_Fcn_step( );
				  trggier[SRR_RR_ID].flag = false;
				   SideFusion_Fcn_step( );
				 GlobalFusion_Fcn_step( );
				 	  if(period_1s >= 200)
                           {
                           	period_1s =0;

			#if 0 // ouyang debug
				for(int m=0; m<3302;m++)
					Fusing_output.FusingObj[m] = m;
				static unsigned short n =0;  n++;
				Fusing_output.TagetNum= n;
		                PrintLog (fusingthread_taskid,3,__LINE__,"%f0000\0\0", (char*)&Fusing_output.FusingObj[0], 3302*sizeof(double)) ;  
				PrintLog (fusingthread_taskid,3,__LINE__,"%d0000\0\0", (char*)&Fusing_output.TagetNum, sizeof(uint16_t)) ; 
			#endif  
				 /*
				printf("Camata\n");
				for(unsigned int i=0;i<200;i++)
				{ 
				      printf(" -%.2f",Camera_Data[i]);
					  if((i+1)%25 == 0)
					  {
					       printf("\n");
					  }
				}
                                	printf("ESR Data\n");
				for(unsigned int i=0;i<256;i++)
				{ 
				      printf(" -%.2f",ESR_Data[i]);
					  if((i+1)%64 == 0)
					  {
					       printf("\n");
					  }
				}

		  for(unsigned int i=0;i<635;i++)
			      {

                                   printf("  %.2f",Fusing_output.FusingObj[i]);
			            if((i+1)%127 == 0)
			            {
			                 printf("\n");  
			            }

				}*/
				
				// printf("Fusing_output.TagetNum=%d\n",Fusing_output.TagetNum);
			}
						   
			
				 Clear_Global_Fus_Con( );
			
				  SideOccupy_Fcn_step( );
			         Fusing_output.YawRate = Get_PPEI_Chassis_General_Status_1_VehDynYawRate( ); 
                                Fusing_output.StrWhAng = Get_PPEI_Steering_Wheel_Angle_StrWhAng( );
                               Fusing_output.TurnLight =  Get_Exterior_Lighting_PB_TrnSwAct( ); 
				 Set_FusingOutput(Fusing_output);
		
				// Set_SideOccOutput(SideOcc_output);

		
                             			 
		                   #ifdef  FUSING_DEBUG_PRINTF 
				clock_gettime(CLOCK_MONOTONIC, &ts);
				uint64_t   period = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
			         printf("FUSING  function time =  %ld\n",period -time);
			       #endif

				}
	
		}
         
}
