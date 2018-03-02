#ifndef _Test_thread_a_h_
#define _Test_thread_a_h_
#include "define.h"
#include "CThread.h"


class TestThreadA:public CThread
{

	public:
		TestThreadA(const char *m_name);
		~TestThreadA();

		virtual void mainLoop();

	private:
		
		uint8_t task_id;
		os_event_type task_event;
		


};


#endif

