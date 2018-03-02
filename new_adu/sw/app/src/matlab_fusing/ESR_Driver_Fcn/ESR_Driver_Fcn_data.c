/*
 * File: ESR_Driver_Fcn_data.c
 *
 * Code generated for Simulink model 'ESR_Driver_Fcn'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Thu Jul 06 13:57:13 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ESR_Driver_Fcn.h"
#include "ESR_Driver_Fcn_private.h"

/* Block parameters (auto storage) */
P_ESR_Driver_Fcn_T ESR_Driver_Fcn_P = {
  1.0,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S21>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Constant'
                                        */
  2.86,                                /* Expression: 2.86
                                        * Referenced by: '<S20>/Constant'
                                        */
  0.064102564102564111,                /* Expression: 1/15.6
                                        * Referenced by: '<S20>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg2'
                                        */
  2047.0,                              /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S4>/E->N'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S12>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S12>/deg->rad'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg1'
                                        */
  2047.0,                              /* Expression: 2047
                                        * Referenced by: '<S3>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S3>/E->N'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S7>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Constant1'
                                        */
  0.015625,                            /* Expression: 0.015625
                                        * Referenced by: '<S14>/N->kph'
                                        */
  0.27777777777777779,                 /* Expression: 1/3.6
                                        * Referenced by: '<S14>/kph->mps'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S15>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S15>/degps->radps'
                                        */
  100000.0,                            /* Expression: 100000
                                        * Referenced by: '<S20>/Saturation'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S20>/Saturation'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S2>/Saturation'
                                        */
  -8192.0,                             /* Expression: -8192
                                        * Referenced by: '<S2>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S2>/E->N'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/Constant1'
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
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg'
                                        */
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S10>/Saturation'
                                        */
  -128.0,                              /* Expression: -128
                                        * Referenced by: '<S10>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S10>/E->N'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S17>/Switch'
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
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  16.0                                 /* Expression: 1/0.0625
                                        * Referenced by: '<S8>/E->N'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
