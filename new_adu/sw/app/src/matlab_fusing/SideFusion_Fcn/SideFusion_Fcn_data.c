/*
 * File: SideFusion_Fcn_data.c
 *
 * Code generated for Simulink model 'SideFusion_Fcn'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 13:30:46 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SideFusion_Fcn.h"
#include "SideFusion_Fcn_private.h"

/* Block parameters (auto storage) */
P_SideFusion_Fcn_T SideFusion_Fcn_P = {
  0.001,                               /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S177>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_e
                                        * Referenced by: '<S178>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_ec
                                        * Referenced by: '<S179>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S180>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S33>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_fu
                                        * Referenced by: '<S34>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S35>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S36>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_f1
                                        * Referenced by: '<S61>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S62>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S63>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S64>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_i
                                        * Referenced by: '<S65>/Constant'
                                        */
  1.0E-5,                              /* Mask Parameter: CompareToConstant_const_p
                                        * Referenced by: '<S60>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_az
                                        * Referenced by: '<S107>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_h
                                        * Referenced by: '<S108>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_l
                                        * Referenced by: '<S109>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_mk
                                        * Referenced by: '<S110>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S111>/Constant'
                                        */
  1.0E-5,                              /* Mask Parameter: CompareToConstant_const_j4
                                        * Referenced by: '<S106>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_a4
                                        * Referenced by: '<S84>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_l0
                                        * Referenced by: '<S85>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_js
                                        * Referenced by: '<S86>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_jf
                                        * Referenced by: '<S87>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_ck
                                        * Referenced by: '<S88>/Constant'
                                        */
  1.0E-5,                              /* Mask Parameter: CompareToConstant_const_e5
                                        * Referenced by: '<S83>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_d4
                                        * Referenced by: '<S130>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_jo
                                        * Referenced by: '<S131>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_nu
                                        * Referenced by: '<S132>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_mx
                                        * Referenced by: '<S133>/Constant'
                                        */
  0.001,                               /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S134>/Constant'
                                        */
  1.0E-5,                              /* Mask Parameter: CompareToConstant_const_ds
                                        * Referenced by: '<S129>/Constant'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S153>/rad->deg'
                                        */

  /*  Expression: [40 40 25 15 10 10]
   * Referenced by: '<S154>/Range_AngleTable'
   */
  { 40.0, 40.0, 25.0, 15.0, 10.0, 10.0 },

  /*  Expression: [0 10 30 50 70 100]
   * Referenced by: '<S154>/Range_AngleTable'
   */
  { 0.0, 10.0, 30.0, 50.0, 70.0, 100.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S152>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S169>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S170>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S171>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S172>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S25>/RangeX'
                                        */
  0.0,                                 /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S25>/VelX'
                                        */
  0.0,                                 /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S25>/RangeY'
                                        */
  0.0,                                 /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S25>/VelY'
                                        */
  0.0,                                 /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S25>/P11'
                                        */
  0.0,                                 /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S25>/P12'
                                        */
  0.0,                                 /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S25>/P13'
                                        */
  0.0,                                 /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S25>/P14'
                                        */
  0.0,                                 /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S25>/P21'
                                        */
  0.0,                                 /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S25>/P22'
                                        */
  0.0,                                 /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S25>/P23'
                                        */
  0.0,                                 /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S25>/P24'
                                        */
  0.0,                                 /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S25>/P31'
                                        */
  0.0,                                 /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S25>/P32'
                                        */
  0.0,                                 /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S25>/P33'
                                        */
  0.0,                                 /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S25>/P34'
                                        */
  0.0,                                 /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S25>/P41'
                                        */
  0.0,                                 /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S25>/P42'
                                        */
  0.0,                                 /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S25>/P43'
                                        */
  0.0,                                 /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S25>/P44'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation1'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation2'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation3'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation3'
                                        */

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S173>/Gain'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation4'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation4'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation5'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation5'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation6'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation6'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation7'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation7'
                                        */

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S173>/Gain1'
   */
  { 0.0, 1.0, 0.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation8'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation8'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation9'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation9'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation10'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation10'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation11'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation11'
                                        */

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S173>/Gain2'
   */
  { 0.0, 0.0, 1.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation14'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation14'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation15'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation15'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation12'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation12'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S159>/Saturation13'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S159>/Saturation13'
                                        */

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S173>/Gain3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /*  Expression: [1 0 0 0;0 0 1 0]
   * Referenced by: '<S159>/H'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<S159>/R11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S159>/R12'
                                        */

  /*  Expression: [1;0]
   * Referenced by: '<S175>/Gain'
   */
  { 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S159>/R21'
                                        */
  0.8,                                 /* Expression: 0.8
                                        * Referenced by: '<S159>/R22'
                                        */

  /*  Expression: [0;1]
   * Referenced by: '<S175>/Gain1'
   */
  { 0.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S168>/Constant_1'
                                        */

  /*  Expression: [1 0 0 0;0 1 0 0;0 0 1 0;0 0 0 1]
   * Referenced by: '<S168>/I'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 },

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S158>/Constant'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation'
                                        */

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S158>/Constant1'
   */
  { 0.0, 1.0, 0.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation1'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation1'
                                        */

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S158>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation10'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation10'
                                        */

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S158>/Constant3'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation11'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation11'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation12'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation12'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation13'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation13'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation14'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation14'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation16'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation16'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation2'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation3'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation3'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation4'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation4'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation5'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation5'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation6'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation6'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation7'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation7'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation8'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation8'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S156>/Saturation9'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S156>/Saturation9'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S26>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S27>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S28>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S29>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: RangeX_Y0_f
                                        * Referenced by: '<S17>/RangeX'
                                        */
  0.0,                                 /* Computed Parameter: VelX_Y0_l
                                        * Referenced by: '<S17>/VelX'
                                        */
  0.0,                                 /* Computed Parameter: RangeY_Y0_j
                                        * Referenced by: '<S17>/RangeY'
                                        */
  0.0,                                 /* Computed Parameter: VelY_Y0_a
                                        * Referenced by: '<S17>/VelY'
                                        */
  0.0,                                 /* Computed Parameter: P11_Y0_b
                                        * Referenced by: '<S17>/P11'
                                        */
  0.0,                                 /* Computed Parameter: P12_Y0_m
                                        * Referenced by: '<S17>/P12'
                                        */
  0.0,                                 /* Computed Parameter: P13_Y0_m
                                        * Referenced by: '<S17>/P13'
                                        */
  0.0,                                 /* Computed Parameter: P14_Y0_f
                                        * Referenced by: '<S17>/P14'
                                        */
  0.0,                                 /* Computed Parameter: P21_Y0_k
                                        * Referenced by: '<S17>/P21'
                                        */
  0.0,                                 /* Computed Parameter: P22_Y0_d
                                        * Referenced by: '<S17>/P22'
                                        */
  0.0,                                 /* Computed Parameter: P23_Y0_a
                                        * Referenced by: '<S17>/P23'
                                        */
  0.0,                                 /* Computed Parameter: P24_Y0_j
                                        * Referenced by: '<S17>/P24'
                                        */
  0.0,                                 /* Computed Parameter: P31_Y0_b
                                        * Referenced by: '<S17>/P31'
                                        */
  0.0,                                 /* Computed Parameter: P32_Y0_j
                                        * Referenced by: '<S17>/P32'
                                        */
  0.0,                                 /* Computed Parameter: P33_Y0_n
                                        * Referenced by: '<S17>/P33'
                                        */
  0.0,                                 /* Computed Parameter: P34_Y0_b
                                        * Referenced by: '<S17>/P34'
                                        */
  0.0,                                 /* Computed Parameter: P41_Y0_h
                                        * Referenced by: '<S17>/P41'
                                        */
  0.0,                                 /* Computed Parameter: P42_Y0_h
                                        * Referenced by: '<S17>/P42'
                                        */
  0.0,                                 /* Computed Parameter: P43_Y0_e
                                        * Referenced by: '<S17>/P43'
                                        */
  0.0,                                 /* Computed Parameter: P44_Y0_b
                                        * Referenced by: '<S17>/P44'
                                        */

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S17>/Constant'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S17>/Constant1'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S17>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S17>/Constant3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S39>/Constant2'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S39>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S39>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S40>/Constant5'
   */
  { 0.0, 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S40>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Constant4'
                                        */

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S41>/Constant2'
   */
  { 0.0, 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant'
                                        */

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S42>/Constant5'
   */
  { 0.0, 0.0, 0.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S42>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S42>/Constant4'
                                        */

  /*  Expression: [1;0;0;0]
   * Referenced by: '<S30>/Gain'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0;1;0;0]
   * Referenced by: '<S30>/Gain1'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /*  Expression: [0;0;1;0]
   * Referenced by: '<S30>/Gain2'
   */
  { 0.0, 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;0;1]
   * Referenced by: '<S30>/Gain3'
   */
  { 0.0, 0.0, 0.0, 1.0 },

  /*  Expression: [0.3 0 0 0;0 0.3 0 0;0 0 0.3 0;0 0 0 0.3]
   * Referenced by: '<S32>/Q'
   */
  { 0.3, 0.0, 0.0, 0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0, 0.3, 0.0, 0.0, 0.0, 0.0,
    0.3 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation10'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation10'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation11'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation11'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation12'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation12'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation13'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation13'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation14'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation14'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation15'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation15'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation2'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation5'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation5'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation6'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation6'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation7'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation7'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation8'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation8'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S17>/Saturation9'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S17>/Saturation9'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S57>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S45>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S46>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S47>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S48>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S49>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: Gtj_Y0
                                        * Referenced by: '<S18>/Gtj'
                                        */
  0.0,                                 /* Computed Parameter: dtj_Y0
                                        * Referenced by: '<S18>/dtj'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S43>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */

  /*  Expression: [1;0;0]
   * Referenced by: '<S50>/Gain'
   */
  { 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant1'
                                        */

  /*  Expression: [0;1;0]
   * Referenced by: '<S50>/Gain1'
   */
  { 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S18>/Constant4'
                                        */

  /*  Expression: [0;0;1]
   * Referenced by: '<S50>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S51>/Gain3'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S51>/Gain1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S51>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S52>/Constant'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S52>/Constant1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S52>/Constant2'
   */
  { 0.0, 0.0, 1.0 },
  1.8,                                 /* Expression: 1.8
                                        * Referenced by: '<S44>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S58>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S59>/Gain1'
                                        */
  5.2,                                 /* Expression: 5.2
                                        * Referenced by: '<S44>/Constant6'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<S18>/Gain'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S103>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S91>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S92>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S93>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S94>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S95>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: Gtj_Y0_g
                                        * Referenced by: '<S20>/Gtj'
                                        */
  0.0,                                 /* Computed Parameter: dtj_Y0_p
                                        * Referenced by: '<S20>/dtj'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S89>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant'
                                        */

  /*  Expression: [1;0;0]
   * Referenced by: '<S96>/Gain'
   */
  { 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant1'
                                        */

  /*  Expression: [0;1;0]
   * Referenced by: '<S96>/Gain1'
   */
  { 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S20>/Constant4'
                                        */

  /*  Expression: [0;0;1]
   * Referenced by: '<S96>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S97>/Gain3'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S97>/Gain1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S97>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S98>/Constant'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S98>/Constant1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S98>/Constant2'
   */
  { 0.0, 0.0, 1.0 },
  1.8,                                 /* Expression: 1.8
                                        * Referenced by: '<S90>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S104>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S105>/Gain1'
                                        */
  5.2,                                 /* Expression: 5.2
                                        * Referenced by: '<S90>/Constant6'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<S20>/Gain'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S80>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S68>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S69>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S70>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S71>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S72>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: Gtj_Y0_d
                                        * Referenced by: '<S19>/Gtj'
                                        */
  0.0,                                 /* Computed Parameter: dtj_Y0_p5
                                        * Referenced by: '<S19>/dtj'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S66>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Constant'
                                        */

  /*  Expression: [1;0;0]
   * Referenced by: '<S73>/Gain'
   */
  { 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Constant1'
                                        */

  /*  Expression: [0;1;0]
   * Referenced by: '<S73>/Gain1'
   */
  { 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S19>/Constant4'
                                        */

  /*  Expression: [0;0;1]
   * Referenced by: '<S73>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S74>/Gain3'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S74>/Gain1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S74>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S75>/Constant'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S75>/Constant1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S75>/Constant2'
   */
  { 0.0, 0.0, 1.0 },
  1.8,                                 /* Expression: 1.8
                                        * Referenced by: '<S67>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S81>/Gain1'
                                        */
  5.2,                                 /* Expression: 5.2
                                        * Referenced by: '<S67>/Constant6'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S82>/Gain1'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<S19>/Gain'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S126>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S114>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S115>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S116>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S117>/Constant'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S118>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: Gtj_Y0_l
                                        * Referenced by: '<S21>/Gtj'
                                        */
  0.0,                                 /* Computed Parameter: dtj_Y0_d
                                        * Referenced by: '<S21>/dtj'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S112>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Constant'
                                        */

  /*  Expression: [1;0;0]
   * Referenced by: '<S119>/Gain'
   */
  { 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Constant1'
                                        */

  /*  Expression: [0;1;0]
   * Referenced by: '<S119>/Gain1'
   */
  { 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Constant3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S21>/Constant4'
                                        */

  /*  Expression: [0;0;1]
   * Referenced by: '<S119>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S120>/Gain3'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S120>/Gain1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S120>/Gain2'
   */
  { 0.0, 0.0, 1.0 },

  /*  Expression: [1;0;0]
   * Referenced by: '<S121>/Constant'
   */
  { 1.0, 0.0, 0.0 },

  /*  Expression: [0;1;0]
   * Referenced by: '<S121>/Constant1'
   */
  { 0.0, 1.0, 0.0 },

  /*  Expression: [0;0;1]
   * Referenced by: '<S121>/Constant2'
   */
  { 0.0, 0.0, 1.0 },
  1.8,                                 /* Expression: 1.8
                                        * Referenced by: '<S113>/Constant5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S127>/Gain1'
                                        */
  5.2,                                 /* Expression: 5.2
                                        * Referenced by: '<S113>/Constant6'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S128>/Gain1'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<S21>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S10>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/E->N'
                                        */
  0U,                                  /* Computed Parameter: AngAssFlg_Y0
                                        * Referenced by: '<S24>/AngAssFlg'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S169>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_c
                                        * Referenced by: '<S170>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_g
                                        * Referenced by: '<S171>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_ce
                                        * Referenced by: '<S172>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S26>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S27>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_n
                                        * Referenced by: '<S28>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_d
                                        * Referenced by: '<S29>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S45>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_bd
                                        * Referenced by: '<S46>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S47>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S48>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_id
                                        * Referenced by: '<S49>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S57>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_ci
                                        * Referenced by: '<S91>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_mn
                                        * Referenced by: '<S92>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_gm
                                        * Referenced by: '<S93>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_g0
                                        * Referenced by: '<S94>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_pz
                                        * Referenced by: '<S95>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_k
                                        * Referenced by: '<S103>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_dw
                                        * Referenced by: '<S68>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S69>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_fn
                                        * Referenced by: '<S70>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_dh
                                        * Referenced by: '<S71>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_n1
                                        * Referenced by: '<S72>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_h
                                        * Referenced by: '<S80>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_de
                                        * Referenced by: '<S114>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_iq
                                        * Referenced by: '<S115>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_dhc
                                        * Referenced by: '<S116>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<S117>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_o
                                        * Referenced by: '<S118>/Switch'
                                        */
  1U,                                  /* Computed Parameter: Switch_Threshold_ij
                                        * Referenced by: '<S126>/Switch'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_j2
                                        * Referenced by: '<S12>/N->E'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_g
                                        * Referenced by: '<S14>/N->E'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_c
                                        * Referenced by: '<S13>/N->E'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_nv
                                        * Referenced by: '<S15>/N->E'
                                        */

  /* Start of '<S16>/Tracker_Initial.cos_cal' */
  {
    0.01,                              /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S146>/Constant'
                                        */
    0.01,                              /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S147>/Constant'
                                        */
    0U,                                /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S145>/Constant'
                                        */
    2.0,                               /* Expression: 2
                                        * Referenced by: '<S144>/Constant5'
                                        */
    57.295779513082323,                /* Expression: 180/pi
                                        * Referenced by: '<S144>/Gain'
                                        */
    180.0,                             /* Expression: 180
                                        * Referenced by: '<S144>/Saturation2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S144>/Saturation2'
                                        */
    180.0,                             /* Expression: 180
                                        * Referenced by: '<S144>/Constant4'
                                        */
    0.0                                /* Computed Parameter: relative_degree_Y0
                                        * Referenced by: '<S23>/relative_degree'
                                        */
  }
  /* End of '<S16>/Tracker_Initial.cos_cal' */
  ,

  /* Start of '<S16>/Tracker_Initial.VelocityMethod' */
  {
    0.0,                               /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S140>/Constant'
                                        */
    0.0,                               /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S141>/Constant'
                                        */
    0.0,                               /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S142>/Constant'
                                        */
    0.0,                               /* Mask Parameter: CompareToConstant1_const_n
                                        * Referenced by: '<S143>/Constant'
                                        */
    0.0,                               /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S135>/Constant'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S22>/Constant4'
                                        */
    1.0,                               /* Expression: 1
                                        * Referenced by: '<S22>/Constant3'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S138>/Constant2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S138>/Constant1'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S139>/Constant2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S139>/Constant1'
                                        */
    0.0,                               /* Computed Parameter: AssociationFlag_Y0
                                        * Referenced by: '<S22>/AssociationFlag'
                                        */
    2.0,                               /* Expression: 2
                                        * Referenced by: '<S137>/Gain2'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S22>/Constant1'
                                        */
    2.0,                               /* Expression: 2
                                        * Referenced by: '<S137>/Gain3'
                                        */

    /*  Expression: [1;0]
     * Referenced by: '<S137>/Gain'
     */
    { 1.0, 0.0 },
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S22>/Constant2'
                                        */
    2.0,                               /* Expression: 2
                                        * Referenced by: '<S137>/Gain4'
                                        */
    2.0,                               /* Expression: 2
                                        * Referenced by: '<S137>/Gain5'
                                        */

    /*  Expression: [0;1]
     * Referenced by: '<S137>/Gain1'
     */
    { 0.0, 1.0 }
  }
  /* End of '<S16>/Tracker_Initial.VelocityMethod' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
