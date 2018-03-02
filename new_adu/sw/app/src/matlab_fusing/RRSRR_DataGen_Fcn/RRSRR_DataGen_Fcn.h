/*
 * File: RRSRR_DataGen_Fcn.h
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

#ifndef RTW_HEADER_RRSRR_DataGen_Fcn_h_
#define RTW_HEADER_RRSRR_DataGen_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef RRSRR_DataGen_Fcn_COMMON_INCLUDES_
# define RRSRR_DataGen_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* RRSRR_DataGen_Fcn_COMMON_INCLUDES_ */

#include "RRSRR_DataGen_Fcn_types.h"
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
  real_T DataTypeConversion_j;         /* '<S45>/Data Type Conversion' */
  real_T NE_g;                         /* '<S45>/N->E' */
  real_T DataTypeConversion_n;         /* '<S5>/Data Type Conversion' */
  real_T NE_b;                         /* '<S5>/N->E' */
  real_T degrad;                       /* '<S5>/deg->rad' */
  real_T DataTypeConversion_p;         /* '<S35>/Data Type Conversion' */
  real_T NE_h;                         /* '<S35>/N->E' */
  real_T DataTypeConversion_f;         /* '<S15>/Data Type Conversion' */
  real_T NE_d;                         /* '<S15>/N->E' */
  real_T TmpSignalConversionAtDivideInpo[5];
  real_T MathFunction[10];             /* '<Root>/Math Function' */
  real_T Divide[50];                   /* '<Root>/Divide' */
  real_T DataTypeConversion_o;         /* '<S27>/Data Type Conversion' */
  real_T NE_ha;                        /* '<S27>/N->E' */
  real_T DataTypeConversion_nj;        /* '<S47>/Data Type Conversion' */
  real_T NE_j;                         /* '<S47>/N->E' */
  real_T DataTypeConversion_np;        /* '<S7>/Data Type Conversion' */
  real_T NE_d3;                        /* '<S7>/N->E' */
  real_T degrad_p;                     /* '<S7>/deg->rad' */
  real_T DataTypeConversion_d;         /* '<S37>/Data Type Conversion' */
  real_T NE_f;                         /* '<S37>/N->E' */
  real_T DataTypeConversion_h;         /* '<S17>/Data Type Conversion' */
  real_T NE_i;                         /* '<S17>/N->E' */
  real_T TmpSignalConversionAtDivide1Inp[5];
  real_T MathFunction1[10];            /* '<Root>/Math Function1' */
  real_T Divide1[50];                  /* '<Root>/Divide1' */
  real_T DataTypeConversion_jw;        /* '<S28>/Data Type Conversion' */
  real_T NE_jv;                        /* '<S28>/N->E' */
  real_T DataTypeConversion_b;         /* '<S48>/Data Type Conversion' */
  real_T NE_a;                         /* '<S48>/N->E' */
  real_T DataTypeConversion_dc;        /* '<S8>/Data Type Conversion' */
  real_T NE_fp;                        /* '<S8>/N->E' */
  real_T degrad_b;                     /* '<S8>/deg->rad' */
  real_T DataTypeConversion_c;         /* '<S38>/Data Type Conversion' */
  real_T NE_g1;                        /* '<S38>/N->E' */
  real_T DataTypeConversion_ho;        /* '<S18>/Data Type Conversion' */
  real_T NE_l;                         /* '<S18>/N->E' */
  real_T TmpSignalConversionAtDivide2Inp[5];
  real_T MathFunction2[10];            /* '<Root>/Math Function2' */
  real_T Divide2[50];                  /* '<Root>/Divide2' */
  real_T DataTypeConversion_e;         /* '<S29>/Data Type Conversion' */
  real_T NE_g4;                        /* '<S29>/N->E' */
  real_T DataTypeConversion_l;         /* '<S49>/Data Type Conversion' */
  real_T NE_m;                         /* '<S49>/N->E' */
  real_T DataTypeConversion_i;         /* '<S9>/Data Type Conversion' */
  real_T NE_c;                         /* '<S9>/N->E' */
  real_T degrad_ba;                    /* '<S9>/deg->rad' */
  real_T DataTypeConversion_cf;        /* '<S39>/Data Type Conversion' */
  real_T NE_g4l;                       /* '<S39>/N->E' */
  real_T DataTypeConversion_ed;        /* '<S19>/Data Type Conversion' */
  real_T NE_cp;                        /* '<S19>/N->E' */
  real_T TmpSignalConversionAtDivide3Inp[5];
  real_T MathFunction3[10];            /* '<Root>/Math Function3' */
  real_T Divide3[50];                  /* '<Root>/Divide3' */
  real_T DataTypeConversion_jo;        /* '<S30>/Data Type Conversion' */
  real_T NE_c1;                        /* '<S30>/N->E' */
  real_T DataTypeConversion_pc;        /* '<S50>/Data Type Conversion' */
  real_T NE_gg;                        /* '<S50>/N->E' */
  real_T DataTypeConversion_k;         /* '<S10>/Data Type Conversion' */
  real_T NE_ax;                        /* '<S10>/N->E' */
  real_T degrad_m;                     /* '<S10>/deg->rad' */
  real_T DataTypeConversion_m;         /* '<S40>/Data Type Conversion' */
  real_T NE_jt;                        /* '<S40>/N->E' */
  real_T DataTypeConversion_nf;        /* '<S20>/Data Type Conversion' */
  real_T NE_p;                         /* '<S20>/N->E' */
  real_T TmpSignalConversionAtDivide4Inp[5];
  real_T MathFunction4[10];            /* '<Root>/Math Function4' */
  real_T Divide4[50];                  /* '<Root>/Divide4' */
  real_T DataTypeConversion_hi;        /* '<S31>/Data Type Conversion' */
  real_T NE_au;                        /* '<S31>/N->E' */
  real_T DataTypeConversion_ni;        /* '<S51>/Data Type Conversion' */
  real_T NE_k;                         /* '<S51>/N->E' */
  real_T DataTypeConversion_em;        /* '<S11>/Data Type Conversion' */
  real_T NE_px;                        /* '<S11>/N->E' */
  real_T degrad_pz;                    /* '<S11>/deg->rad' */
  real_T DataTypeConversion_ln;        /* '<S41>/Data Type Conversion' */
  real_T NE_n;                         /* '<S41>/N->E' */
  real_T DataTypeConversion_bp;        /* '<S21>/Data Type Conversion' */
  real_T NE_i1;                        /* '<S21>/N->E' */
  real_T TmpSignalConversionAtDivide5Inp[5];
  real_T MathFunction5[10];            /* '<Root>/Math Function5' */
  real_T Divide5[50];                  /* '<Root>/Divide5' */
  real_T DataTypeConversion_iw;        /* '<S32>/Data Type Conversion' */
  real_T NE_gz;                        /* '<S32>/N->E' */
  real_T DataTypeConversion_f3;        /* '<S52>/Data Type Conversion' */
  real_T NE_ck;                        /* '<S52>/N->E' */
  real_T DataTypeConversion_ds;        /* '<S12>/Data Type Conversion' */
  real_T NE_n0;                        /* '<S12>/N->E' */
  real_T degrad_k;                     /* '<S12>/deg->rad' */
  real_T DataTypeConversion_bf;        /* '<S42>/Data Type Conversion' */
  real_T NE_ix;                        /* '<S42>/N->E' */
  real_T DataTypeConversion_ia;        /* '<S22>/Data Type Conversion' */
  real_T NE_a5;                        /* '<S22>/N->E' */
  real_T TmpSignalConversionAtDivide6Inp[5];
  real_T MathFunction6[10];            /* '<Root>/Math Function6' */
  real_T Divide6[50];                  /* '<Root>/Divide6' */
  real_T DataTypeConversion_ps;        /* '<S33>/Data Type Conversion' */
  real_T NE_fa;                        /* '<S33>/N->E' */
  real_T DataTypeConversion_pf;        /* '<S53>/Data Type Conversion' */
  real_T NE_p4;                        /* '<S53>/N->E' */
  real_T DataTypeConversion_mk;        /* '<S13>/Data Type Conversion' */
  real_T NE_ar;                        /* '<S13>/N->E' */
  real_T degrad_f;                     /* '<S13>/deg->rad' */
  real_T DataTypeConversion_nx;        /* '<S43>/Data Type Conversion' */
  real_T NE_hn;                        /* '<S43>/N->E' */
  real_T DataTypeConversion_j3;        /* '<S23>/Data Type Conversion' */
  real_T NE_fw;                        /* '<S23>/N->E' */
  real_T TmpSignalConversionAtDivide7Inp[5];
  real_T MathFunction7[10];            /* '<Root>/Math Function7' */
  real_T Divide7[50];                  /* '<Root>/Divide7' */
  real_T DataTypeConversion_df;        /* '<S34>/Data Type Conversion' */
  real_T NE_cn;                        /* '<S34>/N->E' */
  real_T DataTypeConversion_kp;        /* '<S54>/Data Type Conversion' */
  real_T NE_bl;                        /* '<S54>/N->E' */
  real_T DataTypeConversion_a;         /* '<S14>/Data Type Conversion' */
  real_T NE_pn;                        /* '<S14>/N->E' */
  real_T degrad_c;                     /* '<S14>/deg->rad' */
  real_T DataTypeConversion_bl;        /* '<S44>/Data Type Conversion' */
  real_T NE_e;                         /* '<S44>/N->E' */
  real_T DataTypeConversion_pl;        /* '<S24>/Data Type Conversion' */
  real_T NE_dz;                        /* '<S24>/N->E' */
  real_T TmpSignalConversionAtDivide8Inp[5];
  real_T MathFunction8[10];            /* '<Root>/Math Function8' */
  real_T Divide8[50];                  /* '<Root>/Divide8' */
  real_T DataTypeConversion_f5;        /* '<S26>/Data Type Conversion' */
  real_T NE_ixd;                       /* '<S26>/N->E' */
  real_T DataTypeConversion_jz;        /* '<S46>/Data Type Conversion' */
  real_T NE_l3;                        /* '<S46>/N->E' */
  real_T DataTypeConversion_ea;        /* '<S6>/Data Type Conversion' */
  real_T NE_jg;                        /* '<S6>/N->E' */
  real_T degrad_i;                     /* '<S6>/deg->rad' */
  real_T DataTypeConversion_g;         /* '<S36>/Data Type Conversion' */
  real_T NE_ga;                        /* '<S36>/N->E' */
  real_T DataTypeConversion_cz;        /* '<S16>/Data Type Conversion' */
  real_T NE_ca;                        /* '<S16>/N->E' */
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
  real_T RRSRR_Output[50];             /* '<Root>/Chart' */
  real_T RRSRR_RxTime_Out;             /* '<Root>/Chart' */
  real_T Side_Trigger_RRSRR_h;         /* '<Root>/Chart' */
  real_T range;                        /* '<Root>/Chart' */
  real_T azimuth;                      /* '<Root>/Chart' */
  real_T W;                            /* '<Root>/Chart' */
  real_T L;                            /* '<Root>/Chart' */
  real_T InstallAngRRSRR;              /* '<Root>/Chart' */
  real_T Add_c;                        /* '<S58>/Add' */
  real_T TrigonometricFunction;        /* '<S58>/Trigonometric Function' */
  real_T Product;                      /* '<S58>/Product' */
  real_T Gain;                         /* '<S58>/Gain' */
  real_T Add1;                         /* '<S58>/Add1' */
  real_T TrigonometricFunction1;       /* '<S58>/Trigonometric Function1' */
  real_T Product1;                     /* '<S58>/Product1' */
  real_T Add2;                         /* '<S58>/Add2' */
  uint16_T NE_bw;                      /* '<S4>/N->E' */
  int8_T RRSRR_Trig;                   /* '<Root>/Chart' */
  uint8_T DataTypeConversion_mu;       /* '<S4>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S59>/Compare' */
  boolean_T Memory;                    /* '<S57>/Memory' */
  boolean_T Switch;                    /* '<S57>/Switch' */
  boolean_T LogicalOperator;           /* '<S57>/Logical Operator' */
} B_RRSRR_DataGen_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S57>/Memory' */
} DW_RRSRR_DataGen_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Chart_Trig_ZCE;           /* '<Root>/Chart' */
} PrevZCX_RRSRR_DataGen_Fcn_T;

