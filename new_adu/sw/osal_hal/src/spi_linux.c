/*===========================================================================*/
/**
 * @file spi_linux.c
 *
 * implements  SPI master interface
 *
 */
/*==========================================================================*/

/*===========================================================================*
 * Header Files
 *===========================================================================*/

#include "resue.h"
#include "spi_cfg.h"
#include <string.h>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include "hal_plock.h"
#include "spi.h"



/*===========================================================================*
 * Local Preprocessor #define Constants
 *===========================================================================*/

#ifndef SPI_LOCK_TIMEOUT_MS
/**
 * Default time limit to wait for a SPI channel (on SPI_Open)
 */
#define SPI_LOCK_TIMEOUT_MS      (10000)
#endif 

/**
 * Define number of unique spi channels
 */
#define SPI_NUM_CHANNELS   Num_Elems(spi_names)

bool g_SPI_open_flag = false;

/*===========================================================================*
 * Local Type Declarations
 *===========================================================================*/

typedef struct SPI_Channel_Name_Tag
{
   uint8_t channel;              /**< Channel ID */
   const char * dev_name;        /**< Device */
   const char * lock;            /**< lock */
} SPI_Channel_Name_T;

typedef struct SPI_Info_Tag
{
    int32_t handle;       /**< device handle */

	uint32_t speed_hz;      /**< device's bitrate */
	uint16_t delay_usecs;   /**< device's wordsize */
	uint8_t	bits_per_word; /**< If nonzero, how long to delay after the last bit transfer
                           before optionally deselecting the device before the next transfer. */
	uint8_t  cs_change;     /**<  True to deselect device before starting the next transfer */
} SPI_Info_T;

/*===========================================================================*
 * Exported Const Object Definitions
 *===========================================================================*/

/*===========================================================================*
 * Local Object Definitions
 *===========================================================================*/

#define SPI_Define_Channel(chan, dev, lock) {chan, dev, lock},

static const SPI_Channel_Name_T spi_names[] =
{
   SPI_Define_Channels
};

static SPI_Info_T spi_info[SPI_NUM_CHANNELS];

/**
 * Determine if SPI has been initialized
 */
static HAL_Util_Once_T SPI_Init = HAL_UTIL_ONCE_INIT;

/**
 * Locks used to restrict access to single physical channel
 */
static HAL_PMutex_T SPI_Locks[SPI_NUM_CHANNELS];

 pthread_mutex_t spi_mutex;
/*===========================================================================*
 * Local Function Prototypes
 *===========================================================================*/
static SPI_Info_T * Get_SPI(uint8_t channel);
static const char *Get_SPI_Driver(uint8_t channel);
static void Set_Configuration(uint8_t channel, int fd, const SPI_Config_T * config);
static void SPI_Initialize(void);
static bool_t SPI_Lock(uint8_t channel);
static void SPI_Unlock(uint8_t channel);

/*===========================================================================*
 * Local Inline Function Definitions and Function-Like Macros
 *===========================================================================*/

/*===========================================================================*
 * Function Definitions
 *===========================================================================*/

/**
 * Returns a pointer to the SPI Info for a given channel
 *
 * @param channel - SPI channel ID
 *
 * @return pointer to SPI info descriptor
 */
static SPI_Info_T * Get_SPI(uint8_t channel)
{
    uint8_t i;

    for (i = 0; (i < SPI_NUM_CHANNELS) && (spi_names[i].channel == channel); i++)
    {
      /* do nothing here */
      break;
    }

    if (SPI_NUM_CHANNELS == i)
    {
        printf("Get_SPI no found\n");
        return NULL;
    }
    else
        return &spi_info[i];
}

/**
 * Returns a pointer to the SPI Device Name for a given channel
 *
 * @param channel - SPI channel ID
 *
 * @return pointer to SPI Device Name
 */
static const char *Get_SPI_Driver(uint8_t channel)
{
    uint8_t i;

    for (i = 0; i < SPI_NUM_CHANNELS; i++)
    {
        if (spi_names[i].channel == channel)
            break;
        /* do nothing here */
    }

    if (SPI_NUM_CHANNELS == i)
    {
        printf("Get_SPI_Driver no found\n");
        return NULL;
    }
    else
        return spi_names[i].dev_name;
}

/**
 * Configures a SPI channel
 *
 * @param channel - SPI channel ID
 * @param fd - handle to SPI device
 * @param config - Desired configuration options
 *
 */
static void Set_Configuration(uint8_t channel, int fd, const SPI_Config_T * config)
{
   uint32_t speed;
   uint8_t mode;
   uint8_t lsb;
   uint8_t bits;
   int spi_flag = -1;
   mode = 0;
   
   if (config->clock_polarity)
   {
      
      mode |= SPI_CPOL;
	 
   }
   if (config->clock_phase)
   {
      mode |= SPI_CPHA;
   }
  spi_flag = ioctl(fd, SPI_IOC_WR_MODE, &mode);
  if(spi_flag == -1)
  {
     printf("spi set error\n");
  }
   
   lsb = !config->MSB;
   ioctl(fd, SPI_IOC_WR_LSB_FIRST, &lsb);
  
   bits = config->char_length;
    ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
   

   speed = config->frequency;
    ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
   
}

