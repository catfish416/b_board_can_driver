#include "COperatingSystemFactory.h"
#include "CLinuxMutex.h"
#include "CLinuxTimer.h"


/**
*@brief  timer  construct function -- create CLinuxMutex
*param : NO
* return: NO
*/

CLinuxTimer::CLinuxTimer()  
{
   memset (&evp, 0, sizeof(evp));
   memset (&ts, 0, sizeof(ts));
   memset (&timer, 0, sizeof(timer));
  pt_mutex  = COperatingSystemFactory::newMutex();	
}

/**
*@brief  timer  destructor function  -- delete CLinuxMutex
*param : NO
* return: NO
*/

CLinuxTimer::~CLinuxTimer()
{
   delete pt_mutex;
}


/**
*@brief  create a timer for a task
*param : id 
* return: NO
*/

void CLinuxTimer::os_timer_create(unsigned char id)
{
    evp.sigev_value.sival_ptr = &timer;  
    evp.sigev_notify = SIGEV_THREAD;
    evp.sigev_notify_function = pthread_task[id].handler_func;
   int  ret = timer_create(CLOCK_REALTIME, &evp, &timer);  
    if( ret )  
        perror("timer_create");  

  
}

/**
*@brief  start a timer
*param : id 
* return: NO
*/
void CLinuxTimer::os_timer_start(void)
{
    
    int ret = timer_settime(timer, TIMER_ABSTIME, &ts, NULL);  
    if( ret )  
    perror("timer_settime");  

}

/**
*@brief  cancel a timer
*param : id 
* return: NO
*/

void CLinuxTimer::os_timer_destroy(void)
{
  	
   int ret = timer_delete(timer);  
    if( ret )  
    perror("timer_settime");

}

/**
*@brief  set  a timer period
*param : id 
* return: NO
*/

void CLinuxTimer:: set_timerspec(unsigned char *data)
{
   
    ts.it_interval.tv_sec = data[0];  
    ts.it_interval.tv_nsec = data[1]*1000000;  
    ts.it_value.tv_sec = data[2];  
    ts.it_value.tv_nsec = data[3]*1000000;
	evp.sigev_value.sival_int = data[4];
	
}

/**
*@brief   arrive a timer period 
*param : id 
* return: NO
*/

void CLinuxTimer::os_timer_handler(unsigned char id)
{
   
    pt_mutex->Lock();
	pthread_task[id].task_event |= PERDIOC_TIMER_EVENT;
	if((pthread_task[id].task_event & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
	{
      pthread_cond_signal(&pt_mutex->_cond);
  
	}
	else
	{}
	pt_mutex->UnLock();
	
	
}


