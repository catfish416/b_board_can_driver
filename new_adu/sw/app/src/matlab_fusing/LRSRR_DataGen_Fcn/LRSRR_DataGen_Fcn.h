/*
 * File: LRSRR_DataGen_Fcn.h
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

#ifndef RTW_HEADER_LRSRR_DataGen_Fcn_h_
#define RTW_HEADER_LRSRR_DataGen_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef LRSRR_DataGen_Fcn_COMMON_INCLUDES_
# define LRSRR_DataGen_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LRSRR_DataGen_Fcn_COMMON_INCLUDES_ */

#include "LRSRR_DataGen_Fcn_types.h"
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
  real_T DataTypeConversion;           /* '<S25>/Data Type Conversion' */
  real_T NE;                           /* '<S25>/N->E' */
  real_T DataTypeConversion_n;         /* '<S45>/Data Type Conversion' */
  real_T NE_m;                         /* '<S45>/N->E' */
  real_T DataTypeConversion_a;         /* '<S5>/Data Type Conversion' */
  real_T NE_a;                         /* '<S5>/N->E' */
  real_T degrad;                       /* '<S5>/deg->rad' */
  real_T DataTypeConversion_ac;        /* '<S35>/Data Type Conversion' */
  real_T NE_h;                         /* '<S35>/N->E' */
  real_T DataTypeConversion_h;         /* '<S15>/Data Type Conversion' */
  real_T NE_d;                         /* '<S15>/N->E' */
  real_T TmpSignalConversionAtDivideInpo[5];
  real_T MathFunction[10];             /* '<Root>/Math Function' */
  real_T Divide[50];                   /* '<Root>/Divide' */
  real_T DataTypeConversion_e;         /* '<S27>/Data Type Conversion' */
  real_T NE_ms;                        /* '<S27>/N->E' */
  real_T DataTypeConversion_k;         /* '<S47>/Data Type Conversion' */
  real_T NE_dy;                        /* '<S47>/N->E' */
  real_T DataTypeConversion_ae;        /* '<S7>/Data Type Conversion' */
  real_T NE_ay;                        /* '<S7>/N->E' */
  real_T degrad_f;                     /* '<S7>/deg->rad' */
  real_T DataTypeConversion_p;         /* '<S37>/Data Type Conversion' */
  real_T NE_o;                         /* '<S37>/N->E' */
  real_T DataTypeConversion_i;         /* '<S17>/Data Type Conversion' */
  real_T NE_i;                         /* '<S17>/N->E' */
  real_T TmpSignalConversionAtDivide1Inp[5];
  real_T MathFunction1[10];            /* '<Root>/Math Function1' */
  real_T Divide1[50];                  /* '<Root>/Divide1' */
  real_T DataTypeConversion_m;         /* '<S28>/Data Type Conversion' */
  real_T NE_k;                         /* '<S28>/N->E' */
  real_T DataTypeConversion_g;         /* '<S48>/Data Type Conversion' */
  real_T NE_c;                         /* '<S48>/N->E' */
  real_T DataTypeConversion_ik;        /* '<S8>/Data Type Conversion' */
  real_T NE_kk;                        /* '<S8>/N->E' */
  real_T degrad_g;                     /* '<S8>/deg->rad' */
  real_T DataTypeConversion_kp;        /* '<S38>/Data Type Conversion' */
  real_T NE_p;                         /* '<S38>/N->E' */
  real_T DataTypeConversion_iq;        /* '<S18>/Data Type Conversion' */
  real_T NE_mv;                        /* '<S18>/N->E' */
  real_T TmpSignalConversionAtDivide2Inp[5];
  real_T MathFunction2[10];            /* '<Root>/Math Function2' */
  real_T Divide2[50];                  /* '<Root>/Divide2' */
  real_T DataTypeConversion_nr;        /* '<S29>/Data Type Conversion' */
  real_T NE_j;                         /* '<S29>/N->E' */
  real_T DataTypeConversion_ii;        /* '<S49>/Data Type Conversion' */
  real_T NE_e;                         /* '<S49>/N->E' */
  real_T DataTypeConversion_nc;        /* '<S9>/Data Type Conversion' */
  real_T NE_pr;                        /* '<S9>/N->E' */
  real_T degrad_a;                     /* '<S9>/deg->rad' */
  real_T DataTypeConversion_f;         /* '<S39>/Data Type Conversion' */
  real_T NE_g;                         /* '<S39>/N->E' */
  real_T DataTypeConversion_o;         /* '<S19>/Data Type Conversion' */
  real_T NE_b;                         /* '<S19>/N->E' */
  real_T TmpSignalConversionAtDivide3Inp[5];
  real_T MathFunction3[10];            /* '<Root>/Math Function3' */
  real_T Divide3[50];                  /* '<Root>/Divide3' */
  real_T DataTypeConversion_it;        /* '<S30>/Data Type Conversion' */
  real_T NE_k2;                        /* '<S30>/N->E' */
  real_T DataTypeConversion_oo;        /* '<S50>/Data Type Conversion' */
  real_T NE_gp;                        /* '<S50>/N->E' */
  real_T DataTypeConversion_c;         /* '<S10>/Data Type Conversion' */
  real_T NE_gn;                        /* '<S10>/N->E' */
  real_T degrad_c;                     /* '<S10>/deg->rad' */
  real_T DataTypeConversion_d;         /* '<S40>/Data Type Conversion' */
  real_T NE_kc;                        /* '<S40>/N->E' */
  real_T DataTypeConversion_o3;        /* '<S20>/Data Type Conversion' */
  real_T NE_ie;                        /* '<S20>/N->E' */
  real_T TmpSignalConversionAtDivide4Inp[5];
  real_T MathFunction4[10];            /* '<Root>/Math Function4' */
  real_T Divide4[50];                  /* '<Root>/Divide4' */
  real_T DataTypeConversion_nv;        /* '<S31>/Data Type Conversion' */
  real_T NE_l;                         /* '<S31>/N->E' */
  real_T DataTypeConversion_b;         /* '<S51>/Data Type Conversion' */
  real_T NE_cb;                        /* '<S51>/N->E' */
  real_T DataTypeConversion_ds;        /* '<S11>/Data Type Conversion' */
  real_T NE_oc;                        /* '<S11>/N->E' */
  real_T degrad_e;                     /* '<S11>/deg->rad' */
  real_T DataTypeConversion_nh;        /* '<S41>/Data Type Conversion' */
  real_T NE_je;                        /* '<S41>/N->E' */
  real_T DataTypeConversion_oc;        /* '<S21>/Data Type Conversion' */
  real_T NE_n;                         /* '<S21>/N->E' */
  real_T TmpSignalConversionAtDivide5Inp[5];
  real_T MathFunction5[10];            /* '<Root>/Math Function5' */
  real_T Divide5[50];                  /* '<Root>/Divide5' */
  real_T DataTypeConversion_bv;        /* '<S32>/Data Type Conversion' */
  real_T NE_lw;                        /* '<S32>/N->E' */
  real_T DataTypeConversion_mp;        /* '<S52>/Data Type Conversion' */
  real_T NE_jy;                        /* '<S52>/N->E' */
  real_T DataTypeConversion_gk;        /* '<S12>/Data Type Conversion' */
  real_T NE_pm;                        /* '<S12>/N->E' */
  real_T degrad_cn;                    /* '<S12>/deg->rad' */
  real_T DataTypeConversion_kw;        /* '<S42>/Data Type Conversion' */
  real_T NE_dq;                        /* '<S42>/N->E' */
  real_T DataTypeConversion_i3;        /* '<S22>/Data Type Conversion' */
  real_T NE_b2;                        /* '<S22>/N->E' */
  real_T TmpSignalConversionAtDivide6Inp[5];
  real_T MathFunction6[10];            /* '<Root>/Math Function6' */
  real_T Divide6[50];                  /* '<Root>/Divide6' */
  real_T DataTypeConversion_l;         /* '<S33>/Data Type Conversion' */
  real_T NE_hc;                        /* '<S33>/N->E' */
  real_T DataTypeConversion_k4;        /* '<S53>/Data Type Conversion' */
  real_T NE_nn;                        /* '<S53>/N->E' */
  real_T DataTypeConversion_kz;        /* '<S13>/Data Type Conversion' */
  real_T NE_jg;                        /* '<S13>/N->E' */
  real_T degrad_d;                     /* '<S13>/deg->rad' */
  real_T DataTypeConversion_ic;        /* '<S43>/Data Type Conversion' */
  real_T NE_n3;                        /* '<S43>/N->E' */
  real_T DataTypeConversion_kb;        /* '<S23>/Data Type Conversion' */
  real_T NE_f;                         /* '<S23>/N->E' */
  real_T TmpSignalConversionAtDivide7Inp[5];
  real_T MathFunction7[10];            /* '<Root>/Math Function7' */
  real_T Divide7[50];                  /* '<Root>/Divide7' */
  real_T DataTypeConversion_gk4;       /* '<S34>/Data Type Conversion' */
  real_T NE_ko;                        /* '<S34>/N->E' */
  real_T DataTypeConversion_mg;        /* '<S54>/Data Type Conversion' */
  real_T NE_ed;                        /* '<S54>/N->E' */
  real_T DataTypeConversion_j;         /* '<S14>/Data Type Conversion' */
  real_T NE_ks;                        /* '<S14>/N->E' */
  real_T degrad_h;                     /* '<S14>/deg->rad' */
  real_T DataTypeConversion_os;        /* '<S44>/Data Type Conversion' */
  real_T NE_op;                        /* '<S44>/N->E' */
  real_T DataTypeConversion_hh;        /* '<S24>/Data Type Conversion' */
  real_T NE_ng;                        /* '<S24>/N->E' */
  real_T TmpSignalConversionAtDivide8Inp[5];
  real_T MathFunction8[10];            /* '<Root>/Math Function8' */
  real_T Divide8[50];                  /* '<Root>/Divide8' */
  real_T DataTypeConversion_av;        /* '<S26>/Data Type Conversion' */
  real_T NE_et;                        /* '<S26>/N->E' */
  real_T DataTypeConversion_aa;        /* '<S46>/Data Type Conversion' */
  real_T NE_ck;                        /* '<S46>/N->E' */
  real_T DataTypeConversion_dc;        /* '<S6>/Data Type Conversion' */
  real_T NE_m3;                        /* '<S6>/N->E' */
  real_T degrad_e5;                    /* '<S6>/deg->rad' */
  real_T DataTypeConversion_p5;        /* '<S36>/Data Type Conversion' */
  real_T NE_k4;                        /* '<S36>/N->E' */
  real_T DataTypeConversion_bf;        /* '<S16>/Data Type Conversion' */
  real_T NE_gd;                        /* '<S16>/N->E' */
  real_T TmpSignalConversionAtDivide9Inp[5];
  real_T MathFunction9[10];            /* '<Root>/Math Function9' */
  real_T Divide9[50];                  /* '<Root>/Divide9' */
  real_T Add[50];                      /* '<Root>/Add' */
  real_T MathFunction10[50];           /* '<Root>/Math Function10' */
  real_T RateTransition[50];           /* '<Root>/Rate Transition' */
  real_T DataTypeConversion_jb;        /* '<S3>/Data Type Conversion' */
  real_T NE_c2;                        /* '<S3>/N->E' */
  real_T EN[50];                       /* '<S2>/E->N' */
  real_T EN_h;                         /* '<S56>/E->N' */
  real_T EN_j;                         /* '<S55>/E->N' */
  real_T LRSRR_Output[50];             /* '<Root>/Chart' */
  real_T LRSRR_RxTime_Out;             /* '<Root>/Chart' */
  real_T Side_Trigger_LRSRR_n;         /* '<Root>/Chart' */
  real_T range;                        /* '<Root>/Chart' */
  real_T azimuth;                      /* '<Root>/Chart' */
  real_T W;                            /* '<Root>/Chart' */
  real_T L;                            /* '<Root>/Chart' */
  real_T InstallAngLRSRR;              /* '<Root>/Chart' */
  real_T Add_j;                        /* '<S58>/Add' */
  real_T TrigonometricFunction;        /* '<S58>/Trigonometric Function' */
  real_T Product;                      /* '<S58>/Product' */
  real_T Gain;                         /* '<S58>/Gain' */
  real_T Add1;                         /* '<S58>/Add1' */
  real_T TrigonometricFunction1;       /* '<S58>/Trigonometric Function1' */
  real_T Product1;                     /* '<S58>/Product1' */
  real_T Add2;                         /* '<S58>/Add2' */
  uint16_T NE_bw;                      /* '<S4>/N->E' */
  int8_T LRSRR_Trig;                   /* '<Root>/Chart' */
  uint8_T DataTypeConversion_mu;       /* '<S4>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S59>/Compare' */
  boolean_T Memory;                    /* '<S57>/Memory' */
  boolean_T Switch;                    /* '<S57>/Switch' */
  boolean_T LogicalOperator;           /* '<S57>/Logical Operator' */
} B_LRSRR_DataGen_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S57>/Memory' */
} DW_LRSRR_DataGen_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Chart_Trig_ZCE;           /* '<Root>/Chart' */
} PrevZCX_LRSRR_DataGen_Fcn_T;

