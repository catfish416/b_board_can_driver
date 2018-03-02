/*
 * File: SideFusion_Fcn.h
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

#ifndef RTW_HEADER_SideFusion_Fcn_h_
#define RTW_HEADER_SideFusion_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SideFusion_Fcn_COMMON_INCLUDES_
# define SideFusion_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SideFusion_Fcn_COMMON_INCLUDES_ */

#include "SideFusion_Fcn_types.h"
#include "rt_i32zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S16>/Tracker_Initial.VelocityMethod' */
typedef struct {
  real_T Subtract2;                    /* '<S138>/Subtract2' */
  real_T Divide;                       /* '<S138>/Divide' */
  real_T Subtract1;                    /* '<S138>/Subtract1' */
  real_T MultiportSwitch;              /* '<S138>/Multiport Switch' */
  real_T Subtract3;                    /* '<S138>/Subtract3' */
  real_T Divide2;                      /* '<S138>/Divide2' */
  real_T Subtract4;                    /* '<S138>/Subtract4' */
  real_T MultiportSwitch1;             /* '<S138>/Multiport Switch1' */
  real_T Subtract5;                    /* '<S138>/Subtract5' */
  real_T Subtract2_d;                  /* '<S139>/Subtract2' */
  real_T Divide_l;                     /* '<S139>/Divide' */
  real_T Subtract1_e;                  /* '<S139>/Subtract1' */
  real_T MultiportSwitch_d;            /* '<S139>/Multiport Switch' */
  real_T Subtract3_b;                  /* '<S139>/Subtract3' */
  real_T Divide2_m;                    /* '<S139>/Divide2' */
  real_T Subtract4_c;                  /* '<S139>/Subtract4' */
  real_T MultiportSwitch1_g;           /* '<S139>/Multiport Switch1' */
  real_T Subtract5_n;                  /* '<S139>/Subtract5' */
  real_T ux1[2];                       /* '<S22>/Dmt' */
  real_T ux2[2];                       /* '<S22>/Math Function1' */
  real_T Gain2;                        /* '<S137>/Gain2' */
  real_T Gain3;                        /* '<S137>/Gain3' */
  real_T TmpSignalConversionAtMathFuncti[2];
  real_T MathFunction2[2];             /* '<S137>/Math Function2' */
  real_T Gain[4];                      /* '<S137>/Gain' */
  real_T Gain4;                        /* '<S137>/Gain4' */
  real_T Gain5;                        /* '<S137>/Gain5' */
  real_T TmpSignalConversionAtMathFunc_f[2];
  real_T MathFunction1[2];             /* '<S137>/Math Function1' */
  real_T Gain1[4];                     /* '<S137>/Gain1' */
  real_T Add[4];                       /* '<S137>/Add' */
  real_T Divide1;                      /* '<S22>/Divide1' */
  real_T Subtract1_f;                  /* '<S22>/Subtract1' */
  real_T MultiportSwitch_a;            /* '<S22>/Multiport Switch' */
  uint8_T Compare;                     /* '<S140>/Compare' */
  uint8_T Compare_f;                   /* '<S141>/Compare' */
  uint8_T Compare_d;                   /* '<S142>/Compare' */
  uint8_T Compare_l;                   /* '<S143>/Compare' */
  uint8_T Compare_h;                   /* '<S135>/Compare' */
} B_Tracker_InitialVelocityMeth_T;

/* Block states (auto storage) for system '<S16>/Tracker_Initial.VelocityMethod' */
typedef struct {
  real_T Divide1_DWORK1[2];            /* '<S22>/Divide1' */
} DW_Tracker_InitialVelocityMet_T;

