#ifndef _IPCL_H
#define _IPCL_H
#include "spi.h"
#include "spi_cfg.h"
#include "CRC8.h"
#define BLOCKS 7
#define DATA_NUM  112

EXTERN_VAR uint8_t arrary[DATA_NUM] ;
EXTERN_VAR void W_Queue_Massage(uint8_t block);
EXTERN_VAR void r_t_Queue_Massage(uint8_t block);
EXTERN_VAR void W_Dequeue_Massage(uint8_t block);
EXTERN_VAR void R_t_Dequeue_Massage(uint8_t block);
EXTERN_VAR bool_t W_Getqueue_Massage(uint8_t block);
EXTERN_VAR bool_t R_t_Getqueue_Massage(uint8_t block);

EXTERN_VAR uint8_t Search_w_queue(void);
EXTERN_VAR uint8_t Search_r_t_queue(void);
EXTERN_VAR void transmit_message(uint8_t cmd, Frame_Type *message,uint8_t queue_block);




#endif 


