#ifndef _CTHREAD_H_
#define _CTHREAD_H_

/********************************************************************************************
*
*File name: CThread.h
*Author: haibei
*Version: 0.0.1
*Date: 2016.12.20
*Description: this file is base class of threads
*
********************************************************************************************/
#include "CLinuxCountingSem.h"
class CLinuxOperatingSystem;

/**
*@brief   thread task class
* enter task mainloop
*/

class CThread
{
	public:
		CThread(const char *m_thread_name);

		~CThread();

		 //Thread Entry
		 void threadEntry(CLinuxCountingSem *pSemaphore);

		 //the thread will be run if you call this function
		 bool run(int priority);
      
	protected:
		
		virtual void mainLoop()=0;

		

		CLinuxOperatingSystem		*p_opration_system;
		



}__attribute__((packed));


#endif






