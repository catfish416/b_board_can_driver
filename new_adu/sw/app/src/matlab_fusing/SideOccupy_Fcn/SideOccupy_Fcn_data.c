/*
 * File: SideOccupy_Fcn_data.c
 *
 * Code generated for Simulink model 'SideOccupy_Fcn'.
 *
 * Model version                  : 1.47
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 15 13:25:13 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SideOccupy_Fcn.h"
#include "SideOccupy_Fcn_private.h"

/* Block parameters (auto storage) */
P_SideOccupy_Fcn_T SideOccupy_Fcn_P = {
  1.0,                                 /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S116>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_h
                                        * Referenced by: '<S110>/Constant'
                                        */
  0.0,                                 /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S99>/Constant'
                                        */
  0.17453292519943295,                 /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S100>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_e
                                        * Referenced by: '<S112>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S129>/Constant'
                                        */
  0.0,                                 /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S118>/Constant'
                                        */
  0.17453292519943295,                 /* Mask Parameter: CompareToConstant1_const_o
                                        * Referenced by: '<S119>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_jm
                                        * Referenced by: '<S131>/Constant'
                                        */
  1.0,                                 /* Mask Parameter: CompareToConstant_const_bt
                                        * Referenced by: '<S27>/Constant'
                                        */
  2.86,                                /* Expression: 2.86
                                        * Referenced by: '<S1>/Constant1'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S17>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S17>/deg->rad'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S19>/N->E'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S19>/degps->radps'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S115>/Constant'
                                        */
  0.0,                                 /* Computed Parameter: y_Y0
                                        * Referenced by: '<S39>/y'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S39>/Gain'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S102>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Switch1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S105>/Constant'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S111>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S104>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S114>/Gain'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S113>/Gain'
                                        */
  0.0,                                 /* Computed Parameter: y_Y0_d
                                        * Referenced by: '<S38>/y'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S98>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S106>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S106>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S109>/Gain'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S108>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S104>/Switch'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S103>/Gain'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S121>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Switch1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S124>/Constant'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S130>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S123>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S133>/Gain'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S132>/Gain'
                                        */
  0.0,                                 /* Computed Parameter: y_Y0_f
                                        * Referenced by: '<S40>/y'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S117>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S125>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S125>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S128>/Gain'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S127>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S123>/Switch'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S122>/Gain'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S73>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S77>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S75>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S74>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S76>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S60>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S61>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S59>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S63>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S62>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S87>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S87>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S91>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S85>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S85>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S89>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S88>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S88>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S86>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S86>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S94>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S94>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S96>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S95>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S95>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S97>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S51>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S51>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S55>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S49>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S49>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S53>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S50>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S50>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S54>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S48>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S48>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S52>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S43>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S43>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S44>/Gain1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S44>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S46>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  0.015625,                            /* Expression: 0.015625
                                        * Referenced by: '<S18>/N->kph'
                                        */
  0.27777777777777779,                 /* Expression: 1/3.6
                                        * Referenced by: '<S18>/kph->mps'
                                        */
  8191.0,                              /* Expression: 8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  -8191.0,                             /* Expression: -8191
                                        * Referenced by: '<S1>/Saturation2'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S5>/N->E'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S6>/N->E'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S7>/N->E'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S8>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S10>/N->E'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S11>/N->E'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S12>/N->E'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S13>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S14>/N->E'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_In_LtLnWd'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_In_RtLnWd'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Out_LtLnWd'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Out_RtLnWd'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Mov_EgoLnWd'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Cal_Mov_NextLnWd'
                                        */
  40.0,                                /* Expression: 40
                                        * Referenced by: '<Root>/Cal_SdDist_Front'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<Root>/Cal_SdDist_Rear'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/E->N'
                                        */

  /*  Expression: [1 0 0 0 0 0]
   * Referenced by: '<S20>/Constant4'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0 1 0 0 0 0]
   * Referenced by: '<S21>/Constant4'
   */
  { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0 0 1 0 0 0]
   * Referenced by: '<S22>/Constant4'
   */
  { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },

  /*  Expression: [0 0 0 1 0 0]
   * Referenced by: '<S23>/Constant4'
   */
  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },

  /*  Expression: [0 0 0 0 1 0]
   * Referenced by: '<S24>/Constant4'
   */
  { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },

  /*  Expression: [0 0 0 0 0 1]
   * Referenced by: '<S25>/Constant4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/E->N'
                                        */
  32768U,                              /* Computed Parameter: Gain_Gain_i5
                                        * Referenced by: '<S34>/Gain'
                                        */
  49152U,                              /* Computed Parameter: Gain1_Gain_h
                                        * Referenced by: '<S34>/Gain1'
                                        */
  32768U,                              /* Computed Parameter: Gain_Gain_mp
                                        * Referenced by: '<S30>/Gain'
                                        */
  49152U,                              /* Computed Parameter: Gain1_Gain_gz
                                        * Referenced by: '<S30>/Gain1'
                                        */
  32768U,                              /* Computed Parameter: Gain_Gain_kk
                                        * Referenced by: '<S36>/Gain'
                                        */
  49152U,                              /* Computed Parameter: Gain1_Gain_e
                                        * Referenced by: '<S36>/Gain1'
                                        */
  32768U,                              /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S29>/Gain'
                                        */
  49152U,                              /* Computed Parameter: Gain1_Gain_ca
                                        * Referenced by: '<S29>/Gain1'
                                        */
  0,                                   /* Computed Parameter: InLtSideFlg_Y0
                                        * Referenced by: '<S34>/InLtSideFlg'
                                        */
  0,                                   /* Computed Parameter: InRtSideFlg_Y0
                                        * Referenced by: '<S30>/InRtSideFlg'
                                        */
  0,                                   /* Computed Parameter: InLtSideFlg_Y0_c
                                        * Referenced by: '<S36>/InLtSideFlg'
                                        */
  0,                                   /* Computed Parameter: SelectObjFlg_Y0
                                        * Referenced by: '<S37>/SelectObjFlg'
                                        */
  0,                                   /* Computed Parameter: InRtSideFlg_Y0_f
                                        * Referenced by: '<S29>/InRtSideFlg'
                                        */
  0,                                   /* Computed Parameter: SelectObjFlg_Y0_c
                                        * Referenced by: '<S28>/SelectObjFlg'
                                        */

  /* Start of '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S68>/Constant'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S69>/Constant'
                                        */
    0                                  /* Computed Parameter: SelectObjFlg_Y0
                                        * Referenced by: '<S31>/SelectObjFlg'
                                        */
  }
  /* End of '<S26>/Judge_Main.Inner_SdOccJudAccordRtLane.Fcn_SelectJdWtRtLn' */
  ,

  /* Start of '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
  {
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S82>/Constant'
                                        */
    0.0,                               /* Expression: 0
                                        * Referenced by: '<S83>/Constant'
                                        */
    0                                  /* Computed Parameter: SelectObjFlg_Y0
                                        * Referenced by: '<S35>/SelectObjFlg'
                                        */
  }
  /* End of '<S26>/Judge_Main.Outer_SdOccJudAccordLtLane.Fcn_SelectJdWtLtLn' */
  ,

  /* Start of '<S26>/Judge_Main.TTC_Cal' */
  {
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S41>/Gain'
                                        */
    10.0,                              /* Expression: 10
                                        * Referenced by: '<S41>/Constant1'
                                        */
    10.0,                              /* Expression: 10
                                        * Referenced by: '<S41>/Constant'
                                        */
    0.0,                               /* Computed Parameter: TTC_Y0
                                        * Referenced by: '<S41>/TTC'
                                        */
    0.0                                /* Expression: 0
                                        * Referenced by: '<S134>/Constant'
                                        */
  }
  /* End of '<S26>/Judge_Main.TTC_Cal' */
  ,

  /* Start of '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
  {
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S33>/Gain1'
                                        */
    0                                  /* Computed Parameter: InterestFlg_Y0
                                        * Referenced by: '<S33>/InterestFlg'
                                        */
  }
  /* End of '<S26>/Judge_Main.InterestObjDet_WithoutLane' */
  ,

  /* Start of '<S26>/Judge_Main.InterestObjDet_WithLane' */
  {
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S32>/Gain1'
                                        */
    -1.0,                              /* Expression: -1
                                        * Referenced by: '<S32>/Gain'
                                        */
    0                                  /* Computed Parameter: InterestFlg_Y0
                                        * Referenced by: '<S32>/InterestFlg'
                                        */
  }
  /* End of '<S26>/Judge_Main.InterestObjDet_WithLane' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
