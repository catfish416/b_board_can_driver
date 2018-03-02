#ifdef __cplusplus
extern "C" {
#endif

#ifndef _REUSE_H_
#define _REUSE_H_
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
 #include <string.h> 
  
   typedef unsigned int uint32;
   typedef unsigned char uint8;
   typedef unsigned short uint16;
   typedef signed char int8;
   typedef signed short int16;
   typedef signed int int32;
   typedef unsigned int vbittype;
   typedef uint64_t uint64;
   typedef unsigned char uint8_t;
   typedef signed char int8_t;
   typedef signed short int16_t;
   typedef unsigned short uint16_t;
   typedef signed int int32_t;
   typedef unsigned int uint32_t;
   typedef char char_t;
   typedef float float32_t;
   typedef double float64_t;
   typedef uint8_t BOOL;
   typedef uint8_t bool_t;
   typedef uint8_t os_event_type;
   #define Num_Elems(array)    (sizeof(array)/sizeof(array[0]))
   #define STATIC_VAR   static
   #define EXTERN_VAR   extern

#endif

#ifdef __cplusplus
}
#endif /* end of __cplusplus */