/**
 * Initialize channel mutexes
 */
static void SPI_Initialize(void)
{
   uint8_t i;

   for (i = 0; i < SPI_NUM_CHANNELS; i++)
   {
      if (NULL != spi_names[i].lock)
      {
         HAL_Create_PMutex(&SPI_Locks[i], spi_names[i].lock);
      }
   }
}

/**
 * Lock physical channel
 *    Multiple "logical" channel can be tied to same SPI Bus
 */
static bool_t SPI_Lock(uint8_t channel)
{
   uint8_t i;
   bool_t success = false;

   for (i = 0; i < SPI_NUM_CHANNELS; i++)
   {
      if (spi_names[i].channel == channel)
      {
         if (NULL != spi_names[i].lock)
         {
            success = HAL_Lock_PMutex(SPI_Locks[i]);
         }
         else
         {
            success = true;
         }
         break;
      }
   }

   return success;
}

/**
 * Release physical channel
 */
static void SPI_Unlock(uint8_t channel)
{
   uint8_t i;

   for (i = 0; i < SPI_NUM_CHANNELS; i++)
   {
      if (spi_names[i].channel == channel)
      {
         if (NULL != spi_names[i].lock)
         {
            (void) HAL_Unlock_PMutex(SPI_Locks[i]);
         }
         break;
      }
   }
}

/*
 * Initializes SPI Master channel
 */
int32_t SPI_Open(uint8_t channel, const SPI_Config_T * config)
{
  if (true == g_SPI_open_flag)
      return 0;

  int32_t fd = -1;

   HAL_Util_Once(&SPI_Init, SPI_Initialize);

   if (SPI_Lock(channel))
   {
         SPI_Info_T * spi = Get_SPI(channel);

         spi->handle = open(Get_SPI_Driver(channel), O_RDWR);
             
         if (spi->handle >= 0)
         {
           fd = spi->handle;
            Set_Configuration(channel, spi->handle, config);
			g_SPI_open_flag = true;
         }
         else
         {
            printf("Error %d opening SPI channel %d Input File %s", (int)spi->handle, channel, Get_SPI_Driver(channel));
            
         }
      
   }
   else
   {
      printf("Unable to lock SPI channel %d", channel);
      
   }

   return fd;
}

/**
 * Shuts down SPI channel
 * @param channel - Hardware specific channel identifer
 */
void SPI_Close(uint8_t channel)
{
    if (false == g_SPI_open_flag)
        return;

    SPI_Info_T * spi = Get_SPI(channel);
    if (NULL == spi)
        return;
    
    close(spi->handle);
    spi->handle = -1;
    SPI_Unlock(channel);

    g_SPI_open_flag = false;

    return;
}

/**
 * Routine to request a SPI operation from driver
 *
 * @param spi - pointer to SPI descriptor
 * @param wdata - pointer to data to transmit (NULL if read only)
 * @param rdata - pointer to recieve data buffer (NULL if write only)
 * @param num_bytes - number of bytes to transfer
 *
 * @return true if successful
 */
static bool_t Do_Transfer(SPI_Info_T * spi, const void * wdata, void * rdata, size_t len)
{
   struct spi_ioc_transfer xfer;
   int status = -1;
   
   memset(&xfer, 0, sizeof(xfer));

   xfer.tx_buf = (unsigned long) wdata;
   xfer.rx_buf = (unsigned long) rdata;
   xfer.len = len;
  
   status = ioctl(spi->handle, SPI_IOC_MESSAGE(1), &xfer);
 
   if (status < 0)
   {
      printf("SPI Transfer Error %d\n", status);
   }
  
   return (status >= 0);
}

/*
 * SPI Master Transmit  (read data is ignored)
 *    Blocks until write finishes
 */
bool_t SPI_Write(uint8_t channel, const void *wdata, size_t num_bytes)
{
   bool_t success = true;
    
      success = Do_Transfer(Get_SPI(channel), wdata, NULL, num_bytes);
	 
      return success;
}

/*
 * SPI Master Recieve  (transmit data is fixed)
 *    Blocks until read finishes
 */
bool_t SPI_Read(uint8_t channel, void *rdata, size_t num_bytes)
{
   bool_t success;
   
      success = Do_Transfer(Get_SPI(channel), NULL, rdata, num_bytes);
    if(success)
   	{

	}
  
   return success;
}

/*
 * SPI Master Parallel Transmit / Recieve
 *    Blocks until transfer finishes
 */
bool_t SPI_Transfer(uint8_t channel, const void *wdata, void *rdata, size_t num_bytes)
{
   bool_t success;

      success = Do_Transfer(Get_SPI(channel), wdata, rdata, num_bytes);

   return success;
}



/*===========================================================================
*
 * @file spi_linux.c
 *
 * @section RH REVISION HISTORY (top to bottom: first revision to last revision)
 *
 * - 25-Aug-2016 Jierong Wu
 *    Initial Linux wrapper
===========================================================================*/
