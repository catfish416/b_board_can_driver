#include <netinet/in.h> 
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <sys/prctl.h>
#include "COperatingSystemFactory.h"
#include "CLinuxMsgQueuet.h"
#include "EthrevThread.h"
#include "CLinuxMutex.h"
#include "CLinuxTimer.h"
#include <signal.h>
#include <unistd.h>
#include <netinet/tcp.h>

using namespace std;
EXTERN_VAR CLinuxMsgQueuet *qeth_rev;
EXTERN_VAR CLinuxMsgQueuet *qfusing_rev;
EXTERN_VAR CLinuxMsgQueuet *qmap;
EXTERN_VAR CLinuxMsgQueuet * qpath;

/**
*@brief : service ip and port,eth port 
*/
typedef struct SERVER_IP_PORT
{
  char Sip_addr[100]; 
  uint16_t S_port;
  FUSING_PORT_T signal;
}SIP_PORT;
SIP_PORT serverip[] = {
	 {"192.168.1.178",4001,ETH_CAN1},
	 {"192.168.1.178",4002,ETH_CAN2},
	 {"192.168.1.178",4003,ETH_CAN3},
	 {"192.168.1.178",4004,ETH_CAN4},
	 {"192.168.1.100",4005,ETH_GPS},
	 {"192.168.1.101",4006,ETH_PATH_CAL},
	};

const uint8_t port_num = sizeof(serverip)/sizeof(serverip[0]);


 uint32_t  ethtime =0 ;
 void Eththread_handler_func(sigval_t v)
{
   
	qeth_rev->p_timer->os_timer_handler(pthread_task[eththread_taskid].task_id);
		
}

 
 /**
 *@brief  EthrevThread  construct function -- create epoll and init some variable
 *param : NO
 * return: NO
 */

EthrevThread::EthrevThread(const char *m_name):
CThread(m_name)
{
    
	for(uint8_t i=0; i<TASK_NUM;i++ )
		{
		  if(0 == strcmp(m_name,pthread_task[i].task_name))
		  	{
		  	    task_id = pthread_task[i].task_id;
				task_event = pthread_task[i].task_event;
				
				break;
		  	}
		}

    m_iUserCount = port_num;	
//	m_iEpollFd = epoll_create(_MAX_SOCKFD_COUNT);  
	m_pAllUserStatus = (struct UserStatus*)malloc(port_num*sizeof(struct UserStatus));  

   	for(int iuserid=0; iuserid< port_num ; iuserid++)	
	{  
		m_pAllUserStatus[iuserid].iUserStatus = CONNECT_FAIL;  
		m_pAllUserStatus[iuserid].iSockFd = -1;  
	}  
	memset(m_iSockFd_UserId, 0xFF, sizeof(m_iSockFd_UserId)); 

}

/**
*@brief  EthrevThread  deconstruct function -- free m_pAllUserStatus
*param : NO
* return: NO
*/

EthrevThread::~EthrevThread()
{
    free(m_pAllUserStatus); 
}

/**
*@brief  set sock is noblock
*param : NO
* return: NO
*/

void EthrevThread:: setSockNonBlock(int sock)
{
	int flags;
	flags = fcntl(sock, F_GETFL, 0);
	if (flags < 0) {
		ERR_EXIT("fcntl(F_GETFL) failed");
		
	}
	if (fcntl(sock, F_SETFL, flags | O_NONBLOCK) < 0) {
		ERR_EXIT("fcntl(F_SETFL) failed");
		
	}
}

/**
*@brief  client connect server 
*param 1: iUserId -- server port id
*param 2: pServerIp -- server ip address
*param 3: uServerPort -- server port 
* return:  m_pAllUserStatus[iUserId].iSockFd   --  client sockfd
*/
int EthrevThread::ConnectToServer(int iUserId,const char *pServerIp,unsigned short uServerPort)  
{  
     if( (m_pAllUserStatus[iUserId].iSockFd = socket(AF_INET,SOCK_STREAM,0) ) < 0 )	
	{  		
		m_pAllUserStatus[iUserId].iSockFd = -1;  
		//ERR_EXIT("socket failed");	
	}  
  
	struct sockaddr_in addr;  
	bzero(&addr, sizeof(addr));  
	addr.sin_family = AF_INET;	
	addr.sin_port = htons(uServerPort);  
	addr.sin_addr.s_addr = inet_addr(pServerIp);  
  
	int ireuseadd_on = 1;///< support IO mutil
	setsockopt(m_pAllUserStatus[iUserId].iSockFd, IPPROTO_TCP, TCP_NODELAY, &ireuseadd_on, sizeof(ireuseadd_on));  
  
	
	setSockNonBlock(m_pAllUserStatus[iUserId].iSockFd); ///<noblock
         connect(m_pAllUserStatus[iUserId].iSockFd, (const sockaddr*)&addr, sizeof(addr));  
	
	m_pAllUserStatus[iUserId].iUserStatus = CONNECT_OK;  
		m_pAllUserStatus[iUserId].iSockFd = m_pAllUserStatus[iUserId].iSockFd;
	return m_pAllUserStatus[iUserId].iSockFd; 
}

