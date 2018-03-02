#ifndef SPI_H
#define SPI_H


/*===========================================================================*
 * Header Files
 *===========================================================================*/
#include "resue.h"



/*===========================================================================*
 * Exported Preprocessor #define MACROS
 *===========================================================================*/

/*===========================================================================*
 * Exported Type Declarations
 *===========================================================================*/

/** SPI configuration
 */
typedef struct SPI_Config_Tag
{
   uint32_t frequency;          /**< SPI clock frequency in Hertz */
   uint8_t char_length;         /**< bits per transfer */
   bool_t  clock_polarity;      /**< Clock Idle high (true) or Low (false) */
   bool_t  clock_phase;        /**<Sample edge false(first edge) true(sencond edge) */
   bool_t  MSB;                /**< true - data sent MSB, false LSB */
   uint8_t delay_uS;           /**< delay between transfers */
} SPI_Config_T;


/*===========================================================================*
 * Exported Const Object Declarations
 *===========================================================================*/

/*===========================================================================*
 * Exported Function Prototypes
 *===========================================================================*/
#   ifdef __cplusplus
extern "C"
{                               /* ! Place all function prototypes inside these braces ! */
#   endif                       /* __cplusplus */

/*===========================================================================*
 * Exported Inline Function Definitions and #define Function-Like Macros
 *===========================================================================*/

/**
 * Initializes SPI Master channel
 *
 * @param channel - Hardware specific channel identifer
 * @param config - SPI configuration 
 *
 * @return >= 0 channel number if sucessful, < 0 error code
 */
   int32_t SPI_Open(uint8_t channel, const SPI_Config_T * config);

/**
 * Shuts down SPI channel
 * @param channel - Hardware specific channel identifer
 */
   void SPI_Close(uint8_t channel);

/**
 * SPI Master Transmit  (read data is ignored)
 *    Blocks until write finishes
 *
 * @param channel - Hardware specific channel identifer
 * @param wdata - pointer to data to transmit
 * @param num_bytes - number of bytes to transmit
 *
 * @return true if write successful
 */
   bool_t SPI_Write(uint8_t channel, const void *wdata, size_t num_bytes);

/**
 * SPI Master Recieve  (transmit data is fixed)
 *    Blocks until read finishes
 *
 * @param channel - Hardware specific channel identifer
 * @param rdata - pointer to recieve data buffer
 * @param num_bytes - number of bytes to transmit
 *
 * @return true if read successful
 */
   bool_t SPI_Read(uint8_t channel, void *rdata, size_t num_bytes);

/**
 * SPI Master Parallel Transmit / Recieve 
 *    Blocks until transfer finishes
 *
 * @param channel - Hardware specific channel identifer
 * @param wdata - pointer to data to transmit
 * @param rdata - pointer to recieve data buffer
 * @param num_bytes - number of bytes to transfer
 *
 * @return true if transfer successful
 */
   bool_t SPI_Transfer(uint8_t channel, const void *wdata, void *rdata, size_t num_bytes);

#   ifdef __cplusplus
}                               /* extern "C" - function prototypes must precede this brace */
#   endif                       /* __cplusplus */

#endif                          /* SPI_H */
