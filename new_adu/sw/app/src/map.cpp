#include "CLinuxMutex.h"
#include "map.h"
#include "COperatingSystemFactory.h"
#include "CLinuxTimer.h"
#include "CLinuxMsgQueue.h"
#include "CLinuxMsgQueuet.h"
#include <time.h>
#include <sys/prctl.h>
#include "cyclequeue.h"
#include "inter_comm.h"


/* Include Files */
extern "C" {
#include "RTK_M2S.h"
#include "M2S_Map.h"
#include "hal_can.h"
#include "CodeGen_LaneMarkMessage.h"
#include "CodeGen_LaneMessage.h"
#include "CodeGen_PositionMessage.h"
#include "CodeGen_ProfileLongMessage.h"
#include "CodeGen_ProfileShortMessage.h"
#include "CodeGen_RTKMessage.h"
#include "CodeGen_SegmentMessage.h"
#include "CodeGen_StubMessage.h"
#include "CodeGen_TrafficSignMessage.h"
#include "CodeGen_LanInfoSys.h"
#include "CodeGen_TrackProc.h"
}
cycleQueue<double>QEGOLANE(3);
cycleQueue<MAPOUTPUT_TRIG> QMAP(3);
cycleQueue<MAPMOTION_TRIG> QMAPMOTION(3);
EXTERN_VAR CLinuxMsgQueuet *qmap;
EXTERN_VAR RTK_TRIG  rtk;
EXTERN_VAR MAP_TIMESTAMP timestamp;	
extern int s_can[2];


/**
*@brief  output  egolane to cyclequeue
*param : double egolane -- output data
*/

void Set_Egolane_Output(double  egolane)
{
   QEGOLANE.push(egolane);
}
/**
*@brief  get  egolane from cyclequeue
*param : double egolane-- get data
*/

void Get_Egolane_Output(double  *egolane)
{
   QEGOLANE.pop(egolane);
  
}


/**
*@brief  output  map resulte to cyclequeue
*param : MAPOUTPUT_TRIG -- output data
*/

void Set_MapOutput(MAPOUTPUT_TRIG value)
{
   QMAP.push(value);
  }
/**
*@brief  get  map data from cyclequeue
*param : MAPOUTPUT_TRIG -- output data
*/

void Get_MapOutput(MAPOUTPUT_TRIG *value)
{
   QMAP.pop(value);
  
}

/**
*@brief  output  map -> motion resulte to cyclequeue
*param : MAPMOTION_TRIG -- output data
*/

void Set_MapMotion(MAPMOTION_TRIG value)
{
    QMAPMOTION.push(value);
}

/**
*@brief  get  map -> motion resulte from cyclequeue
*param : MAPMOTION_TRIG -- output data
*/

void Get_MapMotion(MAPMOTION_TRIG *value)
{
    QMAPMOTION.pop(value);
}

void map_handler_func(sigval_t v)
{
    
   	qmap->p_timer->os_timer_handler(pthread_task[map_taskid].task_id);
   	
}

MapThread::MapThread(const char *m_name):
CThread(m_name)
{

	unsigned char i;
	for(i=0; i< TASK_NUM;i++ )
		{
		  if(0 == strcmp(m_name,pthread_task[i].task_name))
		  	{
		  	    task_id = pthread_task[i].task_id;
				task_event = pthread_task[i].task_event;
				break;
		  	}
		}
	
	

}



MapThread::~MapThread()
{

}

