#ifndef SPI_CFG_H
#define SPI_CFG_H
#include "resue.h"
/*===========================================================================*\
 * Header Files
\*===========================================================================*/

/*===========================================================================*\
 * Preprocessor #define X-MACROS
\*===========================================================================*/
   
#define SPI_CLOCK    2500000


#define SPI_Define_Channels \
   SPI_Define_Channel(0x00, "/dev/spidev0.0", "SPI_BUS") \
   SPI_Define_Channel(0x01, "/dev/spidev1.0", NULL) \
   SPI_Define_Channel(0x02, "/dev/spidev2.0", NULL) \
   SPI_Define_Channel(0x03, "/dev/spidev3.0", "SPI_BUS") \


/*
 * SPI config.
 */

#define DRV_SPI_CFG \
{      \
    SPI_CLOCK,         /* clock 2MHz   */ \
    8,                  /* 8bit char     */ \
    false,              /* clk idle high */ \
    true,               /* sample 2nd edge */ \
    true,               /* MSB first     */ \
    1                   /* 1us delay      */ \
}                       \

#define  V850_channel  (0x00)
#define  TC2970_channel  (0x03)

enum CMD_FOMAT
{
    CMD_W = 0x01,
    CMD_R = 0X02,
	CMD_R_T,
	CMD_R_R,
};

typedef struct frame_type
{
  uint8_t CMD;
  uint8_t BLOCK;
  uint8_t Data[16];
  uint8_t CRC;
  uint8_t Invild;
 }Frame_Type;

#endif /* SPI_CFG_H */
