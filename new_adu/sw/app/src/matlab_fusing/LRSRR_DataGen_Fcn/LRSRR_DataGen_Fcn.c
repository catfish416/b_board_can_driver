/*
 * File: LRSRR_DataGen_Fcn.c
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
#include "interface.h"

/* Named constants for Chart: '<Root>/Chart' */
#define LRSRR_DataGen_Fcn_L            (5.2)
#define LRSRR_DataGen_Fcn_W            (1.8)

/* Block signals (auto storage) */
B_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_B;

/* Block states (auto storage) */
DW_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_M_;
RT_MODEL_LRSRR_DataGen_Fcn_T *const LRSRR_DataGen_Fcn_M = &LRSRR_DataGen_Fcn_M_;


/* Model step function */
void LRSRR_DataGen_Fcn_step(void)
{
  real_T tmp[5];
  real_T tmp_0[10];
  boolean_T zcEvent;
  int32_T i;
  int32_T i_0;
  real_T tmp_1;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID1'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion = (real_T)Get_LR_SrrTrkObjID1();

  /* Gain: '<S25>/N->E' */
  LRSRR_DataGen_Fcn_B.NE = LRSRR_DataGen_Fcn_P.NE_Gain *
    LRSRR_DataGen_Fcn_B.DataTypeConversion;

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange1'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_n = (real_T)Get_LR_SrrTrkRange1();
   /* Gain: '<S45>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_m = LRSRR_DataGen_Fcn_P.NE_Gain_l *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_n;

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth1'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_a = (real_T)Get_LR_SrrTrkAzimuth1();

  /* Gain: '<S5>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_a = LRSRR_DataGen_Fcn_P.NE_Gain_i *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_a;

  /* Gain: '<S5>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad = LRSRR_DataGen_Fcn_P.degrad_Gain *
    LRSRR_DataGen_Fcn_B.NE_a;

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate1'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ac = (real_T)Get_LR_SrrTrkRRate1();

  /* Gain: '<S35>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_h = LRSRR_DataGen_Fcn_P.NE_Gain_o *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ac;

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp1'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_h = (real_T)Get_LR_SrrTrkDynamProp1();

  /* Gain: '<S15>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_d = LRSRR_DataGen_Fcn_P.NE_Gain_d *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_h;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivideInport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[0] =
    LRSRR_DataGen_Fcn_B.NE;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[1] =
    LRSRR_DataGen_Fcn_B.NE_m;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[2] =
    LRSRR_DataGen_Fcn_B.degrad;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[3] =
    LRSRR_DataGen_Fcn_B.NE_h;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[4] =
    LRSRR_DataGen_Fcn_B.NE_d;

  /* Math: '<Root>/Math Function' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction[0],
         &LRSRR_DataGen_Fcn_P.Constant4_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide' */

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID2'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_e = (real_T)Get_LR_SrrTrkObjID2();

  /* Gain: '<S27>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ms = LRSRR_DataGen_Fcn_P.NE_Gain_a *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange2'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_k = (real_T)Get_LR_SrrTrkRange2();

  /* Gain: '<S47>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_dy = LRSRR_DataGen_Fcn_P.NE_Gain_f *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_k;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth2'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ae = (real_T)Get_LR_SrrTrkAzimuth2();

  /* Gain: '<S7>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ay = LRSRR_DataGen_Fcn_P.NE_Gain_g *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ae;

  /* Gain: '<S7>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_f = LRSRR_DataGen_Fcn_P.degrad_Gain_c *
    LRSRR_DataGen_Fcn_B.NE_ay;

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate2'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_p = (real_T)Get_LR_SrrTrkRRate2();

  /* Gain: '<S37>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_o = LRSRR_DataGen_Fcn_P.NE_Gain_l0 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp2'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_i = (real_T)Get_LR_SrrTrkDynamProp2();

  /* Gain: '<S17>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_i = LRSRR_DataGen_Fcn_P.NE_Gain_b *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_i;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide1Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_ms;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_dy;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_f;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_o;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_i;

  /* Math: '<Root>/Math Function1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction1[0],
         &LRSRR_DataGen_Fcn_P.Constant1_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide1' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction1[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide1[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide1' */

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID3'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_m = (real_T)Get_LR_SrrTrkObjID3();

  /* Gain: '<S28>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_k = LRSRR_DataGen_Fcn_P.NE_Gain_j *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_m;

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange3'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_g = (real_T)Get_LR_SrrTrkRange3();

  /* Gain: '<S48>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_c = LRSRR_DataGen_Fcn_P.NE_Gain_k *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_g;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth3'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ik = (real_T)Get_LR_SrrTrkAzimuth3();

  /* Gain: '<S8>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_kk = LRSRR_DataGen_Fcn_P.NE_Gain_g2 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ik;

  /* Gain: '<S8>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_g = LRSRR_DataGen_Fcn_P.degrad_Gain_i *
    LRSRR_DataGen_Fcn_B.NE_kk;

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate3'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_kp = (real_T)Get_LR_SrrTrkRRate3();

  /* Gain: '<S38>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_p = LRSRR_DataGen_Fcn_P.NE_Gain_n *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_kp;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp3'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_iq = (real_T)Get_LR_SrrTrkDynamProp3();

  /* Gain: '<S18>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_mv = LRSRR_DataGen_Fcn_P.NE_Gain_nx *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_iq;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide2Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_k;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_c;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_g;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_p;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_mv;

  /* Math: '<Root>/Math Function2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction2[0],
         &LRSRR_DataGen_Fcn_P.Constant2_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide2' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction2[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide2[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide2' */

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID4'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_nr = (real_T)Get_LR_SrrTrkObjID4();

  /* Gain: '<S29>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_j = LRSRR_DataGen_Fcn_P.NE_Gain_g3 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_nr;

  /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange4'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ii = (real_T)Get_LR_SrrTrkRange4();

  /* Gain: '<S49>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_e = LRSRR_DataGen_Fcn_P.NE_Gain_jy *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ii;

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth4'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_nc = (real_T)Get_LR_SrrTrkAzimuth4();

  /* Gain: '<S9>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_pr = LRSRR_DataGen_Fcn_P.NE_Gain_nq *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_nc;

  /* Gain: '<S9>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_a = LRSRR_DataGen_Fcn_P.degrad_Gain_f *
    LRSRR_DataGen_Fcn_B.NE_pr;

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate4'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_f = (real_T)Get_LR_SrrTrkRRate4();

  /* Gain: '<S39>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_g = LRSRR_DataGen_Fcn_P.NE_Gain_lc *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_f;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp4'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_o = (real_T)Get_LR_SrrTrkDynamProp4();

  /* Gain: '<S19>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_b = LRSRR_DataGen_Fcn_P.NE_Gain_ij *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_o;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide3Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_j;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_e;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_a;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_g;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_b;

  /* Math: '<Root>/Math Function3' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction3[0],
         &LRSRR_DataGen_Fcn_P.Constant3_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide3' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction3[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide3[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide3' */

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID5'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_it = (real_T)Get_LR_SrrTrkObjID5();

  /* Gain: '<S30>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_k2 = LRSRR_DataGen_Fcn_P.NE_Gain_kl *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_it;

  /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange5'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_oo = (real_T)Get_LR_SrrTrkRange5();

  /* Gain: '<S50>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_gp = LRSRR_DataGen_Fcn_P.NE_Gain_lw *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_oo;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth5'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_c = (real_T)Get_LR_SrrTrkAzimuth5();

  /* Gain: '<S10>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_gn = LRSRR_DataGen_Fcn_P.NE_Gain_kf *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_c;

  /* Gain: '<S10>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_c = LRSRR_DataGen_Fcn_P.degrad_Gain_g *
    LRSRR_DataGen_Fcn_B.NE_gn;

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate5'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_d = (real_T)Get_LR_SrrTrkRRate5();

  /* Gain: '<S40>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_kc = LRSRR_DataGen_Fcn_P.NE_Gain_fp *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp5'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_o3 = (real_T)Get_LR_SrrTrkDynamProp5();

  /* Gain: '<S20>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ie = LRSRR_DataGen_Fcn_P.NE_Gain_e *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_o3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide4Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_k2;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_gp;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_c;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_kc;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_ie;

  /* Math: '<Root>/Math Function4' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction4[0],
         &LRSRR_DataGen_Fcn_P.Constant5_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide4' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction4[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide4[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide4' */

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID6'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_nv = (real_T)Get_LR_SrrTrkObjID6();

  /* Gain: '<S31>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_l = LRSRR_DataGen_Fcn_P.NE_Gain_f0 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_nv;

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange6'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_b = (real_T)Get_LR_SrrTrkRange6();

  /* Gain: '<S51>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_cb = LRSRR_DataGen_Fcn_P.NE_Gain_gr *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth6'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ds = (real_T)Get_LR_SrrTrkAzimuth6();

  /* Gain: '<S11>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_oc = LRSRR_DataGen_Fcn_P.NE_Gain_ep *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ds;

  /* Gain: '<S11>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_e = LRSRR_DataGen_Fcn_P.degrad_Gain_f2 *
    LRSRR_DataGen_Fcn_B.NE_oc;

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate6'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_nh = (real_T)Get_LR_SrrTrkRRate6();

  /* Gain: '<S41>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_je = LRSRR_DataGen_Fcn_P.NE_Gain_h *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_nh;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp6'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_oc = (real_T)Get_LR_SrrTrkDynamProp6();

  /* Gain: '<S21>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_n = LRSRR_DataGen_Fcn_P.NE_Gain_of *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_oc;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide5Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_l;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_cb;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_e;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_je;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_n;

  /* Math: '<Root>/Math Function5' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction5[0],
         &LRSRR_DataGen_Fcn_P.Constant6_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide5' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction5[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide5[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide5' */

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID7'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_bv = (real_T)Get_LR_SrrTrkObjID7();

  /* Gain: '<S32>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_lw = LRSRR_DataGen_Fcn_P.NE_Gain_p *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_bv;

  /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange7'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_mp = (real_T)Get_LR_SrrTrkRange7();

  /* Gain: '<S52>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_jy = LRSRR_DataGen_Fcn_P.NE_Gain_e2 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_mp;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth7'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_gk = (real_T)Get_LR_SrrTrkAzimuth7();

  /* Gain: '<S12>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_pm = LRSRR_DataGen_Fcn_P.NE_Gain_b2 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_gk;

  /* Gain: '<S12>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_cn = LRSRR_DataGen_Fcn_P.degrad_Gain_a *
    LRSRR_DataGen_Fcn_B.NE_pm;

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate7'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_kw = (real_T)Get_LR_SrrTrkRRate7();

  /* Gain: '<S42>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_dq = LRSRR_DataGen_Fcn_P.NE_Gain_hd *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_kw;

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp7'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_i3 = (real_T)Get_LR_SrrTrkDynamProp7();

  /* Gain: '<S22>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_b2 = LRSRR_DataGen_Fcn_P.NE_Gain_pm *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_i3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide6Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_lw;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_jy;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_cn;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_dq;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_b2;

  /* Math: '<Root>/Math Function6' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction6[0],
         &LRSRR_DataGen_Fcn_P.Constant7_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide6' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction6[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide6[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide6' */

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID8'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_l = (real_T)Get_LR_SrrTrkObjID8();

  /* Gain: '<S33>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_hc = LRSRR_DataGen_Fcn_P.NE_Gain_o5 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange8'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_k4 = (real_T)Get_LR_SrrTrkRange8();

  /* Gain: '<S53>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_nn = LRSRR_DataGen_Fcn_P.NE_Gain_pe *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_k4;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth8'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_kz = (real_T)Get_LR_SrrTrkAzimuth8();

  /* Gain: '<S13>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_jg = LRSRR_DataGen_Fcn_P.NE_Gain_ov *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_kz;

  /* Gain: '<S13>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_d = LRSRR_DataGen_Fcn_P.degrad_Gain_c2 *
    LRSRR_DataGen_Fcn_B.NE_jg;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate8'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_ic = (real_T)Get_LR_SrrTrkRRate8();

  /* Gain: '<S43>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_n3 = LRSRR_DataGen_Fcn_P.NE_Gain_k5 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_ic;

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp8'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_kb = (real_T)Get_LR_SrrTrkDynamProp8();

  /* Gain: '<S23>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_f = LRSRR_DataGen_Fcn_P.NE_Gain_n4 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_kb;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide7Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_hc;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_nn;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_d;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_n3;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_f;

  /* Math: '<Root>/Math Function7' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction7[0],
         &LRSRR_DataGen_Fcn_P.Constant8_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide7' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction7[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide7[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide7' */

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID9'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_gk4 = (real_T)Get_LR_SrrTrkObjID9();

  /* Gain: '<S34>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ko = LRSRR_DataGen_Fcn_P.NE_Gain_e3 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_gk4;

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange9'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_mg = (real_T)Get_LR_SrrTrkRange9();

  /* Gain: '<S54>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ed = LRSRR_DataGen_Fcn_P.NE_Gain_nt *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_mg;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth9'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_j = (real_T)Get_LR_SrrTrkAzimuth9();

  /* Gain: '<S14>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ks = LRSRR_DataGen_Fcn_P.NE_Gain_gc *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_j;

  /* Gain: '<S14>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_h = LRSRR_DataGen_Fcn_P.degrad_Gain_ia *
    LRSRR_DataGen_Fcn_B.NE_ks;

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate9'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_os = (real_T)Get_LR_SrrTrkRRate9();

  /* Gain: '<S44>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_op = LRSRR_DataGen_Fcn_P.NE_Gain_aw *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_os;

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp9'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_hh = (real_T)Get_LR_SrrTrkDynamProp9();

  /* Gain: '<S24>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ng = LRSRR_DataGen_Fcn_P.NE_Gain_k5h *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_hh;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide8Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_ko;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_ed;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_h;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_op;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_ng;

  /* Math: '<Root>/Math Function8' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction8[0],
         &LRSRR_DataGen_Fcn_P.Constant9_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide8' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction8[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide8[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide8' */

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkObjID10'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_av = (real_T)Get_LR_SrrTrkObjID10();

  /* Gain: '<S26>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_et = LRSRR_DataGen_Fcn_P.NE_Gain_c *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_av;

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRange10'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_aa = (real_T)Get_LR_SrrTrkRange10();

  /* Gain: '<S46>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_ck = LRSRR_DataGen_Fcn_P.NE_Gain_cb *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_aa;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkAzimuth10'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_dc = (real_T)Get_LR_SrrTrkAzimuth10();

  /* Gain: '<S6>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_m3 = LRSRR_DataGen_Fcn_P.NE_Gain_grn *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_dc;

  /* Gain: '<S6>/deg->rad' */
  LRSRR_DataGen_Fcn_B.degrad_e5 = LRSRR_DataGen_Fcn_P.degrad_Gain_b *
    LRSRR_DataGen_Fcn_B.NE_m3;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkRRate10'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_p5 = (real_T)Get_LR_SrrTrkRRate10();

  /* Gain: '<S36>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_k4 = LRSRR_DataGen_Fcn_P.NE_Gain_m *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_p5;

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LR_SrrTrkDynamProp10'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_bf = (real_T)Get_LR_SrrTrkDynamProp10();

  /* Gain: '<S16>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_gd = LRSRR_DataGen_Fcn_P.NE_Gain_l00 *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_bf;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide9Inport1' */
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[0] =
    LRSRR_DataGen_Fcn_B.NE_et;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[1] =
    LRSRR_DataGen_Fcn_B.NE_ck;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[2] =
    LRSRR_DataGen_Fcn_B.degrad_e5;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[3] =
    LRSRR_DataGen_Fcn_B.NE_k4;
  LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[4] =
    LRSRR_DataGen_Fcn_B.NE_gd;

  /* Math: '<Root>/Math Function9' incorporates:
   *  Constant: '<Root>/Constant10'
   */
  memcpy(&LRSRR_DataGen_Fcn_B.MathFunction9[0],
         &LRSRR_DataGen_Fcn_P.Constant10_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide9' */
  for (i = 0; i < 5; i++) {
    tmp[i] = LRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[i];
  }

  memcpy(&tmp_0[0], &LRSRR_DataGen_Fcn_B.MathFunction9[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.Divide9[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide9' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 50; i++) {
    LRSRR_DataGen_Fcn_B.Add[i] = ((((((((LRSRR_DataGen_Fcn_B.Divide[i] +
      LRSRR_DataGen_Fcn_B.Divide1[i]) + LRSRR_DataGen_Fcn_B.Divide2[i]) +
      LRSRR_DataGen_Fcn_B.Divide3[i]) + LRSRR_DataGen_Fcn_B.Divide4[i]) +
      LRSRR_DataGen_Fcn_B.Divide5[i]) + LRSRR_DataGen_Fcn_B.Divide6[i]) +
      LRSRR_DataGen_Fcn_B.Divide7[i]) + LRSRR_DataGen_Fcn_B.Divide8[i]) +
      LRSRR_DataGen_Fcn_B.Divide9[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function10' */
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      LRSRR_DataGen_Fcn_B.MathFunction10[i_0 + 10 * i] =
        LRSRR_DataGen_Fcn_B.Add[5 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Math Function10' */

  /* RateTransition: '<Root>/Rate Transition' */
  memcpy(&LRSRR_DataGen_Fcn_B.RateTransition[0],
         &LRSRR_DataGen_Fcn_B.MathFunction10[0], 50U * sizeof(real_T));

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LRSRR_RxTime'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_jb = (real_T)Get_LRSRR_RxTime();

  /* Gain: '<S3>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_c2 = LRSRR_DataGen_Fcn_P.NE_Gain_df *
    LRSRR_DataGen_Fcn_B.DataTypeConversion_jb;

  /* Memory: '<S57>/Memory' */
  LRSRR_DataGen_Fcn_B.Memory = LRSRR_DataGen_Fcn_DW.Memory_PreviousInput;

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/LRSRR_Trigger'
   */
  LRSRR_DataGen_Fcn_B.DataTypeConversion_mu = Get_LRSRR_Trigger();

  /* Gain: '<S4>/N->E' */
  LRSRR_DataGen_Fcn_B.NE_bw = (uint16_T)((uint32_T)
    LRSRR_DataGen_Fcn_P.NE_Gain_awq * LRSRR_DataGen_Fcn_B.DataTypeConversion_mu);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  LRSRR_DataGen_Fcn_B.Compare = (uint8_T)(LRSRR_DataGen_Fcn_B.NE_bw ==
    LRSRR_DataGen_Fcn_P.CompareToConstant_const);

  /* Switch: '<S57>/Switch' */
  if (LRSRR_DataGen_Fcn_B.Compare > LRSRR_DataGen_Fcn_P.Switch_Threshold) {
    /* Logic: '<S57>/Logical Operator' */
    LRSRR_DataGen_Fcn_B.LogicalOperator = !LRSRR_DataGen_Fcn_B.Memory;
    LRSRR_DataGen_Fcn_B.Switch = LRSRR_DataGen_Fcn_B.LogicalOperator;
  } else {
    LRSRR_DataGen_Fcn_B.Switch = LRSRR_DataGen_Fcn_B.Memory;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Chart: '<Root>/Chart' incorporates:
   *  TriggerPort: '<S1>/LRSRR_Trig'
   */
  zcEvent = (((LRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE == POS_ZCSIG) !=
              LRSRR_DataGen_Fcn_B.Switch) &&
             (LRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE != UNINITIALIZED_ZCSIG));
  if (zcEvent) {
    LRSRR_DataGen_Fcn_B.LRSRR_Trig = (int8_T)(LRSRR_DataGen_Fcn_B.Switch ?
      RISING_ZCEVENT : FALLING_ZCEVENT);

    /* Gateway: Chart */
    /* Event: '<S1>:26' */
    /* During: Chart */
    /* Entry Internal: Chart */
    /* Transition: '<S1>:27' */
    memset(&LRSRR_DataGen_Fcn_B.LRSRR_Output[0], 0, 50U * sizeof(real_T));
    i = 0;
    if (LRSRR_DataGen_Fcn_B.Side_Trigger_LRSRR_n == 0.0) {
      /* Transition: '<S1>:32' */
      /* Transition: '<S1>:31' */
      LRSRR_DataGen_Fcn_B.Side_Trigger_LRSRR_n = 1.0;
      LRSRR_DataGen_Fcn_B.LRSRR_RxTime_Out = LRSRR_DataGen_Fcn_B.NE_c2;

      /* Global_Trigger_Camera is the output of Camera Data Gen, and the input of Global Fusion center,
         the signal is 1 to 0 and 0 to 1, which means that either rise or fall should trigger the Globao Fusion Center. */
      /* Transition: '<S1>:30' */
    } else {
      /* Transition: '<S1>:28' */
      LRSRR_DataGen_Fcn_B.Side_Trigger_LRSRR_n = 0.0;
      LRSRR_DataGen_Fcn_B.LRSRR_RxTime_Out = LRSRR_DataGen_Fcn_B.NE_c2;
    }

    /* Transition: '<S1>:46' */
    while (i < 10) {
      /* Transition: '<S1>:43' */
      if (LRSRR_DataGen_Fcn_B.RateTransition[i] != 0.0) {
        /* Transition: '<S1>:54' */
        /* Transition: '<S1>:50' */
        LRSRR_DataGen_Fcn_B.LRSRR_Output[i] =
          LRSRR_DataGen_Fcn_B.RateTransition[i] + 62.0;

        /* Target ID */
        /* Simulink Function 'TemporalAligLR': '<S1>:74' */
        LRSRR_DataGen_Fcn_B.range = LRSRR_DataGen_Fcn_B.RateTransition[10 + i];
        LRSRR_DataGen_Fcn_B.azimuth = LRSRR_DataGen_Fcn_B.RateTransition[20 + i];
        LRSRR_DataGen_Fcn_B.W = LRSRR_DataGen_Fcn_W;
        LRSRR_DataGen_Fcn_B.L = LRSRR_DataGen_Fcn_L;
        LRSRR_DataGen_Fcn_B.InstallAngLRSRR = 0.97735555555555564;

        /* Outputs for Function Call SubSystem: '<S1>/TemporalAligLR' */
        /* Sum: '<S58>/Add' */
        LRSRR_DataGen_Fcn_B.Add_j = LRSRR_DataGen_Fcn_B.azimuth +
          LRSRR_DataGen_Fcn_B.InstallAngLRSRR;

        /* Trigonometry: '<S58>/Trigonometric Function' */
        LRSRR_DataGen_Fcn_B.TrigonometricFunction = sin
          (LRSRR_DataGen_Fcn_B.Add_j);

        /* Product: '<S58>/Product' */
        LRSRR_DataGen_Fcn_B.Product = LRSRR_DataGen_Fcn_B.range *
          LRSRR_DataGen_Fcn_B.TrigonometricFunction;

        /* Gain: '<S58>/Gain' */
        LRSRR_DataGen_Fcn_B.Gain = LRSRR_DataGen_Fcn_P.Gain_Gain *
          LRSRR_DataGen_Fcn_B.W;

        /* Sum: '<S58>/Add1' */
        LRSRR_DataGen_Fcn_B.Add1 = LRSRR_DataGen_Fcn_B.Product +
          LRSRR_DataGen_Fcn_B.Gain;

        /* Trigonometry: '<S58>/Trigonometric Function1' */
        LRSRR_DataGen_Fcn_B.TrigonometricFunction1 = cos
          (LRSRR_DataGen_Fcn_B.Add_j);

        /* Product: '<S58>/Product1' */
        LRSRR_DataGen_Fcn_B.Product1 = LRSRR_DataGen_Fcn_B.range *
          LRSRR_DataGen_Fcn_B.TrigonometricFunction1;

        /* Sum: '<S58>/Add2' */
        LRSRR_DataGen_Fcn_B.Add2 = (0.0 - LRSRR_DataGen_Fcn_B.L) -
          LRSRR_DataGen_Fcn_B.Product1;

        /* End of Outputs for SubSystem: '<S1>/TemporalAligLR' */
        LRSRR_DataGen_Fcn_B.LRSRR_Output[10 + i] = LRSRR_DataGen_Fcn_B.Add2;
        LRSRR_DataGen_Fcn_B.LRSRR_Output[20 + i] = LRSRR_DataGen_Fcn_B.Add1;
        LRSRR_DataGen_Fcn_B.LRSRR_Output[30 + i] =
          LRSRR_DataGen_Fcn_B.RateTransition[40 + i];

        /* Target DynamicMode */
        LRSRR_DataGen_Fcn_B.LRSRR_Output[40 + i] =
          LRSRR_DataGen_Fcn_B.RateTransition[30 + i];

        /* RangeRate */
        /* Transition: '<S1>:51' */
      } else {
        /* Transition: '<S1>:53' */
      }

      /* Transition: '<S1>:44' */
      i++;
    }

    /* Transition: '<S1>:52' */
  }

  LRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = (uint8_T)
    (LRSRR_DataGen_Fcn_B.Switch ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
  for (i = 0; i < 50; i++) {
    /* Gain: '<S2>/E->N' */
    LRSRR_DataGen_Fcn_B.EN[i] = LRSRR_DataGen_Fcn_P.EN_Gain *
      LRSRR_DataGen_Fcn_B.LRSRR_Output[i];

    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    Set_LR_SRR_Data( i , LRSRR_DataGen_Fcn_B.EN[i]);
  }

  /* Gain: '<S56>/E->N' */
  LRSRR_DataGen_Fcn_B.EN_h = LRSRR_DataGen_Fcn_P.EN_Gain_c *
    LRSRR_DataGen_Fcn_B.Side_Trigger_LRSRR_n;

  /* DataTypeConversion: '<S56>/Data Type Conversion' */
  tmp_1 = floor(LRSRR_DataGen_Fcn_B.EN_h);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 256.0);
  }

  Set_Side_Trigger_LRSRR((uint8_T)(tmp_1 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-tmp_1 : (int32_T)(uint8_T)tmp_1));

  /* End of DataTypeConversion: '<S56>/Data Type Conversion' */

  /* Gain: '<S55>/E->N' */
  LRSRR_DataGen_Fcn_B.EN_j = LRSRR_DataGen_Fcn_P.EN_Gain_n *
    LRSRR_DataGen_Fcn_B.LRSRR_RxTime_Out;

  /* DataTypeConversion: '<S55>/Data Type Conversion' */
  Set_Side_LRSRR_RxTime(LRSRR_DataGen_Fcn_B.EN_j);

  /* Update for Memory: '<S57>/Memory' */
  LRSRR_DataGen_Fcn_DW.Memory_PreviousInput = LRSRR_DataGen_Fcn_B.Switch;
}

/* Model initialize function */
void LRSRR_DataGen_Fcn_initialize(void)
{
  /* Registration code */
  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(LRSRR_DataGen_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &LRSRR_DataGen_Fcn_B), 0,
                sizeof(B_LRSRR_DataGen_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&LRSRR_DataGen_Fcn_DW, 0,
                sizeof(DW_LRSRR_DataGen_Fcn_T));

  /* Start for Chart: '<Root>/Chart' incorporates:
   *  Start for SubSystem: '<S1>/TemporalAligLR'
   */
  /* VirtualOutportStart for Outport: '<S58>/rangeX' */
  LRSRR_DataGen_Fcn_B.Add2 = LRSRR_DataGen_Fcn_P.rangeX_Y0;

  /* VirtualOutportStart for Outport: '<S58>/rangeY' */
  LRSRR_DataGen_Fcn_B.Add1 = LRSRR_DataGen_Fcn_P.rangeY_Y0;
  LRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S57>/Memory' */
  LRSRR_DataGen_Fcn_DW.Memory_PreviousInput = LRSRR_DataGen_Fcn_P.Memory_X0;

  /* InitializeConditions for Chart: '<Root>/Chart' */
  memset(&LRSRR_DataGen_Fcn_B.LRSRR_Output[0], 0, 50U * sizeof(real_T));
  LRSRR_DataGen_Fcn_B.LRSRR_RxTime_Out = 0.0;
  LRSRR_DataGen_Fcn_B.Side_Trigger_LRSRR_n = 0.0;
}

/* Model terminate function */
void LRSRR_DataGen_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