/* Parameters (auto storage) */
struct P_LRSRR_DataGen_Fcn_T_ {
  uint16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S59>/Constant'
                                        */
  real_T rangeX_Y0;                    /* Computed Parameter: rangeX_Y0
                                        * Referenced by: '<S58>/rangeX'
                                        */
  real_T rangeY_Y0;                    /* Computed Parameter: rangeY_Y0
                                        * Referenced by: '<S58>/rangeY'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S58>/Gain'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S25>/N->E'
                                        */
  real_T NE_Gain_l;                    /* Expression: 0.02
                                        * Referenced by: '<S45>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 0.125
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S5>/deg->rad'
                                        */
  real_T NE_Gain_o;                    /* Expression: 0.125
                                        * Referenced by: '<S35>/N->E'
                                        */
  real_T NE_Gain_d;                    /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */
  real_T Constant4_Value[10];          /* Expression: [1 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T NE_Gain_a;                    /* Expression: 1
                                        * Referenced by: '<S27>/N->E'
                                        */
  real_T NE_Gain_f;                    /* Expression: 0.02
                                        * Referenced by: '<S47>/N->E'
                                        */
  real_T NE_Gain_g;                    /* Expression: 0.125
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T degrad_Gain_c;                /* Expression: pi/180
                                        * Referenced by: '<S7>/deg->rad'
                                        */
  real_T NE_Gain_l0;                   /* Expression: 0.125
                                        * Referenced by: '<S37>/N->E'
                                        */
  real_T NE_Gain_b;                    /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */
  real_T Constant1_Value[10];          /* Expression: [0 1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T NE_Gain_j;                    /* Expression: 1
                                        * Referenced by: '<S28>/N->E'
                                        */
  real_T NE_Gain_k;                    /* Expression: 0.02
                                        * Referenced by: '<S48>/N->E'
                                        */
  real_T NE_Gain_g2;                   /* Expression: 0.125
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T degrad_Gain_i;                /* Expression: pi/180
                                        * Referenced by: '<S8>/deg->rad'
                                        */
  real_T NE_Gain_n;                    /* Expression: 0.125
                                        * Referenced by: '<S38>/N->E'
                                        */
  real_T NE_Gain_nx;                   /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  real_T Constant2_Value[10];          /* Expression: [0 0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T NE_Gain_g3;                   /* Expression: 1
                                        * Referenced by: '<S29>/N->E'
                                        */
  real_T NE_Gain_jy;                   /* Expression: 0.02
                                        * Referenced by: '<S49>/N->E'
                                        */
  real_T NE_Gain_nq;                   /* Expression: 0.125
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T degrad_Gain_f;                /* Expression: pi/180
                                        * Referenced by: '<S9>/deg->rad'
                                        */
  real_T NE_Gain_lc;                   /* Expression: 0.125
                                        * Referenced by: '<S39>/N->E'
                                        */
  real_T NE_Gain_ij;                   /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */
  real_T Constant3_Value[10];          /* Expression: [0 0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T NE_Gain_kl;                   /* Expression: 1
                                        * Referenced by: '<S30>/N->E'
                                        */
  real_T NE_Gain_lw;                   /* Expression: 0.02
                                        * Referenced by: '<S50>/N->E'
                                        */
  real_T NE_Gain_kf;                   /* Expression: 0.125
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T degrad_Gain_g;                /* Expression: pi/180
                                        * Referenced by: '<S10>/deg->rad'
                                        */
  real_T NE_Gain_fp;                   /* Expression: 0.125
                                        * Referenced by: '<S40>/N->E'
                                        */
  real_T NE_Gain_e;                    /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */
  real_T Constant5_Value[10];          /* Expression: [0 0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T NE_Gain_f0;                   /* Expression: 1
                                        * Referenced by: '<S31>/N->E'
                                        */
  real_T NE_Gain_gr;                   /* Expression: 0.02
                                        * Referenced by: '<S51>/N->E'
                                        */
  real_T NE_Gain_ep;                   /* Expression: 0.125
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T degrad_Gain_f2;               /* Expression: pi/180
                                        * Referenced by: '<S11>/deg->rad'
                                        */
  real_T NE_Gain_h;                    /* Expression: 0.125
                                        * Referenced by: '<S41>/N->E'
                                        */
  real_T NE_Gain_of;                   /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */
  real_T Constant6_Value[10];          /* Expression: [0 0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T NE_Gain_p;                    /* Expression: 1
                                        * Referenced by: '<S32>/N->E'
                                        */
  real_T NE_Gain_e2;                   /* Expression: 0.02
                                        * Referenced by: '<S52>/N->E'
                                        */
  real_T NE_Gain_b2;                   /* Expression: 0.125
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T degrad_Gain_a;                /* Expression: pi/180
                                        * Referenced by: '<S12>/deg->rad'
                                        */
  real_T NE_Gain_hd;                   /* Expression: 0.125
                                        * Referenced by: '<S42>/N->E'
                                        */
  real_T NE_Gain_pm;                   /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */
  real_T Constant7_Value[10];          /* Expression: [0 0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T NE_Gain_o5;                   /* Expression: 1
                                        * Referenced by: '<S33>/N->E'
                                        */
  real_T NE_Gain_pe;                   /* Expression: 0.02
                                        * Referenced by: '<S53>/N->E'
                                        */
  real_T NE_Gain_ov;                   /* Expression: 0.125
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T degrad_Gain_c2;               /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  real_T NE_Gain_k5;                   /* Expression: 0.125
                                        * Referenced by: '<S43>/N->E'
                                        */
  real_T NE_Gain_n4;                   /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */
  real_T Constant8_Value[10];          /* Expression: [0 0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T NE_Gain_e3;                   /* Expression: 1
                                        * Referenced by: '<S34>/N->E'
                                        */
  real_T NE_Gain_nt;                   /* Expression: 0.02
                                        * Referenced by: '<S54>/N->E'
                                        */
  real_T NE_Gain_gc;                   /* Expression: 0.125
                                        * Referenced by: '<S14>/N->E'
                                        */
  real_T degrad_Gain_ia;               /* Expression: pi/180
                                        * Referenced by: '<S14>/deg->rad'
                                        */
  real_T NE_Gain_aw;                   /* Expression: 0.125
                                        * Referenced by: '<S44>/N->E'
                                        */
  real_T NE_Gain_k5h;                  /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */
  real_T Constant9_Value[10];          /* Expression: [0 0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T NE_Gain_c;                    /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */
  real_T NE_Gain_cb;                   /* Expression: 0.02
                                        * Referenced by: '<S46>/N->E'
                                        */
  real_T NE_Gain_grn;                  /* Expression: 0.125
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T degrad_Gain_b;                /* Expression: pi/180
                                        * Referenced by: '<S6>/deg->rad'
                                        */
  real_T NE_Gain_m;                    /* Expression: 0.125
                                        * Referenced by: '<S36>/N->E'
                                        */
  real_T NE_Gain_l00;                  /* Expression: 1
                                        * Referenced by: '<S16>/N->E'
                                        */
  real_T Constant10_Value[10];         /* Expression: [0 0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T NE_Gain_df;                   /* Expression: 0.001
                                        * Referenced by: '<S3>/N->E'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S2>/E->N'
                                        */
  real_T EN_Gain_c;                    /* Expression: 1
                                        * Referenced by: '<S56>/E->N'
                                        */
  real_T EN_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S55>/E->N'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S57>/Switch'
                                        */
  boolean_T Memory_X0;                 /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S57>/Memory'
                                        */
  uint8_T NE_Gain_awq;                 /* Computed Parameter: NE_Gain_awq
                                        * Referenced by: '<S4>/N->E'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_LRSRR_DataGen_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_P;

/* Block signals (auto storage) */
extern B_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_B;

/* Block states (auto storage) */
extern DW_LRSRR_DataGen_Fcn_T LRSRR_DataGen_Fcn_DW;

/* Model entry point functions */
extern void LRSRR_DataGen_Fcn_initialize(void);
extern void LRSRR_DataGen_Fcn_step(void);
extern void LRSRR_DataGen_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LRSRR_DataGen_Fcn_T *const LRSRR_DataGen_Fcn_M;

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
 * '<Root>' : 'LRSRR_DataGen_Fcn'
 * '<S1>'   : 'LRSRR_DataGen_Fcn/Chart'
 * '<S2>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LRSRR_Data[10X5]'
 * '<S3>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LRSRR_RxTime'
 * '<S4>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LRSRR_Trigger'
 * '<S5>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth1'
 * '<S6>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth10'
 * '<S7>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth2'
 * '<S8>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth3'
 * '<S9>'   : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth4'
 * '<S10>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth5'
 * '<S11>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth6'
 * '<S12>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth7'
 * '<S13>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth8'
 * '<S14>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkAzimuth9'
 * '<S15>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp1'
 * '<S16>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp10'
 * '<S17>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp2'
 * '<S18>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp3'
 * '<S19>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp4'
 * '<S20>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp5'
 * '<S21>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp6'
 * '<S22>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp7'
 * '<S23>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp8'
 * '<S24>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkDynamProp9'
 * '<S25>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID1'
 * '<S26>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID10'
 * '<S27>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID2'
 * '<S28>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID3'
 * '<S29>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID4'
 * '<S30>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID5'
 * '<S31>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID6'
 * '<S32>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID7'
 * '<S33>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID8'
 * '<S34>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkObjID9'
 * '<S35>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate1'
 * '<S36>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate10'
 * '<S37>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate2'
 * '<S38>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate3'
 * '<S39>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate4'
 * '<S40>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate5'
 * '<S41>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate6'
 * '<S42>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate7'
 * '<S43>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate8'
 * '<S44>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRRate9'
 * '<S45>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange1'
 * '<S46>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange10'
 * '<S47>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange2'
 * '<S48>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange3'
 * '<S49>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange4'
 * '<S50>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange5'
 * '<S51>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange6'
 * '<S52>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange7'
 * '<S53>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange8'
 * '<S54>'  : 'LRSRR_DataGen_Fcn/Data_Cov_LR_SrrTrkRange9'
 * '<S55>'  : 'LRSRR_DataGen_Fcn/Data_Cov_Side_LRSRR_RxTime'
 * '<S56>'  : 'LRSRR_DataGen_Fcn/Data_Cov_Side_Trigger_LRSRR'
 * '<S57>'  : 'LRSRR_DataGen_Fcn/Trigger_Gen'
 * '<S58>'  : 'LRSRR_DataGen_Fcn/Chart/TemporalAligLR'
 * '<S59>'  : 'LRSRR_DataGen_Fcn/Trigger_Gen/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_LRSRR_DataGen_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
