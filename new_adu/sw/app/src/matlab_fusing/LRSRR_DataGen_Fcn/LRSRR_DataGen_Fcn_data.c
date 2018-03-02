/*
 * File: LRSRR_DataGen_Fcn_data.c
 *
 * Code generated for Simulink model 'LRSRR_DataGen_Fcn'.
 *
 * Model version                  : 1.41
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 10:22:07 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LRSRR_DataGen_Fcn.h"
#include "LRSRR_DataGen_Fcn_private.h"

/* Block parameters (auto storage) */
P_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_P = {
  128U,                                /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S59>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: rangeX_Y0
                                        * Referenced by: '<S58>/rangeX'
                                        */
  0.0,                                 /* Computed Parameter: rangeY_Y0
                                        * Referenced by: '<S58>/rangeY'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S58>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S25>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S45>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S5>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S5>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S35>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */

  /*  Expression: [1 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant4'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S27>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S47>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S7>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S7>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S37>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */

  /*  Expression: [0 1 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant1'
   */
  { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S48>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S8>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S8>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S38>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */

  /*  Expression: [0 0 1 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S29>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S49>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S9>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S9>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S39>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */

  /*  Expression: [0 0 0 1 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant3'
   */
  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S50>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S10>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S10>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S40>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */

  /*  Expression: [0 0 0 0 1 0 0 0 0 0]
   * Referenced by: '<Root>/Constant5'
   */
  { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S51>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S11>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S11>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S41>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 1 0 0 0 0]
   * Referenced by: '<Root>/Constant6'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S52>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S12>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S12>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S42>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 1 0 0 0]
   * Referenced by: '<Root>/Constant7'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S33>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S53>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S13>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S43>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 1 0 0]
   * Referenced by: '<Root>/Constant8'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S34>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S54>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S14>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S14>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S44>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 1 0]
   * Referenced by: '<Root>/Constant9'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */
  0.02,                                /* Expression: 0.02
                                        * Referenced by: '<S46>/N->E'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S6>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S6>/deg->rad'
                                        */
  0.125,                               /* Expression: 0.125
                                        * Referenced by: '<S36>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 1]
   * Referenced by: '<Root>/Constant10'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S56>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S55>/E->N'
                                        */
  0U,                                  /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S57>/Switch'
                                        */
  0,                                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S57>/Memory'
                                        */
  128U                                 /* Computed Parameter: NE_Gain_awq
                                        * Referenced by: '<S4>/N->E'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
