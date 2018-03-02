#ifndef _Test_thread_b_h_
#define _Test_thread_b_h_
#include "define.h"
#include "CThread.h"


class TestThreadB:public CThread
{

	public:
		TestThreadB(const char *m_name);
		~TestThreadB();

		virtual void mainLoop();

	private:
		
		uint8_t task_id;
		os_event_type task_event;
		


};


#endif

