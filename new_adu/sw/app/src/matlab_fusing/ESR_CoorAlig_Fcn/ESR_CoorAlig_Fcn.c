/*
 * File: ESR_CoorAlig_Fcn.c
 *
 * Code generated for Simulink model 'ESR_CoorAlig_Fcn'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Wed Apr 05 17:05:31 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ESR_CoorAlig_Fcn.h"
#include "ESR_CoorAlig_Fcn_private.h"
#include "interface.h"
/* Named constants for Chart: '<Root>/ESR_Data_Collect' */
#define ESR_CoorAlig_Fcn_L             (5.2)
#define ESR_CoorAlig_Fcn_W             (1.8)

/* Block signals (auto storage) */
B_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_B;

/* Block states (auto storage) */
DW_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_M_;
RT_MODEL_ESR_CoorAlig_Fcn_T *const ESR_CoorAlig_Fcn_M = &ESR_CoorAlig_Fcn_M_;




/* Model step function */
void ESR_CoorAlig_Fcn_step(void)
{
  uint8_T k;
  uint8_T TargetNum;
  real_T tmp[4];
  real_T tmp_0[64];
  boolean_T zcEvent;
  int32_T i;
  int32_T i_0;

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_1'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion = ESR_CoorAlig_Fcn_P.Track_ID_1_Value;
 
  /* Gain: '<S6>/N->E' */
  ESR_CoorAlig_Fcn_B.NE = ESR_CoorAlig_Fcn_P.NE_Gain *
    ESR_CoorAlig_Fcn_B.DataTypeConversion;

  /* DataTypeConversion: '<S134>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_1'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_p = (real_T)Get_Track_TRACK_RANGE_1();
   

  /* Gain: '<S134>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_l = ESR_CoorAlig_Fcn_P.NE_Gain_f *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S70>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_1'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_i = (real_T)Get_Track_TRACK_ANGLE_1();
 
  /* Gain: '<S70>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_f = ESR_CoorAlig_Fcn_P.NE_Gain_k *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_i;

  /* Gain: '<S70>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad = ESR_CoorAlig_Fcn_P.degrad_Gain *
    ESR_CoorAlig_Fcn_B.NE_f;

  /* DataTypeConversion: '<S198>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_1'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iy = (real_T)Get_Track_TRACK_STATUS_1();
   

  /* Gain: '<S198>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lu = ESR_CoorAlig_Fcn_P.NE_Gain_l *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iy;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivideInport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[0] = ESR_CoorAlig_Fcn_B.NE;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[1] =
    ESR_CoorAlig_Fcn_B.NE_l;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[2] =
    ESR_CoorAlig_Fcn_B.degrad;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[3] =
    ESR_CoorAlig_Fcn_B.NE_lu;

  /* Product: '<Root>/Divide' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivideInpo[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function' incorporates:
     *  Constant: '<Root>/Constant4'
     */
    ESR_CoorAlig_Fcn_B.MathFunction[i] = ESR_CoorAlig_Fcn_P.Constant4_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide' */

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_2'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_e = ESR_CoorAlig_Fcn_P.Track_ID_2_Value;

  /* Gain: '<S17>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b = ESR_CoorAlig_Fcn_P.NE_Gain_g *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S145>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_2'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_h = (real_T)Get_Track_TRACK_RANGE_2();

  /* Gain: '<S145>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bs = ESR_CoorAlig_Fcn_P.NE_Gain_c *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_h;

  /* DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_2'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_px = (real_T)Get_Track_TRACK_ANGLE_2();

  /* Gain: '<S81>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_c = ESR_CoorAlig_Fcn_P.NE_Gain_fk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_px;

  /* Gain: '<S81>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_k = ESR_CoorAlig_Fcn_P.degrad_Gain_p *
    ESR_CoorAlig_Fcn_B.NE_c;

  /* DataTypeConversion: '<S209>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_2'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_m = (real_T)Get_Track_TRACK_STATUS_2();

  /* Gain: '<S209>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_i = ESR_CoorAlig_Fcn_P.NE_Gain_b *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_m;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide1Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_b;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_bs;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_k;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_i;

  /* Product: '<Root>/Divide1' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide1Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function1' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    ESR_CoorAlig_Fcn_B.MathFunction1[i] = ESR_CoorAlig_Fcn_P.Constant1_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction1[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide1[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide1' */

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_3'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hq = ESR_CoorAlig_Fcn_P.Track_ID_3_Value;

  /* Gain: '<S28>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o = ESR_CoorAlig_Fcn_P.NE_Gain_p *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hq;

  /* DataTypeConversion: '<S156>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_3'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_n = (real_T)Get_Track_TRACK_RANGE_3();

  /* Gain: '<S156>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_h = ESR_CoorAlig_Fcn_P.NE_Gain_b5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_n;

  /* DataTypeConversion: '<S92>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_3'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_j = (real_T)Get_Track_TRACK_ANGLE_3();

  /* Gain: '<S92>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fb = ESR_CoorAlig_Fcn_P.NE_Gain_kv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_j;

  /* Gain: '<S92>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_g = ESR_CoorAlig_Fcn_P.degrad_Gain_g *
    ESR_CoorAlig_Fcn_B.NE_fb;

  /* DataTypeConversion: '<S220>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_3'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_d = (real_T)Get_Track_TRACK_STATUS_3();

  /* Gain: '<S220>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fa = ESR_CoorAlig_Fcn_P.NE_Gain_n *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_d;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide2Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_o;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_h;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_g;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_fa;

  /* Product: '<Root>/Divide2' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide2Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function2' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    ESR_CoorAlig_Fcn_B.MathFunction2[i] = ESR_CoorAlig_Fcn_P.Constant2_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction2[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide2[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide2' */

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_4'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_l = ESR_CoorAlig_Fcn_P.Track_ID_4_Value;

  /* Gain: '<S39>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_e = ESR_CoorAlig_Fcn_P.NE_Gain_ge *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S167>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_4'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_a = (real_T)Get_Track_TRACK_RANGE_4();

  /* Gain: '<S167>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_a = ESR_CoorAlig_Fcn_P.NE_Gain_bk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_a;

  /* DataTypeConversion: '<S103>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_4'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_e1 = (real_T)Get_Track_TRACK_ANGLE_4();

  /* Gain: '<S103>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_g = ESR_CoorAlig_Fcn_P.NE_Gain_bku *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_e1;

  /* Gain: '<S103>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_ka = ESR_CoorAlig_Fcn_P.degrad_Gain_l *
    ESR_CoorAlig_Fcn_B.NE_g;

  /* DataTypeConversion: '<S231>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_4'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lx = (real_T)Get_Track_TRACK_STATUS_4();

  /* Gain: '<S231>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_d = ESR_CoorAlig_Fcn_P.NE_Gain_o *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lx;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide3Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_e;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_a;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_ka;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_d;

  /* Product: '<Root>/Divide3' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide3Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function3' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    ESR_CoorAlig_Fcn_B.MathFunction3[i] = ESR_CoorAlig_Fcn_P.Constant3_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction3[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide3[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide3' */

  /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_5'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ay = ESR_CoorAlig_Fcn_P.Track_ID_5_Value;

  /* Gain: '<S50>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_n = ESR_CoorAlig_Fcn_P.NE_Gain_kk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ay;

  /* DataTypeConversion: '<S178>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_5'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_c = (real_T)Get_Track_TRACK_RANGE_5();

  /* Gain: '<S178>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_k = ESR_CoorAlig_Fcn_P.NE_Gain_cy *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_c;

  /* DataTypeConversion: '<S114>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_5'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jj = (real_T)Get_Track_TRACK_ANGLE_5();

  /* Gain: '<S114>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dv = ESR_CoorAlig_Fcn_P.NE_Gain_e *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jj;

  /* Gain: '<S114>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_p = ESR_CoorAlig_Fcn_P.degrad_Gain_h *
    ESR_CoorAlig_Fcn_B.NE_dv;

  /* DataTypeConversion: '<S242>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_5'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pe = (real_T)Get_Track_TRACK_STATUS_5();

  /* Gain: '<S242>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kx = ESR_CoorAlig_Fcn_P.NE_Gain_kj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pe;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide4Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_n;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_k;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_p;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_kx;

  /* Product: '<Root>/Divide4' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide4Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function4' incorporates:
     *  Constant: '<Root>/Constant5'
     */
    ESR_CoorAlig_Fcn_B.MathFunction4[i] = ESR_CoorAlig_Fcn_P.Constant5_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction4[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide4[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide4' */

  /* DataTypeConversion: '<S61>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_6'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_n5 = ESR_CoorAlig_Fcn_P.Track_ID_6_Value;

  /* Gain: '<S61>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lc = ESR_CoorAlig_Fcn_P.NE_Gain_h *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_n5;

  /* DataTypeConversion: '<S189>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_6'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hr = (real_T)Get_Track_TRACK_RANGE_6();

  /* Gain: '<S189>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_j = ESR_CoorAlig_Fcn_P.NE_Gain_oi *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hr;

  /* DataTypeConversion: '<S125>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_6'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_g = (real_T)Get_Track_TRACK_ANGLE_6();

  /* Gain: '<S125>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bd = ESR_CoorAlig_Fcn_P.NE_Gain_pp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_g;

  /* Gain: '<S125>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_l = ESR_CoorAlig_Fcn_P.degrad_Gain_i *
    ESR_CoorAlig_Fcn_B.NE_bd;

  /* DataTypeConversion: '<S253>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_6'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gj = (real_T)Get_Track_TRACK_STATUS_6();

  /* Gain: '<S253>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_iw = ESR_CoorAlig_Fcn_P.NE_Gain_m *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gj;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide5Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_lc;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_j;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_l;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_iw;

  /* Product: '<Root>/Divide5' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide5Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function5' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    ESR_CoorAlig_Fcn_B.MathFunction5[i] = ESR_CoorAlig_Fcn_P.Constant6_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction5[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide5[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide5' */

  /* DataTypeConversion: '<S67>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_7'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_k = ESR_CoorAlig_Fcn_P.Track_ID_7_Value;

  /* Gain: '<S67>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_p = ESR_CoorAlig_Fcn_P.NE_Gain_ow *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_k;

  /* DataTypeConversion: '<S195>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_7'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ee = (real_T)Get_Track_TRACK_RANGE_7();

  /* Gain: '<S195>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ld = ESR_CoorAlig_Fcn_P.NE_Gain_n2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ee;

  /* DataTypeConversion: '<S131>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_7'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ew = (real_T)Get_Track_TRACK_ANGLE_7();

  /* Gain: '<S131>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kl = ESR_CoorAlig_Fcn_P.NE_Gain_fm *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ew;

  /* Gain: '<S131>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lf = ESR_CoorAlig_Fcn_P.degrad_Gain_hn *
    ESR_CoorAlig_Fcn_B.NE_kl;

  /* DataTypeConversion: '<S259>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_7'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dy = (real_T)Get_Track_TRACK_STATUS_7();

  /* Gain: '<S259>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pm = ESR_CoorAlig_Fcn_P.NE_Gain_nj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dy;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide6Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_p;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_ld;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_lf;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_pm;

  /* Product: '<Root>/Divide6' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide6Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function6' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    ESR_CoorAlig_Fcn_B.MathFunction6[i] = ESR_CoorAlig_Fcn_P.Constant7_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction6[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide6[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide6' */

  /* DataTypeConversion: '<S68>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_8'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ad = ESR_CoorAlig_Fcn_P.Track_ID_8_Value;

  /* Gain: '<S68>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b4 = ESR_CoorAlig_Fcn_P.NE_Gain_gj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ad;

  /* DataTypeConversion: '<S196>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_8'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ak = (real_T)Get_Track_TRACK_RANGE_8();

  /* Gain: '<S196>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jh = ESR_CoorAlig_Fcn_P.NE_Gain_a *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ak;

  /* DataTypeConversion: '<S132>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_8'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gg = (real_T)Get_Track_TRACK_ANGLE_8();

  /* Gain: '<S132>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cg = ESR_CoorAlig_Fcn_P.NE_Gain_lp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gg;

  /* Gain: '<S132>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_o = ESR_CoorAlig_Fcn_P.degrad_Gain_k *
    ESR_CoorAlig_Fcn_B.NE_cg;

  /* DataTypeConversion: '<S260>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_8'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_l1 = (real_T)Get_Track_TRACK_STATUS_8();

  /* Gain: '<S260>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pn = ESR_CoorAlig_Fcn_P.NE_Gain_oh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_l1;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide7Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_b4;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_jh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_o;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_pn;

  /* Product: '<Root>/Divide7' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide7Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function7' incorporates:
     *  Constant: '<Root>/Constant8'
     */
    ESR_CoorAlig_Fcn_B.MathFunction7[i] = ESR_CoorAlig_Fcn_P.Constant8_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction7[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide7[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide7' */

  /* DataTypeConversion: '<S69>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_9'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gr = ESR_CoorAlig_Fcn_P.Track_ID_9_Value;

  /* Gain: '<S69>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_at = ESR_CoorAlig_Fcn_P.NE_Gain_le *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gr;

  /* DataTypeConversion: '<S197>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_9'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mx = (real_T)Get_Track_TRACK_RANGE_9();

  /* Gain: '<S197>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nk = ESR_CoorAlig_Fcn_P.NE_Gain_hx *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mx;

  /* DataTypeConversion: '<S133>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_9'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_k4 = (real_T)Get_Track_TRACK_ANGLE_9();

  /* Gain: '<S133>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kv = ESR_CoorAlig_Fcn_P.NE_Gain_j *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_k4;

  /* Gain: '<S133>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_e = ESR_CoorAlig_Fcn_P.degrad_Gain_a *
    ESR_CoorAlig_Fcn_B.NE_kv;

  /* DataTypeConversion: '<S261>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_9'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_n3 = (real_T)Get_Track_TRACK_STATUS_9();

  /* Gain: '<S261>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kt = ESR_CoorAlig_Fcn_P.NE_Gain_d *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_n3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide8Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_at;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_nk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_e;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_kt;

  /* Product: '<Root>/Divide8' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide8Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function8' incorporates:
     *  Constant: '<Root>/Constant9'
     */
    ESR_CoorAlig_Fcn_B.MathFunction8[i] = ESR_CoorAlig_Fcn_P.Constant9_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction8[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide8[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide8' */

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_10'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_l4 =
    ESR_CoorAlig_Fcn_P.Track_ID_10_Value;

  /* Gain: '<S7>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bo = ESR_CoorAlig_Fcn_P.NE_Gain_ki *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_l4;

  /* DataTypeConversion: '<S135>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_10'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_f = (real_T)Get_Track_TRACK_RANGE_10();

  /* Gain: '<S135>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_m = ESR_CoorAlig_Fcn_P.NE_Gain_jy *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_f;

  /* DataTypeConversion: '<S71>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_10'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ju = (real_T)Get_Track_TRACK_ANGLE_10();

  /* Gain: '<S71>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lz = ESR_CoorAlig_Fcn_P.NE_Gain_lc *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ju;

  /* Gain: '<S71>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_a = ESR_CoorAlig_Fcn_P.degrad_Gain_n *
    ESR_CoorAlig_Fcn_B.NE_lz;

  /* DataTypeConversion: '<S199>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_10'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_np = (real_T)Get_Track_TRACK_STATUS_10();

  /* Gain: '<S199>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_co = ESR_CoorAlig_Fcn_P.NE_Gain_bx *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_np;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide9Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[0] =
    ESR_CoorAlig_Fcn_B.NE_bo;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[1] =
    ESR_CoorAlig_Fcn_B.NE_m;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[2] =
    ESR_CoorAlig_Fcn_B.degrad_a;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[3] =
    ESR_CoorAlig_Fcn_B.NE_co;

  /* Product: '<Root>/Divide9' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide9Inp[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function9' incorporates:
     *  Constant: '<Root>/Constant10'
     */
    ESR_CoorAlig_Fcn_B.MathFunction9[i] = ESR_CoorAlig_Fcn_P.Constant10_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction9[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide9[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide9' */

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_11'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_b = ESR_CoorAlig_Fcn_P.Track_ID_11_Value;

  /* Gain: '<S8>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cl = ESR_CoorAlig_Fcn_P.NE_Gain_a1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S136>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_11'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_akv = (real_T)Get_Track_TRACK_RANGE_11();

  /* Gain: '<S136>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dz = ESR_CoorAlig_Fcn_P.NE_Gain_l5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_akv;

  /* DataTypeConversion: '<S72>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_11'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_c3 = (real_T)Get_Track_TRACK_ANGLE_11();

  /* Gain: '<S72>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gg = ESR_CoorAlig_Fcn_P.NE_Gain_c3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_c3;

  /* Gain: '<S72>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_f = ESR_CoorAlig_Fcn_P.degrad_Gain_io *
    ESR_CoorAlig_Fcn_B.NE_gg;

  /* DataTypeConversion: '<S200>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_11'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_a2 = (real_T)Get_Track_TRACK_STATUS_11();

  /* Gain: '<S200>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oa = ESR_CoorAlig_Fcn_P.NE_Gain_ff *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_a2;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide10Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[0] =
    ESR_CoorAlig_Fcn_B.NE_cl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[1] =
    ESR_CoorAlig_Fcn_B.NE_dz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[2] =
    ESR_CoorAlig_Fcn_B.degrad_f;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[3] =
    ESR_CoorAlig_Fcn_B.NE_oa;

  /* Product: '<Root>/Divide10' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide10In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function10' incorporates:
     *  Constant: '<Root>/Constant11'
     */
    ESR_CoorAlig_Fcn_B.MathFunction10[i] = ESR_CoorAlig_Fcn_P.Constant11_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction10[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide10[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide10' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_12'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_di =
    ESR_CoorAlig_Fcn_P.Track_ID_12_Value;

  /* Gain: '<S9>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_da = ESR_CoorAlig_Fcn_P.NE_Gain_cf *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_di;

  /* DataTypeConversion: '<S137>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_12'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_o = (real_T)Get_Track_TRACK_RANGE_12();

  /* Gain: '<S137>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b1 = ESR_CoorAlig_Fcn_P.NE_Gain_i *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_o;

  /* DataTypeConversion: '<S73>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_12'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_g1 = (real_T)Get_Track_TRACK_ANGLE_12();

  /* Gain: '<S73>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_e2 = ESR_CoorAlig_Fcn_P.NE_Gain_ol *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_g1;

  /* Gain: '<S73>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_d = ESR_CoorAlig_Fcn_P.degrad_Gain_ay *
    ESR_CoorAlig_Fcn_B.NE_e2;

  /* DataTypeConversion: '<S201>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_12'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gf = (real_T)Get_Track_TRACK_STATUS_12();

  /* Gain: '<S201>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ar = ESR_CoorAlig_Fcn_P.NE_Gain_kg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gf;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide11Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[0] =
    ESR_CoorAlig_Fcn_B.NE_da;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[1] =
    ESR_CoorAlig_Fcn_B.NE_b1;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[2] =
    ESR_CoorAlig_Fcn_B.degrad_d;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[3] =
    ESR_CoorAlig_Fcn_B.NE_ar;

  /* Product: '<Root>/Divide11' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide11In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function11' incorporates:
     *  Constant: '<Root>/Constant12'
     */
    ESR_CoorAlig_Fcn_B.MathFunction11[i] = ESR_CoorAlig_Fcn_P.Constant12_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction11[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide11[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide11' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_13'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lz =
    ESR_CoorAlig_Fcn_P.Track_ID_13_Value;

  /* Gain: '<S10>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_h1 = ESR_CoorAlig_Fcn_P.NE_Gain_i2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lz;

  /* DataTypeConversion: '<S138>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_13'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ek = (real_T)Get_Track_TRACK_RANGE_13();

  /* Gain: '<S138>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_d0 = ESR_CoorAlig_Fcn_P.NE_Gain_ig *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ek;

  /* DataTypeConversion: '<S74>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_13'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cp = (real_T)Get_Track_TRACK_ANGLE_13();

  /* Gain: '<S74>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pw = ESR_CoorAlig_Fcn_P.NE_Gain_h4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cp;

  /* Gain: '<S74>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_h = ESR_CoorAlig_Fcn_P.degrad_Gain_kf *
    ESR_CoorAlig_Fcn_B.NE_pw;

  /* DataTypeConversion: '<S202>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_13'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fe = (real_T)Get_Track_TRACK_STATUS_13();

  /* Gain: '<S202>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pk = ESR_CoorAlig_Fcn_P.NE_Gain_b2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fe;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide12Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[0] =
    ESR_CoorAlig_Fcn_B.NE_h1;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[1] =
    ESR_CoorAlig_Fcn_B.NE_d0;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[2] =
    ESR_CoorAlig_Fcn_B.degrad_h;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[3] =
    ESR_CoorAlig_Fcn_B.NE_pk;

  /* Product: '<Root>/Divide12' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide12In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function12' incorporates:
     *  Constant: '<Root>/Constant13'
     */
    ESR_CoorAlig_Fcn_B.MathFunction12[i] = ESR_CoorAlig_Fcn_P.Constant13_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction12[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide12[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide12' */

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_14'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_e4 =
    ESR_CoorAlig_Fcn_P.Track_ID_14_Value;

  /* Gain: '<S11>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pj = ESR_CoorAlig_Fcn_P.NE_Gain_ox *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_e4;

  /* DataTypeConversion: '<S139>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_14'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_oe = (real_T)Get_Track_TRACK_RANGE_14();

  /* Gain: '<S139>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ig = ESR_CoorAlig_Fcn_P.NE_Gain_or *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_oe;

  /* DataTypeConversion: '<S75>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_14'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bx = (real_T)Get_Track_TRACK_ANGLE_14();

  /* Gain: '<S75>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cm = ESR_CoorAlig_Fcn_P.NE_Gain_a4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bx;

  /* Gain: '<S75>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_al = ESR_CoorAlig_Fcn_P.degrad_Gain_gf *
    ESR_CoorAlig_Fcn_B.NE_cm;

  /* DataTypeConversion: '<S203>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_14'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lw = (real_T)Get_Track_TRACK_STATUS_14();

  /* Gain: '<S203>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b0 = ESR_CoorAlig_Fcn_P.NE_Gain_ps *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lw;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide13Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[0] =
    ESR_CoorAlig_Fcn_B.NE_pj;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[1] =
    ESR_CoorAlig_Fcn_B.NE_ig;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[2] =
    ESR_CoorAlig_Fcn_B.degrad_al;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[3] =
    ESR_CoorAlig_Fcn_B.NE_b0;

  /* Product: '<Root>/Divide13' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide13In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function13' incorporates:
     *  Constant: '<Root>/Constant14'
     */
    ESR_CoorAlig_Fcn_B.MathFunction13[i] = ESR_CoorAlig_Fcn_P.Constant14_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction13[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide13[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide13' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_15'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_p4 =
    ESR_CoorAlig_Fcn_P.Track_ID_15_Value;

  /* Gain: '<S12>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ks = ESR_CoorAlig_Fcn_P.NE_Gain_aa *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_p4;

  /* DataTypeConversion: '<S140>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_15'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_a3 = (real_T)Get_Track_TRACK_RANGE_15();

  /* Gain: '<S140>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_a3 = ESR_CoorAlig_Fcn_P.NE_Gain_ea *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_a3;

  /* DataTypeConversion: '<S76>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_15'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_al = (real_T)Get_Track_TRACK_ANGLE_15();

  /* Gain: '<S76>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_om = ESR_CoorAlig_Fcn_P.NE_Gain_oc *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_al;

  /* Gain: '<S76>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_oi = ESR_CoorAlig_Fcn_P.degrad_Gain_o *
    ESR_CoorAlig_Fcn_B.NE_om;

  /* DataTypeConversion: '<S204>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_15'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_aj = (real_T)Get_Track_TRACK_STATUS_15();

  /* Gain: '<S204>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ed = ESR_CoorAlig_Fcn_P.NE_Gain_el *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_aj;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide14Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[0] =
    ESR_CoorAlig_Fcn_B.NE_ks;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[1] =
    ESR_CoorAlig_Fcn_B.NE_a3;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[2] =
    ESR_CoorAlig_Fcn_B.degrad_oi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[3] =
    ESR_CoorAlig_Fcn_B.NE_ed;

  /* Product: '<Root>/Divide14' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide14In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function14' incorporates:
     *  Constant: '<Root>/Constant16'
     */
    ESR_CoorAlig_Fcn_B.MathFunction14[i] = ESR_CoorAlig_Fcn_P.Constant16_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction14[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide14[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide14' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_16'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_go =
    ESR_CoorAlig_Fcn_P.Track_ID_16_Value;

  /* Gain: '<S13>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mj = ESR_CoorAlig_Fcn_P.NE_Gain_fh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_go;

  /* DataTypeConversion: '<S141>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_16'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_c3m = (real_T)Get_Track_TRACK_RANGE_16();

  /* Gain: '<S141>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lub = ESR_CoorAlig_Fcn_P.NE_Gain_py *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_c3m;

  /* DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_16'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nh = (real_T)Get_Track_TRACK_ANGLE_16();

  /* Gain: '<S77>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hf = ESR_CoorAlig_Fcn_P.NE_Gain_gf *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nh;

  /* Gain: '<S77>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lg = ESR_CoorAlig_Fcn_P.degrad_Gain_hr *
    ESR_CoorAlig_Fcn_B.NE_hf;

  /* DataTypeConversion: '<S205>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_16'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_j0 = (real_T)Get_Track_TRACK_STATUS_16();

  /* Gain: '<S205>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lzn = ESR_CoorAlig_Fcn_P.NE_Gain_fv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_j0;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide15Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[0] =
    ESR_CoorAlig_Fcn_B.NE_mj;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[1] =
    ESR_CoorAlig_Fcn_B.NE_lub;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[2] =
    ESR_CoorAlig_Fcn_B.degrad_lg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[3] =
    ESR_CoorAlig_Fcn_B.NE_lzn;

  /* Product: '<Root>/Divide15' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide15In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function15' incorporates:
     *  Constant: '<Root>/Constant17'
     */
    ESR_CoorAlig_Fcn_B.MathFunction15[i] = ESR_CoorAlig_Fcn_P.Constant17_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction15[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide15[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide15' */

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_17'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_od =
    ESR_CoorAlig_Fcn_P.Track_ID_17_Value;

  /* Gain: '<S14>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lp = ESR_CoorAlig_Fcn_P.NE_Gain_ns *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_od;

  /* DataTypeConversion: '<S142>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_17'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bw = (real_T)Get_Track_TRACK_RANGE_17();

  /* Gain: '<S142>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_on = ESR_CoorAlig_Fcn_P.NE_Gain_fd *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bw;

  /* DataTypeConversion: '<S78>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_17'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_or = (real_T)Get_Track_TRACK_ANGLE_17();

  /* Gain: '<S78>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hu = ESR_CoorAlig_Fcn_P.NE_Gain_pm *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_or;

  /* Gain: '<S78>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_dh = ESR_CoorAlig_Fcn_P.degrad_Gain_ou *
    ESR_CoorAlig_Fcn_B.NE_hu;

  /* DataTypeConversion: '<S206>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_17'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_he = (real_T)Get_Track_TRACK_STATUS_17();

  /* Gain: '<S206>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nb = ESR_CoorAlig_Fcn_P.NE_Gain_b3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_he;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide16Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[0] =
    ESR_CoorAlig_Fcn_B.NE_lp;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[1] =
    ESR_CoorAlig_Fcn_B.NE_on;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[2] =
    ESR_CoorAlig_Fcn_B.degrad_dh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[3] =
    ESR_CoorAlig_Fcn_B.NE_nb;

  /* Product: '<Root>/Divide16' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide16In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function16' incorporates:
     *  Constant: '<Root>/Constant18'
     */
    ESR_CoorAlig_Fcn_B.MathFunction16[i] = ESR_CoorAlig_Fcn_P.Constant18_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction16[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide16[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide16' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_18'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_op =
    ESR_CoorAlig_Fcn_P.Track_ID_18_Value;

  /* Gain: '<S15>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bg = ESR_CoorAlig_Fcn_P.NE_Gain_dj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_op;

  /* DataTypeConversion: '<S143>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_18'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ae = (real_T)Get_Track_TRACK_RANGE_18();

  /* Gain: '<S143>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jk = ESR_CoorAlig_Fcn_P.NE_Gain_eg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ae;

  /* DataTypeConversion: '<S79>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_18'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_e5 = (real_T)Get_Track_TRACK_ANGLE_18();

  /* Gain: '<S79>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ae = ESR_CoorAlig_Fcn_P.NE_Gain_pv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_e5;

  /* Gain: '<S79>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_n = ESR_CoorAlig_Fcn_P.degrad_Gain_hg *
    ESR_CoorAlig_Fcn_B.NE_ae;

  /* DataTypeConversion: '<S207>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_18'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gq = (real_T)Get_Track_TRACK_STATUS_18();

  /* Gain: '<S207>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_e2v = ESR_CoorAlig_Fcn_P.NE_Gain_o5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gq;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide17Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[0] =
    ESR_CoorAlig_Fcn_B.NE_bg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[1] =
    ESR_CoorAlig_Fcn_B.NE_jk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[2] =
    ESR_CoorAlig_Fcn_B.degrad_n;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[3] =
    ESR_CoorAlig_Fcn_B.NE_e2v;

  /* Product: '<Root>/Divide17' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide17In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function17' incorporates:
     *  Constant: '<Root>/Constant19'
     */
    ESR_CoorAlig_Fcn_B.MathFunction17[i] = ESR_CoorAlig_Fcn_P.Constant19_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction17[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide17[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide17' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_19'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dim =
    ESR_CoorAlig_Fcn_P.Track_ID_19_Value;

  /* Gain: '<S16>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_n4 = ESR_CoorAlig_Fcn_P.NE_Gain_ez *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dim;

  /* DataTypeConversion: '<S144>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_19'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jr = (real_T)Get_Track_TRACK_RANGE_19();

  /* Gain: '<S144>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ko = ESR_CoorAlig_Fcn_P.NE_Gain_ee *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jr;

  /* DataTypeConversion: '<S80>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_19'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lc = (real_T)Get_Track_TRACK_ANGLE_19();

  /* Gain: '<S80>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o3 = ESR_CoorAlig_Fcn_P.NE_Gain_ih *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lc;

  /* Gain: '<S80>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_ot = ESR_CoorAlig_Fcn_P.degrad_Gain_d *
    ESR_CoorAlig_Fcn_B.NE_o3;

  /* DataTypeConversion: '<S208>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_19'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ld = (real_T)Get_Track_TRACK_STATUS_19();

  /* Gain: '<S208>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pc = ESR_CoorAlig_Fcn_P.NE_Gain_pm3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ld;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide18Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[0] =
    ESR_CoorAlig_Fcn_B.NE_n4;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[1] =
    ESR_CoorAlig_Fcn_B.NE_ko;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[2] =
    ESR_CoorAlig_Fcn_B.degrad_ot;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[3] =
    ESR_CoorAlig_Fcn_B.NE_pc;

  /* Product: '<Root>/Divide18' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide18In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function18' incorporates:
     *  Constant: '<Root>/Constant20'
     */
    ESR_CoorAlig_Fcn_B.MathFunction18[i] = ESR_CoorAlig_Fcn_P.Constant20_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction18[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide18[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide18' */

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_20'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pf =
    ESR_CoorAlig_Fcn_P.Track_ID_20_Value;

  /* Gain: '<S18>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ln = ESR_CoorAlig_Fcn_P.NE_Gain_fn *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pf;

  /* DataTypeConversion: '<S146>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_20'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cc = (real_T)Get_Track_TRACK_RANGE_20();

  /* Gain: '<S146>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hz = ESR_CoorAlig_Fcn_P.NE_Gain_jw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cc;

  /* DataTypeConversion: '<S82>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_20'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bf = (real_T)Get_Track_TRACK_ANGLE_20();

  /* Gain: '<S82>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_k5 = ESR_CoorAlig_Fcn_P.NE_Gain_fx *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bf;

  /* Gain: '<S82>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_a2 = ESR_CoorAlig_Fcn_P.degrad_Gain_nu *
    ESR_CoorAlig_Fcn_B.NE_k5;

  /* DataTypeConversion: '<S210>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_20'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kw = (real_T)Get_Track_TRACK_STATUS_20();

  /* Gain: '<S210>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ip = ESR_CoorAlig_Fcn_P.NE_Gain_h2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kw;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide19Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[0] =
    ESR_CoorAlig_Fcn_B.NE_ln;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[1] =
    ESR_CoorAlig_Fcn_B.NE_hz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[2] =
    ESR_CoorAlig_Fcn_B.degrad_a2;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[3] =
    ESR_CoorAlig_Fcn_B.NE_ip;

  /* Product: '<Root>/Divide19' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide19In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function19' incorporates:
     *  Constant: '<Root>/Constant21'
     */
    ESR_CoorAlig_Fcn_B.MathFunction19[i] = ESR_CoorAlig_Fcn_P.Constant21_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction19[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide19[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide19' */

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_21'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jrs =
    ESR_CoorAlig_Fcn_P.Track_ID_21_Value;

  /* Gain: '<S19>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ol = ESR_CoorAlig_Fcn_P.NE_Gain_ek *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jrs;

  /* DataTypeConversion: '<S147>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_21'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pv = (real_T)Get_Track_TRACK_RANGE_21();

  /* Gain: '<S147>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ad = ESR_CoorAlig_Fcn_P.NE_Gain_gjq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pv;

  /* DataTypeConversion: '<S83>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_21'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lwa = (real_T)Get_Track_TRACK_ANGLE_21();

  /* Gain: '<S83>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_com = ESR_CoorAlig_Fcn_P.NE_Gain_dk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lwa;

  /* Gain: '<S83>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_fg = ESR_CoorAlig_Fcn_P.degrad_Gain_dc *
    ESR_CoorAlig_Fcn_B.NE_com;

  /* DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_21'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_grk = (real_T)Get_Track_TRACK_STATUS_21();

  /* Gain: '<S211>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ex = ESR_CoorAlig_Fcn_P.NE_Gain_p5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_grk;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide20Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[0] =
    ESR_CoorAlig_Fcn_B.NE_ol;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[1] =
    ESR_CoorAlig_Fcn_B.NE_ad;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[2] =
    ESR_CoorAlig_Fcn_B.degrad_fg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[3] =
    ESR_CoorAlig_Fcn_B.NE_ex;

  /* Product: '<Root>/Divide20' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide20In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function20' incorporates:
     *  Constant: '<Root>/Constant22'
     */
    ESR_CoorAlig_Fcn_B.MathFunction20[i] = ESR_CoorAlig_Fcn_P.Constant22_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction20[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide20[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide20' */

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_22'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_f0 =
    ESR_CoorAlig_Fcn_P.Track_ID_22_Value;

  /* Gain: '<S20>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nz = ESR_CoorAlig_Fcn_P.NE_Gain_pl *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_f0;

  /* DataTypeConversion: '<S148>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_22'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mq = (real_T)Get_Track_TRACK_RANGE_22();

  /* Gain: '<S148>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pkd = ESR_CoorAlig_Fcn_P.NE_Gain_g2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mq;

  /* DataTypeConversion: '<S84>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_22'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lb = (real_T)Get_Track_TRACK_ANGLE_22();

  /* Gain: '<S84>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_are = ESR_CoorAlig_Fcn_P.NE_Gain_cn *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lb;

  /* Gain: '<S84>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_kb = ESR_CoorAlig_Fcn_P.degrad_Gain_c *
    ESR_CoorAlig_Fcn_B.NE_are;

  /* DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_22'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_le = (real_T)Get_Track_TRACK_STATUS_22();

  /* Gain: '<S212>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nkt = ESR_CoorAlig_Fcn_P.NE_Gain_kii *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_le;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide21Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[0] =
    ESR_CoorAlig_Fcn_B.NE_nz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[1] =
    ESR_CoorAlig_Fcn_B.NE_pkd;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[2] =
    ESR_CoorAlig_Fcn_B.degrad_kb;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[3] =
    ESR_CoorAlig_Fcn_B.NE_nkt;

  /* Product: '<Root>/Divide21' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide21In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function21' incorporates:
     *  Constant: '<Root>/Constant23'
     */
    ESR_CoorAlig_Fcn_B.MathFunction21[i] = ESR_CoorAlig_Fcn_P.Constant23_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction21[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide21[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide21' */

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_23'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bb =
    ESR_CoorAlig_Fcn_P.Track_ID_23_Value;

  /* Gain: '<S21>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mk = ESR_CoorAlig_Fcn_P.NE_Gain_hz *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bb;

  /* DataTypeConversion: '<S149>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_23'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gb = (real_T)Get_Track_TRACK_RANGE_23();

  /* Gain: '<S149>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_he = ESR_CoorAlig_Fcn_P.NE_Gain_o4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gb;

  /* DataTypeConversion: '<S85>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_23'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ds = (real_T)Get_Track_TRACK_ANGLE_23();

  /* Gain: '<S85>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_f4 = ESR_CoorAlig_Fcn_P.NE_Gain_jwh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ds;

  /* Gain: '<S85>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_kn = ESR_CoorAlig_Fcn_P.degrad_Gain_f *
    ESR_CoorAlig_Fcn_B.NE_f4;

  /* DataTypeConversion: '<S213>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_23'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jn = (real_T)Get_Track_TRACK_STATUS_23();

  /* Gain: '<S213>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ij = ESR_CoorAlig_Fcn_P.NE_Gain_by *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jn;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide22Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[0] =
    ESR_CoorAlig_Fcn_B.NE_mk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[1] =
    ESR_CoorAlig_Fcn_B.NE_he;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[2] =
    ESR_CoorAlig_Fcn_B.degrad_kn;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[3] =
    ESR_CoorAlig_Fcn_B.NE_ij;

  /* Product: '<Root>/Divide22' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide22In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function22' incorporates:
     *  Constant: '<Root>/Constant24'
     */
    ESR_CoorAlig_Fcn_B.MathFunction22[i] = ESR_CoorAlig_Fcn_P.Constant24_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction22[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide22[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide22' */

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_24'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cu =
    ESR_CoorAlig_Fcn_P.Track_ID_24_Value;

  /* Gain: '<S22>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oh = ESR_CoorAlig_Fcn_P.NE_Gain_id *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cu;

  /* DataTypeConversion: '<S150>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_24'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hl = (real_T)Get_Track_TRACK_RANGE_24();

  /* Gain: '<S150>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ge = ESR_CoorAlig_Fcn_P.NE_Gain_li *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hl;

  /* DataTypeConversion: '<S86>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_24'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ca = (real_T)Get_Track_TRACK_ANGLE_24();

  /* Gain: '<S86>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_je = ESR_CoorAlig_Fcn_P.NE_Gain_ep *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ca;

  /* Gain: '<S86>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_h3 = ESR_CoorAlig_Fcn_P.degrad_Gain_m *
    ESR_CoorAlig_Fcn_B.NE_je;

  /* DataTypeConversion: '<S214>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_24'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hc = (real_T)Get_Track_TRACK_STATUS_24();

  /* Gain: '<S214>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ny = ESR_CoorAlig_Fcn_P.NE_Gain_fg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hc;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide23Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[0] =
    ESR_CoorAlig_Fcn_B.NE_oh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[1] =
    ESR_CoorAlig_Fcn_B.NE_ge;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[2] =
    ESR_CoorAlig_Fcn_B.degrad_h3;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[3] =
    ESR_CoorAlig_Fcn_B.NE_ny;

  /* Product: '<Root>/Divide23' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide23In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function23' incorporates:
     *  Constant: '<Root>/Constant25'
     */
    ESR_CoorAlig_Fcn_B.MathFunction23[i] = ESR_CoorAlig_Fcn_P.Constant25_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction23[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide23[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide23' */

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_25'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cub =
    ESR_CoorAlig_Fcn_P.Track_ID_25_Value;

  /* Gain: '<S23>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kh = ESR_CoorAlig_Fcn_P.NE_Gain_f0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cub;

  /* DataTypeConversion: '<S151>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_25'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kt = (real_T)Get_Track_TRACK_RANGE_25();

  /* Gain: '<S151>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b1h = ESR_CoorAlig_Fcn_P.NE_Gain_pn *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kt;

  /* DataTypeConversion: '<S87>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_25'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nn = (real_T)Get_Track_TRACK_ANGLE_25();

  /* Gain: '<S87>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kc = ESR_CoorAlig_Fcn_P.NE_Gain_oj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nn;

  /* Gain: '<S87>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_kj = ESR_CoorAlig_Fcn_P.degrad_Gain_mg *
    ESR_CoorAlig_Fcn_B.NE_kc;

  /* DataTypeConversion: '<S215>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_25'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_m0 = (real_T)Get_Track_TRACK_STATUS_25();

  /* Gain: '<S215>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pi = ESR_CoorAlig_Fcn_P.NE_Gain_mt *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_m0;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide24Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[0] =
    ESR_CoorAlig_Fcn_B.NE_kh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[1] =
    ESR_CoorAlig_Fcn_B.NE_b1h;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[2] =
    ESR_CoorAlig_Fcn_B.degrad_kj;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[3] =
    ESR_CoorAlig_Fcn_B.NE_pi;

  /* Product: '<Root>/Divide24' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide24In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function24' incorporates:
     *  Constant: '<Root>/Constant26'
     */
    ESR_CoorAlig_Fcn_B.MathFunction24[i] = ESR_CoorAlig_Fcn_P.Constant26_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction24[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide24[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide24' */

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_26'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_npp =
    ESR_CoorAlig_Fcn_P.Track_ID_26_Value;

  /* Gain: '<S24>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mn = ESR_CoorAlig_Fcn_P.NE_Gain_epv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_npp;

  /* DataTypeConversion: '<S152>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_26'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bx0 = (real_T)Get_Track_TRACK_RANGE_26();

  /* Gain: '<S152>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ap = ESR_CoorAlig_Fcn_P.NE_Gain_lu *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bx0;

  /* DataTypeConversion: '<S88>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_26'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_la = (real_T)Get_Track_TRACK_ANGLE_26();

  /* Gain: '<S88>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lm = ESR_CoorAlig_Fcn_P.NE_Gain_mk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_la;

  /* Gain: '<S88>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_on = ESR_CoorAlig_Fcn_P.degrad_Gain_a5 *
    ESR_CoorAlig_Fcn_B.NE_lm;

  /* DataTypeConversion: '<S216>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_26'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_po = (real_T)Get_Track_TRACK_STATUS_26();

  /* Gain: '<S216>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_eo = ESR_CoorAlig_Fcn_P.NE_Gain_al *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_po;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide25Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[0] =
    ESR_CoorAlig_Fcn_B.NE_mn;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[1] =
    ESR_CoorAlig_Fcn_B.NE_ap;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[2] =
    ESR_CoorAlig_Fcn_B.degrad_on;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[3] =
    ESR_CoorAlig_Fcn_B.NE_eo;

  /* Product: '<Root>/Divide25' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide25In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function25' incorporates:
     *  Constant: '<Root>/Constant27'
     */
    ESR_CoorAlig_Fcn_B.MathFunction25[i] = ESR_CoorAlig_Fcn_P.Constant27_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction25[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide25[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide25' */

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_27'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_b2 =
    ESR_CoorAlig_Fcn_P.Track_ID_27_Value;

  /* Gain: '<S25>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dao = ESR_CoorAlig_Fcn_P.NE_Gain_eb *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_b2;

  /* DataTypeConversion: '<S153>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_27'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_er = (real_T)Get_Track_TRACK_RANGE_27();

  /* Gain: '<S153>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ldz = ESR_CoorAlig_Fcn_P.NE_Gain_alq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_er;

  /* DataTypeConversion: '<S89>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_27'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gd = (real_T)Get_Track_TRACK_ANGLE_27();

  /* Gain: '<S89>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kf = ESR_CoorAlig_Fcn_P.NE_Gain_b2m *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gd;

  /* Gain: '<S89>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_nb = ESR_CoorAlig_Fcn_P.degrad_Gain_j *
    ESR_CoorAlig_Fcn_B.NE_kf;

  /* DataTypeConversion: '<S217>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_27'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cw = (real_T)Get_Track_TRACK_STATUS_27();

  /* Gain: '<S217>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oo = ESR_CoorAlig_Fcn_P.NE_Gain_oxs *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cw;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide26Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[0] =
    ESR_CoorAlig_Fcn_B.NE_dao;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[1] =
    ESR_CoorAlig_Fcn_B.NE_ldz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[2] =
    ESR_CoorAlig_Fcn_B.degrad_nb;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[3] =
    ESR_CoorAlig_Fcn_B.NE_oo;

  /* Product: '<Root>/Divide26' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide26In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function26' incorporates:
     *  Constant: '<Root>/Constant28'
     */
    ESR_CoorAlig_Fcn_B.MathFunction26[i] = ESR_CoorAlig_Fcn_P.Constant28_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction26[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide26[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide26' */

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_28'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_g3 =
    ESR_CoorAlig_Fcn_P.Track_ID_28_Value;

  /* Gain: '<S26>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_aq = ESR_CoorAlig_Fcn_P.NE_Gain_ec *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_g3;

  /* DataTypeConversion: '<S154>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_28'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kf = (real_T)Get_Track_TRACK_RANGE_28();

  /* Gain: '<S154>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fbg = ESR_CoorAlig_Fcn_P.NE_Gain_lm *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kf;

  /* DataTypeConversion: '<S90>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_28'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bp = (real_T)Get_Track_TRACK_ANGLE_28();

  /* Gain: '<S90>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_omg = ESR_CoorAlig_Fcn_P.NE_Gain_oic *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bp;

  /* Gain: '<S90>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_f3 = ESR_CoorAlig_Fcn_P.degrad_Gain_dt *
    ESR_CoorAlig_Fcn_B.NE_omg;

  /* DataTypeConversion: '<S218>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_28'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lr = (real_T)Get_Track_TRACK_STATUS_28();

  /* Gain: '<S218>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_g5 = ESR_CoorAlig_Fcn_P.NE_Gain_jj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lr;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide27Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[0] =
    ESR_CoorAlig_Fcn_B.NE_aq;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[1] =
    ESR_CoorAlig_Fcn_B.NE_fbg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[2] =
    ESR_CoorAlig_Fcn_B.degrad_f3;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[3] =
    ESR_CoorAlig_Fcn_B.NE_g5;

  /* Product: '<Root>/Divide27' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide27In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function27' incorporates:
     *  Constant: '<Root>/Constant29'
     */
    ESR_CoorAlig_Fcn_B.MathFunction27[i] = ESR_CoorAlig_Fcn_P.Constant29_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction27[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide27[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide27' */

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_29'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gt =
    ESR_CoorAlig_Fcn_P.Track_ID_29_Value;

  /* Gain: '<S27>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ps = ESR_CoorAlig_Fcn_P.NE_Gain_br *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gt;

  /* DataTypeConversion: '<S155>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_29'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mb = (real_T)Get_Track_TRACK_RANGE_29();

  /* Gain: '<S155>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_il = ESR_CoorAlig_Fcn_P.NE_Gain_kr *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mb;

  /* DataTypeConversion: '<S91>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_29'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iw = (real_T)Get_Track_TRACK_ANGLE_29();

  /* Gain: '<S91>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jg = ESR_CoorAlig_Fcn_P.NE_Gain_de *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iw;

  /* Gain: '<S91>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_j = ESR_CoorAlig_Fcn_P.degrad_Gain_ko *
    ESR_CoorAlig_Fcn_B.NE_jg;

  /* DataTypeConversion: '<S219>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_29'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_om = (real_T)Get_Track_TRACK_STATUS_29();

  /* Gain: '<S219>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fy = ESR_CoorAlig_Fcn_P.NE_Gain_kz *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_om;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide28Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[0] =
    ESR_CoorAlig_Fcn_B.NE_ps;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[1] =
    ESR_CoorAlig_Fcn_B.NE_il;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[2] =
    ESR_CoorAlig_Fcn_B.degrad_j;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[3] =
    ESR_CoorAlig_Fcn_B.NE_fy;

  /* Product: '<Root>/Divide28' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide28In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function28' incorporates:
     *  Constant: '<Root>/Constant30'
     */
    ESR_CoorAlig_Fcn_B.MathFunction28[i] = ESR_CoorAlig_Fcn_P.Constant30_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction28[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide28[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide28' */

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_30'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_py =
    ESR_CoorAlig_Fcn_P.Track_ID_30_Value;

  /* Gain: '<S29>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_af = ESR_CoorAlig_Fcn_P.NE_Gain_cu *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_py;

  /* DataTypeConversion: '<S157>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_30'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dk = (real_T)Get_Track_TRACK_RANGE_30();

  /* Gain: '<S157>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_en = ESR_CoorAlig_Fcn_P.NE_Gain_eu *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dk;

  /* DataTypeConversion: '<S93>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_30'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nj = (real_T)Get_Track_TRACK_ANGLE_30();

  /* Gain: '<S93>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ba = ESR_CoorAlig_Fcn_P.NE_Gain_ld *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nj;

  /* Gain: '<S93>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_fd = ESR_CoorAlig_Fcn_P.degrad_Gain_pv *
    ESR_CoorAlig_Fcn_B.NE_ba;

  /* DataTypeConversion: '<S221>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_30'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_b1 = (real_T)Get_Track_TRACK_STATUS_30();

  /* Gain: '<S221>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gm = ESR_CoorAlig_Fcn_P.NE_Gain_hi *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_b1;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide29Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[0] =
    ESR_CoorAlig_Fcn_B.NE_af;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[1] =
    ESR_CoorAlig_Fcn_B.NE_en;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[2] =
    ESR_CoorAlig_Fcn_B.degrad_fd;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[3] =
    ESR_CoorAlig_Fcn_B.NE_gm;

  /* Product: '<Root>/Divide29' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide29In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function29' incorporates:
     *  Constant: '<Root>/Constant31'
     */
    ESR_CoorAlig_Fcn_B.MathFunction29[i] = ESR_CoorAlig_Fcn_P.Constant31_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction29[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide29[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide29' */

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_31'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lm =
    ESR_CoorAlig_Fcn_P.Track_ID_31_Value;

  /* Gain: '<S30>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_d2 = ESR_CoorAlig_Fcn_P.NE_Gain_gm *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lm;

  /* DataTypeConversion: '<S158>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_31'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ie = (real_T)Get_Track_TRACK_RANGE_31();

  /* Gain: '<S158>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jz = ESR_CoorAlig_Fcn_P.NE_Gain_d4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ie;

  /* DataTypeConversion: '<S94>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_31'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_me = (real_T)Get_Track_TRACK_ANGLE_31();

  /* Gain: '<S94>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_az = ESR_CoorAlig_Fcn_P.NE_Gain_fo *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_me;

  /* Gain: '<S94>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_eq = ESR_CoorAlig_Fcn_P.degrad_Gain_ca *
    ESR_CoorAlig_Fcn_B.NE_az;

  /* DataTypeConversion: '<S222>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_31'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pg = (real_T)Get_Track_TRACK_STATUS_31();

  /* Gain: '<S222>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gj = ESR_CoorAlig_Fcn_P.NE_Gain_ok *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pg;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide30Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[0] =
    ESR_CoorAlig_Fcn_B.NE_d2;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[1] =
    ESR_CoorAlig_Fcn_B.NE_jz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[2] =
    ESR_CoorAlig_Fcn_B.degrad_eq;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[3] =
    ESR_CoorAlig_Fcn_B.NE_gj;

  /* Product: '<Root>/Divide30' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide30In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function30' incorporates:
     *  Constant: '<Root>/Constant32'
     */
    ESR_CoorAlig_Fcn_B.MathFunction30[i] = ESR_CoorAlig_Fcn_P.Constant32_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction30[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide30[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide30' */

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_32'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ed =
    ESR_CoorAlig_Fcn_P.Track_ID_32_Value;

  /* Gain: '<S31>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fl = ESR_CoorAlig_Fcn_P.NE_Gain_l1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ed;

  /* DataTypeConversion: '<S159>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_32'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dkn = (real_T)Get_Track_TRACK_RANGE_32();

  /* Gain: '<S159>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ijr = ESR_CoorAlig_Fcn_P.NE_Gain_jjw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dkn;

  /* DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_32'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bq = (real_T)Get_Track_TRACK_ANGLE_32();

  /* Gain: '<S95>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_d3 = ESR_CoorAlig_Fcn_P.NE_Gain_nv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bq;

  /* Gain: '<S95>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_nd = ESR_CoorAlig_Fcn_P.degrad_Gain_im *
    ESR_CoorAlig_Fcn_B.NE_d3;

  /* DataTypeConversion: '<S223>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_32'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jh = (real_T)Get_Track_TRACK_STATUS_32();

  /* Gain: '<S223>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_es = ESR_CoorAlig_Fcn_P.NE_Gain_ds *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jh;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide31Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[0] =
    ESR_CoorAlig_Fcn_B.NE_fl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[1] =
    ESR_CoorAlig_Fcn_B.NE_ijr;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[2] =
    ESR_CoorAlig_Fcn_B.degrad_nd;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[3] =
    ESR_CoorAlig_Fcn_B.NE_es;

  /* Product: '<Root>/Divide31' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide31In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function31' incorporates:
     *  Constant: '<Root>/Constant33'
     */
    ESR_CoorAlig_Fcn_B.MathFunction31[i] = ESR_CoorAlig_Fcn_P.Constant33_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction31[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide31[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide31' */

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_33'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bi =
    ESR_CoorAlig_Fcn_P.Track_ID_33_Value;

  /* Gain: '<S32>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dn = ESR_CoorAlig_Fcn_P.NE_Gain_jq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bi;

  /* DataTypeConversion: '<S160>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_33'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_c5 = (real_T)Get_Track_TRACK_RANGE_33();

  /* Gain: '<S160>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jo = ESR_CoorAlig_Fcn_P.NE_Gain_dq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_c5;

  /* DataTypeConversion: '<S96>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_33'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bk = (real_T)Get_Track_TRACK_ANGLE_33();

  /* Gain: '<S96>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gg2 = ESR_CoorAlig_Fcn_P.NE_Gain_p1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bk;

  /* Gain: '<S96>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_m = ESR_CoorAlig_Fcn_P.degrad_Gain_hj *
    ESR_CoorAlig_Fcn_B.NE_gg2;

  /* DataTypeConversion: '<S224>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_33'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_d3 = (real_T)Get_Track_TRACK_STATUS_33();

  /* Gain: '<S224>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oj = ESR_CoorAlig_Fcn_P.NE_Gain_ma *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_d3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide32Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[0] =
    ESR_CoorAlig_Fcn_B.NE_dn;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[1] =
    ESR_CoorAlig_Fcn_B.NE_jo;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[2] =
    ESR_CoorAlig_Fcn_B.degrad_m;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[3] =
    ESR_CoorAlig_Fcn_B.NE_oj;

  /* Product: '<Root>/Divide32' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide32In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function32' incorporates:
     *  Constant: '<Root>/Constant34'
     */
    ESR_CoorAlig_Fcn_B.MathFunction32[i] = ESR_CoorAlig_Fcn_P.Constant34_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction32[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide32[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide32' */

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_34'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gu =
    ESR_CoorAlig_Fcn_P.Track_ID_34_Value;

  /* Gain: '<S33>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dzl = ESR_CoorAlig_Fcn_P.NE_Gain_kz2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gu;

  /* DataTypeConversion: '<S161>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_34'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mv = (real_T)Get_Track_TRACK_RANGE_34();

  /* Gain: '<S161>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cx = ESR_CoorAlig_Fcn_P.NE_Gain_ny *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mv;

  /* DataTypeConversion: '<S97>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_34'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nz = (real_T)Get_Track_TRACK_ANGLE_34();

  /* Gain: '<S97>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_a1 = ESR_CoorAlig_Fcn_P.NE_Gain_av *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nz;

  /* Gain: '<S97>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lw = ESR_CoorAlig_Fcn_P.degrad_Gain_fy *
    ESR_CoorAlig_Fcn_B.NE_a1;

  /* DataTypeConversion: '<S225>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_34'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fi = (real_T)Get_Track_TRACK_STATUS_34();

  /* Gain: '<S225>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ade = ESR_CoorAlig_Fcn_P.NE_Gain_kz5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fi;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide33Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[0] =
    ESR_CoorAlig_Fcn_B.NE_dzl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[1] =
    ESR_CoorAlig_Fcn_B.NE_cx;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[2] =
    ESR_CoorAlig_Fcn_B.degrad_lw;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[3] =
    ESR_CoorAlig_Fcn_B.NE_ade;

  /* Product: '<Root>/Divide33' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide33In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function33' incorporates:
     *  Constant: '<Root>/Constant35'
     */
    ESR_CoorAlig_Fcn_B.MathFunction33[i] = ESR_CoorAlig_Fcn_P.Constant35_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction33[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide33[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide33' */

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_35'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ls =
    ESR_CoorAlig_Fcn_P.Track_ID_35_Value;

  /* Gain: '<S34>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mi = ESR_CoorAlig_Fcn_P.NE_Gain_g0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ls;

  /* DataTypeConversion: '<S162>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_35'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_no = (real_T)Get_Track_TRACK_RANGE_35();

  /* Gain: '<S162>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o5 = ESR_CoorAlig_Fcn_P.NE_Gain_mp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_no;

  /* DataTypeConversion: '<S98>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_35'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pel = (real_T)Get_Track_TRACK_ANGLE_35();

  /* Gain: '<S98>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oy = ESR_CoorAlig_Fcn_P.NE_Gain_be *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pel;

  /* Gain: '<S98>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_jo = ESR_CoorAlig_Fcn_P.degrad_Gain_hrs *
    ESR_CoorAlig_Fcn_B.NE_oy;

  /* DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_35'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fk = (real_T)Get_Track_TRACK_STATUS_35();

  /* Gain: '<S226>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pb = ESR_CoorAlig_Fcn_P.NE_Gain_he *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fk;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide34Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[0] =
    ESR_CoorAlig_Fcn_B.NE_mi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[1] =
    ESR_CoorAlig_Fcn_B.NE_o5;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[2] =
    ESR_CoorAlig_Fcn_B.degrad_jo;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[3] =
    ESR_CoorAlig_Fcn_B.NE_pb;

  /* Product: '<Root>/Divide34' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide34In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function34' incorporates:
     *  Constant: '<Root>/Constant36'
     */
    ESR_CoorAlig_Fcn_B.MathFunction34[i] = ESR_CoorAlig_Fcn_P.Constant36_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction34[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide34[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide34' */

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_36'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_df =
    ESR_CoorAlig_Fcn_P.Track_ID_36_Value;

  /* Gain: '<S35>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fv = ESR_CoorAlig_Fcn_P.NE_Gain_ls *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_df;

  /* DataTypeConversion: '<S163>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_36'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pu = (real_T)Get_Track_TRACK_RANGE_36();

  /* Gain: '<S163>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ot = ESR_CoorAlig_Fcn_P.NE_Gain_hes *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pu;

  /* DataTypeConversion: '<S99>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_36'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dc = (real_T)Get_Track_TRACK_ANGLE_36();

  /* Gain: '<S99>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cgx = ESR_CoorAlig_Fcn_P.NE_Gain_ba *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dc;

  /* Gain: '<S99>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_ag = ESR_CoorAlig_Fcn_P.degrad_Gain_hi *
    ESR_CoorAlig_Fcn_B.NE_cgx;

  /* DataTypeConversion: '<S227>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_36'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jo = (real_T)Get_Track_TRACK_STATUS_36();

  /* Gain: '<S227>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_m3 = ESR_CoorAlig_Fcn_P.NE_Gain_k5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jo;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide35Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[0] =
    ESR_CoorAlig_Fcn_B.NE_fv;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[1] =
    ESR_CoorAlig_Fcn_B.NE_ot;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[2] =
    ESR_CoorAlig_Fcn_B.degrad_ag;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[3] =
    ESR_CoorAlig_Fcn_B.NE_m3;

  /* Product: '<Root>/Divide35' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide35In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function35' incorporates:
     *  Constant: '<Root>/Constant37'
     */
    ESR_CoorAlig_Fcn_B.MathFunction35[i] = ESR_CoorAlig_Fcn_P.Constant37_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction35[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide35[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide35' */

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_37'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_m0i =
    ESR_CoorAlig_Fcn_P.Track_ID_37_Value;

  /* Gain: '<S36>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bx = ESR_CoorAlig_Fcn_P.NE_Gain_h2z *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_m0i;

  /* DataTypeConversion: '<S164>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_37'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pk = (real_T)Get_Track_TRACK_RANGE_37();

  /* Gain: '<S164>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_iu = ESR_CoorAlig_Fcn_P.NE_Gain_ps3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pk;

  /* DataTypeConversion: '<S100>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_37'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lra = (real_T)Get_Track_TRACK_ANGLE_37();

  /* Gain: '<S100>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jt = ESR_CoorAlig_Fcn_P.NE_Gain_jd *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lra;

  /* Gain: '<S100>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_fe = ESR_CoorAlig_Fcn_P.degrad_Gain_ng *
    ESR_CoorAlig_Fcn_B.NE_jt;

  /* DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_37'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_i1 = (real_T)Get_Track_TRACK_STATUS_37();

  /* Gain: '<S228>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_i1 = ESR_CoorAlig_Fcn_P.NE_Gain_dy *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_i1;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide36Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[0] =
    ESR_CoorAlig_Fcn_B.NE_bx;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[1] =
    ESR_CoorAlig_Fcn_B.NE_iu;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[2] =
    ESR_CoorAlig_Fcn_B.degrad_fe;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[3] =
    ESR_CoorAlig_Fcn_B.NE_i1;

  /* Product: '<Root>/Divide36' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide36In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function36' incorporates:
     *  Constant: '<Root>/Constant38'
     */
    ESR_CoorAlig_Fcn_B.MathFunction36[i] = ESR_CoorAlig_Fcn_P.Constant38_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction36[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide36[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide36' */

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_38'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kq =
    ESR_CoorAlig_Fcn_P.Track_ID_38_Value;

  /* Gain: '<S37>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gc = ESR_CoorAlig_Fcn_P.NE_Gain_pk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kq;

  /* DataTypeConversion: '<S165>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_38'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iu = (real_T)Get_Track_TRACK_RANGE_38();

  /* Gain: '<S165>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_g2 = ESR_CoorAlig_Fcn_P.NE_Gain_owd *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iu;

  /* DataTypeConversion: '<S101>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_38'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pi = (real_T)Get_Track_TRACK_ANGLE_38();

  /* Gain: '<S101>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kss = ESR_CoorAlig_Fcn_P.NE_Gain_bg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pi;

  /* Gain: '<S101>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_k0 = ESR_CoorAlig_Fcn_P.degrad_Gain_fp *
    ESR_CoorAlig_Fcn_B.NE_kss;

  /* DataTypeConversion: '<S229>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_38'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fp = (real_T)Get_Track_TRACK_STATUS_38();

  /* Gain: '<S229>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_p1 = ESR_CoorAlig_Fcn_P.NE_Gain_cfw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fp;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide37Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[0] =
    ESR_CoorAlig_Fcn_B.NE_gc;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[1] =
    ESR_CoorAlig_Fcn_B.NE_g2;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[2] =
    ESR_CoorAlig_Fcn_B.degrad_k0;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[3] =
    ESR_CoorAlig_Fcn_B.NE_p1;

  /* Product: '<Root>/Divide37' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide37In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function37' incorporates:
     *  Constant: '<Root>/Constant39'
     */
    ESR_CoorAlig_Fcn_B.MathFunction37[i] = ESR_CoorAlig_Fcn_P.Constant39_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction37[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide37[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide37' */

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_39'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_noo =
    ESR_CoorAlig_Fcn_P.Track_ID_39_Value;

  /* Gain: '<S38>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_p2 = ESR_CoorAlig_Fcn_P.NE_Gain_po *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_noo;

  /* DataTypeConversion: '<S166>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_39'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ja = (real_T)Get_Track_TRACK_RANGE_39();

  /* Gain: '<S166>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fh = ESR_CoorAlig_Fcn_P.NE_Gain_ne *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ja;

  /* DataTypeConversion: '<S102>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_39'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jz = (real_T)Get_Track_TRACK_ANGLE_39();

  /* Gain: '<S102>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gs = ESR_CoorAlig_Fcn_P.NE_Gain_nr *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jz;

  /* Gain: '<S102>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_dr = ESR_CoorAlig_Fcn_P.degrad_Gain_o0 *
    ESR_CoorAlig_Fcn_B.NE_gs;

  /* DataTypeConversion: '<S230>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_39'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iui = (real_T)Get_Track_TRACK_STATUS_39();

  /* Gain: '<S230>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hv = ESR_CoorAlig_Fcn_P.NE_Gain_liy *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iui;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide38Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[0] =
    ESR_CoorAlig_Fcn_B.NE_p2;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[1] =
    ESR_CoorAlig_Fcn_B.NE_fh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[2] =
    ESR_CoorAlig_Fcn_B.degrad_dr;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[3] =
    ESR_CoorAlig_Fcn_B.NE_hv;

  /* Product: '<Root>/Divide38' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide38In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function38' incorporates:
     *  Constant: '<Root>/Constant40'
     */
    ESR_CoorAlig_Fcn_B.MathFunction38[i] = ESR_CoorAlig_Fcn_P.Constant40_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction38[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide38[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide38' */

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_40'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kd =
    ESR_CoorAlig_Fcn_P.Track_ID_40_Value;

  /* Gain: '<S40>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nyv = ESR_CoorAlig_Fcn_P.NE_Gain_hze *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kd;

  /* DataTypeConversion: '<S168>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_40'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cpp = (real_T)Get_Track_TRACK_RANGE_40();

  /* Gain: '<S168>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_i1s = ESR_CoorAlig_Fcn_P.NE_Gain_b2o *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cpp;

  /* DataTypeConversion: '<S104>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_40'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_oz = (real_T)Get_Track_TRACK_ANGLE_40();

  /* Gain: '<S104>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hvu = ESR_CoorAlig_Fcn_P.NE_Gain_dv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_oz;

  /* Gain: '<S104>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lr = ESR_CoorAlig_Fcn_P.degrad_Gain_ly *
    ESR_CoorAlig_Fcn_B.NE_hvu;

  /* DataTypeConversion: '<S232>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_40'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_b1g = (real_T)Get_Track_TRACK_STATUS_40();

  /* Gain: '<S232>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ev = ESR_CoorAlig_Fcn_P.NE_Gain_aak *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_b1g;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide39Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[0] =
    ESR_CoorAlig_Fcn_B.NE_nyv;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[1] =
    ESR_CoorAlig_Fcn_B.NE_i1s;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[2] =
    ESR_CoorAlig_Fcn_B.degrad_lr;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[3] =
    ESR_CoorAlig_Fcn_B.NE_ev;

  /* Product: '<Root>/Divide39' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide39In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function39' incorporates:
     *  Constant: '<Root>/Constant41'
     */
    ESR_CoorAlig_Fcn_B.MathFunction39[i] = ESR_CoorAlig_Fcn_P.Constant41_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction39[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide39[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide39' */

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_41'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ll =
    ESR_CoorAlig_Fcn_P.Track_ID_41_Value;

  /* Gain: '<S41>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fq = ESR_CoorAlig_Fcn_P.NE_Gain_o3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ll;

  /* DataTypeConversion: '<S169>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_41'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pug = (real_T)Get_Track_TRACK_RANGE_41();

  /* Gain: '<S169>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o3b = ESR_CoorAlig_Fcn_P.NE_Gain_fgg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pug;

  /* DataTypeConversion: '<S105>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_41'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jf = (real_T)Get_Track_TRACK_ANGLE_41();

  /* Gain: '<S105>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hfl = ESR_CoorAlig_Fcn_P.NE_Gain_bh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jf;

  /* Gain: '<S105>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_l1 = ESR_CoorAlig_Fcn_P.degrad_Gain_fh *
    ESR_CoorAlig_Fcn_B.NE_hfl;

  /* DataTypeConversion: '<S233>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_41'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pyy = (real_T)Get_Track_TRACK_STATUS_41();

  /* Gain: '<S233>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o1 = ESR_CoorAlig_Fcn_P.NE_Gain_il *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pyy;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide40Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[0] =
    ESR_CoorAlig_Fcn_B.NE_fq;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[1] =
    ESR_CoorAlig_Fcn_B.NE_o3b;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[2] =
    ESR_CoorAlig_Fcn_B.degrad_l1;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[3] =
    ESR_CoorAlig_Fcn_B.NE_o1;

  /* Product: '<Root>/Divide40' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide40In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function40' incorporates:
     *  Constant: '<Root>/Constant42'
     */
    ESR_CoorAlig_Fcn_B.MathFunction40[i] = ESR_CoorAlig_Fcn_P.Constant42_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction40[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide40[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide40' */

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_42'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ng =
    ESR_CoorAlig_Fcn_P.Track_ID_42_Value;

  /* Gain: '<S42>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kw = ESR_CoorAlig_Fcn_P.NE_Gain_o2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ng;

  /* DataTypeConversion: '<S170>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_42'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_g14 = (real_T)Get_Track_TRACK_RANGE_42();

  /* Gain: '<S170>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gi = ESR_CoorAlig_Fcn_P.NE_Gain_h3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_g14;

  /* DataTypeConversion: '<S106>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_42'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lv = (real_T)Get_Track_TRACK_ANGLE_42();

  /* Gain: '<S106>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_a5 = ESR_CoorAlig_Fcn_P.NE_Gain_bv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lv;

  /* Gain: '<S106>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_pz = ESR_CoorAlig_Fcn_P.degrad_Gain_mr *
    ESR_CoorAlig_Fcn_B.NE_a5;

  /* DataTypeConversion: '<S234>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_42'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_p3 = (real_T)Get_Track_TRACK_STATUS_42();

  /* Gain: '<S234>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mg = ESR_CoorAlig_Fcn_P.NE_Gain_nl *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_p3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide41Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[0] =
    ESR_CoorAlig_Fcn_B.NE_kw;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[1] =
    ESR_CoorAlig_Fcn_B.NE_gi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[2] =
    ESR_CoorAlig_Fcn_B.degrad_pz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[3] =
    ESR_CoorAlig_Fcn_B.NE_mg;

  /* Product: '<Root>/Divide41' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide41In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function41' incorporates:
     *  Constant: '<Root>/Constant43'
     */
    ESR_CoorAlig_Fcn_B.MathFunction41[i] = ESR_CoorAlig_Fcn_P.Constant43_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction41[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide41[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide41' */

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_43'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ox =
    ESR_CoorAlig_Fcn_P.Track_ID_43_Value;

  /* Gain: '<S43>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_onj = ESR_CoorAlig_Fcn_P.NE_Gain_km *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ox;

  /* DataTypeConversion: '<S171>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_43'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_da = (real_T)Get_Track_TRACK_RANGE_43();

  /* Gain: '<S171>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gy = ESR_CoorAlig_Fcn_P.NE_Gain_df *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_da;

  /* DataTypeConversion: '<S107>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_43'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iur = (real_T)Get_Track_TRACK_ANGLE_43();

  /* Gain: '<S107>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ko0 = ESR_CoorAlig_Fcn_P.NE_Gain_bj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iur;

  /* Gain: '<S107>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_kp = ESR_CoorAlig_Fcn_P.degrad_Gain_gm *
    ESR_CoorAlig_Fcn_B.NE_ko0;

  /* DataTypeConversion: '<S235>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_43'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jk = (real_T)Get_Track_TRACK_STATUS_43();

  /* Gain: '<S235>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_db = ESR_CoorAlig_Fcn_P.NE_Gain_lq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jk;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide42Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[0] =
    ESR_CoorAlig_Fcn_B.NE_onj;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[1] =
    ESR_CoorAlig_Fcn_B.NE_gy;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[2] =
    ESR_CoorAlig_Fcn_B.degrad_kp;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[3] =
    ESR_CoorAlig_Fcn_B.NE_db;

  /* Product: '<Root>/Divide42' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide42In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function42' incorporates:
     *  Constant: '<Root>/Constant44'
     */
    ESR_CoorAlig_Fcn_B.MathFunction42[i] = ESR_CoorAlig_Fcn_P.Constant44_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction42[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide42[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide42' */

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_44'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_id =
    ESR_CoorAlig_Fcn_P.Track_ID_44_Value;

  /* Gain: '<S44>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fz = ESR_CoorAlig_Fcn_P.NE_Gain_n3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_id;

  /* DataTypeConversion: '<S172>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_44'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_h4 = (real_T)Get_Track_TRACK_RANGE_44();

  /* Gain: '<S172>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_mb = ESR_CoorAlig_Fcn_P.NE_Gain_io *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_h4;

  /* DataTypeConversion: '<S108>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_44'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_on = (real_T)Get_Track_TRACK_ANGLE_44();

  /* Gain: '<S108>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jw = ESR_CoorAlig_Fcn_P.NE_Gain_bc *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_on;

  /* Gain: '<S108>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_gg = ESR_CoorAlig_Fcn_P.degrad_Gain_e *
    ESR_CoorAlig_Fcn_B.NE_jw;

  /* DataTypeConversion: '<S236>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_44'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dh = (real_T)Get_Track_TRACK_STATUS_44();

  /* Gain: '<S236>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dr = ESR_CoorAlig_Fcn_P.NE_Gain_c4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dh;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide43Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[0] =
    ESR_CoorAlig_Fcn_B.NE_fz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[1] =
    ESR_CoorAlig_Fcn_B.NE_mb;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[2] =
    ESR_CoorAlig_Fcn_B.degrad_gg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[3] =
    ESR_CoorAlig_Fcn_B.NE_dr;

  /* Product: '<Root>/Divide43' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide43In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function43' incorporates:
     *  Constant: '<Root>/Constant15'
     */
    ESR_CoorAlig_Fcn_B.MathFunction43[i] = ESR_CoorAlig_Fcn_P.Constant15_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction43[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide43[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide43' */

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_45'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fy =
    ESR_CoorAlig_Fcn_P.Track_ID_45_Value;

  /* Gain: '<S45>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lv = ESR_CoorAlig_Fcn_P.NE_Gain_op *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fy;

  /* DataTypeConversion: '<S173>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_45'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_f0o = (real_T)Get_Track_TRACK_RANGE_45();

  /* Gain: '<S173>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lo = ESR_CoorAlig_Fcn_P.NE_Gain_fa *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_f0o;

  /* DataTypeConversion: '<S109>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_45'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gx = (real_T)Get_Track_TRACK_ANGLE_45();

  /* Gain: '<S109>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pg = ESR_CoorAlig_Fcn_P.NE_Gain_pt *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gx;

  /* Gain: '<S109>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_pn = ESR_CoorAlig_Fcn_P.degrad_Gain_eo *
    ESR_CoorAlig_Fcn_B.NE_pg;

  /* DataTypeConversion: '<S237>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_45'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fl = (real_T)Get_Track_TRACK_STATUS_45();

  /* Gain: '<S237>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gb = ESR_CoorAlig_Fcn_P.NE_Gain_pi *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fl;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide44Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[0] =
    ESR_CoorAlig_Fcn_B.NE_lv;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[1] =
    ESR_CoorAlig_Fcn_B.NE_lo;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[2] =
    ESR_CoorAlig_Fcn_B.degrad_pn;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[3] =
    ESR_CoorAlig_Fcn_B.NE_gb;

  /* Product: '<Root>/Divide44' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide44In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function44' incorporates:
     *  Constant: '<Root>/Constant45'
     */
    ESR_CoorAlig_Fcn_B.MathFunction44[i] = ESR_CoorAlig_Fcn_P.Constant45_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction44[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide44[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide44' */

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_46'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_em =
    ESR_CoorAlig_Fcn_P.Track_ID_46_Value;

  /* Gain: '<S46>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cz = ESR_CoorAlig_Fcn_P.NE_Gain_p4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_em;

  /* DataTypeConversion: '<S174>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_46'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mu = (real_T)Get_Track_TRACK_RANGE_46();

  /* Gain: '<S174>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_l1 = ESR_CoorAlig_Fcn_P.NE_Gain_lw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mu;

  /* DataTypeConversion: '<S110>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_46'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bo = (real_T)Get_Track_TRACK_ANGLE_46();

  /* Gain: '<S110>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_adv = ESR_CoorAlig_Fcn_P.NE_Gain_ia *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bo;

  /* Gain: '<S110>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_b = ESR_CoorAlig_Fcn_P.degrad_Gain_b *
    ESR_CoorAlig_Fcn_B.NE_adv;

  /* DataTypeConversion: '<S238>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_46'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_a24 = (real_T)Get_Track_TRACK_STATUS_46();

  /* Gain: '<S238>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ai = ESR_CoorAlig_Fcn_P.NE_Gain_hd *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_a24;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide45Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[0] =
    ESR_CoorAlig_Fcn_B.NE_cz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[1] =
    ESR_CoorAlig_Fcn_B.NE_l1;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[2] =
    ESR_CoorAlig_Fcn_B.degrad_b;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[3] =
    ESR_CoorAlig_Fcn_B.NE_ai;

  /* Product: '<Root>/Divide45' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide45In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function45' incorporates:
     *  Constant: '<Root>/Constant46'
     */
    ESR_CoorAlig_Fcn_B.MathFunction45[i] = ESR_CoorAlig_Fcn_P.Constant46_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction45[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide45[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide45' */

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_47'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dt =
    ESR_CoorAlig_Fcn_P.Track_ID_47_Value;

  /* Gain: '<S47>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kj = ESR_CoorAlig_Fcn_P.NE_Gain_jh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dt;

  /* DataTypeConversion: '<S175>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_47'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iq = (real_T)Get_Track_TRACK_RANGE_47();

  /* Gain: '<S175>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ggl = ESR_CoorAlig_Fcn_P.NE_Gain_gz *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iq;

  /* DataTypeConversion: '<S111>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_47'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ngk = (real_T)Get_Track_TRACK_ANGLE_47();

  /* Gain: '<S111>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pv = ESR_CoorAlig_Fcn_P.NE_Gain_elc *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ngk;

  /* Gain: '<S111>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_md = ESR_CoorAlig_Fcn_P.degrad_Gain_h1 *
    ESR_CoorAlig_Fcn_B.NE_pv;

  /* DataTypeConversion: '<S239>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_47'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_edf = (real_T)Get_Track_TRACK_STATUS_47();

  /* Gain: '<S239>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gx = ESR_CoorAlig_Fcn_P.NE_Gain_lk *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_edf;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide46Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[0] =
    ESR_CoorAlig_Fcn_B.NE_kj;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[1] =
    ESR_CoorAlig_Fcn_B.NE_ggl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[2] =
    ESR_CoorAlig_Fcn_B.degrad_md;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[3] =
    ESR_CoorAlig_Fcn_B.NE_gx;

  /* Product: '<Root>/Divide46' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide46In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function46' incorporates:
     *  Constant: '<Root>/Constant47'
     */
    ESR_CoorAlig_Fcn_B.MathFunction46[i] = ESR_CoorAlig_Fcn_P.Constant47_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction46[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide46[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide46' */

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_48'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_l0 =
    ESR_CoorAlig_Fcn_P.Track_ID_48_Value;

  /* Gain: '<S48>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ag = ESR_CoorAlig_Fcn_P.NE_Gain_k0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_l0;

  /* DataTypeConversion: '<S176>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_48'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fd = (real_T)Get_Track_TRACK_RANGE_48();

  /* Gain: '<S176>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fm = ESR_CoorAlig_Fcn_P.NE_Gain_i0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fd;

  /* DataTypeConversion: '<S112>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_48'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_m3 = (real_T)Get_Track_TRACK_ANGLE_48();

  /* Gain: '<S112>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jn = ESR_CoorAlig_Fcn_P.NE_Gain_d1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_m3;

  /* Gain: '<S112>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_i = ESR_CoorAlig_Fcn_P.degrad_Gain_bn *
    ESR_CoorAlig_Fcn_B.NE_jn;

  /* DataTypeConversion: '<S240>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_48'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_eh = (real_T)Get_Track_TRACK_STATUS_48();

  /* Gain: '<S240>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kq = ESR_CoorAlig_Fcn_P.NE_Gain_kt *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_eh;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide47Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[0] =
    ESR_CoorAlig_Fcn_B.NE_ag;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[1] =
    ESR_CoorAlig_Fcn_B.NE_fm;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[2] =
    ESR_CoorAlig_Fcn_B.degrad_i;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[3] =
    ESR_CoorAlig_Fcn_B.NE_kq;

  /* Product: '<Root>/Divide47' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide47In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function47' incorporates:
     *  Constant: '<Root>/Constant48'
     */
    ESR_CoorAlig_Fcn_B.MathFunction47[i] = ESR_CoorAlig_Fcn_P.Constant48_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction47[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide47[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide47' */

  /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_49'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lg =
    ESR_CoorAlig_Fcn_P.Track_ID_49_Value;

  /* Gain: '<S49>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_go = ESR_CoorAlig_Fcn_P.NE_Gain_mh *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lg;

  /* DataTypeConversion: '<S177>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_49'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lcm = (real_T)Get_Track_TRACK_RANGE_49();

  /* Gain: '<S177>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ne = ESR_CoorAlig_Fcn_P.NE_Gain_i3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lcm;

  /* DataTypeConversion: '<S113>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_49'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_eo = (real_T)Get_Track_TRACK_ANGLE_49();

  /* Gain: '<S113>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ka = ESR_CoorAlig_Fcn_P.NE_Gain_ili *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_eo;

  /* Gain: '<S113>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_fh = ESR_CoorAlig_Fcn_P.degrad_Gain_g4 *
    ESR_CoorAlig_Fcn_B.NE_ka;

  /* DataTypeConversion: '<S241>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_49'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_oec = (real_T)Get_Track_TRACK_STATUS_49();

  /* Gain: '<S241>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fzj = ESR_CoorAlig_Fcn_P.NE_Gain_ke *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_oec;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide48Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[0] =
    ESR_CoorAlig_Fcn_B.NE_go;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[1] =
    ESR_CoorAlig_Fcn_B.NE_ne;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[2] =
    ESR_CoorAlig_Fcn_B.degrad_fh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[3] =
    ESR_CoorAlig_Fcn_B.NE_fzj;

  /* Product: '<Root>/Divide48' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide48In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function48' incorporates:
     *  Constant: '<Root>/Constant49'
     */
    ESR_CoorAlig_Fcn_B.MathFunction48[i] = ESR_CoorAlig_Fcn_P.Constant49_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction48[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide48[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide48' */

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_50'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_j3 =
    ESR_CoorAlig_Fcn_P.Track_ID_50_Value;

  /* Gain: '<S51>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_f4k = ESR_CoorAlig_Fcn_P.NE_Gain_jyp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_j3;

  /* DataTypeConversion: '<S179>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_50'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dax = (real_T)Get_Track_TRACK_RANGE_50();

  /* Gain: '<S179>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jki = ESR_CoorAlig_Fcn_P.NE_Gain_k5h *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dax;

  /* DataTypeConversion: '<S115>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_50'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dac = (real_T)Get_Track_TRACK_ANGLE_50();

  /* Gain: '<S115>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cr = ESR_CoorAlig_Fcn_P.NE_Gain_fmv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dac;

  /* Gain: '<S115>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_gl = ESR_CoorAlig_Fcn_P.degrad_Gain_dn *
    ESR_CoorAlig_Fcn_B.NE_cr;

  /* DataTypeConversion: '<S243>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_50'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gk = (real_T)Get_Track_TRACK_STATUS_50();

  /* Gain: '<S243>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ew = ESR_CoorAlig_Fcn_P.NE_Gain_nw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gk;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide49Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[0] =
    ESR_CoorAlig_Fcn_B.NE_f4k;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[1] =
    ESR_CoorAlig_Fcn_B.NE_jki;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[2] =
    ESR_CoorAlig_Fcn_B.degrad_gl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[3] =
    ESR_CoorAlig_Fcn_B.NE_ew;

  /* Product: '<Root>/Divide49' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide49In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function49' incorporates:
     *  Constant: '<Root>/Constant50'
     */
    ESR_CoorAlig_Fcn_B.MathFunction49[i] = ESR_CoorAlig_Fcn_P.Constant50_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction49[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide49[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide49' */

  /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_51'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fl0 =
    ESR_CoorAlig_Fcn_P.Track_ID_51_Value;

  /* Gain: '<S52>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pwm = ESR_CoorAlig_Fcn_P.NE_Gain_c2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fl0;

  /* DataTypeConversion: '<S180>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_51'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_n0 = (real_T)Get_Track_TRACK_RANGE_51();

  /* Gain: '<S180>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ho = ESR_CoorAlig_Fcn_P.NE_Gain_pvr *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_n0;

  /* DataTypeConversion: '<S116>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_51'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jot = (real_T)Get_Track_TRACK_ANGLE_51();

  /* Gain: '<S116>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cu = ESR_CoorAlig_Fcn_P.NE_Gain_on *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jot;

  /* Gain: '<S116>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_ao = ESR_CoorAlig_Fcn_P.degrad_Gain_gw *
    ESR_CoorAlig_Fcn_B.NE_cu;

  /* DataTypeConversion: '<S244>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_51'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ld3 = (real_T)Get_Track_TRACK_STATUS_51();

  /* Gain: '<S244>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ds = ESR_CoorAlig_Fcn_P.NE_Gain_nj3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ld3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide50Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[0] =
    ESR_CoorAlig_Fcn_B.NE_pwm;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[1] =
    ESR_CoorAlig_Fcn_B.NE_ho;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[2] =
    ESR_CoorAlig_Fcn_B.degrad_ao;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[3] =
    ESR_CoorAlig_Fcn_B.NE_ds;

  /* Product: '<Root>/Divide50' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide50In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function50' incorporates:
     *  Constant: '<Root>/Constant51'
     */
    ESR_CoorAlig_Fcn_B.MathFunction50[i] = ESR_CoorAlig_Fcn_P.Constant51_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction50[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide50[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide50' */

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_52'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ac =
    ESR_CoorAlig_Fcn_P.Track_ID_52_Value;

  /* Gain: '<S53>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ku = ESR_CoorAlig_Fcn_P.NE_Gain_kri *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ac;

  /* DataTypeConversion: '<S181>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_52'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ktl = (real_T)Get_Track_TRACK_RANGE_52();

  /* Gain: '<S181>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ktf = ESR_CoorAlig_Fcn_P.NE_Gain_ik *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ktl;

  /* DataTypeConversion: '<S117>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_52'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_gn = (real_T)Get_Track_TRACK_ANGLE_52();

  /* Gain: '<S117>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_i3 = ESR_CoorAlig_Fcn_P.NE_Gain_cs *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_gn;

  /* Gain: '<S117>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_nc = ESR_CoorAlig_Fcn_P.degrad_Gain_ff *
    ESR_CoorAlig_Fcn_B.NE_i3;

  /* DataTypeConversion: '<S245>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_52'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_oep = (real_T)Get_Track_TRACK_STATUS_52();

  /* Gain: '<S245>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ijt = ESR_CoorAlig_Fcn_P.NE_Gain_ga *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_oep;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide51Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[0] =
    ESR_CoorAlig_Fcn_B.NE_ku;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[1] =
    ESR_CoorAlig_Fcn_B.NE_ktf;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[2] =
    ESR_CoorAlig_Fcn_B.degrad_nc;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[3] =
    ESR_CoorAlig_Fcn_B.NE_ijt;

  /* Product: '<Root>/Divide51' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide51In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function51' incorporates:
     *  Constant: '<Root>/Constant52'
     */
    ESR_CoorAlig_Fcn_B.MathFunction51[i] = ESR_CoorAlig_Fcn_P.Constant52_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction51[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide51[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide51' */

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_53'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jji =
    ESR_CoorAlig_Fcn_P.Track_ID_53_Value;

  /* Gain: '<S54>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_im = ESR_CoorAlig_Fcn_P.NE_Gain_pb *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jji;

  /* DataTypeConversion: '<S182>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_53'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ow = (real_T)Get_Track_TRACK_RANGE_53();

  /* Gain: '<S182>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_m0 = ESR_CoorAlig_Fcn_P.NE_Gain_jz *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ow;

  /* DataTypeConversion: '<S118>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_53'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mz = (real_T)Get_Track_TRACK_ANGLE_53();

  /* Gain: '<S118>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ei = ESR_CoorAlig_Fcn_P.NE_Gain_ezv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mz;

  /* Gain: '<S118>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lp = ESR_CoorAlig_Fcn_P.degrad_Gain_dn3 *
    ESR_CoorAlig_Fcn_B.NE_ei;

  /* DataTypeConversion: '<S246>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_53'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ar = (real_T)Get_Track_TRACK_STATUS_53();

  /* Gain: '<S246>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pvj = ESR_CoorAlig_Fcn_P.NE_Gain_hzeg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ar;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide52Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[0] =
    ESR_CoorAlig_Fcn_B.NE_im;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[1] =
    ESR_CoorAlig_Fcn_B.NE_m0;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[2] =
    ESR_CoorAlig_Fcn_B.degrad_lp;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[3] =
    ESR_CoorAlig_Fcn_B.NE_pvj;

  /* Product: '<Root>/Divide52' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide52In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function52' incorporates:
     *  Constant: '<Root>/Constant53'
     */
    ESR_CoorAlig_Fcn_B.MathFunction52[i] = ESR_CoorAlig_Fcn_P.Constant53_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction52[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide52[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide52' */

  /* DataTypeConversion: '<S55>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_54'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hy =
    ESR_CoorAlig_Fcn_P.Track_ID_54_Value;

  /* Gain: '<S55>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_b0p = ESR_CoorAlig_Fcn_P.NE_Gain_ku *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hy;

  /* DataTypeConversion: '<S183>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_54'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_d3u = (real_T)Get_Track_TRACK_RANGE_54();

  /* Gain: '<S183>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oyi = ESR_CoorAlig_Fcn_P.NE_Gain_krm *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_d3u;

  /* DataTypeConversion: '<S119>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_54'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jg = (real_T)Get_Track_TRACK_ANGLE_54();

  /* Gain: '<S119>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_l2 = ESR_CoorAlig_Fcn_P.NE_Gain_fnr *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jg;

  /* Gain: '<S119>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_eu = ESR_CoorAlig_Fcn_P.degrad_Gain_kb *
    ESR_CoorAlig_Fcn_B.NE_l2;

  /* DataTypeConversion: '<S247>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_54'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_emv = (real_T)Get_Track_TRACK_STATUS_54();

  /* Gain: '<S247>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_oyg = ESR_CoorAlig_Fcn_P.NE_Gain_ov *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_emv;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide53Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[0] =
    ESR_CoorAlig_Fcn_B.NE_b0p;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[1] =
    ESR_CoorAlig_Fcn_B.NE_oyi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[2] =
    ESR_CoorAlig_Fcn_B.degrad_eu;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[3] =
    ESR_CoorAlig_Fcn_B.NE_oyg;

  /* Product: '<Root>/Divide53' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide53In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function53' incorporates:
     *  Constant: '<Root>/Constant54'
     */
    ESR_CoorAlig_Fcn_B.MathFunction53[i] = ESR_CoorAlig_Fcn_P.Constant54_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction53[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide53[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide53' */

  /* DataTypeConversion: '<S56>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_55'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_boj =
    ESR_CoorAlig_Fcn_P.Track_ID_55_Value;

  /* Gain: '<S56>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hi = ESR_CoorAlig_Fcn_P.NE_Gain_o0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_boj;

  /* DataTypeConversion: '<S184>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_55'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cg = (real_T)Get_Track_TRACK_RANGE_55();

  /* Gain: '<S184>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_pq = ESR_CoorAlig_Fcn_P.NE_Gain_fc *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cg;

  /* DataTypeConversion: '<S120>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_55'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nj4 = (real_T)Get_Track_TRACK_ANGLE_55();

  /* Gain: '<S120>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gcs = ESR_CoorAlig_Fcn_P.NE_Gain_dj2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nj4;

  /* Gain: '<S120>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_hb = ESR_CoorAlig_Fcn_P.degrad_Gain_po *
    ESR_CoorAlig_Fcn_B.NE_gcs;

  /* DataTypeConversion: '<S248>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_55'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_fp5 = (real_T)Get_Track_TRACK_STATUS_55();

  /* Gain: '<S248>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_le = ESR_CoorAlig_Fcn_P.NE_Gain_as *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_fp5;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide54Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[0] =
    ESR_CoorAlig_Fcn_B.NE_hi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[1] =
    ESR_CoorAlig_Fcn_B.NE_pq;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[2] =
    ESR_CoorAlig_Fcn_B.degrad_hb;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[3] =
    ESR_CoorAlig_Fcn_B.NE_le;

  /* Product: '<Root>/Divide54' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide54In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function54' incorporates:
     *  Constant: '<Root>/Constant55'
     */
    ESR_CoorAlig_Fcn_B.MathFunction54[i] = ESR_CoorAlig_Fcn_P.Constant55_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction54[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide54[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide54' */

  /* DataTypeConversion: '<S57>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_56'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_njj =
    ESR_CoorAlig_Fcn_P.Track_ID_56_Value;

  /* Gain: '<S57>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_fx = ESR_CoorAlig_Fcn_P.NE_Gain_oxd *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_njj;

  /* DataTypeConversion: '<S185>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_56'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pl = (real_T)Get_Track_TRACK_RANGE_56();

  /* Gain: '<S185>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_o1t = ESR_CoorAlig_Fcn_P.NE_Gain_jf *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pl;

  /* DataTypeConversion: '<S121>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_56'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_au = (real_T)Get_Track_TRACK_ANGLE_56();

  /* Gain: '<S121>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_a1e = ESR_CoorAlig_Fcn_P.NE_Gain_bl *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_au;

  /* Gain: '<S121>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_o3 = ESR_CoorAlig_Fcn_P.degrad_Gain_eq *
    ESR_CoorAlig_Fcn_B.NE_a1e;

  /* DataTypeConversion: '<S249>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_56'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_b10 = (real_T)Get_Track_TRACK_STATUS_56();

  /* Gain: '<S249>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cu5 = ESR_CoorAlig_Fcn_P.NE_Gain_pf *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_b10;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide55Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[0] =
    ESR_CoorAlig_Fcn_B.NE_fx;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[1] =
    ESR_CoorAlig_Fcn_B.NE_o1t;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[2] =
    ESR_CoorAlig_Fcn_B.degrad_o3;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[3] =
    ESR_CoorAlig_Fcn_B.NE_cu5;

  /* Product: '<Root>/Divide55' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide55In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function55' incorporates:
     *  Constant: '<Root>/Constant56'
     */
    ESR_CoorAlig_Fcn_B.MathFunction55[i] = ESR_CoorAlig_Fcn_P.Constant56_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction55[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide55[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide55' */

  /* DataTypeConversion: '<S58>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_57'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_iu1 =
    ESR_CoorAlig_Fcn_P.Track_ID_57_Value;

  /* Gain: '<S58>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_g4 = ESR_CoorAlig_Fcn_P.NE_Gain_ah *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_iu1;

  /* DataTypeConversion: '<S186>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_57'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jw = (real_T)Get_Track_TRACK_RANGE_57();

  /* Gain: '<S186>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nm = ESR_CoorAlig_Fcn_P.NE_Gain_j4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jw;

  /* DataTypeConversion: '<S122>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_57'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ik = (real_T)Get_Track_TRACK_ANGLE_57();

  /* Gain: '<S122>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_eg = ESR_CoorAlig_Fcn_P.NE_Gain_jg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ik;

  /* Gain: '<S122>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_c = ESR_CoorAlig_Fcn_P.degrad_Gain_p0 *
    ESR_CoorAlig_Fcn_B.NE_eg;

  /* DataTypeConversion: '<S250>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_57'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bxk = (real_T)Get_Track_TRACK_STATUS_57();

  /* Gain: '<S250>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kvh = ESR_CoorAlig_Fcn_P.NE_Gain_mtx *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bxk;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide56Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[0] =
    ESR_CoorAlig_Fcn_B.NE_g4;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[1] =
    ESR_CoorAlig_Fcn_B.NE_nm;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[2] =
    ESR_CoorAlig_Fcn_B.degrad_c;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[3] =
    ESR_CoorAlig_Fcn_B.NE_kvh;

  /* Product: '<Root>/Divide56' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide56In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function56' incorporates:
     *  Constant: '<Root>/Constant57'
     */
    ESR_CoorAlig_Fcn_B.MathFunction56[i] = ESR_CoorAlig_Fcn_P.Constant57_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction56[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide56[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide56' */

  /* DataTypeConversion: '<S59>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_58'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_m0v =
    ESR_CoorAlig_Fcn_P.Track_ID_58_Value;

  /* Gain: '<S59>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dvi = ESR_CoorAlig_Fcn_P.NE_Gain_jv *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_m0v;

  /* DataTypeConversion: '<S187>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_58'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_pee = (real_T)Get_Track_TRACK_RANGE_58();

  /* Gain: '<S187>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_c4 = ESR_CoorAlig_Fcn_P.NE_Gain_lql *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_pee;

  /* DataTypeConversion: '<S123>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_58'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dfi = (real_T)Get_Track_TRACK_ANGLE_58();

  /* Gain: '<S123>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_eq = ESR_CoorAlig_Fcn_P.NE_Gain_hj *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dfi;

  /* Gain: '<S123>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_pe = ESR_CoorAlig_Fcn_P.degrad_Gain_gv *
    ESR_CoorAlig_Fcn_B.NE_eq;

  /* DataTypeConversion: '<S251>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_58'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ov = (real_T)Get_Track_TRACK_STATUS_58();

  /* Gain: '<S251>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dzw = ESR_CoorAlig_Fcn_P.NE_Gain_lku *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ov;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide57Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[0] =
    ESR_CoorAlig_Fcn_B.NE_dvi;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[1] =
    ESR_CoorAlig_Fcn_B.NE_c4;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[2] =
    ESR_CoorAlig_Fcn_B.degrad_pe;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[3] =
    ESR_CoorAlig_Fcn_B.NE_dzw;

  /* Product: '<Root>/Divide57' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide57In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function57' incorporates:
     *  Constant: '<Root>/Constant58'
     */
    ESR_CoorAlig_Fcn_B.MathFunction57[i] = ESR_CoorAlig_Fcn_P.Constant58_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction57[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide57[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide57' */

  /* DataTypeConversion: '<S60>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_59'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bv =
    ESR_CoorAlig_Fcn_P.Track_ID_59_Value;

  /* Gain: '<S60>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_jnl = ESR_CoorAlig_Fcn_P.NE_Gain_lsz *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bv;

  /* DataTypeConversion: '<S188>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_59'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_kc = (real_T)Get_Track_TRACK_RANGE_59();

  /* Gain: '<S188>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_by = ESR_CoorAlig_Fcn_P.NE_Gain_ch *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_kc;

  /* DataTypeConversion: '<S124>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_59'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hh = (real_T)Get_Track_TRACK_ANGLE_59();

  /* Gain: '<S124>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hr = ESR_CoorAlig_Fcn_P.NE_Gain_m4 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hh;

  /* Gain: '<S124>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_lk = ESR_CoorAlig_Fcn_P.degrad_Gain_nc *
    ESR_CoorAlig_Fcn_B.NE_hr;

  /* DataTypeConversion: '<S252>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_59'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ev = (real_T)Get_Track_TRACK_STATUS_59();

  /* Gain: '<S252>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_kj3 = ESR_CoorAlig_Fcn_P.NE_Gain_f2 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ev;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide58Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[0] =
    ESR_CoorAlig_Fcn_B.NE_jnl;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[1] =
    ESR_CoorAlig_Fcn_B.NE_by;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[2] =
    ESR_CoorAlig_Fcn_B.degrad_lk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[3] =
    ESR_CoorAlig_Fcn_B.NE_kj3;

  /* Product: '<Root>/Divide58' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide58In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function58' incorporates:
     *  Constant: '<Root>/Constant59'
     */
    ESR_CoorAlig_Fcn_B.MathFunction58[i] = ESR_CoorAlig_Fcn_P.Constant59_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction58[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide58[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide58' */

  /* DataTypeConversion: '<S62>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_60'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_im =
    ESR_CoorAlig_Fcn_P.Track_ID_60_Value;

  /* Gain: '<S62>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_dp = ESR_CoorAlig_Fcn_P.NE_Gain_kq *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_im;

  /* DataTypeConversion: '<S190>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_60'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nf = (real_T)Get_Track_TRACK_RANGE_60();

  /* Gain: '<S190>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_eb = ESR_CoorAlig_Fcn_P.NE_Gain_ej *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nf;

  /* DataTypeConversion: '<S126>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_60'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_hb = (real_T)Get_Track_TRACK_ANGLE_60();

  /* Gain: '<S126>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gl = ESR_CoorAlig_Fcn_P.NE_Gain_h1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_hb;

  /* Gain: '<S126>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_jn = ESR_CoorAlig_Fcn_P.degrad_Gain_hy *
    ESR_CoorAlig_Fcn_B.NE_gl;

  /* DataTypeConversion: '<S254>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_60'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_lq = (real_T)Get_Track_TRACK_STATUS_60();

  /* Gain: '<S254>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hfq = ESR_CoorAlig_Fcn_P.NE_Gain_du *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_lq;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide59Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[0] =
    ESR_CoorAlig_Fcn_B.NE_dp;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[1] =
    ESR_CoorAlig_Fcn_B.NE_eb;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[2] =
    ESR_CoorAlig_Fcn_B.degrad_jn;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[3] =
    ESR_CoorAlig_Fcn_B.NE_hfq;

  /* Product: '<Root>/Divide59' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide59In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function59' incorporates:
     *  Constant: '<Root>/Constant60'
     */
    ESR_CoorAlig_Fcn_B.MathFunction59[i] = ESR_CoorAlig_Fcn_P.Constant60_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction59[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide59[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide59' */

  /* DataTypeConversion: '<S63>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_61'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dj =
    ESR_CoorAlig_Fcn_P.Track_ID_61_Value;

  /* Gain: '<S63>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_otg = ESR_CoorAlig_Fcn_P.NE_Gain_ks *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dj;

  /* DataTypeConversion: '<S191>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_61'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_grc = (real_T)Get_Track_TRACK_RANGE_61();

  /* Gain: '<S191>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_cgv = ESR_CoorAlig_Fcn_P.NE_Gain_js *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_grc;

  /* DataTypeConversion: '<S127>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_61'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_e1c = (real_T)Get_Track_TRACK_ANGLE_61();

  /* Gain: '<S127>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_ft = ESR_CoorAlig_Fcn_P.NE_Gain_k0t *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_e1c;

  /* Gain: '<S127>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_kae = ESR_CoorAlig_Fcn_P.degrad_Gain_lm *
    ESR_CoorAlig_Fcn_B.NE_ft;

  /* DataTypeConversion: '<S255>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_61'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ky = (real_T)Get_Track_TRACK_STATUS_61();

  /* Gain: '<S255>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lj = ESR_CoorAlig_Fcn_P.NE_Gain_l3 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ky;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide60Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[0] =
    ESR_CoorAlig_Fcn_B.NE_otg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[1] =
    ESR_CoorAlig_Fcn_B.NE_cgv;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[2] =
    ESR_CoorAlig_Fcn_B.degrad_kae;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[3] =
    ESR_CoorAlig_Fcn_B.NE_lj;

  /* Product: '<Root>/Divide60' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide60In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function60' incorporates:
     *  Constant: '<Root>/Constant61'
     */
    ESR_CoorAlig_Fcn_B.MathFunction60[i] = ESR_CoorAlig_Fcn_P.Constant61_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction60[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide60[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide60' */

  /* DataTypeConversion: '<S64>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_62'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_emw =
    ESR_CoorAlig_Fcn_P.Track_ID_62_Value;

  /* Gain: '<S64>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nzz = ESR_CoorAlig_Fcn_P.NE_Gain_cp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_emw;

  /* DataTypeConversion: '<S192>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_62'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nc = (real_T)Get_Track_TRACK_RANGE_62();

  /* Gain: '<S192>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_onk = ESR_CoorAlig_Fcn_P.NE_Gain_j0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nc;

  /* DataTypeConversion: '<S128>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_62'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_cq = (real_T)Get_Track_TRACK_ANGLE_62();

  /* Gain: '<S128>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_miy = ESR_CoorAlig_Fcn_P.NE_Gain_dja *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_cq;

  /* Gain: '<S128>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_if = ESR_CoorAlig_Fcn_P.degrad_Gain_l2 *
    ESR_CoorAlig_Fcn_B.NE_miy;

  /* DataTypeConversion: '<S256>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_62'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ok = (real_T)Get_Track_TRACK_STATUS_62();

  /* Gain: '<S256>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_py = ESR_CoorAlig_Fcn_P.NE_Gain_l0 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ok;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide61Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[0] =
    ESR_CoorAlig_Fcn_B.NE_nzz;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[1] =
    ESR_CoorAlig_Fcn_B.NE_onk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[2] =
    ESR_CoorAlig_Fcn_B.degrad_if;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[3] =
    ESR_CoorAlig_Fcn_B.NE_py;

  /* Product: '<Root>/Divide61' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide61In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function61' incorporates:
     *  Constant: '<Root>/Constant62'
     */
    ESR_CoorAlig_Fcn_B.MathFunction61[i] = ESR_CoorAlig_Fcn_P.Constant62_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction61[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide61[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide61' */

  /* DataTypeConversion: '<S65>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_63'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_o4 =
    ESR_CoorAlig_Fcn_P.Track_ID_63_Value;

  /* Gain: '<S65>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_gsg = ESR_CoorAlig_Fcn_P.NE_Gain_br1 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_o4;

  /* DataTypeConversion: '<S193>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_63'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_bfp = (real_T)Get_Track_TRACK_RANGE_63();

  /* Gain: '<S193>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_hh = ESR_CoorAlig_Fcn_P.NE_Gain_ovg *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_bfp;

  /* DataTypeConversion: '<S129>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_63'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_ji = (real_T)Get_Track_TRACK_ANGLE_63();

  /* Gain: '<S129>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_h4 = ESR_CoorAlig_Fcn_P.NE_Gain_oy *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_ji;

  /* Gain: '<S129>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_m1 = ESR_CoorAlig_Fcn_P.degrad_Gain_hl *
    ESR_CoorAlig_Fcn_B.NE_h4;

  /* DataTypeConversion: '<S257>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_63'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_et = (real_T)Get_Track_TRACK_STATUS_63();

  /* Gain: '<S257>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nt = ESR_CoorAlig_Fcn_P.NE_Gain_bo *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_et;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide62Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[0] =
    ESR_CoorAlig_Fcn_B.NE_gsg;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[1] =
    ESR_CoorAlig_Fcn_B.NE_hh;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[2] =
    ESR_CoorAlig_Fcn_B.degrad_m1;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[3] =
    ESR_CoorAlig_Fcn_B.NE_nt;

  /* Product: '<Root>/Divide62' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide62In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function62' incorporates:
     *  Constant: '<Root>/Constant63'
     */
    ESR_CoorAlig_Fcn_B.MathFunction62[i] = ESR_CoorAlig_Fcn_P.Constant63_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction62[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide62[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide62' */

  /* DataTypeConversion: '<S66>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Track_ID_64'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_dm =
    ESR_CoorAlig_Fcn_P.Track_ID_64_Value;

  /* Gain: '<S66>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nc = ESR_CoorAlig_Fcn_P.NE_Gain_dp *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_dm;

  /* DataTypeConversion: '<S194>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_RANGE_64'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_nx = (real_T)Get_Track_TRACK_RANGE_64();

  /* Gain: '<S194>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_lk = ESR_CoorAlig_Fcn_P.NE_Gain_gr *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_nx;

  /* DataTypeConversion: '<S130>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_ANGLE_64'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_goz = (real_T)Get_Track_TRACK_ANGLE_64();

  /* Gain: '<S130>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_p4 = ESR_CoorAlig_Fcn_P.NE_Gain_dq5 *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_goz;

  /* Gain: '<S130>/deg->rad' */
  ESR_CoorAlig_Fcn_B.degrad_ac = ESR_CoorAlig_Fcn_P.degrad_Gain_aj *
    ESR_CoorAlig_Fcn_B.NE_p4;

  /* DataTypeConversion: '<S258>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Track_TRACK_STATUS_64'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_npx = (real_T)Get_Track_TRACK_STATUS_64();

  /* Gain: '<S258>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_nx = ESR_CoorAlig_Fcn_P.NE_Gain_i0h *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_npx;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide63Inport1' */
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[0] =
    ESR_CoorAlig_Fcn_B.NE_nc;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[1] =
    ESR_CoorAlig_Fcn_B.NE_lk;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[2] =
    ESR_CoorAlig_Fcn_B.degrad_ac;
  ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[3] =
    ESR_CoorAlig_Fcn_B.NE_nx;

  /* Product: '<Root>/Divide63' */
  tmp[0] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[0];
  tmp[1] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[1];
  tmp[2] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[2];
  tmp[3] = ESR_CoorAlig_Fcn_B.TmpSignalConversionAtDivide63In[3];
  for (i = 0; i < 64; i++) {
    /* Math: '<Root>/Math Function63' incorporates:
     *  Constant: '<Root>/Constant64'
     */
    ESR_CoorAlig_Fcn_B.MathFunction63[i] = ESR_CoorAlig_Fcn_P.Constant64_Value[i];
    tmp_0[i] = ESR_CoorAlig_Fcn_B.MathFunction63[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.Divide63[i + (i_0 << 2)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide63' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 256; i++) {
    ESR_CoorAlig_Fcn_B.Add[i] =
      ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((ESR_CoorAlig_Fcn_B.Divide
      [i] + ESR_CoorAlig_Fcn_B.Divide1[i]) + ESR_CoorAlig_Fcn_B.Divide2[i]) +
      ESR_CoorAlig_Fcn_B.Divide3[i]) + ESR_CoorAlig_Fcn_B.Divide4[i]) +
      ESR_CoorAlig_Fcn_B.Divide5[i]) + ESR_CoorAlig_Fcn_B.Divide6[i]) +
      ESR_CoorAlig_Fcn_B.Divide7[i]) + ESR_CoorAlig_Fcn_B.Divide8[i]) +
      ESR_CoorAlig_Fcn_B.Divide9[i]) + ESR_CoorAlig_Fcn_B.Divide10[i]) +
      ESR_CoorAlig_Fcn_B.Divide11[i]) + ESR_CoorAlig_Fcn_B.Divide12[i]) +
      ESR_CoorAlig_Fcn_B.Divide13[i]) + ESR_CoorAlig_Fcn_B.Divide14[i]) +
      ESR_CoorAlig_Fcn_B.Divide15[i]) + ESR_CoorAlig_Fcn_B.Divide16[i]) +
      ESR_CoorAlig_Fcn_B.Divide17[i]) + ESR_CoorAlig_Fcn_B.Divide18[i]) +
      ESR_CoorAlig_Fcn_B.Divide19[i]) + ESR_CoorAlig_Fcn_B.Divide20[i]) +
      ESR_CoorAlig_Fcn_B.Divide21[i]) + ESR_CoorAlig_Fcn_B.Divide22[i]) +
      ESR_CoorAlig_Fcn_B.Divide23[i]) + ESR_CoorAlig_Fcn_B.Divide24[i]) +
      ESR_CoorAlig_Fcn_B.Divide25[i]) + ESR_CoorAlig_Fcn_B.Divide26[i]) +
      ESR_CoorAlig_Fcn_B.Divide27[i]) + ESR_CoorAlig_Fcn_B.Divide28[i]) +
      ESR_CoorAlig_Fcn_B.Divide29[i]) + ESR_CoorAlig_Fcn_B.Divide30[i]) +
      ESR_CoorAlig_Fcn_B.Divide31[i]) + ESR_CoorAlig_Fcn_B.Divide32[i]) +
      ESR_CoorAlig_Fcn_B.Divide33[i]) + ESR_CoorAlig_Fcn_B.Divide34[i]) +
      ESR_CoorAlig_Fcn_B.Divide35[i]) + ESR_CoorAlig_Fcn_B.Divide36[i]) +
      ESR_CoorAlig_Fcn_B.Divide37[i]) + ESR_CoorAlig_Fcn_B.Divide38[i]) +
      ESR_CoorAlig_Fcn_B.Divide39[i]) + ESR_CoorAlig_Fcn_B.Divide40[i]) +
      ESR_CoorAlig_Fcn_B.Divide41[i]) + ESR_CoorAlig_Fcn_B.Divide42[i]) +
      ESR_CoorAlig_Fcn_B.Divide43[i]) + ESR_CoorAlig_Fcn_B.Divide44[i]) +
                        ESR_CoorAlig_Fcn_B.Divide45[i]) +
                       ESR_CoorAlig_Fcn_B.Divide46[i]) +
                      ESR_CoorAlig_Fcn_B.Divide47[i]) +
                     ESR_CoorAlig_Fcn_B.Divide48[i]) +
                    ESR_CoorAlig_Fcn_B.Divide49[i]) +
                   ESR_CoorAlig_Fcn_B.Divide50[i]) +
                  ESR_CoorAlig_Fcn_B.Divide51[i]) +
                 ESR_CoorAlig_Fcn_B.Divide52[i]) + ESR_CoorAlig_Fcn_B.Divide53[i])
               + ESR_CoorAlig_Fcn_B.Divide54[i]) + ESR_CoorAlig_Fcn_B.Divide55[i])
             + ESR_CoorAlig_Fcn_B.Divide56[i]) + ESR_CoorAlig_Fcn_B.Divide57[i])
           + ESR_CoorAlig_Fcn_B.Divide58[i]) + ESR_CoorAlig_Fcn_B.Divide59[i]) +
         ESR_CoorAlig_Fcn_B.Divide60[i]) + ESR_CoorAlig_Fcn_B.Divide61[i]) +
       ESR_CoorAlig_Fcn_B.Divide62[i]) + ESR_CoorAlig_Fcn_B.Divide63[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function64' */
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 64; i_0++) {
      ESR_CoorAlig_Fcn_B.MathFunction64[i_0 + (i << 6)] =
        ESR_CoorAlig_Fcn_B.Add[(i_0 << 2) + i];
    }
  }

  /* End of Math: '<Root>/Math Function64' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/ESR_RxTime'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_jb = (real_T)Get_ESR_RxTime();

  /* Gain: '<S2>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_c2 = ESR_CoorAlig_Fcn_P.NE_Gain_dfu *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_jb;

  /* Memory: '<S263>/Memory' */
  ESR_CoorAlig_Fcn_B.Memory = ESR_CoorAlig_Fcn_DW.Memory_PreviousInput;

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/ESR_Trigger'
   */
  ESR_CoorAlig_Fcn_B.DataTypeConversion_mu1 = Get_ESR_Trigger();
  

  /* Gain: '<S3>/N->E' */
  ESR_CoorAlig_Fcn_B.NE_bw = (uint16_T)((uint32_T)ESR_CoorAlig_Fcn_P.NE_Gain_aw *
    ESR_CoorAlig_Fcn_B.DataTypeConversion_mu1);

  /* RelationalOperator: '<S265>/Compare' incorporates:
   *  Constant: '<S265>/Constant'
   */
  ESR_CoorAlig_Fcn_B.Compare = (uint8_T)(ESR_CoorAlig_Fcn_B.NE_bw ==
    ESR_CoorAlig_Fcn_P.CompareToConstant_const);

  /* Switch: '<S263>/Switch' */
  if (ESR_CoorAlig_Fcn_B.Compare > ESR_CoorAlig_Fcn_P.Switch_Threshold) {
    /* Logic: '<S263>/Logical Operator' */
    ESR_CoorAlig_Fcn_B.LogicalOperator = !ESR_CoorAlig_Fcn_B.Memory;
    ESR_CoorAlig_Fcn_B.Switch = ESR_CoorAlig_Fcn_B.LogicalOperator;
  } else {
    ESR_CoorAlig_Fcn_B.Switch = ESR_CoorAlig_Fcn_B.Memory;
  }

  /* End of Switch: '<S263>/Switch' */

  /* Chart: '<Root>/ESR_Data_Collect' incorporates:
   *  TriggerPort: '<S262>/ESR_Trigger'
   */
  zcEvent = (((ESR_CoorAlig_Fcn_PrevZCX.ESR_Data_Collect_Trig_ZCE == POS_ZCSIG)
              != ESR_CoorAlig_Fcn_B.Switch) &&
             (ESR_CoorAlig_Fcn_PrevZCX.ESR_Data_Collect_Trig_ZCE !=
              UNINITIALIZED_ZCSIG));
  if (zcEvent) {
    ESR_CoorAlig_Fcn_B.ESR_Trigger_c = (int8_T)(ESR_CoorAlig_Fcn_B.Switch ?
      RISING_ZCEVENT : FALLING_ZCEVENT);

    /* Gateway: ESR_Data_Collect */
    /* Event: '<S262>:66' */
    /* During: ESR_Data_Collect */
    /* Entry Internal: ESR_Data_Collect */
    /* Transition: '<S262>:18' */
    k = 0U;
    TargetNum = 0U;
    memset(&ESR_CoorAlig_Fcn_B.DataOutput[0], 0, sizeof(real_T) << 8U);
    while (k < 64) {
      /* Transition: '<S262>:26' */
      if (ESR_CoorAlig_Fcn_B.MathFunction64[192 + k] != 0.0) {
        /* Transition: '<S262>:31' */
        /* Transition: '<S262>:34' */
        ESR_CoorAlig_Fcn_B.DataOutput[TargetNum] =
          ESR_CoorAlig_Fcn_B.MathFunction64[k];

        /* Target ID */
        /* Simulink Function 'TemporalAligFront': '<S262>:53' */
        ESR_CoorAlig_Fcn_B.range = ESR_CoorAlig_Fcn_B.MathFunction64[64 + k];
        ESR_CoorAlig_Fcn_B.azimuth = ESR_CoorAlig_Fcn_B.MathFunction64[128 + k];
        ESR_CoorAlig_Fcn_B.W = ESR_CoorAlig_Fcn_W;
        ESR_CoorAlig_Fcn_B.L = ESR_CoorAlig_Fcn_L;
        ESR_CoorAlig_Fcn_B.InstallAngESR = 0.0;

        /* Outputs for Function Call SubSystem: '<S262>/TemporalAligFront' */
        /* Gain: '<S264>/Gain1' */
        ESR_CoorAlig_Fcn_B.Gain1 = ESR_CoorAlig_Fcn_P.Gain1_Gain *
          ESR_CoorAlig_Fcn_B.azimuth;

        /* Trigonometry: '<S264>/Trigonometric Function' */
        ESR_CoorAlig_Fcn_B.TrigonometricFunction = sin(ESR_CoorAlig_Fcn_B.Gain1);

        /* Product: '<S264>/Product' */
        ESR_CoorAlig_Fcn_B.Product = ESR_CoorAlig_Fcn_B.range *
          ESR_CoorAlig_Fcn_B.TrigonometricFunction;

        /* Trigonometry: '<S264>/Trigonometric Function1' */
        ESR_CoorAlig_Fcn_B.TrigonometricFunction1 = cos(ESR_CoorAlig_Fcn_B.Gain1);

        /* Product: '<S264>/Product1' */
        ESR_CoorAlig_Fcn_B.Product1 = ESR_CoorAlig_Fcn_B.range *
          ESR_CoorAlig_Fcn_B.TrigonometricFunction1;

        /* End of Outputs for SubSystem: '<S262>/TemporalAligFront' */
        ESR_CoorAlig_Fcn_B.DataOutput[64 + TargetNum] =
          ESR_CoorAlig_Fcn_B.Product1;
        ESR_CoorAlig_Fcn_B.DataOutput[128 + TargetNum] =
          ESR_CoorAlig_Fcn_B.Product;
        ESR_CoorAlig_Fcn_B.DataOutput[192 + TargetNum] =
          ESR_CoorAlig_Fcn_B.MathFunction64[192 + k];

        /* Target DynamicMode */
        TargetNum++;

        /* Transition: '<S262>:35' */
      } else {
        /* Transition: '<S262>:29' */
      }

      /* Transition: '<S262>:32' */
      k++;
    }

    /* Transition: '<S262>:21' */
    if (ESR_CoorAlig_Fcn_B.Global_Trigger_ESR_c == 0) {
      /* Transition: '<S262>:69' */
      /* Transition: '<S262>:71' */
      ESR_CoorAlig_Fcn_B.Global_Trigger_ESR_c = 1U;
      ESR_CoorAlig_Fcn_B.ESR_RxTime_Out = ESR_CoorAlig_Fcn_B.NE_c2;

      /* Global_Trigger_ESR is the output of ESR CoordinateAlignment, and the input of Global Fusion center,
         the signal is 1 to 0 and 0 to 1, which means that either rise or fall should trigger the Globao Fusion Center. */
      /* Transition: '<S262>:74' */
    } else {
      /* Transition: '<S262>:73' */
      ESR_CoorAlig_Fcn_B.Global_Trigger_ESR_c = 0U;
      ESR_CoorAlig_Fcn_B.ESR_RxTime_Out = ESR_CoorAlig_Fcn_B.NE_c2;
    }

    /* Transition: '<S262>:76' */
  }

  ESR_CoorAlig_Fcn_PrevZCX.ESR_Data_Collect_Trig_ZCE = (uint8_T)
    (ESR_CoorAlig_Fcn_B.Switch ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
  for (i = 0; i < 256; i++) {
    /* Gain: '<S1>/E->N' */
    ESR_CoorAlig_Fcn_B.EN[i] = ESR_CoorAlig_Fcn_P.EN_Gain *
      ESR_CoorAlig_Fcn_B.DataOutput[i];

    /* DataTypeConversion: '<S1>/Data Type Conversion' */
    Set_ESR_Obj_CoAl( i , ESR_CoorAlig_Fcn_B.EN[i]);
  }

  /* Gain: '<S5>/E->N' */
  ESR_CoorAlig_Fcn_B.EN_e = (uint16_T)((uint32_T)ESR_CoorAlig_Fcn_P.EN_Gain_l *
    ESR_CoorAlig_Fcn_B.Global_Trigger_ESR_c);

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  Set_Global_Trigger_ESR((uint8_T)(ESR_CoorAlig_Fcn_B.EN_e >> 7));

  /* Gain: '<S4>/E->N' */
  ESR_CoorAlig_Fcn_B.EN_c = ESR_CoorAlig_Fcn_P.EN_Gain_b *
    ESR_CoorAlig_Fcn_B.ESR_RxTime_Out;

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  Set_Global_ESR_RxTime(ESR_CoorAlig_Fcn_B.EN_c);

  /* Update for Memory: '<S263>/Memory' */
  ESR_CoorAlig_Fcn_DW.Memory_PreviousInput = ESR_CoorAlig_Fcn_B.Switch;
}

/* Model initialize function */
void ESR_CoorAlig_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ESR_CoorAlig_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ESR_CoorAlig_Fcn_B), 0,
                sizeof(B_ESR_CoorAlig_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&ESR_CoorAlig_Fcn_DW, 0,
                sizeof(DW_ESR_CoorAlig_Fcn_T));

  /* Start for Chart: '<Root>/ESR_Data_Collect' incorporates:
   *  Start for SubSystem: '<S262>/TemporalAligFront'
   */
  /* VirtualOutportStart for Outport: '<S264>/rangeX' */
  ESR_CoorAlig_Fcn_B.Product1 = ESR_CoorAlig_Fcn_P.rangeX_Y0;

  /* VirtualOutportStart for Outport: '<S264>/rangeY' */
  ESR_CoorAlig_Fcn_B.Product = ESR_CoorAlig_Fcn_P.rangeY_Y0;
  ESR_CoorAlig_Fcn_PrevZCX.ESR_Data_Collect_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S263>/Memory' */
  ESR_CoorAlig_Fcn_DW.Memory_PreviousInput = ESR_CoorAlig_Fcn_P.Memory_X0;

  /* InitializeConditions for Chart: '<Root>/ESR_Data_Collect' */
  memset(&ESR_CoorAlig_Fcn_B.DataOutput[0], 0, sizeof(real_T) << 8U);
  ESR_CoorAlig_Fcn_B.Global_Trigger_ESR_c = 0U;
  ESR_CoorAlig_Fcn_B.ESR_RxTime_Out = 0.0;
}

/* Model terminate function */
void ESR_CoorAlig_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
