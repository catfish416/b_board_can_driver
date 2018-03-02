#include "define.h"
#include "select_timer.h"

/**
*@brief  second sleep 
*param : seconds
* return:  NO
*/  
void seconds_sleep(unsigned int seconds){
 struct timeval tv;
 tv.tv_sec=seconds;
 tv.tv_usec=0;
 int err;
 do{
 err=select(0,NULL,NULL,NULL,&tv);
 }while(err<0 && errno==EINTR);
}

/**
*@brief  milliseconds sleep 
*param : milliseconds
* return:  NO
*/  
void milliseconds_sleep(unsigned long mSec){
 struct timeval tv;
 tv.tv_sec=mSec/1000;
 tv.tv_usec=(mSec%1000)*1000;
 int err;
 do{
  err=select(0,NULL,NULL,NULL,&tv);
 }while(err<0 && errno==EINTR);
}

/**
*@brief  microseconds sleep 
*param : microseconds
* return:  NO
*/  
void microseconds_sleep(unsigned long uSec){
 struct timeval tv;
 tv.tv_sec=uSec/1000000;
 tv.tv_usec=uSec%1000000;
 int err;
 do{
 err=select(0,NULL,NULL,NULL,&tv);
 }while(err<0 && errno==EINTR);
}