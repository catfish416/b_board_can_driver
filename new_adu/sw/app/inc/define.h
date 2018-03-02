#ifndef _DEFINE_H
#define _DEFINE_H
#include <sys/types.h>
#include <sys/types.h> 
#include <sys/socket.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <string.h> 
#include <netinet/in.h> 
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include "resue.h"
#include<sys/syscall.h>


/********************************************************************************************
*
*@File name: CCountingSem.h
*@Author: haibei
*@Version: 0.0.1
*@Date: 2016.10.27
*@Description: this file is used to define enmu,marco and declare some function
*
********************************************************************************************/


//.....................................................................................................................................

// enmu defines

//......................................................................................................................................

/**
*@brief eth interface port
*/
typedef enum FUSING_PORT  
 {	       ETH_V2X = 0x10,
     	        ETH_CAN1, 
		 ETH_CAN2,
		 ETH_CAN3,
		 ETH_CAN4,
    	          ETH_GPS,
    	          ETH_PATH_CAL,
 }FUSING_PORT_T; 

/**
*@brief  task id
*/
enum Task_ID
{   
	eththread_taskid = 0,
	fusingthread_taskid,
	spi_taskid,
	pathplan_taskid,
	map_taskid,
    TASK_NUM,
};



//.....................................................................................................................................

// struct defines

//......................................................................................................................................

/**
*@brief  TASK  varible and timer  trigger function
*/

typedef struct task
{
  uint8_t task_id; 
  const char *task_name;
  os_event_type task_event;
  void (*handler_func)(sigval_t v);  ///< if task have timer,it neet to ponit a handler function
 }TASK;

/**
*@brief :ringbuffer write read 
*/

typedef struct element
{
    pthread_mutex_t sr_mutex; /* send and receive mutex*/
	pthread_mutex_t full_mutex;   /* Used with the pthread_cond_t field below */
    pthread_cond_t  full_cond;    /* Used to block until there is space in the message queue */
    uint32_t          mBufferSize;
    uint32_t          writeops;
	uint32_t          readops;
    uint32_t          number_of_Buffer;/*read number */
    uint8_t           *mBuffer;
} ringbuffer_t;

//.....................................................................................................................................

// function declaration

//......................................................................................................................................

EXTERN_VAR TASK pthread_task[TASK_NUM];
EXTERN_VAR void Fusingthread_handler_func(sigval_t v);
EXTERN_VAR void path_plan_handler_func(sigval_t v);
EXTERN_VAR void path_plan_handler_func(sigval_t v);
EXTERN_VAR void map_handler_func(sigval_t v);
EXTERN_VAR void spi_handler_func(sigval_t v);
EXTERN_VAR void Eththread_handler_func(sigval_t v);
EXTERN_VAR int  PrintLog (int TaskID, unsigned short moduleID, unsigned short line, char* fmt,const char *buf, int len) ;
//.....................................................................................................................................

// macro defines

//......................................................................................................................................
#define PATH_NUM     4
#define gettid()  syscall(__NR_gettid)
//#define MAP_PRINTF    
//#define PATH_PRINTF  
//#define FUSING_PRINTF
//#define ETH_DEBUG_PRINTF
//#define SPI_DEBUG_PRINTF
//#define FUSING_DEBUG_PRINTF
//#define MAP_DEBUG_PRINTF
//#define PATH_DEBUG_PRINTF
#define ADU_VERSION         "ADU V1.3.0 \n"
#define NO_EVENT                (os_event_type)0x00
#define PERDIOC_TIMER_EVENT     (os_event_type)0x01
#define NEW_MESSAGE_EVENT       (os_event_type)0x02
#define eththread_name "eth0"
#define fusingthread_name "data_fusing"
#define spithread_name "spi0"
#define pathplanthread_name "path_plan"
#define mapthread_name "map"

#define ERR_EXIT(m)\
   do {\
	   perror(m);\
	   exit(EXIT_FAILURE);\
   }while(0)


/**match to TASK struct and pthread_task[TASK_NUM]. */
#define  TASK_FUNCTION   \
{   \
    {eththread_taskid,eththread_name,NO_EVENT,Eththread_handler_func}, \
    {fusingthread_taskid,fusingthread_name,NO_EVENT,Fusingthread_handler_func}, \
    {spi_taskid,spithread_name,NO_EVENT,spi_handler_func},\
    {pathplan_taskid,pathplanthread_name,NO_EVENT,path_plan_handler_func},\
    {map_taskid,mapthread_name,NO_EVENT,map_handler_func},\
}


#endif


