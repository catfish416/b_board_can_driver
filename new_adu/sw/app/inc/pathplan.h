#ifndef _PATH_PLAN_H_
#define _PATH_PLAN_H_
#include "define.h"
#include "CThread.h"


class PathplanThread:public CThread
{

	public:
		PathplanThread(const char *m_name);
		~PathplanThread();

		virtual void mainLoop();

	private:
		
		uint8_t task_id;
		os_event_type task_event;
		


};


#endif

