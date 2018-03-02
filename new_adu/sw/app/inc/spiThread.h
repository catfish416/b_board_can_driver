#ifndef _SPI_THREAD_H_
#define _SPI_THREAD_H_
#include "define.h"
#include "CThread.h"
#include "spi_cfg.h"


class spiThread:public CThread
{

	public:
		spiThread(const char *m_name);
       ~spiThread();
        //static void *spi_send_fun(void *arg);
		//static void *spi_rcv_fun(void *arg);
		virtual void mainLoop();

	private:
		uint8_t task_id;
		os_event_type task_event;
		int32_t spi_fd;
		uint8_t w_block;
		uint8_t rt_block;
	    Frame_Type *message;

};


#endif

