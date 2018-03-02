#ifndef _MAP_H
#define _MAP_H
#include "define.h"
#include "CThread.h"


class MapThread:public CThread
{

	public:
		MapThread(const char *m_name);
		~MapThread();

		virtual void mainLoop();

	private:
		
		uint8_t task_id;
		os_event_type task_event;
		


};


#endif

