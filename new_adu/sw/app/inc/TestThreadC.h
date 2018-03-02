#ifndef _Test_thread_c_h_
#define _Test_thread_c_h_
#include "define.h"
#include "CThread.h"


class TestThreadC:public CThread
{

	public:
		TestThreadC(const char *m_name);
		~TestThreadC();

		virtual void mainLoop();

	private:
		
		uint8_t task_id;
		os_event_type task_event;
		


};


#endif

