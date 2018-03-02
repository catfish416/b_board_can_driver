/*
 * File: SRR_Driver_Fcn_100ms_data.c
 *
 * Code generated for Simulink model 'SRR_Driver_Fcn_100ms'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 18:58:10 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRR_Driver_Fcn_100ms.h"
#include "SRR_Driver_Fcn_100ms_private.h"

/* Block parameters (auto storage) */
P_SRR_Driver_Fcn_100ms_T SRR_Driver_Fcn_100ms_P = {
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S23>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S23>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S21>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S21>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S19>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S20>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S20>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S22>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S17>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S16>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S15>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S15>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S14>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S14>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S13>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S12>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S9>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S10>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S10>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S11>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S4>/E->N'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S7>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S7>/E->N'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S8>/E->N'
                                        */
  4.294967295E+9,                      /* Expression: 4294967295
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  4095.0,                              /* Expression: 4095
                                        * Referenced by: '<S3>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  1.0                                  /* Expression: 1/1
                                        * Referenced by: '<S3>/E->N'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
