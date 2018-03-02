#ifndef _CLinuxMsgT_h_
#define _CLinuxMsgT_h_
#include <stdlib.h>
#include <string.h>
#include "define.h"

class CLinuxTimer;
class CLinuxCountingSem;

/**
*@brief  message quene class ,it include timer event
* send message and receive message
*/

class CLinuxMsgQueuet 
{
	public:
		CLinuxMsgQueuet(const uint32_t buff_size);
		~CLinuxMsgQueuet();

	    void init_ringbuffer(const uint32_t buff_size);
        void free_ringbuffer(void);
    	 bool recvMsg(unsigned char  id,unsigned char *p_msg,unsigned char date_len);
		 bool sendMsg(unsigned char id,unsigned char *p_msg,unsigned char date_len);
        CLinuxTimer *p_timer;
     private:
		
		ringbuffer_t *rb; 
        
		CLinuxCountingSem		 *p_sem;


}__attribute__((packed));


#endif



