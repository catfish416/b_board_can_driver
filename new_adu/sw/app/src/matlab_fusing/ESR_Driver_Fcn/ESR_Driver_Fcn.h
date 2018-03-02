/*
 * File: ESR_Driver_Fcn.h
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

#ifndef RTW_HEADER_ESR_Driver_Fcn_h_
#define RTW_HEADER_ESR_Driver_Fcn_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef ESR_Driver_Fcn_COMMON_INCLUDES_
# define ESR_Driver_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ESR_Driver_Fcn_COMMON_INCLUDES_ */

#include "ESR_Driver_Fcn_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S13>/Data Type Conversion' */
  real_T NE;                           /* '<S13>/N->E' */
  real_T degrad;                       /* '<S13>/deg->rad' */
  real_T raddeg2;                      /* '<S16>/rad->deg2' */
  real_T StrWhAngGrddegs;              /* '<S16>/Abs1' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T EN;                           /* '<S4>/E->N' */
  real_T DataTypeConversion_f;         /* '<S12>/Data Type Conversion' */
  real_T NE_b;                         /* '<S12>/N->E' */
  real_T degrad_a;                     /* '<S12>/deg->rad' */
  real_T raddeg1;                      /* '<S16>/rad->deg1' */
  real_T StrWhAngdeg;                  /* '<S16>/Abs' */
  real_T Saturation_k;                 /* '<S3>/Saturation' */
  real_T EN_d;                         /* '<S3>/E->N' */
  real_T STEERING_ANGLE_SIGN1_ClockWise;/* '<S19>/Switch' */
  real_T Saturation_c;                 /* '<S6>/Saturation' */
  real_T EN_m;                         /* '<S6>/E->N' */
  real_T Saturation_a;                 /* '<S7>/Saturation' */
  real_T EN_k;                         /* '<S7>/E->N' */
  real_T DataTypeConversion_e;         /* '<S14>/Data Type Conversion' */
  real_T Nkph;                         /* '<S14>/N->kph' */
  real_T kphmps;                       /* '<S14>/kph->mps' */
  real_T DataTypeConversion_a;         /* '<S15>/Data Type Conversion' */
  real_T NE_d;                         /* '<S15>/N->E' */
  real_T degpsradps;                   /* '<S15>/degps->radps' */
  real_T VehiclePathCurvature1m;       /* '<S20>/Multiport Switch' */
  real_T Saturation_n;                 /* '<S20>/Saturation' */
  real_T Divide4;                      /* '<S20>/Divide4' */
  real_T Saturation_nt;                /* '<S2>/Saturation' */
  real_T EN_f;                         /* '<S2>/E->N' */
  real_T STEERING_ANGLE_RATE_SIGN1_Clock;/* '<S18>/Switch' */
  real_T Saturation_e;                 /* '<S5>/Saturation' */
  real_T EN_l;                         /* '<S5>/E->N' */
  real_T Saturation_l;                 /* '<S11>/Saturation' */
  real_T EN_n;                         /* '<S11>/E->N' */
  real_T YawRatedegs;                  /* '<S16>/rad->deg' */
  real_T Saturation_e4;                /* '<S10>/Saturation' */
  real_T EN_h;                         /* '<S10>/E->N' */
  real_T VEHICLE_SPEED_DIRECTION0_Forwar;/* '<S17>/Switch' */
  real_T Saturation_ke;                /* '<S9>/Saturation' */
  real_T EN_hx;                        /* '<S9>/E->N' */
  real_T Saturation_j;                 /* '<S8>/Saturation' */
  real_T EN_kw;                        /* '<S8>/E->N' */
  real_T Divide1;                      /* '<S20>/Divide1' */
  real_T Gain1;                        /* '<S20>/Gain1' */
  real_T TrigonometricFunction;        /* '<S20>/Trigonometric Function' */
  real_T Divide;                       /* '<S20>/Divide' */
  uint8_T Compare;                     /* '<S21>/Compare' */
} B_ESR_Driver_Fcn_T;

