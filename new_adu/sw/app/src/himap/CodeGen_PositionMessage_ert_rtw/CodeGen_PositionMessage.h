/*
 * File: CodeGen_PositionMessage.h
 *
 * Code generated for Simulink model 'CodeGen_PositionMessage'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:31:34 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_PositionMessage_h_
#define RTW_HEADER_CodeGen_PositionMessage_h_
#include <stddef.h>
#include <string.h>
#ifndef CodeGen_PositionMessage_COMMON_INCLUDES_
# define CodeGen_PositionMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_PositionMessage_COMMON_INCLUDES_ */

#include "CodeGen_PositionMessage_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T gMaxOffset;                   /* '<Root>/MATLAB Function' */
  real_T gOffsetThresh;                /* '<Root>/MATLAB Function' */
  real_T gPreMapPositonOffset;         /* '<Root>/MATLAB Function' */
  real_T gPrePositionTimeCnt;          /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  real_T gPositionCircleCnt;           /* '<Root>/MATLAB Function' */
  real_T gPositionMap[6];              /* '<Root>/MATLAB Function' */
  boolean_T gPreMapPositonOffset_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gPrePositionTimeCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gPositionCircleCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gPositionMap_not_empty;    /* '<Root>/MATLAB Function' */
} DW_CodeGen_PositionMessage_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T ClearAllFlag;                 /* '<Root>/ClearAllFlag' */
} ExtU_CodeGen_PositionMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_PositionMessa_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_PositionMessage_T CodeGen_PositionMessage_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_CodeGen_PositionMessage_T CodeGen_PositionMessage_U;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ValidPositionIndex;      /* '<Root>/MATLAB Function' */
extern real_T PositionMap[6];          /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_PositionMessage_initialize(void);
extern void CodeGen_PositionMessage_step(void);
extern void CodeGen_PositionMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_PositionMess_T *const CodeGen_PositionMessage_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CodeGen_PositionMessage'
 * '<S1>'   : 'CodeGen_PositionMessage/MATLAB Function'
 * '<S2>'   : 'CodeGen_PositionMessage/RTI Data'
 * '<S3>'   : 'CodeGen_PositionMessage/RTI Data/RTI Data Store'
 * '<S4>'   : 'CodeGen_PositionMessage/RTI Data/RTI Data Store/RTI Data Store'
 * '<S5>'   : 'CodeGen_PositionMessage/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_CodeGen_PositionMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
