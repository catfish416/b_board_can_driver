/*===========================================================================*/
/**
 * @file process_handler.c
 *
 * Basic code to start and stop processes.
 *
 *  *
 *------------------------------------------------------------------------------


/*===========================================================================*
 * Header Files
 *===========================================================================*/
#include <errno.h>
#include "process_handler.h"
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>


/*===========================================================================*
 * Local Preprocessor #define MACROS
 *===========================================================================*/

/*===========================================================================*
 * Local Type Declarations
 *===========================================================================*/

/*===========================================================================*
 * Exported Const Object Definitions
 *===========================================================================*/

/*===========================================================================*
 * Local Object Definitions
 *===========================================================================*/

/*===========================================================================*
 * Local Function Prototypes
 *===========================================================================*/

/*===========================================================================*
 * Local Inline Function Definitions and Function-Like Macros
 *===========================================================================*/

/*===========================================================================*
 * Function Definitions
 *===========================================================================*/

/**
* Start a processes.  The process_info structure contains the filename to
* execute, along with any arguments and environment variables.  The structure
* is then populated with the PID and running status.
*/
void PH_Start_Process(PH_Process_Info_T * process_info)
{
   int status;
 
   process_info->running = true;


   process_info->pid = vfork();
   
   if (-1 == process_info->pid)
   {
      printf("Unable for fork for %s \n", process_info->filename);
   }
   
   if (0 == process_info->pid)
   {
      /* Child process */
      unsigned int i;

        status = execve(
         process_info->filename,
         process_info->argv,
         process_info->envp
         );
      /* Should not return */
      if(-1 == status)
      {
         printf("Process failed: %s\n" , process_info->filename, );
      }
      _exit(0);
   }
   
   printf("Process started: %s, PID: %d\n", process_info->filename, process_info->pid);
}


/**
* Stop a processes.  The process_info structure contains the PID to
* stop.  The structure is updated for the running status.
*/
void PH_Stop_Process(PH_Process_Info_T * process_info)
{
   int status;
   
   process_info->running = false;
   
   printf("Terminating process: %s", process_info->filename);
   status = kill(process_info->pid, SIGTERM);   /* Try an orderly shutdown first */
   if (-1 == status)
   {
      printf("Killing process: %s", process_info->filename);
      status = kill(process_info->pid, SIGKILL);   /* Kill if SIGTERM did not work */
      
      if (-1 == status)
      {
         printf("Process could not be killed: %s", process_info->filename);
      }
   }
}


