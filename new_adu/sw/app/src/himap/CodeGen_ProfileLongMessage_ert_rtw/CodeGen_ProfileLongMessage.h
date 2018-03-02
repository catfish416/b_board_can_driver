/*
 * File: CodeGen_ProfileLongMessage.h
 *
 * Code generated for Simulink model 'CodeGen_ProfileLongMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:17:38 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_ProfileLongMessage_h_
#define RTW_HEADER_CodeGen_ProfileLongMessage_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_ProfileLongMessage_COMMON_INCLUDES_
# define CodeGen_ProfileLongMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_ProfileLongMessage_COMMON_INCLUDES_ */

#include "CodeGen_ProfileLongMessage_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
  real_T gPreProfileLongTimeCnt;       /* '<Root>/MATLAB Function' */
  real_T gPreProfileLongOffset;        /* '<Root>/MATLAB Function' */
  real_T gProfileLongCircleCnt;        /* '<Root>/MATLAB Function' */
  real_T gProfileLongMap[6000];        /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  real_T gOrig_X_UTM;                  /* '<Root>/MATLAB Function' */
  real_T gOrig_Y_UTM;                  /* '<Root>/MATLAB Function' */
  real_T gMessageSentCompleteFlag;     /* '<Root>/MATLAB Function' */
  boolean_T gPreProfileLongTimeCnt_not_empt;/* '<Root>/MATLAB Function' */
  boolean_T gPreProfileLongOffset_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gProfileLongCircleCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gProfileLongMap_not_empty; /* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gOrig_X_UTM_not_empty;     /* '<Root>/MATLAB Function' */
  boolean_T gOrig_Y_UTM_not_empty;     /* '<Root>/MATLAB Function' */
  boolean_T gMessageSentCompleteFlag_not_em;/* '<Root>/MATLAB Function' */
} DW_CodeGen_ProfileLongMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_ProfileLongMe_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_ProfileLongMessage_T CodeGen_ProfileLongMessage_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ValidProfileLongIndex;   /* '<Root>/MATLAB Function' */
extern real_T ProfileLongMap[6000];    /* '<Root>/MATLAB Function' */
extern real_T Orig_X_UTM;              /* '<Root>/MATLAB Function' */
extern real_T Orig_Y_UTM;              /* '<Root>/MATLAB Function' */
extern real_T End_Point[4];            /* '<Root>/MATLAB Function' */
extern real_T CurrentPoint[2];         /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_ProfileLongMessage_initialize(void);
extern void CodeGen_ProfileLongMessage_step(void);
extern void CodeGen_ProfileLongMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_ProfileLongM_T *const CodeGen_ProfileLongMessage_M;

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
 * '<Root>' : 'CodeGen_ProfileLongMessage'
 * '<S1>'   : 'CodeGen_ProfileLongMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_ProfileLongMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
