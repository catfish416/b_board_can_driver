/*
 * File: SRR_Driver_Fcn_20ms_data.c
 *
 * Code generated for Simulink model 'SRR_Driver_Fcn_20ms'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 19:36:53 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SRR_Driver_Fcn_20ms.h"
#include "SRR_Driver_Fcn_20ms_private.h"

/* Block parameters (auto storage) */
P_SRR_Driver_Fcn_20ms_T SRR_Driver_Fcn_20ms_P = {
  2750.0,                              /* Mask Parameter: LatVel_evulation_Iz
                                        * Referenced by:
                                        *   '<S54>/Parameter_14'
                                        *   '<S54>/Parameter_2'
                                        *   '<S54>/Parameter_8'
                                        *   '<S61>/Parameter_7'
                                        *   '<S62>/Parameter_14'
                                        */
  1.0,                                 /* Mask Parameter: LatVel_evulation_R
                                        * Referenced by: '<S52>/R'
                                        */
  1.2,                                 /* Mask Parameter: LatVel_evulation_a
                                        * Referenced by:
                                        *   '<S53>/Parameter_4'
                                        *   '<S54>/Parameter_12'
                                        *   '<S54>/Parameter_15'
                                        *   '<S54>/Parameter_4'
                                        *   '<S54>/Parameter_9'
                                        *   '<S60>/Parameter_4'
                                        *   '<S61>/Parameter_4'
                                        *   '<S62>/Parameter_12'
                                        *   '<S62>/Parameter_9'
                                        */
  1.637,                               /* Mask Parameter: LatVel_evulation_b
                                        * Referenced by:
                                        *   '<S53>/Parameter_6'
                                        *   '<S54>/Parameter_11'
                                        *   '<S54>/Parameter_13'
                                        *   '<S54>/Parameter_6'
                                        *   '<S60>/Parameter_6'
                                        *   '<S61>/Parameter_6'
                                        *   '<S62>/Parameter_11'
                                        *   '<S62>/Parameter_13'
                                        */
  2.5,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S46>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S63>/Constant'
                                        */
  2.5,                                 /* Mask Parameter: CompareToConstant_const_p
                                        * Referenced by: '<S66>/Constant'
                                        */
  0.01,                                /* Mask Parameter: LatVel_evulation_deltaT
                                        * Referenced by: '<S49>/Constant'
                                        */
  -67016.0,                            /* Mask Parameter: LatVel_evulation_kf
                                        * Referenced by:
                                        *   '<S53>/Parameter_0'
                                        *   '<S53>/Parameter_3'
                                        *   '<S53>/Parameter_7'
                                        *   '<S54>/Parameter_1'
                                        *   '<S54>/Parameter_3'
                                        *   '<S54>/Parameter_7'
                                        *   '<S59>/Parameter_0'
                                        *   '<S60>/Parameter_1'
                                        *   '<S61>/Parameter_1'
                                        *   '<S62>/Parameter_1'
                                        */
  -67016.0,                            /* Mask Parameter: LatVel_evulation_kr
                                        * Referenced by:
                                        *   '<S53>/Parameter_1'
                                        *   '<S53>/Parameter_5'
                                        *   '<S54>/Parameter_10'
                                        *   '<S54>/Parameter_5'
                                        *   '<S59>/Parameter_2'
                                        *   '<S60>/Parameter_5'
                                        *   '<S61>/Parameter_5'
                                        *   '<S62>/Parameter_10'
                                        */
  2800.0,                              /* Mask Parameter: LatVel_evulation_m
                                        * Referenced by:
                                        *   '<S53>/Parameter_2'
                                        *   '<S53>/Parameter_8'
                                        *   '<S53>/Parameter_9'
                                        *   '<S59>/Parameter_3'
                                        *   '<S60>/Parameter_2'
                                        */
  -1.6,                                /* Expression: -1.6
                                        * Referenced by: '<S35>/TestData'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S43>/Gain1'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S65>/Saturation1'
                                        */
  -8191.0,                             /* Expression: -8191
                                        * Referenced by: '<S65>/Saturation1'
                                        */
  -1.6,                                /* Expression: -1.6
                                        * Referenced by: '<S43>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S35>/TestFlag[0_test|1_model]'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S35>/Switch'
                                        */
  1000.0,                              /* Expression: 1000
                                        * Referenced by: '<S36>/TestData'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S47>/Saturation1'
                                        */
  -8191.0,                             /* Expression: -8191
                                        * Referenced by: '<S47>/Saturation1'
                                        */
  2.86,                                /* Expression: 2.86
                                        * Referenced by: '<S48>/Constant'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S48>/Saturation2'
                                        */
  -8191.0,                             /* Expression: -8191
                                        * Referenced by: '<S48>/Saturation2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S36>/TestFlag[0_test|1_model]'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S37>/TestData'
                                        */
  2.86,                                /* Expression: 2.86
                                        * Referenced by: '<S50>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S37>/TestFlag[0_test|1_model]'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S37>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S49>/Zero'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S44>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S44>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S45>/Constant2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S45>/Constant1'
                                        */
  0.015625,                            /* Expression: 0.015625
                                        * Referenced by: '<S4>/N->kph'
                                        */
  0.27777777777777779,                 /* Expression: 1/3.6
                                        * Referenced by: '<S4>/kph->mps'
                                        */
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S26>/Saturation'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S26>/Saturation'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S22>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S22>/degps->radps'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S49>/Memory2'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S49>/Switch'
                                        */
  12.7,                                /* Expression: 12.7
                                        * Referenced by: '<S29>/Saturation2'
                                        */
  -12.8,                               /* Expression: -12.8
                                        * Referenced by: '<S29>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S29>/Gain'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S1>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S1>/deg->rad'
                                        */
  0.064102564102564111,                /* Expression: 1/15.6
                                        * Referenced by: '<S26>/Gain1'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S30>/Saturation2'
                                        */
  -8192.0,                             /* Expression: -8192
                                        * Referenced by: '<S30>/Saturation2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Gain'
                                        */
  0.32767,                             /* Expression: 0.32767
                                        * Referenced by: '<S31>/Saturation2'
                                        */
  -0.32768,                            /* Expression: -0.32768
                                        * Referenced by: '<S31>/Saturation2'
                                        */
  99999.999999999985,                  /* Expression: 1/1e-5
                                        * Referenced by: '<S31>/Gain'
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
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S8>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S18>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S18>/E->N'
                                        */
  12.7,                                /* Expression: 12.7
                                        * Referenced by: '<S20>/Saturation'
                                        */
  -12.8,                               /* Expression: -12.8
                                        * Referenced by: '<S20>/Saturation'
                                        */
  10.0,                                /* Expression: 1/0.1
                                        * Referenced by: '<S20>/E->N'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S19>/Saturation'
                                        */
  -8192.0,                             /* Expression: -8192
                                        * Referenced by: '<S19>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S19>/E->N'
                                        */
  0.32767,                             /* Expression: 0.32767
                                        * Referenced by: '<S7>/Saturation'
                                        */
  -0.32768,                            /* Expression: -0.32768
                                        * Referenced by: '<S7>/Saturation'
                                        */
  99999.999999999985,                  /* Expression: 1/1e-5
                                        * Referenced by: '<S7>/E->N'
                                        */
  2047.0,                              /* Expression: 2047
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  14.0,                                /* Expression: 14
                                        * Referenced by: '<S45>/Constant4'
                                        */
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S32>/Saturation2'
                                        */
  -128.0,                              /* Expression: -128
                                        * Referenced by: '<S32>/Saturation2'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S32>/Gain'
                                        */
  6.35,                                /* Expression: 6.35
                                        * Referenced by: '<S34>/Saturation2'
                                        */
  -6.4,                                /* Expression: -6.4
                                        * Referenced by: '<S34>/Saturation2'
                                        */
  20.0,                                /* Expression: 1/0.05
                                        * Referenced by: '<S34>/Gain'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S33>/Gain2'
                                        */
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S33>/Saturation2'
                                        */
  -128.0,                              /* Expression: -128
                                        * Referenced by: '<S33>/Saturation2'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S33>/Gain'
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
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S11>/Saturation'
                                        */
  -128.0,                              /* Expression: -128
                                        * Referenced by: '<S11>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S11>/E->N'
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
                                        * Referenced by: '<S10>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S10>/E->N'
                                        */
  6.35,                                /* Expression: 6.35
                                        * Referenced by: '<S9>/Saturation'
                                        */
  -6.4,                                /* Expression: -6.4
                                        * Referenced by: '<S9>/Saturation'
                                        */
  20.0,                                /* Expression: 1/0.05
                                        * Referenced by: '<S9>/E->N'
                                        */
  127.9375,                            /* Expression: 127.9375
                                        * Referenced by: '<S16>/Saturation'
                                        */
  -128.0,                              /* Expression: -128
                                        * Referenced by: '<S16>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S16>/E->N'
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
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S13>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S13>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S14>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S14>/E->N'
                                        */
  2047.0,                              /* Expression: 2047
                                        * Referenced by: '<S5>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */

  /*  Expression: [0 1]
   * Referenced by: '<S49>/H'
   */
  { 0.0, 1.0 },

  /*  Expression: [0 1]
   * Referenced by: '<S49>/H1'
   */
  { 0.0, 1.0 },

  /*  Expression: [1 0;0 1]
   * Referenced by: '<S49>/I'
   */
  { 1.0, 0.0, 0.0, 1.0 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain3'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S49>/Memory3'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S53>/Gain4'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain3'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain5'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S54>/Gain4'
                                        */

  /*  Expression: [0.2 0;0 0.1]
   * Referenced by: '<S49>/Memory1'
   */
  { 0.2, 0.0, 0.0, 0.1 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S59>/Gain2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S59>/Gain3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S59>/Constant2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S60>/Gain1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S60>/Gain4'
                                        */

  /*  Expression: [1;0]
   * Referenced by: '<S57>/Gain'
   */
  { 1.0, 0.0 },
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S61>/Gain1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S61>/Gain4'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S62>/Gain1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S62>/Gain5'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S62>/Constant2'
                                        */

  /*  Expression: [0;1]
   * Referenced by: '<S58>/Gain'
   */
  { 0.0, 1.0 },

  /*  Expression: [Qv 0 ;0 Qy]
   * Referenced by: '<S55>/Q'
   */
  { 10.0, 0.0, 0.0, 10.0 },

  /*  Expression: [0 1]
   * Referenced by: '<S52>/H'
   */
  { 0.0, 1.0 },
  1U,                                  /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S44>/Switch'
                                        */

  /* Start of '<S34>/Atomic Subsystem' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S40>/TestData'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S40>/TestFlag[0_test|1_model]'
                                        */
    0.5                                /* Expression: 0.5
                                        * Referenced by: '<S40>/Switch'
                                        */
  }
  /* End of '<S34>/Atomic Subsystem' */
  ,

  /* Start of '<S33>/Atomic Subsystem' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S39>/TestData'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S39>/TestFlag[0_test|1_model]'
                                        */
    0.5                                /* Expression: 0.5
                                        * Referenced by: '<S39>/Switch'
                                        */
  }
  /* End of '<S33>/Atomic Subsystem' */
  ,

  /* Start of '<S32>/Atomic Subsystem' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S38>/TestData'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S38>/TestFlag[0_test|1_model]'
                                        */
    0.5                                /* Expression: 0.5
                                        * Referenced by: '<S38>/Switch'
                                        */
  }
  /* End of '<S32>/Atomic Subsystem' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
