/*
 * File: GlobalFusion_Fcn.c
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
#include "interface.h"

/* Named constants for Chart: '<Root>/Fusion_Center' */
#define GlobalFusion_Fcn_CameraFarScoreDe (2.0)
#define GlobalFusion_Fcn_CameraNearScoreDe (5.0)
#define GlobalFusion_Fcn_CameraScoreIn (6.0)
#define GlobalFusion_Fcn_ESRScoreDe    (4.0)
#define GlobalFusion_Fcn_ESRScoreIn    (5.0)
#define GlobalFusion_Fcn_IN_C          ((uint8_T)1U)
#define GlobalFusion_Fcn_IN_D          ((uint8_T)1U)
#define GlobalFusion_Fcn_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define GlobalFusion_Fcn_MD_Calib      (800.0)
#define GlobalFusion_Fcn_SRRScoreDe    (2.0)
#define GlobalFusion_Fcn_SRRScoreIn    (4.0)
#define GlobalFusion_Fcn_event_CameraTrigger (0)
#define GlobalFusion_Fcn_event_ESRTrigger (2)
#define GlobalFusion_Fcn_event_SRRTrigger (1)

/* Block signals (auto storage) */
B_GlobalFusion_Fcn_T GlobalFusion_Fcn_B;

/* Block states (auto storage) */
DW_GlobalFusion_Fcn_T GlobalFusion_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_GlobalFusion_Fcn_T GlobalFusion_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_GlobalFusion_Fcn_T GlobalFusion_Fcn_M_;
RT_MODEL_GlobalFusion_Fcn_T *const GlobalFusion_Fcn_M = &GlobalFusion_Fcn_M_;

/* Forward declaration for local functions */
static void GlobalFusion_Fcn_Association_Update_step1(void);
static void GlobalFusion_Fcn_UpdateSourceID(void);
static void GlobalFusion_Fcn_step1(void);
static void GlobalFusion_Fcn_gating(void);
static void GlobalFusion_Fcn_Association_Update_step2(void);
static void GlobalFusion_Fcn_step2(void);
static real_T GlobalFusion_Fcn_OutCameraFOV(void);
static real_T GlobalFusion_Fcn_CameraBlocked(void);
static real_T GlobalFusion_Fcn_OutESRFOV(void);
static real_T GlobalFusion_Fcn_OutSRRFOV(void);
static void GlobalFusion_Fcn_ScoreDecrease(void);
static void GlobalFusion_Fcn_CameraIncrease(void);
static void GlobalFusion_Fcn_ESRIncrease(void);
static void GlobalFusion_Fcn_SRRIncrease(void);
static void GlobalFusion_Fcn_ScoreIncrease(void);
static void GlobalFusion_Fcn_ExistScoreCal(void);
static void GlobalFusion_Fcn_Del_InternalTrack(void);
static void GlobalFusion_Fcn_OutputTrack(void);
static void GlobalFusion_Fcn_FusTrackManagement(void);
static void GlobalFusion_Fcn_step3(void);
static void GlobalFusion_Fcn_chartstep_c19_GlobalFusion_Fcn(void);
void rt_mrdivide_U1d4x2_U2d2x2_Yd4x2_snf(const real_T u0[8], const real_T u1[4],
  real_T y[8])
{
  real_T u0_0[8];
  real_T u1_0[4];
  int32_T TWO;
  int32_T r1;
  real_T a21;
  real_T a22;
  real_T x;
  real_T y_0;
  memcpy(&u0_0[0], &u0[0], sizeof(real_T) << 3U);
  u1_0[0] = u1[0];
  u1_0[1] = u1[1];
  u1_0[2] = u1[2];
  u1_0[3] = u1[3];
  TWO = 1;
  x = u1_0[1];
  y_0 = fabs(x);
  a21 = y_0;
  x = u1_0[0];
  y_0 = fabs(x);
  x = y_0;
  if (a21 > x) {
    r1 = 1;
    TWO = 0;
  } else {
    r1 = 0;
  }

  x = u1_0[TWO];
  y_0 = u1_0[r1];
  a21 = x / y_0;
  a22 = u1_0[2 + TWO] - u1_0[2 + r1] * a21;
  x = u0_0[0];
  y_0 = u1_0[r1];
  x /= y_0;
  y[r1 << 2] = x;
  x = u0_0[4] - y[r1 << 2] * u1_0[2 + r1];
  x /= a22;
  y[TWO << 2] = x;
  y[r1 << 2] -= y[TWO << 2] * a21;
  x = u0_0[1];
  y_0 = u1_0[r1];
  x /= y_0;
  y[1 + (r1 << 2)] = x;
  x = u0_0[5] - y[(r1 << 2) + 1] * u1_0[2 + r1];
  x /= a22;
  y[1 + (TWO << 2)] = x;
  y[1 + (r1 << 2)] -= y[(TWO << 2) + 1] * a21;
  x = u0_0[2];
  y_0 = u1_0[r1];
  x /= y_0;
  y[2 + (r1 << 2)] = x;
  x = u0_0[6] - y[(r1 << 2) + 2] * u1_0[2 + r1];
  x /= a22;
  y[2 + (TWO << 2)] = x;
  y[2 + (r1 << 2)] -= y[(TWO << 2) + 2] * a21;
  x = u0_0[3];
  y_0 = u1_0[r1];
  x /= y_0;
  y[3 + (r1 << 2)] = x;
  x = u0_0[7] - y[(r1 << 2) + 3] * u1_0[2 + r1];
  x /= a22;
  y[3 + (TWO << 2)] = x;
  y[3 + (r1 << 2)] -= y[(TWO << 2) + 3] * a21;
}

/* Start for function-call system: '<S17>/FusTrackUpdate.Update' */
void GlobalFusion_Fcn_FusTrackUpdateUpdate_Start
  (B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localB,
   P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localP)
{
  /* VirtualOutportStart for Outport: '<S22>/RangeX' */
  localB->Subtract1[0] = localP->RangeX_Y0;

  /* VirtualOutportStart for Outport: '<S22>/VelX' */
  localB->Velocity_X = localP->VelX_Y0;

  /* VirtualOutportStart for Outport: '<S22>/RangeY' */
  localB->OutportBufferForRangeY = localP->RangeY_Y0;

  /* VirtualOutportStart for Outport: '<S22>/VelY' */
  localB->Range_Y = localP->VelY_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P11' */
  localB->Product[0] = localP->P11_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P12' */
  localB->Product1[0] = localP->P12_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P13' */
  localB->Product2[0] = localP->P13_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P14' */
  localB->Product3[0] = localP->P14_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P21' */
  localB->OutportBufferForP21 = localP->P21_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P22' */
  localB->OutportBufferForP22 = localP->P22_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P23' */
  localB->OutportBufferForP23 = localP->P23_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P24' */
  localB->OutportBufferForP24 = localP->P24_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P31' */
  localB->OutportBufferForP31 = localP->P31_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P32' */
  localB->OutportBufferForP32 = localP->P32_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P33' */
  localB->OutportBufferForP33 = localP->P33_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P34' */
  localB->OutportBufferForP34 = localP->P34_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P41' */
  localB->OutportBufferForP41 = localP->P41_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P42' */
  localB->OutportBufferForP42 = localP->P42_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P43' */
  localB->OutportBufferForP43 = localP->P43_Y0;

  /* VirtualOutportStart for Outport: '<S22>/P44' */
  localB->OutportBufferForP44 = localP->P44_Y0;
}

/* Output and update for function-call system: '<S17>/FusTrackUpdate.Update' */
void GlobalFusion_Fcn_FusTrackUpdateUpdate(real_T rtu_pre_p11, real_T
  rtu_pre_p12, real_T rtu_pre_p13, real_T rtu_pre_p14, real_T rtu_pre_p22,
  real_T rtu_pre_p21, real_T rtu_pre_p23, real_T rtu_pre_p24, real_T rtu_pre_p33,
  real_T rtu_pre_p31, real_T rtu_pre_p32, real_T rtu_pre_p34, real_T rtu_pre_p44,
  real_T rtu_pre_p41, real_T rtu_pre_p42, real_T rtu_pre_p43, real_T rtu_R11,
  real_T rtu_R12, real_T rtu_R21, real_T rtu_R22, real_T rtu_Pre_x, real_T
  rtu_Pre_vx, real_T rtu_Pre_y, real_T rtu_Pre_vy, real_T rtu_Mea_x, real_T
  rtu_Mea_y, B_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localB,
  P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *localP)
{
  real_T tmp[16];
  real_T tmp_0[8];
  real_T tmp_1[8];
  real_T tmp_2[16];
  real_T tmp_3[4];
  real_T tmp_4[2];
  real_T v1[8];
  int32_T i;
  int32_T i_0;
  real_T tmp_5;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T unnamed_idx_2;
  real_T unnamed_idx_3;

  /* Abs: '<S55>/Abs' */
  localB->Abs = fabs(rtu_pre_p11);

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   */
  localB->Compare = (uint8_T)(localB->Abs >= localP->CompareToConstant_const);

  /* Switch: '<S55>/Switch' incorporates:
   *  Constant: '<S55>/Constant'
   */
  if (localB->Compare >= localP->Switch_Threshold) {
    localB->Switch = rtu_pre_p11;
  } else {
    localB->Switch = localP->Constant_Value;
  }

  /* End of Switch: '<S55>/Switch' */

  /* SignalConversion: '<S59>/TmpSignal ConversionAtMath Function2Inport1' */
  localB->TmpSignalConversionAtMathFunction2Inport1[0] = localB->Switch;
  localB->TmpSignalConversionAtMathFunction2Inport1[1] = rtu_pre_p12;
  localB->TmpSignalConversionAtMathFunction2Inport1[2] = rtu_pre_p13;
  localB->TmpSignalConversionAtMathFunction2Inport1[3] = rtu_pre_p14;

  /* Math: '<S59>/Math Function2' */
  localB->MathFunction2[0] = localB->TmpSignalConversionAtMathFunction2Inport1[0];
  localB->MathFunction2[1] = localB->TmpSignalConversionAtMathFunction2Inport1[1];
  localB->MathFunction2[2] = localB->TmpSignalConversionAtMathFunction2Inport1[2];
  localB->MathFunction2[3] = localB->TmpSignalConversionAtMathFunction2Inport1[3];

  /* Gain: '<S59>/Gain' */
  for (i = 0; i < 4; i++) {
    localB->Gain[i] = localP->Gain_Gain[i] * localB->MathFunction2[0];
    localB->Gain[i + 4] = localP->Gain_Gain[i] * localB->MathFunction2[1];
    localB->Gain[i + 8] = localP->Gain_Gain[i] * localB->MathFunction2[2];
    localB->Gain[i + 12] = localP->Gain_Gain[i] * localB->MathFunction2[3];
  }

  /* End of Gain: '<S59>/Gain' */

  /* Abs: '<S56>/Abs' */
  localB->Abs_j = fabs(rtu_pre_p22);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   */
  localB->Compare_k = (uint8_T)(localB->Abs_j >=
    localP->CompareToConstant_const_k);

  /* Switch: '<S56>/Switch' incorporates:
   *  Constant: '<S56>/Constant'
   */
  if (localB->Compare_k >= localP->Switch_Threshold_e) {
    localB->Switch_a = rtu_pre_p22;
  } else {
    localB->Switch_a = localP->Constant_Value_m;
  }

  /* End of Switch: '<S56>/Switch' */

  /* SignalConversion: '<S59>/TmpSignal ConversionAtMath Function1Inport1' */
  localB->TmpSignalConversionAtMathFunction1Inport1[0] = rtu_pre_p21;
  localB->TmpSignalConversionAtMathFunction1Inport1[1] = localB->Switch_a;
  localB->TmpSignalConversionAtMathFunction1Inport1[2] = rtu_pre_p23;
  localB->TmpSignalConversionAtMathFunction1Inport1[3] = rtu_pre_p24;

  /* Math: '<S59>/Math Function1' */
  localB->MathFunction1[0] = localB->TmpSignalConversionAtMathFunction1Inport1[0];
  localB->MathFunction1[1] = localB->TmpSignalConversionAtMathFunction1Inport1[1];
  localB->MathFunction1[2] = localB->TmpSignalConversionAtMathFunction1Inport1[2];
  localB->MathFunction1[3] = localB->TmpSignalConversionAtMathFunction1Inport1[3];

  /* Gain: '<S59>/Gain1' */
  for (i = 0; i < 4; i++) {
    localB->Gain1[i] = localP->Gain1_Gain[i] * localB->MathFunction1[0];
    localB->Gain1[i + 4] = localP->Gain1_Gain[i] * localB->MathFunction1[1];
    localB->Gain1[i + 8] = localP->Gain1_Gain[i] * localB->MathFunction1[2];
    localB->Gain1[i + 12] = localP->Gain1_Gain[i] * localB->MathFunction1[3];
  }

  /* End of Gain: '<S59>/Gain1' */

  /* Abs: '<S57>/Abs' */
  localB->Abs_f = fabs(rtu_pre_p33);

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   */
  localB->Compare_g = (uint8_T)(localB->Abs_f >=
    localP->CompareToConstant_const_m);

  /* Switch: '<S57>/Switch' incorporates:
   *  Constant: '<S57>/Constant'
   */
  if (localB->Compare_g >= localP->Switch_Threshold_p) {
    localB->Switch_e = rtu_pre_p33;
  } else {
    localB->Switch_e = localP->Constant_Value_e;
  }

  /* End of Switch: '<S57>/Switch' */

  /* SignalConversion: '<S59>/TmpSignal ConversionAtMath Function4Inport1' */
  localB->TmpSignalConversionAtMathFunction4Inport1[0] = rtu_pre_p31;
  localB->TmpSignalConversionAtMathFunction4Inport1[1] = rtu_pre_p32;
  localB->TmpSignalConversionAtMathFunction4Inport1[2] = localB->Switch_e;
  localB->TmpSignalConversionAtMathFunction4Inport1[3] = rtu_pre_p34;

  /* Math: '<S59>/Math Function4' */
  localB->MathFunction4[0] = localB->TmpSignalConversionAtMathFunction4Inport1[0];
  localB->MathFunction4[1] = localB->TmpSignalConversionAtMathFunction4Inport1[1];
  localB->MathFunction4[2] = localB->TmpSignalConversionAtMathFunction4Inport1[2];
  localB->MathFunction4[3] = localB->TmpSignalConversionAtMathFunction4Inport1[3];

  /* Gain: '<S59>/Gain2' */
  for (i = 0; i < 4; i++) {
    localB->Gain2[i] = localP->Gain2_Gain[i] * localB->MathFunction4[0];
    localB->Gain2[i + 4] = localP->Gain2_Gain[i] * localB->MathFunction4[1];
    localB->Gain2[i + 8] = localP->Gain2_Gain[i] * localB->MathFunction4[2];
    localB->Gain2[i + 12] = localP->Gain2_Gain[i] * localB->MathFunction4[3];
  }

  /* End of Gain: '<S59>/Gain2' */

  /* Abs: '<S58>/Abs' */
  localB->Abs_i = fabs(rtu_pre_p44);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   */
  localB->Compare_n = (uint8_T)(localB->Abs_i >=
    localP->CompareToConstant_const_o);

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/Constant'
   */
  if (localB->Compare_n >= localP->Switch_Threshold_b) {
    localB->Switch_i = rtu_pre_p44;
  } else {
    localB->Switch_i = localP->Constant_Value_d;
  }

  /* End of Switch: '<S58>/Switch' */

  /* SignalConversion: '<S59>/TmpSignal ConversionAtMath Function3Inport1' */
  localB->TmpSignalConversionAtMathFunction3Inport1[0] = rtu_pre_p41;
  localB->TmpSignalConversionAtMathFunction3Inport1[1] = rtu_pre_p42;
  localB->TmpSignalConversionAtMathFunction3Inport1[2] = rtu_pre_p43;
  localB->TmpSignalConversionAtMathFunction3Inport1[3] = localB->Switch_i;

  /* Math: '<S59>/Math Function3' */
  localB->MathFunction3[0] = localB->TmpSignalConversionAtMathFunction3Inport1[0];
  localB->MathFunction3[1] = localB->TmpSignalConversionAtMathFunction3Inport1[1];
  localB->MathFunction3[2] = localB->TmpSignalConversionAtMathFunction3Inport1[2];
  localB->MathFunction3[3] = localB->TmpSignalConversionAtMathFunction3Inport1[3];

  /* Gain: '<S59>/Gain3' */
  for (i = 0; i < 4; i++) {
    localB->Gain3[i] = localP->Gain3_Gain[i] * localB->MathFunction3[0];
    localB->Gain3[i + 4] = localP->Gain3_Gain[i] * localB->MathFunction3[1];
    localB->Gain3[i + 8] = localP->Gain3_Gain[i] * localB->MathFunction3[2];
    localB->Gain3[i + 12] = localP->Gain3_Gain[i] * localB->MathFunction3[3];
  }

  /* End of Gain: '<S59>/Gain3' */

  /* Sum: '<S59>/Add' */
  for (i = 0; i < 16; i++) {
    localB->Add[i] = ((localB->Gain[i] + localB->Gain1[i]) + localB->Gain2[i]) +
      localB->Gain3[i];
  }

  /* End of Sum: '<S59>/Add' */

  /* Math: '<S63>/Math Function1' incorporates:
   *  Constant: '<S60>/H'
   */
  for (i = 0; i < 2; i++) {
    localB->X2[i << 2] = localP->H_Value[i];
    localB->X2[1 + (i << 2)] = localP->H_Value[i + 2];
    localB->X2[2 + (i << 2)] = localP->H_Value[i + 4];
    localB->X2[3 + (i << 2)] = localP->H_Value[i + 6];
  }

  /* End of Math: '<S63>/Math Function1' */

  /* Product: '<S63>/Divide1' */
  memcpy(&tmp[0], &localB->Add[0], sizeof(real_T) << 4U);
  memcpy(&tmp_0[0], &localB->X2[0], sizeof(real_T) << 3U);
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 2; i_0++) {
      localB->X2_p[i + (i_0 << 2)] = 0.0;
      localB->X2_p[i + (i_0 << 2)] += tmp_0[i_0 << 2] * tmp[i];
      localB->X2_p[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 1] * tmp[i + 4];
      localB->X2_p[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 2] * tmp[i + 8];
      localB->X2_p[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 3] * tmp[i + 12];
    }
  }

  /* End of Product: '<S63>/Divide1' */

  /* Math: '<S63>/Math Function' incorporates:
   *  Constant: '<S60>/H'
   */
  for (i = 0; i < 2; i++) {
    localB->X2_f[i << 2] = localP->H_Value[i];
    localB->X2_f[1 + (i << 2)] = localP->H_Value[i + 2];
    localB->X2_f[2 + (i << 2)] = localP->H_Value[i + 4];
    localB->X2_f[3 + (i << 2)] = localP->H_Value[i + 6];
  }

  /* End of Math: '<S63>/Math Function' */

  /* Product: '<S63>/Divide2' incorporates:
   *  Constant: '<S60>/H'
   */
  memcpy(&tmp[0], &localB->Add[0], sizeof(real_T) << 4U);
  memcpy(&tmp_0[0], &localB->X2_f[0], sizeof(real_T) << 3U);
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 2; i_0++) {
      v1[i + (i_0 << 2)] = 0.0;
      v1[i + (i_0 << 2)] += tmp_0[i_0 << 2] * tmp[i];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 1] * tmp[i + 4];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 2] * tmp[i + 8];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 3] * tmp[i + 12];
    }
  }

  memcpy(&tmp_1[0], &localP->H_Value[0], sizeof(real_T) << 3U);
  for (i = 0; i < 2; i++) {
    for (i_0 = 0; i_0 < 2; i_0++) {
      localB->Divide2[i + (i_0 << 1)] = 0.0;
      localB->Divide2[i + (i_0 << 1)] += v1[i_0 << 2] * tmp_1[i];
      localB->Divide2[i + (i_0 << 1)] += v1[(i_0 << 2) + 1] * tmp_1[i + 2];
      localB->Divide2[i + (i_0 << 1)] += v1[(i_0 << 2) + 2] * tmp_1[i + 4];
      localB->Divide2[i + (i_0 << 1)] += v1[(i_0 << 2) + 3] * tmp_1[i + 6];
    }
  }

  /* End of Product: '<S63>/Divide2' */

  /* SignalConversion: '<S62>/TmpSignal ConversionAtMath Function2Inport1' */
  localB->TmpSignalConversionAtMathFunction2Inport1_a[0] = rtu_R11;
  localB->TmpSignalConversionAtMathFunction2Inport1_a[1] = rtu_R12;

  /* Math: '<S62>/Math Function2' */
  localB->MathFunction2_m[0] =
    localB->TmpSignalConversionAtMathFunction2Inport1_a[0];
  localB->MathFunction2_m[1] =
    localB->TmpSignalConversionAtMathFunction2Inport1_a[1];

  /* Gain: '<S62>/Gain' */
  localB->Gain_g[0] = localP->Gain_Gain_l[0] * localB->MathFunction2_m[0];
  localB->Gain_g[2] = localP->Gain_Gain_l[0] * localB->MathFunction2_m[1];
  localB->Gain_g[1] = localP->Gain_Gain_l[1] * localB->MathFunction2_m[0];
  localB->Gain_g[3] = localP->Gain_Gain_l[1] * localB->MathFunction2_m[1];

  /* SignalConversion: '<S62>/TmpSignal ConversionAtMath Function1Inport1' */
  localB->TmpSignalConversionAtMathFunction1Inport1_a[0] = rtu_R21;
  localB->TmpSignalConversionAtMathFunction1Inport1_a[1] = rtu_R22;

  /* Math: '<S62>/Math Function1' */
  localB->MathFunction1_d[0] =
    localB->TmpSignalConversionAtMathFunction1Inport1_a[0];
  localB->MathFunction1_d[1] =
    localB->TmpSignalConversionAtMathFunction1Inport1_a[1];

  /* Gain: '<S62>/Gain1' */
  localB->Gain1_p[0] = localP->Gain1_Gain_k[0] * localB->MathFunction1_d[0];
  localB->Gain1_p[2] = localP->Gain1_Gain_k[0] * localB->MathFunction1_d[1];
  localB->Gain1_p[1] = localP->Gain1_Gain_k[1] * localB->MathFunction1_d[0];
  localB->Gain1_p[3] = localP->Gain1_Gain_k[1] * localB->MathFunction1_d[1];

  /* Sum: '<S62>/Add' */
  localB->Add_c[0] = localB->Gain_g[0] + localB->Gain1_p[0];
  localB->Add_c[1] = localB->Gain_g[1] + localB->Gain1_p[1];
  localB->Add_c[2] = localB->Gain_g[2] + localB->Gain1_p[2];
  localB->Add_c[3] = localB->Gain_g[3] + localB->Gain1_p[3];

  /* Sum: '<S63>/Subtract' */
  localB->X2_k[0] = localB->Divide2[0] + localB->Add_c[0];
  localB->X2_k[1] = localB->Divide2[1] + localB->Add_c[1];
  localB->X2_k[2] = localB->Divide2[2] + localB->Add_c[2];
  localB->X2_k[3] = localB->Divide2[3] + localB->Add_c[3];

  /* Product: '<S63>/Divide' */
  rt_mrdivide_U1d4x2_U2d2x2_Yd4x2_snf(localB->X2_p, localB->X2_k, localB->K4X2);

  /* Product: '<S22>/Divide1' incorporates:
   *  Constant: '<S60>/H'
   */
  for (i = 0; i < 8; i++) {
    tmp_0[i] = localB->K4X2[i];
    tmp_1[i] = localP->H_Value[i];
  }

  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 4; i_0++) {
      localB->Divide1[i + (i_0 << 2)] = 0.0;
      localB->Divide1[i + (i_0 << 2)] += tmp_1[i_0 << 1] * tmp_0[i];
      localB->Divide1[i + (i_0 << 2)] += tmp_1[(i_0 << 1) + 1] * tmp_0[i + 4];
    }
  }

  for (i = 0; i < 16; i++) {
    /* Sum: '<S22>/Subtract2' incorporates:
     *  Constant: '<S22>/I'
     */
    localB->X4[i] = localP->I_Value[i] - localB->Divide1[i];

    /* Product: '<S22>/Divide2' */
    tmp[i] = localB->X4[i];
    tmp_2[i] = localB->Add[i];
  }

  /* End of Product: '<S22>/Divide1' */

  /* Product: '<S22>/Divide2' */
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 4; i_0++) {
      localB->P4x4[i + (i_0 << 2)] = 0.0;
      localB->P4x4[i + (i_0 << 2)] += tmp_2[i_0 << 2] * tmp[i];
      localB->P4x4[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 1] * tmp[i + 4];
      localB->P4x4[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 2] * tmp[i + 8];
      localB->P4x4[i + (i_0 << 2)] += tmp_2[(i_0 << 2) + 3] * tmp[i + 12];
    }
  }

  /* Product: '<S22>/Product' incorporates:
   *  Constant: '<S22>/Constant'
   */
  memcpy(&tmp[0], &localB->P4x4[0], sizeof(real_T) << 4U);
  unnamed_idx_0 = localP->Constant_Value_i[0];
  unnamed_idx_1 = localP->Constant_Value_i[1];
  unnamed_idx_2 = localP->Constant_Value_i[2];
  unnamed_idx_3 = localP->Constant_Value_i[3];
  for (i = 0; i < 4; i++) {
    tmp_5 = tmp[i] * unnamed_idx_0;
    tmp_5 += tmp[i + 4] * unnamed_idx_1;
    tmp_5 += tmp[i + 8] * unnamed_idx_2;
    tmp_5 += tmp[i + 12] * unnamed_idx_3;
    tmp_3[i] = tmp_5;
  }

  localB->Product[0] = tmp_3[0];
  localB->Product[1] = tmp_3[1];
  localB->Product[2] = tmp_3[2];
  localB->Product[3] = tmp_3[3];

  /* End of Product: '<S22>/Product' */

  /* SignalConversion: '<S22>/OutportBufferForP21' */
  localB->OutportBufferForP21 = localB->Product[1];

  /* Product: '<S22>/Product1' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  memcpy(&tmp[0], &localB->P4x4[0], sizeof(real_T) << 4U);
  unnamed_idx_0 = localP->Constant1_Value[0];
  unnamed_idx_1 = localP->Constant1_Value[1];
  unnamed_idx_2 = localP->Constant1_Value[2];
  unnamed_idx_3 = localP->Constant1_Value[3];
  for (i = 0; i < 4; i++) {
    tmp_5 = tmp[i] * unnamed_idx_0;
    tmp_5 += tmp[i + 4] * unnamed_idx_1;
    tmp_5 += tmp[i + 8] * unnamed_idx_2;
    tmp_5 += tmp[i + 12] * unnamed_idx_3;
    tmp_3[i] = tmp_5;
  }

  localB->Product1[0] = tmp_3[0];
  localB->Product1[1] = tmp_3[1];
  localB->Product1[2] = tmp_3[2];
  localB->Product1[3] = tmp_3[3];

  /* End of Product: '<S22>/Product1' */

  /* SignalConversion: '<S22>/OutportBufferForP22' */
  localB->OutportBufferForP22 = localB->Product1[1];

  /* Product: '<S22>/Product2' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  memcpy(&tmp[0], &localB->P4x4[0], sizeof(real_T) << 4U);
  unnamed_idx_0 = localP->Constant2_Value[0];
  unnamed_idx_1 = localP->Constant2_Value[1];
  unnamed_idx_2 = localP->Constant2_Value[2];
  unnamed_idx_3 = localP->Constant2_Value[3];
  for (i = 0; i < 4; i++) {
    tmp_5 = tmp[i] * unnamed_idx_0;
    tmp_5 += tmp[i + 4] * unnamed_idx_1;
    tmp_5 += tmp[i + 8] * unnamed_idx_2;
    tmp_5 += tmp[i + 12] * unnamed_idx_3;
    tmp_3[i] = tmp_5;
  }

  localB->Product2[0] = tmp_3[0];
  localB->Product2[1] = tmp_3[1];
  localB->Product2[2] = tmp_3[2];
  localB->Product2[3] = tmp_3[3];

  /* End of Product: '<S22>/Product2' */

  /* SignalConversion: '<S22>/OutportBufferForP23' */
  localB->OutportBufferForP23 = localB->Product2[1];

  /* Product: '<S22>/Product3' incorporates:
   *  Constant: '<S22>/Constant3'
   */
  memcpy(&tmp[0], &localB->P4x4[0], sizeof(real_T) << 4U);
  unnamed_idx_0 = localP->Constant3_Value[0];
  unnamed_idx_1 = localP->Constant3_Value[1];
  unnamed_idx_2 = localP->Constant3_Value[2];
  unnamed_idx_3 = localP->Constant3_Value[3];
  for (i = 0; i < 4; i++) {
    tmp_5 = tmp[i] * unnamed_idx_0;
    tmp_5 += tmp[i + 4] * unnamed_idx_1;
    tmp_5 += tmp[i + 8] * unnamed_idx_2;
    tmp_5 += tmp[i + 12] * unnamed_idx_3;
    tmp_3[i] = tmp_5;
  }

  localB->Product3[0] = tmp_3[0];
  localB->Product3[1] = tmp_3[1];
  localB->Product3[2] = tmp_3[2];
  localB->Product3[3] = tmp_3[3];

  /* End of Product: '<S22>/Product3' */

  /* SignalConversion: '<S22>/OutportBufferForP24' */
  localB->OutportBufferForP24 = localB->Product3[1];

  /* SignalConversion: '<S22>/OutportBufferForP31' */
  localB->OutportBufferForP31 = localB->Product[2];

  /* SignalConversion: '<S22>/OutportBufferForP32' */
  localB->OutportBufferForP32 = localB->Product1[2];

  /* SignalConversion: '<S22>/OutportBufferForP33' */
  localB->OutportBufferForP33 = localB->Product2[2];

  /* SignalConversion: '<S22>/OutportBufferForP34' */
  localB->OutportBufferForP34 = localB->Product3[2];

  /* SignalConversion: '<S22>/OutportBufferForP41' */
  localB->OutportBufferForP41 = localB->Product[3];

  /* SignalConversion: '<S22>/OutportBufferForP42' */
  localB->OutportBufferForP42 = localB->Product1[3];

  /* SignalConversion: '<S22>/OutportBufferForP43' */
  localB->OutportBufferForP43 = localB->Product2[3];

  /* SignalConversion: '<S22>/OutportBufferForP44' */
  localB->OutportBufferForP44 = localB->Product3[3];

  /* Gain: '<S61>/Gain' */
  localB->x_predict[0] = localP->Gain_Gain_n * rtu_Pre_x;
  localB->x_predict[1] = localP->Gain_Gain_n * rtu_Pre_vx;
  localB->x_predict[2] = localP->Gain_Gain_n * rtu_Pre_y;
  localB->x_predict[3] = localP->Gain_Gain_n * rtu_Pre_vy;

  /* Product: '<S63>/Divide3' incorporates:
   *  Constant: '<S60>/H'
   */
  memcpy(&tmp_1[0], &localP->H_Value[0], sizeof(real_T) << 3U);
  unnamed_idx_0 = localB->x_predict[0];
  unnamed_idx_1 = localB->x_predict[1];
  unnamed_idx_2 = localB->x_predict[2];
  unnamed_idx_3 = localB->x_predict[3];
  for (i = 0; i < 2; i++) {
    tmp_5 = tmp_1[i] * unnamed_idx_0;
    tmp_5 += tmp_1[i + 2] * unnamed_idx_1;
    tmp_5 += tmp_1[i + 4] * unnamed_idx_2;
    tmp_5 += tmp_1[i + 6] * unnamed_idx_3;
    tmp_4[i] = tmp_5;
  }

  localB->Divide3[0] = tmp_4[0];
  localB->Divide3[1] = tmp_4[1];

  /* End of Product: '<S63>/Divide3' */

  /* Sum: '<S63>/Subtract2' */
  localB->Subtract2[0] = rtu_Mea_x - localB->Divide3[0];
  localB->Subtract2[1] = rtu_Mea_y - localB->Divide3[1];

  /* Product: '<S63>/Divide4' */
  memcpy(&tmp_0[0], &localB->K4X2[0], sizeof(real_T) << 3U);
  unnamed_idx_0 = localB->Subtract2[0];
  unnamed_idx_1 = localB->Subtract2[1];
  for (i = 0; i < 4; i++) {
    tmp_5 = tmp_0[i] * unnamed_idx_0;
    tmp_5 += tmp_0[i + 4] * unnamed_idx_1;
    tmp_3[i] = tmp_5;
  }

  localB->X1[0] = tmp_3[0];
  localB->X1[1] = tmp_3[1];
  localB->X1[2] = tmp_3[2];
  localB->X1[3] = tmp_3[3];

  /* End of Product: '<S63>/Divide4' */

  /* Sum: '<S63>/Subtract1' */
  localB->Subtract1[0] = localB->X1[0] + localB->x_predict[0];
  localB->Subtract1[1] = localB->X1[1] + localB->x_predict[1];
  localB->Subtract1[2] = localB->X1[2] + localB->x_predict[2];
  localB->Subtract1[3] = localB->X1[3] + localB->x_predict[3];

  /* SignalConversion: '<S22>/OutportBufferForRangeY' */
  localB->OutportBufferForRangeY = localB->Subtract1[2];

  /* SignalConversion: '<S22>/OutportBufferForVelX' */
  localB->Velocity_X = localB->Subtract1[1];

  /* SignalConversion: '<S22>/OutportBufferForVelY' */
  localB->Range_Y = localB->Subtract1[3];
}

