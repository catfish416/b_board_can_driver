#include "CLinuxMutex.h"
#include "CLinuxMsgQueuet.h"
#include "COperatingSystemFactory.h"
#include "CLinuxCountingSem.h"
#include "CLinuxTimer.h"

/**
*@brief  message queue  construct function -- create CLinuxCountingSem and CLinuxTimer
*param : NO
* return: NO
*/

CLinuxMsgQueuet::CLinuxMsgQueuet(const uint32_t buff_size)
{
   	
    p_timer = COperatingSystemFactory::newTimer();
	p_sem=COperatingSystemFactory::newCountingSem(0);
	init_ringbuffer(buff_size);
}


/**
*@brief  message queue  deconstruct function -- delete CLinuxCountingSem and CLinuxTimer
*param : NO
* return: NO
*/

CLinuxMsgQueuet::~CLinuxMsgQueuet()
{

  delete p_timer;
  free_ringbuffer( );
}
/**
*@brief  init ringbuffer
*param : buff_size   -- ring buffer size
* return: rb - - ring buffer
*/

void CLinuxMsgQueuet:: init_ringbuffer(const uint32_t buff_size)
{
     rb = (ringbuffer_t *)malloc(sizeof(ringbuffer_t));
	 
    if (NULL == rb) {
        ERR_EXIT("ringbuffer allocated fail\n");
        
    }
   


    rb->mBufferSize = buff_size;

    rb->mBuffer = (uint8_t *) malloc(rb->mBufferSize);
    if (NULL == rb->mBuffer) {
        free(rb);
        ERR_EXIT("ring buffer size is not engough\n");
       
    }
    rb->writeops = 0;
	rb->readops = 0;
	rb->number_of_Buffer = 0;
	memset(rb->mBuffer, 0, rb->mBufferSize);
   /* Mutex/cond */
    pthread_mutex_init(&rb->sr_mutex, NULL);
    pthread_mutex_init(&rb->full_mutex, NULL);
    pthread_cond_init(&rb->full_cond, NULL);
        
}


void CLinuxMsgQueuet::free_ringbuffer(void)
{
    if (rb && rb->mBuffer) {
        free(rb->mBuffer);
        free(rb);
		pthread_cond_destroy(&rb->full_cond);
    }
}

/**
*@brief  receive message from other task
*param 1: id -- task id
*param 2: p_msg -- receive data package
*param 3: id -- receive datalen
* return: true or false
*/

bool CLinuxMsgQueuet::recvMsg(unsigned char id, unsigned char *p_msg,unsigned char data_len)
{
     
	bool status = false;
	uint8_t i=0;
	
	   status = p_sem->Get(false);
	   if(status){

	if(__sync_fetch_and_add(&rb->number_of_Buffer,0) > 0)  ///< would  read
	
	{
	    for(i=0;i<data_len;i++)
	    {
	       p_msg[i] =  rb->mBuffer[rb->readops] ;
		   rb->readops = (rb->readops+1)%rb->mBufferSize;
		   __sync_fetch_and_sub(&rb->number_of_Buffer,1);
	    }
		
		status = true;
	}
	else            ///< buffer is empty
	{
	   pthread_cond_signal(&rb->full_cond);
	   status = false;
	}
	
	   	}
   return status;

}



/**
*@brief  send  message to other task
*param 1: id -- task id
*param 2: p_msg -- send data package
*param 3: id -- send datalen
* return: true or false
*/

bool CLinuxMsgQueuet::sendMsg(unsigned char id, unsigned char *p_msg,unsigned char data_len)
{

	bool status = false ;
	uint8_t i;
	pthread_mutex_lock(&rb->sr_mutex);
   if(data_len > rb->mBufferSize)  ///< buffer data len  is over
   	{
   	    status = false;
   	}
   else
   	{
   	   while(data_len > (rb->mBufferSize - __sync_fetch_and_add(&rb->number_of_Buffer,0)))
   	   	{
   	   	    printf("ring buffer is not enough\n");
   	        pthread_mutex_unlock(&rb->sr_mutex);
			pthread_mutex_lock(&rb->full_mutex);
			pthread_cond_wait(&rb->full_cond,&rb->full_mutex);  ///<block ,until rb->full_cond wake up
			pthread_mutex_unlock(&rb->full_mutex);
			pthread_mutex_lock(&rb->sr_mutex);
   	   	}
	   
       for(i=0;i<data_len;i++)
       {
           rb->mBuffer[rb->writeops] = p_msg[i];
		   rb->writeops = (rb->writeops+1)%rb->mBufferSize;
		    __sync_fetch_and_add(&rb->number_of_Buffer,1);
       }
	  
	   pthread_mutex_unlock(&rb->sr_mutex);
       p_timer->pt_mutex->os_event_send(id,NEW_MESSAGE_EVENT);
	   p_sem->Post( );
	   pthread_mutex_lock(&rb->sr_mutex);
	   status = true;
   	}
   	pthread_mutex_unlock(&rb->sr_mutex);
    return status;


}