/**
*@brief  client send data to  server 
*param 1: iUserId -- server port id
*param 2: pSendBuff -- send server data
*param 3: iBuffLen -- need to send server data len 
* return:  isendsize --  send real data len
*/

int EthrevThread::SendToServerData(int iUserId,const unsigned char *pSendBuff,int iBuffLen)  
{  
	int isendsize = -1;  
	    isendsize = send(m_pAllUserStatus[iUserId].iSockFd, pSendBuff, iBuffLen, MSG_DONTWAIT);	 
	return isendsize;  
} 

/**
*@brief  client receive  data from server 
*param 1: iUserId -- server port id
*param 2: pRecvBuff -- receive server data
*param 3: iBuffLen -- receive server data len 
* return:  isendsize --  receive real data len
*/

int EthrevThread::RecvFromServer(int iUserId,unsigned char *pRecvBuff,int iBuffLen)	
{  
	int irecvsize = -1;  
	  
		irecvsize = recv(m_pAllUserStatus[iUserId].iSockFd, pRecvBuff, iBuffLen, MSG_DONTWAIT);  
	
 
	return irecvsize;  
}  


/**
*@brief  delete sockfd from epoll
*param 1: iSockFd -- client sockfd
* return:  true or false 
*/

bool EthrevThread::DelEpoll(int iSockFd)  
{  

  bool bret = false;  
  struct epoll_event event_del;  
  if(0 < iSockFd)  
  {  
	  event_del.data.fd = iSockFd;	
	  event_del.events = 0;  
	  if( 0 == epoll_ctl(m_iEpollFd, EPOLL_CTL_DEL, event_del.data.fd, &event_del) )  
	  {  
		  bret = true;	
	  }  
	  else	
	  {  
		
	  }  
	  m_iSockFd_UserId[iSockFd] = -1;  
  }  
  else	
  {  
	  bret = true;	
  
  }  
  return bret;	
}  

/**
*@brief  close sockfd 
*param 1: iUserId -- service port id
* return: NO
*/  
void EthrevThread::CloseUser(int iUserId)  
{  
	if(m_pAllUserStatus[iUserId].iUserStatus == CONNECT_OK)
	{
      close(m_pAllUserStatus[iUserId].iSockFd);  
      m_pAllUserStatus[iUserId].iUserStatus = CONNECT_FAIL;  
	  m_pAllUserStatus[iUserId].iSockFd = -1;  
	  }

}  

/**
*@brief  init  client  -- connect service
*param : NO
* return:  NO
*/  	  
void EthrevThread::init_socket_client(void)
{
   
    int isocketfd = -1;  
   	for(int iuserid=0; iuserid<m_iUserCount; iuserid++)  
	{  
	  if(m_pAllUserStatus[iuserid].iUserStatus == CONNECT_FAIL)
	  {
		//struct epoll_event event;  
		isocketfd = ConnectToServer(iuserid, serverip[iuserid].Sip_addr, serverip[iuserid].S_port);  
		if(isocketfd < 0)  
		{
			//printf( "connect fail\n");   
		}
		else
	    {
	       
		m_iSockFd_UserId[isocketfd] = iuserid;	
  
		/*event.data.fd = isocketfd;	
		event.events = EPOLLIN | EPOLLET;	
  	
		epoll_ctl(m_iEpollFd, EPOLL_CTL_ADD, event.data.fd, &event);  */
		}//end else
	  }
    }//end for
}


/**
*@brief  enter mainloop 
*param : NO
* return:  NO
*/  

