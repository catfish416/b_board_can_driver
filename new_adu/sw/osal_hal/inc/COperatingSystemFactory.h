
#ifndef _COprationSsytemFactory_h_
#define _COprationSsytemFactory_h_
/********************************************************************************************
*
*File name: COperatingSystemFactory.h
*Author: haibei
*Version: 0.0.1
*Date: 2016.12.20
*Description: this file is the simple factory class for building COperratinSystem CMutex etc...
*
********************************************************************************************/
#include <stdio.h>

class CLinuxOperatingSystem;
class CLinuxCountingSem;
class CLinuxMutex;
class CLinuxMsgQueue;
class CLinuxTimer;
class CLinuxMsgQueuet;
class CLinuxShmFifo;

/**
*@brief   OS factory class
* new CLinuxOperatingSystem CLinuxCountingSem CLinuxMutex CLinuxMsgQueue CLinuxTimer CLinuxMsgQueuet
*/

class COperatingSystemFactory
{
	public:

		COperatingSystemFactory();
		~COperatingSystemFactory();
		static CLinuxOperatingSystem *newOperatingSystem();
		
		static CLinuxCountingSem  *newCountingSem(unsigned int init);

		static CLinuxMutex		    *newMutex( );

	    static CLinuxMsgQueue     *newMsgQueue(const unsigned int qsize);
		
		static CLinuxTimer       *newTimer();
		static CLinuxMsgQueuet     *newMsgQueuet(const unsigned int qsize);
		static CLinuxShmFifo      *newShmFifo(int key, unsigned int blksize,unsigned int blocks);
		


};

#endif


