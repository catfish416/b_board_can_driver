#include "CLinuxMutex.h"
#include "pathplan.h"
#include "COperatingSystemFactory.h"
#include "CLinuxTimer.h"
#include "CLinuxMsgQueue.h"
#include "CLinuxMsgQueuet.h"
#include <time.h>
#include <sys/prctl.h>
#include "cyclequeue.h"
#include "inter_comm.h"
#include <sched.h>
extern "C"
{
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "DebugMain_terminate.h"
#include "DebugMain_initialize.h"
#include "main.h"
}




//#define  PATH_SIMULATION
EXTERN_VAR CLinuxMsgQueuet * qpath;
cycleQueue<PATH_TO_CONTROL_TRIG> QPATHPLAN(3);
cycleQueue<MOTION_OUTPUT_TRIG> QMOTION(3);
uint32_t pretime=0;

void path_plan_handler_func(sigval_t v)
{
    
   	qpath->p_timer->os_timer_handler(pthread_task[pathplan_taskid].task_id);
   	
}
/**
*@brief  output  pathplanresulte to cyclequeue
*param :PATH_TO_CONTROL_TRIG path_output
*/

void Set_PathPlanOutput(PATH_TO_CONTROL_TRIG path_output)
{
   QPATHPLAN.push(path_output);

}
/**
*@brief  get  pathplan resulte from cyclequeue
*param : PATH_TO_CONTROL_TRIG path_output
*/

void Get_PathPlanOutput(PATH_TO_CONTROL_TRIG *path_output)
{
   QPATHPLAN.pop(path_output);
			
 }
/**
*@brief  get  motion resulte from cyclequeue
*param : MAPMOTION_TRIG *motion_output
*/

void Get_MotionOutput(MOTION_OUTPUT_TRIG *motion_output)
{
   QMOTION.pop(motion_output);
			
 }

/**
*@brief  set motion  resulte to cyclequeue
*param :PATH_TO_CONTROL_TRIG motion_output
*/

void Set_MotionOutput(MOTION_OUTPUT_TRIG motion_output)
{
   QMOTION.push(motion_output);

}




PathplanThread::PathplanThread(const char *m_name):
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



PathplanThread::~PathplanThread()
{

}

