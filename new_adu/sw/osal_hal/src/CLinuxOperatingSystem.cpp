#include "COperatingSystemFactory.h"
#include "CLinuxOperatingSystem.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

/**
*@brief  static function,  after  create pthead will enter this function
*param 1: threadParm --pthread and semaphore
* return: NO
*/


static void threadEntry(unsigned long *threadParm)
{
	 CThread 	*pThread = (CThread *) threadParm[0];
	 CLinuxCountingSem *pSemaphore      = (CLinuxCountingSem *) threadParm[1];
	 
	if(pThread==NULL)
		{
			printf("Thread Error...\n");

		}else
			{
				//printf("Begain to Run....%ld\n",(unsigned long)pThread);
				pThread->threadEntry(pSemaphore);
			}

      
	  pthread_exit(0);

}



/**
*@brief  os  construct function -- init pthread id
*param : NO
* return: NO
*/

CLinuxOperatingSystem::CLinuxOperatingSystem()
{

	mThreadId = 0;
	p_sem=COperatingSystemFactory::newCountingSem(0);
	
	
}

/**
*@brief  message queue deconstruct function
*param : NO
* return: NO
*/

CLinuxOperatingSystem::~CLinuxOperatingSystem()
{

   delete p_sem;
}


/**
*@brief  create  thread
*param 1 :class mThread
*param2:stack_size -- pthread stack size
 *param3: priority -- pthread priority
* return: true
*/
bool CLinuxOperatingSystem::createThread(CThread *mThread,unsigned long stack_size,int priority)
{
	int rc;
	unsigned long arguments[4];
	struct sched_param param;

	if (mThread == NULL)
	{
		printf("CLinuxOperatingSystem::CreateThread() : Thread pointer is NULL!  Can't begin the thread... ");
		return false;
	}
	
	
   
    if(priority != -1){
	pthread_attr_init(&mThreadAttr);  
	pthread_attr_setschedpolicy(&mThreadAttr, SCHED_RR);//SCHED_FIFO
	pthread_attr_setscope(&mThreadAttr, PTHREAD_SCOPE_SYSTEM);//PTHREAD_SCOPE_SYSTEM
	pthread_attr_setstacksize(&mThreadAttr, stack_size);
   	
    pthread_attr_getschedparam(&mThreadAttr,&param);
	param.sched_priority=priority;
	
	pthread_attr_setschedparam(&mThreadAttr,&param);
	pthread_attr_setinheritsched(&mThreadAttr, PTHREAD_EXPLICIT_SCHED);
    }
	memset(arguments, 0, sizeof(arguments));
	arguments[0] = (unsigned long) mThread;   
	arguments[1] = (unsigned long) p_sem;
	
	rc = pthread_create(&mThreadId, &mThreadAttr, (void * (*) (void *))threadEntry, arguments);      ///<create   thread
    if (rc != 0){            
		printf("CLinuxOperatingSystem::CreateThread() : Failed to create and start the thread! ");
		
		mThreadId = 0;
		return false;
	}
	
	pthread_detach(mThreadId);
   	p_sem->Get(true);

	
	return true;

}












