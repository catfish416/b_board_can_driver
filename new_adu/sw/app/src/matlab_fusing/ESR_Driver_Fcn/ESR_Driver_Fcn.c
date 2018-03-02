/*
 * File: ESR_Driver_Fcn.c
 *
 * Code generated for Simulink model 'ESR_Driver_Fcn'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Thu Jul 06 13:57:13 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ESR_Driver_Fcn.h"
#include "ESR_Driver_Fcn_private.h"
#include "interface.h"
/* Block signals (auto storage) */
B_ESR_Driver_Fcn_T ESR_Driver_Fcn_B;

/* Real-time model */
RT_MODEL_ESR_Driver_Fcn_T ESR_Driver_Fcn_M_;
RT_MODEL_ESR_Driver_Fcn_T *const ESR_Driver_Fcn_M = &ESR_Driver_Fcn_M_;

/* Model step function */
void ESR_Driver_Fcn_step(void)
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/StrWhAngGrd'
   */
  ESR_Driver_Fcn_B.DataTypeConversion = (real_T)Get_StrWhAngGrd();

  /* Gain: '<S13>/N->E' */
  ESR_Driver_Fcn_B.NE = ESR_Driver_Fcn_P.NE_Gain *
    ESR_Driver_Fcn_B.DataTypeConversion;

  /* Gain: '<S13>/deg->rad' */
  ESR_Driver_Fcn_B.degrad = ESR_Driver_Fcn_P.degrad_Gain * ESR_Driver_Fcn_B.NE;

  /* Gain: '<S16>/rad->deg2' */
  ESR_Driver_Fcn_B.raddeg2 = ESR_Driver_Fcn_P.raddeg2_Gain *
    ESR_Driver_Fcn_B.degrad;

  /* Abs: '<S16>/Abs1' */
  ESR_Driver_Fcn_B.StrWhAngGrddegs = fabs(ESR_Driver_Fcn_B.raddeg2);

  /* Saturate: '<S4>/Saturation' */
  u0 = ESR_Driver_Fcn_B.StrWhAngGrddegs;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation = u0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Gain: '<S4>/E->N' */
  ESR_Driver_Fcn_B.EN = ESR_Driver_Fcn_P.EN_Gain * ESR_Driver_Fcn_B.Saturation;

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  u0 = floor(ESR_Driver_Fcn_B.EN);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_STEERING_ANGLE_RATE_4F0((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
                               (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/StrWhAng'
   */
  ESR_Driver_Fcn_B.DataTypeConversion_f = (real_T)Get_StrWhAng();

  /* Gain: '<S12>/N->E' */
  ESR_Driver_Fcn_B.NE_b = ESR_Driver_Fcn_P.NE_Gain_k *
    ESR_Driver_Fcn_B.DataTypeConversion_f;

  /* Gain: '<S12>/deg->rad' */
  ESR_Driver_Fcn_B.degrad_a = ESR_Driver_Fcn_P.degrad_Gain_l *
    ESR_Driver_Fcn_B.NE_b;

  /* Gain: '<S16>/rad->deg1' */
  ESR_Driver_Fcn_B.raddeg1 = ESR_Driver_Fcn_P.raddeg1_Gain *
    ESR_Driver_Fcn_B.degrad_a;

  /* Abs: '<S16>/Abs' */
  ESR_Driver_Fcn_B.StrWhAngdeg = fabs(ESR_Driver_Fcn_B.raddeg1);

  /* Saturate: '<S3>/Saturation' */
  u0 = ESR_Driver_Fcn_B.StrWhAngdeg;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_c;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_j;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_k = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_k = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_k = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Gain: '<S3>/E->N' */
  ESR_Driver_Fcn_B.EN_d = ESR_Driver_Fcn_P.EN_Gain_j *
    ESR_Driver_Fcn_B.Saturation_k;

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  u0 = floor(ESR_Driver_Fcn_B.EN_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_STEERING_ANGLE_4F0((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant2'
   */
  if (ESR_Driver_Fcn_B.degrad_a > ESR_Driver_Fcn_P.Switch_Threshold) {
    ESR_Driver_Fcn_B.STEERING_ANGLE_SIGN1_ClockWise =
      ESR_Driver_Fcn_P.Constant_Value_g;
  } else {
    ESR_Driver_Fcn_B.STEERING_ANGLE_SIGN1_ClockWise =
      ESR_Driver_Fcn_P.Constant2_Value_p;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Saturate: '<S6>/Saturation' */
  u0 = ESR_Driver_Fcn_B.STEERING_ANGLE_SIGN1_ClockWise;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_a;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_a;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_c = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_c = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_c = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/E->N' */
  ESR_Driver_Fcn_B.EN_m = ESR_Driver_Fcn_P.EN_Gain_d *
    ESR_Driver_Fcn_B.Saturation_c;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  Set_STEERING_ANGLE_SIGN_4F0((ESR_Driver_Fcn_B.EN_m != 0.0));

  /* Saturate: '<S7>/Saturation' incorporates:
   *  Constant: '<S16>/Constant2'
   */
  u0 = ESR_Driver_Fcn_P.Constant2_Value_a;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_e;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_m;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_a = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_a = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_a = u0;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Gain: '<S7>/E->N' */
  ESR_Driver_Fcn_B.EN_k = ESR_Driver_Fcn_P.EN_Gain_g *
    ESR_Driver_Fcn_B.Saturation_a;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  Set_STEERING_ANGLE_VALIDITY_4F0((ESR_Driver_Fcn_B.EN_k != 0.0));

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/VehSpd'
   */
  ESR_Driver_Fcn_B.DataTypeConversion_e = (real_T)Get_VehSpdAvgDrvn();

  /* Gain: '<S14>/N->kph' */
  ESR_Driver_Fcn_B.Nkph = ESR_Driver_Fcn_P.Nkph_Gain *
    ESR_Driver_Fcn_B.DataTypeConversion_e;

  /* Gain: '<S14>/kph->mps' */
  ESR_Driver_Fcn_B.kphmps = ESR_Driver_Fcn_P.kphmps_Gain * ESR_Driver_Fcn_B.Nkph;

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  ESR_Driver_Fcn_B.Compare = (uint8_T)(ESR_Driver_Fcn_B.kphmps <
    ESR_Driver_Fcn_P.CompareToConstant_const);

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/YawRate'
   */
  ESR_Driver_Fcn_B.DataTypeConversion_a = (real_T)Get_VehDynYawRate();

  /* Gain: '<S15>/N->E' */
  ESR_Driver_Fcn_B.NE_d = ESR_Driver_Fcn_P.NE_Gain_i *
    ESR_Driver_Fcn_B.DataTypeConversion_a;

  /* Gain: '<S15>/degps->radps' */
  ESR_Driver_Fcn_B.degpsradps = ESR_Driver_Fcn_P.degpsradps_Gain *
    ESR_Driver_Fcn_B.NE_d;

  /* MultiPortSwitch: '<S20>/Multiport Switch' */
  if (ESR_Driver_Fcn_B.Compare == 0) {
    /* Product: '<S20>/Divide1' */
    ESR_Driver_Fcn_B.Divide1 = 1.0 / ESR_Driver_Fcn_B.kphmps *
      ESR_Driver_Fcn_B.degpsradps;
    ESR_Driver_Fcn_B.VehiclePathCurvature1m = ESR_Driver_Fcn_B.Divide1;
  } else {
    /* Gain: '<S20>/Gain1' */
    ESR_Driver_Fcn_B.Gain1 = ESR_Driver_Fcn_P.Gain1_Gain *
      ESR_Driver_Fcn_B.degrad_a;

    /* Trigonometry: '<S20>/Trigonometric Function' */
    ESR_Driver_Fcn_B.TrigonometricFunction = sin(ESR_Driver_Fcn_B.Gain1);

    /* Product: '<S20>/Divide' incorporates:
     *  Constant: '<S20>/Constant'
     */
    ESR_Driver_Fcn_B.Divide = ESR_Driver_Fcn_B.TrigonometricFunction /
      ESR_Driver_Fcn_P.Constant_Value_b;
    ESR_Driver_Fcn_B.VehiclePathCurvature1m = ESR_Driver_Fcn_B.Divide;
  }

  /* End of MultiPortSwitch: '<S20>/Multiport Switch' */

  /* Saturate: '<S20>/Saturation' */
  u0 = ESR_Driver_Fcn_B.VehiclePathCurvature1m;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_o;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_l;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_n = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_n = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_n = u0;
  }

  /* End of Saturate: '<S20>/Saturation' */

  /* Product: '<S20>/Divide4' incorporates:
   *  Constant: '<S20>/Constant1'
   */
  ESR_Driver_Fcn_B.Divide4 = ESR_Driver_Fcn_P.Constant1_Value /
    ESR_Driver_Fcn_B.Saturation_n;

  /* Saturate: '<S2>/Saturation' */
  u0 = ESR_Driver_Fcn_B.Divide4;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_p;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_h;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_nt = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_nt = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_nt = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Gain: '<S2>/E->N' */
  ESR_Driver_Fcn_B.EN_f = ESR_Driver_Fcn_P.EN_Gain_m *
    ESR_Driver_Fcn_B.Saturation_nt;

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  u0 = floor(ESR_Driver_Fcn_B.EN_f);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_RADIUS_CURVATURE_4F0((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant2'
   */
  if (ESR_Driver_Fcn_B.degrad > ESR_Driver_Fcn_P.Switch_Threshold_d) {
    ESR_Driver_Fcn_B.STEERING_ANGLE_RATE_SIGN1_Clock =
      ESR_Driver_Fcn_P.Constant_Value_p;
  } else {
    ESR_Driver_Fcn_B.STEERING_ANGLE_RATE_SIGN1_Clock =
      ESR_Driver_Fcn_P.Constant2_Value_k;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Saturate: '<S5>/Saturation' */
  u0 = ESR_Driver_Fcn_B.STEERING_ANGLE_RATE_SIGN1_Clock;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_f;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_k;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_e = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_e = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/E->N' */
  ESR_Driver_Fcn_B.EN_l = ESR_Driver_Fcn_P.EN_Gain_n *
    ESR_Driver_Fcn_B.Saturation_e;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  Set_STEERING_ANGLE_RATE_SIGN_4F0((ESR_Driver_Fcn_B.EN_l != 0.0));

  /* Saturate: '<S11>/Saturation' incorporates:
   *  Constant: '<S16>/Constant1'
   */
  u0 = ESR_Driver_Fcn_P.Constant1_Value_c;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_cd;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_c;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_l = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_l = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_l = u0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Gain: '<S11>/E->N' */
  ESR_Driver_Fcn_B.EN_n = ESR_Driver_Fcn_P.EN_Gain_m3 *
    ESR_Driver_Fcn_B.Saturation_l;

  /* DataTypeConversion: '<S11>/Data Type Conversion' */
  Set_YAW_RATE_VALIDITY_4F0((ESR_Driver_Fcn_B.EN_n != 0.0));

  /* Gain: '<S16>/rad->deg' */
  ESR_Driver_Fcn_B.YawRatedegs = ESR_Driver_Fcn_P.raddeg_Gain *
    ESR_Driver_Fcn_B.degpsradps;

  /* Saturate: '<S10>/Saturation' */
  u0 = ESR_Driver_Fcn_B.YawRatedegs;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_j;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_md;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_e4 = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_e4 = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_e4 = u0;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/E->N' */
  ESR_Driver_Fcn_B.EN_h = ESR_Driver_Fcn_P.EN_Gain_c *
    ESR_Driver_Fcn_B.Saturation_e4;

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  u0 = floor(ESR_Driver_Fcn_B.EN_h);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_YAW_RATE_4F0((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)
    -u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant2'
   */
  if (ESR_Driver_Fcn_B.kphmps > ESR_Driver_Fcn_P.Switch_Threshold_f) {
    ESR_Driver_Fcn_B.VEHICLE_SPEED_DIRECTION0_Forwar =
      ESR_Driver_Fcn_P.Constant_Value;
  } else {
    ESR_Driver_Fcn_B.VEHICLE_SPEED_DIRECTION0_Forwar =
      ESR_Driver_Fcn_P.Constant2_Value;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Saturate: '<S9>/Saturation' */
  u0 = ESR_Driver_Fcn_B.VEHICLE_SPEED_DIRECTION0_Forwar;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_ab;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_ke;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_ke = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_ke = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_ke = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/E->N' */
  ESR_Driver_Fcn_B.EN_hx = ESR_Driver_Fcn_P.EN_Gain_f *
    ESR_Driver_Fcn_B.Saturation_ke;

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  Set_VEHICLE_SPEED_DIRECTION_4F0((ESR_Driver_Fcn_B.EN_hx != 0.0));

  /* Saturate: '<S8>/Saturation' */
  u0 = ESR_Driver_Fcn_B.kphmps;
  u1 = ESR_Driver_Fcn_P.Saturation_LowerSat_i;
  u2 = ESR_Driver_Fcn_P.Saturation_UpperSat_hg;
  if (u0 > u2) {
    ESR_Driver_Fcn_B.Saturation_j = u2;
  } else if (u0 < u1) {
    ESR_Driver_Fcn_B.Saturation_j = u1;
  } else {
    ESR_Driver_Fcn_B.Saturation_j = u0;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Gain: '<S8>/E->N' */
  ESR_Driver_Fcn_B.EN_kw = ESR_Driver_Fcn_P.EN_Gain_mj *
    ESR_Driver_Fcn_B.Saturation_j;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  u0 = floor(ESR_Driver_Fcn_B.EN_kw);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_VEHICLE_SPEED_4F0((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */
}

/* Model initialize function */
void ESR_Driver_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ESR_Driver_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ESR_Driver_Fcn_B), 0,
                sizeof(B_ESR_Driver_Fcn_T));
}

/* Model terminate function */
void ESR_Driver_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
