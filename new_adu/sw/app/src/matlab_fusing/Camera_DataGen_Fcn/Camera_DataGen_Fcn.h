/*
 * File: Camera_DataGen_Fcn.h
 *
 * Code generated for Simulink model 'Camera_DataGen_Fcn'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon Jan 09 13:03:45 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Camera_DataGen_Fcn_h_
#define RTW_HEADER_Camera_DataGen_Fcn_h_
#include <string.h>
#include <stddef.h>
#ifndef Camera_DataGen_Fcn_COMMON_INCLUDES_
# define Camera_DataGen_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Camera_DataGen_Fcn_COMMON_INCLUDES_ */

#include "Camera_DataGen_Fcn_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S7>/Data Type Conversion' */
  real_T NE;                           /* '<S7>/N->E' */
  real_T DataTypeConversion_g;         /* '<S27>/Data Type Conversion' */
  real_T NE_g;                         /* '<S27>/N->E' */
  real_T DataTypeConversion_d;         /* '<S37>/Data Type Conversion' */
  real_T NE_p;                         /* '<S37>/N->E' */
  real_T DataTypeConversion_l;         /* '<S47>/Data Type Conversion' */
  real_T NE_d;                         /* '<S47>/N->E' */
  real_T DataTypeConversion_ld;        /* '<S77>/Data Type Conversion' */
  real_T NE_j;                         /* '<S77>/N->E' */
  real_T DataTypeConversion_n;         /* '<S57>/Data Type Conversion' */
  real_T NE_a;                         /* '<S57>/N->E' */
  real_T DataTypeConversion_de;        /* '<S67>/Data Type Conversion' */
  real_T NE_n;                         /* '<S67>/N->E' */
  real_T DataTypeConversion_h;         /* '<S17>/Data Type Conversion' */
  real_T NE_o;                         /* '<S17>/N->E' */
  real_T TmpSignalConversionAtDivide4Inp[8];
  real_T MathFunction4[25];            /* '<Root>/Math Function4' */
  real_T Divide4[200];                 /* '<Root>/Divide4' */
  real_T DataTypeConversion_nx;        /* '<S9>/Data Type Conversion' */
  real_T NE_b;                         /* '<S9>/N->E' */
  real_T DataTypeConversion_m;         /* '<S29>/Data Type Conversion' */
  real_T NE_l;                         /* '<S29>/N->E' */
  real_T DataTypeConversion_f;         /* '<S39>/Data Type Conversion' */
  real_T NE_ab;                        /* '<S39>/N->E' */
  real_T DataTypeConversion_do;        /* '<S49>/Data Type Conversion' */
  real_T NE_l2;                        /* '<S49>/N->E' */
  real_T DataTypeConversion_dm;        /* '<S79>/Data Type Conversion' */
  real_T NE_f;                         /* '<S79>/N->E' */
  real_T DataTypeConversion_o;         /* '<S59>/Data Type Conversion' */
  real_T NE_jw;                        /* '<S59>/N->E' */
  real_T DataTypeConversion_i;         /* '<S69>/Data Type Conversion' */
  real_T NE_jj;                        /* '<S69>/N->E' */
  real_T DataTypeConversion_d3;        /* '<S19>/Data Type Conversion' */
  real_T NE_gx;                        /* '<S19>/N->E' */
  real_T TmpSignalConversionAtDivide5Inp[8];
  real_T MathFunction5[25];            /* '<Root>/Math Function5' */
  real_T Divide5[200];                 /* '<Root>/Divide5' */
  real_T DataTypeConversion_nl;        /* '<S10>/Data Type Conversion' */
  real_T NE_ld;                        /* '<S10>/N->E' */
  real_T DataTypeConversion_p;         /* '<S30>/Data Type Conversion' */
  real_T NE_e;                         /* '<S30>/N->E' */
  real_T DataTypeConversion_oj;        /* '<S40>/Data Type Conversion' */
  real_T NE_ez;                        /* '<S40>/N->E' */
  real_T DataTypeConversion_nn;        /* '<S50>/Data Type Conversion' */
  real_T NE_dd;                        /* '<S50>/N->E' */
  real_T DataTypeConversion_ln;        /* '<S80>/Data Type Conversion' */
  real_T NE_bi;                        /* '<S80>/N->E' */
  real_T DataTypeConversion_or;        /* '<S60>/Data Type Conversion' */
  real_T NE_o2;                        /* '<S60>/N->E' */
  real_T DataTypeConversion_a;         /* '<S70>/Data Type Conversion' */
  real_T NE_k;                         /* '<S70>/N->E' */
  real_T DataTypeConversion_av;        /* '<S20>/Data Type Conversion' */
  real_T NE_na;                        /* '<S20>/N->E' */
  real_T TmpSignalConversionAtDivide6Inp[8];
  real_T MathFunction6[25];            /* '<Root>/Math Function6' */
  real_T Divide6[200];                 /* '<Root>/Divide6' */
  real_T DataTypeConversion_nz;        /* '<S11>/Data Type Conversion' */
  real_T NE_f3;                        /* '<S11>/N->E' */
  real_T DataTypeConversion_e;         /* '<S31>/Data Type Conversion' */
  real_T NE_pl;                        /* '<S31>/N->E' */
  real_T DataTypeConversion_k;         /* '<S41>/Data Type Conversion' */
  real_T NE_kd;                        /* '<S41>/N->E' */
  real_T DataTypeConversion_nk;        /* '<S51>/Data Type Conversion' */
  real_T NE_o3;                        /* '<S51>/N->E' */
  real_T DataTypeConversion_ar;        /* '<S81>/Data Type Conversion' */
  real_T NE_jb;                        /* '<S81>/N->E' */
  real_T DataTypeConversion_d5;        /* '<S61>/Data Type Conversion' */
  real_T NE_js;                        /* '<S61>/N->E' */
  real_T DataTypeConversion_on;        /* '<S71>/Data Type Conversion' */
  real_T NE_do;                        /* '<S71>/N->E' */
  real_T DataTypeConversion_fm;        /* '<S21>/Data Type Conversion' */
  real_T NE_lb;                        /* '<S21>/N->E' */
  real_T TmpSignalConversionAtDivide7Inp[8];
  real_T MathFunction7[25];            /* '<Root>/Math Function7' */
  real_T Divide7[200];                 /* '<Root>/Divide7' */
  real_T DataTypeConversion_i3;        /* '<S12>/Data Type Conversion' */
  real_T NE_nq;                        /* '<S12>/N->E' */
  real_T DataTypeConversion_b;         /* '<S32>/Data Type Conversion' */
  real_T NE_jv;                        /* '<S32>/N->E' */
  real_T DataTypeConversion_j;         /* '<S42>/Data Type Conversion' */
  real_T NE_nx;                        /* '<S42>/N->E' */
  real_T DataTypeConversion_ls;        /* '<S52>/Data Type Conversion' */
  real_T NE_c;                         /* '<S52>/N->E' */
  real_T DataTypeConversion_h5;        /* '<S82>/Data Type Conversion' */
  real_T NE_ef;                        /* '<S82>/N->E' */
  real_T DataTypeConversion_k4;        /* '<S62>/Data Type Conversion' */
  real_T NE_jp;                        /* '<S62>/N->E' */
  real_T DataTypeConversion_i0;        /* '<S72>/Data Type Conversion' */
  real_T NE_kn;                        /* '<S72>/N->E' */
  real_T DataTypeConversion_gj;        /* '<S22>/Data Type Conversion' */
  real_T NE_oh;                        /* '<S22>/N->E' */
  real_T TmpSignalConversionAtDivide8Inp[8];
  real_T MathFunction8[25];            /* '<Root>/Math Function8' */
  real_T Divide8[200];                 /* '<Root>/Divide8' */
  real_T DataTypeConversion_c;         /* '<S13>/Data Type Conversion' */
  real_T NE_o31;                       /* '<S13>/N->E' */
  real_T DataTypeConversion_iz;        /* '<S33>/Data Type Conversion' */
  real_T NE_h;                         /* '<S33>/N->E' */
  real_T DataTypeConversion_gp;        /* '<S43>/Data Type Conversion' */
  real_T NE_kr;                        /* '<S43>/N->E' */
  real_T DataTypeConversion_hh;        /* '<S53>/Data Type Conversion' */
  real_T NE_fk;                        /* '<S53>/N->E' */
  real_T DataTypeConversion_art;       /* '<S83>/Data Type Conversion' */
  real_T NE_lj;                        /* '<S83>/N->E' */
  real_T DataTypeConversion_bq;        /* '<S63>/Data Type Conversion' */
  real_T NE_lr;                        /* '<S63>/N->E' */
  real_T DataTypeConversion_mi;        /* '<S73>/Data Type Conversion' */
  real_T NE_om;                        /* '<S73>/N->E' */
  real_T DataTypeConversion_jl;        /* '<S23>/Data Type Conversion' */
  real_T NE_ox;                        /* '<S23>/N->E' */
  real_T TmpSignalConversionAtDivide9Inp[8];
  real_T MathFunction9[25];            /* '<Root>/Math Function9' */
  real_T Divide9[200];                 /* '<Root>/Divide9' */
  real_T DataTypeConversion_pm;        /* '<S14>/Data Type Conversion' */
  real_T NE_ot;                        /* '<S14>/N->E' */
  real_T DataTypeConversion_lne;       /* '<S34>/Data Type Conversion' */
  real_T NE_b5;                        /* '<S34>/N->E' */
  real_T DataTypeConversion_gpz;       /* '<S44>/Data Type Conversion' */
  real_T NE_d4;                        /* '<S44>/N->E' */
  real_T DataTypeConversion_oy;        /* '<S54>/Data Type Conversion' */
  real_T NE_m;                         /* '<S54>/N->E' */
  real_T DataTypeConversion_os;        /* '<S84>/Data Type Conversion' */
  real_T NE_c3;                        /* '<S84>/N->E' */
  real_T DataTypeConversion_d0;        /* '<S64>/Data Type Conversion' */
  real_T NE_fe;                        /* '<S64>/N->E' */
  real_T DataTypeConversion_fy;        /* '<S74>/Data Type Conversion' */
  real_T NE_jg;                        /* '<S74>/N->E' */
  real_T DataTypeConversion_cg;        /* '<S24>/Data Type Conversion' */
  real_T NE_ek;                        /* '<S24>/N->E' */
  real_T TmpSignalConversionAtDivide10In[8];
  real_T MathFunction10[25];           /* '<Root>/Math Function10' */
  real_T Divide10[200];                /* '<Root>/Divide10' */
  real_T DataTypeConversion_jn;        /* '<S15>/Data Type Conversion' */
  real_T NE_mw;                        /* '<S15>/N->E' */
  real_T DataTypeConversion_ce;        /* '<S35>/Data Type Conversion' */
  real_T NE_i;                         /* '<S35>/N->E' */
  real_T DataTypeConversion_lx;        /* '<S45>/Data Type Conversion' */
  real_T NE_le;                        /* '<S45>/N->E' */
  real_T DataTypeConversion_bj;        /* '<S55>/Data Type Conversion' */
  real_T NE_hx;                        /* '<S55>/N->E' */
  real_T DataTypeConversion_kp;        /* '<S85>/Data Type Conversion' */
  real_T NE_ch;                        /* '<S85>/N->E' */
  real_T DataTypeConversion_aj;        /* '<S65>/Data Type Conversion' */
  real_T NE_ok;                        /* '<S65>/N->E' */
  real_T DataTypeConversion_dy;        /* '<S75>/Data Type Conversion' */
  real_T NE_ce;                        /* '<S75>/N->E' */
  real_T DataTypeConversion_b1;        /* '<S25>/Data Type Conversion' */
  real_T NE_mh;                        /* '<S25>/N->E' */
  real_T TmpSignalConversionAtDivide11In[8];
  real_T MathFunction11[25];           /* '<Root>/Math Function11' */
  real_T Divide11[200];                /* '<Root>/Divide11' */
  real_T DataTypeConversion_ol;        /* '<S16>/Data Type Conversion' */
  real_T NE_g2;                        /* '<S16>/N->E' */
  real_T DataTypeConversion_ib;        /* '<S36>/Data Type Conversion' */
  real_T NE_me;                        /* '<S36>/N->E' */
  real_T DataTypeConversion_le;        /* '<S46>/Data Type Conversion' */
  real_T NE_d0;                        /* '<S46>/N->E' */
  real_T DataTypeConversion_jx;        /* '<S56>/Data Type Conversion' */
  real_T NE_pd;                        /* '<S56>/N->E' */
  real_T DataTypeConversion_ir;        /* '<S86>/Data Type Conversion' */
  real_T NE_my;                        /* '<S86>/N->E' */
  real_T DataTypeConversion_ay;        /* '<S66>/Data Type Conversion' */
  real_T NE_nb;                        /* '<S66>/N->E' */
  real_T DataTypeConversion_dx;        /* '<S76>/Data Type Conversion' */
  real_T NE_cq;                        /* '<S76>/N->E' */
  real_T DataTypeConversion_kd;        /* '<S26>/Data Type Conversion' */
  real_T NE_mj;                        /* '<S26>/N->E' */
  real_T TmpSignalConversionAtDivide12In[8];
  real_T MathFunction12[25];           /* '<Root>/Math Function12' */
  real_T Divide12[200];                /* '<Root>/Divide12' */
  real_T DataTypeConversion_lt;        /* '<S8>/Data Type Conversion' */
  real_T NE_ge;                        /* '<S8>/N->E' */
  real_T DataTypeConversion_dq;        /* '<S28>/Data Type Conversion' */
  real_T NE_gc;                        /* '<S28>/N->E' */
  real_T DataTypeConversion_br;        /* '<S38>/Data Type Conversion' */
  real_T NE_do1;                       /* '<S38>/N->E' */
  real_T DataTypeConversion_kj;        /* '<S48>/Data Type Conversion' */
  real_T NE_ou;                        /* '<S48>/N->E' */
  real_T DataTypeConversion_ic;        /* '<S78>/Data Type Conversion' */
  real_T NE_gu;                        /* '<S78>/N->E' */
  real_T DataTypeConversion_gq;        /* '<S58>/Data Type Conversion' */
  real_T NE_fc;                        /* '<S58>/N->E' */
  real_T DataTypeConversion_osk;       /* '<S68>/Data Type Conversion' */
  real_T NE_ft;                        /* '<S68>/N->E' */
  real_T DataTypeConversion_ah;        /* '<S18>/Data Type Conversion' */
  real_T NE_ar;                        /* '<S18>/N->E' */
  real_T TmpSignalConversionAtDivide13In[8];
  real_T MathFunction13[25];           /* '<Root>/Math Function13' */
  real_T Divide13[200];                /* '<Root>/Divide13' */
  real_T TmpSignalConversionAtDivide1Inp[8];
  real_T MathFunction1[25];            /* '<Root>/Math Function1' */
  real_T Divide1[200];                 /* '<Root>/Divide1' */
  real_T TmpSignalConversionAtDivide2Inp[8];
  real_T MathFunction2[25];            /* '<Root>/Math Function2' */
  real_T Divide2[200];                 /* '<Root>/Divide2' */
  real_T TmpSignalConversionAtDivide3Inp[8];
  real_T MathFunction3[25];            /* '<Root>/Math Function3' */
  real_T Divide3[200];                 /* '<Root>/Divide3' */
  real_T TmpSignalConversionAtDivide14In[8];
  real_T MathFunction14[25];           /* '<Root>/Math Function14' */
  real_T Divide14[200];                /* '<Root>/Divide14' */
  real_T TmpSignalConversionAtDivide15In[8];
  real_T MathFunction15[25];           /* '<Root>/Math Function15' */
  real_T Divide15[200];                /* '<Root>/Divide15' */
  real_T TmpSignalConversionAtDivide16In[8];
  real_T MathFunction16[25];           /* '<Root>/Math Function16' */
  real_T Divide16[200];                /* '<Root>/Divide16' */
  real_T TmpSignalConversionAtDivide17In[8];
  real_T MathFunction17[25];           /* '<Root>/Math Function17' */
  real_T Divide17[200];                /* '<Root>/Divide17' */
  real_T TmpSignalConversionAtDivide18In[8];
  real_T MathFunction18[25];           /* '<Root>/Math Function18' */
  real_T Divide18[200];                /* '<Root>/Divide18' */
  real_T TmpSignalConversionAtDivide19In[8];
  real_T MathFunction19[25];           /* '<Root>/Math Function19' */
  real_T Divide19[200];                /* '<Root>/Divide19' */
  real_T TmpSignalConversionAtDivide20In[8];
  real_T MathFunction20[25];           /* '<Root>/Math Function20' */
  real_T Divide20[200];                /* '<Root>/Divide20' */
  real_T TmpSignalConversionAtDivide21In[8];
  real_T MathFunction21[25];           /* '<Root>/Math Function21' */
  real_T Divide21[200];                /* '<Root>/Divide21' */
  real_T TmpSignalConversionAtDivide22In[8];
  real_T MathFunction22[25];           /* '<Root>/Math Function22' */
  real_T Divide22[200];                /* '<Root>/Divide22' */
  real_T TmpSignalConversionAtDivide23In[8];
  real_T MathFunction23[25];           /* '<Root>/Math Function23' */
  real_T Divide23[200];                /* '<Root>/Divide23' */
  real_T TmpSignalConversionAtDivide24In[8];
  real_T MathFunction24[25];           /* '<Root>/Math Function24' */
  real_T Divide24[200];                /* '<Root>/Divide24' */
  real_T TmpSignalConversionAtDivide25In[8];
  real_T MathFunction25[25];           /* '<Root>/Math Function25' */
  real_T Divide25[200];                /* '<Root>/Divide25' */
  real_T Add[200];                     /* '<Root>/Add' */
  real_T MathFunction64[200];          /* '<Root>/Math Function64' */
  real_T DataTypeConversion_jb;        /* '<S2>/Data Type Conversion' */
  real_T NE_c2;                        /* '<S2>/N->E' */
  real_T EN[200];                      /* '<S4>/E->N' */
  real_T EN_c;                         /* '<S5>/E->N' */
  real_T DataOutput[200];              /* '<Root>/Camera_Data_Collect' */
  real_T Camera_RxTime_Out;            /* '<Root>/Camera_Data_Collect' */
  uint16_T NE_bw;                      /* '<S3>/N->E' */
  uint16_T EN_e;                       /* '<S6>/E->N' */
  int8_T Camera_Trigger_f;             /* '<Root>/Camera_Data_Collect' */
  uint8_T DataTypeConversion_mu;       /* '<S3>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S88>/Compare' */
  uint8_T Global_Trigger_Camera_m;     /* '<Root>/Camera_Data_Collect' */
  boolean_T Memory;                    /* '<S87>/Memory' */
  boolean_T Switch;                    /* '<S87>/Switch' */
  boolean_T LogicalOperator;           /* '<S87>/Logical Operator' */
} B_Camera_DataGen_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T k;                           /* '<Root>/Camera_Data_Collect' */
  boolean_T Memory_PreviousInput;      /* '<S87>/Memory' */
} DW_Camera_DataGen_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Camera_Data_Collect_Trig_ZCE;/* '<Root>/Camera_Data_Collect' */
} PrevZCX_Camera_DataGen_Fcn_T;

