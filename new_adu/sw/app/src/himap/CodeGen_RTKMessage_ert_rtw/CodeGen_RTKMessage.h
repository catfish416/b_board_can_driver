/*
 * File: CodeGen_RTKMessage.h
 *
 * Code generated for Simulink model 'CodeGen_RTKMessage'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 18:53:03 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_RTKMessage_h_
#define RTW_HEADER_CodeGen_RTKMessage_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef CodeGen_RTKMessage_COMMON_INCLUDES_
# define CodeGen_RTKMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_RTKMessage_COMMON_INCLUDES_ */

#include "CodeGen_RTKMessage_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T utmzone1;                     /* '<S1>/WGS2UTM' */
  real_T utmhemi1;                     /* '<S1>/WGS2UTM' */
  real_T utm_x;                        /* '<S1>/RTKRAW2WGS' */
  real_T utm_y;                        /* '<S1>/RTKRAW2WGS' */
  uint8_T Output;                      /* '<S2>/Output' */
  uint8_T FixPtSum1;                   /* '<S5>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S6>/FixPt Switch' */
} B_CodeGen_RTKMessage_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
} DW_CodeGen_RTKMessage_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T HeadingAngle_e;               /* '<Root>/HeadingAngle' */
  real_T X_IN_UTM1;                    /* '<Root>/X_IN_UTM1' */
  real_T X_IN_UTM2;                    /* '<Root>/X_IN_UTM2' */
} ExtY_CodeGen_RTKMessage_T;

/* Parameters (auto storage) */
struct P_CodeGen_RTKMessage_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 10000000
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 10000000
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 10000000
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T UTMZONE_Value;                /* Expression: 51
                                        * Referenced by: '<S1>/UTMZONE'
                                        */
  real_T UTMHEMI_Value;                /* Expression: 78
                                        * Referenced by: '<S1>/UTMHEMI'
                                        */
  uint8_T Output_InitialCondition;     /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S2>/Output'
                                        */
  uint8_T FixPtConstant_Value;         /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S5>/FixPt Constant'
                                        */
  uint8_T Constant_Value_j;            /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S6>/Constant'
                                        */
  uint8_T FixPtSwitch_Threshold;       /* Computed Parameter: FixPtSwitch_Threshold
                                        * Referenced by: '<S6>/FixPt Switch'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_RTKMessage_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_CodeGen_RTKMessage_T CodeGen_RTKMessage_P;

/* Block signals (auto storage) */
extern B_CodeGen_RTKMessage_T CodeGen_RTKMessage_B;

/* Block states (auto storage) */
extern DW_CodeGen_RTKMessage_T CodeGen_RTKMessage_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_CodeGen_RTKMessage_T CodeGen_RTKMessage_Y;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T PPS_VALIDITY_MSG;        /* '<S1>/Constant' */
extern real_T PPS_BURST_ID_MSG;        /* '<S1>/Data Type Conversion' */
extern real_T PPS_LATITUDE_MSG;        /* '<Root>/Gain2' */
extern real_T PPS_LONGITUDE_MSG;       /* '<Root>/Gain1' */
extern real_T X_IN_UTM;                /* '<S1>/WGS2UTM' */
extern real_T Y_IN_UTM;                /* '<S1>/WGS2UTM' */
extern real_T HeadingAngle;            /* '<S1>/RTKRAW2WGS' */
extern real_T WGS_TS_IN_SEC;           /* '<S1>/RTKRAW2WGS' */

/* Model entry point functions */
extern void CodeGen_RTKMessage_initialize(void);
extern void CodeGen_RTKMessage_step(void);
extern void CodeGen_RTKMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_RTKMessage_T *const CodeGen_RTKMessage_M;

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
 * '<Root>' : 'CodeGen_RTKMessage'
 * '<S1>'   : 'CodeGen_RTKMessage/RTK_TO_PPS'
 * '<S2>'   : 'CodeGen_RTKMessage/RTK_TO_PPS/Counter Limited'
 * '<S3>'   : 'CodeGen_RTKMessage/RTK_TO_PPS/RTKRAW2WGS'
 * '<S4>'   : 'CodeGen_RTKMessage/RTK_TO_PPS/WGS2UTM'
 * '<S5>'   : 'CodeGen_RTKMessage/RTK_TO_PPS/Counter Limited/Increment Real World'
 * '<S6>'   : 'CodeGen_RTKMessage/RTK_TO_PPS/Counter Limited/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_CodeGen_RTKMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
