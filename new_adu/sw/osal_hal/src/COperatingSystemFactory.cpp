#include "CLinuxCountingSem.h"
#include "CLinuxMutex.h"
#include "CLinuxTimer.h"
#include "CLinuxMsgQueuet.h"
#include "CLinuxMsgQueue.h"
#include "CLinuxOperatingSystem.h"
#include "COperatingSystemFactory.h"
#include "shmfifo.h"

/**
*@brief  COperatingSystemFactory  construct function
*param : NO
* return: NO
*/

COperatingSystemFactory::COperatingSystemFactory()
{
    
}
/**
*@brief  COperatingSystemFactory  deconstruct function
*param : NO
* return: NO
*/

COperatingSystemFactory::~COperatingSystemFactory()
{
    
}
/**
*@brief  new  CLinuxOperatingSystem -- dynamic assign memory
*param : NO
* return: CLinuxOperatingSystem address
*/

CLinuxOperatingSystem *COperatingSystemFactory::newOperatingSystem()
{

	return new CLinuxOperatingSystem();

}

/**
*@brief  new  CLinuxCountingSem -- dynamic assign memory
*param 1:  init -- init sem value
* return: CLinuxCountingSem address
*/

CLinuxCountingSem  *COperatingSystemFactory::newCountingSem(unsigned int init)
{

	return new CLinuxCountingSem(init);

}

/**
*@brief  new  CLinuxMutex-- dynamic assign memory
*param :  NO
* return: CLinuxMutex address
*/

CLinuxMutex  *COperatingSystemFactory::newMutex( )
{
	return new CLinuxMutex( );
}

 /**
 *@brief  new  newMsgQueue-- dynamic assign memory
 *param :  NO
 * return: newMsgQueue address
 */

 CLinuxMsgQueue   *COperatingSystemFactory::newMsgQueue(const unsigned int qsize)
{
	return new CLinuxMsgQueue(qsize);
}

 /**
 *@brief  new  newTimer-- dynamic assign memory
 *param :  NO
 * return: newTimer address
 */

 CLinuxTimer     *COperatingSystemFactory::newTimer()
 {
 	 return new CLinuxTimer( );
 }

  
  /**
  *@brief  new	newMsgQueuet-- dynamic assign memory
  *param :	NO
  * return: newMsgQueuet address
  */

  CLinuxMsgQueuet   *COperatingSystemFactory::newMsgQueuet(const unsigned int qsize)
{
	return new CLinuxMsgQueuet(qsize);
}

CLinuxShmFifo   *COperatingSystemFactory::newShmFifo(int key, unsigned int blksize,unsigned int blocks)
{
   return new CLinuxShmFifo(key, blksize,blocks);
}

