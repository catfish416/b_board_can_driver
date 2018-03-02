#include "CLinuxMutex.h"
#include "COperatingSystemFactory.h"

/**
*@brief  mutex  construct function-- init pthread_t,pthread_mutex_t,pthread_cond_t,pthread_mutexattr_t
*param : NO
* return: NO
*/

CLinuxMutex::CLinuxMutex( )
{

	m_thread = (pthread_t) 0;

    	pthread_mutexattr_init(&m_mtex_attr);
    	if (pthread_mutexattr_settype(&m_mtex_attr, PTHREAD_MUTEX_ERRORCHECK_NP))
        	printf("CLinuxMutex::CnlLinuxMutex() : Failed to set mutex attibutes\n");
               

   	 pthread_mutex_init(&m_mutex, &m_mtex_attr);
     pthread_cond_init(&_cond, NULL);
    
    
}

/**
*@brief  mutex  destructor function-- detele pthread_cond_t
*param : NO
* return: NO
*/

CLinuxMutex::~CLinuxMutex()
{
   pthread_cond_destroy(&_cond);
 
}

/**
*@brief  mutex  lock
*param : NO
* return: true or false
*/

void CLinuxMutex::Lock(void)
{

 pthread_mutex_lock(&m_mutex);
 
}

/**
*@brief  mutex  unlock
*param : NO
* return: true or false
*/

 void CLinuxMutex::UnLock(void)
{
		
    pthread_mutex_unlock(&m_mutex);
	
}

/**
*@brief  send event(pthread_cond_t) to other pthread
*param 1: id --  task id
*param 2:event-- message event
* return: NO
*/

void CLinuxMutex::os_event_send(unsigned int id,os_event_type event)
{
    Lock();
	pthread_task[id].task_event |= event;
    pthread_cond_signal(&_cond);
    UnLock();
	
}

/**
*@brief  wait event(pthread_cond_t)  wakeup
*param 1: id --  task id
* return: event
*/

os_event_type CLinuxMutex::os_event_wait(unsigned int id)
{
   
   os_event_type event;
   
    Lock();
	
    while(pthread_task[id].task_event == NO_EVENT)
   	{
       pthread_cond_wait(&_cond, &m_mutex);
   	}
   	  event  = pthread_task[id].task_event;
	  pthread_task[id].task_event = NO_EVENT;
   UnLock();
    
   return event;
}






