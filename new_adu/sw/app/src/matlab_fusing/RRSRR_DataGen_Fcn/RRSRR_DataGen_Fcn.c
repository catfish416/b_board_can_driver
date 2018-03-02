/*
 * File: RRSRR_DataGen_Fcn.c
 *
 * Code generated for Simulink model 'RRSRR_DataGen_Fcn'.
 *
 * Model version                  : 1.36
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 19:39:57 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RRSRR_DataGen_Fcn.h"
#include "RRSRR_DataGen_Fcn_private.h"
#include "interface.h"
/* Named constants for Chart: '<Root>/Chart' */
#define RRSRR_DataGen_Fcn_L            (5.2)
#define RRSRR_DataGen_Fcn_W            (1.8)

/* Block signals (auto storage) */
B_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_B;

/* Block states (auto storage) */
DW_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_M_;
RT_MODEL_RRSRR_DataGen_Fcn_T *const RRSRR_DataGen_Fcn_M = &RRSRR_DataGen_Fcn_M_;



/* Model step function */
void RRSRR_DataGen_Fcn_step(void)
{
  real_T tmp[5];
  real_T tmp_0[10];
  boolean_T zcEvent;
  int32_T i;
  int32_T i_0;
  real_T tmp_1;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID1'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion = (real_T)Get_RR_SrrTrkObjID1();

  /* Gain: '<S25>/N->E' */
  RRSRR_DataGen_Fcn_B.NE = RRSRR_DataGen_Fcn_P.NE_Gain *
    RRSRR_DataGen_Fcn_B.DataTypeConversion;

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange1'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_j = (real_T)Get_RR_SrrTrkRange1();

  /* Gain: '<S45>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_g = RRSRR_DataGen_Fcn_P.NE_Gain_g *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_j;

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth1'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_n = (real_T)Get_RR_SrrTrkAzimuth1();

  /* Gain: '<S5>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_b = RRSRR_DataGen_Fcn_P.NE_Gain_a *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_n;

  /* Gain: '<S5>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad = RRSRR_DataGen_Fcn_P.degrad_Gain *
    RRSRR_DataGen_Fcn_B.NE_b;

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate1'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_p = (real_T)Get_RR_SrrTrkRRate1();

  /* Gain: '<S35>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_h = RRSRR_DataGen_Fcn_P.NE_Gain_j *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp1'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_f = (real_T)Get_RR_SrrTrkDynamProp1();

  /* Gain: '<S15>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_d = RRSRR_DataGen_Fcn_P.NE_Gain_f *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_f;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivideInport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[0] =
    RRSRR_DataGen_Fcn_B.NE;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[1] =
    RRSRR_DataGen_Fcn_B.NE_g;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[2] =
    RRSRR_DataGen_Fcn_B.degrad;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[3] =
    RRSRR_DataGen_Fcn_B.NE_h;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[4] =
    RRSRR_DataGen_Fcn_B.NE_d;

  /* Math: '<Root>/Math Function' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction[0],
         &RRSRR_DataGen_Fcn_P.Constant4_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide' */

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID2'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_o = (real_T)Get_RR_SrrTrkObjID2();

  /* Gain: '<S27>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ha = RRSRR_DataGen_Fcn_P.NE_Gain_h *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_o;

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange2'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_nj = (real_T)Get_RR_SrrTrkRange2();

  /* Gain: '<S47>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_j = RRSRR_DataGen_Fcn_P.NE_Gain_b *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_nj;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth2'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_np = (real_T)Get_RR_SrrTrkAzimuth2();

  /* Gain: '<S7>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_d3 = RRSRR_DataGen_Fcn_P.NE_Gain_e *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_np;

  /* Gain: '<S7>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_p = RRSRR_DataGen_Fcn_P.degrad_Gain_n *
    RRSRR_DataGen_Fcn_B.NE_d3;

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate2'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_d = (real_T)Get_RR_SrrTrkRRate2();

  /* Gain: '<S37>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_f = RRSRR_DataGen_Fcn_P.NE_Gain_d *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp2'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_h = (real_T)Get_RR_SrrTrkDynamProp2();

  /* Gain: '<S17>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_i = RRSRR_DataGen_Fcn_P.NE_Gain_an *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_h;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide1Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_ha;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_j;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_p;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_f;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_i;

  /* Math: '<Root>/Math Function1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction1[0],
         &RRSRR_DataGen_Fcn_P.Constant1_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide1' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction1[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide1[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide1' */

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID3'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_jw = (real_T)Get_RR_SrrTrkObjID3();

  /* Gain: '<S28>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_jv = RRSRR_DataGen_Fcn_P.NE_Gain_l *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_jw;

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange3'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_b = (real_T)Get_RR_SrrTrkRange3();

  /* Gain: '<S48>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_a = RRSRR_DataGen_Fcn_P.NE_Gain_ek *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth3'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_dc = (real_T)Get_RR_SrrTrkAzimuth3();

  /* Gain: '<S8>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_fp = RRSRR_DataGen_Fcn_P.NE_Gain_c *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_dc;

  /* Gain: '<S8>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_b = RRSRR_DataGen_Fcn_P.degrad_Gain_p *
    RRSRR_DataGen_Fcn_B.NE_fp;

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate3'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_c = (real_T)Get_RR_SrrTrkRRate3();

  /* Gain: '<S38>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_g1 = RRSRR_DataGen_Fcn_P.NE_Gain_l5 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_c;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp3'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ho = (real_T)Get_RR_SrrTrkDynamProp3();

  /* Gain: '<S18>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_l = RRSRR_DataGen_Fcn_P.NE_Gain_n *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ho;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide2Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_jv;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_a;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_b;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_g1;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_l;

  /* Math: '<Root>/Math Function2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction2[0],
         &RRSRR_DataGen_Fcn_P.Constant2_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide2' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction2[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide2[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide2' */

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID4'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_e = (real_T)Get_RR_SrrTrkObjID4();

  /* Gain: '<S29>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_g4 = RRSRR_DataGen_Fcn_P.NE_Gain_dc *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange4'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_l = (real_T)Get_RR_SrrTrkRange4();

  /* Gain: '<S49>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_m = RRSRR_DataGen_Fcn_P.NE_Gain_a5 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth4'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_i = (real_T)Get_RR_SrrTrkAzimuth4();

  /* Gain: '<S9>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_c = RRSRR_DataGen_Fcn_P.NE_Gain_gb *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_i;

  /* Gain: '<S9>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_ba = RRSRR_DataGen_Fcn_P.degrad_Gain_h *
    RRSRR_DataGen_Fcn_B.NE_c;

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate4'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_cf = (real_T)Get_RR_SrrTrkRRate4();

  /* Gain: '<S39>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_g4l = RRSRR_DataGen_Fcn_P.NE_Gain_bg *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_cf;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp4'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ed = (real_T)Get_RR_SrrTrkDynamProp4();

  /* Gain: '<S19>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_cp = RRSRR_DataGen_Fcn_P.NE_Gain_o *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ed;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide3Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_g4;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_m;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_ba;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_g4l;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_cp;

  /* Math: '<Root>/Math Function3' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction3[0],
         &RRSRR_DataGen_Fcn_P.Constant3_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide3' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction3[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide3[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide3' */

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID5'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_jo = (real_T)Get_RR_SrrTrkObjID5();

  /* Gain: '<S30>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_c1 = RRSRR_DataGen_Fcn_P.NE_Gain_j4 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_jo;

  /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange5'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_pc = (real_T)Get_RR_SrrTrkRange5();

  /* Gain: '<S50>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_gg = RRSRR_DataGen_Fcn_P.NE_Gain_dg *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_pc;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth5'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_k = (real_T)Get_RR_SrrTrkAzimuth5();

  /* Gain: '<S10>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ax = RRSRR_DataGen_Fcn_P.NE_Gain_k *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_k;

  /* Gain: '<S10>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_m = RRSRR_DataGen_Fcn_P.degrad_Gain_l *
    RRSRR_DataGen_Fcn_B.NE_ax;

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate5'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_m = (real_T)Get_RR_SrrTrkRRate5();

  /* Gain: '<S40>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_jt = RRSRR_DataGen_Fcn_P.NE_Gain_ai *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_m;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp5'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_nf = (real_T)Get_RR_SrrTrkDynamProp5();

  /* Gain: '<S20>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_p = RRSRR_DataGen_Fcn_P.NE_Gain_ht *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_nf;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide4Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_c1;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_gg;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_m;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_jt;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_p;

  /* Math: '<Root>/Math Function4' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction4[0],
         &RRSRR_DataGen_Fcn_P.Constant5_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide4' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction4[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide4[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide4' */

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID6'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_hi = (real_T)Get_RR_SrrTrkObjID6();

  /* Gain: '<S31>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_au = RRSRR_DataGen_Fcn_P.NE_Gain_p *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_hi;

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange6'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ni = (real_T)Get_RR_SrrTrkRange6();

  /* Gain: '<S51>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_k = RRSRR_DataGen_Fcn_P.NE_Gain_en *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ni;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth6'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_em = (real_T)Get_RR_SrrTrkAzimuth6();

  /* Gain: '<S11>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_px = RRSRR_DataGen_Fcn_P.NE_Gain_av *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_em;

  /* Gain: '<S11>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_pz = RRSRR_DataGen_Fcn_P.degrad_Gain_d *
    RRSRR_DataGen_Fcn_B.NE_px;

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate6'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ln = (real_T)Get_RR_SrrTrkRRate6();

  /* Gain: '<S41>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_n = RRSRR_DataGen_Fcn_P.NE_Gain_pe *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ln;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp6'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_bp = (real_T)Get_RR_SrrTrkDynamProp6();

  /* Gain: '<S21>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_i1 = RRSRR_DataGen_Fcn_P.NE_Gain_nq *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_bp;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide5Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_au;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_k;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_pz;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_n;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_i1;

  /* Math: '<Root>/Math Function5' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction5[0],
         &RRSRR_DataGen_Fcn_P.Constant6_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide5' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction5[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide5[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide5' */

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID7'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_iw = (real_T)Get_RR_SrrTrkObjID7();

  /* Gain: '<S32>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_gz = RRSRR_DataGen_Fcn_P.NE_Gain_gl *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_iw;

  /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange7'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_f3 = (real_T)Get_RR_SrrTrkRange7();

  /* Gain: '<S52>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ck = RRSRR_DataGen_Fcn_P.NE_Gain_hm *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_f3;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth7'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ds = (real_T)Get_RR_SrrTrkAzimuth7();

  /* Gain: '<S12>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_n0 = RRSRR_DataGen_Fcn_P.NE_Gain_pz *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ds;

  /* Gain: '<S12>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_k = RRSRR_DataGen_Fcn_P.degrad_Gain_de *
    RRSRR_DataGen_Fcn_B.NE_n0;

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate7'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_bf = (real_T)Get_RR_SrrTrkRRate7();

  /* Gain: '<S42>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ix = RRSRR_DataGen_Fcn_P.NE_Gain_l0 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_bf;

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp7'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ia = (real_T)Get_RR_SrrTrkDynamProp7();

  /* Gain: '<S22>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_a5 = RRSRR_DataGen_Fcn_P.NE_Gain_c4 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ia;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide6Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_gz;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_ck;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_k;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_ix;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_a5;

  /* Math: '<Root>/Math Function6' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction6[0],
         &RRSRR_DataGen_Fcn_P.Constant7_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide6' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction6[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide6[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide6' */

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID8'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ps = (real_T)Get_RR_SrrTrkObjID8();

  /* Gain: '<S33>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_fa = RRSRR_DataGen_Fcn_P.NE_Gain_lx *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ps;

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange8'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_pf = (real_T)Get_RR_SrrTrkRange8();

  /* Gain: '<S53>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_p4 = RRSRR_DataGen_Fcn_P.NE_Gain_of *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_pf;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth8'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_mk = (real_T)Get_RR_SrrTrkAzimuth8();

  /* Gain: '<S13>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ar = RRSRR_DataGen_Fcn_P.NE_Gain_fz *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_mk;

  /* Gain: '<S13>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_f = RRSRR_DataGen_Fcn_P.degrad_Gain_n0 *
    RRSRR_DataGen_Fcn_B.NE_ar;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate8'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_nx = (real_T)Get_RR_SrrTrkRRate8();

  /* Gain: '<S43>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_hn = RRSRR_DataGen_Fcn_P.NE_Gain_cr *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_nx;

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp8'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_j3 = (real_T)Get_RR_SrrTrkDynamProp8();

  /* Gain: '<S23>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_fw = RRSRR_DataGen_Fcn_P.NE_Gain_jg *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_j3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide7Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_fa;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_p4;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_f;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_hn;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_fw;

  /* Math: '<Root>/Math Function7' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction7[0],
         &RRSRR_DataGen_Fcn_P.Constant8_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide7' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction7[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide7[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide7' */

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID9'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_df = (real_T)Get_RR_SrrTrkObjID9();

  /* Gain: '<S34>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_cn = RRSRR_DataGen_Fcn_P.NE_Gain_be *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_df;

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange9'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_kp = (real_T)Get_RR_SrrTrkRange9();

  /* Gain: '<S54>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_bl = RRSRR_DataGen_Fcn_P.NE_Gain_js *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_kp;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth9'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_a = (real_T)Get_RR_SrrTrkAzimuth9();

  /* Gain: '<S14>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_pn = RRSRR_DataGen_Fcn_P.NE_Gain_lf *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_a;

  /* Gain: '<S14>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_c = RRSRR_DataGen_Fcn_P.degrad_Gain_k *
    RRSRR_DataGen_Fcn_B.NE_pn;

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate9'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_bl = (real_T)Get_RR_SrrTrkRRate9();

  /* Gain: '<S44>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_e = RRSRR_DataGen_Fcn_P.NE_Gain_eb *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_bl;

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp9'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_pl = (real_T)Get_RR_SrrTrkDynamProp9();

  /* Gain: '<S24>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_dz = RRSRR_DataGen_Fcn_P.NE_Gain_dl *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_pl;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide8Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_cn;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_bl;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_c;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_e;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_dz;

  /* Math: '<Root>/Math Function8' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction8[0],
         &RRSRR_DataGen_Fcn_P.Constant9_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide8' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction8[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide8[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide8' */

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkObjID10'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_f5 = (real_T)Get_RR_SrrTrkObjID10();

  /* Gain: '<S26>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ixd = RRSRR_DataGen_Fcn_P.NE_Gain_g2 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_f5;

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRange10'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_jz = (real_T)Get_RR_SrrTrkRange10();

  /* Gain: '<S46>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_l3 = RRSRR_DataGen_Fcn_P.NE_Gain_c0 *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_jz;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkAzimuth10'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_ea = (real_T)Get_RR_SrrTrkAzimuth10();

  /* Gain: '<S6>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_jg = RRSRR_DataGen_Fcn_P.NE_Gain_jq *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_ea;

  /* Gain: '<S6>/deg->rad' */
  RRSRR_DataGen_Fcn_B.degrad_i = RRSRR_DataGen_Fcn_P.degrad_Gain_b *
    RRSRR_DataGen_Fcn_B.NE_jg;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkRRate10'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_g = (real_T)Get_RR_SrrTrkRRate10();

  /* Gain: '<S36>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ga = RRSRR_DataGen_Fcn_P.NE_Gain_ef *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_g;

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RR_SrrTrkDynamProp10'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_cz = (real_T)Get_RR_SrrTrkDynamProp10();

  /* Gain: '<S16>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_ca = RRSRR_DataGen_Fcn_P.NE_Gain_li *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_cz;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide9Inport1' */
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[0] =
    RRSRR_DataGen_Fcn_B.NE_ixd;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[1] =
    RRSRR_DataGen_Fcn_B.NE_l3;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[2] =
    RRSRR_DataGen_Fcn_B.degrad_i;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[3] =
    RRSRR_DataGen_Fcn_B.NE_ga;
  RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[4] =
    RRSRR_DataGen_Fcn_B.NE_ca;

  /* Math: '<Root>/Math Function9' incorporates:
   *  Constant: '<Root>/Constant10'
   */
  memcpy(&RRSRR_DataGen_Fcn_B.MathFunction9[0],
         &RRSRR_DataGen_Fcn_P.Constant10_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide9' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RRSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[i];
  }

  memcpy(&tmp_0[0], &RRSRR_DataGen_Fcn_B.MathFunction9[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.Divide9[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide9' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 50; i++) {
    RRSRR_DataGen_Fcn_B.Add[i] = ((((((((RRSRR_DataGen_Fcn_B.Divide[i] +
      RRSRR_DataGen_Fcn_B.Divide1[i]) + RRSRR_DataGen_Fcn_B.Divide2[i]) +
      RRSRR_DataGen_Fcn_B.Divide3[i]) + RRSRR_DataGen_Fcn_B.Divide4[i]) +
      RRSRR_DataGen_Fcn_B.Divide5[i]) + RRSRR_DataGen_Fcn_B.Divide6[i]) +
      RRSRR_DataGen_Fcn_B.Divide7[i]) + RRSRR_DataGen_Fcn_B.Divide8[i]) +
      RRSRR_DataGen_Fcn_B.Divide9[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function10' */
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RRSRR_DataGen_Fcn_B.MathFunction10[i_0 + 10 * i] =
        RRSRR_DataGen_Fcn_B.Add[5 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Math Function10' */

  /* RateTransition: '<Root>/Rate Transition' */
  memcpy(&RRSRR_DataGen_Fcn_B.RateTransition[0],
         &RRSRR_DataGen_Fcn_B.MathFunction10[0], 50U * sizeof(real_T));

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RRSRR_RxTime'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_jb = (real_T)Get_RRSRR_RxTime();

  /* Gain: '<S3>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_c2 = RRSRR_DataGen_Fcn_P.NE_Gain_df *
    RRSRR_DataGen_Fcn_B.DataTypeConversion_jb;

  /* Memory: '<S57>/Memory' */
  RRSRR_DataGen_Fcn_B.Memory = RRSRR_DataGen_Fcn_DW.Memory_PreviousInput;

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RRSRR_Trigger'
   */
  RRSRR_DataGen_Fcn_B.DataTypeConversion_mu = Get_RRSRR_Trigger();

  /* Gain: '<S4>/N->E' */
  RRSRR_DataGen_Fcn_B.NE_bw = (uint16_T)((uint32_T)
    RRSRR_DataGen_Fcn_P.NE_Gain_aw * RRSRR_DataGen_Fcn_B.DataTypeConversion_mu);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  RRSRR_DataGen_Fcn_B.Compare = (uint8_T)(RRSRR_DataGen_Fcn_B.NE_bw ==
    RRSRR_DataGen_Fcn_P.CompareToConstant_const);

  /* Switch: '<S57>/Switch' */
  if (RRSRR_DataGen_Fcn_B.Compare > RRSRR_DataGen_Fcn_P.Switch_Threshold) {
    /* Logic: '<S57>/Logical Operator' */
    RRSRR_DataGen_Fcn_B.LogicalOperator = !RRSRR_DataGen_Fcn_B.Memory;
    RRSRR_DataGen_Fcn_B.Switch = RRSRR_DataGen_Fcn_B.LogicalOperator;
  } else {
    RRSRR_DataGen_Fcn_B.Switch = RRSRR_DataGen_Fcn_B.Memory;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Chart: '<Root>/Chart' incorporates:
   *  TriggerPort: '<S1>/RRSRR_Trig'
   */
  zcEvent = (((RRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE == POS_ZCSIG) !=
              RRSRR_DataGen_Fcn_B.Switch) &&
             (RRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE != UNINITIALIZED_ZCSIG));
  if (zcEvent) {
    RRSRR_DataGen_Fcn_B.RRSRR_Trig = (int8_T)(RRSRR_DataGen_Fcn_B.Switch ?
      RISING_ZCEVENT : FALLING_ZCEVENT);

    /* Gateway: Chart */
    /* Event: '<S1>:26' */
    /* During: Chart */
    /* Entry Internal: Chart */
    /* Transition: '<S1>:27' */
    memset(&RRSRR_DataGen_Fcn_B.RRSRR_Output[0], 0, 50U * sizeof(real_T));
    i = 0;
    if (RRSRR_DataGen_Fcn_B.Side_Trigger_RRSRR_h == 0.0) {
      /* Transition: '<S1>:32' */
      /* Transition: '<S1>:31' */
      RRSRR_DataGen_Fcn_B.Side_Trigger_RRSRR_h = 1.0;
      RRSRR_DataGen_Fcn_B.RRSRR_RxTime_Out = RRSRR_DataGen_Fcn_B.NE_c2;

      /* Global_Trigger_Camera is the output of Camera Data Gen, and the input of Global Fusion center,
         the signal is 1 to 0 and 0 to 1, which means that either rise or fall should trigger the Globao Fusion Center. */
      /* Transition: '<S1>:30' */
    } else {
      /* Transition: '<S1>:28' */
      RRSRR_DataGen_Fcn_B.Side_Trigger_RRSRR_h = 0.0;
      RRSRR_DataGen_Fcn_B.RRSRR_RxTime_Out = RRSRR_DataGen_Fcn_B.NE_c2;
    }

    /* Transition: '<S1>:46' */
    while (i < 10) {
      /* Transition: '<S1>:43' */
      if (RRSRR_DataGen_Fcn_B.RateTransition[i] != 0.0) {
        /* Transition: '<S1>:54' */
        /* Transition: '<S1>:50' */
        RRSRR_DataGen_Fcn_B.RRSRR_Output[i] =
          RRSRR_DataGen_Fcn_B.RateTransition[i] + 93.0;

        /* Target ID */
        /* Simulink Function 'TemporalAligRR': '<S1>:90' */
        RRSRR_DataGen_Fcn_B.range = RRSRR_DataGen_Fcn_B.RateTransition[10 + i];
        RRSRR_DataGen_Fcn_B.azimuth = RRSRR_DataGen_Fcn_B.RateTransition[20 + i];
        RRSRR_DataGen_Fcn_B.W = RRSRR_DataGen_Fcn_W;
        RRSRR_DataGen_Fcn_B.L = RRSRR_DataGen_Fcn_L;
        RRSRR_DataGen_Fcn_B.InstallAngRRSRR = 0.97735555555555564;

        /* Outputs for Function Call SubSystem: '<S1>/TemporalAligRR' */
        /* Sum: '<S58>/Add' */
        RRSRR_DataGen_Fcn_B.Add_c = RRSRR_DataGen_Fcn_B.azimuth +
          RRSRR_DataGen_Fcn_B.InstallAngRRSRR;

        /* Trigonometry: '<S58>/Trigonometric Function' */
        RRSRR_DataGen_Fcn_B.TrigonometricFunction = sin
          (RRSRR_DataGen_Fcn_B.Add_c);

        /* Product: '<S58>/Product' */
        RRSRR_DataGen_Fcn_B.Product = RRSRR_DataGen_Fcn_B.range *
          RRSRR_DataGen_Fcn_B.TrigonometricFunction;

        /* Gain: '<S58>/Gain' */
        RRSRR_DataGen_Fcn_B.Gain = RRSRR_DataGen_Fcn_P.Gain_Gain *
          RRSRR_DataGen_Fcn_B.W;

        /* Sum: '<S58>/Add1' */
        RRSRR_DataGen_Fcn_B.Add1 = (0.0 - RRSRR_DataGen_Fcn_B.Product) -
          RRSRR_DataGen_Fcn_B.Gain;

        /* Trigonometry: '<S58>/Trigonometric Function1' */
        RRSRR_DataGen_Fcn_B.TrigonometricFunction1 = cos
          (RRSRR_DataGen_Fcn_B.Add_c);

        /* Product: '<S58>/Product1' */
        RRSRR_DataGen_Fcn_B.Product1 = RRSRR_DataGen_Fcn_B.range *
          RRSRR_DataGen_Fcn_B.TrigonometricFunction1;

        /* Sum: '<S58>/Add2' */
        RRSRR_DataGen_Fcn_B.Add2 = (0.0 - RRSRR_DataGen_Fcn_B.L) -
          RRSRR_DataGen_Fcn_B.Product1;

        /* End of Outputs for SubSystem: '<S1>/TemporalAligRR' */
        RRSRR_DataGen_Fcn_B.RRSRR_Output[10 + i] = RRSRR_DataGen_Fcn_B.Add2;
        RRSRR_DataGen_Fcn_B.RRSRR_Output[20 + i] = RRSRR_DataGen_Fcn_B.Add1;
        RRSRR_DataGen_Fcn_B.RRSRR_Output[30 + i] =
          RRSRR_DataGen_Fcn_B.RateTransition[40 + i];

        /* Target DynamicMode */
        RRSRR_DataGen_Fcn_B.RRSRR_Output[40 + i] =
          RRSRR_DataGen_Fcn_B.RateTransition[30 + i];

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

  RRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = (uint8_T)
    (RRSRR_DataGen_Fcn_B.Switch ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
  for (i = 0; i < 50; i++) {
    /* Gain: '<S2>/E->N' */
    RRSRR_DataGen_Fcn_B.EN[i] = RRSRR_DataGen_Fcn_P.EN_Gain *
      RRSRR_DataGen_Fcn_B.RRSRR_Output[i];

    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    Set_RR_SRR_Data( i , RRSRR_DataGen_Fcn_B.EN[i]);
	
  }

  /* Gain: '<S56>/E->N' */
  RRSRR_DataGen_Fcn_B.EN_h = RRSRR_DataGen_Fcn_P.EN_Gain_c *
    RRSRR_DataGen_Fcn_B.Side_Trigger_RRSRR_h;

  /* DataTypeConversion: '<S56>/Data Type Conversion' */
  tmp_1 = floor(RRSRR_DataGen_Fcn_B.EN_h);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 256.0);
  }

  Set_Side_Trigger_RRSRR((uint8_T)(tmp_1 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-tmp_1 : (int32_T)(uint8_T)tmp_1));

  /* End of DataTypeConversion: '<S56>/Data Type Conversion' */

  /* Gain: '<S55>/E->N' */
  RRSRR_DataGen_Fcn_B.EN_j = RRSRR_DataGen_Fcn_P.EN_Gain_n *
    RRSRR_DataGen_Fcn_B.RRSRR_RxTime_Out;

  /* DataTypeConversion: '<S55>/Data Type Conversion' */
  Set_Side_RRSRR_RxTime(RRSRR_DataGen_Fcn_B.EN_j);

  /* Update for Memory: '<S57>/Memory' */
  RRSRR_DataGen_Fcn_DW.Memory_PreviousInput = RRSRR_DataGen_Fcn_B.Switch;
}

/* Model initialize function */
void RRSRR_DataGen_Fcn_initialize(void)
{
  /* Registration code */
  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(RRSRR_DataGen_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &RRSRR_DataGen_Fcn_B), 0,
                sizeof(B_RRSRR_DataGen_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&RRSRR_DataGen_Fcn_DW, 0,
                sizeof(DW_RRSRR_DataGen_Fcn_T));

  /* Start for Chart: '<Root>/Chart' incorporates:
   *  Start for SubSystem: '<S1>/TemporalAligRR'
   */
  /* VirtualOutportStart for Outport: '<S58>/rangeX' */
  RRSRR_DataGen_Fcn_B.Add2 = RRSRR_DataGen_Fcn_P.rangeX_Y0;

  /* VirtualOutportStart for Outport: '<S58>/rangeY' */
  RRSRR_DataGen_Fcn_B.Add1 = RRSRR_DataGen_Fcn_P.rangeY_Y0;
  RRSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S57>/Memory' */
  RRSRR_DataGen_Fcn_DW.Memory_PreviousInput = RRSRR_DataGen_Fcn_P.Memory_X0;

  /* InitializeConditions for Chart: '<Root>/Chart' */
  memset(&RRSRR_DataGen_Fcn_B.RRSRR_Output[0], 0, 50U * sizeof(real_T));
  RRSRR_DataGen_Fcn_B.RRSRR_RxTime_Out = 0.0;
  RRSRR_DataGen_Fcn_B.Side_Trigger_RRSRR_h = 0.0;
}

/* Model terminate function */
void RRSRR_DataGen_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
