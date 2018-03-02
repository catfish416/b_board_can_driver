#include <stdio.h>
#include <stdlib.h>
#include "CLinuxCountingSem.h"




/**
*@brief  semaphore  construct function
*param 1: init_sem_count --sem init value
* return: NO
*/

CLinuxCountingSem::CLinuxCountingSem(unsigned int init_sem_count)
{
	int result;
    	result = sem_init(&sem, 0, init_sem_count);
		
	    if (result != 0) {
	        printf("CLinuxCountingSem:  error\n");
	       
	    }


}

/**
*@brief  semaphore  destructors function
*param : NO
* return: NO
*/

CLinuxCountingSem::~CLinuxCountingSem()
{


}

/**
*@brief  semaphore  P operatopn
*param 1: blockglag --block or noblock falg
* return: true or false
*/


bool CLinuxCountingSem::Get(bool blockglag )
{
  
  if(blockglag){
  	 if(sem_wait(&sem)==0)  ///< if sem<0,block
	 	return true;
	 else
	 	return false;
  	}

  else
  	{
    int ret = sem_trywait(&sem); ///<if sem<0,noblock
	
	 if(!ret)
	 {
	 	
	 	 return true;
	 }
	 else if(ret == -1)
	 {
	 	return false;
	 }
  	}
  return true;
}

/**
*@brief  semaphore  V operatopn
*param : NO
* return: NO
*/

void CLinuxCountingSem::Post()
{
	sem_post(&sem);
    
}

/**
*@brief  semaphore  init
*param 1:init_sem_count-- init value
* return: NO
*/

void CLinuxCountingSem::Sem_init(unsigned int init_sem_count)
{
    
	bool result;
    	result = sem_init(&sem, 0, init_sem_count);
		
	    if (result != 0) {
	        printf("CLinuxCountingSem:  error\n");
	       
	    }
	
   
}

