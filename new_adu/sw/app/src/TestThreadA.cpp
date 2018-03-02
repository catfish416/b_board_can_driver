#include "CLinuxMutex.h"
#include "TestThreadA.h"
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

void pthreadA_handler_func(sigval_t v)
{
    
   	MA->p_timer->os_timer_handler(pthread_task[pthreadA_taskid].task_id);
   	
}

TestThreadA::TestThreadA(const char *m_name):
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



TestThreadA::~TestThreadA()
{

}

void TestThreadA::mainLoop()
{
    #if 0
     struct timespec ts;
	 clock_gettime(CLOCK_MONOTONIC, &ts);
	 uint32_t B_time = ts.tv_sec * 1000 + ts.tv_nsec / 1000000;	
	 printf("B_time = %d\n",B_time);
     
	 #endif
	 prctl(PR_SET_NAME,pthread_task[task_id].task_name);
	uint8_t p_msg[6] = {0x00};
	unsigned char data[5] = {0,10,1,0,3};
	os_event_type event_mask;
	MA->p_timer->os_timer_create(task_id);
	MA->p_timer->set_timerspec(data);
	MA->p_timer->os_timer_start( );
	uint32_t C_data =0;
	while(1)
		{
		 
		  event_mask = 	MA->p_timer->pt_mutex->os_event_wait(task_id); 
		  if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
			{
			   event_mask &= ~NEW_MESSAGE_EVENT;
			   while(MA->recvMsg(task_id, p_msg,sizeof(p_msg)))
			  {
			      
			    	   
				  
			      
			  }
			   
			   
		  	}
		  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
		  	{
		  	   event_mask &= ~PERDIOC_TIMER_EVENT;
			   Get_E();
			   Get_F();
			   Set_A(0x0A);	
			   Set_B(0x0B);
			   C_data++;
			   Set_C(C_data);
			   Set_D(0x0D);
		  	}
		}

}