/* Block signals for system '<S16>/Tracker_Initial.cos_cal' */
typedef struct {
  real_T Subtract2;                    /* '<S149>/Subtract2' */
  real_T MathFunction2;                /* '<S149>/Math Function2' */
  real_T Subtract3;                    /* '<S149>/Subtract3' */
  real_T MathFunction3;                /* '<S149>/Math Function3' */
  real_T Subtract4;                    /* '<S149>/Subtract4' */
  real_T Sqrt;                         /* '<S149>/Sqrt' */
  real_T Subtract2_j;                  /* '<S150>/Subtract2' */
  real_T MathFunction2_k;              /* '<S150>/Math Function2' */
  real_T Subtract3_g;                  /* '<S150>/Subtract3' */
  real_T MathFunction3_e;              /* '<S150>/Math Function3' */
  real_T Subtract4_f;                  /* '<S150>/Subtract4' */
  real_T Sqrt_d;                       /* '<S150>/Sqrt' */
  real_T MultiportSwitch;              /* '<S144>/Multiport Switch' */
  real_T Subtract3_n;                  /* '<S151>/Subtract3' */
  real_T MathFunction3_d;              /* '<S151>/Math Function3' */
  real_T Subtract2_m;                  /* '<S151>/Subtract2' */
  real_T MathFunction2_d;              /* '<S151>/Math Function2' */
  real_T Subtract4_f5;                 /* '<S151>/Subtract4' */
  real_T Sqrt_g;                       /* '<S151>/Sqrt' */
  real_T MathFunction4;                /* '<S144>/Math Function4' */
  real_T MathFunction3_d3;             /* '<S144>/Math Function3' */
  real_T MathFunction2_c;              /* '<S144>/Math Function2' */
  real_T Subtract2_f;                  /* '<S144>/Subtract2' */
  real_T Divide2;                      /* '<S144>/Divide2' */
  real_T Divide3;                      /* '<S144>/Divide3' */
  real_T TrigonometricFunction1;       /* '<S144>/Trigonometric Function1' */
  real_T Gain;                         /* '<S144>/Gain' */
  real_T Saturation2;                  /* '<S144>/Saturation2' */
  uint16_T Divide1;                    /* '<S144>/Divide1' */
  uint8_T Compare;                     /* '<S146>/Compare' */
  uint8_T Compare_p;                   /* '<S147>/Compare' */
  uint8_T Compare_m;                   /* '<S145>/Compare' */
} B_Tracker_Initialcos_cal_Side_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion[50];       /* '<S2>/Data Type Conversion' */
  real_T NE[50];                       /* '<S2>/N->E' */
  real_T DataTypeConversion_d;         /* '<S3>/Data Type Conversion' */
  real_T NE_i;                         /* '<S3>/N->E' */
  real_T DataTypeConversion_f[50];     /* '<S6>/Data Type Conversion' */
  real_T NE_f[50];                     /* '<S6>/N->E' */
  real_T DataTypeConversion_c;         /* '<S7>/Data Type Conversion' */
  real_T NE_o;                         /* '<S7>/N->E' */
  real_T DataTypeConversion_fz[50];    /* '<S4>/Data Type Conversion' */
  real_T NE_j[50];                     /* '<S4>/N->E' */
  real_T DataTypeConversion_g;         /* '<S5>/Data Type Conversion' */
  real_T NE_oq;                        /* '<S5>/N->E' */
  real_T DataTypeConversion_ff[50];    /* '<S8>/Data Type Conversion' */
  real_T NE_jr[50];                    /* '<S8>/N->E' */
  real_T DataTypeConversion_fc;        /* '<S9>/Data Type Conversion' */
  real_T NE_or;                        /* '<S9>/N->E' */
  real_T EN[160];                      /* '<S10>/E->N' */
  real_T EN_b;                         /* '<S11>/E->N' */
  real_T EN_m;                         /* '<S1>/E->N' */
  real_T FusDataInternal[1160];        /* '<Root>/Side_Fusion' */
  real_T deltaT;                       /* '<Root>/Side_Fusion' */
  real_T Measure_Data[240];            /* '<Root>/Side_Fusion' */
  real_T Measure_Num;                  /* '<Root>/Side_Fusion' */
  real_T SideFusOut[160];              /* '<Root>/Side_Fusion' */
  real_T Num_Out;                      /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_LFSRR[280];       /* '<Root>/Side_Fusion' */
  real_T Global_Fus_Event;             /* '<Root>/Side_Fusion' */
  real_T Fus_Time;                     /* '<Root>/Side_Fusion' */
  real_T RollCnt;                      /* '<Root>/Side_Fusion' */
  real_T xt;                           /* '<Root>/Side_Fusion' */
  real_T yt;                           /* '<Root>/Side_Fusion' */
  real_T xc;                           /* '<Root>/Side_Fusion' */
  real_T yc;                           /* '<Root>/Side_Fusion' */
  real_T Pre_x;                        /* '<Root>/Side_Fusion' */
  real_T Pre_vx;                       /* '<Root>/Side_Fusion' */
  real_T Pre_y;                        /* '<Root>/Side_Fusion' */
  real_T Pre_vy;                       /* '<Root>/Side_Fusion' */
  real_T pre_p11;                      /* '<Root>/Side_Fusion' */
  real_T pre_p12;                      /* '<Root>/Side_Fusion' */
  real_T pre_p13;                      /* '<Root>/Side_Fusion' */
  real_T pre_p14;                      /* '<Root>/Side_Fusion' */
  real_T pre_p21;                      /* '<Root>/Side_Fusion' */
  real_T pre_p22;                      /* '<Root>/Side_Fusion' */
  real_T pre_p23;                      /* '<Root>/Side_Fusion' */
  real_T pre_p24;                      /* '<Root>/Side_Fusion' */
  real_T pre_p31;                      /* '<Root>/Side_Fusion' */
  real_T pre_p32;                      /* '<Root>/Side_Fusion' */
  real_T pre_p33;                      /* '<Root>/Side_Fusion' */
  real_T pre_p34;                      /* '<Root>/Side_Fusion' */
  real_T pre_p41;                      /* '<Root>/Side_Fusion' */
  real_T pre_p42;                      /* '<Root>/Side_Fusion' */
  real_T pre_p43;                      /* '<Root>/Side_Fusion' */
  real_T pre_p44;                      /* '<Root>/Side_Fusion' */
  real_T mk;                           /* '<Root>/Side_Fusion' */
  real_T m00;                          /* '<Root>/Side_Fusion' */
  real_T m01;                          /* '<Root>/Side_Fusion' */
  real_T m2;                           /* '<Root>/Side_Fusion' */
  real_T m10;                          /* '<Root>/Side_Fusion' */
  real_T m11;                          /* '<Root>/Side_Fusion' */
  real_T m12;                          /* '<Root>/Side_Fusion' */
  real_T m20;                          /* '<Root>/Side_Fusion' */
  real_T m21;                          /* '<Root>/Side_Fusion' */
  real_T m22;                          /* '<Root>/Side_Fusion' */
  real_T Pt0;                          /* '<Root>/Side_Fusion' */
  real_T Pre_x_e;                      /* '<Root>/Side_Fusion' */
  real_T Pre_vx_o;                     /* '<Root>/Side_Fusion' */
  real_T Pre_y_m;                      /* '<Root>/Side_Fusion' */
  real_T Pre_vy_b;                     /* '<Root>/Side_Fusion' */
  real_T deltaT_l;                     /* '<Root>/Side_Fusion' */
  real_T pre_p11_k;                    /* '<Root>/Side_Fusion' */
  real_T pre_p12_l;                    /* '<Root>/Side_Fusion' */
  real_T pre_p13_d;                    /* '<Root>/Side_Fusion' */
  real_T pre_p14_e;                    /* '<Root>/Side_Fusion' */
  real_T pre_p21_p;                    /* '<Root>/Side_Fusion' */
  real_T pre_p22_i;                    /* '<Root>/Side_Fusion' */
  real_T pre_p23_f;                    /* '<Root>/Side_Fusion' */
  real_T pre_p24_m;                    /* '<Root>/Side_Fusion' */
  real_T pre_p31_k;                    /* '<Root>/Side_Fusion' */
  real_T pre_p32_e;                    /* '<Root>/Side_Fusion' */
  real_T pre_p33_e;                    /* '<Root>/Side_Fusion' */
  real_T pre_p34_k;                    /* '<Root>/Side_Fusion' */
  real_T pre_p41_d;                    /* '<Root>/Side_Fusion' */
  real_T pre_p42_m;                    /* '<Root>/Side_Fusion' */
  real_T pre_p43_d;                    /* '<Root>/Side_Fusion' */
  real_T pre_p44_c;                    /* '<Root>/Side_Fusion' */
  real_T x_t;                          /* '<Root>/Side_Fusion' */
  real_T y_t;                          /* '<Root>/Side_Fusion' */
  real_T x_m;                          /* '<Root>/Side_Fusion' */
  real_T y_m;                          /* '<Root>/Side_Fusion' */
  real_T vx_max;                       /* '<Root>/Side_Fusion' */
  real_T vx_min;                       /* '<Root>/Side_Fusion' */
  real_T vy_max;                       /* '<Root>/Side_Fusion' */
  real_T vy_min;                       /* '<Root>/Side_Fusion' */
  real_T Rxx;                          /* '<Root>/Side_Fusion' */
  real_T Ryy;                          /* '<Root>/Side_Fusion' */
  real_T threshod;                     /* '<Root>/Side_Fusion' */
  real_T ts;                           /* '<Root>/Side_Fusion' */
  real_T x1;                           /* '<Root>/Side_Fusion' */
  real_T y1;                           /* '<Root>/Side_Fusion' */
  real_T x2;                           /* '<Root>/Side_Fusion' */
  real_T y2;                           /* '<Root>/Side_Fusion' */
  real_T xm;                           /* '<Root>/Side_Fusion' */
  real_T ym;                           /* '<Root>/Side_Fusion' */
  real_T xt_o;                         /* '<Root>/Side_Fusion' */
  real_T vxt;                          /* '<Root>/Side_Fusion' */
  real_T yt_f;                         /* '<Root>/Side_Fusion' */
  real_T vyt;                          /* '<Root>/Side_Fusion' */
  real_T xj;                           /* '<Root>/Side_Fusion' */
  real_T yj;                           /* '<Root>/Side_Fusion' */
  real_T rangerate;                    /* '<Root>/Side_Fusion' */
  real_T InstallAng;                   /* '<Root>/Side_Fusion' */
  real_T P11;                          /* '<Root>/Side_Fusion' */
  real_T P13;                          /* '<Root>/Side_Fusion' */
  real_T P31;                          /* '<Root>/Side_Fusion' */
  real_T P33;                          /* '<Root>/Side_Fusion' */
  real_T R11;                          /* '<Root>/Side_Fusion' */
  real_T R12;                          /* '<Root>/Side_Fusion' */
  real_T R13;                          /* '<Root>/Side_Fusion' */
  real_T R21;                          /* '<Root>/Side_Fusion' */
  real_T R22;                          /* '<Root>/Side_Fusion' */
  real_T R23;                          /* '<Root>/Side_Fusion' */
  real_T R31;                          /* '<Root>/Side_Fusion' */
  real_T R32;                          /* '<Root>/Side_Fusion' */
  real_T R33;                          /* '<Root>/Side_Fusion' */
  real_T xt_h;                         /* '<Root>/Side_Fusion' */
  real_T vxt_e;                        /* '<Root>/Side_Fusion' */
  real_T yt_b;                         /* '<Root>/Side_Fusion' */
  real_T vyt_g;                        /* '<Root>/Side_Fusion' */
  real_T xj_k;                         /* '<Root>/Side_Fusion' */
  real_T yj_b;                         /* '<Root>/Side_Fusion' */
  real_T rangerate_e;                  /* '<Root>/Side_Fusion' */
  real_T InstallAng_l;                 /* '<Root>/Side_Fusion' */
  real_T P11_f;                        /* '<Root>/Side_Fusion' */
  real_T P13_h;                        /* '<Root>/Side_Fusion' */
  real_T P31_e;                        /* '<Root>/Side_Fusion' */
  real_T P33_d;                        /* '<Root>/Side_Fusion' */
  real_T R11_i;                        /* '<Root>/Side_Fusion' */
  real_T R12_d;                        /* '<Root>/Side_Fusion' */
  real_T R13_k;                        /* '<Root>/Side_Fusion' */
  real_T R21_e;                        /* '<Root>/Side_Fusion' */
  real_T R22_l;                        /* '<Root>/Side_Fusion' */
  real_T R23_e;                        /* '<Root>/Side_Fusion' */
  real_T R31_e;                        /* '<Root>/Side_Fusion' */
  real_T R32_k;                        /* '<Root>/Side_Fusion' */
  real_T R33_d;                        /* '<Root>/Side_Fusion' */
  real_T xt_c;                         /* '<Root>/Side_Fusion' */
  real_T vxt_b;                        /* '<Root>/Side_Fusion' */
  real_T yt_j;                         /* '<Root>/Side_Fusion' */
  real_T vyt_o;                        /* '<Root>/Side_Fusion' */
  real_T xj_n;                         /* '<Root>/Side_Fusion' */
  real_T yj_b5;                        /* '<Root>/Side_Fusion' */
  real_T rangerate_n;                  /* '<Root>/Side_Fusion' */
  real_T InstallAng_n;                 /* '<Root>/Side_Fusion' */
  real_T P11_fw;                       /* '<Root>/Side_Fusion' */
  real_T P13_hu;                       /* '<Root>/Side_Fusion' */
  real_T P31_l;                        /* '<Root>/Side_Fusion' */
  real_T P33_a;                        /* '<Root>/Side_Fusion' */
  real_T R11_l;                        /* '<Root>/Side_Fusion' */
  real_T R12_i;                        /* '<Root>/Side_Fusion' */
  real_T R13_f;                        /* '<Root>/Side_Fusion' */
  real_T R21_i;                        /* '<Root>/Side_Fusion' */
  real_T R22_f;                        /* '<Root>/Side_Fusion' */
  real_T R23_e2;                       /* '<Root>/Side_Fusion' */
  real_T R31_g;                        /* '<Root>/Side_Fusion' */
  real_T R32_p;                        /* '<Root>/Side_Fusion' */
  real_T R33_m;                        /* '<Root>/Side_Fusion' */
  real_T xt_oq;                        /* '<Root>/Side_Fusion' */
  real_T vxt_bp;                       /* '<Root>/Side_Fusion' */
  real_T yt_fi;                        /* '<Root>/Side_Fusion' */
  real_T vyt_f;                        /* '<Root>/Side_Fusion' */
  real_T xj_c;                         /* '<Root>/Side_Fusion' */
  real_T yj_k;                         /* '<Root>/Side_Fusion' */
  real_T rangerate_h;                  /* '<Root>/Side_Fusion' */
  real_T InstallAng_c;                 /* '<Root>/Side_Fusion' */
  real_T P11_g;                        /* '<Root>/Side_Fusion' */
  real_T P13_c;                        /* '<Root>/Side_Fusion' */
  real_T P31_h;                        /* '<Root>/Side_Fusion' */
  real_T P33_a1;                       /* '<Root>/Side_Fusion' */
  real_T R11_c;                        /* '<Root>/Side_Fusion' */
  real_T R12_l;                        /* '<Root>/Side_Fusion' */
  real_T R13_f2;                       /* '<Root>/Side_Fusion' */
  real_T R21_f;                        /* '<Root>/Side_Fusion' */
  real_T R22_n;                        /* '<Root>/Side_Fusion' */
  real_T R23_m;                        /* '<Root>/Side_Fusion' */
  real_T R31_n;                        /* '<Root>/Side_Fusion' */
  real_T R32_e;                        /* '<Root>/Side_Fusion' */
  real_T R33_c;                        /* '<Root>/Side_Fusion' */
  real_T Abs;                          /* '<S114>/Abs' */
  real_T Switch;                       /* '<S114>/Switch' */
  real_T TmpSignalConversionAtMathFuncti[3];
  real_T MathFunction2[3];             /* '<S119>/Math Function2' */
  real_T Gain[9];                      /* '<S119>/Gain' */
  real_T Abs_k;                        /* '<S115>/Abs' */
  real_T Switch_b;                     /* '<S115>/Switch' */
  real_T Abs_o;                        /* '<S116>/Abs' */
  real_T Switch_o;                     /* '<S116>/Switch' */
  real_T TmpSignalConversionAtMathFunc_f[3];
  real_T MathFunction1[3];             /* '<S119>/Math Function1' */
  real_T Gain1[9];                     /* '<S119>/Gain1' */
  real_T TmpSignalConversionAtMathFun_fj[3];
  real_T MathFunction4[3];             /* '<S119>/Math Function4' */
  real_T Gain2[9];                     /* '<S119>/Gain2' */
  real_T Add[9];                       /* '<S119>/Add' */
  real_T Abs_f;                        /* '<S117>/Abs' */
  real_T Switch_bp;                    /* '<S117>/Switch' */
  real_T TmpSignalConversionAtMathFunc_e[3];
  real_T MathFunction3[3];             /* '<S120>/Math Function3' */
  real_T Gain3[9];                     /* '<S120>/Gain3' */
  real_T Abs_fa;                       /* '<S118>/Abs' */
  real_T Switch_p;                     /* '<S118>/Switch' */
  real_T TmpSignalConversionAtMathFun_fz[3];
  real_T MathFunction1_p[3];           /* '<S120>/Math Function1' */
  real_T Gain1_a[9];                   /* '<S120>/Gain1' */
  real_T TmpSignalConversionAtMathFunc_p[3];
  real_T MathFunction2_a[3];           /* '<S120>/Math Function2' */
  real_T Gain2_m[9];                   /* '<S120>/Gain2' */
  real_T Add_f[9];                     /* '<S120>/Add' */
  real_T Stj3x3[9];                    /* '<S21>/Subtract1' */
  real_T Product1[3];                  /* '<S121>/Product1' */
  real_T Product2[3];                  /* '<S121>/Product2' */
  real_T Product3[3];                  /* '<S121>/Product3' */
  real_T Divide1;                      /* '<S112>/Divide1' */
  real_T Divide2;                      /* '<S112>/Divide2' */
  real_T Subtract3;                    /* '<S112>/Subtract3' */
  real_T Divide3;                      /* '<S112>/Divide3' */
  real_T Sqrt1;                        /* '<S112>/Sqrt1' */
  real_T Gain1_o;                      /* '<S127>/Gain1' */
  real_T Add_j;                        /* '<S127>/Add' */
  real_T TrigonometricFunction;        /* '<S127>/Trigonometric Function' */
  real_T Product;                      /* '<S127>/Product' */
  real_T Add2;                         /* '<S127>/Add2' */
  real_T TrigonometricFunction1;       /* '<S127>/Trigonometric Function1' */
  real_T Product1_o;                   /* '<S127>/Product1' */
  real_T Add1;                         /* '<S127>/Add1' */
  real_T Gain1_f;                      /* '<S128>/Gain1' */
  real_T Add_e;                        /* '<S128>/Add' */
  real_T TrigonometricFunction_a;      /* '<S128>/Trigonometric Function' */
  real_T Product_h;                    /* '<S128>/Product' */
  real_T Add2_f;                       /* '<S128>/Add2' */
  real_T TrigonometricFunction1_b;     /* '<S128>/Trigonometric Function1' */
  real_T Product1_p;                   /* '<S128>/Product1' */
  real_T Add1_m;                       /* '<S128>/Add1' */
  real_T Abs_d;                        /* '<S126>/Abs' */
  real_T Switch_n;                     /* '<S126>/Switch' */
  real_T Divide;                       /* '<S122>/Divide' */
  real_T TrigonometricFunction_h;      /* '<S122>/Trigonometric Function' */
  real_T TrigonometricFunction_i;      /* '<S125>/Trigonometric Function' */
  real_T Product_o;                    /* '<S125>/Product' */
  real_T TrigonometricFunction1_h;     /* '<S125>/Trigonometric Function1' */
  real_T Product1_d;                   /* '<S125>/Product1' */
  real_T Add1_e;                       /* '<S125>/Add1' */
  real_T TrigonometricFunction_f;      /* '<S123>/Trigonometric Function' */
  real_T Product_m;                    /* '<S123>/Product' */
  real_T TrigonometricFunction_it;     /* '<S124>/Trigonometric Function' */
  real_T Product_i;                    /* '<S124>/Product' */
  real_T TrigonometricFunction1_m;     /* '<S124>/Trigonometric Function1' */
  real_T Product1_e;                   /* '<S124>/Product1' */
  real_T Add1_a;                       /* '<S124>/Add1' */
  real_T TrigonometricFunction1_f;     /* '<S123>/Trigonometric Function1' */
  real_T Product1_i;                   /* '<S123>/Product1' */
  real_T Add1_o;                       /* '<S123>/Add1' */
  real_T Vtj3x1[3];                    /* '<S21>/Subtract2' */
  real_T Vtj1x3[3];                    /* '<S21>/Math Function2' */
  real_T Divide_e;                     /* '<S21>/Divide' */
  real_T Gain_l;                       /* '<S21>/Gain' */
  real_T MathFunction1_c;              /* '<S21>/Math Function1' */
  real_T Gtj;                          /* '<S21>/Divide1' */
  real_T Abs_db;                       /* '<S68>/Abs' */
  real_T Switch_c;                     /* '<S68>/Switch' */
  real_T TmpSignalConversionAtMathFun_pp[3];
  real_T MathFunction2_h[3];           /* '<S73>/Math Function2' */
  real_T Gain_m[9];                    /* '<S73>/Gain' */
  real_T Abs_dy;                       /* '<S69>/Abs' */
  real_T Switch_d;                     /* '<S69>/Switch' */
  real_T Abs_b;                        /* '<S70>/Abs' */
  real_T Switch_nb;                    /* '<S70>/Switch' */
  real_T TmpSignalConversionAtMathFu_fzy[3];
  real_T MathFunction1_d[3];           /* '<S73>/Math Function1' */
  real_T Gain1_e[9];                   /* '<S73>/Gain1' */
  real_T TmpSignalConversionAtMathFu_fju[3];
  real_T MathFunction4_a[3];           /* '<S73>/Math Function4' */
  real_T Gain2_c[9];                   /* '<S73>/Gain2' */
  real_T Add_em[9];                    /* '<S73>/Add' */
  real_T Abs_o2;                       /* '<S71>/Abs' */
  real_T Switch_a;                     /* '<S71>/Switch' */
  real_T TmpSignalConversionAtMathFun_ew[3];
  real_T MathFunction3_p[3];           /* '<S74>/Math Function3' */
  real_T Gain3_e[9];                   /* '<S74>/Gain3' */
  real_T Abs_oa;                       /* '<S72>/Abs' */
  real_T Switch_i;                     /* '<S72>/Switch' */
  real_T TmpSignalConversionAtMathF_fzyx[3];
  real_T MathFunction1_g[3];           /* '<S74>/Math Function1' */
  real_T Gain1_d[9];                   /* '<S74>/Gain1' */
  real_T TmpSignalConversionAtMathFu_ppu[3];
  real_T MathFunction2_he[3];          /* '<S74>/Math Function2' */
  real_T Gain2_f[9];                   /* '<S74>/Gain2' */
  real_T Add_l[9];                     /* '<S74>/Add' */
  real_T Stj3x3_a[9];                  /* '<S19>/Subtract1' */
  real_T Product1_a[3];                /* '<S75>/Product1' */
  real_T Product2_h[3];                /* '<S75>/Product2' */
  real_T Product3_l[3];                /* '<S75>/Product3' */
  real_T Divide1_b;                    /* '<S66>/Divide1' */
  real_T Divide2_m;                    /* '<S66>/Divide2' */
  real_T Subtract3_j;                  /* '<S66>/Subtract3' */
  real_T Divide3_i;                    /* '<S66>/Divide3' */
  real_T Sqrt1_k;                      /* '<S66>/Sqrt1' */
  real_T Gain1_g;                      /* '<S81>/Gain1' */
  real_T Add_n;                        /* '<S81>/Add' */
  real_T TrigonometricFunction_p;      /* '<S81>/Trigonometric Function' */
  real_T Product_mi;                   /* '<S81>/Product' */
  real_T Add2_n;                       /* '<S81>/Add2' */
  real_T TrigonometricFunction1_f3;    /* '<S81>/Trigonometric Function1' */
  real_T Product1_f;                   /* '<S81>/Product1' */
  real_T Add1_o0;                      /* '<S81>/Add1' */
  real_T Gain1_g1;                     /* '<S82>/Gain1' */
  real_T Add_i;                        /* '<S82>/Add' */
  real_T TrigonometricFunction_am;     /* '<S82>/Trigonometric Function' */
  real_T Product_n;                    /* '<S82>/Product' */
  real_T Add2_c;                       /* '<S82>/Add2' */
  real_T TrigonometricFunction1_a;     /* '<S82>/Trigonometric Function1' */
  real_T Product1_or;                  /* '<S82>/Product1' */
  real_T Add1_p;                       /* '<S82>/Add1' */
  real_T Abs_dc;                       /* '<S80>/Abs' */
  real_T Switch_l;                     /* '<S80>/Switch' */
  real_T Divide_h;                     /* '<S76>/Divide' */
  real_T TrigonometricFunction_m;      /* '<S76>/Trigonometric Function' */
  real_T TrigonometricFunction_o;      /* '<S79>/Trigonometric Function' */
  real_T Product_g;                    /* '<S79>/Product' */
  real_T TrigonometricFunction1_by;    /* '<S79>/Trigonometric Function1' */
  real_T Product1_g;                   /* '<S79>/Product1' */
  real_T Add1_j;                       /* '<S79>/Add1' */
  real_T TrigonometricFunction_j;      /* '<S77>/Trigonometric Function' */
  real_T Product_a;                    /* '<S77>/Product' */
  real_T TrigonometricFunction_hz;     /* '<S78>/Trigonometric Function' */
  real_T Product_f;                    /* '<S78>/Product' */
  real_T TrigonometricFunction1_k;     /* '<S78>/Trigonometric Function1' */
  real_T Product1_fo;                  /* '<S78>/Product1' */
  real_T Add1_i;                       /* '<S78>/Add1' */
  real_T TrigonometricFunction1_o;     /* '<S77>/Trigonometric Function1' */
  real_T Product1_m;                   /* '<S77>/Product1' */
  real_T Add1_of;                      /* '<S77>/Add1' */
  real_T Vtj3x1_n[3];                  /* '<S19>/Subtract2' */
  real_T Vtj1x3_h[3];                  /* '<S19>/Math Function2' */
  real_T Divide_d;                     /* '<S19>/Divide' */
  real_T Gain_h;                       /* '<S19>/Gain' */
  real_T MathFunction1_dn;             /* '<S19>/Math Function1' */
  real_T Gtj_d;                        /* '<S19>/Divide1' */
  real_T Abs_kb;                       /* '<S91>/Abs' */
  real_T Switch_ao;                    /* '<S91>/Switch' */
  real_T TmpSignalConversionAtMathF_ppun[3];
  real_T MathFunction2_b[3];           /* '<S96>/Math Function2' */
  real_T Gain_g[9];                    /* '<S96>/Gain' */
  real_T Abs_m;                        /* '<S92>/Abs' */
  real_T Switch_m;                     /* '<S92>/Switch' */
  real_T Abs_fe;                       /* '<S93>/Abs' */
  real_T Switch_bq;                    /* '<S93>/Switch' */
  real_T TmpSignalConversionAtMath_fzyxd[3];
  real_T MathFunction1_m[3];           /* '<S96>/Math Function1' */
  real_T Gain1_m[9];                   /* '<S96>/Gain1' */
  real_T TmpSignalConversionAtMathF_fjui[3];
  real_T MathFunction4_h[3];           /* '<S96>/Math Function4' */
  real_T Gain2_fx[9];                  /* '<S96>/Gain2' */
  real_T Add_b[9];                     /* '<S96>/Add' */
  real_T Abs_j;                        /* '<S94>/Abs' */
  real_T Switch_mv;                    /* '<S94>/Switch' */
  real_T TmpSignalConversionAtMathFu_ewm[3];
  real_T MathFunction3_i[3];           /* '<S97>/Math Function3' */
  real_T Gain3_p[9];                   /* '<S97>/Gain3' */
  real_T Abs_ka;                       /* '<S95>/Abs' */
  real_T Switch_ae;                    /* '<S95>/Switch' */
  real_T TmpSignalConversionAtMat_fzyxdb[3];
  real_T MathFunction1_h[3];           /* '<S97>/Math Function1' */
  real_T Gain1_c[9];                   /* '<S97>/Gain1' */
  real_T TmpSignalConversionAtMath_ppune[3];
  real_T MathFunction2_hx[3];          /* '<S97>/Math Function2' */
  real_T Gain2_o[9];                   /* '<S97>/Gain2' */
  real_T Add_g[9];                     /* '<S97>/Add' */
  real_T Stj3x3_f[9];                  /* '<S20>/Subtract1' */
  real_T Product1_l[3];                /* '<S98>/Product1' */
  real_T Product2_b[3];                /* '<S98>/Product2' */
  real_T Product3_o[3];                /* '<S98>/Product3' */
  real_T Divide1_b0;                   /* '<S89>/Divide1' */
  real_T Divide2_e;                    /* '<S89>/Divide2' */
  real_T Subtract3_e;                  /* '<S89>/Subtract3' */
  real_T Divide3_k;                    /* '<S89>/Divide3' */
  real_T Sqrt1_j;                      /* '<S89>/Sqrt1' */
  real_T Gain1_k;                      /* '<S104>/Gain1' */
  real_T Add_gv;                       /* '<S104>/Add' */
  real_T TrigonometricFunction_l;      /* '<S104>/Trigonometric Function' */
  real_T Product_gz;                   /* '<S104>/Product' */
  real_T TrigonometricFunction1_d;     /* '<S104>/Trigonometric Function1' */
  real_T Product1_h;                   /* '<S104>/Product1' */
  real_T Add1_b;                       /* '<S104>/Add1' */
  real_T Gain1_i;                      /* '<S105>/Gain1' */
  real_T Add_eq;                       /* '<S105>/Add' */
  real_T TrigonometricFunction_jt;     /* '<S105>/Trigonometric Function' */
  real_T Product_j;                    /* '<S105>/Product' */
  real_T TrigonometricFunction1_dl;    /* '<S105>/Trigonometric Function1' */
  real_T Product1_b;                   /* '<S105>/Product1' */
  real_T Add1_bw;                      /* '<S105>/Add1' */
  real_T Abs_h;                        /* '<S103>/Abs' */
  real_T Switch_lk;                    /* '<S103>/Switch' */
  real_T Divide_p;                     /* '<S99>/Divide' */
  real_T TrigonometricFunction_hy;     /* '<S99>/Trigonometric Function' */
  real_T L;                            /* '<S90>/Constant6' */
  real_T TrigonometricFunction_n;      /* '<S102>/Trigonometric Function' */
  real_T Product_c;                    /* '<S102>/Product' */
  real_T TrigonometricFunction1_a3;    /* '<S102>/Trigonometric Function1' */
  real_T Product1_c;                   /* '<S102>/Product1' */
  real_T Add1_k;                       /* '<S102>/Add1' */
  real_T TrigonometricFunction_e;      /* '<S100>/Trigonometric Function' */
  real_T Product_p;                    /* '<S100>/Product' */
  real_T TrigonometricFunction_p0;     /* '<S101>/Trigonometric Function' */
  real_T Product_hn;                   /* '<S101>/Product' */
  real_T TrigonometricFunction1_kq;    /* '<S101>/Trigonometric Function1' */
  real_T Product1_et;                  /* '<S101>/Product1' */
  real_T Add1_f;                       /* '<S101>/Add1' */
  real_T TrigonometricFunction1_ob;    /* '<S100>/Trigonometric Function1' */
  real_T Product1_pk;                  /* '<S100>/Product1' */
  real_T Add1_ar;                      /* '<S100>/Add1' */
  real_T Vtj3x1_i[3];                  /* '<S20>/Subtract2' */
  real_T Vtj1x3_g[3];                  /* '<S20>/Math Function2' */
  real_T Divide_k;                     /* '<S20>/Divide' */
  real_T Gain_p;                       /* '<S20>/Gain' */
  real_T MathFunction1_f;              /* '<S20>/Math Function1' */
  real_T Gtj_a;                        /* '<S20>/Divide1' */
  real_T Abs_j4;                       /* '<S45>/Abs' */
  real_T Switch_e;                     /* '<S45>/Switch' */
  real_T TmpSignalConversionAtMat_ppunem[3];
  real_T MathFunction2_br[3];          /* '<S50>/Math Function2' */
  real_T Gain_o[9];                    /* '<S50>/Gain' */
  real_T Abs_b3;                       /* '<S46>/Abs' */
  real_T Switch_k;                     /* '<S46>/Switch' */
  real_T Abs_e;                        /* '<S47>/Abs' */
  real_T Switch_m5;                    /* '<S47>/Switch' */
  real_T TmpSignalConversionAtMa_fzyxdb3[3];
  real_T MathFunction1_p5[3];          /* '<S50>/Math Function1' */
  real_T Gain1_p[9];                   /* '<S50>/Gain1' */
  real_T TmpSignalConversionAtMath_fjui3[3];
  real_T MathFunction4_f[3];           /* '<S50>/Math Function4' */
  real_T Gain2_n[9];                   /* '<S50>/Gain2' */
  real_T Add_b1[9];                    /* '<S50>/Add' */
  real_T Abs_jx;                       /* '<S48>/Abs' */
  real_T Switch_ol;                    /* '<S48>/Switch' */
  real_T TmpSignalConversionAtMathF_ewmt[3];
  real_T MathFunction3_g[3];           /* '<S51>/Math Function3' */
  real_T Gain3_e2[9];                  /* '<S51>/Gain3' */
  real_T Abs_l;                        /* '<S49>/Abs' */
  real_T Switch_f;                     /* '<S49>/Switch' */
  real_T TmpSignalConversionAtM_fzyxdb3o[3];
  real_T MathFunction1_gi[3];          /* '<S51>/Math Function1' */
  real_T Gain1_j[9];                   /* '<S51>/Gain1' */
  real_T TmpSignalConversionAtMa_ppunemv[3];
  real_T MathFunction2_ap[3];          /* '<S51>/Math Function2' */
  real_T Gain2_ca[9];                  /* '<S51>/Gain2' */
  real_T Add_gr[9];                    /* '<S51>/Add' */
  real_T Stj3x3_c[9];                  /* '<S18>/Subtract1' */
  real_T Product1_o3[3];               /* '<S52>/Product1' */
  real_T Product2_i[3];                /* '<S52>/Product2' */
  real_T Product3_g[3];                /* '<S52>/Product3' */
  real_T Divide1_o;                    /* '<S43>/Divide1' */
  real_T Divide2_d;                    /* '<S43>/Divide2' */
  real_T Subtract3_g;                  /* '<S43>/Subtract3' */
  real_T Divide3_g;                    /* '<S43>/Divide3' */
  real_T Sqrt1_p;                      /* '<S43>/Sqrt1' */
  real_T Gain1_as;                     /* '<S58>/Gain1' */
  real_T Add_lk;                       /* '<S58>/Add' */
  real_T TrigonometricFunction_ah;     /* '<S58>/Trigonometric Function' */
  real_T Product_m5;                   /* '<S58>/Product' */
  real_T TrigonometricFunction1_fk;    /* '<S58>/Trigonometric Function1' */
  real_T Product1_bn;                  /* '<S58>/Product1' */
  real_T Add1_d;                       /* '<S58>/Add1' */
  real_T Gain1_h;                      /* '<S59>/Gain1' */
  real_T Add_k;                        /* '<S59>/Add' */
  real_T TrigonometricFunction_p2;     /* '<S59>/Trigonometric Function' */
  real_T Product_jz;                   /* '<S59>/Product' */
  real_T TrigonometricFunction1_p;     /* '<S59>/Trigonometric Function1' */
  real_T Product1_fj;                  /* '<S59>/Product1' */
  real_T Add1_aj;                      /* '<S59>/Add1' */
  real_T Abs_i;                        /* '<S57>/Abs' */
  real_T Switch_g;                     /* '<S57>/Switch' */
  real_T Divide_dc;                    /* '<S53>/Divide' */
  real_T TrigonometricFunction_po;     /* '<S53>/Trigonometric Function' */
  real_T L_g;                          /* '<S44>/Constant6' */
  real_T TrigonometricFunction_g;      /* '<S56>/Trigonometric Function' */
  real_T Product_fm;                   /* '<S56>/Product' */
  real_T TrigonometricFunction1_a0;    /* '<S56>/Trigonometric Function1' */
  real_T Product1_dk;                  /* '<S56>/Product1' */
  real_T Add1_bi;                      /* '<S56>/Add1' */
  real_T TrigonometricFunction_d;      /* '<S54>/Trigonometric Function' */
  real_T Product_d;                    /* '<S54>/Product' */
  real_T TrigonometricFunction_lb;     /* '<S55>/Trigonometric Function' */
  real_T Product_pu;                   /* '<S55>/Product' */
  real_T TrigonometricFunction1_hw;    /* '<S55>/Trigonometric Function1' */
  real_T Product1_ok;                  /* '<S55>/Product1' */
  real_T Add1_dn;                      /* '<S55>/Add1' */
  real_T TrigonometricFunction1_m4;    /* '<S54>/Trigonometric Function1' */
  real_T Product1_cf;                  /* '<S54>/Product1' */
  real_T Add1_pb;                      /* '<S54>/Add1' */
  real_T Vtj3x1_nr[3];                 /* '<S18>/Subtract2' */
  real_T Vtj1x3_i[3];                  /* '<S18>/Math Function2' */
  real_T Divide_n;                     /* '<S18>/Divide' */
  real_T Gain_e;                       /* '<S18>/Gain' */
  real_T MathFunction1_l;              /* '<S18>/Math Function1' */
  real_T Gtj_e;                        /* '<S18>/Divide1' */
  real_T Abs_ju;                       /* '<S26>/Abs' */
  real_T Switch_ax;                    /* '<S26>/Switch' */
  real_T Abs_f4;                       /* '<S27>/Abs' */
  real_T Switch_bj;                    /* '<S27>/Switch' */
  real_T Abs_kay;                      /* '<S28>/Abs' */
  real_T Switch_da;                    /* '<S28>/Switch' */
  real_T Abs_ir;                       /* '<S29>/Abs' */
  real_T Switch_o1;                    /* '<S29>/Switch' */
  real_T TmpSignalConversionAtMathFunc_k[4];
  real_T MathFunction[4];              /* '<S39>/Math Function' */
  real_T Product_fr[16];               /* '<S39>/Product' */
  real_T TmpSignalConversionAt_fzyxdb3o4[4];
  real_T MathFunction1_lw[4];          /* '<S40>/Math Function1' */
  real_T Product1_fb[16];              /* '<S40>/Product1' */
  real_T TmpSignalConversionAtMathFun_kf[4];
  real_T MathFunction_n[4];            /* '<S41>/Math Function' */
  real_T Product_hk[16];               /* '<S41>/Product' */
  real_T TmpSignalConversionA_fzyxdb3o4n[4];
  real_T MathFunction1_fr[4];          /* '<S42>/Math Function1' */
  real_T Product1_aw[16];              /* '<S42>/Product1' */
  real_T Add_gs[16];                   /* '<S37>/Add' */
  real_T X_k4x1[4];
  real_T x_predict4x1[4];              /* '<S32>/Product' */
  real_T Range_Y;
  real_T Velocity_X;
  real_T Velocity_Y;
  real_T TmpSignalConversionAtM_ppunemv5[4];
  real_T MathFunction2_o[4];           /* '<S30>/Math Function2' */
  real_T Gain_b[16];                   /* '<S30>/Gain' */
  real_T TmpSignalConversion_fzyxdb3o4nr[4];
  real_T MathFunction1_pj[4];          /* '<S30>/Math Function1' */
  real_T Gain1_fr[16];                 /* '<S30>/Gain1' */
  real_T TmpSignalConversionAtMat_fjui3t[4];
  real_T MathFunction4_k[4];           /* '<S30>/Math Function4' */
  real_T Gain2_ot[16];                 /* '<S30>/Gain2' */
  real_T TmpSignalConversionAtMath_ewmt4[4];
  real_T MathFunction3_ir[4];          /* '<S30>/Math Function3' */
  real_T Gain3_h[16];                  /* '<S30>/Gain3' */
  real_T Add_n1[16];                   /* '<S30>/Add' */
  real_T MathFunction_a[16];           /* '<S32>/Math Function' */
  real_T P_predict[16];                /* '<S32>/Product1' */
  real_T P_predict_o[16];              /* '<S32>/Subtract2' */
  real_T Product_k[4];                 /* '<S17>/Product' */
  real_T Product1_ef[4];               /* '<S17>/Product1' */
  real_T Product2_d[4];                /* '<S17>/Product2' */
  real_T Product3_d[4];                /* '<S17>/Product3' */
  real_T Saturation;                   /* '<S17>/Saturation' */
  real_T Saturation1;                  /* '<S17>/Saturation1' */
  real_T Saturation10;                 /* '<S17>/Saturation10' */
  real_T Saturation11;                 /* '<S17>/Saturation11' */
  real_T Saturation12;                 /* '<S17>/Saturation12' */
  real_T Saturation13;                 /* '<S17>/Saturation13' */
  real_T Saturation14;                 /* '<S17>/Saturation14' */
  real_T Saturation15;                 /* '<S17>/Saturation15' */
  real_T Saturation2;                  /* '<S17>/Saturation2' */
  real_T Saturation3;                  /* '<S17>/Saturation3' */
  real_T Saturation4;                  /* '<S17>/Saturation4' */
  real_T Saturation5;                  /* '<S17>/Saturation5' */
  real_T Saturation6;                  /* '<S17>/Saturation6' */
  real_T Saturation7;                  /* '<S17>/Saturation7' */
  real_T Saturation8;                  /* '<S17>/Saturation8' */
  real_T Saturation9;                  /* '<S17>/Saturation9' */
  real_T Saturation_p;                 /* '<S159>/Saturation' */
  real_T Abs_b2;                       /* '<S169>/Abs' */
  real_T Switch_iv;                    /* '<S169>/Switch' */
  real_T Saturation1_d;                /* '<S159>/Saturation1' */
  real_T Saturation2_p;                /* '<S159>/Saturation2' */
  real_T Saturation3_a;                /* '<S159>/Saturation3' */
  real_T TmpSignalConversionAt_ppunemv5r[4];
  real_T MathFunction2_c[4];           /* '<S173>/Math Function2' */
  real_T Gain_i[16];                   /* '<S173>/Gain' */
  real_T Saturation4_l;                /* '<S159>/Saturation4' */
  real_T Saturation5_h;                /* '<S159>/Saturation5' */
  real_T Abs_kf;                       /* '<S170>/Abs' */
  real_T Switch_i5;                    /* '<S170>/Switch' */
  real_T Saturation6_a;                /* '<S159>/Saturation6' */
  real_T Saturation7_b;                /* '<S159>/Saturation7' */
  real_T TmpSignalConversio_fzyxdb3o4nro[4];
  real_T MathFunction1_b[4];           /* '<S173>/Math Function1' */
  real_T Gain1_ko[16];                 /* '<S173>/Gain1' */
  real_T Saturation8_i;                /* '<S159>/Saturation8' */
  real_T Saturation9_f;                /* '<S159>/Saturation9' */
  real_T Saturation10_a;               /* '<S159>/Saturation10' */
  real_T Abs_oh;                       /* '<S171>/Abs' */
  real_T Switch_bd;                    /* '<S171>/Switch' */
  real_T Saturation11_j;               /* '<S159>/Saturation11' */
  real_T TmpSignalConversionAtMa_fjui3tr[4];
  real_T MathFunction4_m[4];           /* '<S173>/Math Function4' */
  real_T Gain2_d[16];                  /* '<S173>/Gain2' */
  real_T Saturation14_p;               /* '<S159>/Saturation14' */
  real_T Saturation15_l;               /* '<S159>/Saturation15' */
  real_T Saturation12_i;               /* '<S159>/Saturation12' */
  real_T Saturation13_e;               /* '<S159>/Saturation13' */
  real_T Abs_n;                        /* '<S172>/Abs' */
  real_T Switch_aa;                    /* '<S172>/Switch' */
  real_T TmpSignalConversionAtMat_ewmt4t[4];
  real_T MathFunction3_k[4];           /* '<S173>/Math Function3' */
  real_T Gain3_c[16];                  /* '<S173>/Gain3' */
  real_T Add_o[16];                    /* '<S173>/Add' */
  real_T uX2[8];                       /* '<S160>/Math Function1' */
  real_T HT4x2[8];                     /* '<S161>/Math Function' */
  real_T Product4[4];                  /* '<S161>/Product4' */
  real_T TmpSignalConversionA_ppunemv5r4[2];
  real_T MathFunction2_ht[2];          /* '<S175>/Math Function2' */
  real_T Gain_f[4];                    /* '<S175>/Gain' */
  real_T TmpSignalConversi_fzyxdb3o4nrow[2];
  real_T MathFunction1_cz[2];          /* '<S175>/Math Function1' */
  real_T Gain1_ga[4];                  /* '<S175>/Gain1' */
  real_T Add_d[4];                     /* '<S175>/Add' */
  real_T S2x2[4];                      /* '<S161>/Subtract2' */
  real_T K4X2[8];                      /* '<S160>/Divide' */
  real_T Vt32X1[2];
  real_T Divide_o[2];                  /* '<S163>/Divide' */
  real_T Vt22X1[2];
  real_T Divide1_a[2];                 /* '<S163>/Divide1' */
  real_T Vt12X1[2];
  real_T Divide2_i[2];                 /* '<S163>/Divide2' */
  real_T V2X1[2];                      /* '<S163>/Subtract2' */
  real_T uX2_f[2];                     /* '<S166>/Math Function1' */
  real_T uX2_d[4];                     /* '<S166>/Divide3' */
  real_T Divide1_k[4];                 /* '<S166>/Divide1' */
  real_T uX2_a[2];                     /* '<S166>/Math Function2' */
  real_T uX2_m[4];                     /* '<S166>/Divide4' */
  real_T Divide2_eu[4];                /* '<S166>/Divide2' */
  real_T uX2_n[2];                     /* '<S166>/Math Function3' */
  real_T uX2_e[4];                     /* '<S166>/Divide6' */
  real_T Divide5[4];                   /* '<S166>/Divide5' */
  real_T uX2_o[4];                     /* '<S166>/Subtract2' */
  real_T uX2_j[2];                     /* '<S166>/Math Function4' */
  real_T uX2_c[4];                     /* '<S166>/Divide7' */
  real_T uX2_p[4];                     /* '<S166>/Subtract1' */
  real_T uX4[8];                       /* '<S166>/Math Function5' */
  real_T uX4_f[16];                    /* '<S166>/Divide8' */
  real_T uX4_fi[16];                   /* '<S167>/Divide8' */
  real_T Subtract1;                    /* '<S168>/Subtract1' */
  real_T uX4_k[16];                    /* '<S168>/Divide1' */
  real_T ux4[16];                      /* '<S168>/Subtract2' */
  real_T uX4_o[16];                    /* '<S168>/Divide2' */
  real_T uX4_e[16];                    /* '<S168>/Divide3' */
  real_T Subtract1_m[16];              /* '<S164>/Subtract1' */
  real_T Product_oz[4];                /* '<S158>/Product' */
  real_T Saturation_c;                 /* '<S156>/Saturation' */
  real_T Product1_b4[4];               /* '<S158>/Product1' */
  real_T Saturation1_c;                /* '<S156>/Saturation1' */
  real_T Product2_hf[4];               /* '<S158>/Product2' */
  real_T Saturation10_p;               /* '<S156>/Saturation10' */
  real_T Product3_m[4];                /* '<S158>/Product3' */
  real_T Saturation11_e;               /* '<S156>/Saturation11' */
  real_T Saturation12_g;               /* '<S156>/Saturation12' */
  real_T Saturation13_h;               /* '<S156>/Saturation13' */
  real_T Saturation14_e;               /* '<S156>/Saturation14' */
  real_T Saturation16;                 /* '<S156>/Saturation16' */
  real_T Saturation2_j;                /* '<S156>/Saturation2' */
  real_T Saturation3_h;                /* '<S156>/Saturation3' */
  real_T Saturation4_j;                /* '<S156>/Saturation4' */
  real_T Saturation5_o;                /* '<S156>/Saturation5' */
  real_T Saturation6_o;                /* '<S156>/Saturation6' */
  real_T Saturation7_d;                /* '<S156>/Saturation7' */
  real_T Saturation8_l;                /* '<S156>/Saturation8' */
  real_T Saturation9_m;                /* '<S156>/Saturation9' */
  real_T uX1[4];                       /* '<S165>/Divide3' */
  real_T Subtract1_b[4];               /* '<S165>/Subtract1' */
  real_T OutportBufferForRangeY;       /* '<S25>/Model_Update' */
  real_T OutportBufferForVelX;         /* '<S25>/Model_Update' */
  real_T OutportBufferForVelY;         /* '<S25>/Model_Update' */
  real_T Product_e;                    /* '<S153>/Product' */
  real_T Product1_ik;                  /* '<S153>/Product1' */
  real_T Add_in;                       /* '<S153>/Add' */
  real_T Product2_n;                   /* '<S153>/Product2' */
  real_T Product3_j;                   /* '<S153>/Product3' */
  real_T Add1_oq;                      /* '<S153>/Add1' */
  real_T Sqrt;                         /* '<S153>/Sqrt' */
  real_T Product4_d;                   /* '<S153>/Product4' */
  real_T Product5;                     /* '<S153>/Product5' */
  real_T Add2_p;                       /* '<S153>/Add2' */
  real_T Sqrt1_f;                      /* '<S153>/Sqrt1' */
  real_T Product6;                     /* '<S153>/Product6' */
  real_T Divide_p2;                    /* '<S153>/Divide' */
  real_T TrigonometricFunction_mx;     /* '<S153>/Trigonometric Function' */
  real_T raddeg;                       /* '<S153>/rad->deg' */
  real_T Product2_i0;                  /* '<S154>/Product2' */
  real_T Product3_c;                   /* '<S154>/Product3' */
  real_T Add1_n;                       /* '<S154>/Add1' */
  real_T Sqrt_a;                       /* '<S154>/Sqrt' */
  real_T Range_AngleTable;             /* '<S154>/Range_AngleTable' */
  real_T Add1_c;                       /* '<S24>/Add1' */
  uint16_T NE_g;                       /* '<S12>/N->E' */
  uint16_T NE_h;                       /* '<S14>/N->E' */
  uint16_T NE_jx;                      /* '<S13>/N->E' */
  uint16_T NE_n;                       /* '<S15>/N->E' */
  int8_T inputevents[4];               /* '<Root>/Side_Fusion' */
  uint8_T DataTypeConversion_f1;       /* '<S12>/Data Type Conversion' */
  uint8_T DataTypeConversion_o;        /* '<S14>/Data Type Conversion' */
  uint8_T DataTypeConversion_dx;       /* '<S13>/Data Type Conversion' */
  uint8_T DataTypeConversion_b;        /* '<S15>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S130>/Compare' */
  uint8_T Compare_a;                   /* '<S131>/Compare' */
  uint8_T Compare_l;                   /* '<S132>/Compare' */
  uint8_T Compare_ly;                  /* '<S133>/Compare' */
  uint8_T Compare_lc;                  /* '<S134>/Compare' */
  uint8_T Compare_c;                   /* '<S129>/Compare' */
  uint8_T Compare_d;                   /* '<S84>/Compare' */
  uint8_T Compare_cm;                  /* '<S85>/Compare' */
  uint8_T Compare_m;                   /* '<S86>/Compare' */
  uint8_T Compare_k;                   /* '<S87>/Compare' */
  uint8_T Compare_n;                   /* '<S88>/Compare' */
  uint8_T Compare_lq;                  /* '<S83>/Compare' */
  uint8_T Compare_da;                  /* '<S107>/Compare' */
  uint8_T Compare_a5;                  /* '<S108>/Compare' */
  uint8_T Compare_h;                   /* '<S109>/Compare' */
  uint8_T Compare_p;                   /* '<S110>/Compare' */
  uint8_T Compare_i;                   /* '<S111>/Compare' */
  uint8_T Compare_f;                   /* '<S106>/Compare' */
  uint8_T Compare_di;                  /* '<S61>/Compare' */
  uint8_T Compare_n2;                  /* '<S62>/Compare' */
  uint8_T Compare_m0;                  /* '<S63>/Compare' */
  uint8_T Compare_nr;                  /* '<S64>/Compare' */
  uint8_T Compare_lb;                  /* '<S65>/Compare' */
  uint8_T Compare_f1;                  /* '<S60>/Compare' */
  uint8_T Compare_e;                   /* '<S33>/Compare' */
  uint8_T Compare_k1;                  /* '<S34>/Compare' */
  uint8_T Compare_b;                   /* '<S35>/Compare' */
  uint8_T Compare_n4;                  /* '<S36>/Compare' */
  uint8_T Compare_bu;                  /* '<S177>/Compare' */
  uint8_T Compare_mt;                  /* '<S178>/Compare' */
  uint8_T Compare_bh;                  /* '<S179>/Compare' */
  uint8_T Compare_p2;                  /* '<S180>/Compare' */
  uint8_T Compare_d2;                  /* '<S152>/Compare' */
  B_Tracker_Initialcos_cal_Side_T Tracker_Initialcos_cal;/* '<S16>/Tracker_Initial.cos_cal' */
  B_Tracker_InitialVelocityMeth_T Tracker_InitialVelocityMethod;/* '<S16>/Tracker_Initial.VelocityMethod' */
} B_SideFusion_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Gtj[1600];                    /* '<Root>/Side_Fusion' */
  real_T Ptj[1600];                    /* '<Root>/Side_Fusion' */
  real_T k;                            /* '<Root>/Side_Fusion' */
  real_T FusDataInternal_temp[1160];   /* '<Root>/Side_Fusion' */
  real_T n;                            /* '<Root>/Side_Fusion' */
  real_T t;                            /* '<Root>/Side_Fusion' */
  real_T j;                            /* '<Root>/Side_Fusion' */
  real_T Gtsum[40];                    /* '<Root>/Side_Fusion' */
  real_T Gsumj[40];                    /* '<Root>/Side_Fusion' */
  real_T Ptsum[40];                    /* '<Root>/Side_Fusion' */
  real_T Psumj[40];                    /* '<Root>/Side_Fusion' */
  real_T P_Bulb[160];                  /* '<Root>/Side_Fusion' */
  real_T SelectMea[9];                 /* '<Root>/Side_Fusion' */
  real_T UpdateTrackFlag[40];          /* '<Root>/Side_Fusion' */
  real_T GlobalFusTrgCount;            /* '<Root>/Side_Fusion' */
  real_T Sensor_sampleTime;            /* '<Root>/Side_Fusion' */
  real_T LastCalTime;                  /* '<Root>/Side_Fusion' */
  real_T Num_Trg;                      /* '<Root>/Side_Fusion' */
  real_T TrackCounter;                 /* '<Root>/Side_Fusion' */
  real_T c;                            /* '<Root>/Side_Fusion' */
  real_T Num_Returns;                  /* '<Root>/Side_Fusion' */
  real_T Returns[30];                  /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_RFSRR[280];       /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_LRSRR[280];       /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_RRSRR[280];       /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_LFSRR_New[280];   /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_LRSRR_New[280];   /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_RFSRR_New[280];   /* '<Root>/Side_Fusion' */
  real_T Ini_Tracker_RRSRR_New[280];   /* '<Root>/Side_Fusion' */
  real_T Num_Ini_Tracker_LFSRR_New;    /* '<Root>/Side_Fusion' */
  real_T Num_Ini_Tracker_LRSRR_New;    /* '<Root>/Side_Fusion' */
  real_T Num_Ini_Tracker_RFSRR_New;    /* '<Root>/Side_Fusion' */
  real_T Num_Ini_Tracker_RRSRR_New;    /* '<Root>/Side_Fusion' */
  real_T LastFusID;                    /* '<Root>/Side_Fusion' */
  real_T IDUsedFlag[127];              /* '<Root>/Side_Fusion' */
  real_T DataSource;                   /* '<Root>/Side_Fusion' */
  real_T mk;                           /* '<Root>/Side_Fusion' */
  real_T OneMeasureFlg[10];            /* '<Root>/Side_Fusion' */
  real_T Group_Data[20];               /* '<Root>/Side_Fusion' */
  real_T Group_Num;                    /* '<Root>/Side_Fusion' */
  real_T dtj[1600];                    /* '<Root>/Side_Fusion' */
  real_T Product1_DWORK1[16];          /* '<S32>/Product1' */
  real_T Divide_DWORK3[4];             /* '<S160>/Divide' */
  real_T Divide_DWORK4[4];             /* '<S160>/Divide' */
  real_T Divide_DWORK5[8];             /* '<S160>/Divide' */
  int32_T sfEvent;                     /* '<Root>/Side_Fusion' */
  int32_T Divide_DWORK2[3];            /* '<S21>/Divide' */
  uint8_T is_active_c4_SideFusion_Fcn; /* '<Root>/Side_Fusion' */
  uint8_T is_DataSet;                  /* '<Root>/Side_Fusion' */
  uint8_T is_active_DataSet;           /* '<Root>/Side_Fusion' */
  uint8_T is_Fusion_Main;              /* '<Root>/Side_Fusion' */
  uint8_T is_active_Fusion_Main;       /* '<Root>/Side_Fusion' */
  DW_Tracker_InitialVelocityMet_T Tracker_InitialVelocityMethod;/* '<S16>/Tracker_Initial.VelocityMethod' */
} DW_SideFusion_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Side_Fusion_Trig_ZCE[4];  /* '<Root>/Side_Fusion' */
} PrevZCX_SideFusion_Fcn_T;

