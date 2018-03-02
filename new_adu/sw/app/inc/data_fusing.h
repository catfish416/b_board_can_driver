
#ifndef _DATA_FUSING_H_
#define _DATA_FUSING_H_
#include "define.h"
#include "CThread.h"
#include "CLinuxMsgQueue.h"

/**
*@brief  fusing class
* inherit CThread
*/

class FusingThread:public CThread
{

	public:
		FusingThread(const char *m_name);
		~FusingThread();

		virtual void mainLoop();

		
	private:
		
        uint8_t task_id;
		os_event_type task_event;
		

};



#endif