/* Parameters (auto storage) */
struct P_Camera_DataGen_Fcn_T_ {
  uint16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S88>/Constant'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T NE_Gain_a;                    /* Expression: 0.0625
                                        * Referenced by: '<S27>/N->E'
                                        */
  real_T NE_Gain_k;                    /* Expression: 0.0625
                                        * Referenced by: '<S37>/N->E'
                                        */
  real_T NE_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S47>/N->E'
                                        */
  real_T NE_Gain_j;                    /* Expression: 0.05
                                        * Referenced by: '<S77>/N->E'
                                        */
  real_T NE_Gain_m;                    /* Expression: 0.0625
                                        * Referenced by: '<S57>/N->E'
                                        */
  real_T NE_Gain_mq;                   /* Expression: 0.1
                                        * Referenced by: '<S67>/N->E'
                                        */
  real_T NE_Gain_d;                    /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */
  real_T Constant8_Value[25];          /* Expression: [1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T NE_Gain_o;                    /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T NE_Gain_g;                    /* Expression: 0.0625
                                        * Referenced by: '<S29>/N->E'
                                        */
  real_T NE_Gain_ko;                   /* Expression: 0.0625
                                        * Referenced by: '<S39>/N->E'
                                        */
  real_T NE_Gain_gu;                   /* Expression: 1
                                        * Referenced by: '<S49>/N->E'
                                        */
  real_T NE_Gain_l;                    /* Expression: 0.05
                                        * Referenced by: '<S79>/N->E'
                                        */
  real_T NE_Gain_f;                    /* Expression: 0.0625
                                        * Referenced by: '<S59>/N->E'
                                        */
  real_T NE_Gain_mh;                   /* Expression: 0.1
                                        * Referenced by: '<S69>/N->E'
                                        */
  real_T NE_Gain_p;                    /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */
  real_T Constant5_Value[25];          /* Expression: [0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T NE_Gain_d3;                   /* Expression: 1
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T NE_Gain_dc;                   /* Expression: 0.0625
                                        * Referenced by: '<S30>/N->E'
                                        */
  real_T NE_Gain_om;                   /* Expression: 0.0625
                                        * Referenced by: '<S40>/N->E'
                                        */
  real_T NE_Gain_au;                   /* Expression: 1
                                        * Referenced by: '<S50>/N->E'
                                        */
  real_T NE_Gain_oi;                   /* Expression: 0.05
                                        * Referenced by: '<S80>/N->E'
                                        */
  real_T NE_Gain_b;                    /* Expression: 0.0625
                                        * Referenced by: '<S60>/N->E'
                                        */
  real_T NE_Gain_ku;                   /* Expression: 0.1
                                        * Referenced by: '<S70>/N->E'
                                        */
  real_T NE_Gain_gi;                   /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */
  real_T Constant6_Value[25];          /* Expression: [0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T NE_Gain_m0;                   /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T NE_Gain_oz;                   /* Expression: 0.0625
                                        * Referenced by: '<S31>/N->E'
                                        */
  real_T NE_Gain_po;                   /* Expression: 0.0625
                                        * Referenced by: '<S41>/N->E'
                                        */
  real_T NE_Gain_c;                    /* Expression: 1
                                        * Referenced by: '<S51>/N->E'
                                        */
  real_T NE_Gain_k3;                   /* Expression: 0.05
                                        * Referenced by: '<S81>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 0.0625
                                        * Referenced by: '<S61>/N->E'
                                        */
  real_T NE_Gain_e;                    /* Expression: 0.1
                                        * Referenced by: '<S71>/N->E'
                                        */
  real_T NE_Gain_n1;                   /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */
  real_T Constant7_Value[25];          /* Expression: [0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T NE_Gain_di;                   /* Expression: 1
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T NE_Gain_eu;                   /* Expression: 0.0625
                                        * Referenced by: '<S32>/N->E'
                                        */
  real_T NE_Gain_mt;                   /* Expression: 0.0625
                                        * Referenced by: '<S42>/N->E'
                                        */
  real_T NE_Gain_gg;                   /* Expression: 1
                                        * Referenced by: '<S52>/N->E'
                                        */
  real_T NE_Gain_gs;                   /* Expression: 0.05
                                        * Referenced by: '<S82>/N->E'
                                        */
  real_T NE_Gain_av;                   /* Expression: 0.0625
                                        * Referenced by: '<S62>/N->E'
                                        */
  real_T NE_Gain_el;                   /* Expression: 0.1
                                        * Referenced by: '<S72>/N->E'
                                        */
  real_T NE_Gain_g4;                   /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */
  real_T Constant9_Value[25];          /* Expression: [0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T NE_Gain_ot;                   /* Expression: 1
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T NE_Gain_cz;                   /* Expression: 0.0625
                                        * Referenced by: '<S33>/N->E'
                                        */
  real_T NE_Gain_ok;                   /* Expression: 0.0625
                                        * Referenced by: '<S43>/N->E'
                                        */
  real_T NE_Gain_nl;                   /* Expression: 1
                                        * Referenced by: '<S53>/N->E'
                                        */
  real_T NE_Gain_gh;                   /* Expression: 0.05
                                        * Referenced by: '<S83>/N->E'
                                        */
  real_T NE_Gain_fk;                   /* Expression: 0.0625
                                        * Referenced by: '<S63>/N->E'
                                        */
  real_T NE_Gain_no;                   /* Expression: 0.1
                                        * Referenced by: '<S73>/N->E'
                                        */
  real_T NE_Gain_ozt;                  /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */
  real_T Constant11_Value[25];         /* Expression: [0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T NE_Gain_fu;                   /* Expression: 1
                                        * Referenced by: '<S14>/N->E'
                                        */
  real_T NE_Gain_a2;                   /* Expression: 0.0625
                                        * Referenced by: '<S34>/N->E'
                                        */
  real_T NE_Gain_is;                   /* Expression: 0.0625
                                        * Referenced by: '<S44>/N->E'
                                        */
  real_T NE_Gain_mv;                   /* Expression: 1
                                        * Referenced by: '<S54>/N->E'
                                        */
  real_T NE_Gain_on;                   /* Expression: 0.05
                                        * Referenced by: '<S84>/N->E'
                                        */
  real_T NE_Gain_oj;                   /* Expression: 0.0625
                                        * Referenced by: '<S64>/N->E'
                                        */
  real_T NE_Gain_pg;                   /* Expression: 0.1
                                        * Referenced by: '<S74>/N->E'
                                        */
  real_T NE_Gain_dv;                   /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */
  real_T Constant12_Value[25];         /* Expression: [0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T NE_Gain_pa;                   /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */
  real_T NE_Gain_h;                    /* Expression: 0.0625
                                        * Referenced by: '<S35>/N->E'
                                        */
  real_T NE_Gain_e4;                   /* Expression: 0.0625
                                        * Referenced by: '<S45>/N->E'
                                        */
  real_T NE_Gain_ol;                   /* Expression: 1
                                        * Referenced by: '<S55>/N->E'
                                        */
  real_T NE_Gain_je;                   /* Expression: 0.05
                                        * Referenced by: '<S85>/N->E'
                                        */
  real_T NE_Gain_ll;                   /* Expression: 0.0625
                                        * Referenced by: '<S65>/N->E'
                                        */
  real_T NE_Gain_bi;                   /* Expression: 0.1
                                        * Referenced by: '<S75>/N->E'
                                        */
  real_T NE_Gain_at;                   /* Expression: 1
                                        * Referenced by: '<S25>/N->E'
                                        */
  real_T Constant13_Value[25];         /* Expression: [0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T NE_Gain_kv;                   /* Expression: 1
                                        * Referenced by: '<S16>/N->E'
                                        */
  real_T NE_Gain_oc;                   /* Expression: 0.0625
                                        * Referenced by: '<S36>/N->E'
                                        */
  real_T NE_Gain_aw;                   /* Expression: 0.0625
                                        * Referenced by: '<S46>/N->E'
                                        */
  real_T NE_Gain_eg;                   /* Expression: 1
                                        * Referenced by: '<S56>/N->E'
                                        */
  real_T NE_Gain_fd;                   /* Expression: 0.05
                                        * Referenced by: '<S86>/N->E'
                                        */
  real_T NE_Gain_fw;                   /* Expression: 0.0625
                                        * Referenced by: '<S66>/N->E'
                                        */
  real_T NE_Gain_j5;                   /* Expression: 0.1
                                        * Referenced by: '<S76>/N->E'
                                        */
  real_T NE_Gain_ks;                   /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */
  real_T Constant14_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T NE_Gain_md;                   /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T NE_Gain_lc;                   /* Expression: 0.0625
                                        * Referenced by: '<S28>/N->E'
                                        */
  real_T NE_Gain_ag;                   /* Expression: 0.0625
                                        * Referenced by: '<S38>/N->E'
                                        */
  real_T NE_Gain_ge;                   /* Expression: 1
                                        * Referenced by: '<S48>/N->E'
                                        */
  real_T NE_Gain_lo;                   /* Expression: 0.05
                                        * Referenced by: '<S78>/N->E'
                                        */
  real_T NE_Gain_ev;                   /* Expression: 0.0625
                                        * Referenced by: '<S58>/N->E'
                                        */
  real_T NE_Gain_lz;                   /* Expression: 0.1
                                        * Referenced by: '<S68>/N->E'
                                        */
  real_T NE_Gain_ab;                   /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  real_T Constant10_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant140_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant140'
                                        */
  real_T Constant141_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant141'
                                        */
  real_T Constant142_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant142'
                                        */
  real_T Constant143_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant143'
                                        */
  real_T Constant144_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant144'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant1_Value[25];          /* Expression: [0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant135_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant135'
                                        */
  real_T Constant136_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant136'
                                        */
  real_T Constant137_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant137'
                                        */
  real_T Constant138_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant138'
                                        */
  real_T Constant139_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant139'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant17'
                                        */
  real_T Constant15_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T Constant130_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant130'
                                        */
  real_T Constant131_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant131'
                                        */
  real_T Constant132_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant132'
                                        */
  real_T Constant133_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant133'
                                        */
  real_T Constant134_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant134'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant18'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant21'
                                        */
  real_T Constant19_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant19'
                                        */
  real_T Constant125_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant125'
                                        */
  real_T Constant126_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant126'
                                        */
  real_T Constant127_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant127'
                                        */
  real_T Constant128_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant128'
                                        */
  real_T Constant129_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant129'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant22'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant25'
                                        */
  real_T Constant23_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant23'
                                        */
  real_T Constant120_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant120'
                                        */
  real_T Constant121_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant121'
                                        */
  real_T Constant122_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant122'
                                        */
  real_T Constant123_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant123'
                                        */
  real_T Constant124_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant124'
                                        */
  real_T Constant26_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant26'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant29'
                                        */
  real_T Constant27_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant27'
                                        */
  real_T Constant115_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant115'
                                        */
  real_T Constant116_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant116'
                                        */
  real_T Constant117_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant117'
                                        */
  real_T Constant118_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant118'
                                        */
  real_T Constant119_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant119'
                                        */
  real_T Constant30_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant30'
                                        */
  real_T Constant32_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant33'
                                        */
  real_T Constant31_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant31'
                                        */
  real_T Constant110_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant110'
                                        */
  real_T Constant111_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant111'
                                        */
  real_T Constant112_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant112'
                                        */
  real_T Constant113_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant113'
                                        */
  real_T Constant114_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant114'
                                        */
  real_T Constant34_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant34'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant37'
                                        */
  real_T Constant35_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant35'
                                        */
  real_T Constant105_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant105'
                                        */
  real_T Constant106_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant106'
                                        */
  real_T Constant107_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant107'
                                        */
  real_T Constant108_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant108'
                                        */
  real_T Constant109_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant109'
                                        */
  real_T Constant38_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant38'
                                        */
  real_T Constant40_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant41'
                                        */
  real_T Constant39_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant39'
                                        */
  real_T Constant100_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant100'
                                        */
  real_T Constant101_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant101'
                                        */
  real_T Constant102_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant102'
                                        */
  real_T Constant103_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant103'
                                        */
  real_T Constant104_Value;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant104'
                                        */
  real_T Constant42_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant42'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant44'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant45'
                                        */
  real_T Constant43_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant43'
                                        */
  real_T Constant95_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant95'
                                        */
  real_T Constant96_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant96'
                                        */
  real_T Constant97_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant97'
                                        */
  real_T Constant98_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant98'
                                        */
  real_T Constant99_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant99'
                                        */
  real_T Constant46_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant46'
                                        */
  real_T Constant48_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant48'
                                        */
  real_T Constant49_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant49'
                                        */
  real_T Constant47_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant47'
                                        */
  real_T Constant90_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant90'
                                        */
  real_T Constant91_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant91'
                                        */
  real_T Constant92_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant92'
                                        */
  real_T Constant93_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant93'
                                        */
  real_T Constant94_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant94'
                                        */
  real_T Constant50_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant50'
                                        */
  real_T Constant52_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant52'
                                        */
  real_T Constant53_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant53'
                                        */
  real_T Constant51_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<Root>/Constant51'
                                        */
  real_T Constant85_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant85'
                                        */
  real_T Constant86_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant86'
                                        */
  real_T Constant87_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant87'
                                        */
  real_T Constant88_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant88'
                                        */
  real_T Constant89_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant89'
                                        */
  real_T Constant54_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant54'
                                        */
  real_T Constant56_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant56'
                                        */
  real_T Constant57_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant57'
                                        */
  real_T Constant55_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<Root>/Constant55'
                                        */
  real_T Constant80_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant80'
                                        */
  real_T Constant81_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant81'
                                        */
  real_T Constant82_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant82'
                                        */
  real_T Constant83_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant83'
                                        */
  real_T Constant84_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant84'
                                        */
  real_T Constant58_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant58'
                                        */
  real_T Constant60_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant60'
                                        */
  real_T Constant61_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant61'
                                        */
  real_T Constant59_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<Root>/Constant59'
                                        */
  real_T Constant75_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant75'
                                        */
  real_T Constant76_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant76'
                                        */
  real_T Constant77_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant77'
                                        */
  real_T Constant78_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant78'
                                        */
  real_T Constant79_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant79'
                                        */
  real_T Constant62_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant62'
                                        */
  real_T Constant64_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant64'
                                        */
  real_T Constant65_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant65'
                                        */
  real_T Constant63_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<Root>/Constant63'
                                        */
  real_T Constant70_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant70'
                                        */
  real_T Constant71_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant71'
                                        */
  real_T Constant72_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant72'
                                        */
  real_T Constant73_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant73'
                                        */
  real_T Constant74_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant74'
                                        */
  real_T Constant66_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant66'
                                        */
  real_T Constant68_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant68'
                                        */
  real_T Constant69_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant69'
                                        */
  real_T Constant67_Value[25];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<Root>/Constant67'
                                        */
  real_T NE_Gain_df;                   /* Expression: 0.001
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S4>/E->N'
                                        */
  real_T EN_Gain_b;                    /* Expression: 1
                                        * Referenced by: '<S5>/E->N'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S87>/Switch'
                                        */
  boolean_T Memory_X0;                 /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S87>/Memory'
                                        */
  uint8_T NE_Gain_awq;                 /* Computed Parameter: NE_Gain_awq
                                        * Referenced by: '<S3>/N->E'
                                        */
  uint8_T EN_Gain_l;                   /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S6>/E->N'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Camera_DataGen_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_P;

/* Block signals (auto storage) */
extern B_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_B;

/* Block states (auto storage) */
extern DW_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_DW;

/* Model entry point functions */
extern void Camera_DataGen_Fcn_initialize(void);
extern void Camera_DataGen_Fcn_step(void);
extern void Camera_DataGen_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Camera_DataGen_Fcn_T *const Camera_DataGen_Fcn_M;

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
 * '<Root>' : 'Camera_DataGen_Fcn'
 * '<S1>'   : 'Camera_DataGen_Fcn/Camera_Data_Collect'
 * '<S2>'   : 'Camera_DataGen_Fcn/Data_Cov_Camera_RxTime'
 * '<S3>'   : 'Camera_DataGen_Fcn/Data_Cov_Camera_Trigger'
 * '<S4>'   : 'Camera_DataGen_Fcn/Data_Cov_ESR_Data[64X4]'
 * '<S5>'   : 'Camera_DataGen_Fcn/Data_Cov_Global_ESR_RxTime'
 * '<S6>'   : 'Camera_DataGen_Fcn/Data_Cov_Global_Trigger_ESR'
 * '<S7>'   : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_1'
 * '<S8>'   : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_10'
 * '<S9>'   : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_2'
 * '<S10>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_3'
 * '<S11>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_4'
 * '<S12>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_5'
 * '<S13>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_6'
 * '<S14>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_7'
 * '<S15>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_8'
 * '<S16>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ID_9'
 * '<S17>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_1'
 * '<S18>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_10'
 * '<S19>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_2'
 * '<S20>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_3'
 * '<S21>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_4'
 * '<S22>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_5'
 * '<S23>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_6'
 * '<S24>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_7'
 * '<S25>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_8'
 * '<S26>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_ObjStatus_9'
 * '<S27>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_1'
 * '<S28>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_10'
 * '<S29>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_2'
 * '<S30>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_3'
 * '<S31>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_4'
 * '<S32>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_5'
 * '<S33>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_6'
 * '<S34>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_7'
 * '<S35>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_8'
 * '<S36>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosX_9'
 * '<S37>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_1'
 * '<S38>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_10'
 * '<S39>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_2'
 * '<S40>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_3'
 * '<S41>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_4'
 * '<S42>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_5'
 * '<S43>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_6'
 * '<S44>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_7'
 * '<S45>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_8'
 * '<S46>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_PosY_9'
 * '<S47>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_1'
 * '<S48>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_10'
 * '<S49>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_2'
 * '<S50>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_3'
 * '<S51>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_4'
 * '<S52>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_5'
 * '<S53>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_6'
 * '<S54>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_7'
 * '<S55>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_8'
 * '<S56>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Type_9'
 * '<S57>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_1'
 * '<S58>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_10'
 * '<S59>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_2'
 * '<S60>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_3'
 * '<S61>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_4'
 * '<S62>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_5'
 * '<S63>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_6'
 * '<S64>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_7'
 * '<S65>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_8'
 * '<S66>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelX_9'
 * '<S67>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_1'
 * '<S68>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_10'
 * '<S69>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_2'
 * '<S70>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_3'
 * '<S71>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_4'
 * '<S72>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_5'
 * '<S73>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_6'
 * '<S74>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_7'
 * '<S75>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_8'
 * '<S76>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_VelY_9'
 * '<S77>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_1'
 * '<S78>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_10'
 * '<S79>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_2'
 * '<S80>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_3'
 * '<S81>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_4'
 * '<S82>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_5'
 * '<S83>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_6'
 * '<S84>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_7'
 * '<S85>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_8'
 * '<S86>'  : 'Camera_DataGen_Fcn/Data_Cov_Vis_Track_Width_9'
 * '<S87>'  : 'Camera_DataGen_Fcn/Trigger_Gen'
 * '<S88>'  : 'Camera_DataGen_Fcn/Trigger_Gen/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_Camera_DataGen_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
