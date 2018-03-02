#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include "hal_plock.h"
#include "ipcl.h"


int main(void)
{
   int8_t spi_fd;
   uint8_t w_block = 0xFF,rt_block = 0xFF;
   SPI_Config_T spi_config = DRV_SPI_CFG;
   spi_fd = SPI_Open(V850_channel,&spi_config);
   if(spi_fd == -1 )
   	{
   	  printf("spi open fial!\n");
   	}
   while(1)
	{
	#if 0
    memset(Rx_buffer,0,sizeof(Rx_buffer));
	success =  SPI_Transfer(V850_channel,Tx_buffer,Rx_buffer,16);
	if(true == success)
	{
	    Tx_buffer[0] += 1;
	   printf("%d\n",Rx_buffer[0]);
	}
	else
	{
	
	   printf("spi commucation fail\n");
	}
	#else
     W_Queue_Massage(0);
	 W_Queue_Massage(1);
	 
	 while((w_block = Search_w_queue()) < BLOCKS )
	 {
	    transmit_message(V850_channel,CMD_W,w_block);
	 }
	 #endif
	}
	
   
	SPI_Close(V850_channel);
	return 0; 
}