/* Parameters for system: '<S16>/Tracker_Initial.VelocityMethod' */
struct P_Tracker_InitialVelocityMeth_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S140>/Constant'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S141>/Constant'
                                        */
  real_T CompareToConstant_const_j;    /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S142>/Constant'
                                        */
  real_T CompareToConstant1_const_n;   /* Mask Parameter: CompareToConstant1_const_n
                                        * Referenced by: '<S143>/Constant'
                                        */
  real_T CompareToConstant_const_g;    /* Mask Parameter: CompareToConstant_const_g
                                        * Referenced by: '<S135>/Constant'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S22>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S22>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S138>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S138>/Constant1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S139>/Constant2'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S139>/Constant1'
                                        */
  real_T AssociationFlag_Y0;           /* Computed Parameter: AssociationFlag_Y0
                                        * Referenced by: '<S22>/AssociationFlag'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2
                                        * Referenced by: '<S137>/Gain2'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S22>/Constant1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 2
                                        * Referenced by: '<S137>/Gain3'
                                        */
  real_T Gain_Gain[2];                 /* Expression: [1;0]
                                        * Referenced by: '<S137>/Gain'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S22>/Constant2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 2
                                        * Referenced by: '<S137>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 2
                                        * Referenced by: '<S137>/Gain5'
                                        */
  real_T Gain1_Gain[2];                /* Expression: [0;1]
                                        * Referenced by: '<S137>/Gain1'
                                        */
};

