#include "CLinuxMutex.h"
#include "TestThreadC.h"
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


void pthreadC_handler_func(sigval_t v)
{
    
     MC->p_timer->os_timer_handler(pthread_task[pthreadC_taskid].task_id);  
   
}

TestThreadC::TestThreadC(const char *m_name):
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



TestThreadC::~TestThreadC()
{

}

void TestThreadC::mainLoop()
{
    #if 0
     struct timespec ts;
	 clock_gettime(CLOCK_MONOTONIC, &ts);
	 uint32_t B_time = ts.tv_sec * 1000 + ts.tv_nsec / 1000000;	
	 printf("B_time = %d\n",B_time);
     
	 #endif
	 prctl(PR_SET_NAME,pthread_task[task_id].task_name);
	uint8_t p_msg[6]={0x00};
	unsigned char data[5] = {0,20,1,0,3};
	os_event_type event_mask;
	uint32_t E_data =0;
	
	MC->p_timer->os_timer_create(task_id);
	MC->p_timer->set_timerspec(data);
	MC->p_timer->os_timer_start( );
	

	while(1)
		{
		 
		  event_mask = MC->p_timer->pt_mutex->os_event_wait(task_id); 
		   if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
			{
			   event_mask &= ~NEW_MESSAGE_EVENT;
			   while(MC->recvMsg(task_id, p_msg,sizeof(p_msg)))
			  {
			   
			  }
			    
			   
			   
		  	}
		  if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
		  	{
		  	event_mask &= ~PERDIOC_TIMER_EVENT;
			Get_D( );
			E_data++;
			Set_E(E_data);
			E_data++;;
		    Set_E(E_data);
			E_data++;
			Set_E(E_data);
			E_data++;
			Set_E(E_data);
			E_data++;;
		    Set_E(E_data);
			E_data++;
			Set_E(E_data);
			
			
		  	}
		}

}



