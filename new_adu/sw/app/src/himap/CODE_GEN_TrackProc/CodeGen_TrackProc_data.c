/*
 * File: CodeGen_TrackProc_data.c
 *
 * Code generated for Simulink model 'CodeGen_TrackProc'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Fri Oct 20 09:25:15 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_TrackProc.h"
#include "CodeGen_TrackProc_private.h"

/* Block parameters (auto storage) */
P_CodeGen_TrackProc_T CodeGen_TrackProc_P = {
  0.01,                                /* Variable: TSample
                                        * Referenced by: '<S1>/Constant1'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.33333333333333331,                 /* Expression: 1.2/3.6
                                        * Referenced by: '<Root>/Gain'
                                        */
  30.0,                                /* Expression: 30
                                        * Referenced by: '<Root>/Saturation'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<Root>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay3'
                                        */

  /*  Expression: [3 6 9]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 3.0, 6.0, 9.0 },

  /*  Expression: [0 1 2]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 0.0, 1.0, 2.0 },
  25.0,                                /* Expression: 25
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  0.8,                                 /* Expression: 0.8
                                        * Referenced by: '<Root>/Ay_limit'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/P_dis'
                                        */
  50.0,                                /* Expression: 50
                                        * Referenced by: '<Root>/P_SumDis'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S4>/FIilter'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S3>/FIilter'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Unit Delay'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S5>/FIilter'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S2>/FIilter'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/error'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/error1'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<Root>/Constant1'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0.1                                  /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant3'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
