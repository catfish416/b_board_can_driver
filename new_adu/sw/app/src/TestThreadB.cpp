#include "CLinuxMutex.h"
#include "TestThreadB.h"
#include "COperatingSystemFactory.h"
#include "CLinuxTimer.h"
#include "CLinuxMsgQueue.h"
#include "CLinuxMsgQueuet.h"
#include <time.h>
#include <sys/prctl.h>
#include "module.h"


EXTERN_VAR CLinuxMsgQueuet*MA;
EXTERN_VAR CLinuxMsgQueuet *MB;
EXTERN_VAR CLinuxMsgQueuet *MC;

    

void pthreadB_handler_func(sigval_t v)
{
    MB->p_timer->os_timer_handler(pthread_task[pthreadB_taskid].task_id);
	
}

TestThreadB::TestThreadB(const char *m_name):
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



TestThreadB::~TestThreadB()
{

}

void TestThreadB::mainLoop()
{
    #if 0
     struct timespec ts;
	 clock_gettime(CLOCK_MONOTONIC, &ts);
	 uint32_t B_time = ts.tv_sec * 1000 + ts.tv_nsec / 1000000;	
	 printf("B_time = %d\n",B_time);
    
	 #endif
	  prctl(PR_SET_NAME,pthread_task[task_id].task_name);
	uint8_t p_msg[6] = {0x00};
	unsigned char data[5] = {0,10,2,0,3};
	os_event_type event_mask;
	uint32_t F_data = 0;
	MB->p_timer->os_timer_create(task_id);
	MB->p_timer->set_timerspec(data);
	MB->p_timer->os_timer_start( );
    uint16_t CB=0;

	while(1)
		{
		 
		  event_mask = 	MB->p_timer->pt_mutex->os_event_wait(task_id); 
		   if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
			{
			   event_mask &= ~NEW_MESSAGE_EVENT;
			   while(MB->recvMsg(task_id, p_msg,sizeof(p_msg)))
			  {
			
			  }
			      
			   
			   
		  	}
		  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
		  	{
		  	  Get_A( );
			  Get_B( );
			  CB = Get_C( );
			  //printf("CB=%d\n",CB);
		  	  event_mask &= ~PERDIOC_TIMER_EVENT;
			  F_data =1;
			  Set_F(F_data);
		      F_data=2;
			  Set_F(F_data);
		      
		  	}
		}

}



