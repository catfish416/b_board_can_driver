/*
 * File: CodeGen_SegmentMessage.h
 *
 * Code generated for Simulink model 'CodeGen_SegmentMessage'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:00:26 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_SegmentMessage_h_
#define RTW_HEADER_CodeGen_SegmentMessage_h_
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_SegmentMessage_COMMON_INCLUDES_
# define CodeGen_SegmentMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_SegmentMessage_COMMON_INCLUDES_ */

#include "CodeGen_SegmentMessage_types.h"

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
  real_T gPreSegmentTimeCnt;           /* '<Root>/MATLAB Function' */
  real_T gPreSegmentOffset;            /* '<Root>/MATLAB Function' */
  real_T pSegmentCircleCnt;            /* '<Root>/MATLAB Function' */
  real_T gSegmentMap[400];             /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  boolean_T gPreSegmentTimeCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gPreSegmentOffset_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T pSegmentCircleCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gSegmentMap_not_empty;     /* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
} DW_CodeGen_SegmentMessage_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T SegmentTimeCnt;               /* '<Root>/ClearAllFlag1' */
} ExtU_CodeGen_SegmentMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_SegmentMessag_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_SegmentMessage_T CodeGen_SegmentMessage_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_CodeGen_SegmentMessage_T CodeGen_SegmentMessage_U;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ValidSegmentIndex;       /* '<Root>/MATLAB Function' */
extern real_T SegmentMap[400];         /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_SegmentMessage_initialize(void);
extern void CodeGen_SegmentMessage_step(void);
extern void CodeGen_SegmentMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_SegmentMessa_T *const CodeGen_SegmentMessage_M;

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
 * '<Root>' : 'CodeGen_SegmentMessage'
 * '<S1>'   : 'CodeGen_SegmentMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_SegmentMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
