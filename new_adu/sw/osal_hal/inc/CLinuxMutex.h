#ifndef _CLinuxMutex_h_
#define _CLinuxMutex_h_

/********************************************************************************************
*
*File name: CLinuxMutex.h
*Author: haibei
*Version: 0.0.1
*Date: 2016.10.20
*Description: this file is linux mutex class 
*
********************************************************************************************/
#include <sys/time.h>
#include <pthread.h>
#include <errno.h>
#include "define.h"

/**
*@brief  mutex  class
* lock and unlock mutex, send event and wait event 
*/

class CLinuxMutex
{
	public:
		   CLinuxMutex( );
		
		  ~CLinuxMutex();

		  void Lock(void);

		  void UnLock(void);
		 
         void os_event_send(unsigned int id,os_event_type event);
		
         os_event_type os_event_wait(unsigned int id);
		
	     pthread_cond_t              _cond;   
     
	 private:
    
    		pthread_t                   m_thread;

    
    		pthread_mutex_t             m_mutex;

    
    		pthread_mutexattr_t         m_mtex_attr;
			
			

}__attribute__((packed));






#endif


