                                                                                      /*==========================================================================*/

/*===========================================================================*\
 * Header Files
 \*===========================================================================*/

#include "hal_plock.h" /* !!! MUST occur before following ifndef check !!! */

#include <sys/file.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pthread.h>

/*===========================================================================*\
 * Local Preprocessor #define Constants
 \*===========================================================================*/

/**
 * The directory name holding the locks
 */
#define LOCK_ROOT "/tmp/locks/"

/**
 * Maximum path length (LOCK_ROOT plus lock name
 *    Should be eliminated with dynamic allocation
 */
#define MAX_LOCK_PATH 128  

/*
 *  Creates a multiprocess pmutex.
 *    Opens / Create a lock file and returns file handle as mutex
 */
bool_t HAL_Create_PMutex(HAL_PMutex_T * pmutex, char const * name)
{

   char lock_path[MAX_LOCK_PATH];
   struct stat sb;
   int status;

   status = stat(LOCK_ROOT, &sb);
  
   if (status != 0)
   {
      status = mkdir(LOCK_ROOT, (S_IRWXU | S_IRWXG | S_IRWXO));

      if (status != 0)
      {
         printf("Error %d creating lock folder %s", status, LOCK_ROOT);
      }
   }

   snprintf(lock_path, MAX_LOCK_PATH, "%s%s.lock", LOCK_ROOT, name);

   *pmutex = open(lock_path, O_RDONLY | O_CREAT, (S_IRWXU | S_IRWXG | S_IRWXO));

   return (*pmutex >= 0);
}

/*
 *  Destroys a pmutex.
 *    Closes lock file
 */
bool_t HAL_Destroy_PMutex(HAL_PMutex_T pmutex)
{

   HAL_Unlock_PMutex(pmutex);
   close(pmutex);
   return true;
}

/*
 *  Locks a pmutex.
 *    Does an exclusive file lock without blocking
 */
bool_t HAL_Try_Lock_PMutex(HAL_PMutex_T pmutex)
{

   int result;

   result = flock(pmutex, LOCK_EX | LOCK_NB);

   return (0 == result);

}

/*
 *  Locks a pmutex.
 *    Does an exclusive file lock with blocking
 */
bool_t HAL_Lock_PMutex(HAL_PMutex_T pmutex)
{
   int result;

   result = flock(pmutex, LOCK_EX);

   return (0 == result);

}

/*
 *  Unlocks a pmutex.
 *    Removes file lock
 */
bool_t HAL_Unlock_PMutex(HAL_PMutex_T pmutex)
{
   int result;

   result = flock(pmutex, LOCK_UN);

   return (0 == result);

}

/*
 * Maps the POSIX Pthread pthread_once logic to SAL_UTIL_Once.
 */
void HAL_Util_Once(HAL_Util_Once_T *once_control, void (*init_func)(void))
{
   pthread_once(once_control, init_func);
}




