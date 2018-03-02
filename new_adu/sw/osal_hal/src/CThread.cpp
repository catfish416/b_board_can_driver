#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include "CThread.h"
#include "COperatingSystemFactory.h"
#include "CLinuxOperatingSystem.h"
#include "CLinuxCountingSem.h"

/**
*@brief  CThread  construct function  -- new p_opration_system
*param : NO
* return: NO
*/

CThread::CThread(const char *m_thread_name)
{
	 

	p_opration_system=COperatingSystemFactory::newOperatingSystem();

	

	if(p_opration_system==NULL)
		{
			printf(" OS Create Fail...\n");
			exit(0);
		}



}

/**
*@brief  CThread  deconstruct function  -- delete p_opration_system
*param : NO
* return: NO
*/

CThread::~CThread()
{
  delete p_opration_system;

}

/**
*@brief  CThread  deconstruct function  -- enter mainloop function
*param : NO
* return: NO
*/

void CThread::threadEntry(CLinuxCountingSem *pSemaphore)
{
	
		pSemaphore->Post();
		
		mainLoop();
	
	

}

/**
*@brief  CThread  deconstruct function  -- enter mainloop function
*param : priority --  thread priority
* return: true
*/

bool CThread::run(int priority)
{
   CThread *pthread = this;
	if(!p_opration_system->createThread(pthread,8192,priority))
	{
		printf("Create Thread Fail....\n");
		exit(0);
	}
	pthread = NULL;
  return true;

}