void PathplanThread::mainLoop()
{
  
	  prctl(PR_SET_NAME,pthread_task[task_id].task_name);
    cpu_set_t mask;
        CPU_ZERO(&mask);
        CPU_SET(3, &mask); 

        if (pthread_setaffinity_np(pthread_self(), sizeof(mask), &mask) < 0) {
            perror("pthread pathplan error\n");
        }
#ifdef PATH_PRINTF
   FILE *file;

    if((file=fopen("/tmp/setpath_data.txt","w+")) == NULL)
    {
        printf("/tmp/setpath_data.txt open file failed\n");
        exit(0);
    }
	#endif
   FUSING_OUTPUT_TRIG Fusing;
    MAPOUTPUT_TRIG value;
   PATH_TO_CONTROL_TRIG  path;	
   MOTION_OUTPUT_TRIG motion;
    double EPS_Status = 0.0;
    double ResSwAct =0.0; 
   double DrvBrkEng =0.0;;
  double YawRate =0.0;  
  double StrWhAng =0.0;
  double TurnLight =0.0; 
      double UseFakeCIPVEn = 0.0;
  double TrigStart = 0.0;
   double TrnShutDwn  = 0.0;
   double LCShutDwn = 0.0;
   /**out put*/
    double PreviewDistance;
   double LateralDistance;
   double LateralError;
   double TargetThetaLo;
   double TargetLongitudinalSpeed;
  double LongitudinalError;
  double VePathPlan_b_InChargFlg;
  double PathPlanAvaliable;
  double PreviewTime;
   double SpeedLimit;
  double StopFlg;
  double aCal;
 
        uint8_t cal_buffer[PATH_NUM];
	unsigned char data[5] = {0,10,0,10,3};
	os_event_type event_mask;
	qpath->p_timer->os_timer_create(task_id);
	qpath->p_timer->set_timerspec(data);
	qpath->p_timer->os_timer_start( );
      	DebugMain_initialize( );
	 while(1)
    {
        
         event_mask = qpath->p_timer->pt_mutex->os_event_wait(task_id); 
	 if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
        {
           				 
			    event_mask &= ~NEW_MESSAGE_EVENT;
			  while(qpath->recvMsg(task_id, cal_buffer,sizeof(cal_buffer)))
			  {

				  UseFakeCIPVEn =  (double)cal_buffer[0];
                                  TrigStart =(double)cal_buffer[1];
                                 TrnShutDwn = (double)cal_buffer[2];
                                 LCShutDwn =(double)cal_buffer[3];
			  }
	}
			
	  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
		  	{
		  	   event_mask &= ~PERDIOC_TIMER_EVENT;
			 
	                  	 struct timespec tks;
   	 clock_gettime(CLOCK_MONOTONIC, &tks);
	         uint32_t ktime = tks.tv_sec * 1000 + tks.tv_nsec / 1000000;	
			 if((ktime-pretime)!=10)
		pretime = ktime;	
		          
     
		#ifdef  PATH_DEBUG_PRINTF	 
	      	struct timespec ts;
	         clock_gettime(CLOCK_MONOTONIC, &ts);
				 uint64_t time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
		 #endif
		         Get_FusingOutput( &Fusing);
                           YawRate = (double)Fusing.YawRate; 
                           StrWhAng = (double)Fusing.StrWhAng ;
                           TurnLight = (double)Fusing.TurnLight; 
	                Get_MapOutput(&value);
			Get_MotionOutput(&motion);
                         EPS_Status = (double)motion.EPS_Status;
                         ResSwAct =  (double)motion.ResSwAct;
                         DrvBrkEng = (double)motion.DrvBrkEng;
			
	           DebugMain(&Fusing.FusingObj[0], &value.Lane_NumInfo[0],&value.outLine_ShapeInfo[0],&value.VehicleState[0],&value.Navi_InfoTurn[28], \
                                       TrigStart,&value.End_Point[0],EPS_Status,ResSwAct, DrvBrkEng,YawRate,StrWhAng,TurnLight,TrnShutDwn,LCShutDwn, UseFakeCIPVEn, \
                                      &PreviewDistance, &LateralDistance, &LongitudinalError, &LateralError, &TargetLongitudinalSpeed, &VePathPlan_b_InChargFlg,         
                                     &TargetThetaLo, &PreviewTime, &PathPlanAvaliable, &SpeedLimit, &StopFlg, &aCal);		   
			#ifdef  PATH_DEBUG_PRINTF	
			clock_gettime(CLOCK_MONOTONIC, &ts);
				uint64_t   period = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
			#endif		 
	  path.PreviewDistance = ( int16_T)(PreviewDistance *100);
	  path.LateralDistance =( int16_T)(LateralDistance*100);
	  path.LateralError  = (int16_T) (LateralError*100);
          path.TargetOrientationAngle =( int16_T) (TargetThetaLo*100);
          path.TargetLongitudinalSpeed= (uint16_T)(TargetLongitudinalSpeed*100);
          path.LongitudinalError  = (int16_T) (LongitudinalError*100);
          path.Pre_bit.PathPlanControl  = (uint8_T)VePathPlan_b_InChargFlg;
          path.Pre_bit.PathPlanAvaliable = (uint8_T)PathPlanAvaliable;
	  path.Pre_bit.PreviewTime =  (uint16_T)(PreviewTime*100);
          path.SpeedLimit=(uint16_T) (SpeedLimit*100);

	#if 0
            path.Pre_bit.PreviewTime = 0x32;
	  path.Pre_bit.PathPlanControl = 0x01;
	  path.Pre_bit.PathPlanAvaliable = 0x01;
	  path.SpeedLimit = 230;
	  path.TargetLongitudinalSpeed = 250;
	  path.LongitudinalError = -20;
	  path.PreviewDistance = -30;
	  path.LateralDistance = -40;
	  path.LateralError = -50;
	  path.TargetOrientationAngle = -60;
	#endif
         Set_PathPlanOutput(path);   
		 #ifdef PATH_PRINTF
		  fprintf(file,"PreviewTime = %d\r\n ",path.Pre_bit.PreviewTime);
 fprintf(file,"PathPlanControl = %d\r\n ",path.Pre_bit.PathPlanControl);
 fprintf(file,"PathPlanAvaliable = %d\r\n ",path.Pre_bit.PathPlanAvaliable);
fprintf(file,"SpeedLimit = %d\r\n ",path.SpeedLimit);
fprintf(file,"TargetLongitudinalSpeed = %d\r\n ",path.TargetLongitudinalSpeed);
fprintf(file,"LongitudinalError = %d\r\n ",path.LongitudinalError);
fprintf(file,"PreviewDistance = %d\r\n ",path.PreviewDistance);
fprintf(file,"LateralDistance = %d\r\n ",path.LateralDistance);
fprintf(file,"LateralError = %d\r\n ",path.LateralError);
fprintf(file,"TargetOrientationAngle = %d\r\n ",path.TargetOrientationAngle);
   #endif

		  	}

	}
	DebugMain_terminate( );

}





