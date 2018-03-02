#ifndef PROCESS_HANDLER_H
#   define PROCESS_HANDLER_H

#   include "reuse.h"
#   include <sys/types.h>
#   include <unistd.h>

/*===========================================================================*
 * Exported Preprocessor #define Constants
 *===========================================================================*/

/*===========================================================================*
 * Exported Preprocessor #define MACROS
 *===========================================================================*/

#   ifdef __cplusplus
extern "C"
{ /* ! Inclusion of header files should NOT be inside the extern "C" block */
#   endif /* __cplusplus */
/*===========================================================================*
 * Exported Type Declarations
 *===========================================================================*/
typedef struct
{
   const char   * filename;
   char * const * argv;
   char * const * envp;
   pid_t          pid;
   bool_t         running;
} PH_Process_Info_T;

/*===========================================================================*
 * Exported Const Object Declarations
 *===========================================================================*/

/*===========================================================================*
 * Exported Function Prototypes
 *===========================================================================*/
void PH_Start_Process(PH_Process_Info_T * process_info);
void PH_Stop_Process(PH_Process_Info_T * process_info);

/*===========================================================================*
 * Exported Inline Function Definitions and #define Function-Like Macros
 *===========================================================================*/

#   ifdef __cplusplus
}         /* extern "C" */
#   endif /* __cplusplus */

#endif                          /* PROCESS_HANDLER_H */