/* Parameters for system: '<S16>/Tracker_Initial.cos_cal' */
struct P_Tracker_Initialcos_cal_Side_T_ {
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S146>/Constant'
                                        */
  real_T CompareToConstant2_const;     /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S147>/Constant'
                                        */
  uint16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S145>/Constant'
                                        */
  real_T Constant5_Value;              /* Expression: 2
                                        * Referenced by: '<S144>/Constant5'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S144>/Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 180
                                        * Referenced by: '<S144>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S144>/Saturation2'
                                        */
  real_T Constant4_Value;              /* Expression: 180
                                        * Referenced by: '<S144>/Constant4'
                                        */
  real_T relative_degree_Y0;           /* Computed Parameter: relative_degree_Y0
                                        * Referenced by: '<S23>/relative_degree'
                                        */
};

/* Parameters (auto storage) */
struct P_SideFusion_Fcn_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S177>/Constant'
                                        */
  real_T CompareToConstant_const_e;    /* Mask Parameter: CompareToConstant_const_e
                                        * Referenced by: '<S178>/Constant'
                                        */
  real_T CompareToConstant_const_ec;   /* Mask Parameter: CompareToConstant_const_ec
                                        * Referenced by: '<S179>/Constant'
                                        */
  real_T CompareToConstant_const_f;    /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S180>/Constant'
                                        */
  real_T CompareToConstant_const_d;    /* Mask Parameter: CompareToConstant_const_d
                                        * Referenced by: '<S33>/Constant'
                                        */
  real_T CompareToConstant_const_fu;   /* Mask Parameter: CompareToConstant_const_fu
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T CompareToConstant_const_a;    /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S35>/Constant'
                                        */
  real_T CompareToConstant_const_m;    /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S36>/Constant'
                                        */
  real_T CompareToConstant_const_f1;   /* Mask Parameter: CompareToConstant_const_f1
                                        * Referenced by: '<S61>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S62>/Constant'
                                        */
  real_T CompareToConstant_const_n;    /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T CompareToConstant_const_b;    /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T CompareToConstant_const_i;    /* Mask Parameter: CompareToConstant_const_i
                                        * Referenced by: '<S65>/Constant'
                                        */
  real_T CompareToConstant_const_p;    /* Mask Parameter: CompareToConstant_const_p
                                        * Referenced by: '<S60>/Constant'
                                        */
  real_T CompareToConstant_const_az;   /* Mask Parameter: CompareToConstant_const_az
                                        * Referenced by: '<S107>/Constant'
                                        */
  real_T CompareToConstant_const_h;    /* Mask Parameter: CompareToConstant_const_h
                                        * Referenced by: '<S108>/Constant'
                                        */
  real_T CompareToConstant_const_l;    /* Mask Parameter: CompareToConstant_const_l
                                        * Referenced by: '<S109>/Constant'
                                        */
  real_T CompareToConstant_const_mk;   /* Mask Parameter: CompareToConstant_const_mk
                                        * Referenced by: '<S110>/Constant'
                                        */
  real_T CompareToConstant_const_j;    /* Mask Parameter: CompareToConstant_const_j
                                        * Referenced by: '<S111>/Constant'
                                        */
  real_T CompareToConstant_const_j4;   /* Mask Parameter: CompareToConstant_const_j4
                                        * Referenced by: '<S106>/Constant'
                                        */
  real_T CompareToConstant_const_a4;   /* Mask Parameter: CompareToConstant_const_a4
                                        * Referenced by: '<S84>/Constant'
                                        */
  real_T CompareToConstant_const_l0;   /* Mask Parameter: CompareToConstant_const_l0
                                        * Referenced by: '<S85>/Constant'
                                        */
  real_T CompareToConstant_const_js;   /* Mask Parameter: CompareToConstant_const_js
                                        * Referenced by: '<S86>/Constant'
                                        */
  real_T CompareToConstant_const_jf;   /* Mask Parameter: CompareToConstant_const_jf
                                        * Referenced by: '<S87>/Constant'
                                        */
  real_T CompareToConstant_const_ck;   /* Mask Parameter: CompareToConstant_const_ck
                                        * Referenced by: '<S88>/Constant'
                                        */
  real_T CompareToConstant_const_e5;   /* Mask Parameter: CompareToConstant_const_e5
                                        * Referenced by: '<S83>/Constant'
                                        */
  real_T CompareToConstant_const_d4;   /* Mask Parameter: CompareToConstant_const_d4
                                        * Referenced by: '<S130>/Constant'
                                        */
  real_T CompareToConstant_const_jo;   /* Mask Parameter: CompareToConstant_const_jo
                                        * Referenced by: '<S131>/Constant'
                                        */
  real_T CompareToConstant_const_nu;   /* Mask Parameter: CompareToConstant_const_nu
                                        * Referenced by: '<S132>/Constant'
                                        */
  real_T CompareToConstant_const_mx;   /* Mask Parameter: CompareToConstant_const_mx
                                        * Referenced by: '<S133>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S134>/Constant'
                                        */
  real_T CompareToConstant_const_ds;   /* Mask Parameter: CompareToConstant_const_ds
                                        * Referenced by: '<S129>/Constant'
                                        */
  real_T raddeg_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S153>/rad->deg'
                                        */
  real_T Range_AngleTable_tableData[6];/* Expression: [40 40 25 15 10 10]
                                        * Referenced by: '<S154>/Range_AngleTable'
                                        */
  real_T Range_AngleTable_bp01Data[6]; /* Expression: [0 10 30 50 70 100]
                                        * Referenced by: '<S154>/Range_AngleTable'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S152>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0.001
                                        * Referenced by: '<S169>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 0.001
                                        * Referenced by: '<S170>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: 0.001
                                        * Referenced by: '<S171>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 0.001
                                        * Referenced by: '<S172>/Constant'
                                        */
  real_T RangeX_Y0;                    /* Computed Parameter: RangeX_Y0
                                        * Referenced by: '<S25>/RangeX'
                                        */
  real_T VelX_Y0;                      /* Computed Parameter: VelX_Y0
                                        * Referenced by: '<S25>/VelX'
                                        */
  real_T RangeY_Y0;                    /* Computed Parameter: RangeY_Y0
                                        * Referenced by: '<S25>/RangeY'
                                        */
  real_T VelY_Y0;                      /* Computed Parameter: VelY_Y0
                                        * Referenced by: '<S25>/VelY'
                                        */
  real_T P11_Y0;                       /* Computed Parameter: P11_Y0
                                        * Referenced by: '<S25>/P11'
                                        */
  real_T P12_Y0;                       /* Computed Parameter: P12_Y0
                                        * Referenced by: '<S25>/P12'
                                        */
  real_T P13_Y0;                       /* Computed Parameter: P13_Y0
                                        * Referenced by: '<S25>/P13'
                                        */
  real_T P14_Y0;                       /* Computed Parameter: P14_Y0
                                        * Referenced by: '<S25>/P14'
                                        */
  real_T P21_Y0;                       /* Computed Parameter: P21_Y0
                                        * Referenced by: '<S25>/P21'
                                        */
  real_T P22_Y0;                       /* Computed Parameter: P22_Y0
                                        * Referenced by: '<S25>/P22'
                                        */
  real_T P23_Y0;                       /* Computed Parameter: P23_Y0
                                        * Referenced by: '<S25>/P23'
                                        */
  real_T P24_Y0;                       /* Computed Parameter: P24_Y0
                                        * Referenced by: '<S25>/P24'
                                        */
  real_T P31_Y0;                       /* Computed Parameter: P31_Y0
                                        * Referenced by: '<S25>/P31'
                                        */
  real_T P32_Y0;                       /* Computed Parameter: P32_Y0
                                        * Referenced by: '<S25>/P32'
                                        */
  real_T P33_Y0;                       /* Computed Parameter: P33_Y0
                                        * Referenced by: '<S25>/P33'
                                        */
  real_T P34_Y0;                       /* Computed Parameter: P34_Y0
                                        * Referenced by: '<S25>/P34'
                                        */
  real_T P41_Y0;                       /* Computed Parameter: P41_Y0
                                        * Referenced by: '<S25>/P41'
                                        */
  real_T P42_Y0;                       /* Computed Parameter: P42_Y0
                                        * Referenced by: '<S25>/P42'
                                        */
  real_T P43_Y0;                       /* Computed Parameter: P43_Y0
                                        * Referenced by: '<S25>/P43'
                                        */
  real_T P44_Y0;                       /* Computed Parameter: P44_Y0
                                        * Referenced by: '<S25>/P44'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 10
                                        * Referenced by: '<S159>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -10
                                        * Referenced by: '<S159>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation3'
                                        */
  real_T Gain_Gain[4];                 /* Expression: [1;0;0;0]
                                        * Referenced by: '<S173>/Gain'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation4'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation5'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation6'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation7'
                                        */
  real_T Gain1_Gain[4];                /* Expression: [0;1;0;0]
                                        * Referenced by: '<S173>/Gain1'
                                        */
  real_T Saturation8_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation8'
                                        */
  real_T Saturation8_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation8'
                                        */
  real_T Saturation9_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S159>/Saturation9'
                                        */
  real_T Saturation9_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S159>/Saturation9'
                                        */
  real_T Saturation10_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation10'
                                        */
  real_T Saturation10_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation10'
                                        */
  real_T Saturation11_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation11'
                                        */
  real_T Saturation11_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation11'
                                        */
  real_T Gain2_Gain[4];                /* Expression: [0;0;1;0]
                                        * Referenced by: '<S173>/Gain2'
                                        */
  real_T Saturation14_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation14'
                                        */
  real_T Saturation14_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation14'
                                        */
  real_T Saturation15_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation15'
                                        */
  real_T Saturation15_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation15'
                                        */
  real_T Saturation12_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation12'
                                        */
  real_T Saturation12_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation12'
                                        */
  real_T Saturation13_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S159>/Saturation13'
                                        */
  real_T Saturation13_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S159>/Saturation13'
                                        */
  real_T Gain3_Gain[4];                /* Expression: [0;0;0;1]
                                        * Referenced by: '<S173>/Gain3'
                                        */
  real_T H_Value[8];                   /* Expression: [1 0 0 0;0 0 1 0]
                                        * Referenced by: '<S159>/H'
                                        */
  real_T R11_Value;                    /* Expression: 0.7
                                        * Referenced by: '<S159>/R11'
                                        */
  real_T R12_Value;                    /* Expression: 0
                                        * Referenced by: '<S159>/R12'
                                        */
  real_T Gain_Gain_d[2];               /* Expression: [1;0]
                                        * Referenced by: '<S175>/Gain'
                                        */
  real_T R21_Value;                    /* Expression: 0
                                        * Referenced by: '<S159>/R21'
                                        */
  real_T R22_Value;                    /* Expression: 0.8
                                        * Referenced by: '<S159>/R22'
                                        */
  real_T Gain1_Gain_g[2];              /* Expression: [0;1]
                                        * Referenced by: '<S175>/Gain1'
                                        */
  real_T Constant_1_Value;             /* Expression: 1
                                        * Referenced by: '<S168>/Constant_1'
                                        */
  real_T I_Value[16];                  /* Expression: [1 0 0 0;0 1 0 0;0 0 1 0;0 0 0 1]
                                        * Referenced by: '<S168>/I'
                                        */
  real_T Constant_Value_k[4];          /* Expression: [1;0;0;0]
                                        * Referenced by: '<S158>/Constant'
                                        */
  real_T Saturation_UpperSat_c;        /* Expression: 10
                                        * Referenced by: '<S156>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: -10
                                        * Referenced by: '<S156>/Saturation'
                                        */
  real_T Constant1_Value[4];           /* Expression: [0;1;0;0]
                                        * Referenced by: '<S158>/Constant1'
                                        */
  real_T Saturation1_UpperSat_e;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_k;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation1'
                                        */
  real_T Constant2_Value[4];           /* Expression: [0;0;1;0]
                                        * Referenced by: '<S158>/Constant2'
                                        */
  real_T Saturation10_UpperSat_c;      /* Expression: 10
                                        * Referenced by: '<S156>/Saturation10'
                                        */
  real_T Saturation10_LowerSat_n;      /* Expression: -10
                                        * Referenced by: '<S156>/Saturation10'
                                        */
  real_T Constant3_Value[4];           /* Expression: [0;0;0;1]
                                        * Referenced by: '<S158>/Constant3'
                                        */
  real_T Saturation11_UpperSat_g;      /* Expression: 10
                                        * Referenced by: '<S156>/Saturation11'
                                        */
  real_T Saturation11_LowerSat_p;      /* Expression: -10
                                        * Referenced by: '<S156>/Saturation11'
                                        */
  real_T Saturation12_UpperSat_j;      /* Expression: 10
                                        * Referenced by: '<S156>/Saturation12'
                                        */
  real_T Saturation12_LowerSat_n;      /* Expression: -10
                                        * Referenced by: '<S156>/Saturation12'
                                        */
  real_T Saturation13_UpperSat_m;      /* Expression: 10
                                        * Referenced by: '<S156>/Saturation13'
                                        */
  real_T Saturation13_LowerSat_k;      /* Expression: -10
                                        * Referenced by: '<S156>/Saturation13'
                                        */
  real_T Saturation14_UpperSat_i;      /* Expression: 10
                                        * Referenced by: '<S156>/Saturation14'
                                        */
  real_T Saturation14_LowerSat_f;      /* Expression: -10
                                        * Referenced by: '<S156>/Saturation14'
                                        */
  real_T Saturation16_UpperSat;        /* Expression: 10
                                        * Referenced by: '<S156>/Saturation16'
                                        */
  real_T Saturation16_LowerSat;        /* Expression: -10
                                        * Referenced by: '<S156>/Saturation16'
                                        */
  real_T Saturation2_UpperSat_h;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_g;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation2'
                                        */
  real_T Saturation3_UpperSat_l;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_i;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation3'
                                        */
  real_T Saturation4_UpperSat_p;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_g;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation4'
                                        */
  real_T Saturation5_UpperSat_g;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation5'
                                        */
  real_T Saturation5_LowerSat_i;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation5'
                                        */
  real_T Saturation6_UpperSat_c;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation6'
                                        */
  real_T Saturation6_LowerSat_m;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation6'
                                        */
  real_T Saturation7_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation7'
                                        */
  real_T Saturation7_LowerSat_n;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation7'
                                        */
  real_T Saturation8_UpperSat_f;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation8'
                                        */
  real_T Saturation8_LowerSat_h;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation8'
                                        */
  real_T Saturation9_UpperSat_h;       /* Expression: 10
                                        * Referenced by: '<S156>/Saturation9'
                                        */
  real_T Saturation9_LowerSat_n;       /* Expression: -10
                                        * Referenced by: '<S156>/Saturation9'
                                        */
  real_T Constant_Value_c;             /* Expression: 0.001
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 0.001
                                        * Referenced by: '<S27>/Constant'
                                        */
  real_T Constant_Value_ew;            /* Expression: 0.001
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Constant_Value_cv;            /* Expression: 0.001
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T RangeX_Y0_f;                  /* Computed Parameter: RangeX_Y0_f
                                        * Referenced by: '<S17>/RangeX'
                                        */
  real_T VelX_Y0_l;                    /* Computed Parameter: VelX_Y0_l
                                        * Referenced by: '<S17>/VelX'
                                        */
  real_T RangeY_Y0_j;                  /* Computed Parameter: RangeY_Y0_j
                                        * Referenced by: '<S17>/RangeY'
                                        */
  real_T VelY_Y0_a;                    /* Computed Parameter: VelY_Y0_a
                                        * Referenced by: '<S17>/VelY'
                                        */
  real_T P11_Y0_b;                     /* Computed Parameter: P11_Y0_b
                                        * Referenced by: '<S17>/P11'
                                        */
  real_T P12_Y0_m;                     /* Computed Parameter: P12_Y0_m
                                        * Referenced by: '<S17>/P12'
                                        */
  real_T P13_Y0_m;                     /* Computed Parameter: P13_Y0_m
                                        * Referenced by: '<S17>/P13'
                                        */
  real_T P14_Y0_f;                     /* Computed Parameter: P14_Y0_f
                                        * Referenced by: '<S17>/P14'
                                        */
  real_T P21_Y0_k;                     /* Computed Parameter: P21_Y0_k
                                        * Referenced by: '<S17>/P21'
                                        */
  real_T P22_Y0_d;                     /* Computed Parameter: P22_Y0_d
                                        * Referenced by: '<S17>/P22'
                                        */
  real_T P23_Y0_a;                     /* Computed Parameter: P23_Y0_a
                                        * Referenced by: '<S17>/P23'
                                        */
  real_T P24_Y0_j;                     /* Computed Parameter: P24_Y0_j
                                        * Referenced by: '<S17>/P24'
                                        */
  real_T P31_Y0_b;                     /* Computed Parameter: P31_Y0_b
                                        * Referenced by: '<S17>/P31'
                                        */
  real_T P32_Y0_j;                     /* Computed Parameter: P32_Y0_j
                                        * Referenced by: '<S17>/P32'
                                        */
  real_T P33_Y0_n;                     /* Computed Parameter: P33_Y0_n
                                        * Referenced by: '<S17>/P33'
                                        */
  real_T P34_Y0_b;                     /* Computed Parameter: P34_Y0_b
                                        * Referenced by: '<S17>/P34'
                                        */
  real_T P41_Y0_h;                     /* Computed Parameter: P41_Y0_h
                                        * Referenced by: '<S17>/P41'
                                        */
  real_T P42_Y0_h;                     /* Computed Parameter: P42_Y0_h
                                        * Referenced by: '<S17>/P42'
                                        */
  real_T P43_Y0_e;                     /* Computed Parameter: P43_Y0_e
                                        * Referenced by: '<S17>/P43'
                                        */
  real_T P44_Y0_b;                     /* Computed Parameter: P44_Y0_b
                                        * Referenced by: '<S17>/P44'
                                        */
  real_T Constant_Value_h[4];          /* Expression: [1;0;0;0]
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant1_Value_l[4];         /* Expression: [0;1;0;0]
                                        * Referenced by: '<S17>/Constant1'
                                        */
  real_T Constant2_Value_c[4];         /* Expression: [0;0;1;0]
                                        * Referenced by: '<S17>/Constant2'
                                        */
  real_T Constant3_Value_n[4];         /* Expression: [0;0;0;1]
                                        * Referenced by: '<S17>/Constant3'
                                        */
  real_T Constant2_Value_j[4];         /* Expression: [1;0;0;0]
                                        * Referenced by: '<S39>/Constant2'
                                        */
  real_T Constant_Value_f;             /* Expression: 1
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S39>/Constant3'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T Constant5_Value[4];           /* Expression: [0;1;0;0]
                                        * Referenced by: '<S40>/Constant5'
                                        */
  real_T Constant3_Value_l;            /* Expression: 0
                                        * Referenced by: '<S40>/Constant3'
                                        */
  real_T Constant1_Value_c;            /* Expression: 1
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant6'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S40>/Constant4'
                                        */
  real_T Constant2_Value_o[4];         /* Expression: [0;0;1;0]
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real_T Constant3_Value_o;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T Constant_Value_nr;            /* Expression: 1
                                        * Referenced by: '<S41>/Constant'
                                        */
  real_T Constant5_Value_n[4];         /* Expression: [0;0;0;1]
                                        * Referenced by: '<S42>/Constant5'
                                        */
  real_T Constant3_Value_m;            /* Expression: 0
                                        * Referenced by: '<S42>/Constant3'
                                        */
  real_T Constant1_Value_ld;           /* Expression: 0
                                        * Referenced by: '<S42>/Constant1'
                                        */
  real_T Constant6_Value_c;            /* Expression: 0
                                        * Referenced by: '<S42>/Constant6'
                                        */
  real_T Constant4_Value_c;            /* Expression: 1
                                        * Referenced by: '<S42>/Constant4'
                                        */
  real_T Gain_Gain_dh[4];              /* Expression: [1;0;0;0]
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Gain1_Gain_j[4];              /* Expression: [0;1;0;0]
                                        * Referenced by: '<S30>/Gain1'
                                        */
  real_T Gain2_Gain_a[4];              /* Expression: [0;0;1;0]
                                        * Referenced by: '<S30>/Gain2'
                                        */
  real_T Gain3_Gain_i[4];              /* Expression: [0;0;0;1]
                                        * Referenced by: '<S30>/Gain3'
                                        */
  real_T Q_Value[16];                  /* Expression: [0.3 0 0 0;0 0.3 0 0;0 0 0.3 0;0 0 0 0.3]
                                        * Referenced by: '<S32>/Q'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: 10
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -10
                                        * Referenced by: '<S17>/Saturation'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation1'
                                        */
  real_T Saturation10_UpperSat_a;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation10'
                                        */
  real_T Saturation10_LowerSat_j;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation10'
                                        */
  real_T Saturation11_UpperSat_a;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation11'
                                        */
  real_T Saturation11_LowerSat_f;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation11'
                                        */
  real_T Saturation12_UpperSat_i;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation12'
                                        */
  real_T Saturation12_LowerSat_c;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation12'
                                        */
  real_T Saturation13_UpperSat_c;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation13'
                                        */
  real_T Saturation13_LowerSat_g;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation13'
                                        */
  real_T Saturation14_UpperSat_b;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation14'
                                        */
  real_T Saturation14_LowerSat_i;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation14'
                                        */
  real_T Saturation15_UpperSat_k;      /* Expression: 10
                                        * Referenced by: '<S17>/Saturation15'
                                        */
  real_T Saturation15_LowerSat_d;      /* Expression: -10
                                        * Referenced by: '<S17>/Saturation15'
                                        */
  real_T Saturation2_UpperSat_n;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_n;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation2'
                                        */
  real_T Saturation3_UpperSat_o;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  real_T Saturation3_LowerSat_l;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  real_T Saturation4_UpperSat_h;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  real_T Saturation4_LowerSat_d;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  real_T Saturation5_UpperSat_f;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation5'
                                        */
  real_T Saturation5_LowerSat_o;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation5'
                                        */
  real_T Saturation6_UpperSat_n;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation6'
                                        */
  real_T Saturation6_LowerSat_g;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation6'
                                        */
  real_T Saturation7_UpperSat_b;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation7'
                                        */
  real_T Saturation7_LowerSat_p;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation7'
                                        */
  real_T Saturation8_UpperSat_h;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation8'
                                        */
  real_T Saturation8_LowerSat_a;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation8'
                                        */
  real_T Saturation9_UpperSat_g;       /* Expression: 10
                                        * Referenced by: '<S17>/Saturation9'
                                        */
  real_T Saturation9_LowerSat_f;       /* Expression: -10
                                        * Referenced by: '<S17>/Saturation9'
                                        */
  real_T Constant_Value_mz;            /* Expression: 0.00001
                                        * Referenced by: '<S57>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0.001
                                        * Referenced by: '<S45>/Constant'
                                        */
  real_T Constant_Value_mh;            /* Expression: 0.001
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Constant_Value_fd;            /* Expression: 0.001
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T Constant_Value_lj;            /* Expression: 0.001
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Constant_Value_iu;            /* Expression: 0.001
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T Gtj_Y0;                       /* Computed Parameter: Gtj_Y0
                                        * Referenced by: '<S18>/Gtj'
                                        */
  real_T dtj_Y0;                       /* Computed Parameter: dtj_Y0
                                        * Referenced by: '<S18>/dtj'
                                        */
  real_T Constant_Value_n3;            /* Expression: 1
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T Constant_Value_is;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Gain_Gain_a[3];               /* Expression: [1;0;0]
                                        * Referenced by: '<S50>/Gain'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T Gain1_Gain_k[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S50>/Gain1'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant2'
                                        */
  real_T Constant3_Value_j;            /* Expression: 0
                                        * Referenced by: '<S18>/Constant3'
                                        */
  real_T Constant4_Value_b;            /* Expression: 0.5
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T Gain2_Gain_i[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S50>/Gain2'
                                        */
  real_T Gain3_Gain_o[3];              /* Expression: [1;0;0]
                                        * Referenced by: '<S51>/Gain3'
                                        */
  real_T Gain1_Gain_b[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S51>/Gain1'
                                        */
  real_T Gain2_Gain_d[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S51>/Gain2'
                                        */
  real_T Constant_Value_nrp[3];        /* Expression: [1;0;0]
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T Constant1_Value_h[3];         /* Expression: [0;1;0]
                                        * Referenced by: '<S52>/Constant1'
                                        */
  real_T Constant2_Value_p[3];         /* Expression: [0;0;1]
                                        * Referenced by: '<S52>/Constant2'
                                        */
  real_T Constant5_Value_h;            /* Expression: 1.8
                                        * Referenced by: '<S44>/Constant5'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 0.5
                                        * Referenced by: '<S58>/Gain1'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 0.5
                                        * Referenced by: '<S59>/Gain1'
                                        */
  real_T Constant6_Value_k;            /* Expression: 5.2
                                        * Referenced by: '<S44>/Constant6'
                                        */
  real_T Gain_Gain_f;                  /* Expression: -0.5
                                        * Referenced by: '<S18>/Gain'
                                        */
  real_T Constant_Value_lk;            /* Expression: 0.00001
                                        * Referenced by: '<S103>/Constant'
                                        */
  real_T Constant_Value_o;             /* Expression: 0.001
                                        * Referenced by: '<S91>/Constant'
                                        */
  real_T Constant_Value_lt;            /* Expression: 0.001
                                        * Referenced by: '<S92>/Constant'
                                        */
  real_T Constant_Value_bz;            /* Expression: 0.001
                                        * Referenced by: '<S93>/Constant'
                                        */
  real_T Constant_Value_iv;            /* Expression: 0.001
                                        * Referenced by: '<S94>/Constant'
                                        */
  real_T Constant_Value_fs;            /* Expression: 0.001
                                        * Referenced by: '<S95>/Constant'
                                        */
  real_T Gtj_Y0_g;                     /* Computed Parameter: Gtj_Y0_g
                                        * Referenced by: '<S20>/Gtj'
                                        */
  real_T dtj_Y0_p;                     /* Computed Parameter: dtj_Y0_p
                                        * Referenced by: '<S20>/dtj'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S89>/Constant'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T Gain_Gain_d5[3];              /* Expression: [1;0;0]
                                        * Referenced by: '<S96>/Gain'
                                        */
  real_T Constant1_Value_co;           /* Expression: 0
                                        * Referenced by: '<S20>/Constant1'
                                        */
  real_T Gain1_Gain_n[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S96>/Gain1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S20>/Constant2'
                                        */
  real_T Constant3_Value_k;            /* Expression: 0
                                        * Referenced by: '<S20>/Constant3'
                                        */
  real_T Constant4_Value_cm;           /* Expression: 0.5
                                        * Referenced by: '<S20>/Constant4'
                                        */
  real_T Gain2_Gain_l[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S96>/Gain2'
                                        */
  real_T Gain3_Gain_b[3];              /* Expression: [1;0;0]
                                        * Referenced by: '<S97>/Gain3'
                                        */
  real_T Gain1_Gain_e[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S97>/Gain1'
                                        */
  real_T Gain2_Gain_k[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S97>/Gain2'
                                        */
  real_T Constant_Value_d[3];          /* Expression: [1;0;0]
                                        * Referenced by: '<S98>/Constant'
                                        */
  real_T Constant1_Value_io[3];        /* Expression: [0;1;0]
                                        * Referenced by: '<S98>/Constant1'
                                        */
  real_T Constant2_Value_a[3];         /* Expression: [0;0;1]
                                        * Referenced by: '<S98>/Constant2'
                                        */
  real_T Constant5_Value_p;            /* Expression: 1.8
                                        * Referenced by: '<S90>/Constant5'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: 0.5
                                        * Referenced by: '<S104>/Gain1'
                                        */
  real_T Gain1_Gain_cw;                /* Expression: 0.5
                                        * Referenced by: '<S105>/Gain1'
                                        */
  real_T Constant6_Value_g;            /* Expression: 5.2
                                        * Referenced by: '<S90>/Constant6'
                                        */
  real_T Gain_Gain_dl;                 /* Expression: -0.5
                                        * Referenced by: '<S20>/Gain'
                                        */
  real_T Constant_Value_km;            /* Expression: 0.00001
                                        * Referenced by: '<S80>/Constant'
                                        */
  real_T Constant_Value_dy;            /* Expression: 0.001
                                        * Referenced by: '<S68>/Constant'
                                        */
  real_T Constant_Value_mq;            /* Expression: 0.001
                                        * Referenced by: '<S69>/Constant'
                                        */
  real_T Constant_Value_mb;            /* Expression: 0.001
                                        * Referenced by: '<S70>/Constant'
                                        */
  real_T Constant_Value_m0;            /* Expression: 0.001
                                        * Referenced by: '<S71>/Constant'
                                        */
  real_T Constant_Value_c3;            /* Expression: 0.001
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T Gtj_Y0_d;                     /* Computed Parameter: Gtj_Y0_d
                                        * Referenced by: '<S19>/Gtj'
                                        */
  real_T dtj_Y0_p5;                    /* Computed Parameter: dtj_Y0_p5
                                        * Referenced by: '<S19>/dtj'
                                        */
  real_T Constant_Value_ik;            /* Expression: 1
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T Constant_Value_dq;            /* Expression: 0
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Gain_Gain_m[3];               /* Expression: [1;0;0]
                                        * Referenced by: '<S73>/Gain'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S19>/Constant1'
                                        */
  real_T Gain1_Gain_cm[3];             /* Expression: [0;1;0]
                                        * Referenced by: '<S73>/Gain1'
                                        */
  real_T Constant2_Value_k;            /* Expression: 0
                                        * Referenced by: '<S19>/Constant2'
                                        */
  real_T Constant3_Value_h;            /* Expression: 0
                                        * Referenced by: '<S19>/Constant3'
                                        */
  real_T Constant4_Value_d;            /* Expression: 0.5
                                        * Referenced by: '<S19>/Constant4'
                                        */
  real_T Gain2_Gain_b[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S73>/Gain2'
                                        */
  real_T Gain3_Gain_k[3];              /* Expression: [1;0;0]
                                        * Referenced by: '<S74>/Gain3'
                                        */
  real_T Gain1_Gain_f[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S74>/Gain1'
                                        */
  real_T Gain2_Gain_j[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S74>/Gain2'
                                        */
  real_T Constant_Value_a[3];          /* Expression: [1;0;0]
                                        * Referenced by: '<S75>/Constant'
                                        */
  real_T Constant1_Value_n[3];         /* Expression: [0;1;0]
                                        * Referenced by: '<S75>/Constant1'
                                        */
  real_T Constant2_Value_f[3];         /* Expression: [0;0;1]
                                        * Referenced by: '<S75>/Constant2'
                                        */
  real_T Constant5_Value_b;            /* Expression: 1.8
                                        * Referenced by: '<S67>/Constant5'
                                        */
  real_T Gain1_Gain_c0;                /* Expression: 0.5
                                        * Referenced by: '<S81>/Gain1'
                                        */
  real_T Constant6_Value_l;            /* Expression: 5.2
                                        * Referenced by: '<S67>/Constant6'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 0.5
                                        * Referenced by: '<S82>/Gain1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: -0.5
                                        * Referenced by: '<S19>/Gain'
                                        */
  real_T Constant_Value_ng;            /* Expression: 0.00001
                                        * Referenced by: '<S126>/Constant'
                                        */
  real_T Constant_Value_ivz;           /* Expression: 0.001
                                        * Referenced by: '<S114>/Constant'
                                        */
  real_T Constant_Value_hn;            /* Expression: 0.001
                                        * Referenced by: '<S115>/Constant'
                                        */
  real_T Constant_Value_mr;            /* Expression: 0.001
                                        * Referenced by: '<S116>/Constant'
                                        */
  real_T Constant_Value_bu;            /* Expression: 0.001
                                        * Referenced by: '<S117>/Constant'
                                        */
  real_T Constant_Value_mp;            /* Expression: 0.001
                                        * Referenced by: '<S118>/Constant'
                                        */
  real_T Gtj_Y0_l;                     /* Computed Parameter: Gtj_Y0_l
                                        * Referenced by: '<S21>/Gtj'
                                        */
  real_T dtj_Y0_d;                     /* Computed Parameter: dtj_Y0_d
                                        * Referenced by: '<S21>/dtj'
                                        */
  real_T Constant_Value_c4;            /* Expression: 1
                                        * Referenced by: '<S112>/Constant'
                                        */
  real_T Constant_Value_ib;            /* Expression: 0
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Gain_Gain_l[3];               /* Expression: [1;0;0]
                                        * Referenced by: '<S119>/Gain'
                                        */
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Gain1_Gain_o[3];              /* Expression: [0;1;0]
                                        * Referenced by: '<S119>/Gain1'
                                        */
  real_T Constant2_Value_b;            /* Expression: 0
                                        * Referenced by: '<S21>/Constant2'
                                        */
  real_T Constant3_Value_b;            /* Expression: 0
                                        * Referenced by: '<S21>/Constant3'
                                        */
  real_T Constant4_Value_l;            /* Expression: 0.5
                                        * Referenced by: '<S21>/Constant4'
                                        */
  real_T Gain2_Gain_f[3];              /* Expression: [0;0;1]
                                        * Referenced by: '<S119>/Gain2'
                                        */
  real_T Gain3_Gain_b1[3];             /* Expression: [1;0;0]
                                        * Referenced by: '<S120>/Gain3'
                                        */
  real_T Gain1_Gain_n1[3];             /* Expression: [0;1;0]
                                        * Referenced by: '<S120>/Gain1'
                                        */
  real_T Gain2_Gain_a2[3];             /* Expression: [0;0;1]
                                        * Referenced by: '<S120>/Gain2'
                                        */
  real_T Constant_Value_ltu[3];        /* Expression: [1;0;0]
                                        * Referenced by: '<S121>/Constant'
                                        */
  real_T Constant1_Value_f[3];         /* Expression: [0;1;0]
                                        * Referenced by: '<S121>/Constant1'
                                        */
  real_T Constant2_Value_g[3];         /* Expression: [0;0;1]
                                        * Referenced by: '<S121>/Constant2'
                                        */
  real_T Constant5_Value_c;            /* Expression: 1.8
                                        * Referenced by: '<S113>/Constant5'
                                        */
  real_T Gain1_Gain_gx;                /* Expression: 0.5
                                        * Referenced by: '<S127>/Gain1'
                                        */
  real_T Constant6_Value_d;            /* Expression: 5.2
                                        * Referenced by: '<S113>/Constant6'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 0.5
                                        * Referenced by: '<S128>/Gain1'
                                        */
  real_T Gain_Gain_n;                  /* Expression: -0.5
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T NE_Gain_d;                    /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T NE_Gain_j;                    /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T NE_Gain_m;                    /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  real_T NE_Gain_h;                    /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T NE_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T NE_Gain_o;                    /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S10>/E->N'
                                        */
  real_T EN_Gain_i;                    /* Expression: 1
                                        * Referenced by: '<S11>/E->N'
                                        */
  real_T EN_Gain_a;                    /* Expression: 1
                                        * Referenced by: '<S1>/E->N'
                                        */
  uint8_T AngAssFlg_Y0;                /* Computed Parameter: AngAssFlg_Y0
                                        * Referenced by: '<S24>/AngAssFlg'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S169>/Switch'
                                        */
  uint8_T Switch_Threshold_c;          /* Computed Parameter: Switch_Threshold_c
                                        * Referenced by: '<S170>/Switch'
                                        */
  uint8_T Switch_Threshold_g;          /* Computed Parameter: Switch_Threshold_g
                                        * Referenced by: '<S171>/Switch'
                                        */
  uint8_T Switch_Threshold_ce;         /* Computed Parameter: Switch_Threshold_ce
                                        * Referenced by: '<S172>/Switch'
                                        */
  uint8_T Switch_Threshold_f;          /* Computed Parameter: Switch_Threshold_f
                                        * Referenced by: '<S26>/Switch'
                                        */
  uint8_T Switch_Threshold_b;          /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S27>/Switch'
                                        */
  uint8_T Switch_Threshold_n;          /* Computed Parameter: Switch_Threshold_n
                                        * Referenced by: '<S28>/Switch'
                                        */
  uint8_T Switch_Threshold_d;          /* Computed Parameter: Switch_Threshold_d
                                        * Referenced by: '<S29>/Switch'
                                        */
  uint8_T Switch_Threshold_i;          /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S45>/Switch'
                                        */
  uint8_T Switch_Threshold_bd;         /* Computed Parameter: Switch_Threshold_bd
                                        * Referenced by: '<S46>/Switch'
                                        */
  uint8_T Switch_Threshold_j;          /* Computed Parameter: Switch_Threshold_j
                                        * Referenced by: '<S47>/Switch'
                                        */
  uint8_T Switch_Threshold_p;          /* Computed Parameter: Switch_Threshold_p
                                        * Referenced by: '<S48>/Switch'
                                        */
  uint8_T Switch_Threshold_id;         /* Computed Parameter: Switch_Threshold_id
                                        * Referenced by: '<S49>/Switch'
                                        */
  uint8_T Switch_Threshold_m;          /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S57>/Switch'
                                        */
  uint8_T Switch_Threshold_ci;         /* Computed Parameter: Switch_Threshold_ci
                                        * Referenced by: '<S91>/Switch'
                                        */
  uint8_T Switch_Threshold_mn;         /* Computed Parameter: Switch_Threshold_mn
                                        * Referenced by: '<S92>/Switch'
                                        */
  uint8_T Switch_Threshold_gm;         /* Computed Parameter: Switch_Threshold_gm
                                        * Referenced by: '<S93>/Switch'
                                        */
  uint8_T Switch_Threshold_g0;         /* Computed Parameter: Switch_Threshold_g0
                                        * Referenced by: '<S94>/Switch'
                                        */
  uint8_T Switch_Threshold_pz;         /* Computed Parameter: Switch_Threshold_pz
                                        * Referenced by: '<S95>/Switch'
                                        */
  uint8_T Switch_Threshold_k;          /* Computed Parameter: Switch_Threshold_k
                                        * Referenced by: '<S103>/Switch'
                                        */
  uint8_T Switch_Threshold_dw;         /* Computed Parameter: Switch_Threshold_dw
                                        * Referenced by: '<S68>/Switch'
                                        */
  uint8_T Switch_Threshold_e;          /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S69>/Switch'
                                        */
  uint8_T Switch_Threshold_fn;         /* Computed Parameter: Switch_Threshold_fn
                                        * Referenced by: '<S70>/Switch'
                                        */
  uint8_T Switch_Threshold_dh;         /* Computed Parameter: Switch_Threshold_dh
                                        * Referenced by: '<S71>/Switch'
                                        */
  uint8_T Switch_Threshold_n1;         /* Computed Parameter: Switch_Threshold_n1
                                        * Referenced by: '<S72>/Switch'
                                        */
  uint8_T Switch_Threshold_h;          /* Computed Parameter: Switch_Threshold_h
                                        * Referenced by: '<S80>/Switch'
                                        */
  uint8_T Switch_Threshold_de;         /* Computed Parameter: Switch_Threshold_de
                                        * Referenced by: '<S114>/Switch'
                                        */
  uint8_T Switch_Threshold_iq;         /* Computed Parameter: Switch_Threshold_iq
                                        * Referenced by: '<S115>/Switch'
                                        */
  uint8_T Switch_Threshold_dhc;        /* Computed Parameter: Switch_Threshold_dhc
                                        * Referenced by: '<S116>/Switch'
                                        */
  uint8_T Switch_Threshold_l;          /* Computed Parameter: Switch_Threshold_l
                                        * Referenced by: '<S117>/Switch'
                                        */
  uint8_T Switch_Threshold_o;          /* Computed Parameter: Switch_Threshold_o
                                        * Referenced by: '<S118>/Switch'
                                        */
  uint8_T Switch_Threshold_ij;         /* Computed Parameter: Switch_Threshold_ij
                                        * Referenced by: '<S126>/Switch'
                                        */
  uint8_T NE_Gain_j2;                  /* Computed Parameter: NE_Gain_j2
                                        * Referenced by: '<S12>/N->E'
                                        */
  uint8_T NE_Gain_g;                   /* Computed Parameter: NE_Gain_g
                                        * Referenced by: '<S14>/N->E'
                                        */
  uint8_T NE_Gain_c;                   /* Computed Parameter: NE_Gain_c
                                        * Referenced by: '<S13>/N->E'
                                        */
  uint8_T NE_Gain_nv;                  /* Computed Parameter: NE_Gain_nv
                                        * Referenced by: '<S15>/N->E'
                                        */
  P_Tracker_Initialcos_cal_Side_T Tracker_Initialcos_cal;/* '<S16>/Tracker_Initial.cos_cal' */
  P_Tracker_InitialVelocityMeth_T Tracker_InitialVelocityMethod;/* '<S16>/Tracker_Initial.VelocityMethod' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SideFusion_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_SideFusion_Fcn_T SideFusion_Fcn_P;

/* Block signals (auto storage) */
extern B_SideFusion_Fcn_T SideFusion_Fcn_B;

/* Block states (auto storage) */
extern DW_SideFusion_Fcn_T SideFusion_Fcn_DW;

/* Model entry point functions */
extern void SideFusion_Fcn_initialize(void);
extern void SideFusion_Fcn_step(void);
extern void SideFusion_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SideFusion_Fcn_T *const SideFusion_Fcn_M;

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
 * '<Root>' : 'SideFusion_Fcn'
 * '<S1>'   : 'SideFusion_Fcn/Data_Cov_Global_Trigger_SideFus'
 * '<S2>'   : 'SideFusion_Fcn/Data_Cov_LFSRR_ObjData_Input'
 * '<S3>'   : 'SideFusion_Fcn/Data_Cov_LFSRR_RxTime'
 * '<S4>'   : 'SideFusion_Fcn/Data_Cov_LRSRR_ObjData_Input'
 * '<S5>'   : 'SideFusion_Fcn/Data_Cov_LRSRR_RxTime'
 * '<S6>'   : 'SideFusion_Fcn/Data_Cov_RFSRR_ObjData_Input'
 * '<S7>'   : 'SideFusion_Fcn/Data_Cov_RFSRR_RxTime'
 * '<S8>'   : 'SideFusion_Fcn/Data_Cov_RRSRR_ObjData_Input'
 * '<S9>'   : 'SideFusion_Fcn/Data_Cov_RRSRR_RxTime'
 * '<S10>'  : 'SideFusion_Fcn/Data_Cov_SideFus_Output'
 * '<S11>'  : 'SideFusion_Fcn/Data_Cov_SideFus_Time'
 * '<S12>'  : 'SideFusion_Fcn/Data_Cov_Side_Fus_LFSRR_Trigger'
 * '<S13>'  : 'SideFusion_Fcn/Data_Cov_Side_Fus_LRSRR_Trigger'
 * '<S14>'  : 'SideFusion_Fcn/Data_Cov_Side_Fus_RFSRR_Trigger'
 * '<S15>'  : 'SideFusion_Fcn/Data_Cov_Side_Fus_RRSRR_Trigger'
 * '<S16>'  : 'SideFusion_Fcn/Side_Fusion'
 * '<S17>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast'
 * '<S18>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF'
 * '<S19>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR'
 * '<S20>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF'
 * '<S21>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR'
 * '<S22>'  : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod'
 * '<S23>'  : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal'
 * '<S24>'  : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect'
 * '<S25>'  : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update'
 * '<S26>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero1'
 * '<S27>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero2'
 * '<S28>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero3'
 * '<S29>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero4'
 * '<S30>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/P_Gen'
 * '<S31>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict'
 * '<S32>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict_X_P'
 * '<S33>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero1/Compare To Constant'
 * '<S34>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero2/Compare To Constant'
 * '<S35>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero3/Compare To Constant'
 * '<S36>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/No_Zero4/Compare To Constant'
 * '<S37>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/F'
 * '<S38>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/State_PreTime'
 * '<S39>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/F/F_line_1'
 * '<S40>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/F/F_line_2'
 * '<S41>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/F/F_line_3'
 * '<S42>'  : 'SideFusion_Fcn/Side_Fusion/FusTrackPredict.Forecast/Predict/F/F_line_4'
 * '<S43>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/Cal_1'
 * '<S44>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert'
 * '<S45>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero1'
 * '<S46>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero2'
 * '<S47>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero3'
 * '<S48>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero5'
 * '<S49>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero6'
 * '<S50>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/P_Gen'
 * '<S51>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/R_Gen'
 * '<S52>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/Cal_1/Subsystem1'
 * '<S53>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/Azimuth'
 * '<S54>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/RangeRate_Cal'
 * '<S55>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/VX_Ref'
 * '<S56>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/VY_Ref'
 * '<S57>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/Azimuth/No_Zero5'
 * '<S58>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/Azimuth/X_Ref'
 * '<S59>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/Azimuth/Y_Ref'
 * '<S60>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/DataConvert/Azimuth/No_Zero5/Compare To Constant'
 * '<S61>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero1/Compare To Constant'
 * '<S62>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero2/Compare To Constant'
 * '<S63>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero3/Compare To Constant'
 * '<S64>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero5/Compare To Constant'
 * '<S65>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LF/No_Zero6/Compare To Constant'
 * '<S66>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/Cal_1'
 * '<S67>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert'
 * '<S68>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero1'
 * '<S69>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero2'
 * '<S70>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero3'
 * '<S71>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero5'
 * '<S72>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero6'
 * '<S73>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/P_Gen'
 * '<S74>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/R_Gen'
 * '<S75>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/Cal_1/Subsystem1'
 * '<S76>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/Azimuth'
 * '<S77>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/RangeRate_Cal'
 * '<S78>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/VX_Ref'
 * '<S79>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/VY_Ref'
 * '<S80>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/Azimuth/No_Zero5'
 * '<S81>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/Azimuth/X_Ref'
 * '<S82>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/Azimuth/Y_Ref'
 * '<S83>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/DataConvert/Azimuth/No_Zero5/Compare To Constant'
 * '<S84>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero1/Compare To Constant'
 * '<S85>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero2/Compare To Constant'
 * '<S86>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero3/Compare To Constant'
 * '<S87>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero5/Compare To Constant'
 * '<S88>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_LR/No_Zero6/Compare To Constant'
 * '<S89>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/Cal_1'
 * '<S90>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert'
 * '<S91>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero1'
 * '<S92>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero2'
 * '<S93>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero3'
 * '<S94>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero5'
 * '<S95>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero6'
 * '<S96>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/P_Gen'
 * '<S97>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/R_Gen'
 * '<S98>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/Cal_1/Subsystem1'
 * '<S99>'  : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/Azimuth'
 * '<S100>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/RangeRate_Cal'
 * '<S101>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/VX_Ref'
 * '<S102>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/VY_Ref'
 * '<S103>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/Azimuth/No_Zero5'
 * '<S104>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/Azimuth/X_Ref'
 * '<S105>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/Azimuth/Y_Ref'
 * '<S106>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/DataConvert/Azimuth/No_Zero5/Compare To Constant'
 * '<S107>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero1/Compare To Constant'
 * '<S108>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero2/Compare To Constant'
 * '<S109>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero3/Compare To Constant'
 * '<S110>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero5/Compare To Constant'
 * '<S111>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RF/No_Zero6/Compare To Constant'
 * '<S112>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/Cal_1'
 * '<S113>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert'
 * '<S114>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero1'
 * '<S115>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero2'
 * '<S116>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero3'
 * '<S117>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero5'
 * '<S118>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero6'
 * '<S119>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/P_Gen'
 * '<S120>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/R_Gen'
 * '<S121>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/Cal_1/Subsystem1'
 * '<S122>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/Azimuth'
 * '<S123>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/RangeRate_Cal'
 * '<S124>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/VX_Ref'
 * '<S125>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/VY_Ref'
 * '<S126>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/Azimuth/No_Zero5'
 * '<S127>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/Azimuth/X_Ref'
 * '<S128>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/Azimuth/Y_Ref'
 * '<S129>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/DataConvert/Azimuth/No_Zero5/Compare To Constant'
 * '<S130>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero1/Compare To Constant'
 * '<S131>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero2/Compare To Constant'
 * '<S132>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero3/Compare To Constant'
 * '<S133>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero5/Compare To Constant'
 * '<S134>' : 'SideFusion_Fcn/Side_Fusion/Possible_Cal.Gtj_Cal.G_cal_RR/No_Zero6/Compare To Constant'
 * '<S135>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Compare To Constant'
 * '<S136>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt'
 * '<S137>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/R'
 * '<S138>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/X_vector_Gen'
 * '<S139>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/Y_vector_Gen1'
 * '<S140>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/X_vector_Gen/Compare To Constant'
 * '<S141>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/X_vector_Gen/Compare To Constant1'
 * '<S142>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/Y_vector_Gen1/Compare To Constant'
 * '<S143>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.VelocityMethod/Dmt/Y_vector_Gen1/Compare To Constant1'
 * '<S144>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal'
 * '<S145>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Compare To Constant'
 * '<S146>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Compare To Constant1'
 * '<S147>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Compare To Constant2'
 * '<S148>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Side_Length_Cal'
 * '<S149>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Side_Length_Cal/a_cal'
 * '<S150>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Side_Length_Cal/b_cal'
 * '<S151>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Initial.cos_cal/Reltive_Deg_Cal/Side_Length_Cal/c_cal'
 * '<S152>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect/Compare To Zero'
 * '<S153>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect/RefAngle_TrackerToTracklet'
 * '<S154>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect/Ref_Ang_Threshole'
 * '<S155>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Measurement_Select.Data_Gen.Angle_Detect/Subsystem'
 * '<S156>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update'
 * '<S157>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Middle_Process'
 * '<S158>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem'
 * '<S159>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1'
 * '<S160>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Middle_Process/Kalman_Gain'
 * '<S161>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Middle_Process/S_Cal'
 * '<S162>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Middle_Process/Subsystem'
 * '<S163>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Middle_Process/Subsystem/V_Cal'
 * '<S164>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem/PK_Cal'
 * '<S165>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem/X_K_Cal'
 * '<S166>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem/PK_Cal/P_Cal_1'
 * '<S167>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem/PK_Cal/P_Cal_2'
 * '<S168>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem/PK_Cal/P_Cal_3'
 * '<S169>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero1'
 * '<S170>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero2'
 * '<S171>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero3'
 * '<S172>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero4'
 * '<S173>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/P_Gen'
 * '<S174>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/Predict'
 * '<S175>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/R_Cov_Gen'
 * '<S176>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/Subsystem'
 * '<S177>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero1/Compare To Constant'
 * '<S178>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero2/Compare To Constant'
 * '<S179>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero3/Compare To Constant'
 * '<S180>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/No_Zero4/Compare To Constant'
 * '<S181>' : 'SideFusion_Fcn/Side_Fusion/Tracker_Update.Tracker_Filter.Update.Update/Model_Update/Subsystem1/Predict/State_Predit'
 */
#endif                                 /* RTW_HEADER_SideFusion_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