void rt_mldivide_U1d2x2_U2d2_Yd2x1_snf(const real_T u0[4], const real_T u1[2],
  real_T y[2])
{
  real_T u0_0[4];
  real_T u1_0[2];
  int32_T TWO;
  int32_T r1;
  real_T a21;
  real_T a22;
  real_T d;
  u0_0[0] = u0[0];
  u0_0[1] = u0[1];
  u0_0[2] = u0[2];
  u0_0[3] = u0[3];
  u1_0[0] = u1[0];
  u1_0[1] = u1[1];
  TWO = 1;
  a21 = u0_0[1];
  a22 = fabs(a21);
  d = a22;
  a21 = u0_0[0];
  a22 = fabs(a21);
  a21 = a22;
  if (d > a21) {
    r1 = 1;
    TWO = 0;
  } else {
    r1 = 0;
  }

  a21 = u0_0[TWO];
  a22 = u0_0[r1];
  a21 /= a22;
  a22 = u0_0[2 + TWO] - u0_0[2 + r1] * a21;
  a21 = u1_0[TWO] - u1_0[r1] * a21;
  a21 /= a22;
  d = a21;
  a21 = u1_0[r1] - u0_0[2 + r1] * d;
  a22 = u0_0[r1];
  a21 /= a22;
  y[0] = a21;
  y[1] = d;
}

/* Start for function-call system: '<S17>/FusTrackUpdate.MDCal' */
void GlobalFusion_Fcn_FusTrackUpdateMDCal_Start
  (B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localB,
   P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localP)
{
  /* VirtualOutportStart for Outport: '<S21>/MD' */
  localB->Divide = localP->MD_Y0;
}

/* Output and update for function-call system: '<S17>/FusTrackUpdate.MDCal' */
void GlobalFusion_Fcn_FusTrackUpdateMDCal(real_T rtu_MeasureRx, real_T
  rtu_MeasureRy, real_T rtu_PredictRx, real_T rtu_PredictRy, real_T rtu_P11,
  real_T rtu_P12, real_T rtu_P13, real_T rtu_P14, real_T rtu_P22, real_T rtu_P21,
  real_T rtu_P23, real_T rtu_P24, real_T rtu_P33, real_T rtu_P31, real_T rtu_P32,
  real_T rtu_P34, real_T rtu_P44, real_T rtu_P41, real_T rtu_P42, real_T rtu_P43,
  real_T rtu_R11, real_T rtu_R12, real_T rtu_R21, real_T rtu_R22,
  B_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localB,
  P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *localP)
{
  real_T tmp[16];
  real_T tmp_0[8];
  real_T v1[8];
  real_T v1_0[2];
  int32_T i;
  int32_T i_0;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;

  /* Sum: '<S21>/Subtract' */
  localB->uX1[0] = rtu_MeasureRx - rtu_PredictRx;
  localB->uX1[1] = rtu_MeasureRy - rtu_PredictRy;

  /* Math: '<S21>/Math Function' */
  localB->uX2[0] = localB->uX1[0];
  localB->uX2[1] = localB->uX1[1];

  /* Abs: '<S48>/Abs' */
  localB->Abs = fabs(rtu_P11);

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   */
  localB->Compare = (uint8_T)(localB->Abs >= localP->CompareToConstant_const);

  /* Switch: '<S48>/Switch' incorporates:
   *  Constant: '<S48>/Constant'
   */
  if (localB->Compare >= localP->Switch_Threshold) {
    localB->Switch = rtu_P11;
  } else {
    localB->Switch = localP->Constant_Value_j;
  }

  /* End of Switch: '<S48>/Switch' */

  /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function2Inport1' */
  localB->TmpSignalConversionAtMathFunction2Inport1[0] = localB->Switch;
  localB->TmpSignalConversionAtMathFunction2Inport1[1] = rtu_P12;
  localB->TmpSignalConversionAtMathFunction2Inport1[2] = rtu_P13;
  localB->TmpSignalConversionAtMathFunction2Inport1[3] = rtu_P14;

  /* Math: '<S50>/Math Function2' */
  localB->MathFunction2[0] = localB->TmpSignalConversionAtMathFunction2Inport1[0];
  localB->MathFunction2[1] = localB->TmpSignalConversionAtMathFunction2Inport1[1];
  localB->MathFunction2[2] = localB->TmpSignalConversionAtMathFunction2Inport1[2];
  localB->MathFunction2[3] = localB->TmpSignalConversionAtMathFunction2Inport1[3];

  /* Gain: '<S50>/Gain' */
  for (i = 0; i < 4; i++) {
    localB->Gain[i] = localP->Gain_Gain[i] * localB->MathFunction2[0];
    localB->Gain[i + 4] = localP->Gain_Gain[i] * localB->MathFunction2[1];
    localB->Gain[i + 8] = localP->Gain_Gain[i] * localB->MathFunction2[2];
    localB->Gain[i + 12] = localP->Gain_Gain[i] * localB->MathFunction2[3];
  }

  /* End of Gain: '<S50>/Gain' */

  /* Abs: '<S45>/Abs' */
  localB->Abs_p = fabs(rtu_P22);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  localB->Compare_c = (uint8_T)(localB->Abs_p >=
    localP->CompareToConstant_const_d);

  /* Switch: '<S45>/Switch' incorporates:
   *  Constant: '<S45>/Constant'
   */
  if (localB->Compare_c >= localP->Switch_Threshold_d) {
    localB->Switch_k = rtu_P22;
  } else {
    localB->Switch_k = localP->Constant_Value;
  }

  /* End of Switch: '<S45>/Switch' */

  /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function1Inport1' */
  localB->TmpSignalConversionAtMathFunction1Inport1[0] = rtu_P21;
  localB->TmpSignalConversionAtMathFunction1Inport1[1] = localB->Switch_k;
  localB->TmpSignalConversionAtMathFunction1Inport1[2] = rtu_P23;
  localB->TmpSignalConversionAtMathFunction1Inport1[3] = rtu_P24;

  /* Math: '<S50>/Math Function1' */
  localB->MathFunction1[0] = localB->TmpSignalConversionAtMathFunction1Inport1[0];
  localB->MathFunction1[1] = localB->TmpSignalConversionAtMathFunction1Inport1[1];
  localB->MathFunction1[2] = localB->TmpSignalConversionAtMathFunction1Inport1[2];
  localB->MathFunction1[3] = localB->TmpSignalConversionAtMathFunction1Inport1[3];

  /* Gain: '<S50>/Gain1' */
  for (i = 0; i < 4; i++) {
    localB->Gain1[i] = localP->Gain1_Gain[i] * localB->MathFunction1[0];
    localB->Gain1[i + 4] = localP->Gain1_Gain[i] * localB->MathFunction1[1];
    localB->Gain1[i + 8] = localP->Gain1_Gain[i] * localB->MathFunction1[2];
    localB->Gain1[i + 12] = localP->Gain1_Gain[i] * localB->MathFunction1[3];
  }

  /* End of Gain: '<S50>/Gain1' */

  /* Abs: '<S46>/Abs' */
  localB->Abs_f = fabs(rtu_P33);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  localB->Compare_g = (uint8_T)(localB->Abs_f >=
    localP->CompareToConstant_const_b);

  /* Switch: '<S46>/Switch' incorporates:
   *  Constant: '<S46>/Constant'
   */
  if (localB->Compare_g >= localP->Switch_Threshold_c) {
    localB->Switch_f = rtu_P33;
  } else {
    localB->Switch_f = localP->Constant_Value_f;
  }

  /* End of Switch: '<S46>/Switch' */

  /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function4Inport1' */
  localB->TmpSignalConversionAtMathFunction4Inport1[0] = rtu_P31;
  localB->TmpSignalConversionAtMathFunction4Inport1[1] = rtu_P32;
  localB->TmpSignalConversionAtMathFunction4Inport1[2] = localB->Switch_f;
  localB->TmpSignalConversionAtMathFunction4Inport1[3] = rtu_P34;

  /* Math: '<S50>/Math Function4' */
  localB->MathFunction4[0] = localB->TmpSignalConversionAtMathFunction4Inport1[0];
  localB->MathFunction4[1] = localB->TmpSignalConversionAtMathFunction4Inport1[1];
  localB->MathFunction4[2] = localB->TmpSignalConversionAtMathFunction4Inport1[2];
  localB->MathFunction4[3] = localB->TmpSignalConversionAtMathFunction4Inport1[3];

  /* Gain: '<S50>/Gain2' */
  for (i = 0; i < 4; i++) {
    localB->Gain2[i] = localP->Gain2_Gain[i] * localB->MathFunction4[0];
    localB->Gain2[i + 4] = localP->Gain2_Gain[i] * localB->MathFunction4[1];
    localB->Gain2[i + 8] = localP->Gain2_Gain[i] * localB->MathFunction4[2];
    localB->Gain2[i + 12] = localP->Gain2_Gain[i] * localB->MathFunction4[3];
  }

  /* End of Gain: '<S50>/Gain2' */

  /* Abs: '<S47>/Abs' */
  localB->Abs_j = fabs(rtu_P44);

  /* RelationalOperator: '<S53>/Compare' incorporates:
   *  Constant: '<S53>/Constant'
   */
  localB->Compare_l = (uint8_T)(localB->Abs_j >=
    localP->CompareToConstant_const_o);

  /* Switch: '<S47>/Switch' incorporates:
   *  Constant: '<S47>/Constant'
   */
  if (localB->Compare_l >= localP->Switch_Threshold_j) {
    localB->Switch_ki = rtu_P44;
  } else {
    localB->Switch_ki = localP->Constant_Value_e;
  }

  /* End of Switch: '<S47>/Switch' */

  /* SignalConversion: '<S50>/TmpSignal ConversionAtMath Function3Inport1' */
  localB->TmpSignalConversionAtMathFunction3Inport1[0] = rtu_P41;
  localB->TmpSignalConversionAtMathFunction3Inport1[1] = rtu_P42;
  localB->TmpSignalConversionAtMathFunction3Inport1[2] = rtu_P43;
  localB->TmpSignalConversionAtMathFunction3Inport1[3] = localB->Switch_ki;

  /* Math: '<S50>/Math Function3' */
  localB->MathFunction3[0] = localB->TmpSignalConversionAtMathFunction3Inport1[0];
  localB->MathFunction3[1] = localB->TmpSignalConversionAtMathFunction3Inport1[1];
  localB->MathFunction3[2] = localB->TmpSignalConversionAtMathFunction3Inport1[2];
  localB->MathFunction3[3] = localB->TmpSignalConversionAtMathFunction3Inport1[3];

  /* Gain: '<S50>/Gain3' */
  for (i = 0; i < 4; i++) {
    localB->Gain3[i] = localP->Gain3_Gain[i] * localB->MathFunction3[0];
    localB->Gain3[i + 4] = localP->Gain3_Gain[i] * localB->MathFunction3[1];
    localB->Gain3[i + 8] = localP->Gain3_Gain[i] * localB->MathFunction3[2];
    localB->Gain3[i + 12] = localP->Gain3_Gain[i] * localB->MathFunction3[3];
  }

  /* End of Gain: '<S50>/Gain3' */

  /* Sum: '<S50>/Add' */
  for (i = 0; i < 16; i++) {
    localB->Add[i] = ((localB->Gain[i] + localB->Gain1[i]) + localB->Gain2[i]) +
      localB->Gain3[i];
  }

  /* End of Sum: '<S50>/Add' */

  /* Math: '<S21>/Math Function1' incorporates:
   *  Constant: '<S21>/H'
   */
  for (i = 0; i < 2; i++) {
    localB->X4[i << 2] = localP->H_Value[i];
    localB->X4[1 + (i << 2)] = localP->H_Value[i + 2];
    localB->X4[2 + (i << 2)] = localP->H_Value[i + 4];
    localB->X4[3 + (i << 2)] = localP->H_Value[i + 6];
  }

  /* End of Math: '<S21>/Math Function1' */

  /* Product: '<S21>/Divide1' incorporates:
   *  Constant: '<S21>/H'
   */
  memcpy(&tmp[0], &localB->Add[0], sizeof(real_T) << 4U);
  memcpy(&tmp_0[0], &localB->X4[0], sizeof(real_T) << 3U);
  for (i = 0; i < 4; i++) {
    for (i_0 = 0; i_0 < 2; i_0++) {
      v1[i + (i_0 << 2)] = 0.0;
      v1[i + (i_0 << 2)] += tmp_0[i_0 << 2] * tmp[i];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 1] * tmp[i + 4];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 2] * tmp[i + 8];
      v1[i + (i_0 << 2)] += tmp_0[(i_0 << 2) + 3] * tmp[i + 12];
    }
  }

  memcpy(&tmp_0[0], &localP->H_Value[0], sizeof(real_T) << 3U);
  for (i = 0; i < 2; i++) {
    for (i_0 = 0; i_0 < 2; i_0++) {
      localB->uX2_d[i + (i_0 << 1)] = 0.0;
      localB->uX2_d[i + (i_0 << 1)] += v1[i_0 << 2] * tmp_0[i];
      localB->uX2_d[i + (i_0 << 1)] += v1[(i_0 << 2) + 1] * tmp_0[i + 2];
      localB->uX2_d[i + (i_0 << 1)] += v1[(i_0 << 2) + 2] * tmp_0[i + 4];
      localB->uX2_d[i + (i_0 << 1)] += v1[(i_0 << 2) + 3] * tmp_0[i + 6];
    }
  }

  /* End of Product: '<S21>/Divide1' */

  /* SignalConversion: '<S49>/TmpSignal ConversionAtMath Function2Inport1' */
  localB->TmpSignalConversionAtMathFunction2Inport1_a[0] = rtu_R11;
  localB->TmpSignalConversionAtMathFunction2Inport1_a[1] = rtu_R12;

  /* Math: '<S49>/Math Function2' */
  localB->MathFunction2_k[0] =
    localB->TmpSignalConversionAtMathFunction2Inport1_a[0];
  localB->MathFunction2_k[1] =
    localB->TmpSignalConversionAtMathFunction2Inport1_a[1];

  /* Gain: '<S49>/Gain' */
  localB->Gain_i[0] = localP->Gain_Gain_n[0] * localB->MathFunction2_k[0];
  localB->Gain_i[2] = localP->Gain_Gain_n[0] * localB->MathFunction2_k[1];
  localB->Gain_i[1] = localP->Gain_Gain_n[1] * localB->MathFunction2_k[0];
  localB->Gain_i[3] = localP->Gain_Gain_n[1] * localB->MathFunction2_k[1];

  /* SignalConversion: '<S49>/TmpSignal ConversionAtMath Function1Inport1' */
  localB->TmpSignalConversionAtMathFunction1Inport1_a[0] = rtu_R21;
  localB->TmpSignalConversionAtMathFunction1Inport1_a[1] = rtu_R22;

  /* Math: '<S49>/Math Function1' */
  localB->MathFunction1_j[0] =
    localB->TmpSignalConversionAtMathFunction1Inport1_a[0];
  localB->MathFunction1_j[1] =
    localB->TmpSignalConversionAtMathFunction1Inport1_a[1];

  /* Gain: '<S49>/Gain1' */
  localB->Gain1_p[0] = localP->Gain1_Gain_d[0] * localB->MathFunction1_j[0];
  localB->Gain1_p[2] = localP->Gain1_Gain_d[0] * localB->MathFunction1_j[1];
  localB->Gain1_p[1] = localP->Gain1_Gain_d[1] * localB->MathFunction1_j[0];
  localB->Gain1_p[3] = localP->Gain1_Gain_d[1] * localB->MathFunction1_j[1];

  /* Sum: '<S49>/Add' */
  localB->Add_g[0] = localB->Gain_i[0] + localB->Gain1_p[0];
  localB->Add_g[1] = localB->Gain_i[1] + localB->Gain1_p[1];
  localB->Add_g[2] = localB->Gain_i[2] + localB->Gain1_p[2];
  localB->Add_g[3] = localB->Gain_i[3] + localB->Gain1_p[3];

  /* Sum: '<S21>/Subtract1' */
  localB->uX2_a[0] = localB->uX2_d[0] + localB->Add_g[0];
  localB->uX2_a[1] = localB->uX2_d[1] + localB->Add_g[1];
  localB->uX2_a[2] = localB->uX2_d[2] + localB->Add_g[2];
  localB->uX2_a[3] = localB->uX2_d[3] + localB->Add_g[3];

  /* Product: '<S21>/Divide' */
  rt_mldivide_U1d2x2_U2d2_Yd2x1_snf(localB->uX2_a, localB->uX1, v1_0);
  unnamed_idx_0 = localB->uX2[0];
  unnamed_idx_1 = localB->uX2[1];
  unnamed_idx_0 *= v1_0[0];
  unnamed_idx_0 += unnamed_idx_1 * v1_0[1];
  localB->Divide = unnamed_idx_0;
}

