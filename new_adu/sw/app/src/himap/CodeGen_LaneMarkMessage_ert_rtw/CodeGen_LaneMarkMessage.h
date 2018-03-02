/*
 * File: CodeGen_LaneMarkMessage.h
 *
 * Code generated for Simulink model 'CodeGen_LaneMarkMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 16:52:23 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_LaneMarkMessage_h_
#define RTW_HEADER_CodeGen_LaneMarkMessage_h_
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_LaneMarkMessage_COMMON_INCLUDES_
# define CodeGen_LaneMarkMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_LaneMarkMessage_COMMON_INCLUDES_ */

#include "CodeGen_LaneMarkMessage_types.h"

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
  real_T gPreLaneMarkTimeCnt;          /* '<Root>/MATLAB Function' */
  real_T gPreLaneMarkOffset;           /* '<Root>/MATLAB Function' */
  real_T gLaneMarkCircleCnt;           /* '<Root>/MATLAB Function' */
  real_T gLaneMarkMap[300];            /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  boolean_T gPreLaneMarkTimeCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gPreLaneMarkOffset_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gLaneMarkCircleCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gLaneMarkMap_not_empty;    /* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
} DW_CodeGen_LaneMarkMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_LaneMarkMessa_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_LaneMarkMessage_T CodeGen_LaneMarkMessage_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T LaneMarkIndex;           /* '<Root>/MATLAB Function' */
extern real_T LaneMarkMap[300];        /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_LaneMarkMessage_initialize(void);
extern void CodeGen_LaneMarkMessage_step(void);
extern void CodeGen_LaneMarkMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_LaneMarkMess_T *const CodeGen_LaneMarkMessage_M;

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
 * '<Root>' : 'CodeGen_LaneMarkMessage'
 * '<S1>'   : 'CodeGen_LaneMarkMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_LaneMarkMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
