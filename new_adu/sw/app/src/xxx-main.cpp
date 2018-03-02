#include "CLinuxMsgQueuet.h"
#include "COperatingSystemFactory.h"
#include "data_fusing.h"
#include "EthrevThread.h"
#include "CLinuxTimer.h"
#include "cyclequeue.h"
#include "spiThread.h"
#include "pathplan.h"
#include "map.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>  
#include <pthread.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/time.h>    
#include <time.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include "stdarg.h"

#define INVALID_SOCKET -1
typedef int SOCKET;
TASK pthread_task[TASK_NUM] = TASK_FUNCTION;

CLinuxMsgQueuet *qfusing_rev;
CLinuxMsgQueuet *qeth_rev;
CLinuxTimer *spi_timer;
CLinuxMsgQueuet *qmap;
 CLinuxMsgQueuet * qpath;
unsigned short gDebugModuleNum = 0;
void PrintLogInit(char* csStr);

int main(int argc, char* argv[])
{   

	 if(argc == 3)  // adu.exe debug 9   --> debug module whose number is 9. 
	 {
	 	if(strcmp(argv[1], "debug") ==0)
	 	{
	 		int num = 0;
			sscanf(argv[2], "%d", &num);
			if(num >0 && num < 1000)
				gDebugModuleNum = num;
	 	}
	 }
    printf(ADU_VERSION);
    PrintLogInit("client");
    qfusing_rev = COperatingSystemFactory::newMsgQueuet(5242880); //5M
    qeth_rev = COperatingSystemFactory::newMsgQueuet(1048276);  //1//1M
    
    qmap = COperatingSystemFactory::newMsgQueuet(1048276); //1//1M
    qpath = COperatingSystemFactory::newMsgQueuet(256); //1//256
    

   spi_timer = COperatingSystemFactory::newTimer( );
	
  	FusingThread *fuse = new FusingThread(fusingthread_name);
	EthrevThread *eth = new EthrevThread(eththread_name);
	spiThread *spi = new spiThread(spithread_name);
        PathplanThread *path_plan = new PathplanThread(pathplanthread_name);
	MapThread *map = new MapThread(mapthread_name);
	    

        path_plan->run(21);
	fuse->run(18);  
         map->run(15);  
        eth->run(8);  
	 spi->run(-1);  
	
	
	while(1)
	{
	    sleep(10);/*10s*/
	}
	
    return 0;
}





#define LINUX_OS
// Copy to ADU --
#ifdef LINUX_OS                    
#define GET_S_ADDR   sockaddri.sin_addr.s_addr                  
#else
#define GET_S_ADDR   sockaddri.sin_addr.S_un.S_addr
#endif                    
#ifdef LINUX_OS
#include <pthread.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/time.h>    /* struct timeval, gettimeofday(), struct itimerval, setitimer(), ITIMER_REAL */
#include <time.h>
#include <arpa/inet.h>
#include <netdb.h>
#define INVALID_SOCKET -1
typedef int SOCKET;
#define Sleep(A) usleep((A)*1000)
#define closesocket(A) close(A)
#else
#include   <process.h>         /*   _beginthread,   _endthread   */ 
typedef int socklen_t;
//#include <Winsock2.h> 
// Ws2_32.lib
typedef unsigned (__stdcall *PTHREAD_START) (void *); 

#define _BEGINTHREADEX(psa, cbStackSize, pfnStartAddr, \
	pvParam, dwCreateFlags, pdwThreadID)                 \
	((HANDLE) _beginthreadex(                     \
	(void *) (psa),                            \
	(unsigned) (cbStackSize),                  \
	(PTHREAD_START) (pfnStartAddr),            \
	(void *) (pvParam),                        \
	(unsigned) (dwCreateFlags),                \
	(unsigned *) (pdwThreadID)))
#endif

typedef unsigned long DWORD;
#define THREAD_MAX 5
#include "stdarg.h"
#define LOGHEAD "ilovethi"
//#define   DBG1(...)
#define   DBG1(...)		Myfprintf1(__VA_ARGS__)  //((void)0) 
int Myfprintf1(const char *fmt, ...)
{
	va_list args;
	va_start (args, fmt);
	vprintf(fmt, args);
	va_end (args);
	return 0;
}

