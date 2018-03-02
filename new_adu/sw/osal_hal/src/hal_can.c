
#include "hal_can.h"


struct sockaddr_can addr[2];	
struct ifreq ifr[2];	
int s_can[2];

/**
*@brief init socket can
*param 1: char *pcan  -- "can0" or "can1"
* return: no
*/
void  Initsocketcan(const char *pcan)
{
    int flags;
    	if(0 ==strcmp(pcan,"can0"))
    	{
    	     s_can[0] = socket(PF_CAN, SOCK_RAW, CAN_RAW); 	
	    strcpy(ifr[0].ifr_name, pcan );	
	    ioctl(s_can[0], SIOCGIFINDEX, &ifr[0]);			
	    addr[0].can_family = AF_CAN;	
	    addr[0].can_ifindex = ifr[0].ifr_ifindex;	
	    bind(s_can[0], (struct sockaddr *)&addr[0], sizeof(addr[0]));  
	    flags = fcntl(s_can[0], F_GETFL, 0);
	    fcntl(s_can[0], F_SETFL, flags | O_NONBLOCK);
	}
	else if(0 ==strcmp(pcan,"can1"))
	{
	     s_can[1] = socket(PF_CAN, SOCK_RAW, CAN_RAW); 	
	    strcpy(ifr[1].ifr_name, pcan );	
	    ioctl(s_can[1], SIOCGIFINDEX, &ifr[1]);			
	    addr[1].can_family = AF_CAN;	
	    addr[1].can_ifindex = ifr[1].ifr_ifindex;	
	    bind(s_can[1], (struct sockaddr *)&addr[1], sizeof(addr[1])); 
	   flags = fcntl(s_can[1], F_GETFL, 0);
	   fcntl(s_can[1], F_SETFL, flags | O_NONBLOCK);
		
	}
	else
	{}
}

/**
*@brief  receive can frame
*param 1: read_s  --  socket fd
* param 2:void *read_frame -- receive can frame buffer
* param 2:read_t --the size of can frame 
* return: read real size from can port
*/
int read_canFrame (int read_s, void *read_frame, int read_t)
{
        int bytes = read(read_s, read_frame, read_t);						
	 if(bytes != read_t)			

	 {				
	    /*printf("bytes=%d,recv Error frame\n!",bytes);	*/
	  return  -1;
			
	 }
	 return bytes;
}

/**
*@brief  write can frame
*param 1: write_s  --  socket fd
* param 2:void *write_frame -- write can frame buffer
* param 2:write_t --the size of can frame 
* return: write real size to can port
*/
int write_canFrame(int write_s, void *write_frame, int write_t)
{
     int bytes = write(write_s, write_frame, write_t);						
	 if(bytes != write_t)			

	 {				
	   /*printf("bytes=%d,Send Error frame\n!",bytes);	*/			
	   return  -1;	
	 }
	 return bytes;
}

