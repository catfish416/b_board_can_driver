/*
 * File: EPM_Driver_Fcn.c
 *
 * Code generated for Simulink model 'EPM_Driver_Fcn'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 08 17:26:27 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "interface.h"
#include "EPM_Driver_Fcn.h"
#include "EPM_Driver_Fcn_private.h"

/* Block signals (auto storage) */
B_EPM_Driver_Fcn_T EPM_Driver_Fcn_B;

/* Real-time model */
RT_MODEL_EPM_Driver_Fcn_T EPM_Driver_Fcn_M_;
RT_MODEL_EPM_Driver_Fcn_T *const EPM_Driver_Fcn_M = &EPM_Driver_Fcn_M_;

/* Model step function */
void EPM_Driver_Fcn_step(void)
{
  real_T u0;
  real_T u1;
  real_T u2;
  int8_T u0_0;
  int8_T u1_0;
  int8_T u2_0;

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/StrWhAng'
   */
  EPM_Driver_Fcn_B.DataTypeConversion = (real_T)Get_StrWhAng();

  /* Gain: '<S11>/N->E' */
  EPM_Driver_Fcn_B.NE = EPM_Driver_Fcn_P.NE_Gain *
    EPM_Driver_Fcn_B.DataTypeConversion;

  /* Gain: '<S11>/deg->rad' */
  EPM_Driver_Fcn_B.degrad = EPM_Driver_Fcn_P.degrad_Gain * EPM_Driver_Fcn_B.NE;

  /* Gain: '<S14>/Gain1' */
  EPM_Driver_Fcn_B.StrWhAng_c = EPM_Driver_Fcn_P.Gain1_Gain *
    EPM_Driver_Fcn_B.degrad;

  /* Saturate: '<S7>/Saturation' */
  u0 = EPM_Driver_Fcn_B.StrWhAng_c;
  u1 = EPM_Driver_Fcn_P.Saturation_LowerSat;
  u2 = EPM_Driver_Fcn_P.Saturation_UpperSat;
  if (u0 > u2) {
    EPM_Driver_Fcn_B.Saturation = u2;
  } else if (u0 < u1) {
    EPM_Driver_Fcn_B.Saturation = u1;
  } else {
    EPM_Driver_Fcn_B.Saturation = u0;
  }

  /* End of Saturate: '<S7>/Saturation' */

  /* Gain: '<S7>/E->N' */
  EPM_Driver_Fcn_B.EN = EPM_Driver_Fcn_P.EN_Gain * EPM_Driver_Fcn_B.Saturation;

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  u0 = floor(EPM_Driver_Fcn_B.EN);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Steering_Wheel_Angle_550((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)
                                (uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S7>/Data Type Conversion' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/YawRate'
   */
  EPM_Driver_Fcn_B.DataTypeConversion_a = (real_T)Get_VehDynYawRate();

  /* Gain: '<S13>/N->E' */
  EPM_Driver_Fcn_B.NE_d = EPM_Driver_Fcn_P.NE_Gain_i *
    EPM_Driver_Fcn_B.DataTypeConversion_a;

  /* Gain: '<S13>/degps->radps' */
  EPM_Driver_Fcn_B.degpsradps = EPM_Driver_Fcn_P.degpsradps_Gain *
    EPM_Driver_Fcn_B.NE_d;

  /* Gain: '<S14>/Gain2' */
  EPM_Driver_Fcn_B.YawRate = EPM_Driver_Fcn_P.Gain2_Gain *
    EPM_Driver_Fcn_B.degpsradps;

  /* Saturate: '<S10>/Saturation' */
  u0 = EPM_Driver_Fcn_B.YawRate;
  u1 = EPM_Driver_Fcn_P.Saturation_LowerSat_h;
  u2 = EPM_Driver_Fcn_P.Saturation_UpperSat_a;
  if (u0 > u2) {
    EPM_Driver_Fcn_B.Saturation_e = u2;
  } else if (u0 < u1) {
    EPM_Driver_Fcn_B.Saturation_e = u1;
  } else {
    EPM_Driver_Fcn_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S10>/Saturation' */

  /* Gain: '<S10>/E->N' */
  EPM_Driver_Fcn_B.EN_m = EPM_Driver_Fcn_P.EN_Gain_a *
    EPM_Driver_Fcn_B.Saturation_e;

  /* DataTypeConversion: '<S10>/Data Type Conversion' */
  u0 = floor(EPM_Driver_Fcn_B.EN_m);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Yaw_Rate_550((int16_T)(u0 < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)
    -u0 : (int32_T)(int16_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/VehSpd'
   */
  EPM_Driver_Fcn_B.DataTypeConversion_e = (real_T)Get_VehSpdAvgDrvn();

  /* Gain: '<S12>/N->kph' */
  EPM_Driver_Fcn_B.Nkph = EPM_Driver_Fcn_P.Nkph_Gain *
    EPM_Driver_Fcn_B.DataTypeConversion_e;

  /* Gain: '<S12>/kph->mps' */
  EPM_Driver_Fcn_B.kphmps = EPM_Driver_Fcn_P.kphmps_Gain * EPM_Driver_Fcn_B.Nkph;

  /* Gain: '<S14>/Gain3' */
  EPM_Driver_Fcn_B.VehSpdAveDrvn = EPM_Driver_Fcn_P.Gain3_Gain *
    EPM_Driver_Fcn_B.kphmps;

  /* Saturate: '<S8>/Saturation' */
  u0 = EPM_Driver_Fcn_B.VehSpdAveDrvn;
  u1 = EPM_Driver_Fcn_P.Saturation_LowerSat_b;
  u2 = EPM_Driver_Fcn_P.Saturation_UpperSat_ap;
  if (u0 > u2) {
    EPM_Driver_Fcn_B.Saturation_g = u2;
  } else if (u0 < u1) {
    EPM_Driver_Fcn_B.Saturation_g = u1;
  } else {
    EPM_Driver_Fcn_B.Saturation_g = u0;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Gain: '<S8>/E->N' */
  EPM_Driver_Fcn_B.EN_mg = EPM_Driver_Fcn_P.EN_Gain_c *
    EPM_Driver_Fcn_B.Saturation_g;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  u0 = floor(EPM_Driver_Fcn_B.EN_mg);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 65536.0);
  }

  Set_Vehicle_Speed_550((uint16_T)(u0 < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-u0 : (int32_T)(uint16_T)u0));

  /* End of DataTypeConversion: '<S8>/Data Type Conversion' */

  /* Saturate: '<S2>/Saturation' incorporates:
   *  Constant: '<S1>/Default'
   */
  u0_0 = EPM_Driver_Fcn_P.Default_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_m;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_an;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_k = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_k = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_k = u0_0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Gain: '<S2>/E->N' */
  EPM_Driver_Fcn_B.EN_g = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_b *
    EPM_Driver_Fcn_B.Saturation_k);

  /* DataTypeConversion: '<S2>/Data Type Conversion' */
  Set_Brakes_550((EPM_Driver_Fcn_B.EN_g != 0));

  /* Saturate: '<S4>/Saturation' incorporates:
   *  Constant: '<S1>/Default1'
   */
  u0_0 = EPM_Driver_Fcn_P.Default1_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_n;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_i;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_c = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_c = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_c = u0_0;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Gain: '<S4>/E->N' */
  EPM_Driver_Fcn_B.EN_p = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_i *
    EPM_Driver_Fcn_B.Saturation_c);

  /* DataTypeConversion: '<S4>/Data Type Conversion' */
  Set_Left_Blink_550((EPM_Driver_Fcn_B.EN_p != 0));

  /* Saturate: '<S6>/Saturation' incorporates:
   *  Constant: '<S1>/Default2'
   */
  u0_0 = EPM_Driver_Fcn_P.Default2_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_a;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_h;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_f = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_f = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_f = u0_0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/E->N' */
  EPM_Driver_Fcn_B.EN_h = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_l *
    EPM_Driver_Fcn_B.Saturation_f);

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  Set_Right_blink_550((EPM_Driver_Fcn_B.EN_h != 0));

  /* Saturate: '<S9>/Saturation' incorporates:
   *  Constant: '<S1>/Default3'
   */
  u0_0 = EPM_Driver_Fcn_P.Default3_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_p;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_b;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_h = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_h = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_h = u0_0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Gain: '<S9>/E->N' */
  EPM_Driver_Fcn_B.EN_o = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_m *
    EPM_Driver_Fcn_B.Saturation_h);

  /* DataTypeConversion: '<S9>/Data Type Conversion' */
  Set_Wipers_550((int8_T)(EPM_Driver_Fcn_B.EN_o >> 6));

  /* Saturate: '<S3>/Saturation' incorporates:
   *  Constant: '<S1>/Default4'
   */
  u0_0 = EPM_Driver_Fcn_P.Default4_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_f;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_d;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_p = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_p = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_p = u0_0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Gain: '<S3>/E->N' */
  EPM_Driver_Fcn_B.EN_on = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_g *
    EPM_Driver_Fcn_B.Saturation_p);

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  Set_Wipers_550((EPM_Driver_Fcn_B.EN_on != 0));

  /* Saturate: '<S5>/Saturation' incorporates:
   *  Constant: '<S1>/Default5'
   */
  u0_0 = EPM_Driver_Fcn_P.Default5_Value;
  u1_0 = EPM_Driver_Fcn_P.Saturation_LowerSat_ho;
  u2_0 = EPM_Driver_Fcn_P.Saturation_UpperSat_e;
  if (u0_0 > u2_0) {
    EPM_Driver_Fcn_B.Saturation_gl = u2_0;
  } else if (u0_0 < u1_0) {
    EPM_Driver_Fcn_B.Saturation_gl = u1_0;
  } else {
    EPM_Driver_Fcn_B.Saturation_gl = u0_0;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Gain: '<S5>/E->N' */
  EPM_Driver_Fcn_B.EN_a = (int16_T)(EPM_Driver_Fcn_P.EN_Gain_d *
    EPM_Driver_Fcn_B.Saturation_gl);

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  Set_Reverse_gear_550((EPM_Driver_Fcn_B.EN_a != 0));
}

/* Model initialize function */
void EPM_Driver_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(EPM_Driver_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &EPM_Driver_Fcn_B), 0,
                sizeof(B_EPM_Driver_Fcn_T));
}

/* Model terminate function */
void EPM_Driver_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
