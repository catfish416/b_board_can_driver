/*
 * File: GlobalFusion_Fcn_data.c
 *
 * Code generated for Simulink model 'GlobalFusion_Fcn'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 20:03:39 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GlobalFusion_Fcn.h"
#include "GlobalFusion_Fcn_private.h"

/* Block parameters (auto storage) */
P_GlobalFusion_Fcn_T GlobalFusion_Fcn_P = {
  0.001,                               /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S35>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S36>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_f4
                                        * Referenced by: '<S37>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S38>/Constant'
                                        */
  0.0,                                 /* Mask Parameter: CompareToConstant_const_l
                                        * Referenced by: '<S23>/Constant'
                                        */
  0.0,                                 /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S24>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_lj
                                        * Referenced by: '<S18>/Constant'
                                        */
  2.86,                                /* Expression: 2.86
                                        * Referenced by: '<S1>/Constant1'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S13>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S16>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S16>/degps->radps'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S28>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S29>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S30>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S31>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S20>/RangeX'
                                        */
  0.0,                                 /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S20>/VelX'
                                        */
  0.0,                                 /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S20>/RangeY'
                                        */
  0.0,                                 /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S20>/VelY'
                                        */
  0.0,                                 /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S20>/P11'
                                        */
  0.0,                                 /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S20>/P12'
                                        */
  0.0,                                 /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S20>/P13'
                                        */
  0.0,                                 /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S20>/P14'
                                        */
  0.0,                                 /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S20>/P21'
                                        */
  0.0,                                 /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S20>/P22'
                                        */
  0.0,                                 /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S20>/P23'
                                        */
  0.0,                                 /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S20>/P24'
                                        */
  0.0,                                 /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S20>/P31'
                                        */
  0.0,                                 /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S20>/P32'
                                        */
  0.0,                                 /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S20>/P33'
                                        */
  0.0,                                 /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S20>/P34'
                                        */
  0.0,                                 /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S20>/P41'
                                        */
  0.0,                                 /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S20>/P42'
                                        */
  0.0,                                 /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S20>/P43'
                                        */
  0.0,                                 /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S20>/P44'
                                        */

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S20>/Constant'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S20>/Constant1'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S20>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S20>/Constant3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S41>/Constant2'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant1'
                                        */

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S42>/Constant5'
   */
  { 0.0, 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S42>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant4'
                                        */

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S43>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S43>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S43>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S43>/Constant'
                                        */

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S44>/Constant5'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S44>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S44>/Constant4'
                                        */

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S32>/Gain'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S32>/Gain1'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S32>/Gain2'
   */
  { 0.0, 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S32>/Gain3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /*  Expression: [0.01 0 0 0;0 0.01 0 0;0 0 0.01 0;0 0 0 0.01]
   * Referenced by: '<S34>/Q'
   */
  { 0.01, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0, 0.0, 0.0, 0.0,
    0.01 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S26>/Outside outer lane'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S26>/Outer lane'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S26>/Inner lane'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S26>/Inside inner lane'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S26>/Undefined Threshold'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S26>/Quantizer'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S26>/Switch'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S27>/Outside outer lane'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S27>/Outer lane'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S27>/Inner lane'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S27>/Inside inner lane'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S27>/Undefined Threshold'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S27>/Quantizer'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S27>/Switch'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S25>/Gain'
                                        */
  2.6,                                 /* Expression: 2.6
                                        * Referenced by: '<S25>/DistanceToRearAxis'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S25>/Pos_Rt|Neg_Lt'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Switch'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.015625,                            /* Expression: 0.015625
                                        * Referenced by: '<S15>/N->kph'
                                        */
  0.27777777777777779,                 /* Expression: 1/3.6
                                        * Referenced by: '<S15>/kph->mps'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  -8191.0,                             /* Expression: -8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/E->N'
                                        */
  32768U,                              /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S14>/E->N'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S28>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S29>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_a5
                                        * Referenced by: '<S30>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S31>/Switch'
                                        */
  0U,                                  /* Computed Parameter: InPathFlag_Y0
                                        * Referenced by: '<S19>/InPathFlag'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_bv
                                        * Referenced by: '<S8>/N->E'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_l
                                        * Referenced by: '<S10>/N->E'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_i
                                        * Referenced by: '<S9>/N->E'
                                        */

  /* Start of '<S17>/FusTrackUpdate.MDCal' */
  {
    0.001,                             /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S54>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S51>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S52>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S53>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S45>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S46>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S47>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S48>/Constant'
                                        */
    0.0,                               /* Computed Parameter: MD_Y0
                                        * Referenced by: '<S21>/MD'
                                        */

    /*  Expression: [1 0 0 0;0 0 1 0]
     * Referenced by: '<S21>/H'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },

    /*  Expression: [1;0;0;0]
     * Referenced by: '<S50>/Gain'
     */
    { 1.0, 0.0, 0.0, 0.0 },

    /*  Expression: [0;1;0;0]
     * Referenced by: '<S50>/Gain1'
     */
    { 0.0, 1.0, 0.0, 0.0 },

    /*  Expression: [0;0;1;0]
     * Referenced by: '<S50>/Gain2'
     */
    { 0.0, 0.0, 1.0, 0.0 },

    /*  Expression: [0;0;0;1]
     * Referenced by: '<S50>/Gain3'
     */
    { 0.0, 0.0, 0.0, 1.0 },

    /*  Expression: [1;0]
     * Referenced by: '<S49>/Gain'
     */
    { 1.0, 0.0 },

    /*  Expression: [0;1]
     * Referenced by: '<S49>/Gain1'
     */
    { 0.0, 1.0 },
    1U,                                /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S48>/Switch'
                                        */
    1U,                                /* Computed Parameter: Switch_Threshold_d
                                        * Referenced by: '<S45>/Switch'
                                        */
    1U,                                /* Computed Parameter: Switch_Threshold_c
                                        * Referenced by: '<S46>/Switch'
                                        */
    1U                                 /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S47>/Switch'
                                        */
  }
  /* End of '<S17>/FusTrackUpdate.MDCal' */
  ,

  /* Start of '<S17>/FusTrackUpdate.Update' */
  {
    0.001,                             /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S64>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_k
                                        * Referenced by: '<S65>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S66>/Constant'
                                        */
    0.001,                             /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S67>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S55>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S56>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S57>/Constant'
                                        */
    0.001,                             /* Expression: 0.001
                                        * Referenced by: '<S58>/Constant'
                                        */
    0.0,                               /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S22>/RangeX'
                                        */
    0.0,                               /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S22>/VelX'
                                        */
    0.0,                               /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S22>/RangeY'
                                        */
    0.0,                               /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S22>/VelY'
                                        */
    0.0,                               /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S22>/P11'
                                        */
    0.0,                               /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S22>/P12'
                                        */
    0.0,                               /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S22>/P13'
                                        */
    0.0,                               /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S22>/P14'
                                        */
    0.0,                               /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S22>/P21'
                                        */
    0.0,                               /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S22>/P22'
                                        */
    0.0,                               /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S22>/P23'
                                        */
    0.0,                               /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S22>/P24'
                                        */
    0.0,                               /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S22>/P31'
                                        */
    0.0,                               /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S22>/P32'
                                        */
    0.0,                               /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S22>/P33'
                                        */
    0.0,                               /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S22>/P34'
                                        */
    0.0,                               /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S22>/P41'
                                        */
    0.0,                               /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S22>/P42'
                                        */
    0.0,                               /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S22>/P43'
                                        */
    0.0,                               /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S22>/P44'
                                        */

    /*  Expression: [1;0;0;0]
     * Referenced by: '<S22>/Constant'
     */
    { 1.0, 0.0, 0.0, 0.0 },

    /*  Expression: [0;1;0;0]
     * Referenced by: '<S22>/Constant1'
     */
    { 0.0, 1.0, 0.0, 0.0 },

    /*  Expression: [0;0;1;0]
     * Referenced by: '<S22>/Constant2'
     */
    { 0.0, 0.0, 1.0, 0.0 },

    /*  Expression: [0;0;0;1]
     * Referenced by: '<S22>/Constant3'
     */
    { 0.0, 0.0, 0.0, 1.0 },

    /*  Expression: [1;0;0;0]
     * Referenced by: '<S59>/Gain'
     */
    { 1.0, 0.0, 0.0, 0.0 },

    /*  Expression: [0;1;0;0]
     * Referenced by: '<S59>/Gain1'
     */
    { 0.0, 1.0, 0.0, 0.0 },

    /*  Expression: [0;0;1;0]
     * Referenced by: '<S59>/Gain2'
     */
    { 0.0, 0.0, 1.0, 0.0 },

    /*  Expression: [0;0;0;1]
     * Referenced by: '<S59>/Gain3'
     */
    { 0.0, 0.0, 0.0, 1.0 },

    /*  Expression: [1 0 0 0;0 0 1 0]
     * Referenced by: '<S60>/H'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },

    /*  Expression: [1;0]
     * Referenced by: '<S62>/Gain'
     */
    { 1.0, 0.0 },

    /*  Expression: [0;1]
     * Referenced by: '<S62>/Gain1'
     */
    { 0.0, 1.0 },

    /*  Expression: [1 0 0 0;0 1 0 0;0 0 1 0;0 0 0 1]
     * Referenced by: '<S22>/I'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
      1.0 },
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S61>/Gain'
                                        */
    1U,                                /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S55>/Switch'
                                        */
    1U,                                /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S56>/Switch'
                                        */
    1U,                                /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S57>/Switch'
                                        */
    1U                                 /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S58>/Switch'
                                        */
  }
  /* End of '<S17>/FusTrackUpdate.Update' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