void MapThread::mainLoop()
{
    
	  prctl(PR_SET_NAME,pthread_task[task_id].task_name);
	// printf("map tid is =%ld\n",gettid());
	   cpu_set_t mask;
        CPU_ZERO(&mask);
        CPU_SET(2, &mask); 
          if (pthread_setaffinity_np(pthread_self(), sizeof(mask), &mask) < 0) {
            perror("pthread map\n");
        }
	unsigned char data[5] = {0,10,0,10,3};
	os_event_type event_mask;
	FUSING_OUTPUT_TRIG Fusing_to_map;
	MAPMOTION_TRIG Map_to_motion;
	MAPOUTPUT_TRIG  MapToPath;
	uint8_t period_20ms = 0;
	rtk.ytime_GPGLL = 0.00000000;
	uint8_t p_msg[170]={0};
	 double EgoLane_Index = 0.0;
 	 uint32_t pretime=0;
	 int read_nbytes = 0;
	  int write_nbytes = 0;
	 GENERAL_STATUS  STATUS_Data;
	 SPEED_AND_DISTANCE  Speed_Data;
	  struct can_frame write_frame;	
	  struct can_frame read_frame;	
	 Initsocketcan("can1");
	 CodeGen_LaneMarkMessage_initialize( );
	 CodeGen_LaneMessage_initialize( );
	CodeGen_PositionMessage_initialize();
	 CodeGen_ProfileLongMessage_initialize();
	 CodeGen_ProfileShortMessage_initialize();
	 CodeGen_RTKMessage_initialize( );
	CodeGen_SegmentMessage_initialize();
	CodeGen_StubMessage_initialize();
	CodeGen_TrafficSignMessage_initialize();
	CodeGen_LanInfoSys_initialize( );
	CodeGen_TrackProc_initialize( );
        qmap->p_timer->os_timer_create(task_id);
	qmap->p_timer->set_timerspec(data);
	qmap->p_timer->os_timer_start( );


while(1)
{
		 
		  event_mask = qmap->p_timer->pt_mutex->os_event_wait(task_id); 
		    if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
		    {
		      event_mask &= ~NEW_MESSAGE_EVENT;
			    
		       
		         while(qmap->recvMsg(task_id, p_msg,sizeof(p_msg)))
			 {
			    Analys_RTK((char*)p_msg,sizeof(p_msg));
			    
		         }
			     
		    }
		
		  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
		  {
		  	   event_mask &= ~PERDIOC_TIMER_EVENT;
			   	    					  struct timespec tks;
		 clock_gettime(CLOCK_MONOTONIC, &tks);
	         uint32_t ktime = tks.tv_sec * 1000 + tks.tv_nsec / 1000000;	
			 if((ktime-pretime)!=10)
			 	{
		printf("....map time = %d\n",ktime-pretime);
			 	}
		pretime =  ktime;
			   #ifdef  MAP_DEBUG_PRINTF 
		
			struct timespec ts;
	         clock_gettime(CLOCK_MONOTONIC, &ts);
				 uint64_t time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
              #endif
			  period_20ms++;
			  if(period_20ms >=2)
			  {
			      period_20ms = 0;
				  
				  write_frame.can_dlc = 8;
				  write_frame.can_id =  0x262;
				  for(int i=0;i<6;i++)
				  {
				      PPS_PosLong_u.PPS_PosLong_Buffer[i] = i+2;
				  }
				  memcpy(&write_frame.data[0],PPS_PosLong_u.PPS_PosLong_Buffer,6);
				 write_nbytes = write_canFrame(s_can[1], &write_frame, sizeof(write_frame));
				
			   if(write_nbytes != sizeof(write_frame))
			   {
			      // printf("can1 write error\n");
			   }
			         write_frame.can_dlc = 8;
				  write_frame.can_id =  0x261;
				    for(int i=0;i<6;i++)
				  {
				      PPS_PosLat_u.PPS_PosLat_Buffer[i] = i+5;
				  }
				  memcpy(&write_frame.data[0],PPS_PosLat_u.PPS_PosLat_Buffer,6);
				 write_nbytes = write_canFrame(s_can[1], &write_frame, sizeof(write_frame));
			   if(write_nbytes != sizeof(write_frame))
			   {
			       //printf(".......can1 write error\n");
			   }
			  }
         Get_FusingOutput(&Fusing_to_map);

	/*decode  canid 501 */
         Get_StatusOutput(&STATUS_Data);
         Analy_Map(&STATUS_Data.temp_buffer[0]);
      
	/*decode  canid 1001 */
        Get_SpeedOutput(&Speed_Data);
	  Analy_Map(&Speed_Data.temp_buffer[0]);	 
		
    while((read_nbytes = read_canFrame(s_can[1], &read_frame, sizeof(read_frame)))>0) //接收报文
      {   
             
             uint8_t pcan[13] ={0}; 
	         struct timespec maps;
		 clock_gettime(CLOCK_MONOTONIC, &maps);
	         uint32_t recvtime = maps.tv_sec * 1000 + maps.tv_nsec / 1000000;
		pcan[0]	=   read_frame.can_dlc;
		pcan[1]	=  (read_frame.can_id >>24) & 0xFF;
		pcan[2]	=  (read_frame.can_id >>16) & 0xFF;
		pcan[3]	=  (read_frame.can_id >>8) & 0xFF;
		pcan[4]	=  read_frame.can_id & 0xFF;
		memcpy(pcan+5,&read_frame.data[0],8);
	       Analy_Map(pcan);
		printf("ID = %x  DLC = %x  %x %x %x %x %x %x %x %x\n", read_frame.can_id, read_frame.can_dlc, read_frame.data[0], read_frame.data[1], read_frame.data[2],\
			read_frame.data[3], read_frame.data[4], read_frame.data[5], read_frame.data[6],read_frame.data[7]);
		switch(read_frame.can_id)
		{
		   case 0x604:
		   	 timestamp.PositionTimeCnt= recvtime;
                        CodeGen_PositionMessage_step();
		        break;
		  case 0x605:
		  	   CodeGen_SegmentMessage_step();
	              break;
	         case 0x606:
			timestamp.StubTimeCnt = recvtime;
	               CodeGen_StubMessage_step();
	             break;
		 case 0x607:
		 	timestamp.ProfileLongTimeCnt= recvtime;
	                CodeGen_ProfileLongMessage_step( );
	              break;
		  case 0x608:
		  	 timestamp.ProfileShortCnt= recvtime;
                       CodeGen_ProfileShortMessage_step( );
			break;
                  case 0x60C:
			 timestamp.LaneTimeCnt= recvtime;
	                CodeGen_LaneMessage_step( );
			break;
		   case 0x60D:
		   	   timestamp.TrafficSignTimeCnt= recvtime;
	               CodeGen_TrafficSignMessage_step();
	               break;
	            case 0x60E:
			timestamp.LaneMarkTimeCnt= recvtime;
			  CodeGen_LaneMarkMessage_step( );
			  break;
	     default:
	        	break;
			}
    	}	 
 
  if((ytime_GPGGA>-1E-8) && (ytime_GPGGA<1E-8))
      	{
      	    // printf("don't accept rtk infomation\n");
      	}
  else
  	{
  	         rtk.ylat = ylat;
		 rtk.ylon = ylon;
                 rtk.ytime_GPGLL = ytime_GPGGA;
  	}

  if((ytime_GPHPR>-1E-8) && (ytime_GPHPR<1E-8))
      	{
      	    // printf("don't accept rtk infomation\n");
      	}
  else
  	{
  	        
	     rtk.ycrouse_range = ycrouse_range;
	         
  	}
     	
	
	CodeGen_RTKMessage_step( );
        CodeGen_LanInfoSys_step( );
	CodeGen_TrackProc_step( );
	EgoLane_Index = Lane_NumInfo[1];  /*local lane*/
      if((rtk.ytime_GPGLL>-1E-8) && (rtk.ytime_GPGLL<1E-8))
      	{
      	    // printf("don't accept rtk infomation\n");
      	}
	  else
	  {
	Set_Egolane_Output(EgoLane_Index);
         // printf("map set egolane =%lf\n",EgoLane_Index);
         memcpy(&MapToPath.Lane_NumInfo[0],Lane_NumInfo, 3);
	 memcpy(&MapToPath.End_Point, End_Point,4);
	 memcpy(&MapToPath.Navi_InfoTurn,Navi_InfoTurn,28);
         memcpy(&MapToPath.outLine_ShapeInfo,outLine_ShapeInfo,100);
	 memcpy(&MapToPath.VehicleState,VehicleState,8);
	 Set_MapOutput(MapToPath);
	Map_to_motion.VehicleOffset_Now = VehicleOffset_Now;
	Map_to_motion.PreviewDistance    = PreviewDistance;             
        Map_to_motion.PreviewLateralDistance = PreviewLateralDistance;       
        Map_to_motion.TrackerLateralError =  TrackerLateralError;         
        Map_to_motion.Final_a = Final_a;                       
        Map_to_motion.End_Flag = End_Flag;                      
       Set_MapMotion(Map_to_motion);
	  }
      #ifdef  MAP_DEBUG_PRINTF 
				clock_gettime(CLOCK_MONOTONIC, &ts);
				uint64_t   period = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
			         printf("MAP  function time =  %ld\n",period -time);
			       #endif
		  	}
		}

	
}



