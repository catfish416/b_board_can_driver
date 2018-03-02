#ifndef _CLinuxTimer_h_
#define _CLinuxTimer_h_
#include <time.h>
/********************************************************************************************
*
*@File name: CLinuxCountingSem.h
*@Author: haibei
*@Version: 0.0.1
*@Date: 2016.10.30
*@Description: this file is linux timer class 
*
********************************************************************************************/
/**
*@brief  timer 	class
* timer start,timer create,timer destroy,timer handler,set timer period
*/

class CLinuxMutex;

class CLinuxTimer
{
 public:
 	    CLinuxTimer();
	    ~CLinuxTimer();
 	   void os_timer_start(void);
	   void os_timer_create(unsigned char id);
       void os_timer_destroy(void);
	   void os_timer_handler(unsigned char id);
	   void set_timerspec(unsigned char *data);
	   CLinuxMutex *pt_mutex;
private:
	    
	    struct sigevent evp;  
        struct itimerspec ts;  
        timer_t timer; 
		
       		
}__attribute__((packed));
	




#endif