/* Function for Chart: '<Root>/Fusion_Center' */
void Set_Data_Source(real_T data)
{
  /* Graphical Function 'Set_Data_Source': '<S17>:1367' */
  /* Transition: '<S17>:1369' */
  /* Transition: '<S17>:1372' */
  GlobalFusion_Fcn_DW.DataSource = (uint8_T)data;
}

/* Function for Chart: '<Root>/Fusion_Center' */
void Set_sampleTime(real_T data)
{
  /* Graphical Function 'Set_sampleTime': '<S17>:1374' */
  /* Transition: '<S17>:1377' */
  /* Transition: '<S17>:1378' */
  GlobalFusion_Fcn_DW.Sensor_sampleTime = data;
}

/* Function for Chart: '<Root>/Fusion_Center' */
void FusDataIni(void)
{
  /* Graphical Function 'FusDataIni': '<S17>:4084' */
  /* Transition: '<S17>:4088' */
  /* Transition: '<S17>:4089' */
  GlobalFusion_Fcn_DW.deltaT = GlobalFusion_Fcn_DW.Sensor_sampleTime -
    GlobalFusion_Fcn_DW.LastCalTime;
  GlobalFusion_Fcn_DW.k = 0U;
  GlobalFusion_Fcn_DW.n = 0U;
  GlobalFusion_Fcn_DW.m = 0U;
  memset(&GlobalFusion_Fcn_B.FusDataOut[0], 0, 3302U * sizeof(real_T));
  memset(&GlobalFusion_Fcn_DW.FusDataInternal[0], 0, 4191U * sizeof(real_T));

  /* Initial step */
  memset(&GlobalFusion_Fcn_DW.MeasureData[0], 0, 704U * sizeof(real_T));
  memset(&GlobalFusion_Fcn_DW.UpdateTrackFlag[0], 0, 127U * sizeof(real_T));
  GlobalFusion_Fcn_DW.TrackCounter = 0.0;
  GlobalFusion_Fcn_DW.Num_Out = 0U;

  /* Transition: '<S17>:4090' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
void FusTrackPredict(void)
{
  real_T tmp[4];
  real_T tmp_0[16];
  real_T tmp_1[16];
  real_T tmp_2[4];
  real_T v1[16];
  int32_T i;
  int32_T i_0;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  real_T unnamed_idx_2;
  real_T unnamed_idx_3;

  /* Graphical Function 'FusTrackPredict': '<S17>:3931' */
  /* Transition: '<S17>:3938' */
  while (GlobalFusion_Fcn_DW.k < GlobalFusion_Fcn_B.Num_Trg) {
    /* Transition: '<S17>:3939' */
    if (GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k] != 0.0)
    {
      /* Transition: '<S17>:3940' */
      /* Transition: '<S17>:3943' */
      /* Simulink Function 'Forecast': '<S17>:4059' */
      GlobalFusion_Fcn_B.Pre_x = GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_vx = GlobalFusion_Fcn_DW.FusDataInternal_temp[254 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_y = GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_vy = GlobalFusion_Fcn_DW.FusDataInternal_temp[508 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.deltaT = GlobalFusion_Fcn_DW.deltaT;
      GlobalFusion_Fcn_B.pre_p11 = GlobalFusion_Fcn_DW.FusDataInternal_temp[1397
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p12 = GlobalFusion_Fcn_DW.FusDataInternal_temp[1524
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p13 = GlobalFusion_Fcn_DW.FusDataInternal_temp[1651
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p14 = GlobalFusion_Fcn_DW.FusDataInternal_temp[1778
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p21 = GlobalFusion_Fcn_DW.FusDataInternal_temp[1905
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p22 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2032
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p23 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2159
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p24 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2286
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p31 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2413
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p32 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2540
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p33 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2667
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p34 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2794
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p41 = GlobalFusion_Fcn_DW.FusDataInternal_temp[2921
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p42 = GlobalFusion_Fcn_DW.FusDataInternal_temp[3048
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p43 = GlobalFusion_Fcn_DW.FusDataInternal_temp[3175
        + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p44 = GlobalFusion_Fcn_DW.FusDataInternal_temp[3302
        + GlobalFusion_Fcn_DW.k];

      /* Outputs for Function Call SubSystem: '<S17>/FusTrackPredict.Forecast' */
      /* Abs: '<S28>/Abs' */
      GlobalFusion_Fcn_B.Abs_a = fabs(GlobalFusion_Fcn_B.pre_p11);

      /* RelationalOperator: '<S35>/Compare' incorporates:
       *  Constant: '<S35>/Constant'
       */
      GlobalFusion_Fcn_B.Compare_ei = (uint8_T)(GlobalFusion_Fcn_B.Abs_a >=
        GlobalFusion_Fcn_P.CompareToConstant_const);

      /* Switch: '<S28>/Switch' incorporates:
       *  Constant: '<S28>/Constant'
       */
      if (GlobalFusion_Fcn_B.Compare_ei >= GlobalFusion_Fcn_P.Switch_Threshold_a)
      {
        GlobalFusion_Fcn_B.Switch_b = GlobalFusion_Fcn_B.pre_p11;
      } else {
        GlobalFusion_Fcn_B.Switch_b = GlobalFusion_Fcn_P.Constant_Value;
      }

      /* End of Switch: '<S28>/Switch' */

      /* Abs: '<S29>/Abs' */
      GlobalFusion_Fcn_B.Abs_n = fabs(GlobalFusion_Fcn_B.pre_p22);

      /* RelationalOperator: '<S36>/Compare' incorporates:
       *  Constant: '<S36>/Constant'
       */
      GlobalFusion_Fcn_B.Compare_h = (uint8_T)(GlobalFusion_Fcn_B.Abs_n >=
        GlobalFusion_Fcn_P.CompareToConstant_const_f);

      /* Switch: '<S29>/Switch' incorporates:
       *  Constant: '<S29>/Constant'
       */
      if (GlobalFusion_Fcn_B.Compare_h >= GlobalFusion_Fcn_P.Switch_Threshold_m)
      {
        GlobalFusion_Fcn_B.Switch_o = GlobalFusion_Fcn_B.pre_p22;
      } else {
        GlobalFusion_Fcn_B.Switch_o = GlobalFusion_Fcn_P.Constant_Value_c;
      }

      /* End of Switch: '<S29>/Switch' */

      /* Abs: '<S30>/Abs' */
      GlobalFusion_Fcn_B.Abs_g = fabs(GlobalFusion_Fcn_B.pre_p33);

      /* RelationalOperator: '<S37>/Compare' incorporates:
       *  Constant: '<S37>/Constant'
       */
      GlobalFusion_Fcn_B.Compare_o = (uint8_T)(GlobalFusion_Fcn_B.Abs_g >=
        GlobalFusion_Fcn_P.CompareToConstant_const_f4);

      /* Switch: '<S30>/Switch' incorporates:
       *  Constant: '<S30>/Constant'
       */
      if (GlobalFusion_Fcn_B.Compare_o >= GlobalFusion_Fcn_P.Switch_Threshold_a5)
      {
        GlobalFusion_Fcn_B.Switch_d = GlobalFusion_Fcn_B.pre_p33;
      } else {
        GlobalFusion_Fcn_B.Switch_d = GlobalFusion_Fcn_P.Constant_Value_h;
      }

      /* End of Switch: '<S30>/Switch' */

      /* Abs: '<S31>/Abs' */
      GlobalFusion_Fcn_B.Abs_j = fabs(GlobalFusion_Fcn_B.pre_p44);

      /* RelationalOperator: '<S38>/Compare' incorporates:
       *  Constant: '<S38>/Constant'
       */
      GlobalFusion_Fcn_B.Compare_a = (uint8_T)(GlobalFusion_Fcn_B.Abs_j >=
        GlobalFusion_Fcn_P.CompareToConstant_const_d);

      /* Switch: '<S31>/Switch' incorporates:
       *  Constant: '<S31>/Constant'
       */
      if (GlobalFusion_Fcn_B.Compare_a >= GlobalFusion_Fcn_P.Switch_Threshold_p)
      {
        GlobalFusion_Fcn_B.Switch_m = GlobalFusion_Fcn_B.pre_p44;
      } else {
        GlobalFusion_Fcn_B.Switch_m = GlobalFusion_Fcn_P.Constant_Value_i;
      }

      /* End of Switch: '<S31>/Switch' */

      /* SignalConversion: '<S41>/TmpSignal ConversionAtMath FunctionInport1' incorporates:
       *  Constant: '<S41>/Constant'
       *  Constant: '<S41>/Constant1'
       *  Constant: '<S41>/Constant3'
       */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[0] =
        GlobalFusion_Fcn_P.Constant_Value_d;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[1] =
        GlobalFusion_Fcn_B.deltaT;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[2] =
        GlobalFusion_Fcn_P.Constant3_Value_b;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[3] =
        GlobalFusion_Fcn_P.Constant1_Value_h;

      /* Math: '<S41>/Math Function' */
      GlobalFusion_Fcn_B.MathFunction[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[0];
      GlobalFusion_Fcn_B.MathFunction[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[1];
      GlobalFusion_Fcn_B.MathFunction[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[2];
      GlobalFusion_Fcn_B.MathFunction[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1[3];

      /* Product: '<S41>/Product' incorporates:
       *  Constant: '<S41>/Constant2'
       */
      tmp[0] = GlobalFusion_Fcn_P.Constant2_Value_l[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant2_Value_l[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant2_Value_l[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant2_Value_l[3];
      unnamed_idx_0 = GlobalFusion_Fcn_B.MathFunction[0];
      unnamed_idx_1 = GlobalFusion_Fcn_B.MathFunction[1];
      unnamed_idx_2 = GlobalFusion_Fcn_B.MathFunction[2];
      unnamed_idx_3 = GlobalFusion_Fcn_B.MathFunction[3];
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Product_p[i] = tmp[i] * unnamed_idx_0;
        GlobalFusion_Fcn_B.Product_p[i + 4] = tmp[i] * unnamed_idx_1;
        GlobalFusion_Fcn_B.Product_p[i + 8] = tmp[i] * unnamed_idx_2;
        GlobalFusion_Fcn_B.Product_p[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S41>/Product' */

      /* SignalConversion: '<S42>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
       *  Constant: '<S42>/Constant1'
       *  Constant: '<S42>/Constant3'
       *  Constant: '<S42>/Constant4'
       *  Constant: '<S42>/Constant6'
       */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[0] =
        GlobalFusion_Fcn_P.Constant3_Value_j;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[1] =
        GlobalFusion_Fcn_P.Constant1_Value_i;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[2] =
        GlobalFusion_Fcn_P.Constant6_Value;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[3] =
        GlobalFusion_Fcn_P.Constant4_Value;

      /* Math: '<S42>/Math Function1' */
      GlobalFusion_Fcn_B.MathFunction1[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[0];
      GlobalFusion_Fcn_B.MathFunction1[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[1];
      GlobalFusion_Fcn_B.MathFunction1[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[2];
      GlobalFusion_Fcn_B.MathFunction1[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1[3];

      /* Product: '<S42>/Product1' incorporates:
       *  Constant: '<S42>/Constant5'
       */
      tmp[0] = GlobalFusion_Fcn_P.Constant5_Value[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant5_Value[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant5_Value[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant5_Value[3];
      unnamed_idx_0 = GlobalFusion_Fcn_B.MathFunction1[0];
      unnamed_idx_1 = GlobalFusion_Fcn_B.MathFunction1[1];
      unnamed_idx_2 = GlobalFusion_Fcn_B.MathFunction1[2];
      unnamed_idx_3 = GlobalFusion_Fcn_B.MathFunction1[3];
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Product1_h[i] = tmp[i] * unnamed_idx_0;
        GlobalFusion_Fcn_B.Product1_h[i + 4] = tmp[i] * unnamed_idx_1;
        GlobalFusion_Fcn_B.Product1_h[i + 8] = tmp[i] * unnamed_idx_2;
        GlobalFusion_Fcn_B.Product1_h[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S42>/Product1' */

      /* SignalConversion: '<S43>/TmpSignal ConversionAtMath FunctionInport1' incorporates:
       *  Constant: '<S43>/Constant'
       *  Constant: '<S43>/Constant1'
       *  Constant: '<S43>/Constant3'
       */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[0] =
        GlobalFusion_Fcn_P.Constant3_Value_e;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[1] =
        GlobalFusion_Fcn_P.Constant1_Value_l;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[2] =
        GlobalFusion_Fcn_P.Constant_Value_p;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[3] =
        GlobalFusion_Fcn_B.deltaT;

      /* Math: '<S43>/Math Function' */
      GlobalFusion_Fcn_B.MathFunction_i[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[0];
      GlobalFusion_Fcn_B.MathFunction_i[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[1];
      GlobalFusion_Fcn_B.MathFunction_i[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[2];
      GlobalFusion_Fcn_B.MathFunction_i[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunctionInport1_o[3];

      /* Product: '<S43>/Product' incorporates:
       *  Constant: '<S43>/Constant2'
       */
      tmp[0] = GlobalFusion_Fcn_P.Constant2_Value_p[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant2_Value_p[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant2_Value_p[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant2_Value_p[3];
      unnamed_idx_0 = GlobalFusion_Fcn_B.MathFunction_i[0];
      unnamed_idx_1 = GlobalFusion_Fcn_B.MathFunction_i[1];
      unnamed_idx_2 = GlobalFusion_Fcn_B.MathFunction_i[2];
      unnamed_idx_3 = GlobalFusion_Fcn_B.MathFunction_i[3];
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Product_o[i] = tmp[i] * unnamed_idx_0;
        GlobalFusion_Fcn_B.Product_o[i + 4] = tmp[i] * unnamed_idx_1;
        GlobalFusion_Fcn_B.Product_o[i + 8] = tmp[i] * unnamed_idx_2;
        GlobalFusion_Fcn_B.Product_o[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S43>/Product' */

      /* SignalConversion: '<S44>/TmpSignal ConversionAtMath Function1Inport1' incorporates:
       *  Constant: '<S44>/Constant1'
       *  Constant: '<S44>/Constant3'
       *  Constant: '<S44>/Constant4'
       *  Constant: '<S44>/Constant6'
       */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[0] =
        GlobalFusion_Fcn_P.Constant3_Value_k;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[1] =
        GlobalFusion_Fcn_P.Constant1_Value_p;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[2] =
        GlobalFusion_Fcn_P.Constant6_Value_g;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[3] =
        GlobalFusion_Fcn_P.Constant4_Value_d;

      /* Math: '<S44>/Math Function1' */
      GlobalFusion_Fcn_B.MathFunction1_i[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[0];
      GlobalFusion_Fcn_B.MathFunction1_i[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[1];
      GlobalFusion_Fcn_B.MathFunction1_i[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[2];
      GlobalFusion_Fcn_B.MathFunction1_i[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_a[3];

      /* Product: '<S44>/Product1' incorporates:
       *  Constant: '<S44>/Constant5'
       */
      tmp[0] = GlobalFusion_Fcn_P.Constant5_Value_h[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant5_Value_h[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant5_Value_h[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant5_Value_h[3];
      unnamed_idx_0 = GlobalFusion_Fcn_B.MathFunction1_i[0];
      unnamed_idx_1 = GlobalFusion_Fcn_B.MathFunction1_i[1];
      unnamed_idx_2 = GlobalFusion_Fcn_B.MathFunction1_i[2];
      unnamed_idx_3 = GlobalFusion_Fcn_B.MathFunction1_i[3];
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Product1_e[i] = tmp[i] * unnamed_idx_0;
        GlobalFusion_Fcn_B.Product1_e[i + 4] = tmp[i] * unnamed_idx_1;
        GlobalFusion_Fcn_B.Product1_e[i + 8] = tmp[i] * unnamed_idx_2;
        GlobalFusion_Fcn_B.Product1_e[i + 12] = tmp[i] * unnamed_idx_3;
      }

      /* End of Product: '<S44>/Product1' */

      /* Sum: '<S39>/Add' */
      for (i = 0; i < 16; i++) {
        GlobalFusion_Fcn_B.Add[i] = ((GlobalFusion_Fcn_B.Product_p[i] +
          GlobalFusion_Fcn_B.Product1_h[i]) + GlobalFusion_Fcn_B.Product_o[i]) +
          GlobalFusion_Fcn_B.Product1_e[i];
      }

      /* End of Sum: '<S39>/Add' */

      /* SignalConversion: '<S32>/TmpSignal ConversionAtMath Function2Inport1' */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[0] =
        GlobalFusion_Fcn_B.Switch_b;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[1] =
        GlobalFusion_Fcn_B.pre_p12;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[2] =
        GlobalFusion_Fcn_B.pre_p13;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[3] =
        GlobalFusion_Fcn_B.pre_p14;

      /* Math: '<S32>/Math Function2' */
      GlobalFusion_Fcn_B.MathFunction2[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[0];
      GlobalFusion_Fcn_B.MathFunction2[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[1];
      GlobalFusion_Fcn_B.MathFunction2[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[2];
      GlobalFusion_Fcn_B.MathFunction2[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction2Inport1[3];

      /* Gain: '<S32>/Gain' */
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Gain_n[i] = GlobalFusion_Fcn_P.Gain_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction2[0];
        GlobalFusion_Fcn_B.Gain_n[i + 4] = GlobalFusion_Fcn_P.Gain_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction2[1];
        GlobalFusion_Fcn_B.Gain_n[i + 8] = GlobalFusion_Fcn_P.Gain_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction2[2];
        GlobalFusion_Fcn_B.Gain_n[i + 12] = GlobalFusion_Fcn_P.Gain_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction2[3];
      }

      /* End of Gain: '<S32>/Gain' */

      /* SignalConversion: '<S32>/TmpSignal ConversionAtMath Function1Inport1' */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[0] =
        GlobalFusion_Fcn_B.pre_p21;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[1] =
        GlobalFusion_Fcn_B.Switch_o;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[2] =
        GlobalFusion_Fcn_B.pre_p23;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[3] =
        GlobalFusion_Fcn_B.pre_p24;

      /* Math: '<S32>/Math Function1' */
      GlobalFusion_Fcn_B.MathFunction1_il[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[0];
      GlobalFusion_Fcn_B.MathFunction1_il[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[1];
      GlobalFusion_Fcn_B.MathFunction1_il[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[2];
      GlobalFusion_Fcn_B.MathFunction1_il[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction1Inport1_am[3];

      /* Gain: '<S32>/Gain1' */
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Gain1[i] = GlobalFusion_Fcn_P.Gain1_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction1_il[0];
        GlobalFusion_Fcn_B.Gain1[i + 4] = GlobalFusion_Fcn_P.Gain1_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction1_il[1];
        GlobalFusion_Fcn_B.Gain1[i + 8] = GlobalFusion_Fcn_P.Gain1_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction1_il[2];
        GlobalFusion_Fcn_B.Gain1[i + 12] = GlobalFusion_Fcn_P.Gain1_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction1_il[3];
      }

      /* End of Gain: '<S32>/Gain1' */

      /* SignalConversion: '<S32>/TmpSignal ConversionAtMath Function4Inport1' */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[0] =
        GlobalFusion_Fcn_B.pre_p31;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[1] =
        GlobalFusion_Fcn_B.pre_p32;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[2] =
        GlobalFusion_Fcn_B.Switch_d;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[3] =
        GlobalFusion_Fcn_B.pre_p34;

      /* Math: '<S32>/Math Function4' */
      GlobalFusion_Fcn_B.MathFunction4[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[0];
      GlobalFusion_Fcn_B.MathFunction4[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[1];
      GlobalFusion_Fcn_B.MathFunction4[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[2];
      GlobalFusion_Fcn_B.MathFunction4[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction4Inport1[3];

      /* Gain: '<S32>/Gain2' */
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Gain2[i] = GlobalFusion_Fcn_P.Gain2_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction4[0];
        GlobalFusion_Fcn_B.Gain2[i + 4] = GlobalFusion_Fcn_P.Gain2_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction4[1];
        GlobalFusion_Fcn_B.Gain2[i + 8] = GlobalFusion_Fcn_P.Gain2_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction4[2];
        GlobalFusion_Fcn_B.Gain2[i + 12] = GlobalFusion_Fcn_P.Gain2_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction4[3];
      }

      /* End of Gain: '<S32>/Gain2' */

      /* SignalConversion: '<S32>/TmpSignal ConversionAtMath Function3Inport1' */
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[0] =
        GlobalFusion_Fcn_B.pre_p41;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[1] =
        GlobalFusion_Fcn_B.pre_p42;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[2] =
        GlobalFusion_Fcn_B.pre_p43;
      GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[3] =
        GlobalFusion_Fcn_B.Switch_m;

      /* Math: '<S32>/Math Function3' */
      GlobalFusion_Fcn_B.MathFunction3[0] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[0];
      GlobalFusion_Fcn_B.MathFunction3[1] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[1];
      GlobalFusion_Fcn_B.MathFunction3[2] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[2];
      GlobalFusion_Fcn_B.MathFunction3[3] =
        GlobalFusion_Fcn_B.TmpSignalConversionAtMathFunction3Inport1[3];

      /* Gain: '<S32>/Gain3' */
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.Gain3[i] = GlobalFusion_Fcn_P.Gain3_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction3[0];
        GlobalFusion_Fcn_B.Gain3[i + 4] = GlobalFusion_Fcn_P.Gain3_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction3[1];
        GlobalFusion_Fcn_B.Gain3[i + 8] = GlobalFusion_Fcn_P.Gain3_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction3[2];
        GlobalFusion_Fcn_B.Gain3[i + 12] = GlobalFusion_Fcn_P.Gain3_Gain[i] *
          GlobalFusion_Fcn_B.MathFunction3[3];
      }

      /* End of Gain: '<S32>/Gain3' */

      /* Sum: '<S32>/Add' */
      for (i = 0; i < 16; i++) {
        GlobalFusion_Fcn_B.Add_d[i] = ((GlobalFusion_Fcn_B.Gain_n[i] +
          GlobalFusion_Fcn_B.Gain1[i]) + GlobalFusion_Fcn_B.Gain2[i]) +
          GlobalFusion_Fcn_B.Gain3[i];
      }

      /* End of Sum: '<S32>/Add' */

      /* Math: '<S34>/Math Function' */
      for (i = 0; i < 4; i++) {
        GlobalFusion_Fcn_B.MathFunction_g[i << 2] = GlobalFusion_Fcn_B.Add[i];
        GlobalFusion_Fcn_B.MathFunction_g[1 + (i << 2)] =
          GlobalFusion_Fcn_B.Add[i + 4];
        GlobalFusion_Fcn_B.MathFunction_g[2 + (i << 2)] =
          GlobalFusion_Fcn_B.Add[i + 8];
        GlobalFusion_Fcn_B.MathFunction_g[3 + (i << 2)] =
          GlobalFusion_Fcn_B.Add[i + 12];
      }

      /* End of Math: '<S34>/Math Function' */

      /* Product: '<S34>/Product1' */
      for (i = 0; i < 16; i++) {
        tmp_0[i] = GlobalFusion_Fcn_B.Add_d[i];
        tmp_1[i] = GlobalFusion_Fcn_B.MathFunction_g[i];
      }

      for (i = 0; i < 4; i++) {
        for (i_0 = 0; i_0 < 4; i_0++) {
          v1[i + (i_0 << 2)] = 0.0;
          v1[i + (i_0 << 2)] += tmp_1[i_0 << 2] * tmp_0[i];
          v1[i + (i_0 << 2)] += tmp_1[(i_0 << 2) + 1] * tmp_0[i + 4];
          v1[i + (i_0 << 2)] += tmp_1[(i_0 << 2) + 2] * tmp_0[i + 8];
          v1[i + (i_0 << 2)] += tmp_1[(i_0 << 2) + 3] * tmp_0[i + 12];
        }
      }

      memcpy(&tmp_0[0], &GlobalFusion_Fcn_B.Add[0], sizeof(real_T) << 4U);
      for (i = 0; i < 4; i++) {
        for (i_0 = 0; i_0 < 4; i_0++) {
          GlobalFusion_Fcn_B.P_predict[i + (i_0 << 2)] = 0.0;
          GlobalFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[i_0 << 2] * tmp_0[i];
          GlobalFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 1] *
            tmp_0[i + 4];
          GlobalFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 2] *
            tmp_0[i + 8];
          GlobalFusion_Fcn_B.P_predict[i + (i_0 << 2)] += v1[(i_0 << 2) + 3] *
            tmp_0[i + 12];
        }
      }

      for (i = 0; i < 16; i++) {
        /* Sum: '<S34>/Subtract2' incorporates:
         *  Constant: '<S34>/Q'
         */
        GlobalFusion_Fcn_B.P_predict_i[i] = GlobalFusion_Fcn_B.P_predict[i] +
          GlobalFusion_Fcn_P.Q_Value[i];

        /* Product: '<S20>/Product' */
        tmp_0[i] = GlobalFusion_Fcn_B.P_predict_i[i];
      }

      /* End of Product: '<S34>/Product1' */

      /* Product: '<S20>/Product' incorporates:
       *  Constant: '<S20>/Constant'
       */
      tmp[0] = GlobalFusion_Fcn_P.Constant_Value_g[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant_Value_g[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant_Value_g[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant_Value_g[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_2[i] = unnamed_idx_0;
      }

      GlobalFusion_Fcn_B.Product_f[0] = tmp_2[0];
      GlobalFusion_Fcn_B.Product_f[1] = tmp_2[1];
      GlobalFusion_Fcn_B.Product_f[2] = tmp_2[2];
      GlobalFusion_Fcn_B.Product_f[3] = tmp_2[3];

      /* SignalConversion: '<S20>/OutportBufferForP21' */
      GlobalFusion_Fcn_B.OutportBufferForP21 = GlobalFusion_Fcn_B.Product_f[1];

      /* Product: '<S20>/Product1' incorporates:
       *  Constant: '<S20>/Constant1'
       */
      memcpy(&tmp_0[0], &GlobalFusion_Fcn_B.P_predict_i[0], sizeof(real_T) << 4U);
      tmp[0] = GlobalFusion_Fcn_P.Constant1_Value_d[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant1_Value_d[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant1_Value_d[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant1_Value_d[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_2[i] = unnamed_idx_0;
      }

      GlobalFusion_Fcn_B.Product1_j[0] = tmp_2[0];
      GlobalFusion_Fcn_B.Product1_j[1] = tmp_2[1];
      GlobalFusion_Fcn_B.Product1_j[2] = tmp_2[2];
      GlobalFusion_Fcn_B.Product1_j[3] = tmp_2[3];

      /* End of Product: '<S20>/Product1' */

      /* SignalConversion: '<S20>/OutportBufferForP22' */
      GlobalFusion_Fcn_B.OutportBufferForP22 = GlobalFusion_Fcn_B.Product1_j[1];

      /* Product: '<S20>/Product2' incorporates:
       *  Constant: '<S20>/Constant2'
       */
      memcpy(&tmp_0[0], &GlobalFusion_Fcn_B.P_predict_i[0], sizeof(real_T) << 4U);
      tmp[0] = GlobalFusion_Fcn_P.Constant2_Value[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant2_Value[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant2_Value[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant2_Value[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_2[i] = unnamed_idx_0;
      }

      GlobalFusion_Fcn_B.Product2[0] = tmp_2[0];
      GlobalFusion_Fcn_B.Product2[1] = tmp_2[1];
      GlobalFusion_Fcn_B.Product2[2] = tmp_2[2];
      GlobalFusion_Fcn_B.Product2[3] = tmp_2[3];

      /* End of Product: '<S20>/Product2' */

      /* SignalConversion: '<S20>/OutportBufferForP23' */
      GlobalFusion_Fcn_B.OutportBufferForP23 = GlobalFusion_Fcn_B.Product2[1];

      /* Product: '<S20>/Product3' incorporates:
       *  Constant: '<S20>/Constant3'
       */
      memcpy(&tmp_0[0], &GlobalFusion_Fcn_B.P_predict_i[0], sizeof(real_T) << 4U);
      tmp[0] = GlobalFusion_Fcn_P.Constant3_Value[0];
      tmp[1] = GlobalFusion_Fcn_P.Constant3_Value[1];
      tmp[2] = GlobalFusion_Fcn_P.Constant3_Value[2];
      tmp[3] = GlobalFusion_Fcn_P.Constant3_Value[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_2[i] = unnamed_idx_0;
      }

      GlobalFusion_Fcn_B.Product3[0] = tmp_2[0];
      GlobalFusion_Fcn_B.Product3[1] = tmp_2[1];
      GlobalFusion_Fcn_B.Product3[2] = tmp_2[2];
      GlobalFusion_Fcn_B.Product3[3] = tmp_2[3];

      /* End of Product: '<S20>/Product3' */

      /* SignalConversion: '<S20>/OutportBufferForP24' */
      GlobalFusion_Fcn_B.OutportBufferForP24 = GlobalFusion_Fcn_B.Product3[1];

      /* SignalConversion: '<S20>/OutportBufferForP31' */
      GlobalFusion_Fcn_B.OutportBufferForP31 = GlobalFusion_Fcn_B.Product_f[2];

      /* SignalConversion: '<S20>/OutportBufferForP32' */
      GlobalFusion_Fcn_B.OutportBufferForP32 = GlobalFusion_Fcn_B.Product1_j[2];

      /* SignalConversion: '<S20>/OutportBufferForP33' */
      GlobalFusion_Fcn_B.OutportBufferForP33 = GlobalFusion_Fcn_B.Product2[2];

      /* SignalConversion: '<S20>/OutportBufferForP34' */
      GlobalFusion_Fcn_B.OutportBufferForP34 = GlobalFusion_Fcn_B.Product3[2];

      /* SignalConversion: '<S20>/OutportBufferForP41' */
      GlobalFusion_Fcn_B.OutportBufferForP41 = GlobalFusion_Fcn_B.Product_f[3];

      /* SignalConversion: '<S20>/OutportBufferForP42' */
      GlobalFusion_Fcn_B.OutportBufferForP42 = GlobalFusion_Fcn_B.Product1_j[3];

      /* SignalConversion: '<S20>/OutportBufferForP43' */
      GlobalFusion_Fcn_B.OutportBufferForP43 = GlobalFusion_Fcn_B.Product2[3];

      /* SignalConversion: '<S20>/OutportBufferForP44' */
      GlobalFusion_Fcn_B.OutportBufferForP44 = GlobalFusion_Fcn_B.Product3[3];

      /* SignalConversion: '<S34>/TmpSignal ConversionAtProductInport2' */
      GlobalFusion_Fcn_B.X_k4x1[0] = GlobalFusion_Fcn_B.Pre_x;
      GlobalFusion_Fcn_B.X_k4x1[1] = GlobalFusion_Fcn_B.Pre_vx;
      GlobalFusion_Fcn_B.X_k4x1[2] = GlobalFusion_Fcn_B.Pre_y;
      GlobalFusion_Fcn_B.X_k4x1[3] = GlobalFusion_Fcn_B.Pre_vy;

      /* Product: '<S34>/Product' */
      memcpy(&tmp_0[0], &GlobalFusion_Fcn_B.Add[0], sizeof(real_T) << 4U);
      tmp[0] = GlobalFusion_Fcn_B.X_k4x1[0];
      tmp[1] = GlobalFusion_Fcn_B.X_k4x1[1];
      tmp[2] = GlobalFusion_Fcn_B.X_k4x1[2];
      tmp[3] = GlobalFusion_Fcn_B.X_k4x1[3];
      for (i = 0; i < 4; i++) {
        unnamed_idx_0 = tmp_0[i] * tmp[0];
        unnamed_idx_0 += tmp_0[i + 4] * tmp[1];
        unnamed_idx_0 += tmp_0[i + 8] * tmp[2];
        unnamed_idx_0 += tmp_0[i + 12] * tmp[3];
        tmp_2[i] = unnamed_idx_0;
      }

      GlobalFusion_Fcn_B.x_predict4x1[0] = tmp_2[0];
      GlobalFusion_Fcn_B.x_predict4x1[1] = tmp_2[1];
      GlobalFusion_Fcn_B.x_predict4x1[2] = tmp_2[2];
      GlobalFusion_Fcn_B.x_predict4x1[3] = tmp_2[3];

      /* End of Product: '<S34>/Product' */

      /* SignalConversion: '<S20>/OutportBufferForRangeY' */
      GlobalFusion_Fcn_B.Range_Y = GlobalFusion_Fcn_B.x_predict4x1[2];

      /* SignalConversion: '<S20>/OutportBufferForVelX' */
      GlobalFusion_Fcn_B.Velocity_X = GlobalFusion_Fcn_B.x_predict4x1[1];

      /* SignalConversion: '<S20>/OutportBufferForVelY' */
      GlobalFusion_Fcn_B.Velocity_Y = GlobalFusion_Fcn_B.x_predict4x1[3];

      /* End of Outputs for SubSystem: '<S17>/FusTrackPredict.Forecast' */
      GlobalFusion_Fcn_DW.FusDataInternal[127 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.x_predict4x1[0];
      GlobalFusion_Fcn_DW.FusDataInternal[254 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Velocity_X;
      GlobalFusion_Fcn_DW.FusDataInternal[381 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Range_Y;
      GlobalFusion_Fcn_DW.FusDataInternal[508 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Velocity_Y;
      GlobalFusion_Fcn_DW.FusDataInternal[1397 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Product_f[0];
      GlobalFusion_Fcn_DW.FusDataInternal[1524 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Product1_j[0];
      GlobalFusion_Fcn_DW.FusDataInternal[1651 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Product2[0];
      GlobalFusion_Fcn_DW.FusDataInternal[1778 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.Product3[0];
      GlobalFusion_Fcn_DW.FusDataInternal[1905 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP21;
      GlobalFusion_Fcn_DW.FusDataInternal[2032 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP22;
      GlobalFusion_Fcn_DW.FusDataInternal[2159 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP23;
      GlobalFusion_Fcn_DW.FusDataInternal[2286 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.OutportBufferForP24;
      GlobalFusion_Fcn_DW.FusDataInternal[2413 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.OutportBufferForP31;
      GlobalFusion_Fcn_DW.FusDataInternal[2540 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.OutportBufferForP32;
      GlobalFusion_Fcn_DW.FusDataInternal[2667 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP33;
      GlobalFusion_Fcn_DW.FusDataInternal[2794 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP34;
      GlobalFusion_Fcn_DW.FusDataInternal[2921 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP41;
      GlobalFusion_Fcn_DW.FusDataInternal[3048 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP42;
      GlobalFusion_Fcn_DW.FusDataInternal[3175 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP43;
      GlobalFusion_Fcn_DW.FusDataInternal[3302 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_B.OutportBufferForP44;

      /* All fusion targets forecast,after this step, target number in FusDataInternal is the same as last calculation, but forecast with delta time */
      GlobalFusion_Fcn_DW.FusDataInternal[GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[635 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[635 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[762 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[889 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[1016 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[1016 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[1143 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[1270 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[1270 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[3429 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[3556 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[3683 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[3810 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal[3937 + GlobalFusion_Fcn_DW.n] =
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.n++;

      /* Transition: '<S17>:3945' */
    } else {
      /* Transition: '<S17>:3942' */
    }

    /* Transition: '<S17>:3941' */
    GlobalFusion_Fcn_DW.k++;
  }

  /* Transition: '<S17>:3944' */
  GlobalFusion_Fcn_B.Num_Trg = GlobalFusion_Fcn_DW.n;
  GlobalFusion_Fcn_DW.n = 0U;
}

/* Function for Chart: '<Root>/Fusion_Center' */
void MeasurementsGen(void)
{
  /* Graphical Function 'MeasurementsGen': '<S17>:4060' */
  /* Transition: '<S17>:4071' */
  GlobalFusion_Fcn_DW.k = 0U;
  memset(&GlobalFusion_Fcn_DW.FusDataInternal_temp[0], 0, 4191U * sizeof(real_T));
  if (GlobalFusion_Fcn_DW.DataSource == 2) {
    /* Transition: '<S17>:4072' */
    /* ESR Data Update */
    while (GlobalFusion_Fcn_DW.k < 64) {
      /* Transition: '<S17>:4073' */
      /* Transition: '<S17>:4869' */
      GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.NE[GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.MeasureData[64 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.NE[64 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.MeasureData[128 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.NE[128 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.MeasureData[192 + GlobalFusion_Fcn_DW.k] = 0.0;
      GlobalFusion_Fcn_DW.MeasureData[256 + GlobalFusion_Fcn_DW.k] = 0.0;
      GlobalFusion_Fcn_DW.MeasureData[320 + GlobalFusion_Fcn_DW.k] = 0.0;
      GlobalFusion_Fcn_DW.MeasureData[384 + GlobalFusion_Fcn_DW.k] = 0.1;
      GlobalFusion_Fcn_DW.MeasureData[448 + GlobalFusion_Fcn_DW.k] = 0.0;
      GlobalFusion_Fcn_DW.MeasureData[512 + GlobalFusion_Fcn_DW.k] = 0.0;
      GlobalFusion_Fcn_DW.MeasureData[576 + GlobalFusion_Fcn_DW.k] = 0.6;

      /* Transition: '<S17>:4075' */
      GlobalFusion_Fcn_DW.k++;
    }

    /* Transition: '<S17>:4076' */
    /* Transition: '<S17>:4082' */
    /* Transition: '<S17>:4567' */
  } else {
    /* Transition: '<S17>:4074' */
    if (GlobalFusion_Fcn_DW.DataSource == 3) {
      /* Transition: '<S17>:4548' */
      /* SRR Data Update */
      while (GlobalFusion_Fcn_DW.k < 40) {
        /* Transition: '<S17>:4550' */
        /* Transition: '<S17>:4872' */
        GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_i[GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[64 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_i[40 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[128 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_i[80 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[192 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_i[120 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[256 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[320 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[384 + GlobalFusion_Fcn_DW.k] = 1.0;
        GlobalFusion_Fcn_DW.MeasureData[448 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[512 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[576 + GlobalFusion_Fcn_DW.k] = 1.0;

        /* Transition: '<S17>:4559' */
        GlobalFusion_Fcn_DW.k++;
      }

      /* Transition: '<S17>:4563' */
      /* Transition: '<S17>:4567' */
    } else {
      /* Transition: '<S17>:4561' */
      while (GlobalFusion_Fcn_DW.k < 25) {
        /* Transition: '<S17>:4078' */
        /* Transition: '<S17>:4877' */
        GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[64 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[25 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[128 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[50 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[192 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[175 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[256 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[100 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[320 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[75 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.MeasureData[384 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_B.NE_j[25 + GlobalFusion_Fcn_DW.k] * 0.3;
        GlobalFusion_Fcn_DW.MeasureData[448 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[512 + GlobalFusion_Fcn_DW.k] = 0.0;
        GlobalFusion_Fcn_DW.MeasureData[576 + GlobalFusion_Fcn_DW.k] = 0.01;

        /* Transition: '<S17>:4079' */
        GlobalFusion_Fcn_DW.k++;
      }

      /* Transition: '<S17>:4566' */
    }
  }

  /* Transition: '<S17>:4568' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_Association_Update_step1(void)
{
  uint16_T ExistID;
  int32_T exitg1;

  /* Graphical Function 'Association_Update_step1': '<S17>:4251' */
  /* Transition: '<S17>:4266' */
  if (GlobalFusion_Fcn_DW.DataSource != 1) {
    /* Transition: '<S17>:4267' */
    /* Not Camera */
    if (GlobalFusion_Fcn_DW.DataSource != 2) {
      /* Transition: '<S17>:4574' */
      /* SRR */
      /* Transition: '<S17>:4576' */
      ExistID = (uint16_T)GlobalFusion_Fcn_DW.FusDataInternal[3556 +
        GlobalFusion_Fcn_DW.k];

      /* Transition: '<S17>:4577' */
    } else {
      /* Transition: '<S17>:4269' */
      ExistID = (uint16_T)GlobalFusion_Fcn_DW.FusDataInternal[3429 +
        GlobalFusion_Fcn_DW.k];
    }

    /* Transition: '<S17>:4270' */
  } else {
    /* Transition: '<S17>:4268' */
    ExistID = (uint16_T)GlobalFusion_Fcn_DW.FusDataInternal[3683 +
      GlobalFusion_Fcn_DW.k];
  }

  /* Transition: '<S17>:4271' */
  do {
    exitg1 = 0;
    if (GlobalFusion_Fcn_DW.n < 64) {
      /* Transition: '<S17>:4272' */
      if ((GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.n] == ExistID) &&
          (GlobalFusion_Fcn_DW.MeasureData[640 + GlobalFusion_Fcn_DW.n] == 0.0) &&
          (GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.n] != 0.0)) {
        /* Transition: '<S17>:4273' */
        /* Transition: '<S17>:4277' */
        /* Simulink Function 'MDCal': '<S17>:4519' */
        GlobalFusion_Fcn_B.MeasureRx = GlobalFusion_Fcn_DW.MeasureData[64 +
          GlobalFusion_Fcn_DW.n];
        GlobalFusion_Fcn_B.MeasureRy = GlobalFusion_Fcn_DW.MeasureData[128 +
          GlobalFusion_Fcn_DW.n];
        GlobalFusion_Fcn_B.PredictRx = GlobalFusion_Fcn_DW.FusDataInternal[127 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.PredictRy = GlobalFusion_Fcn_DW.FusDataInternal[381 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P11 = GlobalFusion_Fcn_DW.FusDataInternal[1397 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P12 = GlobalFusion_Fcn_DW.FusDataInternal[1524 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P13 = GlobalFusion_Fcn_DW.FusDataInternal[1651 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P14 = GlobalFusion_Fcn_DW.FusDataInternal[1778 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P21 = GlobalFusion_Fcn_DW.FusDataInternal[1905 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P22 = GlobalFusion_Fcn_DW.FusDataInternal[2032 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P23 = GlobalFusion_Fcn_DW.FusDataInternal[2159 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P24 = GlobalFusion_Fcn_DW.FusDataInternal[2286 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P31 = GlobalFusion_Fcn_DW.FusDataInternal[2413 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P32 = GlobalFusion_Fcn_DW.FusDataInternal[2540 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P33 = GlobalFusion_Fcn_DW.FusDataInternal[2667 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P34 = GlobalFusion_Fcn_DW.FusDataInternal[2794 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P41 = GlobalFusion_Fcn_DW.FusDataInternal[2921 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P42 = GlobalFusion_Fcn_DW.FusDataInternal[3048 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P43 = GlobalFusion_Fcn_DW.FusDataInternal[3175 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P44 = GlobalFusion_Fcn_DW.FusDataInternal[3302 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.R11_l = GlobalFusion_Fcn_DW.MeasureData[384 +
          GlobalFusion_Fcn_DW.n];
        GlobalFusion_Fcn_B.R12_k = GlobalFusion_Fcn_DW.MeasureData[448 +
          GlobalFusion_Fcn_DW.n];
        GlobalFusion_Fcn_B.R21_i = GlobalFusion_Fcn_DW.MeasureData[512 +
          GlobalFusion_Fcn_DW.n];
        GlobalFusion_Fcn_B.R22_o = GlobalFusion_Fcn_DW.MeasureData[576 +
          GlobalFusion_Fcn_DW.n];

        /* Outputs for Function Call SubSystem: '<S17>/FusTrackUpdate.MDCal' */
        GlobalFusion_Fcn_FusTrackUpdateMDCal(GlobalFusion_Fcn_B.MeasureRx,
          GlobalFusion_Fcn_B.MeasureRy, GlobalFusion_Fcn_B.PredictRx,
          GlobalFusion_Fcn_B.PredictRy, GlobalFusion_Fcn_B.P11,
          GlobalFusion_Fcn_B.P12, GlobalFusion_Fcn_B.P13, GlobalFusion_Fcn_B.P14,
          GlobalFusion_Fcn_B.P22, GlobalFusion_Fcn_B.P21, GlobalFusion_Fcn_B.P23,
          GlobalFusion_Fcn_B.P24, GlobalFusion_Fcn_B.P33, GlobalFusion_Fcn_B.P31,
          GlobalFusion_Fcn_B.P32, GlobalFusion_Fcn_B.P34, GlobalFusion_Fcn_B.P44,
          GlobalFusion_Fcn_B.P41, GlobalFusion_Fcn_B.P42, GlobalFusion_Fcn_B.P43,
          GlobalFusion_Fcn_B.R11_l, GlobalFusion_Fcn_B.R12_k,
          GlobalFusion_Fcn_B.R21_i, GlobalFusion_Fcn_B.R22_o,
          &GlobalFusion_Fcn_B.FusTrackUpdateMDCal,
          (P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *)
          &GlobalFusion_Fcn_P.FusTrackUpdateMDCal);

        /* End of Outputs for SubSystem: '<S17>/FusTrackUpdate.MDCal' */
        if (GlobalFusion_Fcn_B.FusTrackUpdateMDCal.Divide <
            GlobalFusion_Fcn_MD_Calib) {
          /* Transition: '<S17>:4279' */
          /* Transition: '<S17>:4280' */
          GlobalFusion_Fcn_DW.MeasureFoundNum = GlobalFusion_Fcn_DW.n;

          /* Simulink Function 'Update': '<S17>:4233' */
          GlobalFusion_Fcn_B.Pre_x_o = GlobalFusion_Fcn_DW.FusDataInternal[127 +
            GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.Pre_vx_k = GlobalFusion_Fcn_DW.FusDataInternal[254
            + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.Pre_y_l = GlobalFusion_Fcn_DW.FusDataInternal[381 +
            GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.Pre_vy_c = GlobalFusion_Fcn_DW.FusDataInternal[508
            + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.Mea_x = GlobalFusion_Fcn_DW.MeasureData[64 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];
          GlobalFusion_Fcn_B.Mea_y = GlobalFusion_Fcn_DW.MeasureData[128 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];
          GlobalFusion_Fcn_B.pre_p11_o = GlobalFusion_Fcn_DW.FusDataInternal
            [1397 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p12_c = GlobalFusion_Fcn_DW.FusDataInternal
            [1524 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p13_m = GlobalFusion_Fcn_DW.FusDataInternal
            [1651 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p14_j = GlobalFusion_Fcn_DW.FusDataInternal
            [1778 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p21_a = GlobalFusion_Fcn_DW.FusDataInternal
            [1905 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p22_i = GlobalFusion_Fcn_DW.FusDataInternal
            [2032 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p23_b = GlobalFusion_Fcn_DW.FusDataInternal
            [2159 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p24_d = GlobalFusion_Fcn_DW.FusDataInternal
            [2286 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p31_j = GlobalFusion_Fcn_DW.FusDataInternal
            [2413 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p32_b = GlobalFusion_Fcn_DW.FusDataInternal
            [2540 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p33_a = GlobalFusion_Fcn_DW.FusDataInternal
            [2667 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p34_j = GlobalFusion_Fcn_DW.FusDataInternal
            [2794 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p41_p = GlobalFusion_Fcn_DW.FusDataInternal
            [2921 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p42_n = GlobalFusion_Fcn_DW.FusDataInternal
            [3048 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p43_h = GlobalFusion_Fcn_DW.FusDataInternal
            [3175 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.pre_p44_b = GlobalFusion_Fcn_DW.FusDataInternal
            [3302 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_B.R11 = GlobalFusion_Fcn_DW.MeasureData[384 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];
          GlobalFusion_Fcn_B.R12 = GlobalFusion_Fcn_DW.MeasureData[448 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];
          GlobalFusion_Fcn_B.R21 = GlobalFusion_Fcn_DW.MeasureData[512 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];
          GlobalFusion_Fcn_B.R22 = GlobalFusion_Fcn_DW.MeasureData[576 +
            (int32_T)GlobalFusion_Fcn_DW.MeasureFoundNum];

          /* Outputs for Function Call SubSystem: '<S17>/FusTrackUpdate.Update' */
          GlobalFusion_Fcn_FusTrackUpdateUpdate(GlobalFusion_Fcn_B.pre_p11_o,
            GlobalFusion_Fcn_B.pre_p12_c, GlobalFusion_Fcn_B.pre_p13_m,
            GlobalFusion_Fcn_B.pre_p14_j, GlobalFusion_Fcn_B.pre_p22_i,
            GlobalFusion_Fcn_B.pre_p21_a, GlobalFusion_Fcn_B.pre_p23_b,
            GlobalFusion_Fcn_B.pre_p24_d, GlobalFusion_Fcn_B.pre_p33_a,
            GlobalFusion_Fcn_B.pre_p31_j, GlobalFusion_Fcn_B.pre_p32_b,
            GlobalFusion_Fcn_B.pre_p34_j, GlobalFusion_Fcn_B.pre_p44_b,
            GlobalFusion_Fcn_B.pre_p41_p, GlobalFusion_Fcn_B.pre_p42_n,
            GlobalFusion_Fcn_B.pre_p43_h, GlobalFusion_Fcn_B.R11,
            GlobalFusion_Fcn_B.R12, GlobalFusion_Fcn_B.R21,
            GlobalFusion_Fcn_B.R22, GlobalFusion_Fcn_B.Pre_x_o,
            GlobalFusion_Fcn_B.Pre_vx_k, GlobalFusion_Fcn_B.Pre_y_l,
            GlobalFusion_Fcn_B.Pre_vy_c, GlobalFusion_Fcn_B.Mea_x,
            GlobalFusion_Fcn_B.Mea_y, &GlobalFusion_Fcn_B.FusTrackUpdateUpdate,
            (P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *)
            &GlobalFusion_Fcn_P.FusTrackUpdateUpdate);

          /* End of Outputs for SubSystem: '<S17>/FusTrackUpdate.Update' */
          GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Subtract1[0];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[254 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Velocity_X;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForRangeY;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[508 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Range_Y;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1397 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product[0];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1524 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product1[0];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1651 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product2[0];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1778 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product3[0];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1905 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP21;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2032 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP22;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2159 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP23;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2286 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP24;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2413 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP31;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2540 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP32;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2667 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP33;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2794 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP34;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2921 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP41;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3048 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP42;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3175 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP43;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3302 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP44;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_DW.FusDataInternal[GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[635 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_DW.FusDataInternal[635 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k] =
            GlobalFusion_Fcn_DW.FusDataInternal[762 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1016 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[1016 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[1143 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1270 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[1270 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[3429 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[3556 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[3683 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[3810 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + GlobalFusion_Fcn_DW.k]
            = GlobalFusion_Fcn_DW.FusDataInternal[3937 + GlobalFusion_Fcn_DW.k];

          /* Update track k with measurement (MeasureFoundNum) */
          GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] = 1.0;

          /* Track k is marked as updated */
          GlobalFusion_Fcn_DW.MeasureData[640 + (int32_T)
            GlobalFusion_Fcn_DW.MeasureFoundNum] = 1.0;

          /* Measurement is marked as used */
          if (GlobalFusion_Fcn_DW.DataSource == 1) {
            /* Transition: '<S17>:4729' */
            /* Camera */
            /* Transition: '<S17>:4732' */
            GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k]
              = GlobalFusion_Fcn_DW.MeasureData[640 + (int32_T)
              GlobalFusion_Fcn_DW.MeasureFoundNum];
            GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k]
              = GlobalFusion_Fcn_DW.MeasureData[256 + (int32_T)
              GlobalFusion_Fcn_DW.MeasureFoundNum];

            /* Transition: '<S17>:4733' */
          } else {
            /* Transition: '<S17>:4730' */
            GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k]
              = GlobalFusion_Fcn_DW.FusDataInternal[889 + GlobalFusion_Fcn_DW.k];
            GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k]
              = GlobalFusion_Fcn_DW.FusDataInternal[762 + GlobalFusion_Fcn_DW.k];
          }

          /* Transition: '<S17>:4282' */
        } else {
          /* Transition: '<S17>:4278' */
          /* Not find exist measurement last time */
          /* Transition: '<S17>:4281' */
        }

        exitg1 = 1;
      } else {
        /* Transition: '<S17>:4275' */
        /* Transition: '<S17>:4274' */
        GlobalFusion_Fcn_DW.n++;
      }
    } else {
      /* Transition: '<S17>:4276' */
      /* Transition: '<S17>:4281' */
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Transition: '<S17>:4283' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_UpdateSourceID(void)
{
  /* Graphical Function 'UpdateSourceID': '<S17>:4520' */
  /* Transition: '<S17>:4531' */
  if (GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] == 0.0) {
    /* Transition: '<S17>:4532' */
    if (GlobalFusion_Fcn_DW.DataSource != 1) {
      /* Transition: '<S17>:4533' */
      if (GlobalFusion_Fcn_DW.DataSource != 2) {
        /* Transition: '<S17>:4579' */
        /* Transition: '<S17>:4581' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + GlobalFusion_Fcn_DW.k] =
          -1.0;

        /* Transition: '<S17>:4582' */
      } else {
        /* Transition: '<S17>:4536' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + GlobalFusion_Fcn_DW.k] =
          -1.0;
      }

      /* Transition: '<S17>:4540' */
    } else {
      /* Transition: '<S17>:4535' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + GlobalFusion_Fcn_DW.k] =
        -1.0;
    }

    /* Transition: '<S17>:4542' */
    /* Transition: '<S17>:4587' */
    /* Transition: '<S17>:4541' */
  } else {
    /* Transition: '<S17>:4534' */
    if (GlobalFusion_Fcn_DW.DataSource != 1) {
      /* Transition: '<S17>:4537' */
      /* ESR or SRR */
      if (GlobalFusion_Fcn_DW.DataSource != 2) {
        /* Transition: '<S17>:4584' */
        /* SRR */
        /* Transition: '<S17>:4586' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.MeasureData[(int32_T)
          GlobalFusion_Fcn_DW.MeasureFoundNum];
        GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k] =
          3.0;

        /* Transition: '<S17>:4587' */
        /* Transition: '<S17>:4541' */
      } else {
        /* Transition: '<S17>:4538' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.MeasureData[(int32_T)
          GlobalFusion_Fcn_DW.MeasureFoundNum];
        GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k] =
          2.0;

        /* Transition: '<S17>:4541' */
      }
    } else {
      /* Transition: '<S17>:4539' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.MeasureData[(int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k] =
        1.0;
    }
  }

  /* Transition: '<S17>:4543' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_step1(void)
{
  /* Graphical Function 'step1': '<S17>:4234' */
  /* Transition: '<S17>:4242' */
  GlobalFusion_Fcn_DW.k = 0U;

  /* Gating and Association Step */
  while (GlobalFusion_Fcn_DW.k < GlobalFusion_Fcn_B.Num_Trg) {
    /* Transition: '<S17>:4243' */
    /* Transition: '<S17>:4245' */
    GlobalFusion_Fcn_Association_Update_step1();
    if (GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] == 1.0) {
      /* Transition: '<S17>:4247' */
      /* Transition: '<S17>:4249' */
      GlobalFusion_Fcn_UpdateSourceID();

      /* Transition: '<S17>:4250' */
    } else {
      /* Transition: '<S17>:4248' */
    }

    /* Transition: '<S17>:4244' */
    GlobalFusion_Fcn_DW.n = 0U;
    GlobalFusion_Fcn_DW.k++;
    GlobalFusion_Fcn_DW.MeasureFoundNum = 0.0;
  }

  /* Transition: '<S17>:4246' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_gating(void)
{
  /* Graphical Function 'gating': '<S17>:4341' */
  /* Transition: '<S17>:4356' */
  while (GlobalFusion_Fcn_DW.m < 64) {
    /* Transition: '<S17>:4357' */
    if ((GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.m] != 0.0) &&
        (GlobalFusion_Fcn_DW.MeasureData[640 + GlobalFusion_Fcn_DW.m] == 0.0)) {
      /* Transition: '<S17>:4358' */
      /* Transition: '<S17>:4362' */
      if ((GlobalFusion_Fcn_DW.MeasureData[64 + GlobalFusion_Fcn_DW.m] <=
           GlobalFusion_Fcn_DW.FusDataInternal[127 + GlobalFusion_Fcn_DW.k] +
           GlobalFusion_Fcn_DW.Rx3xgm) && (GlobalFusion_Fcn_DW.MeasureData[64 +
           GlobalFusion_Fcn_DW.m] >= GlobalFusion_Fcn_DW.FusDataInternal[127 +
           GlobalFusion_Fcn_DW.k] - GlobalFusion_Fcn_DW.Rx3xgm) &&
          (GlobalFusion_Fcn_DW.MeasureData[128 + GlobalFusion_Fcn_DW.m] <=
           GlobalFusion_Fcn_DW.FusDataInternal[381 + GlobalFusion_Fcn_DW.k] +
           GlobalFusion_Fcn_DW.Ry3xgm) && (GlobalFusion_Fcn_DW.MeasureData[128 +
           GlobalFusion_Fcn_DW.m] >= GlobalFusion_Fcn_DW.FusDataInternal[381 +
           GlobalFusion_Fcn_DW.k] - GlobalFusion_Fcn_DW.Ry3xgm)) {
        /* Transition: '<S17>:4365' */
        /* Transition: '<S17>:4367' */
        /* Simulink Function 'MDCal': '<S17>:4519' */
        GlobalFusion_Fcn_B.MeasureRx = GlobalFusion_Fcn_DW.MeasureData[64 +
          GlobalFusion_Fcn_DW.m];
        GlobalFusion_Fcn_B.MeasureRy = GlobalFusion_Fcn_DW.MeasureData[128 +
          GlobalFusion_Fcn_DW.m];
        GlobalFusion_Fcn_B.PredictRx = GlobalFusion_Fcn_DW.FusDataInternal[127 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.PredictRy = GlobalFusion_Fcn_DW.FusDataInternal[381 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P11 = GlobalFusion_Fcn_DW.FusDataInternal[1397 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P12 = GlobalFusion_Fcn_DW.FusDataInternal[1524 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P13 = GlobalFusion_Fcn_DW.FusDataInternal[1651 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P14 = GlobalFusion_Fcn_DW.FusDataInternal[1778 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P21 = GlobalFusion_Fcn_DW.FusDataInternal[1905 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P22 = GlobalFusion_Fcn_DW.FusDataInternal[2032 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P23 = GlobalFusion_Fcn_DW.FusDataInternal[2159 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P24 = GlobalFusion_Fcn_DW.FusDataInternal[2286 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P31 = GlobalFusion_Fcn_DW.FusDataInternal[2413 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P32 = GlobalFusion_Fcn_DW.FusDataInternal[2540 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P33 = GlobalFusion_Fcn_DW.FusDataInternal[2667 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P34 = GlobalFusion_Fcn_DW.FusDataInternal[2794 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P41 = GlobalFusion_Fcn_DW.FusDataInternal[2921 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P42 = GlobalFusion_Fcn_DW.FusDataInternal[3048 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P43 = GlobalFusion_Fcn_DW.FusDataInternal[3175 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.P44 = GlobalFusion_Fcn_DW.FusDataInternal[3302 +
          GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_B.R11_l = GlobalFusion_Fcn_DW.MeasureData[384 +
          GlobalFusion_Fcn_DW.m];
        GlobalFusion_Fcn_B.R12_k = GlobalFusion_Fcn_DW.MeasureData[448 +
          GlobalFusion_Fcn_DW.m];
        GlobalFusion_Fcn_B.R21_i = GlobalFusion_Fcn_DW.MeasureData[512 +
          GlobalFusion_Fcn_DW.m];
        GlobalFusion_Fcn_B.R22_o = GlobalFusion_Fcn_DW.MeasureData[576 +
          GlobalFusion_Fcn_DW.m];

        /* Outputs for Function Call SubSystem: '<S17>/FusTrackUpdate.MDCal' */
        GlobalFusion_Fcn_FusTrackUpdateMDCal(GlobalFusion_Fcn_B.MeasureRx,
          GlobalFusion_Fcn_B.MeasureRy, GlobalFusion_Fcn_B.PredictRx,
          GlobalFusion_Fcn_B.PredictRy, GlobalFusion_Fcn_B.P11,
          GlobalFusion_Fcn_B.P12, GlobalFusion_Fcn_B.P13, GlobalFusion_Fcn_B.P14,
          GlobalFusion_Fcn_B.P22, GlobalFusion_Fcn_B.P21, GlobalFusion_Fcn_B.P23,
          GlobalFusion_Fcn_B.P24, GlobalFusion_Fcn_B.P33, GlobalFusion_Fcn_B.P31,
          GlobalFusion_Fcn_B.P32, GlobalFusion_Fcn_B.P34, GlobalFusion_Fcn_B.P44,
          GlobalFusion_Fcn_B.P41, GlobalFusion_Fcn_B.P42, GlobalFusion_Fcn_B.P43,
          GlobalFusion_Fcn_B.R11_l, GlobalFusion_Fcn_B.R12_k,
          GlobalFusion_Fcn_B.R21_i, GlobalFusion_Fcn_B.R22_o,
          &GlobalFusion_Fcn_B.FusTrackUpdateMDCal,
          (P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *)
          &GlobalFusion_Fcn_P.FusTrackUpdateMDCal);

        /* End of Outputs for SubSystem: '<S17>/FusTrackUpdate.MDCal' */
        if (GlobalFusion_Fcn_B.FusTrackUpdateMDCal.Divide <
            GlobalFusion_Fcn_DW.MD_min) {
          /* Transition: '<S17>:4369' */
          /* Transition: '<S17>:4371' */
          GlobalFusion_Fcn_DW.MD_min =
            GlobalFusion_Fcn_B.FusTrackUpdateMDCal.Divide;
          GlobalFusion_Fcn_DW.MeasureFoundFlag = 1.0;
          GlobalFusion_Fcn_DW.MeasureFoundNum = GlobalFusion_Fcn_DW.m;

          /* Transition: '<S17>:4372' */
        } else {
          /* Transition: '<S17>:4370' */
        }

        /* Transition: '<S17>:4373' */
      } else {
        /* Transition: '<S17>:4368' */
      }

      /* Transition: '<S17>:4374' */
    } else {
      /* Transition: '<S17>:4364' */
    }

    /* Transition: '<S17>:4360' */
    GlobalFusion_Fcn_DW.m++;
  }

  /* Transition: '<S17>:4363' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_Association_Update_step2(void)
{
  /* Graphical Function 'Association_Update_step2': '<S17>:4299' */
  /* Transition: '<S17>:4318' */
  if ((GlobalFusion_Fcn_DW.DataSource == 2) || (GlobalFusion_Fcn_DW.DataSource ==
       3)) {
    /* Transition: '<S17>:4319' */
    /* Radar(ESR and SRR) */
    /* Transition: '<S17>:4321' */
    GlobalFusion_Fcn_DW.Ry3xgm = 1.0;
    if (GlobalFusion_Fcn_DW.FusDataInternal[127 + GlobalFusion_Fcn_DW.k] >= 0.0)
    {
      /* Transition: '<S17>:4591' */
      /* Transition: '<S17>:4593' */
      GlobalFusion_Fcn_DW.Rx3xgm = GlobalFusion_Fcn_DW.FusDataInternal[127 +
        GlobalFusion_Fcn_DW.k] * 0.15 + 1.0;

      /* Transition: '<S17>:4594' */
    } else {
      /* Transition: '<S17>:4595' */
      GlobalFusion_Fcn_DW.Rx3xgm = GlobalFusion_Fcn_DW.FusDataInternal[127 +
        GlobalFusion_Fcn_DW.k] * -0.15 + 1.0;
    }

    /* Transition: '<S17>:4326' */
    /* Transition: '<S17>:4325' */
  } else {
    /* Transition: '<S17>:4320' */
    GlobalFusion_Fcn_DW.Ry3xgm = 1.0;
    if (GlobalFusion_Fcn_DW.FusDataInternal[127 + GlobalFusion_Fcn_DW.k] >= 0.0)
    {
      /* Transition: '<S17>:4322' */
      /* Transition: '<S17>:4324' */
      GlobalFusion_Fcn_DW.Rx3xgm = GlobalFusion_Fcn_DW.FusDataInternal[127 +
        GlobalFusion_Fcn_DW.k] * 0.3 + 1.0;

      /* Transition: '<S17>:4325' */
    } else {
      /* Transition: '<S17>:4323' */
      GlobalFusion_Fcn_DW.Rx3xgm = GlobalFusion_Fcn_DW.FusDataInternal[127 +
        GlobalFusion_Fcn_DW.k] * -0.3 + 1.0;
    }
  }

  /* Transition: '<S17>:4327' */
  if (GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] == 0.0) {
    /* Transition: '<S17>:4328' */
    /* Transition: '<S17>:4330' */
    GlobalFusion_Fcn_gating();
    if (GlobalFusion_Fcn_DW.MeasureFoundFlag == 1.0) {
      /* Transition: '<S17>:4331' */
      /* Transition: '<S17>:4333' */
      /* Simulink Function 'Update': '<S17>:4233' */
      GlobalFusion_Fcn_B.Pre_x_o = GlobalFusion_Fcn_DW.FusDataInternal[127 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_vx_k = GlobalFusion_Fcn_DW.FusDataInternal[254 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_y_l = GlobalFusion_Fcn_DW.FusDataInternal[381 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Pre_vy_c = GlobalFusion_Fcn_DW.FusDataInternal[508 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.Mea_x = GlobalFusion_Fcn_DW.MeasureData[64 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_B.Mea_y = GlobalFusion_Fcn_DW.MeasureData[128 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_B.pre_p11_o = GlobalFusion_Fcn_DW.FusDataInternal[1397 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p12_c = GlobalFusion_Fcn_DW.FusDataInternal[1524 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p13_m = GlobalFusion_Fcn_DW.FusDataInternal[1651 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p14_j = GlobalFusion_Fcn_DW.FusDataInternal[1778 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p21_a = GlobalFusion_Fcn_DW.FusDataInternal[1905 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p22_i = GlobalFusion_Fcn_DW.FusDataInternal[2032 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p23_b = GlobalFusion_Fcn_DW.FusDataInternal[2159 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p24_d = GlobalFusion_Fcn_DW.FusDataInternal[2286 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p31_j = GlobalFusion_Fcn_DW.FusDataInternal[2413 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p32_b = GlobalFusion_Fcn_DW.FusDataInternal[2540 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p33_a = GlobalFusion_Fcn_DW.FusDataInternal[2667 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p34_j = GlobalFusion_Fcn_DW.FusDataInternal[2794 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p41_p = GlobalFusion_Fcn_DW.FusDataInternal[2921 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p42_n = GlobalFusion_Fcn_DW.FusDataInternal[3048 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p43_h = GlobalFusion_Fcn_DW.FusDataInternal[3175 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.pre_p44_b = GlobalFusion_Fcn_DW.FusDataInternal[3302 +
        GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_B.R11 = GlobalFusion_Fcn_DW.MeasureData[384 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_B.R12 = GlobalFusion_Fcn_DW.MeasureData[448 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_B.R21 = GlobalFusion_Fcn_DW.MeasureData[512 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];
      GlobalFusion_Fcn_B.R22 = GlobalFusion_Fcn_DW.MeasureData[576 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum];

      /* Outputs for Function Call SubSystem: '<S17>/FusTrackUpdate.Update' */
      GlobalFusion_Fcn_FusTrackUpdateUpdate(GlobalFusion_Fcn_B.pre_p11_o,
        GlobalFusion_Fcn_B.pre_p12_c, GlobalFusion_Fcn_B.pre_p13_m,
        GlobalFusion_Fcn_B.pre_p14_j, GlobalFusion_Fcn_B.pre_p22_i,
        GlobalFusion_Fcn_B.pre_p21_a, GlobalFusion_Fcn_B.pre_p23_b,
        GlobalFusion_Fcn_B.pre_p24_d, GlobalFusion_Fcn_B.pre_p33_a,
        GlobalFusion_Fcn_B.pre_p31_j, GlobalFusion_Fcn_B.pre_p32_b,
        GlobalFusion_Fcn_B.pre_p34_j, GlobalFusion_Fcn_B.pre_p44_b,
        GlobalFusion_Fcn_B.pre_p41_p, GlobalFusion_Fcn_B.pre_p42_n,
        GlobalFusion_Fcn_B.pre_p43_h, GlobalFusion_Fcn_B.R11,
        GlobalFusion_Fcn_B.R12, GlobalFusion_Fcn_B.R21, GlobalFusion_Fcn_B.R22,
        GlobalFusion_Fcn_B.Pre_x_o, GlobalFusion_Fcn_B.Pre_vx_k,
        GlobalFusion_Fcn_B.Pre_y_l, GlobalFusion_Fcn_B.Pre_vy_c,
        GlobalFusion_Fcn_B.Mea_x, GlobalFusion_Fcn_B.Mea_y,
        &GlobalFusion_Fcn_B.FusTrackUpdateUpdate,
        (P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *)
        &GlobalFusion_Fcn_P.FusTrackUpdateUpdate);

      /* End of Outputs for SubSystem: '<S17>/FusTrackUpdate.Update' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Subtract1[0];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[254 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Velocity_X;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForRangeY;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[508 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Range_Y;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1397 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product[0];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1524 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product1[0];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1651 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product2[0];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1778 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.Product3[0];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1905 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP21;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2032 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP22;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2159 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP23;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2286 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP24;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2413 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP31;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2540 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP32;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2667 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP33;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2794 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP34;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2921 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP41;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3048 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP42;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3175 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP43;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3302 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_B.FusTrackUpdateUpdate.OutportBufferForP44;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[635 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[635 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[762 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1016 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[1016 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[1143 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1270 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[1270 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[3429 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[3556 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[3683 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[3810 + GlobalFusion_Fcn_DW.k];
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + GlobalFusion_Fcn_DW.k] =
        GlobalFusion_Fcn_DW.FusDataInternal[3937 + GlobalFusion_Fcn_DW.k];

      /* Update track k with measurement (MeasureFoundNum) */
      GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] = 1.0;

      /* Track k is marked as updated */
      GlobalFusion_Fcn_DW.MeasureData[640 + (int32_T)
        GlobalFusion_Fcn_DW.MeasureFoundNum] = 1.0;

      /* Measurement is marked as used */
      if (GlobalFusion_Fcn_DW.DataSource == 1) {
        /* Transition: '<S17>:4739' */
        /* Camera */
        /* Transition: '<S17>:4736' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.MeasureData[640 + (int32_T)
          GlobalFusion_Fcn_DW.MeasureFoundNum];
        GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.MeasureData[256 + (int32_T)
          GlobalFusion_Fcn_DW.MeasureFoundNum];

        /* Transition: '<S17>:4735' */
      } else {
        /* Transition: '<S17>:4734' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.FusDataInternal[889 + GlobalFusion_Fcn_DW.k];
        GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k] =
          GlobalFusion_Fcn_DW.FusDataInternal[762 + GlobalFusion_Fcn_DW.k];
      }

      /* Transition: '<S17>:4338' */
    } else {
      /* Transition: '<S17>:4332' */
      GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] = 0.0;

      /* Track k is not found updata measurement */
      while (GlobalFusion_Fcn_DW.c < 32.0) {
        /* Transition: '<S17>:4334' */
        /* Transition: '<S17>:4336' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k + 127 *
          (int32_T)GlobalFusion_Fcn_DW.c] = GlobalFusion_Fcn_DW.FusDataInternal
          [127 * (int32_T)GlobalFusion_Fcn_DW.c + GlobalFusion_Fcn_DW.k];

        /* Transition: '<S17>:4335' */
        GlobalFusion_Fcn_DW.c++;
      }

      /* Transition: '<S17>:4337' */
      GlobalFusion_Fcn_DW.c = 0.0;
    }

    /* Transition: '<S17>:4339' */
  } else {
    /* Transition: '<S17>:4329' */
  }

  /* Transition: '<S17>:4340' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_step2(void)
{
  /* Graphical Function 'step2': '<S17>:4284' */
  /* Transition: '<S17>:4291' */
  GlobalFusion_Fcn_DW.k = 0U;
  GlobalFusion_Fcn_DW.MD_min = 8000.0;
  GlobalFusion_Fcn_DW.m = 0U;
  GlobalFusion_Fcn_DW.TrackCounter = 0.0;
  GlobalFusion_Fcn_DW.Rx3xgm = 0.0;
  GlobalFusion_Fcn_DW.Ry3xgm = 0.0;

  /* Gating and Association Step */
  while (GlobalFusion_Fcn_DW.k < GlobalFusion_Fcn_B.Num_Trg) {
    /* Transition: '<S17>:4292' */
    if (GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] == 0.0) {
      /* Transition: '<S17>:4293' */
      /* Transition: '<S17>:4297' */
      GlobalFusion_Fcn_Association_Update_step2();
      GlobalFusion_Fcn_UpdateSourceID();

      /* Transition: '<S17>:4298' */
    } else {
      /* Transition: '<S17>:4296' */
    }

    /* Transition: '<S17>:4294' */
    GlobalFusion_Fcn_DW.k++;
    GlobalFusion_Fcn_DW.MeasureFoundFlag = 0.0;
    GlobalFusion_Fcn_DW.m = 0U;
    GlobalFusion_Fcn_DW.MD_min = 8000.0;
  }

  /* Transition: '<S17>:4295' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static real_T GlobalFusion_Fcn_OutCameraFOV(void)
{
  real_T OutCameraFOV;

  /* Graphical Function 'OutCameraFOV': '<S17>:4605' */
  /* Transition: '<S17>:4613' */
  if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] <=
       0.0) || ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                 GlobalFusion_Fcn_DW.k] >
                 GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                 GlobalFusion_Fcn_DW.k] * 0.36376984280336827) ||
                (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                 GlobalFusion_Fcn_DW.k] <
                 -GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                 GlobalFusion_Fcn_DW.k] * 0.36376984280336827))) {
    /* Transition: '<S17>:4623' */
    /* Source is Camera and out of FOV */
    /* Transition: '<S17>:4632' */
    /* Transition: '<S17>:4631' */
    /* Transition: '<S17>:4625' */
    OutCameraFOV = 1.0;

    /* Transition: '<S17>:4626' */
  } else {
    /* Transition: '<S17>:4629' */
    /* Transition: '<S17>:4627' */
    OutCameraFOV = 0.0;
  }

  /* Transition: '<S17>:4621' */
  return OutCameraFOV;
}

/* Function for Chart: '<Root>/Fusion_Center' */
static real_T GlobalFusion_Fcn_CameraBlocked(void)
{
  real_T Blocked;
  int32_T h;
  int32_T exitg1;

  /* Graphical Function 'CameraBlocked': '<S17>:4434' */
  /* Transition: '<S17>:4442' */
  h = 0;
  do {
    exitg1 = 0;
    if (h < 25) {
      /* Transition: '<S17>:4444' */
      if ((GlobalFusion_Fcn_DW.MeasureData[h] != 0.0) &&
          (GlobalFusion_Fcn_DW.MeasureData[64 + h] > 0.0) &&
          ((GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k]
            > GlobalFusion_Fcn_DW.MeasureData[64 + h] + 2.0) &&
           (GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k]
            < GlobalFusion_Fcn_DW.MeasureData[64 + h] + 20.0) &&
           (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
            < GlobalFusion_Fcn_DW.MeasureData[128 + h] + 1.0) &&
           (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
            > GlobalFusion_Fcn_DW.MeasureData[128 + h] - 1.0))) {
        /* Transition: '<S17>:5001' */
        /* Transition: '<S17>:4443' */
        /* Transition: '<S17>:4446' */
        Blocked = 1.0;

        /* Transition: '<S17>:4449' */
        exitg1 = 1;
      } else {
        /* Transition: '<S17>:4445' */
        /* Transition: '<S17>:5003' */
        /* Transition: '<S17>:5004' */
        /* Transition: '<S17>:4447' */
        h++;
      }
    } else {
      /* Transition: '<S17>:4448' */
      Blocked = 0.0;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* Transition: '<S17>:4450' */
  return Blocked;
}

/* Function for Chart: '<Root>/Fusion_Center' */
static real_T GlobalFusion_Fcn_OutESRFOV(void)
{
  real_T OutESRFOV;
  boolean_T guard1 = false;

  /* Graphical Function 'OutESRFOV': '<S17>:4635' */
  /* Transition: '<S17>:4750' */
  if (GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] <=
      0.0) {
    /* Transition: '<S17>:4644' */
    /* Source is ESR and out of FOV */
    /* Transition: '<S17>:4646' */
    guard1 = true;
  } else {
    /* Transition: '<S17>:4645' */
    if (GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] >=
        60.0) {
      /* Transition: '<S17>:4656' */
      /* LRR Mode */
      if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
           > GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
           GlobalFusion_Fcn_DW.k] * 0.17623575040335751) ||
          (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
           < -GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
           GlobalFusion_Fcn_DW.k] * 0.17623575040335751)) {
        /* Transition: '<S17>:4647' */
        guard1 = true;
      } else {
        /* Transition: '<S17>:4667' */
        OutESRFOV = 0.0;

        /* Transition: '<S17>:4672' */
        /* Transition: '<S17>:4663' */
      }
    } else {
      /* Transition: '<S17>:4658' */
      if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
           > GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
           GlobalFusion_Fcn_DW.k] * 0.99920399010504268) ||
          (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k]
           < -GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
           GlobalFusion_Fcn_DW.k] * 0.99920399010504268)) {
        /* Transition: '<S17>:4660' */
        /* MRR Mode */
        /* Transition: '<S17>:4671' */
        OutESRFOV = 1.0;

        /* Transition: '<S17>:4663' */
      } else {
        /* Transition: '<S17>:4648' */
        OutESRFOV = 0.0;
      }
    }
  }

  if (guard1) {
    /* Transition: '<S17>:4649' */
    OutESRFOV = 1.0;

    /* Transition: '<S17>:4650' */
    /* Transition: '<S17>:4672' */
    /* Transition: '<S17>:4663' */
  }

  /* Transition: '<S17>:4651' */
  return OutESRFOV;
}

/* Function for Chart: '<Root>/Fusion_Center' */
static real_T GlobalFusion_Fcn_OutSRRFOV(void)
{
  real_T OutSRRFOV;

  /* Graphical Function 'OutSRRFOV': '<S17>:4679' */
  /* Transition: '<S17>:4692' */
  if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] >=
       0.0) && ((GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                 GlobalFusion_Fcn_DW.k] *
                 GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                 GlobalFusion_Fcn_DW.k] +
                 GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                 GlobalFusion_Fcn_DW.k] *
                 GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                 GlobalFusion_Fcn_DW.k] >= 3600.0) &&
                ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                  GlobalFusion_Fcn_DW.k] <
                  GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                  GlobalFusion_Fcn_DW.k] * 0.36376984280336827) &&
                 (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                  GlobalFusion_Fcn_DW.k] >
                  -GlobalFusion_Fcn_DW.FusDataInternal_temp[127 +
                  GlobalFusion_Fcn_DW.k] * 0.36376984280336827)))) {
    /* Transition: '<S17>:4711' */
    /* Transition: '<S17>:4713' */
    /* Transition: '<S17>:4715' */
    OutSRRFOV = 1.0;

    /* Transition: '<S17>:4721' */
  } else {
    /* Transition: '<S17>:4708' */
    /* Transition: '<S17>:4717' */
    /* Transition: '<S17>:4718' */
    /* Transition: '<S17>:4720' */
    OutSRRFOV = 0.0;
  }

  /* Transition: '<S17>:4723' */
  return OutSRRFOV;
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_ScoreDecrease(void)
{
  /* Graphical Function 'ScoreDecrease': '<S17>:4777' */
  /* Transition: '<S17>:4785' */
  if (GlobalFusion_Fcn_DW.DataSource != 1) {
    /* Transition: '<S17>:4786' */
    if (GlobalFusion_Fcn_DW.DataSource != 2) {
      /* Transition: '<S17>:4787' */
      /* Transition: '<S17>:4790' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] -=
        GlobalFusion_Fcn_SRRScoreDe;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        14.0;

      /* SRR */
      /* Transition: '<S17>:4792' */
    } else {
      /* Transition: '<S17>:4789' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] -=
        GlobalFusion_Fcn_ESRScoreDe;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        13.0;

      /* ESR */
    }

    /* Transition: '<S17>:4791' */
    /* Transition: '<S17>:4979' */
  } else {
    /* Transition: '<S17>:4974' */
    if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k] <
         3.0) && (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                  GlobalFusion_Fcn_DW.k] > -3.0) &&
        (GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k] <
         50.0)) {
      /* Transition: '<S17>:4976' */
      /* Transition: '<S17>:4978' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] -=
        GlobalFusion_Fcn_CameraNearScoreDe;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        12.0;

      /* Camera */
      /* Transition: '<S17>:4979' */
    } else {
      /* Transition: '<S17>:4788' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] -=
        GlobalFusion_Fcn_CameraFarScoreDe;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        11.0;

      /* Camera */
    }
  }

  /* Transition: '<S17>:4793' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_CameraIncrease(void)
{
  /* Graphical Function 'CameraIncrease': '<S17>:4882' */
  /* Transition: '<S17>:4890' */
  /* Transition: '<S17>:4899' */
  GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] +=
    GlobalFusion_Fcn_CameraScoreIn;
  GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] = 7.0;

  /* Transition: '<S17>:4898' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_ESRIncrease(void)
{
  /* Graphical Function 'ESRIncrease': '<S17>:4907' */
  /* Transition: '<S17>:4911' */
  if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k] <
       10.0) && (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                 GlobalFusion_Fcn_DW.k] > -10.0)) {
    /* Transition: '<S17>:4915' */
    if ((GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k] <
         5.0) && (GlobalFusion_Fcn_DW.FusDataInternal_temp[381 +
                  GlobalFusion_Fcn_DW.k] > -5.0)) {
      /* Transition: '<S17>:4921' */
      /* Transition: '<S17>:4923' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] +=
        GlobalFusion_Fcn_ESRScoreIn;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        93.0;

      /* Lateral Range is Near */
      /* Transition: '<S17>:4926' */
    } else {
      /* Transition: '<S17>:4925' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] +=
        GlobalFusion_Fcn_ESRScoreIn;
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        92.0;

      /* Lateral Range is Middle */
    }

    /* Transition: '<S17>:4927' */
  } else {
    /* Transition: '<S17>:4912' */
    GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] +=
      GlobalFusion_Fcn_ESRScoreIn;
    GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
      91.0;

    /* Lateral Range is Far */
  }

  /* Transition: '<S17>:4913' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_SRRIncrease(void)
{
  /* Graphical Function 'SRRIncrease': '<S17>:4900' */
  /* Transition: '<S17>:4904' */
  /* Transition: '<S17>:4905' */
  GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] +=
    GlobalFusion_Fcn_SRRScoreIn;
  GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] = 8.0;

  /* Transition: '<S17>:4906' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_ScoreIncrease(void)
{
  /* Graphical Function 'ScoreIncrease': '<S17>:4751' */
  /* Transition: '<S17>:4761' */
  if (GlobalFusion_Fcn_DW.DataSource != 1) {
    /* Transition: '<S17>:4763' */
    if (GlobalFusion_Fcn_DW.DataSource != 2) {
      /* Transition: '<S17>:4769' */
      /* Transition: '<S17>:4772' */
      GlobalFusion_Fcn_SRRIncrease();

      /* SRR */
      /* Transition: '<S17>:4774' */
    } else {
      /* Transition: '<S17>:4770' */
      GlobalFusion_Fcn_ESRIncrease();

      /* ESR */
    }

    /* Transition: '<S17>:4773' */
  } else {
    /* Transition: '<S17>:4765' */
    GlobalFusion_Fcn_CameraIncrease();

    /* Camera */
  }

  /* Transition: '<S17>:4776' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_ExistScoreCal(void)
{
  /* Graphical Function 'ExistScoreCal': '<S17>:4399' */
  /* Transition: '<S17>:4414' */
  if (GlobalFusion_Fcn_DW.UpdateTrackFlag[GlobalFusion_Fcn_DW.k] == 1.0) {
    /* Transition: '<S17>:4415' */
    /* Transition: '<S17>:4416' */
    GlobalFusion_Fcn_ScoreIncrease();
    if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] >
        18.0) {
      /* Transition: '<S17>:4421' */
      /* Transition: '<S17>:4423' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] =
        18.0;

      /* Transition: '<S17>:4430' */
    } else {
      /* Transition: '<S17>:4422' */
    }

    /* Transition: '<S17>:4429' */
    /* Transition: '<S17>:4428' */
    /* Transition: '<S17>:4654' */
    /* Transition: '<S17>:4725' */
    /* Transition: '<S17>:4427' */
  } else {
    /* Transition: '<S17>:4417' */
    if ((GlobalFusion_Fcn_DW.DataSource == 1) && (GlobalFusion_Fcn_OutCameraFOV()
         == 1.0)) {
      /* Transition: '<S17>:4418' */
      /* Source is Camera and out of FOV */
      /* Transition: '<S17>:4420' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
        5.0;

      /* Transition: '<S17>:4428' */
      /* Transition: '<S17>:4654' */
      /* Transition: '<S17>:4725' */
      /* Transition: '<S17>:4427' */
    } else {
      /* Transition: '<S17>:4419' */
      if ((GlobalFusion_Fcn_DW.DataSource == 1) &&
          (GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k]
           > 0.0) && (GlobalFusion_Fcn_CameraBlocked() == 1.0)) {
        /* Transition: '<S17>:4424' */
        /*  Source is Camera, but is blocked by other object */
        /* Transition: '<S17>:4426' */
        GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k] =
          4.0;

        /* Transition: '<S17>:4654' */
        /* Transition: '<S17>:4725' */
        /* Transition: '<S17>:4427' */
      } else {
        /* Transition: '<S17>:4600' */
        if ((GlobalFusion_Fcn_DW.DataSource == 2) && (GlobalFusion_Fcn_OutESRFOV
             () == 1.0)) {
          /* Transition: '<S17>:4602' */
          /* Source is ESR and out of FOV */
          /* Transition: '<S17>:4653' */
          GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 + GlobalFusion_Fcn_DW.k]
            = 3.0;

          /* Transition: '<S17>:4725' */
          /* Transition: '<S17>:4427' */
        } else {
          /* Transition: '<S17>:4674' */
          if ((GlobalFusion_Fcn_DW.DataSource == 3) &&
              (GlobalFusion_Fcn_OutSRRFOV() == 1.0)) {
            /* Transition: '<S17>:4676' */
            /*  Source is SRR and out of FOV */
            /* Transition: '<S17>:4726' */
            GlobalFusion_Fcn_DW.FusDataInternal_temp[4064 +
              GlobalFusion_Fcn_DW.k] = 2.0;

            /* Transition: '<S17>:4427' */
          } else {
            /* Transition: '<S17>:4425' */
            GlobalFusion_Fcn_ScoreDecrease();
          }
        }
      }
    }
  }

  /* Transition: '<S17>:4431' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_Del_InternalTrack(void)
{
  /* Graphical Function 'Del_InternalTrack': '<S17>:4484' */
  /* Transition: '<S17>:4489' */
  /* mean that track need to delect */
  GlobalFusion_Fcn_DW.IDUsedFlag[(int32_T)
    GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k]] = 0U;

  /* Reflash ID Used Flag */
  while (GlobalFusion_Fcn_DW.c < 32.0) {
    /* Transition: '<S17>:4490' */
    /* Transition: '<S17>:4493' */
    GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k + 127 *
      (int32_T)GlobalFusion_Fcn_DW.c] = 0.0;

    /* Transition: '<S17>:4491' */
    GlobalFusion_Fcn_DW.c++;
  }

  /* Transition: '<S17>:4492' */
  GlobalFusion_Fcn_DW.c = 0.0;
  GlobalFusion_Fcn_DW.TrackCounter++;
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_OutputTrack(void)
{
  boolean_T guard1 = false;

  /* Graphical Function 'OutputTrack': '<S17>:4451' */
  /* Transition: '<S17>:4466' */
  if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + GlobalFusion_Fcn_DW.k] ==
      0.0) {
    /* Transition: '<S17>:4467' */
    /* Not a confirmed track */
    if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] <
        15.0) {
      /* Transition: '<S17>:4468' */
      /* Transition: '<S17>:4471' */
      GlobalFusion_Fcn_DW.TrackCounter++;

      /* Transition: '<S17>:4482' */
    } else {
      /* Transition: '<S17>:4470' */
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + GlobalFusion_Fcn_DW.k] =
        1.0;

      /* New confirmed track */
      /* Transition: '<S17>:4472' */
      guard1 = true;
    }
  } else {
    /* Transition: '<S17>:4469' */
    guard1 = true;
  }

  if (guard1) {
    /* Transition: '<S17>:4473' */
    GlobalFusion_Fcn_B.FusDataOut[GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[127 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[254 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[254 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[381 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[508 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[508 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[635 + GlobalFusion_Fcn_DW.Num_Out] = 0.0;
    GlobalFusion_Fcn_B.FusDataOut[762 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1016 + GlobalFusion_Fcn_DW.Num_Out] = 0.0;
    GlobalFusion_Fcn_B.FusDataOut[889 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + GlobalFusion_Fcn_DW.k];

    /* Type */
    GlobalFusion_Fcn_B.FusDataOut[1270 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1397 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1397 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1524 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1524 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1651 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1651 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1778 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1778 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[1905 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[1905 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2032 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2032 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2159 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2159 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2286 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2286 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2413 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2413 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2540 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2540 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2667 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2667 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2794 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2794 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[2921 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[2921 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3048 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[3048 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3175 + GlobalFusion_Fcn_DW.k];
    GlobalFusion_Fcn_B.FusDataOut[3175 + GlobalFusion_Fcn_DW.Num_Out] =
      GlobalFusion_Fcn_DW.FusDataInternal_temp[3302 + GlobalFusion_Fcn_DW.k];

    /* Select outputs signals from Internal to output */
    GlobalFusion_Fcn_DW.TrackCounter++;
    GlobalFusion_Fcn_DW.Num_Out++;
    if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] <=
        15.0) {
      /* Transition: '<S17>:4474' */
      if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k]
          <= 9.0) {
        /* Transition: '<S17>:4475' */
        /* Transition: '<S17>:4478' */
        GlobalFusion_Fcn_B.FusDataOut[GlobalFusion_Fcn_DW.Num_Out + 1142] = 1.0;

        /* High Speculative */
        /* Transition: '<S17>:4480' */
      } else {
        /* Transition: '<S17>:4477' */
        GlobalFusion_Fcn_B.FusDataOut[GlobalFusion_Fcn_DW.Num_Out + 1142] = 2.0;

        /* Speculative */
      }

      /* Transition: '<S17>:4479' */
    } else {
      /* Transition: '<S17>:4476' */
      GlobalFusion_Fcn_B.FusDataOut[GlobalFusion_Fcn_DW.Num_Out + 1142] = 3.0;

      /* High confidence */
    }

    /* Transition: '<S17>:4481' */
  }

  /* Transition: '<S17>:4483' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_FusTrackManagement(void)
{
  /* Graphical Function 'FusTrackManagement': '<S17>:4385' */
  /* Transition: '<S17>:4392' */
  /* Transition: '<S17>:4393' */
  GlobalFusion_Fcn_ExistScoreCal();
  if (GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + GlobalFusion_Fcn_DW.k] >=
      0.0) {
    /* Transition: '<S17>:4394' */
    /* Marks >=0 */
    /* Transition: '<S17>:4396' */
    GlobalFusion_Fcn_OutputTrack();

    /* Transition: '<S17>:4397' */
  } else {
    /* Transition: '<S17>:4395' */
    GlobalFusion_Fcn_Del_InternalTrack();
  }

  /* Transition: '<S17>:4398' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_step3(void)
{
  /* Graphical Function 'step3': '<S17>:4375' */
  /* Transition: '<S17>:4380' */
  GlobalFusion_Fcn_DW.k = 0U;
  GlobalFusion_Fcn_DW.TrackCounter = 0.0;
  while (GlobalFusion_Fcn_DW.k < GlobalFusion_Fcn_B.Num_Trg) {
    /* Transition: '<S17>:4381' */
    /* Transition: '<S17>:4384' */
    GlobalFusion_Fcn_FusTrackManagement();

    /* Transition: '<S17>:4382' */
    GlobalFusion_Fcn_DW.k++;
  }

  /* Transition: '<S17>:4383' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
void FusTrackUpdate(void)
{
  /* Graphical Function 'FusTrackUpdate': '<S17>:4094' */
  /* Transition: '<S17>:4098' */
  /* Transition: '<S17>:4099' */
  GlobalFusion_Fcn_step1();
  GlobalFusion_Fcn_step2();
  GlobalFusion_Fcn_step3();

  /* Transition: '<S17>:4100' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
void FusTrackIni(void)
{
  int32_T exitg1;

  /* Graphical Function 'FusTrackIni': '<S17>:3889' */
  /* Transition: '<S17>:3907' */
  GlobalFusion_Fcn_DW.k = 0U;
  GlobalFusion_Fcn_DW.n = 0U;
  GlobalFusion_Fcn_DW.m = 0U;
  while (GlobalFusion_Fcn_DW.k < 64) {
    /* Transition: '<S17>:3908' */
    if ((GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k] != 0.0) &&
        (GlobalFusion_Fcn_DW.MeasureData[640 + GlobalFusion_Fcn_DW.k] == 0.0)) {
      /* Transition: '<S17>:4930' */
      /* Measurement k not association with fuse track */
      /* Transition: '<S17>:4960' */
      do {
        exitg1 = 0;

        /* Transition: '<S17>:3910' */
        GlobalFusion_Fcn_DW.LastFusID++;
        if (!(GlobalFusion_Fcn_DW.LastFusID < 127.0)) {
          /* Transition: '<S17>:3915' */
          GlobalFusion_Fcn_DW.LastFusID = 1.0;

          /* Transition: '<S17>:3918' */
        } else {
          /* Transition: '<S17>:3911' */
          /* Transition: '<S17>:3916' */
        }

        /* Transition: '<S17>:3919' */
        if (GlobalFusion_Fcn_DW.IDUsedFlag[(int32_T)
            GlobalFusion_Fcn_DW.LastFusID] == 0) {
          /* Transition: '<S17>:3921' */
          /* Transition: '<S17>:3923' */
          GlobalFusion_Fcn_DW.FusDataInternal_temp[(int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = GlobalFusion_Fcn_DW.LastFusID;
          GlobalFusion_Fcn_DW.IDUsedFlag[(int32_T)GlobalFusion_Fcn_DW.LastFusID]
            = 1U;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[127 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = GlobalFusion_Fcn_DW.MeasureData
            [64 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[254 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[381 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = GlobalFusion_Fcn_DW.MeasureData
            [128 + GlobalFusion_Fcn_DW.k];
          GlobalFusion_Fcn_DW.FusDataInternal_temp[508 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[635 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1016 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1143 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = GlobalFusion_Fcn_DW.DataSource;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1270 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 1.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[1397 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 1.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2032 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 1.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[2667 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 1.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3302 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 1.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3810 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 5.0;
          GlobalFusion_Fcn_DW.FusDataInternal_temp[3937 + (int32_T)
            GlobalFusion_Fcn_DW.TrackCounter] = 0.0;
          if (GlobalFusion_Fcn_DW.DataSource != 1) {
            /* Transition: '<S17>:3924' */
            if (GlobalFusion_Fcn_DW.DataSource != 2) {
              /* Transition: '<S17>:4742' */
              /* Transition: '<S17>:4744' */
              GlobalFusion_Fcn_DW.FusDataInternal_temp[3556 + (int32_T)
                GlobalFusion_Fcn_DW.TrackCounter] =
                GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k];
              GlobalFusion_Fcn_DW.TrackCounter++;

              /* Transition: '<S17>:4745' */
            } else {
              /* Transition: '<S17>:3926' */
              GlobalFusion_Fcn_DW.FusDataInternal_temp[3429 + (int32_T)
                GlobalFusion_Fcn_DW.TrackCounter] =
                GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k];
              GlobalFusion_Fcn_DW.TrackCounter++;
            }

            /* Transition: '<S17>:3929' */
          } else {
            /* Transition: '<S17>:3925' */
            GlobalFusion_Fcn_DW.FusDataInternal_temp[3683 + (int32_T)
              GlobalFusion_Fcn_DW.TrackCounter] =
              GlobalFusion_Fcn_DW.MeasureData[GlobalFusion_Fcn_DW.k];
            GlobalFusion_Fcn_DW.FusDataInternal_temp[762 + (int32_T)
              GlobalFusion_Fcn_DW.TrackCounter] =
              GlobalFusion_Fcn_DW.MeasureData[256 + GlobalFusion_Fcn_DW.k];
            GlobalFusion_Fcn_DW.FusDataInternal_temp[889 + (int32_T)
              GlobalFusion_Fcn_DW.TrackCounter] =
              GlobalFusion_Fcn_DW.MeasureData[320 + GlobalFusion_Fcn_DW.k];
            GlobalFusion_Fcn_DW.TrackCounter++;
          }

          /* Transition: '<S17>:3928' */
          exitg1 = 1;
        } else if ((GlobalFusion_Fcn_DW.LoopError < 126.0) &&
                   (GlobalFusion_Fcn_DW.IDUsedFlag[(int32_T)
                    GlobalFusion_Fcn_DW.LastFusID] == 1)) {
          /* Transition: '<S17>:3920' */
          /* Transition: '<S17>:3914' */
          GlobalFusion_Fcn_DW.LoopError++;
        } else {
          /* Transition: '<S17>:3922' */
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      /* Transition: '<S17>:3927' */
      /* Transition: '<S17>:4963' */
    } else {
      /* Transition: '<S17>:3917' */
    }

    /* Transition: '<S17>:3912' */
    GlobalFusion_Fcn_DW.k++;
    GlobalFusion_Fcn_DW.LoopError = 0.0;
  }

  /* Transition: '<S17>:3913' */
}

/* Function for Chart: '<Root>/Fusion_Center' */
static void GlobalFusion_Fcn_chartstep_c19_GlobalFusion_Fcn(void)
{
  /* During: Fusion_Center */
  if (GlobalFusion_Fcn_DW.is_active_c19_GlobalFusion_Fcn == 0U) {
    /* Entry: Fusion_Center */
    GlobalFusion_Fcn_DW.is_active_c19_GlobalFusion_Fcn = 1U;

    /* Entry Internal: Fusion_Center */
    GlobalFusion_Fcn_DW.is_active_DataSet = 1U;

    /* Entry Internal 'DataSet': '<S17>:5034' */
    /* Transition: '<S17>:5042' */
    GlobalFusion_Fcn_DW.is_DataSet = GlobalFusion_Fcn_IN_C;
    GlobalFusion_Fcn_DW.is_active_Fusion_Main = 1U;

    /* Entry Internal 'Fusion_Main': '<S17>:5035' */
    /* Transition: '<S17>:5045' */
    GlobalFusion_Fcn_DW.is_Fusion_Main = GlobalFusion_Fcn_IN_D;
  } else {
    /* During 'DataSet': '<S17>:5034' */
    /* During 'C': '<S17>:5041' */
    /* Transition: '<S17>:5009' */
    /* Camera_Update */
    if (GlobalFusion_Fcn_DW.sfEvent == GlobalFusion_Fcn_event_CameraTrigger) {
      /* Transition: '<S17>:5012' */
      /* Transition: '<S17>:5014' */
      Set_Data_Source(1.0);
      Set_sampleTime(GlobalFusion_Fcn_B.NE_l);

      /* Transition: '<S17>:5031' */
      /* Transition: '<S17>:5030' */
      /* Transition: '<S17>:5029' */
    } else {
      /* Transition: '<S17>:5016' */
      /* SRR Update */
      if (GlobalFusion_Fcn_DW.sfEvent == GlobalFusion_Fcn_event_SRRTrigger) {
        /* Transition: '<S17>:5018' */
        /* Transition: '<S17>:5020' */
        Set_Data_Source(3.0);
        Set_sampleTime(GlobalFusion_Fcn_B.NE_a);

        /* Transition: '<S17>:5030' */
        /* Transition: '<S17>:5029' */
      } else {
        /* Transition: '<S17>:5022' */
        /* ESR Update */
        if (GlobalFusion_Fcn_DW.sfEvent == GlobalFusion_Fcn_event_ESRTrigger) {
          /* Transition: '<S17>:5024' */
          /* Transition: '<S17>:5026' */
          Set_Data_Source(2.0);
          Set_sampleTime(GlobalFusion_Fcn_B.NE_b);

          /* Transition: '<S17>:5029' */
        } else {
          /* Transition: '<S17>:5028' */
        }
      }
    }

    /* Transition: '<S17>:5033' */
    /* Transition: '<S17>:5043' */
    /* Entry Internal 'DataSet': '<S17>:5034' */
    /* Transition: '<S17>:5042' */
    GlobalFusion_Fcn_DW.is_DataSet = GlobalFusion_Fcn_IN_C;

    /* During 'Fusion_Main': '<S17>:5035' */
    /* During 'D': '<S17>:5044' */
    /* Transition: '<S17>:3888' */
    /* Transition: '<S17>:3930' */
    FusDataIni();
    FusTrackPredict();
    MeasurementsGen();
    FusTrackUpdate();
    FusTrackIni();

    /* Transition: '<S17>:4093' */
    GlobalFusion_Fcn_B.Num_Trg = (uint16_T)GlobalFusion_Fcn_DW.TrackCounter;
    GlobalFusion_Fcn_DW.LastCalTime = GlobalFusion_Fcn_DW.Sensor_sampleTime;
    if (GlobalFusion_Fcn_B.RollCount <= 2) {
      /* Transition: '<S17>:4984' */
      /* Transition: '<S17>:4988' */
      GlobalFusion_Fcn_B.RollCount++;

      /* Transition: '<S17>:4989' */
    } else {
      /* Transition: '<S17>:4986' */
      GlobalFusion_Fcn_B.RollCount = 0U;
    }

    /* Transition: '<S17>:4991' */
    /* Entry Internal 'Fusion_Main': '<S17>:5035' */
    /* Transition: '<S17>:5045' */
    GlobalFusion_Fcn_DW.is_Fusion_Main = GlobalFusion_Fcn_IN_D;
  }
}

/* Model step function */
void GlobalFusion_Fcn_step(void)
{
  int32_T i;
  boolean_T tmp;
  uint16_T unnamed_idx_0;
  uint16_T unnamed_idx_1;
  uint16_T unnamed_idx_2;
  int8_T rtTempZCSig_idx_0;
  int8_T rtTempZCSig_idx_1;
  int8_T rtTempZCSig_idx_2;
  ZCEventType zcEvent_idx_0;
  ZCEventType zcEvent_idx_1;
  ZCEventType zcEvent_idx_2;
  real_T u0;
  real_T u1;
  real_T u2;
  for (i = 0; i < 256; i++) {
    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/ESR_ObjData_Input'
     */
    GlobalFusion_Fcn_B.DataTypeConversion[i] = Get_ESR_ObjData_Input( i );

    /* Gain: '<S4>/N->E' */
    GlobalFusion_Fcn_B.NE[i] = GlobalFusion_Fcn_P.NE_Gain_f *
      GlobalFusion_Fcn_B.DataTypeConversion[i];
  }

  for (i = 0; i < 200; i++) {
    /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/Camera_ObjData_Input'
     */
    GlobalFusion_Fcn_B.DataTypeConversion_l[i] = Get_Camera_ObjData_Input( i );

    /* Gain: '<S2>/N->E' */
    GlobalFusion_Fcn_B.NE_j[i] = GlobalFusion_Fcn_P.NE_Gain_p *
      GlobalFusion_Fcn_B.DataTypeConversion_l[i];
  }

  for (i = 0; i < 160; i++) {
    /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/SRR_ObjData_Input'
     */
    GlobalFusion_Fcn_B.DataTypeConversion_b[i] = Get_SRR_ObjData_Input( i );

    /* Gain: '<S11>/N->E' */
    GlobalFusion_Fcn_B.NE_i[i] = GlobalFusion_Fcn_P.NE_Gain_h *
      GlobalFusion_Fcn_B.DataTypeConversion_b[i];
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/ESR_RxTime_Local'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_e = Get_ESR_RxTime_Local();

  /* Gain: '<S5>/N->E' */
  GlobalFusion_Fcn_B.NE_b = GlobalFusion_Fcn_P.NE_Gain_d *
    GlobalFusion_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/SRR_Rx_Time_Local'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_h = Get_SRR_Rx_Time_Local();

  /* Gain: '<S12>/N->E' */
  GlobalFusion_Fcn_B.NE_a = GlobalFusion_Fcn_P.NE_Gain_o *
    GlobalFusion_Fcn_B.DataTypeConversion_h;

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Camera_RxTime_Local'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_n = Get_Camera_RxTime_Local();

  /* Gain: '<S3>/N->E' */
  GlobalFusion_Fcn_B.NE_l = GlobalFusion_Fcn_P.NE_Gain_k *
    GlobalFusion_Fcn_B.DataTypeConversion_n;

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/VehSpd'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_bi = (real_T)
    Get_Global_Fus_VehSpdAvgDrvn();

  /* Gain: '<S15>/N->kph' */
  GlobalFusion_Fcn_B.Nkph = GlobalFusion_Fcn_P.Nkph_Gain *
    GlobalFusion_Fcn_B.DataTypeConversion_bi;

  /* Gain: '<S15>/kph->mps' */
  GlobalFusion_Fcn_B.kphmps = GlobalFusion_Fcn_P.kphmps_Gain *
    GlobalFusion_Fcn_B.Nkph;

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  GlobalFusion_Fcn_B.Compare = (uint8_T)(GlobalFusion_Fcn_B.kphmps <
    GlobalFusion_Fcn_P.CompareToConstant_const_lj);

  /* MultiPortSwitch: '<S1>/Multiport Switch' */
  if (GlobalFusion_Fcn_B.Compare == 0) {
    /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/YawRate'
     */
    GlobalFusion_Fcn_B.DataTypeConversion_a = (real_T)
      Get_Global_Fus_VehDynYawRate();

    /* Gain: '<S16>/N->E' */
    GlobalFusion_Fcn_B.NE_l1 = GlobalFusion_Fcn_P.NE_Gain_b *
      GlobalFusion_Fcn_B.DataTypeConversion_a;

    /* Gain: '<S16>/degps->radps' */
    GlobalFusion_Fcn_B.degpsradps = GlobalFusion_Fcn_P.degpsradps_Gain *
      GlobalFusion_Fcn_B.NE_l1;

    /* Product: '<S1>/Divide2' */
    GlobalFusion_Fcn_B.Divide2 = 1.0 / GlobalFusion_Fcn_B.kphmps *
      GlobalFusion_Fcn_B.degpsradps;
    GlobalFusion_Fcn_B.VehiclePathCurvature1m = GlobalFusion_Fcn_B.Divide2;
  } else {
    /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/StrWhAng'
     */
    GlobalFusion_Fcn_B.DataTypeConversion_k = (real_T)Get_Global_Fus_StrWhAng();

    /* Gain: '<S13>/N->E' */
    GlobalFusion_Fcn_B.NE_d = GlobalFusion_Fcn_P.NE_Gain *
      GlobalFusion_Fcn_B.DataTypeConversion_k;

    /* Gain: '<S13>/deg->rad' */
    GlobalFusion_Fcn_B.degrad = GlobalFusion_Fcn_P.degrad_Gain *
      GlobalFusion_Fcn_B.NE_d;

    /* Trigonometry: '<S1>/Trigonometric Function' */
    GlobalFusion_Fcn_B.TrigonometricFunction = sin(GlobalFusion_Fcn_B.degrad);

    /* Product: '<S1>/Divide1' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    GlobalFusion_Fcn_B.Divide1 = GlobalFusion_Fcn_B.TrigonometricFunction /
      GlobalFusion_Fcn_P.Constant1_Value;
    GlobalFusion_Fcn_B.VehiclePathCurvature1m = GlobalFusion_Fcn_B.Divide1;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/Constant'
   */
  GlobalFusion_Fcn_B.Divide = GlobalFusion_Fcn_P.Constant_Value_i4 /
    GlobalFusion_Fcn_B.VehiclePathCurvature1m;

  /* Saturate: '<S1>/Saturation2' */
  u0 = GlobalFusion_Fcn_B.Divide;
  u1 = GlobalFusion_Fcn_P.Saturation2_LowerSat;
  u2 = GlobalFusion_Fcn_P.Saturation2_UpperSat;
  if (u0 > u2) {
    GlobalFusion_Fcn_B.Saturation2 = u2;
  } else if (u0 < u1) {
    GlobalFusion_Fcn_B.Saturation2 = u1;
  } else {
    GlobalFusion_Fcn_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S1>/Saturation2' */

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Ego_Lane'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_j = (real_T) Get_GlobalFus_Ego_Lane_Position();

  /* Gain: '<S6>/N->E' */
  GlobalFusion_Fcn_B.NE_m = GlobalFusion_Fcn_P.NE_Gain_c  *
  GlobalFusion_Fcn_B.DataTypeConversion_j;

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Global_Fus_Camera_Trigger'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_jl = Get_Global_Fus_Camera_Trigger();

  /* Gain: '<S8>/N->E' */
  GlobalFusion_Fcn_B.NE_dy = (uint16_T)((uint32_T)GlobalFusion_Fcn_P.NE_Gain_bv *
    GlobalFusion_Fcn_B.DataTypeConversion_jl);

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Global_Fus_SRR_Trigger'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_p = Get_Global_Fus_SRR_Trigger();

  /* Gain: '<S10>/N->E' */
  GlobalFusion_Fcn_B.NE_c = (uint16_T)((uint32_T)GlobalFusion_Fcn_P.NE_Gain_l *
    GlobalFusion_Fcn_B.DataTypeConversion_p);

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Global_Fus_ESR_Trigger'
   */
  GlobalFusion_Fcn_B.DataTypeConversion_o = Get_Global_Fus_ESR_Trigger();

  /* Gain: '<S9>/N->E' */
  GlobalFusion_Fcn_B.NE_iy = (uint16_T)((uint32_T)GlobalFusion_Fcn_P.NE_Gain_i *
    GlobalFusion_Fcn_B.DataTypeConversion_o);

  /* Chart: '<Root>/Fusion_Center' incorporates:
   *  TriggerPort: '<S17>/ input events '
   */
  unnamed_idx_0 = GlobalFusion_Fcn_B.NE_dy;
  unnamed_idx_1 = GlobalFusion_Fcn_B.NE_c;
  unnamed_idx_2 = GlobalFusion_Fcn_B.NE_iy;
  rtTempZCSig_idx_0 = ( (unnamed_idx_0) > (0) );
  rtTempZCSig_idx_1 = ( (unnamed_idx_1) > (0) );
  rtTempZCSig_idx_2 = ( (unnamed_idx_2) > (0) );
  zcEvent_idx_0 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[0],
                              (rtTempZCSig_idx_0));
  zcEvent_idx_1 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[1],
                              (rtTempZCSig_idx_1));
  zcEvent_idx_2 = rt_I32ZCFcn(ANY_ZERO_CROSSING,
    &GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[2],
                              (rtTempZCSig_idx_2));
  tmp = (zcEvent_idx_0 != NO_ZCEVENT);
  tmp = (tmp || (zcEvent_idx_1 != NO_ZCEVENT));
  tmp = (tmp || (zcEvent_idx_2 != NO_ZCEVENT));
  if (tmp) {
    GlobalFusion_Fcn_B.inputevents[0] = (int8_T)zcEvent_idx_0;
    GlobalFusion_Fcn_B.inputevents[1] = (int8_T)zcEvent_idx_1;
    GlobalFusion_Fcn_B.inputevents[2] = (int8_T)zcEvent_idx_2;

    /* Gateway: Fusion_Center */
    if (GlobalFusion_Fcn_B.inputevents[0U] != 0) {
      /* Event: '<S17>:1364' */
      GlobalFusion_Fcn_DW.sfEvent = GlobalFusion_Fcn_event_CameraTrigger;
      GlobalFusion_Fcn_chartstep_c19_GlobalFusion_Fcn();
    }

    if (GlobalFusion_Fcn_B.inputevents[1U] != 0) {
      /* Event: '<S17>:5007' */
      GlobalFusion_Fcn_DW.sfEvent = GlobalFusion_Fcn_event_SRRTrigger;
      GlobalFusion_Fcn_chartstep_c19_GlobalFusion_Fcn();
    }

    if (GlobalFusion_Fcn_B.inputevents[2U] != 0) {
      /* Event: '<S17>:5008' */
      GlobalFusion_Fcn_DW.sfEvent = GlobalFusion_Fcn_event_ESRTrigger;
      GlobalFusion_Fcn_chartstep_c19_GlobalFusion_Fcn();
    }
  }

  for (i = 0; i < 3302; i++) {
    /* Gain: '<S7>/E->N' */
    GlobalFusion_Fcn_B.EN[i] = GlobalFusion_Fcn_P.EN_Gain *
      GlobalFusion_Fcn_B.FusDataOut[i];

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    Set_GlobalFusOut( i , GlobalFusion_Fcn_B.EN[i]);
  }

  /* Gain: '<S14>/E->N' */
  GlobalFusion_Fcn_B.EN_a = (uint32_T)GlobalFusion_Fcn_P.EN_Gain_l *
    GlobalFusion_Fcn_B.Num_Trg;

  /* DataTypeConversion: '<S14>/Data Type Conversion' */
  Set_Total_FusTargetNum((uint16_T)(GlobalFusion_Fcn_B.EN_a >> 15));
}

/* Model initialize function */
void GlobalFusion_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GlobalFusion_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &GlobalFusion_Fcn_B), 0,
                sizeof(B_GlobalFusion_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&GlobalFusion_Fcn_DW, 0,
                sizeof(DW_GlobalFusion_Fcn_T));

  /* Start for Chart: '<Root>/Fusion_Center' incorporates:
   *  Start for SubSystem: '<S17>/FusTrackPredict.Forecast'
   */
  /* VirtualOutportStart for Outport: '<S20>/RangeX' */
  GlobalFusion_Fcn_B.x_predict4x1[0] = GlobalFusion_Fcn_P.RangeX_Y0;

  /* VirtualOutportStart for Outport: '<S20>/VelX' */
  GlobalFusion_Fcn_B.Velocity_X = GlobalFusion_Fcn_P.VelX_Y0;

  /* VirtualOutportStart for Outport: '<S20>/RangeY' */
  GlobalFusion_Fcn_B.Range_Y = GlobalFusion_Fcn_P.RangeY_Y0;

  /* VirtualOutportStart for Outport: '<S20>/VelY' */
  GlobalFusion_Fcn_B.Velocity_Y = GlobalFusion_Fcn_P.VelY_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P11' */
  GlobalFusion_Fcn_B.Product_f[0] = GlobalFusion_Fcn_P.P11_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P12' */
  GlobalFusion_Fcn_B.Product1_j[0] = GlobalFusion_Fcn_P.P12_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P13' */
  GlobalFusion_Fcn_B.Product2[0] = GlobalFusion_Fcn_P.P13_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P14' */
  GlobalFusion_Fcn_B.Product3[0] = GlobalFusion_Fcn_P.P14_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P21' */
  GlobalFusion_Fcn_B.OutportBufferForP21 = GlobalFusion_Fcn_P.P21_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P22' */
  GlobalFusion_Fcn_B.OutportBufferForP22 = GlobalFusion_Fcn_P.P22_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P23' */
  GlobalFusion_Fcn_B.OutportBufferForP23 = GlobalFusion_Fcn_P.P23_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P24' */
  GlobalFusion_Fcn_B.OutportBufferForP24 = GlobalFusion_Fcn_P.P24_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P31' */
  GlobalFusion_Fcn_B.OutportBufferForP31 = GlobalFusion_Fcn_P.P31_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P32' */
  GlobalFusion_Fcn_B.OutportBufferForP32 = GlobalFusion_Fcn_P.P32_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P33' */
  GlobalFusion_Fcn_B.OutportBufferForP33 = GlobalFusion_Fcn_P.P33_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P34' */
  GlobalFusion_Fcn_B.OutportBufferForP34 = GlobalFusion_Fcn_P.P34_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P41' */
  GlobalFusion_Fcn_B.OutportBufferForP41 = GlobalFusion_Fcn_P.P41_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P42' */
  GlobalFusion_Fcn_B.OutportBufferForP42 = GlobalFusion_Fcn_P.P42_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P43' */
  GlobalFusion_Fcn_B.OutportBufferForP43 = GlobalFusion_Fcn_P.P43_Y0;

  /* VirtualOutportStart for Outport: '<S20>/P44' */
  GlobalFusion_Fcn_B.OutportBufferForP44 = GlobalFusion_Fcn_P.P44_Y0;

  /* Start for Chart: '<Root>/Fusion_Center' incorporates:
   *  Start for SubSystem: '<S17>/FusTrackUpdate.Update'
   */
  GlobalFusion_Fcn_FusTrackUpdateUpdate_Start
    (&GlobalFusion_Fcn_B.FusTrackUpdateUpdate,
     (P_FusTrackUpdateUpdate_GlobalFusion_Fcn_T *)
     &GlobalFusion_Fcn_P.FusTrackUpdateUpdate);

  /* Start for Chart: '<Root>/Fusion_Center' incorporates:
   *  Start for SubSystem: '<S17>/FusTrackUpdate.MDCal'
   */
  GlobalFusion_Fcn_FusTrackUpdateMDCal_Start
    (&GlobalFusion_Fcn_B.FusTrackUpdateMDCal,
     (P_FusTrackUpdateMDCal_GlobalFusion_Fcn_T *)
     &GlobalFusion_Fcn_P.FusTrackUpdateMDCal);

  /* Start for Chart: '<Root>/Fusion_Center' incorporates:
   *  Start for SubSystem: '<S17>/FusTrackIni.ESRInPathJudge'
   */
  /* VirtualOutportStart for Outport: '<S19>/InPathFlag' */
  GlobalFusion_Fcn_B.Switch_ms = GlobalFusion_Fcn_P.InPathFlag_Y0;
  GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[0] = UNINITIALIZED_ZCSIG;
  GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[1] = UNINITIALIZED_ZCSIG;
  GlobalFusion_Fcn_PrevZCX.Fusion_Center_Trig_ZCE[2] = UNINITIALIZED_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for Chart: '<Root>/Fusion_Center' */
    GlobalFusion_Fcn_DW.is_active_DataSet = 0U;
    GlobalFusion_Fcn_DW.is_DataSet = GlobalFusion_Fcn_IN_NO_ACTIVE_CHILD;
    GlobalFusion_Fcn_DW.is_active_Fusion_Main = 0U;
    GlobalFusion_Fcn_DW.is_Fusion_Main = GlobalFusion_Fcn_IN_NO_ACTIVE_CHILD;
    GlobalFusion_Fcn_DW.is_active_c19_GlobalFusion_Fcn = 0U;
    memset(&GlobalFusion_Fcn_DW.MeasureData[0], 0, 704U * sizeof(real_T));
    GlobalFusion_Fcn_DW.DataSource = 0U;
    GlobalFusion_Fcn_DW.Sensor_sampleTime = 0.0;
    GlobalFusion_Fcn_DW.n = 0U;
    GlobalFusion_Fcn_DW.k = 0U;
    for (i = 0; i < 4191; i++) {
      GlobalFusion_Fcn_DW.FusDataInternal_temp[i] = 0.0;
      GlobalFusion_Fcn_DW.FusDataInternal[i] = 0.0;
    }

    GlobalFusion_Fcn_DW.LastCalTime = 0.0;
    GlobalFusion_Fcn_DW.Rx3xgm = 0.0;
    GlobalFusion_Fcn_DW.Ry3xgm = 0.0;
    GlobalFusion_Fcn_DW.MD_min = 2000.0;
    GlobalFusion_Fcn_DW.MeasureFoundFlag = 0.0;
    GlobalFusion_Fcn_DW.MeasureFoundNum = 0.0;
    GlobalFusion_Fcn_DW.TrackCounter = 0.0;
    GlobalFusion_Fcn_DW.m = 0U;
    GlobalFusion_Fcn_DW.Num_Out = 0U;
    GlobalFusion_Fcn_DW.c = 0.0;
    GlobalFusion_Fcn_DW.LastFusID = 0.0;
    for (i = 0; i < 127; i++) {
      GlobalFusion_Fcn_DW.UpdateTrackFlag[i] = 0.0;
      GlobalFusion_Fcn_DW.IDUsedFlag[i] = 0U;
    }

    GlobalFusion_Fcn_DW.deltaT = 0.0;
    GlobalFusion_Fcn_DW.LoopError = 0.0;
    memset(&GlobalFusion_Fcn_B.FusDataOut[0], 0, 3302U * sizeof(real_T));
    GlobalFusion_Fcn_B.Num_Trg = 0U;
    GlobalFusion_Fcn_B.RollCount = 0U;

    /* End of InitializeConditions for Chart: '<Root>/Fusion_Center' */
  }
}

/* Model terminate function */
void GlobalFusion_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
