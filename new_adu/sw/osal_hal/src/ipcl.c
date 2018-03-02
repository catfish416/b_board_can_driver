#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ipcl.h"

static uint8_t  cmd_w_queue[(BLOCKS/8)+1] = {0};
static uint8_t  cmd_r_t_queue[(BLOCKS/8)+1] = {0};
 uint8_t arrary[DATA_NUM] = {0};

/*
 * Add a message to the transmit Queue 
 */

void W_Queue_Massage(uint8_t block)
{
    cmd_w_queue[block/8] |= (1 << (block%8));

}
/*
 * Add a message to the receive Queue 
 */

void r_t_Queue_Massage(uint8_t block)
{
    cmd_r_t_queue[block/8] |= (1 << (block%8));
}

/**
 * Remove a message to the transmit Queue 
 */

void W_Dequeue_Massage(uint8_t block)
{
    cmd_w_queue[block/8] &= ~(1 << (block%8));
}
/**
 * Remove a message to the transmit Queue 
 */

void R_t_Dequeue_Massage(uint8_t block)
{
    cmd_r_t_queue[block/8] &= ~(1 << (block%8));
}

/**
 * Check if message is in  Transmit table
 */

bool_t W_Getqueue_Massage(uint8_t block)
{
     return ((cmd_w_queue[(block / 8)] & (1 << (block % 8))) ? 1:0);
}


/**
 * Check if message is in  Transmit table
 */

bool_t R_t_Getqueue_Massage(uint8_t block)
{
   return ((cmd_r_t_queue[(block / 8)] & (1 << (block % 8))) ? 1:0);
}

/**
 * Find message in IPCL Transmit table
 */

uint8_t Search_w_queue(void)
{
  uint8_t block = 0;
 
  while((BLOCKS>block) && (!W_Getqueue_Massage(block))){
   block++;
   
  }
  if(BLOCKS > block){
  	 W_Dequeue_Massage(block);
  }
   
 return block;
}


uint8_t Search_r_t_queue(void)
{
  uint8_t block = 0;
  while((BLOCKS>block) && (!R_t_Getqueue_Massage(block))){
   block++;
   
   }
  if(BLOCKS>block){
  R_t_Dequeue_Massage(block);
  }
 return block;
}

/**
 * Send message
 */

void transmit_message(uint8_t cmd, Frame_Type *message,uint8_t queue_block)
{   
  
   
    switch (cmd)
	{
	   case CMD_W:
	   	        message->CMD = cmd;
	   	         message->BLOCK = queue_block;
			memcpy(message->Data,(arrary+queue_block*16),16);
			 message->CRC = CRC8_function((uint8_t*)message,18);
			message->Invild	= 0xAA;
			
             break;
	   case CMD_R_T:
	   	       message->CMD = cmd;
			message->BLOCK = queue_block;
			memset(message->Data,0xAA,16);
			message->CRC = CRC8_function((uint8_t*)message,18);
			message->Invild	= 0xAA;
			 break;
		case CMD_R_R:
			 message->CMD = cmd;
			 message->BLOCK = 0xAA;
			 memset(message->Data,0xAA,16);
			 message->CRC = CRC8_function((uint8_t*)message,18);
		 	 message->Invild	= 0xAA;
			break;
		default:
			break;
	}
}





