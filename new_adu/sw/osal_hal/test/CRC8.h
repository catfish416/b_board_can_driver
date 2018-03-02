#ifndef _CRC8_H_
#define _CRC8_H_
#include "resue.h"
//uint8 CRC_Byte(uint8 *ptr);
//uint8 CRC_function(uint8 *ptr,char length);
uint8_t CRC8_function(uint8_t *p, char counter);
uint8_t Getcrc_Master(Frame_Type *frame);
uint8_t Getcrc_Slave(Frame_Type *frame);

#endif