#define SERVER_IP "192.168.1.99" 
#define CLIENT_IP "192.168.1.22"
#define CLIENT_PORT_START 6660
#define SERVER_PORT_START (CLIENT_PORT_START+100)
#define MAX_BUF 800000

class CSockTask
{
public:
	CSockTask();
	~CSockTask();
	int bRunInSrvMode; // 0 -client, 1, server
	int index;
	char name[32];
	char* ip;
	SOCKET socket;
	short portno;
	int ms; // sleep ms
	bool bRun;
	bool bStoped;
	sockaddr_in sockaddri;	
	unsigned char pParceBuf[MAX_BUF*2];
	unsigned char pSockBuf[MAX_BUF];
	unsigned char* p1,*p2,*pCur,*pEnd,*pnext;
	FILE *fpsockbuf;
	void RcvMsgProc();
	void EatALog();
private:
};
CSockTask::~CSockTask()
{
	bRun = false;
	while(bStoped == false)
		Sleep(1);	
	if(this->fpsockbuf != NULL)
	{
		fclose(this->fpsockbuf);
		this->fpsockbuf = NULL;
		DBG1("fclose fpsockbuf=%x,line=%d\n",fpsockbuf, __LINE__);
	}
	
}
CSockTask::CSockTask()
{
	bRun = true;
	bStoped = true;	
	bRunInSrvMode = 0;		
	memset(pParceBuf, 0, MAX_BUF*2);
	memset(&sockaddri, 0, sizeof(sockaddri));
	sockaddri.sin_family = AF_INET;
	fpsockbuf = NULL;
	//GET_S_ADDR = INADDR_ANY;
	DBG1("line=%d\n", __LINE__);
	pEnd=pCur=p1=p2=pParceBuf;
}
#if 0
#include <fcntl.h>
int set_fl(int fd, int flags)    /* flags are file status flags to turn on */
{
    int val;
 
    if((val = fcntl(fd, F_GETFL, 0)) < 0) {
        printf("[tskIpRev] : fcntl F_GETFL error");
        return -1;
    }
    val |= flags;       /* turn on flags */
 
    if(fcntl(fd, F_SETFL, val) < 0) {
        printf("[tskIpRev] : fcntl F_SETFL error");
        return -1;
    }
    return 0;
}
#endif
#include <fcntl.h>

