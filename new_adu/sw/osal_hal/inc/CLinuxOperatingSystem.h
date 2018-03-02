#ifndef _CLinuxOprationSystem_h_
#define _CLinuxOprationSystem_h_
/********************************************************************************************
*
*@File name: CLinuxOperatingSystem.h
*@Author: haibei
*@Version: 0.0.1
*@Date: 2016.12.20
*@Description: this file is linux OS class 
*
********************************************************************************************/
#include <pthread.h>
#include "CThread.h"

class CLinuxCountingSem;


/**
*@brief  linux os class
*  create pthread 
*/

class CLinuxOperatingSystem 
{
	public:

		CLinuxOperatingSystem();

		~CLinuxOperatingSystem();



	  bool createThread(CThread *mThread,unsigned long stack_size,int priority);
		 
    

	private:

		
    		pthread_t                           mThreadId;

   
    		pthread_attr_t                      mThreadAttr;

        
		   CLinuxCountingSem		*p_sem;
		   
		   

}__attribute__((packed));





#endif


