/*
 * File: CodeGen_ProfileShortMessage.h
 *
 * Code generated for Simulink model 'CodeGen_ProfileShortMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:07:47 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_ProfileShortMessage_h_
#define RTW_HEADER_CodeGen_ProfileShortMessage_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_ProfileShortMessage_COMMON_INCLUDES_
# define CodeGen_ProfileShortMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_ProfileShortMessage_COMMON_INCLUDES_ */

#include "CodeGen_ProfileShortMessage_types.h"

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
  real_T gPreProfileShortTimeCnt;      /* '<Root>/MATLAB Function' */
  real_T gPreProfileShortOffset1;      /* '<Root>/MATLAB Function' */
  real_T gPreProfileShortOffset2;      /* '<Root>/MATLAB Function' */
  real_T gPreProfileShortCircleCnt1;   /* '<Root>/MATLAB Function' */
  real_T gPreProfileShortCircleCnt2;   /* '<Root>/MATLAB Function' */
  real_T gProfileShortMap1[6000];      /* '<Root>/MATLAB Function' */
  real_T gProfileShortMap2[2000];      /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex1;          /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex2;          /* '<Root>/MATLAB Function' */
} DW_CodeGen_ProfileShortMessag_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_ProfileShortM_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_ProfileShortMessag_T CodeGen_ProfileShortMessage_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ValidProfileShortIndex1; /* '<Root>/MATLAB Function' */
extern real_T ValidProfileShortIndex2; /* '<Root>/MATLAB Function' */
extern real_T ProfileShortMap1[6000];  /* '<Root>/MATLAB Function' */
extern real_T ProfileShortMap2[2000];  /* '<Root>/MATLAB Function' */
extern real_T ClearAllFalg;            /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_ProfileShortMessage_initialize(void);
extern void CodeGen_ProfileShortMessage_step(void);
extern void CodeGen_ProfileShortMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_ProfileShort_T *const CodeGen_ProfileShortMessage_M;

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
 * '<Root>' : 'CodeGen_ProfileShortMessage'
 * '<S1>'   : 'CodeGen_ProfileShortMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_ProfileShortMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