void EthrevThread::mainLoop()
{
	 prctl(PR_SET_NAME,pthread_task[task_id].task_name);   
	//printf("eth0 tid is =%ld\n",gettid());
			   cpu_set_t mask;
        CPU_ZERO(&mask);
        CPU_SET(0, &mask); 

        if (pthread_setaffinity_np(pthread_self(), sizeof(mask), &mask) < 0) {
            perror("pthread eth error\n");
        }
       unsigned char send_buffer[14]  = {0};
       os_event_type event_mask;
       uint8_t  data[5] = {0,6,0,10,3};
       uint8_t rev_buffer[18] = {0};
       uint8_t rcv_rtk_buffer[170] = {0};
       uint8_t  path_switch_buffer[PATH_NUM] = {0};
      	signal(SIGPIPE,SIG_IGN);
	init_socket_client( ); 
	qeth_rev->p_timer->os_timer_create(task_id);
	qeth_rev->p_timer->set_timerspec(data);
	qeth_rev->p_timer->os_timer_start( );
      
	 while(1)
    {
        
         event_mask = qeth_rev->p_timer->pt_mutex->os_event_wait(task_id); 
	if((event_mask & NEW_MESSAGE_EVENT) == NEW_MESSAGE_EVENT)
{
           
			 
		
			  int iuserid,iclientsockfd;
			    event_mask &= ~NEW_MESSAGE_EVENT;
			  while(qeth_rev->recvMsg(task_id, send_buffer,sizeof(send_buffer)))
			  {
			   
			     for(iuserid=0; iuserid<m_iUserCount; iuserid++) 
			     {
			         
			         if((send_buffer[0] == serverip[iuserid].signal)  && (m_pAllUserStatus[iuserid].iUserStatus == CONNECT_OK))
			   {
			       int iret = SendToServerData(iuserid,send_buffer+1,sizeof(send_buffer)-1);  
                               break;
			   }  
			
			  }
			  	} //end while   
		}

    	if((event_mask & PERDIOC_TIMER_EVENT) == PERDIOC_TIMER_EVENT)
    	{
    	     event_mask &=~ PERDIOC_TIMER_EVENT;
              init_socket_client( ); 
		
  							  struct timespec tks;
		 clock_gettime(CLOCK_MONOTONIC, &tks);
	         uint32_t ktime = tks.tv_sec * 1000 + tks.tv_nsec / 1000000;	
		 if(((ktime-ethtime) < 4) || (ktime-ethtime) >8 )
		 {
		      printf("....eth period time = %d\n",ktime-ethtime);
		 }
		ethtime =  ktime;
		#ifdef  ETH_DEBUG_PRINTF 
		struct timespec ts;
	         clock_gettime(CLOCK_MONOTONIC, &ts);
				 uint64_t time = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
		#endif
	        	
		for(int iuserid=0; iuserid<m_iUserCount; iuserid++)  
		{
  			 memset(rev_buffer,0,14);
		         memset(rcv_rtk_buffer,0,170);
			 memset(path_switch_buffer,0,PATH_NUM);
			if(iuserid == 5)
			{
			    int pathlen = 0;
			    while(( pathlen =  RecvFromServer(iuserid, path_switch_buffer, PATH_NUM))>0)
			     {

				     qpath->sendMsg(pathplan_taskid,path_switch_buffer, sizeof(path_switch_buffer));
					
			  	
			        }//end while
			        if(pathlen == 0)
			        {
			            
				    CloseUser(iuserid);  
			        }
			}
			else if(iuserid == 4)
			 {
			   int maplen = 0;
			   while(( maplen =  RecvFromServer(iuserid, rcv_rtk_buffer, 170))>0)
			   {
				
				        
					        qmap->sendMsg(map_taskid,rcv_rtk_buffer, sizeof(rcv_rtk_buffer));
			  	
			        }//end while
			        if(maplen == 0)
			        {
			            
				    CloseUser(iuserid);  
			        }
			   
			 }//end  if(iuserid == 4)
			 else
			 {
  			     int ilen =  0;
			     while((ilen = RecvFromServer(iuserid, &rev_buffer[5], 13))>0)
			   {
			         	struct timespec ts;
				       clock_gettime(CLOCK_MONOTONIC, &ts);
					uint32_t time = ts.tv_sec * 1000 + ts.tv_nsec / 1000000;
					  rev_buffer[0] = serverip[iuserid].signal;
					rev_buffer[1] = (time >> 24) & 0xFF;
					rev_buffer[2] = (time >> 16) & 0xFF;
					rev_buffer[3] = (time >> 8) & 0xFF;
					rev_buffer[4] =  time & 0xFF;
					qfusing_rev->sendMsg(fusingthread_taskid,rev_buffer, sizeof(rev_buffer));
				
  			 } 
		            if(ilen == 0)
			        {
			            
				    CloseUser(iuserid);  
			        }
			    
                      }//end esle
 
				
		}
         #ifdef  ETH_DEBUG_PRINTF 
				clock_gettime(CLOCK_MONOTONIC, &ts);
				uint64_t   period = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
			         printf("eth  function time =  %ld\n",period -time);
			       #endif      
						
}
			   	

    	}
  
}


 
 
