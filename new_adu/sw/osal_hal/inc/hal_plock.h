#ifndef _HAL_PLOCK_H
#define _HAL_PLOCK_H

/*===========================================================================*
 * Header Files
 *===========================================================================*/
#include <pthread.h>
#include "resue.h"
#include <pthread.h>

/** For POSIX systems map SAL_Util_Once_T to pthread_once_t. */
typedef pthread_once_t HAL_Util_Once_T;

typedef int HAL_PMutex_T;

/** For POSIX systems map SAL_UTIL_ONCE_INIT to PTHREAD_ONCE_INIT. */
#define HAL_UTIL_ONCE_INIT  PTHREAD_ONCE_INIT

EXTERN_VAR void HAL_Util_Once(HAL_Util_Once_T * once_control, void (*init_func) (void));
EXTERN_VAR bool_t HAL_Create_PMutex(HAL_PMutex_T * pmutex, char const * name);

EXTERN_VAR bool_t HAL_Destroy_PMutex(HAL_PMutex_T pmutex);


EXTERN_VAR bool_t HAL_Try_Lock_PMutex(HAL_PMutex_T pmutex);


EXTERN_VAR bool_t HAL_Lock_PMutex(HAL_PMutex_T pmutex);

EXTERN_VAR bool_t HAL_Unlock_PMutex(HAL_PMutex_T pmutex);

#endif  