bool gbBuf2File = false;
bool gbReadFromFile = false;
CSockTask* pSockTasks[THREAD_MAX];
CSockTask* pSockTasksSrv[THREAD_MAX];
SOCKET CreateSocket(CSockTask* pSockTask,char* csStr)
{

	SOCKET m_sock;				
	m_sock =INVALID_SOCKET ;
	m_sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	
	if (INVALID_SOCKET == m_sock)
	{
//		int iErrorCode =  GetLastError();
		return m_sock;
	}

	if (0 != bind(m_sock, (sockaddr*)&(pSockTask->sockaddri), sizeof(pSockTask->sockaddri)))
	{
//		int iErrorCode =  GetLastError();

		for(int j=0; j<16; j++) DBG1("%03d-",*((unsigned char*)&(pSockTask->sockaddri)+j));		
//		DBG1("%d~%d~%d~%d",*((unsigned char*)&(pSockTask->sockaddri.sin_addr.S_un.S_un_b.s_b1)),*((unsigned char*)&(pSockTask->sockaddri.sin_addr.S_un.S_un_b.s_b2)),*((unsigned char*)&(pSockTask->sockaddri.sin_addr.S_un.S_un_b.s_b3)),*((unsigned char*)&(pSockTask->sockaddri.sin_addr.S_un.S_un_b.s_b4)));		
		pSockTask->sockaddri.sin_port =0;
		if (0 != bind(m_sock, (sockaddr*)&(pSockTask->sockaddri), sizeof(pSockTask->sockaddri)))
		{
			closesocket(m_sock);
			m_sock = INVALID_SOCKET;
			return m_sock;
		}
	}
	socklen_t iaddrSize = sizeof(sockaddr);
	pSockTask->sockaddri.sin_family  = AF_INET;	
	if (0 != getsockname(m_sock, (sockaddr*)&(pSockTask->sockaddri), &iaddrSize))
	{
		closesocket(m_sock);
		m_sock = INVALID_SOCKET;
		return m_sock;
	}
	int portno =pSockTask->sockaddri.sin_port;
	portno= ((portno&0xFF)<< 8 )+((portno & 0xFF00)>> 8 );
	DBG1("CreateSocket=%d, sin_port=%d\n",portno,pSockTask->sockaddri.sin_port );
	pSockTask->sockaddri.sin_family = AF_INET;


#ifndef LINUX_OS
		int iMode = 0;
// If iMode = 0, blocking is enabled;
// If iMode != 0, non-blocking mode is enabled.
		if(strcmp(csStr,"server") ==0)
			iMode = 1;
		else
			iMode = 0; // client set as block, make sure send 2nd after 1st is sent, otherwise 10035 error in case of too frequently..
		ioctlsocket(m_sock, FIONBIO, (u_long FAR*) &iMode);
		DWORD TimeOut=1;	//ms
		if(::setsockopt(m_sock,SOL_SOCKET,SO_RCVTIMEO,(char *)&TimeOut,sizeof(TimeOut))==SOCKET_ERROR) //&(~SO_REUSEADDR)
			; 
#else
	   struct timeval tv_out;
	   tv_out.tv_sec = 0;
	   tv_out.tv_usec = 1;
	   setsockopt(m_sock,SOL_SOCKET,SO_RCVTIMEO,&tv_out, sizeof(tv_out));
	   
	   int flags;
	   
	   
	   /* Set socket to non-blocking */
	   
	   if ((flags = fcntl(m_sock, F_GETFL, 0)) < 0) 
	   { 
		   /* Handle error */ 
	   }
	   
	   
	   if (fcntl(m_sock, F_SETFL, flags | O_NONBLOCK) < 0) // in arm, set noblock, just drop it once it's too frequently.
	   { 
		   /* Handle error */ 
	   }
	   
		
	   
	   
/*		if(set_fl(m_sock, O_NONBLOCK) < 0) {
            return 0;
        }*/	   
	
#endif
	return m_sock;
}

