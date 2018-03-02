#ifndef _CLinuxMsg_h_
#define _CLinuxMsg_h_
#include <stdlib.h>
#include <string.h>
#include "define.h"

class CLinuxCountingSem;
class CLinuxMutex;


/**
*@brief  rring buffer class ,it does not include timer event
* write and read ringbuffer
*/

class CLinuxMsgQueue 
{
	public:
		CLinuxMsgQueue(const uint32_t buff_size);
		~CLinuxMsgQueue();
        void init_ringbuffer(const uint32_t buff_size);
        void free_ringbuffer(void);
    	 bool recvMsg(unsigned char  id,unsigned char *p_msg,unsigned char date_len);
		 bool sendMsg(unsigned char id,unsigned char *p_msg,unsigned char date_len);
         CLinuxMutex *get_mutex(void);
     private:
		CLinuxMutex *p_mutex;
		ringbuffer_t *rb; 
		
}__attribute__((packed));

#endif