/* Parameters (auto storage) */
struct P_RRSRR_DataGen_Fcn_T_ {
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
  real_T NE_Gain_g;                    /* Expression: 0.02
                                        * Referenced by: '<S45>/N->E'
                                        */
  real_T NE_Gain_a;                    /* Expression: 0.125
                                        * Referenced by: '<S5>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S5>/deg->rad'
                                        */
  real_T NE_Gain_j;                    /* Expression: 0.125
                                        * Referenced by: '<S35>/N->E'
                                        */
  real_T NE_Gain_f;                    /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */
  real_T Constant4_Value[10];          /* Expression: [1 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T NE_Gain_h;                    /* Expression: 1
                                        * Referenced by: '<S27>/N->E'
                                        */
  real_T NE_Gain_b;                    /* Expression: 0.02
                                        * Referenced by: '<S47>/N->E'
                                        */
  real_T NE_Gain_e;                    /* Expression: 0.125
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T degrad_Gain_n;                /* Expression: pi/180
                                        * Referenced by: '<S7>/deg->rad'
                                        */
  real_T NE_Gain_d;                    /* Expression: 0.125
                                        * Referenced by: '<S37>/N->E'
                                        */
  real_T NE_Gain_an;                   /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */
  real_T Constant1_Value[10];          /* Expression: [0 1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T NE_Gain_l;                    /* Expression: 1
                                        * Referenced by: '<S28>/N->E'
                                        */
  real_T NE_Gain_ek;                   /* Expression: 0.02
                                        * Referenced by: '<S48>/N->E'
                                        */
  real_T NE_Gain_c;                    /* Expression: 0.125
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T degrad_Gain_p;                /* Expression: pi/180
                                        * Referenced by: '<S8>/deg->rad'
                                        */
  real_T NE_Gain_l5;                   /* Expression: 0.125
                                        * Referenced by: '<S38>/N->E'
                                        */
  real_T NE_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  real_T Constant2_Value[10];          /* Expression: [0 0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T NE_Gain_dc;                   /* Expression: 1
                                        * Referenced by: '<S29>/N->E'
                                        */
  real_T NE_Gain_a5;                   /* Expression: 0.02
                                        * Referenced by: '<S49>/N->E'
                                        */
  real_T NE_Gain_gb;                   /* Expression: 0.125
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T degrad_Gain_h;                /* Expression: pi/180
                                        * Referenced by: '<S9>/deg->rad'
                                        */
  real_T NE_Gain_bg;                   /* Expression: 0.125
                                        * Referenced by: '<S39>/N->E'
                                        */
  real_T NE_Gain_o;                    /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */
  real_T Constant3_Value[10];          /* Expression: [0 0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T NE_Gain_j4;                   /* Expression: 1
                                        * Referenced by: '<S30>/N->E'
                                        */
  real_T NE_Gain_dg;                   /* Expression: 0.02
                                        * Referenced by: '<S50>/N->E'
                                        */
  real_T NE_Gain_k;                    /* Expression: 0.125
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T degrad_Gain_l;                /* Expression: pi/180
                                        * Referenced by: '<S10>/deg->rad'
                                        */
  real_T NE_Gain_ai;                   /* Expression: 0.125
                                        * Referenced by: '<S40>/N->E'
                                        */
  real_T NE_Gain_ht;                   /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */
  real_T Constant5_Value[10];          /* Expression: [0 0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T NE_Gain_p;                    /* Expression: 1
                                        * Referenced by: '<S31>/N->E'
                                        */
  real_T NE_Gain_en;                   /* Expression: 0.02
                                        * Referenced by: '<S51>/N->E'
                                        */
  real_T NE_Gain_av;                   /* Expression: 0.125
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T degrad_Gain_d;                /* Expression: pi/180
                                        * Referenced by: '<S11>/deg->rad'
                                        */
  real_T NE_Gain_pe;                   /* Expression: 0.125
                                        * Referenced by: '<S41>/N->E'
                                        */
  real_T NE_Gain_nq;                   /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */
  real_T Constant6_Value[10];          /* Expression: [0 0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T NE_Gain_gl;                   /* Expression: 1
                                        * Referenced by: '<S32>/N->E'
                                        */
  real_T NE_Gain_hm;                   /* Expression: 0.02
                                        * Referenced by: '<S52>/N->E'
                                        */
  real_T NE_Gain_pz;                   /* Expression: 0.125
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T degrad_Gain_de;               /* Expression: pi/180
                                        * Referenced by: '<S12>/deg->rad'
                                        */
  real_T NE_Gain_l0;                   /* Expression: 0.125
                                        * Referenced by: '<S42>/N->E'
                                        */
  real_T NE_Gain_c4;                   /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */
  real_T Constant7_Value[10];          /* Expression: [0 0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T NE_Gain_lx;                   /* Expression: 1
                                        * Referenced by: '<S33>/N->E'
                                        */
  real_T NE_Gain_of;                   /* Expression: 0.02
                                        * Referenced by: '<S53>/N->E'
                                        */
  real_T NE_Gain_fz;                   /* Expression: 0.125
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T degrad_Gain_n0;               /* Expression: pi/180
                                        * Referenced by: '<S13>/deg->rad'
                                        */
  real_T NE_Gain_cr;                   /* Expression: 0.125
                                        * Referenced by: '<S43>/N->E'
                                        */
  real_T NE_Gain_jg;                   /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */
  real_T Constant8_Value[10];          /* Expression: [0 0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T NE_Gain_be;                   /* Expression: 1
                                        * Referenced by: '<S34>/N->E'
                                        */
  real_T NE_Gain_js;                   /* Expression: 0.02
                                        * Referenced by: '<S54>/N->E'
                                        */
  real_T NE_Gain_lf;                   /* Expression: 0.125
                                        * Referenced by: '<S14>/N->E'
                                        */
  real_T degrad_Gain_k;                /* Expression: pi/180
                                        * Referenced by: '<S14>/deg->rad'
                                        */
  real_T NE_Gain_eb;                   /* Expression: 0.125
                                        * Referenced by: '<S44>/N->E'
                                        */
  real_T NE_Gain_dl;                   /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */
  real_T Constant9_Value[10];          /* Expression: [0 0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T NE_Gain_g2;                   /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */
  real_T NE_Gain_c0;                   /* Expression: 0.02
                                        * Referenced by: '<S46>/N->E'
                                        */
  real_T NE_Gain_jq;                   /* Expression: 0.125
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T degrad_Gain_b;                /* Expression: pi/180
                                        * Referenced by: '<S6>/deg->rad'
                                        */
  real_T NE_Gain_ef;                   /* Expression: 0.125
                                        * Referenced by: '<S36>/N->E'
                                        */
  real_T NE_Gain_li;                   /* Expression: 1
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
  uint8_T NE_Gain_aw;                  /* Computed Parameter: NE_Gain_aw
                                        * Referenced by: '<S4>/N->E'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_RRSRR_DataGen_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_P;

/* Block signals (auto storage) */
extern B_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_B;

/* Block states (auto storage) */
extern DW_RRSRR_DataGen_Fcn_T RRSRR_DataGen_Fcn_DW;

/* Model entry point functions */
extern void RRSRR_DataGen_Fcn_initialize(void);
extern void RRSRR_DataGen_Fcn_step(void);
extern void RRSRR_DataGen_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_RRSRR_DataGen_Fcn_T *const RRSRR_DataGen_Fcn_M;

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
 * '<Root>' : 'RRSRR_DataGen_Fcn'
 * '<S1>'   : 'RRSRR_DataGen_Fcn/Chart'
 * '<S2>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RRSRR_Data[10X5]'
 * '<S3>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RRSRR_RxTime'
 * '<S4>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RRSRR_Trigger'
 * '<S5>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth1'
 * '<S6>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth10'
 * '<S7>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth2'
 * '<S8>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth3'
 * '<S9>'   : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth4'
 * '<S10>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth5'
 * '<S11>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth6'
 * '<S12>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth7'
 * '<S13>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth8'
 * '<S14>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkAzimuth9'
 * '<S15>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp1'
 * '<S16>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp10'
 * '<S17>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp2'
 * '<S18>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp3'
 * '<S19>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp4'
 * '<S20>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp5'
 * '<S21>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp6'
 * '<S22>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp7'
 * '<S23>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp8'
 * '<S24>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkDynamProp9'
 * '<S25>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID1'
 * '<S26>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID10'
 * '<S27>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID2'
 * '<S28>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID3'
 * '<S29>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID4'
 * '<S30>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID5'
 * '<S31>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID6'
 * '<S32>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID7'
 * '<S33>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID8'
 * '<S34>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkObjID9'
 * '<S35>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate1'
 * '<S36>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate10'
 * '<S37>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate2'
 * '<S38>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate3'
 * '<S39>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate4'
 * '<S40>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate5'
 * '<S41>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate6'
 * '<S42>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate7'
 * '<S43>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate8'
 * '<S44>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRRate9'
 * '<S45>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange1'
 * '<S46>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange10'
 * '<S47>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange2'
 * '<S48>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange3'
 * '<S49>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange4'
 * '<S50>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange5'
 * '<S51>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange6'
 * '<S52>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange7'
 * '<S53>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange8'
 * '<S54>'  : 'RRSRR_DataGen_Fcn/Data_Cov_RR_SrrTrkRange9'
 * '<S55>'  : 'RRSRR_DataGen_Fcn/Data_Cov_Side_RRSRR_RxTime'
 * '<S56>'  : 'RRSRR_DataGen_Fcn/Data_Cov_Side_Trigger_RRSRR'
 * '<S57>'  : 'RRSRR_DataGen_Fcn/Trigger_Gen'
 * '<S58>'  : 'RRSRR_DataGen_Fcn/Chart/TemporalAligRR'
 * '<S59>'  : 'RRSRR_DataGen_Fcn/Trigger_Gen/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_RRSRR_DataGen_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