void PrintLogInit(char* csStr)
{
	
#ifndef LINUX_OS
	struct hostent *host;
	WORD wVersionRequested;
	WSADATA wsaData;
	wVersionRequested = MAKEWORD(1,1);
	int err =WSAStartup(wVersionRequested, &wsaData);
	int iErrorCode =  GetLastError();
	if(iErrorCode ==10048)
		;
#endif

	for(int i =0; i< THREAD_MAX; i++)
	{

		pSockTasks[i]= new CSockTask;
		if(strcmp(csStr,"client") ==0)	// Client setting
		{			
			pSockTasks[i]->index = i;		
			pSockTasks[i]->ms = (i+1)*20;
			pSockTasks[i]->portno = CLIENT_PORT_START+i;
			pSockTasks[i]->sockaddri.sin_port = htons(pSockTasks[i]->portno);
			pSockTasks[i]->sockaddri.sin_family = AF_INET;
			sprintf(pSockTasks[i]->name, "pSockTask%d", i);
			pSockTasks[i]->ip = (char*)CLIENT_IP;
			
#ifndef LINUX_OS
			if((host=gethostbyname(pSockTasks[i]->ip))==NULL)
				;
			pSockTasks[i]->sockaddri.sin_addr = *((struct in_addr *)host->h_addr);
#endif		
			pSockTasks[i]->GET_S_ADDR = inet_addr(pSockTasks[i]->ip);

			pSockTasks[i]->socket = CreateSocket(pSockTasks[i],csStr);
			DWORD dwThreadID;		

		}
			
		// Server setting
		pSockTasksSrv[i]= new CSockTask;
		pSockTasksSrv[i]->index = i;		
		pSockTasksSrv[i]->portno = SERVER_PORT_START+i;
		pSockTasksSrv[i]->sockaddri.sin_port = htons(pSockTasksSrv[i]->portno);
		//pSockTasks[i]->sockaddri.sin_family = AF_INET;
		sprintf(pSockTasksSrv[i]->name, "pSockTaskSrv%d", i);
		pSockTasksSrv[i]->ip = (char*)SERVER_IP;
		pSockTasksSrv[i]->GET_S_ADDR = inet_addr(pSockTasksSrv[i]->ip);

		if(strcmp(csStr,"server") ==0)
		{
			pSockTasksSrv[i]->socket = CreateSocket(pSockTasksSrv[i],csStr);
			pSockTasksSrv[i]->bRunInSrvMode = 1;	
			char filenamesock[32];
			sprintf(filenamesock, "pSockTasksSrv%d.txt",i);	
			if(gbBuf2File)
			{
				pSockTasksSrv[i]->fpsockbuf = fopen(filenamesock,"wb");
				if(pSockTasksSrv[i]->fpsockbuf == NULL)
					DBG1("line=%d\n", __LINE__);
				else
					DBG1("filenamesock=%s,line=%d\n",filenamesock, __LINE__);
					
			}
			else if(gbReadFromFile)
			{
				pSockTasksSrv[i]->fpsockbuf = fopen(filenamesock,"rb");	
				fseek(pSockTasksSrv[i]->fpsockbuf,0L,SEEK_SET); 			
			}

		}
		
	}
	//void PrintLogThreadInit(char* csStr);
	//PrintLogThreadInit(csStr);

	pSockTasksSrv[0]->ms = 0;	// server should be quick
}
//ng_output.FusingObj[0] = 11.11111;
			//	Fusing_output.FusingObj[633] = 55.55555;
		       // PrintLog (fusingthread_taskid,"ilovethi%x0016\0\0", "\x1\x2\x3\x4\x5\x6\x7\x8\x9numericstrings",18) ;	  							
 //PrintLog (fusingthread_taskid,"ilovethi%d0016\0\0", "\x1\x2\x3\x4\x5\x6\x7\x8\x9/x10numericstrings",18) ;		 						
		      //  PrintLog (fusingthread_taskid,"ilovethi%s0016\0\0", "this is a test string",30) ; 				
		      //  PrintLog (fusingthread_taskid,"ilovethi%f0000\0\0", &(Fusing_output.FusingObj[0]),635*sizeof(double)) ; 

//EXTERN_VAR int  PrintLog (int TaskID,const char* fmt,const void *buf, int len) ;
int  PrintLog (int TaskID, unsigned short moduleID, unsigned short line, char* fmt,const char *buf, int len) 
{
	int sendtoLen =0;

	static int SntCount = 0;
	char fmtbuf[32];
	char* p = fmtbuf;
	memcpy(p,"ilovethi",8);
	if(len > MAX_BUF)
		return 0;
	*(int*)(p+8)=len;
	*(int*)(p+12)=SntCount++;
	*(unsigned short*)(p+16)=moduleID;	
	*(unsigned short*)(p+18)=line;		
	memcpy((p+20),fmt,12);

	unsigned char* pSnt = (unsigned char*)malloc(32+len);  //  sent packets together, otherwise may inserted by other udp packets from other threads
	if(pSnt)
	{
		memcpy(pSnt,fmtbuf, 32);
		memcpy(pSnt+32, buf,len);
		sendtoLen = sendto(pSockTasks[TaskID]->socket,(char*)pSnt , 32+len, 0, (sockaddr*)&(pSockTasksSrv[TaskID]->sockaddri), sizeof(pSockTasksSrv[TaskID]->sockaddri));
		free(pSnt);
		
	}
	else
		DBG1("malloc error\n");
	if(sendtoLen>0)
		;//DBG1("sendtoLen=%d, sendindex =%d,TaskID=%d,port=%d\n",sendtoLen, SntCount,TaskID,pSockTasksSrv[TaskID]->sockaddri.sin_port);
	else
	{
	//	int iErrorCode =  GetLastError();
	//	DBG1("iErrorCode=%d\n",iErrorCode);
	}
//	Sleep(1);
 	return sendtoLen;
}

// Copy to ADU ---end--




