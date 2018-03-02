
#ifndef _CLinuxCountingSem_h_
#define _CLinuxCountingSem_h_

/********************************************************************************************
*
*@File name: CLinuxCountingSem.h
*@Author: haibei
*@Version: 0.0.1
*@Date: 2016.10.30
*@Description: this file is  sem class 
*
********************************************************************************************/
#include <semaphore.h>


/**
*@brief  semaphore  class
*init sem,PV sem
*/

class CLinuxCountingSem
{
	public:
		
		CLinuxCountingSem(unsigned int init_sem_count);
		~CLinuxCountingSem();


		  bool                Get(bool bolckflag) ;
		  void                Post(void) ;

          void                Sem_init(unsigned int init_sem_count);


	private:

		sem_t		sem;


};







#endif