/* Parameters (auto storage) */
struct P_ESR_Driver_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S17>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant2_Value_k;            /* Expression: 1
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Constant2_Value_p;            /* Expression: 1
                                        * Referenced by: '<S19>/Constant2'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 2.86
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/15.6
                                        * Referenced by: '<S20>/Gain1'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  real_T raddeg2_Gain;                 /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 2047
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T EN_Gain;                      /* Expression: 1/1
                                        * Referenced by: '<S4>/E->N'
                                        */
  real_T NE_Gain_k;                    /* Expression: 0.0625
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T degrad_Gain_l;                /* Expression: pi/180
                                        * Referenced by: '<S12>/deg->rad'
                                        */
  real_T raddeg1_Gain;                 /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg1'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 2047
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S3>/Saturation'
                                        */
  real_T EN_Gain_j;                    /* Expression: 1/1
                                        * Referenced by: '<S3>/E->N'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S19>/Switch'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 1
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T EN_Gain_d;                    /* Expression: 1/1
                                        * Referenced by: '<S6>/E->N'
                                        */
  real_T Constant2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 1
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: 0
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real_T EN_Gain_g;                    /* Expression: 1/1
                                        * Referenced by: '<S7>/E->N'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Nkph_Gain;                    /* Expression: 0.015625
                                        * Referenced by: '<S14>/N->kph'
                                        */
  real_T kphmps_Gain;                  /* Expression: 1/3.6
                                        * Referenced by: '<S14>/kph->mps'
                                        */
  real_T NE_Gain_i;                    /* Expression: 0.0625
                                        * Referenced by: '<S15>/N->E'
                                        */
  real_T degpsradps_Gain;              /* Expression: pi/180
                                        * Referenced by: '<S15>/degps->radps'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 100000
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: 0.00001
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 8191
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: -8192
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T EN_Gain_m;                    /* Expression: 1/1
                                        * Referenced by: '<S2>/E->N'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S18>/Switch'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T EN_Gain_n;                    /* Expression: 1/1
                                        * Referenced by: '<S5>/E->N'
                                        */
  real_T Constant1_Value_c;            /* Expression: 1
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 1
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T Saturation_LowerSat_cd;       /* Expression: 0
                                        * Referenced by: '<S11>/Saturation'
                                        */
  real_T EN_Gain_m3;                   /* Expression: 1/1
                                        * Referenced by: '<S11>/E->N'
                                        */
  real_T raddeg_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S16>/rad->deg'
                                        */
  real_T Saturation_UpperSat_md;       /* Expression: 127.9375
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: -128
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T EN_Gain_c;                    /* Expression: 1/0.0625
                                        * Referenced by: '<S10>/E->N'
                                        */
  real_T Switch_Threshold_f;           /* Expression: 0.1
                                        * Referenced by: '<S17>/Switch'
                                        */
  real_T Saturation_UpperSat_ke;       /* Expression: 1
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T Saturation_LowerSat_ab;       /* Expression: 0
                                        * Referenced by: '<S9>/Saturation'
                                        */
  real_T EN_Gain_f;                    /* Expression: 1/1
                                        * Referenced by: '<S9>/E->N'
                                        */
  real_T Saturation_UpperSat_hg;       /* Expression: 127.9375
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T EN_Gain_mj;                   /* Expression: 1/0.0625
                                        * Referenced by: '<S8>/E->N'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ESR_Driver_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_ESR_Driver_Fcn_T ESR_Driver_Fcn_P;

/* Block signals (auto storage) */
extern B_ESR_Driver_Fcn_T ESR_Driver_Fcn_B;

/* Model entry point functions */
extern void ESR_Driver_Fcn_initialize(void);
extern void ESR_Driver_Fcn_step(void);
extern void ESR_Driver_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ESR_Driver_Fcn_T *const ESR_Driver_Fcn_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ESR_Driver_Fcn'
 * '<S1>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn'
 * '<S2>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_RADIUS_CURVATURE'
 * '<S3>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_STEERING_ANGLE'
 * '<S4>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_STEERING_ANGLE_RATE'
 * '<S5>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_STEERING_ANGLE_RATE_SIGN'
 * '<S6>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_STEERING_ANGLE_SIGN'
 * '<S7>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_STEERING_ANGLE_VALIDITY'
 * '<S8>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_VEHICLE_SPEED'
 * '<S9>'   : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_VEHICLE_SPEED_DIRECTION'
 * '<S10>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_YAW_RATE'
 * '<S11>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_4F0_YAW_RATE_VALIDITY'
 * '<S12>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_SrtWhlAng'
 * '<S13>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_SrtWhlAngGrd'
 * '<S14>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_VehSpd'
 * '<S15>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/Data_Cov_YawRate'
 * '<S16>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver'
 * '<S17>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver/SPEED_DIRECTION'
 * '<S18>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver/SPEED_DIRECTION2'
 * '<S19>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver/STEERING_ANGLE_SIGN'
 * '<S20>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver/Vehicle Path Curvature'
 * '<S21>'  : 'ESR_Driver_Fcn/ESR_Driver_Fcn/ESR_Driver/Vehicle Path Curvature/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_ESR_Driver_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
