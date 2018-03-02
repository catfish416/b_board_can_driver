#ifndef _EthrevThread_h_
#define _EthrevThread_h_
#include "define.h"
#include "CThread.h"
#include "CLinuxMsgQueue.h"


//.....................................................................................................................................

// macro defines

//......................................................................................................................................

#define _MAX_SOCKFD_COUNT 5 
   

   /** 
	* @brief user status
	*/	
   typedef enum _EPOLL_USER_STATUS_EM  
   {  
		   CONNECT_FAIL= 0,  
		   CONNECT_OK = 1,//connect success
		  
   }EPOLL_USER_STATUS_EM;  
	 
   /*@brief 
	*@CEpollClient class 
	*/	
   struct UserStatus  
   {  
		   EPOLL_USER_STATUS_EM iUserStatus;///<user status
		   int iSockFd;///<sockfd
		   
   };  
 
 /**
 *@brief  fusing class
 * inherit CThread
 */


class EthrevThread:public CThread
{

	public:
		EthrevThread(const char *m_name);
		~EthrevThread();
        
		virtual void mainLoop();
        void setSockNonBlock(int sock);
        int ConnectToServer(int iUserId,const char *pServerIp,unsigned short uServerPort);  
        void init_socket_client(void);
 
        int SendToServerData(int iUserId,const unsigned char *pSendBuff,int iBuffLen); 
            
         int RecvFromServer(int iUserid,unsigned char *pRecvBuff,int iBuffLen);  
         
         void CloseUser(int iUserId);  
  
 
         bool DelEpoll(int iSockFd);
		
private:
		uint8_t task_id;
		os_event_type task_event;
		int    m_iUserCount;///<user num
        struct UserStatus *m_pAllUserStatus;//</user stutas array
        int    m_iEpollFd;///<need to create epollfd
        int    m_iSockFd_UserId[_MAX_SOCKFD_COUNT];//user id and socket id related
		
	
              

};


#endif

