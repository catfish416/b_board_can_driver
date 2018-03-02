/*
 * File: RFSRR_DataGen_Fcn.c
 *
 * Code generated for Simulink model 'RFSRR_DataGen_Fcn'.
 *
 * Model version                  : 1.36
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue May 09 10:18:27 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "RFSRR_DataGen_Fcn.h"
#include "RFSRR_DataGen_Fcn_private.h"
#include "interface.h"
/* Named constants for Chart: '<Root>/Chart' */
#define RFSRR_DataGen_Fcn_L            (5.2)
#define RFSRR_DataGen_Fcn_W            (1.8)

/* Block signals (auto storage) */
B_RFSRR_DataGen_Fcn_T RFSRR_DataGen_Fcn_B;

/* Block states (auto storage) */
DW_RFSRR_DataGen_Fcn_T RFSRR_DataGen_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_RFSRR_DataGen_Fcn_T RFSRR_DataGen_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_RFSRR_DataGen_Fcn_T RFSRR_DataGen_Fcn_M_;
RT_MODEL_RFSRR_DataGen_Fcn_T *const RFSRR_DataGen_Fcn_M = &RFSRR_DataGen_Fcn_M_;



/* Model step function */
void RFSRR_DataGen_Fcn_step(void)
{
  real_T tmp[5];
  real_T tmp_0[10];
  boolean_T zcEvent;
  int32_T i;
  int32_T i_0;
  real_T tmp_1;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID1'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion = (real_T)Get_RF_SrrTrkObjID1();

  /* Gain: '<S25>/N->E' */
  RFSRR_DataGen_Fcn_B.NE = RFSRR_DataGen_Fcn_P.NE_Gain *
    RFSRR_DataGen_Fcn_B.DataTypeConversion;

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange1'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_j = (real_T)Get_RF_SrrTrkRange1();

  /* Gain: '<S45>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_g = RFSRR_DataGen_Fcn_P.NE_Gain_g *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_j;

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth1'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_n = (real_T)Get_RF_SrrTrkAzimuth1();

  /* Gain: '<S5>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_b = RFSRR_DataGen_Fcn_P.NE_Gain_a *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_n;

  /* Gain: '<S5>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad = RFSRR_DataGen_Fcn_P.degrad_Gain *
    RFSRR_DataGen_Fcn_B.NE_b;

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate1'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_p = (real_T)Get_RF_SrrTrkRRate1();

  /* Gain: '<S35>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_h = RFSRR_DataGen_Fcn_P.NE_Gain_j *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp1'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_f = (real_T)Get_RF_SrrTrkDynamProp1();

  /* Gain: '<S15>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_d = RFSRR_DataGen_Fcn_P.NE_Gain_f *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_f;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivideInport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[0] =
    RFSRR_DataGen_Fcn_B.NE;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[1] =
    RFSRR_DataGen_Fcn_B.NE_g;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[2] =
    RFSRR_DataGen_Fcn_B.degrad;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[3] =
    RFSRR_DataGen_Fcn_B.NE_h;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[4] =
    RFSRR_DataGen_Fcn_B.NE_d;

  /* Math: '<Root>/Math Function' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction[0],
         &RFSRR_DataGen_Fcn_P.Constant4_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivideInpo[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide' */

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID2'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_o = (real_T)Get_RF_SrrTrkObjID2();

  /* Gain: '<S27>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ha = RFSRR_DataGen_Fcn_P.NE_Gain_h *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_o;

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange2'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_nj = (real_T)Get_RF_SrrTrkRange2();

  /* Gain: '<S47>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_j = RFSRR_DataGen_Fcn_P.NE_Gain_b *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_nj;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth2'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_np = (real_T)Get_RF_SrrTrkAzimuth2();

  /* Gain: '<S7>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_d3 = RFSRR_DataGen_Fcn_P.NE_Gain_e *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_np;

  /* Gain: '<S7>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_p = RFSRR_DataGen_Fcn_P.degrad_Gain_n *
    RFSRR_DataGen_Fcn_B.NE_d3;

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate2'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_d = (real_T)Get_RF_SrrTrkRRate2();

  /* Gain: '<S37>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_f = RFSRR_DataGen_Fcn_P.NE_Gain_d *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp2'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_h = (real_T)Get_RF_SrrTrkDynamProp2();

  /* Gain: '<S17>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_i = RFSRR_DataGen_Fcn_P.NE_Gain_an *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_h;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide1Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_ha;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_j;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_p;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_f;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_i;

  /* Math: '<Root>/Math Function1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction1[0],
         &RFSRR_DataGen_Fcn_P.Constant1_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide1' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction1[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide1[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide1' */

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID3'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_jw = (real_T)Get_RF_SrrTrkObjID3();

  /* Gain: '<S28>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_jv = RFSRR_DataGen_Fcn_P.NE_Gain_l *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_jw;

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange3'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_b = (real_T)Get_RF_SrrTrkRange3();

  /* Gain: '<S48>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_a = RFSRR_DataGen_Fcn_P.NE_Gain_ek *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth3'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_dc = (real_T)Get_RF_SrrTrkAzimuth3();

  /* Gain: '<S8>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_fp = RFSRR_DataGen_Fcn_P.NE_Gain_c *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_dc;

  /* Gain: '<S8>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_b = RFSRR_DataGen_Fcn_P.degrad_Gain_p *
    RFSRR_DataGen_Fcn_B.NE_fp;

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate3'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_c = (real_T)Get_RF_SrrTrkRRate3();

  /* Gain: '<S38>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_g1 = RFSRR_DataGen_Fcn_P.NE_Gain_l5 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_c;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp3'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ho = (real_T)Get_RF_SrrTrkDynamProp3();

  /* Gain: '<S18>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_l = RFSRR_DataGen_Fcn_P.NE_Gain_n *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ho;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide2Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_jv;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_a;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_b;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_g1;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_l;

  /* Math: '<Root>/Math Function2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction2[0],
         &RFSRR_DataGen_Fcn_P.Constant2_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide2' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction2[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide2[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide2' */

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID4'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_e = (real_T)Get_RF_SrrTrkObjID4();

  /* Gain: '<S29>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_g4 = RFSRR_DataGen_Fcn_P.NE_Gain_dc *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange4'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_l = (real_T)Get_RF_SrrTrkRange4();

  /* Gain: '<S49>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_m = RFSRR_DataGen_Fcn_P.NE_Gain_a5 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth4'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_i = (real_T)Get_RF_SrrTrkAzimuth4();

  /* Gain: '<S9>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_c = RFSRR_DataGen_Fcn_P.NE_Gain_gb *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_i;

  /* Gain: '<S9>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_ba = RFSRR_DataGen_Fcn_P.degrad_Gain_h *
    RFSRR_DataGen_Fcn_B.NE_c;

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate4'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_cf = (real_T)Get_RF_SrrTrkRRate4();

  /* Gain: '<S39>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_g4l = RFSRR_DataGen_Fcn_P.NE_Gain_bg *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_cf;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp4'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ed = (real_T)Get_RF_SrrTrkDynamProp4();

  /* Gain: '<S19>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_cp = RFSRR_DataGen_Fcn_P.NE_Gain_o *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ed;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide3Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_g4;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_m;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_ba;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_g4l;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_cp;

  /* Math: '<Root>/Math Function3' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction3[0],
         &RFSRR_DataGen_Fcn_P.Constant3_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide3' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction3[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide3[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide3' */

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID5'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_jo = (real_T)Get_RF_SrrTrkObjID5();

  /* Gain: '<S30>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_c1 = RFSRR_DataGen_Fcn_P.NE_Gain_j4 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_jo;

  /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange5'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_pc = (real_T)Get_RF_SrrTrkRange5();

  /* Gain: '<S50>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_gg = RFSRR_DataGen_Fcn_P.NE_Gain_dg *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_pc;

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth5'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_k = (real_T)Get_RF_SrrTrkAzimuth5();

  /* Gain: '<S10>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ax = RFSRR_DataGen_Fcn_P.NE_Gain_k *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_k;

  /* Gain: '<S10>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_m = RFSRR_DataGen_Fcn_P.degrad_Gain_l *
    RFSRR_DataGen_Fcn_B.NE_ax;

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate5'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_m = (real_T)Get_RF_SrrTrkRRate5();

  /* Gain: '<S40>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_jt = RFSRR_DataGen_Fcn_P.NE_Gain_ai *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_m;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp5'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_nf = (real_T)Get_RF_SrrTrkDynamProp5();

  /* Gain: '<S20>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_p = RFSRR_DataGen_Fcn_P.NE_Gain_ht *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_nf;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide4Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_c1;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_gg;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_m;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_jt;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_p;

  /* Math: '<Root>/Math Function4' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction4[0],
         &RFSRR_DataGen_Fcn_P.Constant5_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide4' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction4[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide4[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide4' */

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID6'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_hi = (real_T)Get_RF_SrrTrkObjID6();

  /* Gain: '<S31>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_au = RFSRR_DataGen_Fcn_P.NE_Gain_p *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_hi;

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange6'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ni = (real_T)Get_RF_SrrTrkRange6();

  /* Gain: '<S51>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_k = RFSRR_DataGen_Fcn_P.NE_Gain_en *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ni;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth6'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_em = (real_T)Get_RF_SrrTrkAzimuth6();

  /* Gain: '<S11>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_px = RFSRR_DataGen_Fcn_P.NE_Gain_av *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_em;

  /* Gain: '<S11>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_pz = RFSRR_DataGen_Fcn_P.degrad_Gain_d *
    RFSRR_DataGen_Fcn_B.NE_px;

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate6'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ln = (real_T)Get_RF_SrrTrkRRate6();

  /* Gain: '<S41>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_n = RFSRR_DataGen_Fcn_P.NE_Gain_pe *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ln;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp6'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_bp = (real_T)Get_RF_SrrTrkDynamProp6();

  /* Gain: '<S21>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_i1 = RFSRR_DataGen_Fcn_P.NE_Gain_nq *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_bp;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide5Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_au;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_k;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_pz;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_n;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_i1;

  /* Math: '<Root>/Math Function5' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction5[0],
         &RFSRR_DataGen_Fcn_P.Constant6_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide5' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction5[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide5[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide5' */

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID7'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_iw = (real_T)Get_RF_SrrTrkObjID7();

  /* Gain: '<S32>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_gz = RFSRR_DataGen_Fcn_P.NE_Gain_gl *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_iw;

  /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange7'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_f3 = (real_T)Get_RF_SrrTrkRange7();

  /* Gain: '<S52>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ck = RFSRR_DataGen_Fcn_P.NE_Gain_hm *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_f3;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth7'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ds = (real_T)Get_RF_SrrTrkAzimuth7();

  /* Gain: '<S12>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_n0 = RFSRR_DataGen_Fcn_P.NE_Gain_pz *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ds;

  /* Gain: '<S12>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_k = RFSRR_DataGen_Fcn_P.degrad_Gain_de *
    RFSRR_DataGen_Fcn_B.NE_n0;

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate7'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_bf = (real_T)Get_RF_SrrTrkRRate7();

  /* Gain: '<S42>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ix = RFSRR_DataGen_Fcn_P.NE_Gain_l0 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_bf;

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp7'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ia = (real_T)Get_RF_SrrTrkDynamProp7();

  /* Gain: '<S22>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_a5 = RFSRR_DataGen_Fcn_P.NE_Gain_c4 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ia;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide6Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_gz;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_ck;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_k;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_ix;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_a5;

  /* Math: '<Root>/Math Function6' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction6[0],
         &RFSRR_DataGen_Fcn_P.Constant7_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide6' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction6[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide6[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide6' */

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID8'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ps = (real_T)Get_RF_SrrTrkObjID8();

  /* Gain: '<S33>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_fa = RFSRR_DataGen_Fcn_P.NE_Gain_lx *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ps;

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange8'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_pf = (real_T)Get_RF_SrrTrkRange8();

  /* Gain: '<S53>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_p4 = RFSRR_DataGen_Fcn_P.NE_Gain_of *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_pf;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth8'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_mk = (real_T)Get_RF_SrrTrkAzimuth8();

  /* Gain: '<S13>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ar = RFSRR_DataGen_Fcn_P.NE_Gain_fz *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_mk;

  /* Gain: '<S13>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_f = RFSRR_DataGen_Fcn_P.degrad_Gain_n0 *
    RFSRR_DataGen_Fcn_B.NE_ar;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate8'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_nx = (real_T)Get_RF_SrrTrkRRate8();

  /* Gain: '<S43>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_hn = RFSRR_DataGen_Fcn_P.NE_Gain_cr *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_nx;

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp8'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_j3 = (real_T)Get_RF_SrrTrkDynamProp8();

  /* Gain: '<S23>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_fw = RFSRR_DataGen_Fcn_P.NE_Gain_jg *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_j3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide7Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_fa;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_p4;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_f;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_hn;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_fw;

  /* Math: '<Root>/Math Function7' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction7[0],
         &RFSRR_DataGen_Fcn_P.Constant8_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide7' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction7[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide7[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide7' */

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID9'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_df = (real_T)Get_RF_SrrTrkObjID9();

  /* Gain: '<S34>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_cn = RFSRR_DataGen_Fcn_P.NE_Gain_be *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_df;

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange9'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_kp = (real_T)Get_RF_SrrTrkRange9();

  /* Gain: '<S54>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_bl = RFSRR_DataGen_Fcn_P.NE_Gain_js *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_kp;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth9'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_a = (real_T)Get_RF_SrrTrkAzimuth9();

  /* Gain: '<S14>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_pn = RFSRR_DataGen_Fcn_P.NE_Gain_lf *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_a;

  /* Gain: '<S14>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_c = RFSRR_DataGen_Fcn_P.degrad_Gain_k *
    RFSRR_DataGen_Fcn_B.NE_pn;

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate9'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_bl = (real_T)Get_RF_SrrTrkRRate9();

  /* Gain: '<S44>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_e = RFSRR_DataGen_Fcn_P.NE_Gain_eb *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_bl;

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp9'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_pl = (real_T)Get_RF_SrrTrkDynamProp9();

  /* Gain: '<S24>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_dz = RFSRR_DataGen_Fcn_P.NE_Gain_dl *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_pl;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide8Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_cn;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_bl;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_c;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_e;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_dz;

  /* Math: '<Root>/Math Function8' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction8[0],
         &RFSRR_DataGen_Fcn_P.Constant9_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide8' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction8[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide8[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide8' */

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkObjID10'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_f5 = (real_T)Get_RF_SrrTrkObjID10();

  /* Gain: '<S26>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ixd = RFSRR_DataGen_Fcn_P.NE_Gain_g2 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_f5;

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRange10'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_jz = (real_T)Get_RF_SrrTrkRange10();

  /* Gain: '<S46>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_l3 = RFSRR_DataGen_Fcn_P.NE_Gain_c0 *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_jz;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkAzimuth10'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_ea = (real_T)Get_RF_SrrTrkAzimuth10();

  /* Gain: '<S6>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_jg = RFSRR_DataGen_Fcn_P.NE_Gain_jq *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_ea;

  /* Gain: '<S6>/deg->rad' */
  RFSRR_DataGen_Fcn_B.degrad_i = RFSRR_DataGen_Fcn_P.degrad_Gain_b *
    RFSRR_DataGen_Fcn_B.NE_jg;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkRRate10'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_g = (real_T)Get_RF_SrrTrkRRate10();

  /* Gain: '<S36>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ga = RFSRR_DataGen_Fcn_P.NE_Gain_ef *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_g;

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RF_SrrTrkDynamProp10'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_cz = (real_T)Get_RF_SrrTrkDynamProp10();

  /* Gain: '<S16>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_ca = RFSRR_DataGen_Fcn_P.NE_Gain_li *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_cz;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide9Inport1' */
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[0] =
    RFSRR_DataGen_Fcn_B.NE_ixd;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[1] =
    RFSRR_DataGen_Fcn_B.NE_l3;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[2] =
    RFSRR_DataGen_Fcn_B.degrad_i;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[3] =
    RFSRR_DataGen_Fcn_B.NE_ga;
  RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[4] =
    RFSRR_DataGen_Fcn_B.NE_ca;

  /* Math: '<Root>/Math Function9' incorporates:
   *  Constant: '<Root>/Constant10'
   */
  memcpy(&RFSRR_DataGen_Fcn_B.MathFunction9[0],
         &RFSRR_DataGen_Fcn_P.Constant10_Value[0], 10U * sizeof(real_T));

  /* Product: '<Root>/Divide9' */
  for (i = 0; i < 5; i++) {
    tmp[i] = RFSRR_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[i];
  }

  memcpy(&tmp_0[0], &RFSRR_DataGen_Fcn_B.MathFunction9[0], 10U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.Divide9[i + 5 * i_0] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide9' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 50; i++) {
    RFSRR_DataGen_Fcn_B.Add[i] = ((((((((RFSRR_DataGen_Fcn_B.Divide[i] +
      RFSRR_DataGen_Fcn_B.Divide1[i]) + RFSRR_DataGen_Fcn_B.Divide2[i]) +
      RFSRR_DataGen_Fcn_B.Divide3[i]) + RFSRR_DataGen_Fcn_B.Divide4[i]) +
      RFSRR_DataGen_Fcn_B.Divide5[i]) + RFSRR_DataGen_Fcn_B.Divide6[i]) +
      RFSRR_DataGen_Fcn_B.Divide7[i]) + RFSRR_DataGen_Fcn_B.Divide8[i]) +
      RFSRR_DataGen_Fcn_B.Divide9[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function10' */
  for (i = 0; i < 5; i++) {
    for (i_0 = 0; i_0 < 10; i_0++) {
      RFSRR_DataGen_Fcn_B.MathFunction10[i_0 + 10 * i] =
        RFSRR_DataGen_Fcn_B.Add[5 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Math Function10' */

  /* RateTransition: '<Root>/Rate Transition' */
  memcpy(&RFSRR_DataGen_Fcn_B.RateTransition[0],
         &RFSRR_DataGen_Fcn_B.MathFunction10[0], 50U * sizeof(real_T));

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RFSRR_RxTime'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_jb = (real_T)Get_RFSRR_RxTime();

  /* Gain: '<S3>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_c2 = RFSRR_DataGen_Fcn_P.NE_Gain_df *
    RFSRR_DataGen_Fcn_B.DataTypeConversion_jb;

  /* Memory: '<S57>/Memory' */
  RFSRR_DataGen_Fcn_B.Memory = RFSRR_DataGen_Fcn_DW.Memory_PreviousInput;

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/RFSRR_Trigger'
   */
  RFSRR_DataGen_Fcn_B.DataTypeConversion_mu = Get_RFSRR_Trigger();

  /* Gain: '<S4>/N->E' */
  RFSRR_DataGen_Fcn_B.NE_bw = (uint16_T)((uint32_T)
    RFSRR_DataGen_Fcn_P.NE_Gain_aw * RFSRR_DataGen_Fcn_B.DataTypeConversion_mu);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  RFSRR_DataGen_Fcn_B.Compare = (uint8_T)(RFSRR_DataGen_Fcn_B.NE_bw ==
    RFSRR_DataGen_Fcn_P.CompareToConstant_const);

  /* Switch: '<S57>/Switch' */
  if (RFSRR_DataGen_Fcn_B.Compare > RFSRR_DataGen_Fcn_P.Switch_Threshold) {
    /* Logic: '<S57>/Logical Operator' */
    RFSRR_DataGen_Fcn_B.LogicalOperator = !RFSRR_DataGen_Fcn_B.Memory;
    RFSRR_DataGen_Fcn_B.Switch = RFSRR_DataGen_Fcn_B.LogicalOperator;
  } else {
    RFSRR_DataGen_Fcn_B.Switch = RFSRR_DataGen_Fcn_B.Memory;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Chart: '<Root>/Chart' incorporates:
   *  TriggerPort: '<S1>/RFSRR_Trig'
   */
  zcEvent = (((RFSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE == POS_ZCSIG) !=
              RFSRR_DataGen_Fcn_B.Switch) &&
             (RFSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE != UNINITIALIZED_ZCSIG));
  if (zcEvent) {
    RFSRR_DataGen_Fcn_B.RFSRR_Trig = (int8_T)(RFSRR_DataGen_Fcn_B.Switch ?
      RISING_ZCEVENT : FALLING_ZCEVENT);

    /* Gateway: Chart */
    /* Event: '<S1>:26' */
    /* During: Chart */
    /* Entry Internal: Chart */
    /* Transition: '<S1>:27' */
    memset(&RFSRR_DataGen_Fcn_B.RFSRR_Output[0], 0, 50U * sizeof(real_T));
    i = 0;
    if (RFSRR_DataGen_Fcn_B.Side_Trigger_RFSRR_l == 0.0) {
      /* Transition: '<S1>:32' */
      /* Transition: '<S1>:31' */
      RFSRR_DataGen_Fcn_B.Side_Trigger_RFSRR_l = 1.0;
      RFSRR_DataGen_Fcn_B.RFSRR_RxTime_Out = RFSRR_DataGen_Fcn_B.NE_c2;

      /* Global_Trigger_Camera is the output of Camera Data Gen, and the input of Global Fusion center,
         the signal is 1 to 0 and 0 to 1, which means that either rise or fall should trigger the Globao Fusion Center. */
      /* Transition: '<S1>:30' */
    } else {
      /* Transition: '<S1>:28' */
      RFSRR_DataGen_Fcn_B.Side_Trigger_RFSRR_l = 0.0;
      RFSRR_DataGen_Fcn_B.RFSRR_RxTime_Out = RFSRR_DataGen_Fcn_B.NE_c2;
    }

    /* Transition: '<S1>:46' */
    while (i < 10) {
      /* Transition: '<S1>:43' */
      if (RFSRR_DataGen_Fcn_B.RateTransition[i] != 0.0) {
        /* Transition: '<S1>:54' */
        /* Transition: '<S1>:50' */
        RFSRR_DataGen_Fcn_B.RFSRR_Output[i] =
          RFSRR_DataGen_Fcn_B.RateTransition[i] + 31.0;

        /* Target ID */
        /* Simulink Function 'TemporalAligRF': '<S1>:74' */
        RFSRR_DataGen_Fcn_B.range = RFSRR_DataGen_Fcn_B.RateTransition[10 + i];
        RFSRR_DataGen_Fcn_B.azimuth = RFSRR_DataGen_Fcn_B.RateTransition[20 + i];
        RFSRR_DataGen_Fcn_B.W = RFSRR_DataGen_Fcn_W;
        RFSRR_DataGen_Fcn_B.L = RFSRR_DataGen_Fcn_L;
        RFSRR_DataGen_Fcn_B.InstallAngRFSRR = 1.0471666666666668;

        /* Outputs for Function Call SubSystem: '<S1>/TemporalAligRF' */
        /* Sum: '<S58>/Add' */
        RFSRR_DataGen_Fcn_B.Add_i = RFSRR_DataGen_Fcn_B.InstallAngRFSRR -
          RFSRR_DataGen_Fcn_B.azimuth;

        /* Trigonometry: '<S58>/Trigonometric Function' */
        RFSRR_DataGen_Fcn_B.TrigonometricFunction = sin
          (RFSRR_DataGen_Fcn_B.Add_i);

        /* Product: '<S58>/Product' */
        RFSRR_DataGen_Fcn_B.Product = RFSRR_DataGen_Fcn_B.range *
          RFSRR_DataGen_Fcn_B.TrigonometricFunction;

        /* Gain: '<S58>/Gain' */
        RFSRR_DataGen_Fcn_B.Gain = RFSRR_DataGen_Fcn_P.Gain_Gain *
          RFSRR_DataGen_Fcn_B.W;

        /* Sum: '<S58>/Add1' */
        RFSRR_DataGen_Fcn_B.Add1 = (0.0 - RFSRR_DataGen_Fcn_B.Product) -
          RFSRR_DataGen_Fcn_B.Gain;

        /* Sum: '<S58>/Add2' incorporates:
         *  Constant: '<S58>/RF_SRR_Y_offset[m]'
         */
        RFSRR_DataGen_Fcn_B.Add2 = RFSRR_DataGen_Fcn_B.Add1 +
          RFSRR_DataGen_Fcn_P.RF_SRR_Y_offsetm_Value;

        /* Trigonometry: '<S58>/Trigonometric Function1' */
        RFSRR_DataGen_Fcn_B.TrigonometricFunction1 = cos
          (RFSRR_DataGen_Fcn_B.Add_i);

        /* Product: '<S58>/Product1' */
        RFSRR_DataGen_Fcn_B.Product1 = RFSRR_DataGen_Fcn_B.range *
          RFSRR_DataGen_Fcn_B.TrigonometricFunction1;

        /* Sum: '<S58>/Add3' incorporates:
         *  Constant: '<S58>/RF_SRR_Xoffset[m]'
         */
        RFSRR_DataGen_Fcn_B.Add3 = RFSRR_DataGen_Fcn_B.Product1 +
          RFSRR_DataGen_Fcn_P.RF_SRR_Xoffsetm_Value;

        /* End of Outputs for SubSystem: '<S1>/TemporalAligRF' */
        RFSRR_DataGen_Fcn_B.RFSRR_Output[10 + i] = RFSRR_DataGen_Fcn_B.Add3;
        RFSRR_DataGen_Fcn_B.RFSRR_Output[20 + i] = RFSRR_DataGen_Fcn_B.Add2;
        RFSRR_DataGen_Fcn_B.RFSRR_Output[30 + i] =
          RFSRR_DataGen_Fcn_B.RateTransition[40 + i];

        /* Target DynamicMode */
        RFSRR_DataGen_Fcn_B.RFSRR_Output[40 + i] =
          RFSRR_DataGen_Fcn_B.RateTransition[30 + i];

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

  RFSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = (uint8_T)
    (RFSRR_DataGen_Fcn_B.Switch ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
  for (i = 0; i < 50; i++) {
    /* Gain: '<S2>/E->N' */
    RFSRR_DataGen_Fcn_B.EN[i] = RFSRR_DataGen_Fcn_P.EN_Gain *
      RFSRR_DataGen_Fcn_B.RFSRR_Output[i];

    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    Set_RF_SRR_Data( i , RFSRR_DataGen_Fcn_B.EN[i]);
  }

  /* Gain: '<S56>/E->N' */
  RFSRR_DataGen_Fcn_B.EN_h = RFSRR_DataGen_Fcn_P.EN_Gain_c *
    RFSRR_DataGen_Fcn_B.Side_Trigger_RFSRR_l;

  /* DataTypeConversion: '<S56>/Data Type Conversion' */
  tmp_1 = floor(RFSRR_DataGen_Fcn_B.EN_h);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 256.0);
  }

  Set_Side_Trigger_RFSRR((uint8_T)(tmp_1 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-tmp_1 : (int32_T)(uint8_T)tmp_1));

  /* End of DataTypeConversion: '<S56>/Data Type Conversion' */

  /* Gain: '<S55>/E->N' */
  RFSRR_DataGen_Fcn_B.EN_j = RFSRR_DataGen_Fcn_P.EN_Gain_n *
    RFSRR_DataGen_Fcn_B.RFSRR_RxTime_Out;

  /* DataTypeConversion: '<S55>/Data Type Conversion' */
  Set_Side_RFSRR_RxTime(RFSRR_DataGen_Fcn_B.EN_j);

  /* Update for Memory: '<S57>/Memory' */
  RFSRR_DataGen_Fcn_DW.Memory_PreviousInput = RFSRR_DataGen_Fcn_B.Switch;
}

/* Model initialize function */
void RFSRR_DataGen_Fcn_initialize(void)
{
  /* Registration code */
  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(RFSRR_DataGen_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &RFSRR_DataGen_Fcn_B), 0,
                sizeof(B_RFSRR_DataGen_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&RFSRR_DataGen_Fcn_DW, 0,
                sizeof(DW_RFSRR_DataGen_Fcn_T));

  /* Start for Chart: '<Root>/Chart' incorporates:
   *  Start for SubSystem: '<S1>/TemporalAligRF'
   */
  /* VirtualOutportStart for Outport: '<S58>/rangeX' */
  RFSRR_DataGen_Fcn_B.Add3 = RFSRR_DataGen_Fcn_P.rangeX_Y0;

  /* VirtualOutportStart for Outport: '<S58>/rangeY' */
  RFSRR_DataGen_Fcn_B.Add2 = RFSRR_DataGen_Fcn_P.rangeY_Y0;
  RFSRR_DataGen_Fcn_PrevZCX.Chart_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S57>/Memory' */
  RFSRR_DataGen_Fcn_DW.Memory_PreviousInput = RFSRR_DataGen_Fcn_P.Memory_X0;

  /* InitializeConditions for Chart: '<Root>/Chart' */
  memset(&RFSRR_DataGen_Fcn_B.RFSRR_Output[0], 0, 50U * sizeof(real_T));
  RFSRR_DataGen_Fcn_B.RFSRR_RxTime_Out = 0.0;
  RFSRR_DataGen_Fcn_B.Side_Trigger_RFSRR_l = 0.0;
}

/* Model terminate function */
void RFSRR_DataGen_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
