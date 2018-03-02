/*
 * File: CodeGen_LaneMessage.h
 *
 * Code generated for Simulink model 'CodeGen_LaneMessage'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:43:41 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_LaneMessage_h_
#define RTW_HEADER_CodeGen_LaneMessage_h_
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_LaneMessage_COMMON_INCLUDES_
# define CodeGen_LaneMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_LaneMessage_COMMON_INCLUDES_ */

#include "CodeGen_LaneMessage_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T gPreLaneTimeCnt;              /* '<Root>/MATLAB Function' */
  real_T gPreLaneOffset;               /* '<Root>/MATLAB Function' */
  real_T gLaneCircleCnt;               /* '<Root>/MATLAB Function' */
  real_T gLaneMap[600];                /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  real_T gMaxOffset;                   /* '<Root>/MATLAB Function' */
  real_T gOffsetThresh;                /* '<Root>/MATLAB Function' */
  boolean_T gPreLaneTimeCnt_not_empty; /* '<Root>/MATLAB Function' */
  boolean_T gPreLaneOffset_not_empty;  /* '<Root>/MATLAB Function' */
  boolean_T gLaneCircleCnt_not_empty;  /* '<Root>/MATLAB Function' */
  boolean_T gLaneMap_not_empty;        /* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
} DW_CodeGen_LaneMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_LaneMessage_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_LaneMessage_T CodeGen_LaneMessage_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ValidLaneMessageIndex;   /* '<Root>/MATLAB Function' */
extern real_T LaneMap[600];            /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_LaneMessage_initialize(void);
extern void CodeGen_LaneMessage_step(void);
extern void CodeGen_LaneMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_LaneMessage_T *const CodeGen_LaneMessage_M;

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
 * '<Root>' : 'CodeGen_LaneMessage'
 * '<S1>'   : 'CodeGen_LaneMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_LaneMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
