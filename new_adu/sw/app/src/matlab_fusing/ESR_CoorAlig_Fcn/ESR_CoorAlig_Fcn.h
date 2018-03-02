/*
 * File: ESR_CoorAlig_Fcn.h
 *
 * Code generated for Simulink model 'ESR_CoorAlig_Fcn'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon Jan 09 13:19:36 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ESR_CoorAlig_Fcn_h_
#define RTW_HEADER_ESR_CoorAlig_Fcn_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ESR_CoorAlig_Fcn_COMMON_INCLUDES_
# define ESR_CoorAlig_Fcn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ESR_CoorAlig_Fcn_COMMON_INCLUDES_ */

#include "ESR_CoorAlig_Fcn_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion;           /* '<S6>/Data Type Conversion' */
  real_T NE;                           /* '<S6>/N->E' */
  real_T DataTypeConversion_p;         /* '<S134>/Data Type Conversion' */
  real_T NE_l;                         /* '<S134>/N->E' */
  real_T DataTypeConversion_i;         /* '<S70>/Data Type Conversion' */
  real_T NE_f;                         /* '<S70>/N->E' */
  real_T degrad;                       /* '<S70>/deg->rad' */
  real_T DataTypeConversion_iy;        /* '<S198>/Data Type Conversion' */
  real_T NE_lu;                        /* '<S198>/N->E' */
  real_T TmpSignalConversionAtDivideInpo[4];
  real_T MathFunction[64];             /* '<Root>/Math Function' */
  real_T Divide[256];                  /* '<Root>/Divide' */
  real_T DataTypeConversion_e;         /* '<S17>/Data Type Conversion' */
  real_T NE_b;                         /* '<S17>/N->E' */
  real_T DataTypeConversion_h;         /* '<S145>/Data Type Conversion' */
  real_T NE_bs;                        /* '<S145>/N->E' */
  real_T DataTypeConversion_px;        /* '<S81>/Data Type Conversion' */
  real_T NE_c;                         /* '<S81>/N->E' */
  real_T degrad_k;                     /* '<S81>/deg->rad' */
  real_T DataTypeConversion_m;         /* '<S209>/Data Type Conversion' */
  real_T NE_i;                         /* '<S209>/N->E' */
  real_T TmpSignalConversionAtDivide1Inp[4];
  real_T MathFunction1[64];            /* '<Root>/Math Function1' */
  real_T Divide1[256];                 /* '<Root>/Divide1' */
  real_T DataTypeConversion_hq;        /* '<S28>/Data Type Conversion' */
  real_T NE_o;                         /* '<S28>/N->E' */
  real_T DataTypeConversion_n;         /* '<S156>/Data Type Conversion' */
  real_T NE_h;                         /* '<S156>/N->E' */
  real_T DataTypeConversion_j;         /* '<S92>/Data Type Conversion' */
  real_T NE_fb;                        /* '<S92>/N->E' */
  real_T degrad_g;                     /* '<S92>/deg->rad' */
  real_T DataTypeConversion_d;         /* '<S220>/Data Type Conversion' */
  real_T NE_fa;                        /* '<S220>/N->E' */
  real_T TmpSignalConversionAtDivide2Inp[4];
  real_T MathFunction2[64];            /* '<Root>/Math Function2' */
  real_T Divide2[256];                 /* '<Root>/Divide2' */
  real_T DataTypeConversion_l;         /* '<S39>/Data Type Conversion' */
  real_T NE_e;                         /* '<S39>/N->E' */
  real_T DataTypeConversion_a;         /* '<S167>/Data Type Conversion' */
  real_T NE_a;                         /* '<S167>/N->E' */
  real_T DataTypeConversion_e1;        /* '<S103>/Data Type Conversion' */
  real_T NE_g;                         /* '<S103>/N->E' */
  real_T degrad_ka;                    /* '<S103>/deg->rad' */
  real_T DataTypeConversion_lx;        /* '<S231>/Data Type Conversion' */
  real_T NE_d;                         /* '<S231>/N->E' */
  real_T TmpSignalConversionAtDivide3Inp[4];
  real_T MathFunction3[64];            /* '<Root>/Math Function3' */
  real_T Divide3[256];                 /* '<Root>/Divide3' */
  real_T DataTypeConversion_ay;        /* '<S50>/Data Type Conversion' */
  real_T NE_n;                         /* '<S50>/N->E' */
  real_T DataTypeConversion_c;         /* '<S178>/Data Type Conversion' */
  real_T NE_k;                         /* '<S178>/N->E' */
  real_T DataTypeConversion_jj;        /* '<S114>/Data Type Conversion' */
  real_T NE_dv;                        /* '<S114>/N->E' */
  real_T degrad_p;                     /* '<S114>/deg->rad' */
  real_T DataTypeConversion_pe;        /* '<S242>/Data Type Conversion' */
  real_T NE_kx;                        /* '<S242>/N->E' */
  real_T TmpSignalConversionAtDivide4Inp[4];
  real_T MathFunction4[64];            /* '<Root>/Math Function4' */
  real_T Divide4[256];                 /* '<Root>/Divide4' */
  real_T DataTypeConversion_n5;        /* '<S61>/Data Type Conversion' */
  real_T NE_lc;                        /* '<S61>/N->E' */
  real_T DataTypeConversion_hr;        /* '<S189>/Data Type Conversion' */
  real_T NE_j;                         /* '<S189>/N->E' */
  real_T DataTypeConversion_g;         /* '<S125>/Data Type Conversion' */
  real_T NE_bd;                        /* '<S125>/N->E' */
  real_T degrad_l;                     /* '<S125>/deg->rad' */
  real_T DataTypeConversion_gj;        /* '<S253>/Data Type Conversion' */
  real_T NE_iw;                        /* '<S253>/N->E' */
  real_T TmpSignalConversionAtDivide5Inp[4];
  real_T MathFunction5[64];            /* '<Root>/Math Function5' */
  real_T Divide5[256];                 /* '<Root>/Divide5' */
  real_T DataTypeConversion_k;         /* '<S67>/Data Type Conversion' */
  real_T NE_p;                         /* '<S67>/N->E' */
  real_T DataTypeConversion_ee;        /* '<S195>/Data Type Conversion' */
  real_T NE_ld;                        /* '<S195>/N->E' */
  real_T DataTypeConversion_ew;        /* '<S131>/Data Type Conversion' */
  real_T NE_kl;                        /* '<S131>/N->E' */
  real_T degrad_lf;                    /* '<S131>/deg->rad' */
  real_T DataTypeConversion_dy;        /* '<S259>/Data Type Conversion' */
  real_T NE_pm;                        /* '<S259>/N->E' */
  real_T TmpSignalConversionAtDivide6Inp[4];
  real_T MathFunction6[64];            /* '<Root>/Math Function6' */
  real_T Divide6[256];                 /* '<Root>/Divide6' */
  real_T DataTypeConversion_ad;        /* '<S68>/Data Type Conversion' */
  real_T NE_b4;                        /* '<S68>/N->E' */
  real_T DataTypeConversion_ak;        /* '<S196>/Data Type Conversion' */
  real_T NE_jh;                        /* '<S196>/N->E' */
  real_T DataTypeConversion_gg;        /* '<S132>/Data Type Conversion' */
  real_T NE_cg;                        /* '<S132>/N->E' */
  real_T degrad_o;                     /* '<S132>/deg->rad' */
  real_T DataTypeConversion_l1;        /* '<S260>/Data Type Conversion' */
  real_T NE_pn;                        /* '<S260>/N->E' */
  real_T TmpSignalConversionAtDivide7Inp[4];
  real_T MathFunction7[64];            /* '<Root>/Math Function7' */
  real_T Divide7[256];                 /* '<Root>/Divide7' */
  real_T DataTypeConversion_gr;        /* '<S69>/Data Type Conversion' */
  real_T NE_at;                        /* '<S69>/N->E' */
  real_T DataTypeConversion_mx;        /* '<S197>/Data Type Conversion' */
  real_T NE_nk;                        /* '<S197>/N->E' */
  real_T DataTypeConversion_k4;        /* '<S133>/Data Type Conversion' */
  real_T NE_kv;                        /* '<S133>/N->E' */
  real_T degrad_e;                     /* '<S133>/deg->rad' */
  real_T DataTypeConversion_n3;        /* '<S261>/Data Type Conversion' */
  real_T NE_kt;                        /* '<S261>/N->E' */
  real_T TmpSignalConversionAtDivide8Inp[4];
  real_T MathFunction8[64];            /* '<Root>/Math Function8' */
  real_T Divide8[256];                 /* '<Root>/Divide8' */
  real_T DataTypeConversion_l4;        /* '<S7>/Data Type Conversion' */
  real_T NE_bo;                        /* '<S7>/N->E' */
  real_T DataTypeConversion_f;         /* '<S135>/Data Type Conversion' */
  real_T NE_m;                         /* '<S135>/N->E' */
  real_T DataTypeConversion_ju;        /* '<S71>/Data Type Conversion' */
  real_T NE_lz;                        /* '<S71>/N->E' */
  real_T degrad_a;                     /* '<S71>/deg->rad' */
  real_T DataTypeConversion_np;        /* '<S199>/Data Type Conversion' */
  real_T NE_co;                        /* '<S199>/N->E' */
  real_T TmpSignalConversionAtDivide9Inp[4];
  real_T MathFunction9[64];            /* '<Root>/Math Function9' */
  real_T Divide9[256];                 /* '<Root>/Divide9' */
  real_T DataTypeConversion_b;         /* '<S8>/Data Type Conversion' */
  real_T NE_cl;                        /* '<S8>/N->E' */
  real_T DataTypeConversion_akv;       /* '<S136>/Data Type Conversion' */
  real_T NE_dz;                        /* '<S136>/N->E' */
  real_T DataTypeConversion_c3;        /* '<S72>/Data Type Conversion' */
  real_T NE_gg;                        /* '<S72>/N->E' */
  real_T degrad_f;                     /* '<S72>/deg->rad' */
  real_T DataTypeConversion_a2;        /* '<S200>/Data Type Conversion' */
  real_T NE_oa;                        /* '<S200>/N->E' */
  real_T TmpSignalConversionAtDivide10In[4];
  real_T MathFunction10[64];           /* '<Root>/Math Function10' */
  real_T Divide10[256];                /* '<Root>/Divide10' */
  real_T DataTypeConversion_di;        /* '<S9>/Data Type Conversion' */
  real_T NE_da;                        /* '<S9>/N->E' */
  real_T DataTypeConversion_o;         /* '<S137>/Data Type Conversion' */
  real_T NE_b1;                        /* '<S137>/N->E' */
  real_T DataTypeConversion_g1;        /* '<S73>/Data Type Conversion' */
  real_T NE_e2;                        /* '<S73>/N->E' */
  real_T degrad_d;                     /* '<S73>/deg->rad' */
  real_T DataTypeConversion_gf;        /* '<S201>/Data Type Conversion' */
  real_T NE_ar;                        /* '<S201>/N->E' */
  real_T TmpSignalConversionAtDivide11In[4];
  real_T MathFunction11[64];           /* '<Root>/Math Function11' */
  real_T Divide11[256];                /* '<Root>/Divide11' */
  real_T DataTypeConversion_lz;        /* '<S10>/Data Type Conversion' */
  real_T NE_h1;                        /* '<S10>/N->E' */
  real_T DataTypeConversion_ek;        /* '<S138>/Data Type Conversion' */
  real_T NE_d0;                        /* '<S138>/N->E' */
  real_T DataTypeConversion_cp;        /* '<S74>/Data Type Conversion' */
  real_T NE_pw;                        /* '<S74>/N->E' */
  real_T degrad_h;                     /* '<S74>/deg->rad' */
  real_T DataTypeConversion_fe;        /* '<S202>/Data Type Conversion' */
  real_T NE_pk;                        /* '<S202>/N->E' */
  real_T TmpSignalConversionAtDivide12In[4];
  real_T MathFunction12[64];           /* '<Root>/Math Function12' */
  real_T Divide12[256];                /* '<Root>/Divide12' */
  real_T DataTypeConversion_e4;        /* '<S11>/Data Type Conversion' */
  real_T NE_pj;                        /* '<S11>/N->E' */
  real_T DataTypeConversion_oe;        /* '<S139>/Data Type Conversion' */
  real_T NE_ig;                        /* '<S139>/N->E' */
  real_T DataTypeConversion_bx;        /* '<S75>/Data Type Conversion' */
  real_T NE_cm;                        /* '<S75>/N->E' */
  real_T degrad_al;                    /* '<S75>/deg->rad' */
  real_T DataTypeConversion_lw;        /* '<S203>/Data Type Conversion' */
  real_T NE_b0;                        /* '<S203>/N->E' */
  real_T TmpSignalConversionAtDivide13In[4];
  real_T MathFunction13[64];           /* '<Root>/Math Function13' */
  real_T Divide13[256];                /* '<Root>/Divide13' */
  real_T DataTypeConversion_p4;        /* '<S12>/Data Type Conversion' */
  real_T NE_ks;                        /* '<S12>/N->E' */
  real_T DataTypeConversion_a3;        /* '<S140>/Data Type Conversion' */
  real_T NE_a3;                        /* '<S140>/N->E' */
  real_T DataTypeConversion_al;        /* '<S76>/Data Type Conversion' */
  real_T NE_om;                        /* '<S76>/N->E' */
  real_T degrad_oi;                    /* '<S76>/deg->rad' */
  real_T DataTypeConversion_aj;        /* '<S204>/Data Type Conversion' */
  real_T NE_ed;                        /* '<S204>/N->E' */
  real_T TmpSignalConversionAtDivide14In[4];
  real_T MathFunction14[64];           /* '<Root>/Math Function14' */
  real_T Divide14[256];                /* '<Root>/Divide14' */
  real_T DataTypeConversion_go;        /* '<S13>/Data Type Conversion' */
  real_T NE_mj;                        /* '<S13>/N->E' */
  real_T DataTypeConversion_c3m;       /* '<S141>/Data Type Conversion' */
  real_T NE_lub;                       /* '<S141>/N->E' */
  real_T DataTypeConversion_nh;        /* '<S77>/Data Type Conversion' */
  real_T NE_hf;                        /* '<S77>/N->E' */
  real_T degrad_lg;                    /* '<S77>/deg->rad' */
  real_T DataTypeConversion_j0;        /* '<S205>/Data Type Conversion' */
  real_T NE_lzn;                       /* '<S205>/N->E' */
  real_T TmpSignalConversionAtDivide15In[4];
  real_T MathFunction15[64];           /* '<Root>/Math Function15' */
  real_T Divide15[256];                /* '<Root>/Divide15' */
  real_T DataTypeConversion_od;        /* '<S14>/Data Type Conversion' */
  real_T NE_lp;                        /* '<S14>/N->E' */
  real_T DataTypeConversion_bw;        /* '<S142>/Data Type Conversion' */
  real_T NE_on;                        /* '<S142>/N->E' */
  real_T DataTypeConversion_or;        /* '<S78>/Data Type Conversion' */
  real_T NE_hu;                        /* '<S78>/N->E' */
  real_T degrad_dh;                    /* '<S78>/deg->rad' */
  real_T DataTypeConversion_he;        /* '<S206>/Data Type Conversion' */
  real_T NE_nb;                        /* '<S206>/N->E' */
  real_T TmpSignalConversionAtDivide16In[4];
  real_T MathFunction16[64];           /* '<Root>/Math Function16' */
  real_T Divide16[256];                /* '<Root>/Divide16' */
  real_T DataTypeConversion_op;        /* '<S15>/Data Type Conversion' */
  real_T NE_bg;                        /* '<S15>/N->E' */
  real_T DataTypeConversion_ae;        /* '<S143>/Data Type Conversion' */
  real_T NE_jk;                        /* '<S143>/N->E' */
  real_T DataTypeConversion_e5;        /* '<S79>/Data Type Conversion' */
  real_T NE_ae;                        /* '<S79>/N->E' */
  real_T degrad_n;                     /* '<S79>/deg->rad' */
  real_T DataTypeConversion_gq;        /* '<S207>/Data Type Conversion' */
  real_T NE_e2v;                       /* '<S207>/N->E' */
  real_T TmpSignalConversionAtDivide17In[4];
  real_T MathFunction17[64];           /* '<Root>/Math Function17' */
  real_T Divide17[256];                /* '<Root>/Divide17' */
  real_T DataTypeConversion_dim;       /* '<S16>/Data Type Conversion' */
  real_T NE_n4;                        /* '<S16>/N->E' */
  real_T DataTypeConversion_jr;        /* '<S144>/Data Type Conversion' */
  real_T NE_ko;                        /* '<S144>/N->E' */
  real_T DataTypeConversion_lc;        /* '<S80>/Data Type Conversion' */
  real_T NE_o3;                        /* '<S80>/N->E' */
  real_T degrad_ot;                    /* '<S80>/deg->rad' */
  real_T DataTypeConversion_ld;        /* '<S208>/Data Type Conversion' */
  real_T NE_pc;                        /* '<S208>/N->E' */
  real_T TmpSignalConversionAtDivide18In[4];
  real_T MathFunction18[64];           /* '<Root>/Math Function18' */
  real_T Divide18[256];                /* '<Root>/Divide18' */
  real_T DataTypeConversion_pf;        /* '<S18>/Data Type Conversion' */
  real_T NE_ln;                        /* '<S18>/N->E' */
  real_T DataTypeConversion_cc;        /* '<S146>/Data Type Conversion' */
  real_T NE_hz;                        /* '<S146>/N->E' */
  real_T DataTypeConversion_bf;        /* '<S82>/Data Type Conversion' */
  real_T NE_k5;                        /* '<S82>/N->E' */
  real_T degrad_a2;                    /* '<S82>/deg->rad' */
  real_T DataTypeConversion_kw;        /* '<S210>/Data Type Conversion' */
  real_T NE_ip;                        /* '<S210>/N->E' */
  real_T TmpSignalConversionAtDivide19In[4];
  real_T MathFunction19[64];           /* '<Root>/Math Function19' */
  real_T Divide19[256];                /* '<Root>/Divide19' */
  real_T DataTypeConversion_jrs;       /* '<S19>/Data Type Conversion' */
  real_T NE_ol;                        /* '<S19>/N->E' */
  real_T DataTypeConversion_pv;        /* '<S147>/Data Type Conversion' */
  real_T NE_ad;                        /* '<S147>/N->E' */
  real_T DataTypeConversion_lwa;       /* '<S83>/Data Type Conversion' */
  real_T NE_com;                       /* '<S83>/N->E' */
  real_T degrad_fg;                    /* '<S83>/deg->rad' */
  real_T DataTypeConversion_grk;       /* '<S211>/Data Type Conversion' */
  real_T NE_ex;                        /* '<S211>/N->E' */
  real_T TmpSignalConversionAtDivide20In[4];
  real_T MathFunction20[64];           /* '<Root>/Math Function20' */
  real_T Divide20[256];                /* '<Root>/Divide20' */
  real_T DataTypeConversion_f0;        /* '<S20>/Data Type Conversion' */
  real_T NE_nz;                        /* '<S20>/N->E' */
  real_T DataTypeConversion_mq;        /* '<S148>/Data Type Conversion' */
  real_T NE_pkd;                       /* '<S148>/N->E' */
  real_T DataTypeConversion_lb;        /* '<S84>/Data Type Conversion' */
  real_T NE_are;                       /* '<S84>/N->E' */
  real_T degrad_kb;                    /* '<S84>/deg->rad' */
  real_T DataTypeConversion_le;        /* '<S212>/Data Type Conversion' */
  real_T NE_nkt;                       /* '<S212>/N->E' */
  real_T TmpSignalConversionAtDivide21In[4];
  real_T MathFunction21[64];           /* '<Root>/Math Function21' */
  real_T Divide21[256];                /* '<Root>/Divide21' */
  real_T DataTypeConversion_bb;        /* '<S21>/Data Type Conversion' */
  real_T NE_mk;                        /* '<S21>/N->E' */
  real_T DataTypeConversion_gb;        /* '<S149>/Data Type Conversion' */
  real_T NE_he;                        /* '<S149>/N->E' */
  real_T DataTypeConversion_ds;        /* '<S85>/Data Type Conversion' */
  real_T NE_f4;                        /* '<S85>/N->E' */
  real_T degrad_kn;                    /* '<S85>/deg->rad' */
  real_T DataTypeConversion_jn;        /* '<S213>/Data Type Conversion' */
  real_T NE_ij;                        /* '<S213>/N->E' */
  real_T TmpSignalConversionAtDivide22In[4];
  real_T MathFunction22[64];           /* '<Root>/Math Function22' */
  real_T Divide22[256];                /* '<Root>/Divide22' */
  real_T DataTypeConversion_cu;        /* '<S22>/Data Type Conversion' */
  real_T NE_oh;                        /* '<S22>/N->E' */
  real_T DataTypeConversion_hl;        /* '<S150>/Data Type Conversion' */
  real_T NE_ge;                        /* '<S150>/N->E' */
  real_T DataTypeConversion_ca;        /* '<S86>/Data Type Conversion' */
  real_T NE_je;                        /* '<S86>/N->E' */
  real_T degrad_h3;                    /* '<S86>/deg->rad' */
  real_T DataTypeConversion_hc;        /* '<S214>/Data Type Conversion' */
  real_T NE_ny;                        /* '<S214>/N->E' */
  real_T TmpSignalConversionAtDivide23In[4];
  real_T MathFunction23[64];           /* '<Root>/Math Function23' */
  real_T Divide23[256];                /* '<Root>/Divide23' */
  real_T DataTypeConversion_cub;       /* '<S23>/Data Type Conversion' */
  real_T NE_kh;                        /* '<S23>/N->E' */
  real_T DataTypeConversion_kt;        /* '<S151>/Data Type Conversion' */
  real_T NE_b1h;                       /* '<S151>/N->E' */
  real_T DataTypeConversion_nn;        /* '<S87>/Data Type Conversion' */
  real_T NE_kc;                        /* '<S87>/N->E' */
  real_T degrad_kj;                    /* '<S87>/deg->rad' */
  real_T DataTypeConversion_m0;        /* '<S215>/Data Type Conversion' */
  real_T NE_pi;                        /* '<S215>/N->E' */
  real_T TmpSignalConversionAtDivide24In[4];
  real_T MathFunction24[64];           /* '<Root>/Math Function24' */
  real_T Divide24[256];                /* '<Root>/Divide24' */
  real_T DataTypeConversion_npp;       /* '<S24>/Data Type Conversion' */
  real_T NE_mn;                        /* '<S24>/N->E' */
  real_T DataTypeConversion_bx0;       /* '<S152>/Data Type Conversion' */
  real_T NE_ap;                        /* '<S152>/N->E' */
  real_T DataTypeConversion_la;        /* '<S88>/Data Type Conversion' */
  real_T NE_lm;                        /* '<S88>/N->E' */
  real_T degrad_on;                    /* '<S88>/deg->rad' */
  real_T DataTypeConversion_po;        /* '<S216>/Data Type Conversion' */
  real_T NE_eo;                        /* '<S216>/N->E' */
  real_T TmpSignalConversionAtDivide25In[4];
  real_T MathFunction25[64];           /* '<Root>/Math Function25' */
  real_T Divide25[256];                /* '<Root>/Divide25' */
  real_T DataTypeConversion_b2;        /* '<S25>/Data Type Conversion' */
  real_T NE_dao;                       /* '<S25>/N->E' */
  real_T DataTypeConversion_er;        /* '<S153>/Data Type Conversion' */
  real_T NE_ldz;                       /* '<S153>/N->E' */
  real_T DataTypeConversion_gd;        /* '<S89>/Data Type Conversion' */
  real_T NE_kf;                        /* '<S89>/N->E' */
  real_T degrad_nb;                    /* '<S89>/deg->rad' */
  real_T DataTypeConversion_cw;        /* '<S217>/Data Type Conversion' */
  real_T NE_oo;                        /* '<S217>/N->E' */
  real_T TmpSignalConversionAtDivide26In[4];
  real_T MathFunction26[64];           /* '<Root>/Math Function26' */
  real_T Divide26[256];                /* '<Root>/Divide26' */
  real_T DataTypeConversion_g3;        /* '<S26>/Data Type Conversion' */
  real_T NE_aq;                        /* '<S26>/N->E' */
  real_T DataTypeConversion_kf;        /* '<S154>/Data Type Conversion' */
  real_T NE_fbg;                       /* '<S154>/N->E' */
  real_T DataTypeConversion_bp;        /* '<S90>/Data Type Conversion' */
  real_T NE_omg;                       /* '<S90>/N->E' */
  real_T degrad_f3;                    /* '<S90>/deg->rad' */
  real_T DataTypeConversion_lr;        /* '<S218>/Data Type Conversion' */
  real_T NE_g5;                        /* '<S218>/N->E' */
  real_T TmpSignalConversionAtDivide27In[4];
  real_T MathFunction27[64];           /* '<Root>/Math Function27' */
  real_T Divide27[256];                /* '<Root>/Divide27' */
  real_T DataTypeConversion_gt;        /* '<S27>/Data Type Conversion' */
  real_T NE_ps;                        /* '<S27>/N->E' */
  real_T DataTypeConversion_mb;        /* '<S155>/Data Type Conversion' */
  real_T NE_il;                        /* '<S155>/N->E' */
  real_T DataTypeConversion_iw;        /* '<S91>/Data Type Conversion' */
  real_T NE_jg;                        /* '<S91>/N->E' */
  real_T degrad_j;                     /* '<S91>/deg->rad' */
  real_T DataTypeConversion_om;        /* '<S219>/Data Type Conversion' */
  real_T NE_fy;                        /* '<S219>/N->E' */
  real_T TmpSignalConversionAtDivide28In[4];
  real_T MathFunction28[64];           /* '<Root>/Math Function28' */
  real_T Divide28[256];                /* '<Root>/Divide28' */
  real_T DataTypeConversion_py;        /* '<S29>/Data Type Conversion' */
  real_T NE_af;                        /* '<S29>/N->E' */
  real_T DataTypeConversion_dk;        /* '<S157>/Data Type Conversion' */
  real_T NE_en;                        /* '<S157>/N->E' */
  real_T DataTypeConversion_nj;        /* '<S93>/Data Type Conversion' */
  real_T NE_ba;                        /* '<S93>/N->E' */
  real_T degrad_fd;                    /* '<S93>/deg->rad' */
  real_T DataTypeConversion_b1;        /* '<S221>/Data Type Conversion' */
  real_T NE_gm;                        /* '<S221>/N->E' */
  real_T TmpSignalConversionAtDivide29In[4];
  real_T MathFunction29[64];           /* '<Root>/Math Function29' */
  real_T Divide29[256];                /* '<Root>/Divide29' */
  real_T DataTypeConversion_lm;        /* '<S30>/Data Type Conversion' */
  real_T NE_d2;                        /* '<S30>/N->E' */
  real_T DataTypeConversion_ie;        /* '<S158>/Data Type Conversion' */
  real_T NE_jz;                        /* '<S158>/N->E' */
  real_T DataTypeConversion_me;        /* '<S94>/Data Type Conversion' */
  real_T NE_az;                        /* '<S94>/N->E' */
  real_T degrad_eq;                    /* '<S94>/deg->rad' */
  real_T DataTypeConversion_pg;        /* '<S222>/Data Type Conversion' */
  real_T NE_gj;                        /* '<S222>/N->E' */
  real_T TmpSignalConversionAtDivide30In[4];
  real_T MathFunction30[64];           /* '<Root>/Math Function30' */
  real_T Divide30[256];                /* '<Root>/Divide30' */
  real_T DataTypeConversion_ed;        /* '<S31>/Data Type Conversion' */
  real_T NE_fl;                        /* '<S31>/N->E' */
  real_T DataTypeConversion_dkn;       /* '<S159>/Data Type Conversion' */
  real_T NE_ijr;                       /* '<S159>/N->E' */
  real_T DataTypeConversion_bq;        /* '<S95>/Data Type Conversion' */
  real_T NE_d3;                        /* '<S95>/N->E' */
  real_T degrad_nd;                    /* '<S95>/deg->rad' */
  real_T DataTypeConversion_jh;        /* '<S223>/Data Type Conversion' */
  real_T NE_es;                        /* '<S223>/N->E' */
  real_T TmpSignalConversionAtDivide31In[4];
  real_T MathFunction31[64];           /* '<Root>/Math Function31' */
  real_T Divide31[256];                /* '<Root>/Divide31' */
  real_T DataTypeConversion_bi;        /* '<S32>/Data Type Conversion' */
  real_T NE_dn;                        /* '<S32>/N->E' */
  real_T DataTypeConversion_c5;        /* '<S160>/Data Type Conversion' */
  real_T NE_jo;                        /* '<S160>/N->E' */
  real_T DataTypeConversion_bk;        /* '<S96>/Data Type Conversion' */
  real_T NE_gg2;                       /* '<S96>/N->E' */
  real_T degrad_m;                     /* '<S96>/deg->rad' */
  real_T DataTypeConversion_d3;        /* '<S224>/Data Type Conversion' */
  real_T NE_oj;                        /* '<S224>/N->E' */
  real_T TmpSignalConversionAtDivide32In[4];
  real_T MathFunction32[64];           /* '<Root>/Math Function32' */
  real_T Divide32[256];                /* '<Root>/Divide32' */
  real_T DataTypeConversion_gu;        /* '<S33>/Data Type Conversion' */
  real_T NE_dzl;                       /* '<S33>/N->E' */
  real_T DataTypeConversion_mv;        /* '<S161>/Data Type Conversion' */
  real_T NE_cx;                        /* '<S161>/N->E' */
  real_T DataTypeConversion_nz;        /* '<S97>/Data Type Conversion' */
  real_T NE_a1;                        /* '<S97>/N->E' */
  real_T degrad_lw;                    /* '<S97>/deg->rad' */
  real_T DataTypeConversion_fi;        /* '<S225>/Data Type Conversion' */
  real_T NE_ade;                       /* '<S225>/N->E' */
  real_T TmpSignalConversionAtDivide33In[4];
  real_T MathFunction33[64];           /* '<Root>/Math Function33' */
  real_T Divide33[256];                /* '<Root>/Divide33' */
  real_T DataTypeConversion_ls;        /* '<S34>/Data Type Conversion' */
  real_T NE_mi;                        /* '<S34>/N->E' */
  real_T DataTypeConversion_no;        /* '<S162>/Data Type Conversion' */
  real_T NE_o5;                        /* '<S162>/N->E' */
  real_T DataTypeConversion_pel;       /* '<S98>/Data Type Conversion' */
  real_T NE_oy;                        /* '<S98>/N->E' */
  real_T degrad_jo;                    /* '<S98>/deg->rad' */
  real_T DataTypeConversion_fk;        /* '<S226>/Data Type Conversion' */
  real_T NE_pb;                        /* '<S226>/N->E' */
  real_T TmpSignalConversionAtDivide34In[4];
  real_T MathFunction34[64];           /* '<Root>/Math Function34' */
  real_T Divide34[256];                /* '<Root>/Divide34' */
  real_T DataTypeConversion_df;        /* '<S35>/Data Type Conversion' */
  real_T NE_fv;                        /* '<S35>/N->E' */
  real_T DataTypeConversion_pu;        /* '<S163>/Data Type Conversion' */
  real_T NE_ot;                        /* '<S163>/N->E' */
  real_T DataTypeConversion_dc;        /* '<S99>/Data Type Conversion' */
  real_T NE_cgx;                       /* '<S99>/N->E' */
  real_T degrad_ag;                    /* '<S99>/deg->rad' */
  real_T DataTypeConversion_jo;        /* '<S227>/Data Type Conversion' */
  real_T NE_m3;                        /* '<S227>/N->E' */
  real_T TmpSignalConversionAtDivide35In[4];
  real_T MathFunction35[64];           /* '<Root>/Math Function35' */
  real_T Divide35[256];                /* '<Root>/Divide35' */
  real_T DataTypeConversion_m0i;       /* '<S36>/Data Type Conversion' */
  real_T NE_bx;                        /* '<S36>/N->E' */
  real_T DataTypeConversion_pk;        /* '<S164>/Data Type Conversion' */
  real_T NE_iu;                        /* '<S164>/N->E' */
  real_T DataTypeConversion_lra;       /* '<S100>/Data Type Conversion' */
  real_T NE_jt;                        /* '<S100>/N->E' */
  real_T degrad_fe;                    /* '<S100>/deg->rad' */
  real_T DataTypeConversion_i1;        /* '<S228>/Data Type Conversion' */
  real_T NE_i1;                        /* '<S228>/N->E' */
  real_T TmpSignalConversionAtDivide36In[4];
  real_T MathFunction36[64];           /* '<Root>/Math Function36' */
  real_T Divide36[256];                /* '<Root>/Divide36' */
  real_T DataTypeConversion_kq;        /* '<S37>/Data Type Conversion' */
  real_T NE_gc;                        /* '<S37>/N->E' */
  real_T DataTypeConversion_iu;        /* '<S165>/Data Type Conversion' */
  real_T NE_g2;                        /* '<S165>/N->E' */
  real_T DataTypeConversion_pi;        /* '<S101>/Data Type Conversion' */
  real_T NE_kss;                       /* '<S101>/N->E' */
  real_T degrad_k0;                    /* '<S101>/deg->rad' */
  real_T DataTypeConversion_fp;        /* '<S229>/Data Type Conversion' */
  real_T NE_p1;                        /* '<S229>/N->E' */
  real_T TmpSignalConversionAtDivide37In[4];
  real_T MathFunction37[64];           /* '<Root>/Math Function37' */
  real_T Divide37[256];                /* '<Root>/Divide37' */
  real_T DataTypeConversion_noo;       /* '<S38>/Data Type Conversion' */
  real_T NE_p2;                        /* '<S38>/N->E' */
  real_T DataTypeConversion_ja;        /* '<S166>/Data Type Conversion' */
  real_T NE_fh;                        /* '<S166>/N->E' */
  real_T DataTypeConversion_jz;        /* '<S102>/Data Type Conversion' */
  real_T NE_gs;                        /* '<S102>/N->E' */
  real_T degrad_dr;                    /* '<S102>/deg->rad' */
  real_T DataTypeConversion_iui;       /* '<S230>/Data Type Conversion' */
  real_T NE_hv;                        /* '<S230>/N->E' */
  real_T TmpSignalConversionAtDivide38In[4];
  real_T MathFunction38[64];           /* '<Root>/Math Function38' */
  real_T Divide38[256];                /* '<Root>/Divide38' */
  real_T DataTypeConversion_kd;        /* '<S40>/Data Type Conversion' */
  real_T NE_nyv;                       /* '<S40>/N->E' */
  real_T DataTypeConversion_cpp;       /* '<S168>/Data Type Conversion' */
  real_T NE_i1s;                       /* '<S168>/N->E' */
  real_T DataTypeConversion_oz;        /* '<S104>/Data Type Conversion' */
  real_T NE_hvu;                       /* '<S104>/N->E' */
  real_T degrad_lr;                    /* '<S104>/deg->rad' */
  real_T DataTypeConversion_b1g;       /* '<S232>/Data Type Conversion' */
  real_T NE_ev;                        /* '<S232>/N->E' */
  real_T TmpSignalConversionAtDivide39In[4];
  real_T MathFunction39[64];           /* '<Root>/Math Function39' */
  real_T Divide39[256];                /* '<Root>/Divide39' */
  real_T DataTypeConversion_ll;        /* '<S41>/Data Type Conversion' */
  real_T NE_fq;                        /* '<S41>/N->E' */
  real_T DataTypeConversion_pug;       /* '<S169>/Data Type Conversion' */
  real_T NE_o3b;                       /* '<S169>/N->E' */
  real_T DataTypeConversion_jf;        /* '<S105>/Data Type Conversion' */
  real_T NE_hfl;                       /* '<S105>/N->E' */
  real_T degrad_l1;                    /* '<S105>/deg->rad' */
  real_T DataTypeConversion_pyy;       /* '<S233>/Data Type Conversion' */
  real_T NE_o1;                        /* '<S233>/N->E' */
  real_T TmpSignalConversionAtDivide40In[4];
  real_T MathFunction40[64];           /* '<Root>/Math Function40' */
  real_T Divide40[256];                /* '<Root>/Divide40' */
  real_T DataTypeConversion_ng;        /* '<S42>/Data Type Conversion' */
  real_T NE_kw;                        /* '<S42>/N->E' */
  real_T DataTypeConversion_g14;       /* '<S170>/Data Type Conversion' */
  real_T NE_gi;                        /* '<S170>/N->E' */
  real_T DataTypeConversion_lv;        /* '<S106>/Data Type Conversion' */
  real_T NE_a5;                        /* '<S106>/N->E' */
  real_T degrad_pz;                    /* '<S106>/deg->rad' */
  real_T DataTypeConversion_p3;        /* '<S234>/Data Type Conversion' */
  real_T NE_mg;                        /* '<S234>/N->E' */
  real_T TmpSignalConversionAtDivide41In[4];
  real_T MathFunction41[64];           /* '<Root>/Math Function41' */
  real_T Divide41[256];                /* '<Root>/Divide41' */
  real_T DataTypeConversion_ox;        /* '<S43>/Data Type Conversion' */
  real_T NE_onj;                       /* '<S43>/N->E' */
  real_T DataTypeConversion_da;        /* '<S171>/Data Type Conversion' */
  real_T NE_gy;                        /* '<S171>/N->E' */
  real_T DataTypeConversion_iur;       /* '<S107>/Data Type Conversion' */
  real_T NE_ko0;                       /* '<S107>/N->E' */
  real_T degrad_kp;                    /* '<S107>/deg->rad' */
  real_T DataTypeConversion_jk;        /* '<S235>/Data Type Conversion' */
  real_T NE_db;                        /* '<S235>/N->E' */
  real_T TmpSignalConversionAtDivide42In[4];
  real_T MathFunction42[64];           /* '<Root>/Math Function42' */
  real_T Divide42[256];                /* '<Root>/Divide42' */
  real_T DataTypeConversion_id;        /* '<S44>/Data Type Conversion' */
  real_T NE_fz;                        /* '<S44>/N->E' */
  real_T DataTypeConversion_h4;        /* '<S172>/Data Type Conversion' */
  real_T NE_mb;                        /* '<S172>/N->E' */
  real_T DataTypeConversion_on;        /* '<S108>/Data Type Conversion' */
  real_T NE_jw;                        /* '<S108>/N->E' */
  real_T degrad_gg;                    /* '<S108>/deg->rad' */
  real_T DataTypeConversion_dh;        /* '<S236>/Data Type Conversion' */
  real_T NE_dr;                        /* '<S236>/N->E' */
  real_T TmpSignalConversionAtDivide43In[4];
  real_T MathFunction43[64];           /* '<Root>/Math Function43' */
  real_T Divide43[256];                /* '<Root>/Divide43' */
  real_T DataTypeConversion_fy;        /* '<S45>/Data Type Conversion' */
  real_T NE_lv;                        /* '<S45>/N->E' */
  real_T DataTypeConversion_f0o;       /* '<S173>/Data Type Conversion' */
  real_T NE_lo;                        /* '<S173>/N->E' */
  real_T DataTypeConversion_gx;        /* '<S109>/Data Type Conversion' */
  real_T NE_pg;                        /* '<S109>/N->E' */
  real_T degrad_pn;                    /* '<S109>/deg->rad' */
  real_T DataTypeConversion_fl;        /* '<S237>/Data Type Conversion' */
  real_T NE_gb;                        /* '<S237>/N->E' */
  real_T TmpSignalConversionAtDivide44In[4];
  real_T MathFunction44[64];           /* '<Root>/Math Function44' */
  real_T Divide44[256];                /* '<Root>/Divide44' */
  real_T DataTypeConversion_em;        /* '<S46>/Data Type Conversion' */
  real_T NE_cz;                        /* '<S46>/N->E' */
  real_T DataTypeConversion_mu;        /* '<S174>/Data Type Conversion' */
  real_T NE_l1;                        /* '<S174>/N->E' */
  real_T DataTypeConversion_bo;        /* '<S110>/Data Type Conversion' */
  real_T NE_adv;                       /* '<S110>/N->E' */
  real_T degrad_b;                     /* '<S110>/deg->rad' */
  real_T DataTypeConversion_a24;       /* '<S238>/Data Type Conversion' */
  real_T NE_ai;                        /* '<S238>/N->E' */
  real_T TmpSignalConversionAtDivide45In[4];
  real_T MathFunction45[64];           /* '<Root>/Math Function45' */
  real_T Divide45[256];                /* '<Root>/Divide45' */
  real_T DataTypeConversion_dt;        /* '<S47>/Data Type Conversion' */
  real_T NE_kj;                        /* '<S47>/N->E' */
  real_T DataTypeConversion_iq;        /* '<S175>/Data Type Conversion' */
  real_T NE_ggl;                       /* '<S175>/N->E' */
  real_T DataTypeConversion_ngk;       /* '<S111>/Data Type Conversion' */
  real_T NE_pv;                        /* '<S111>/N->E' */
  real_T degrad_md;                    /* '<S111>/deg->rad' */
  real_T DataTypeConversion_edf;       /* '<S239>/Data Type Conversion' */
  real_T NE_gx;                        /* '<S239>/N->E' */
  real_T TmpSignalConversionAtDivide46In[4];
  real_T MathFunction46[64];           /* '<Root>/Math Function46' */
  real_T Divide46[256];                /* '<Root>/Divide46' */
  real_T DataTypeConversion_l0;        /* '<S48>/Data Type Conversion' */
  real_T NE_ag;                        /* '<S48>/N->E' */
  real_T DataTypeConversion_fd;        /* '<S176>/Data Type Conversion' */
  real_T NE_fm;                        /* '<S176>/N->E' */
  real_T DataTypeConversion_m3;        /* '<S112>/Data Type Conversion' */
  real_T NE_jn;                        /* '<S112>/N->E' */
  real_T degrad_i;                     /* '<S112>/deg->rad' */
  real_T DataTypeConversion_eh;        /* '<S240>/Data Type Conversion' */
  real_T NE_kq;                        /* '<S240>/N->E' */
  real_T TmpSignalConversionAtDivide47In[4];
  real_T MathFunction47[64];           /* '<Root>/Math Function47' */
  real_T Divide47[256];                /* '<Root>/Divide47' */
  real_T DataTypeConversion_lg;        /* '<S49>/Data Type Conversion' */
  real_T NE_go;                        /* '<S49>/N->E' */
  real_T DataTypeConversion_lcm;       /* '<S177>/Data Type Conversion' */
  real_T NE_ne;                        /* '<S177>/N->E' */
  real_T DataTypeConversion_eo;        /* '<S113>/Data Type Conversion' */
  real_T NE_ka;                        /* '<S113>/N->E' */
  real_T degrad_fh;                    /* '<S113>/deg->rad' */
  real_T DataTypeConversion_oec;       /* '<S241>/Data Type Conversion' */
  real_T NE_fzj;                       /* '<S241>/N->E' */
  real_T TmpSignalConversionAtDivide48In[4];
  real_T MathFunction48[64];           /* '<Root>/Math Function48' */
  real_T Divide48[256];                /* '<Root>/Divide48' */
  real_T DataTypeConversion_j3;        /* '<S51>/Data Type Conversion' */
  real_T NE_f4k;                       /* '<S51>/N->E' */
  real_T DataTypeConversion_dax;       /* '<S179>/Data Type Conversion' */
  real_T NE_jki;                       /* '<S179>/N->E' */
  real_T DataTypeConversion_dac;       /* '<S115>/Data Type Conversion' */
  real_T NE_cr;                        /* '<S115>/N->E' */
  real_T degrad_gl;                    /* '<S115>/deg->rad' */
  real_T DataTypeConversion_gk;        /* '<S243>/Data Type Conversion' */
  real_T NE_ew;                        /* '<S243>/N->E' */
  real_T TmpSignalConversionAtDivide49In[4];
  real_T MathFunction49[64];           /* '<Root>/Math Function49' */
  real_T Divide49[256];                /* '<Root>/Divide49' */
  real_T DataTypeConversion_fl0;       /* '<S52>/Data Type Conversion' */
  real_T NE_pwm;                       /* '<S52>/N->E' */
  real_T DataTypeConversion_n0;        /* '<S180>/Data Type Conversion' */
  real_T NE_ho;                        /* '<S180>/N->E' */
  real_T DataTypeConversion_jot;       /* '<S116>/Data Type Conversion' */
  real_T NE_cu;                        /* '<S116>/N->E' */
  real_T degrad_ao;                    /* '<S116>/deg->rad' */
  real_T DataTypeConversion_ld3;       /* '<S244>/Data Type Conversion' */
  real_T NE_ds;                        /* '<S244>/N->E' */
  real_T TmpSignalConversionAtDivide50In[4];
  real_T MathFunction50[64];           /* '<Root>/Math Function50' */
  real_T Divide50[256];                /* '<Root>/Divide50' */
  real_T DataTypeConversion_ac;        /* '<S53>/Data Type Conversion' */
  real_T NE_ku;                        /* '<S53>/N->E' */
  real_T DataTypeConversion_ktl;       /* '<S181>/Data Type Conversion' */
  real_T NE_ktf;                       /* '<S181>/N->E' */
  real_T DataTypeConversion_gn;        /* '<S117>/Data Type Conversion' */
  real_T NE_i3;                        /* '<S117>/N->E' */
  real_T degrad_nc;                    /* '<S117>/deg->rad' */
  real_T DataTypeConversion_oep;       /* '<S245>/Data Type Conversion' */
  real_T NE_ijt;                       /* '<S245>/N->E' */
  real_T TmpSignalConversionAtDivide51In[4];
  real_T MathFunction51[64];           /* '<Root>/Math Function51' */
  real_T Divide51[256];                /* '<Root>/Divide51' */
  real_T DataTypeConversion_jji;       /* '<S54>/Data Type Conversion' */
  real_T NE_im;                        /* '<S54>/N->E' */
  real_T DataTypeConversion_ow;        /* '<S182>/Data Type Conversion' */
  real_T NE_m0;                        /* '<S182>/N->E' */
  real_T DataTypeConversion_mz;        /* '<S118>/Data Type Conversion' */
  real_T NE_ei;                        /* '<S118>/N->E' */
  real_T degrad_lp;                    /* '<S118>/deg->rad' */
  real_T DataTypeConversion_ar;        /* '<S246>/Data Type Conversion' */
  real_T NE_pvj;                       /* '<S246>/N->E' */
  real_T TmpSignalConversionAtDivide52In[4];
  real_T MathFunction52[64];           /* '<Root>/Math Function52' */
  real_T Divide52[256];                /* '<Root>/Divide52' */
  real_T DataTypeConversion_hy;        /* '<S55>/Data Type Conversion' */
  real_T NE_b0p;                       /* '<S55>/N->E' */
  real_T DataTypeConversion_d3u;       /* '<S183>/Data Type Conversion' */
  real_T NE_oyi;                       /* '<S183>/N->E' */
  real_T DataTypeConversion_jg;        /* '<S119>/Data Type Conversion' */
  real_T NE_l2;                        /* '<S119>/N->E' */
  real_T degrad_eu;                    /* '<S119>/deg->rad' */
  real_T DataTypeConversion_emv;       /* '<S247>/Data Type Conversion' */
  real_T NE_oyg;                       /* '<S247>/N->E' */
  real_T TmpSignalConversionAtDivide53In[4];
  real_T MathFunction53[64];           /* '<Root>/Math Function53' */
  real_T Divide53[256];                /* '<Root>/Divide53' */
  real_T DataTypeConversion_boj;       /* '<S56>/Data Type Conversion' */
  real_T NE_hi;                        /* '<S56>/N->E' */
  real_T DataTypeConversion_cg;        /* '<S184>/Data Type Conversion' */
  real_T NE_pq;                        /* '<S184>/N->E' */
  real_T DataTypeConversion_nj4;       /* '<S120>/Data Type Conversion' */
  real_T NE_gcs;                       /* '<S120>/N->E' */
  real_T degrad_hb;                    /* '<S120>/deg->rad' */
  real_T DataTypeConversion_fp5;       /* '<S248>/Data Type Conversion' */
  real_T NE_le;                        /* '<S248>/N->E' */
  real_T TmpSignalConversionAtDivide54In[4];
  real_T MathFunction54[64];           /* '<Root>/Math Function54' */
  real_T Divide54[256];                /* '<Root>/Divide54' */
  real_T DataTypeConversion_njj;       /* '<S57>/Data Type Conversion' */
  real_T NE_fx;                        /* '<S57>/N->E' */
  real_T DataTypeConversion_pl;        /* '<S185>/Data Type Conversion' */
  real_T NE_o1t;                       /* '<S185>/N->E' */
  real_T DataTypeConversion_au;        /* '<S121>/Data Type Conversion' */
  real_T NE_a1e;                       /* '<S121>/N->E' */
  real_T degrad_o3;                    /* '<S121>/deg->rad' */
  real_T DataTypeConversion_b10;       /* '<S249>/Data Type Conversion' */
  real_T NE_cu5;                       /* '<S249>/N->E' */
  real_T TmpSignalConversionAtDivide55In[4];
  real_T MathFunction55[64];           /* '<Root>/Math Function55' */
  real_T Divide55[256];                /* '<Root>/Divide55' */
  real_T DataTypeConversion_iu1;       /* '<S58>/Data Type Conversion' */
  real_T NE_g4;                        /* '<S58>/N->E' */
  real_T DataTypeConversion_jw;        /* '<S186>/Data Type Conversion' */
  real_T NE_nm;                        /* '<S186>/N->E' */
  real_T DataTypeConversion_ik;        /* '<S122>/Data Type Conversion' */
  real_T NE_eg;                        /* '<S122>/N->E' */
  real_T degrad_c;                     /* '<S122>/deg->rad' */
  real_T DataTypeConversion_bxk;       /* '<S250>/Data Type Conversion' */
  real_T NE_kvh;                       /* '<S250>/N->E' */
  real_T TmpSignalConversionAtDivide56In[4];
  real_T MathFunction56[64];           /* '<Root>/Math Function56' */
  real_T Divide56[256];                /* '<Root>/Divide56' */
  real_T DataTypeConversion_m0v;       /* '<S59>/Data Type Conversion' */
  real_T NE_dvi;                       /* '<S59>/N->E' */
  real_T DataTypeConversion_pee;       /* '<S187>/Data Type Conversion' */
  real_T NE_c4;                        /* '<S187>/N->E' */
  real_T DataTypeConversion_dfi;       /* '<S123>/Data Type Conversion' */
  real_T NE_eq;                        /* '<S123>/N->E' */
  real_T degrad_pe;                    /* '<S123>/deg->rad' */
  real_T DataTypeConversion_ov;        /* '<S251>/Data Type Conversion' */
  real_T NE_dzw;                       /* '<S251>/N->E' */
  real_T TmpSignalConversionAtDivide57In[4];
  real_T MathFunction57[64];           /* '<Root>/Math Function57' */
  real_T Divide57[256];                /* '<Root>/Divide57' */
  real_T DataTypeConversion_bv;        /* '<S60>/Data Type Conversion' */
  real_T NE_jnl;                       /* '<S60>/N->E' */
  real_T DataTypeConversion_kc;        /* '<S188>/Data Type Conversion' */
  real_T NE_by;                        /* '<S188>/N->E' */
  real_T DataTypeConversion_hh;        /* '<S124>/Data Type Conversion' */
  real_T NE_hr;                        /* '<S124>/N->E' */
  real_T degrad_lk;                    /* '<S124>/deg->rad' */
  real_T DataTypeConversion_ev;        /* '<S252>/Data Type Conversion' */
  real_T NE_kj3;                       /* '<S252>/N->E' */
  real_T TmpSignalConversionAtDivide58In[4];
  real_T MathFunction58[64];           /* '<Root>/Math Function58' */
  real_T Divide58[256];                /* '<Root>/Divide58' */
  real_T DataTypeConversion_im;        /* '<S62>/Data Type Conversion' */
  real_T NE_dp;                        /* '<S62>/N->E' */
  real_T DataTypeConversion_nf;        /* '<S190>/Data Type Conversion' */
  real_T NE_eb;                        /* '<S190>/N->E' */
  real_T DataTypeConversion_hb;        /* '<S126>/Data Type Conversion' */
  real_T NE_gl;                        /* '<S126>/N->E' */
  real_T degrad_jn;                    /* '<S126>/deg->rad' */
  real_T DataTypeConversion_lq;        /* '<S254>/Data Type Conversion' */
  real_T NE_hfq;                       /* '<S254>/N->E' */
  real_T TmpSignalConversionAtDivide59In[4];
  real_T MathFunction59[64];           /* '<Root>/Math Function59' */
  real_T Divide59[256];                /* '<Root>/Divide59' */
  real_T DataTypeConversion_dj;        /* '<S63>/Data Type Conversion' */
  real_T NE_otg;                       /* '<S63>/N->E' */
  real_T DataTypeConversion_grc;       /* '<S191>/Data Type Conversion' */
  real_T NE_cgv;                       /* '<S191>/N->E' */
  real_T DataTypeConversion_e1c;       /* '<S127>/Data Type Conversion' */
  real_T NE_ft;                        /* '<S127>/N->E' */
  real_T degrad_kae;                   /* '<S127>/deg->rad' */
  real_T DataTypeConversion_ky;        /* '<S255>/Data Type Conversion' */
  real_T NE_lj;                        /* '<S255>/N->E' */
  real_T TmpSignalConversionAtDivide60In[4];
  real_T MathFunction60[64];           /* '<Root>/Math Function60' */
  real_T Divide60[256];                /* '<Root>/Divide60' */
  real_T DataTypeConversion_emw;       /* '<S64>/Data Type Conversion' */
  real_T NE_nzz;                       /* '<S64>/N->E' */
  real_T DataTypeConversion_nc;        /* '<S192>/Data Type Conversion' */
  real_T NE_onk;                       /* '<S192>/N->E' */
  real_T DataTypeConversion_cq;        /* '<S128>/Data Type Conversion' */
  real_T NE_miy;                       /* '<S128>/N->E' */
  real_T degrad_if;                    /* '<S128>/deg->rad' */
  real_T DataTypeConversion_ok;        /* '<S256>/Data Type Conversion' */
  real_T NE_py;                        /* '<S256>/N->E' */
  real_T TmpSignalConversionAtDivide61In[4];
  real_T MathFunction61[64];           /* '<Root>/Math Function61' */
  real_T Divide61[256];                /* '<Root>/Divide61' */
  real_T DataTypeConversion_o4;        /* '<S65>/Data Type Conversion' */
  real_T NE_gsg;                       /* '<S65>/N->E' */
  real_T DataTypeConversion_bfp;       /* '<S193>/Data Type Conversion' */
  real_T NE_hh;                        /* '<S193>/N->E' */
  real_T DataTypeConversion_ji;        /* '<S129>/Data Type Conversion' */
  real_T NE_h4;                        /* '<S129>/N->E' */
  real_T degrad_m1;                    /* '<S129>/deg->rad' */
  real_T DataTypeConversion_et;        /* '<S257>/Data Type Conversion' */
  real_T NE_nt;                        /* '<S257>/N->E' */
  real_T TmpSignalConversionAtDivide62In[4];
  real_T MathFunction62[64];           /* '<Root>/Math Function62' */
  real_T Divide62[256];                /* '<Root>/Divide62' */
  real_T DataTypeConversion_dm;        /* '<S66>/Data Type Conversion' */
  real_T NE_nc;                        /* '<S66>/N->E' */
  real_T DataTypeConversion_nx;        /* '<S194>/Data Type Conversion' */
  real_T NE_lk;                        /* '<S194>/N->E' */
  real_T DataTypeConversion_goz;       /* '<S130>/Data Type Conversion' */
  real_T NE_p4;                        /* '<S130>/N->E' */
  real_T degrad_ac;                    /* '<S130>/deg->rad' */
  real_T DataTypeConversion_npx;       /* '<S258>/Data Type Conversion' */
  real_T NE_nx;                        /* '<S258>/N->E' */
  real_T TmpSignalConversionAtDivide63In[4];
  real_T MathFunction63[64];           /* '<Root>/Math Function63' */
  real_T Divide63[256];                /* '<Root>/Divide63' */
  real_T Add[256];                     /* '<Root>/Add' */
  real_T MathFunction64[256];          /* '<Root>/Math Function64' */
  real_T DataTypeConversion_jb;        /* '<S2>/Data Type Conversion' */
  real_T NE_c2;                        /* '<S2>/N->E' */
  real_T EN[256];                      /* '<S1>/E->N' */
  real_T EN_c;                         /* '<S4>/E->N' */
  real_T DataOutput[256];              /* '<Root>/ESR_Data_Collect' */
  real_T ESR_RxTime_Out;               /* '<Root>/ESR_Data_Collect' */
  real_T range;                        /* '<Root>/ESR_Data_Collect' */
  real_T azimuth;                      /* '<Root>/ESR_Data_Collect' */
  real_T W;                            /* '<Root>/ESR_Data_Collect' */
  real_T L;                            /* '<Root>/ESR_Data_Collect' */
  real_T InstallAngESR;                /* '<Root>/ESR_Data_Collect' */
  real_T Gain1;                        /* '<S264>/Gain1' */
  real_T TrigonometricFunction;        /* '<S264>/Trigonometric Function' */
  real_T Product;                      /* '<S264>/Product' */
  real_T TrigonometricFunction1;       /* '<S264>/Trigonometric Function1' */
  real_T Product1;                     /* '<S264>/Product1' */
  uint16_T NE_bw;                      /* '<S3>/N->E' */
  uint16_T EN_e;                       /* '<S5>/E->N' */
  int8_T ESR_Trigger_c;                /* '<Root>/ESR_Data_Collect' */
  uint8_T DataTypeConversion_mu1;      /* '<S3>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S265>/Compare' */
  uint8_T Global_Trigger_ESR_c;        /* '<Root>/ESR_Data_Collect' */
  boolean_T Memory;                    /* '<S263>/Memory' */
  boolean_T Switch;                    /* '<S263>/Switch' */
  boolean_T LogicalOperator;           /* '<S263>/Logical Operator' */
} B_ESR_CoorAlig_Fcn_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S263>/Memory' */
} DW_ESR_CoorAlig_Fcn_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ESR_Data_Collect_Trig_ZCE;/* '<Root>/ESR_Data_Collect' */
} PrevZCX_ESR_CoorAlig_Fcn_T;

/* Parameters (auto storage) */
struct P_ESR_CoorAlig_Fcn_T_ {
  uint16_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S265>/Constant'
                                        */
  real_T rangeX_Y0;                    /* Computed Parameter: rangeX_Y0
                                        * Referenced by: '<S264>/rangeX'
                                        */
  real_T rangeY_Y0;                    /* Computed Parameter: rangeY_Y0
                                        * Referenced by: '<S264>/rangeY'
                                        */
  real_T Gain1_Gain;                   /* Expression: -1
                                        * Referenced by: '<S264>/Gain1'
                                        */
  real_T NE_Gain;                      /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  real_T NE_Gain_f;                    /* Expression: 0.1
                                        * Referenced by: '<S134>/N->E'
                                        */
  real_T NE_Gain_k;                    /* Expression: 0.1
                                        * Referenced by: '<S70>/N->E'
                                        */
  real_T degrad_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S70>/deg->rad'
                                        */
  real_T NE_Gain_l;                    /* Expression: 1
                                        * Referenced by: '<S198>/N->E'
                                        */
  real_T Constant4_Value[64];          /* Expression: [1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T NE_Gain_g;                    /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */
  real_T NE_Gain_c;                    /* Expression: 0.1
                                        * Referenced by: '<S145>/N->E'
                                        */
  real_T NE_Gain_fk;                   /* Expression: 0.1
                                        * Referenced by: '<S81>/N->E'
                                        */
  real_T degrad_Gain_p;                /* Expression: pi/180
                                        * Referenced by: '<S81>/deg->rad'
                                        */
  real_T NE_Gain_b;                    /* Expression: 1
                                        * Referenced by: '<S209>/N->E'
                                        */
  real_T Constant1_Value[64];          /* Expression: [0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T NE_Gain_p;                    /* Expression: 1
                                        * Referenced by: '<S28>/N->E'
                                        */
  real_T NE_Gain_b5;                   /* Expression: 0.1
                                        * Referenced by: '<S156>/N->E'
                                        */
  real_T NE_Gain_kv;                   /* Expression: 0.1
                                        * Referenced by: '<S92>/N->E'
                                        */
  real_T degrad_Gain_g;                /* Expression: pi/180
                                        * Referenced by: '<S92>/deg->rad'
                                        */
  real_T NE_Gain_n;                    /* Expression: 1
                                        * Referenced by: '<S220>/N->E'
                                        */
  real_T Constant2_Value[64];          /* Expression: [0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T NE_Gain_ge;                   /* Expression: 1
                                        * Referenced by: '<S39>/N->E'
                                        */
  real_T NE_Gain_bk;                   /* Expression: 0.1
                                        * Referenced by: '<S167>/N->E'
                                        */
  real_T NE_Gain_bku;                  /* Expression: 0.1
                                        * Referenced by: '<S103>/N->E'
                                        */
  real_T degrad_Gain_l;                /* Expression: pi/180
                                        * Referenced by: '<S103>/deg->rad'
                                        */
  real_T NE_Gain_o;                    /* Expression: 1
                                        * Referenced by: '<S231>/N->E'
                                        */
  real_T Constant3_Value[64];          /* Expression: [0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T NE_Gain_kk;                   /* Expression: 1
                                        * Referenced by: '<S50>/N->E'
                                        */
  real_T NE_Gain_cy;                   /* Expression: 0.1
                                        * Referenced by: '<S178>/N->E'
                                        */
  real_T NE_Gain_e;                    /* Expression: 0.1
                                        * Referenced by: '<S114>/N->E'
                                        */
  real_T degrad_Gain_h;                /* Expression: pi/180
                                        * Referenced by: '<S114>/deg->rad'
                                        */
  real_T NE_Gain_kj;                   /* Expression: 1
                                        * Referenced by: '<S242>/N->E'
                                        */
  real_T Constant5_Value[64];          /* Expression: [0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T NE_Gain_h;                    /* Expression: 1
                                        * Referenced by: '<S61>/N->E'
                                        */
  real_T NE_Gain_oi;                   /* Expression: 0.1
                                        * Referenced by: '<S189>/N->E'
                                        */
  real_T NE_Gain_pp;                   /* Expression: 0.1
                                        * Referenced by: '<S125>/N->E'
                                        */
  real_T degrad_Gain_i;                /* Expression: pi/180
                                        * Referenced by: '<S125>/deg->rad'
                                        */
  real_T NE_Gain_m;                    /* Expression: 1
                                        * Referenced by: '<S253>/N->E'
                                        */
  real_T Constant6_Value[64];          /* Expression: [0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T NE_Gain_ow;                   /* Expression: 1
                                        * Referenced by: '<S67>/N->E'
                                        */
  real_T NE_Gain_n2;                   /* Expression: 0.1
                                        * Referenced by: '<S195>/N->E'
                                        */
  real_T NE_Gain_fm;                   /* Expression: 0.1
                                        * Referenced by: '<S131>/N->E'
                                        */
  real_T degrad_Gain_hn;               /* Expression: pi/180
                                        * Referenced by: '<S131>/deg->rad'
                                        */
  real_T NE_Gain_nj;                   /* Expression: 1
                                        * Referenced by: '<S259>/N->E'
                                        */
  real_T Constant7_Value[64];          /* Expression: [0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T NE_Gain_gj;                   /* Expression: 1
                                        * Referenced by: '<S68>/N->E'
                                        */
  real_T NE_Gain_a;                    /* Expression: 0.1
                                        * Referenced by: '<S196>/N->E'
                                        */
  real_T NE_Gain_lp;                   /* Expression: 0.1
                                        * Referenced by: '<S132>/N->E'
                                        */
  real_T degrad_Gain_k;                /* Expression: pi/180
                                        * Referenced by: '<S132>/deg->rad'
                                        */
  real_T NE_Gain_oh;                   /* Expression: 1
                                        * Referenced by: '<S260>/N->E'
                                        */
  real_T Constant8_Value[64];          /* Expression: [0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T NE_Gain_le;                   /* Expression: 1
                                        * Referenced by: '<S69>/N->E'
                                        */
  real_T NE_Gain_hx;                   /* Expression: 0.1
                                        * Referenced by: '<S197>/N->E'
                                        */
  real_T NE_Gain_j;                    /* Expression: 0.1
                                        * Referenced by: '<S133>/N->E'
                                        */
  real_T degrad_Gain_a;                /* Expression: pi/180
                                        * Referenced by: '<S133>/deg->rad'
                                        */
  real_T NE_Gain_d;                    /* Expression: 1
                                        * Referenced by: '<S261>/N->E'
                                        */
  real_T Constant9_Value[64];          /* Expression: [0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T NE_Gain_ki;                   /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  real_T NE_Gain_jy;                   /* Expression: 0.1
                                        * Referenced by: '<S135>/N->E'
                                        */
  real_T NE_Gain_lc;                   /* Expression: 0.1
                                        * Referenced by: '<S71>/N->E'
                                        */
  real_T degrad_Gain_n;                /* Expression: pi/180
                                        * Referenced by: '<S71>/deg->rad'
                                        */
  real_T NE_Gain_bx;                   /* Expression: 1
                                        * Referenced by: '<S199>/N->E'
                                        */
  real_T Constant10_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T NE_Gain_a1;                   /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  real_T NE_Gain_l5;                   /* Expression: 0.1
                                        * Referenced by: '<S136>/N->E'
                                        */
  real_T NE_Gain_c3;                   /* Expression: 0.1
                                        * Referenced by: '<S72>/N->E'
                                        */
  real_T degrad_Gain_io;               /* Expression: pi/180
                                        * Referenced by: '<S72>/deg->rad'
                                        */
  real_T NE_Gain_ff;                   /* Expression: 1
                                        * Referenced by: '<S200>/N->E'
                                        */
  real_T Constant11_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T NE_Gain_cf;                   /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  real_T NE_Gain_i;                    /* Expression: 0.1
                                        * Referenced by: '<S137>/N->E'
                                        */
  real_T NE_Gain_ol;                   /* Expression: 0.1
                                        * Referenced by: '<S73>/N->E'
                                        */
  real_T degrad_Gain_ay;               /* Expression: pi/180
                                        * Referenced by: '<S73>/deg->rad'
                                        */
  real_T NE_Gain_kg;                   /* Expression: 1
                                        * Referenced by: '<S201>/N->E'
                                        */
  real_T Constant12_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T NE_Gain_i2;                   /* Expression: 1
                                        * Referenced by: '<S10>/N->E'
                                        */
  real_T NE_Gain_ig;                   /* Expression: 0.1
                                        * Referenced by: '<S138>/N->E'
                                        */
  real_T NE_Gain_h4;                   /* Expression: 0.1
                                        * Referenced by: '<S74>/N->E'
                                        */
  real_T degrad_Gain_kf;               /* Expression: pi/180
                                        * Referenced by: '<S74>/deg->rad'
                                        */
  real_T NE_Gain_b2;                   /* Expression: 1
                                        * Referenced by: '<S202>/N->E'
                                        */
  real_T Constant13_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T NE_Gain_ox;                   /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  real_T NE_Gain_or;                   /* Expression: 0.1
                                        * Referenced by: '<S139>/N->E'
                                        */
  real_T NE_Gain_a4;                   /* Expression: 0.1
                                        * Referenced by: '<S75>/N->E'
                                        */
  real_T degrad_Gain_gf;               /* Expression: pi/180
                                        * Referenced by: '<S75>/deg->rad'
                                        */
  real_T NE_Gain_ps;                   /* Expression: 1
                                        * Referenced by: '<S203>/N->E'
                                        */
  real_T Constant14_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T NE_Gain_aa;                   /* Expression: 1
                                        * Referenced by: '<S12>/N->E'
                                        */
  real_T NE_Gain_ea;                   /* Expression: 0.1
                                        * Referenced by: '<S140>/N->E'
                                        */
  real_T NE_Gain_oc;                   /* Expression: 0.1
                                        * Referenced by: '<S76>/N->E'
                                        */
  real_T degrad_Gain_o;                /* Expression: pi/180
                                        * Referenced by: '<S76>/deg->rad'
                                        */
  real_T NE_Gain_el;                   /* Expression: 1
                                        * Referenced by: '<S204>/N->E'
                                        */
  real_T Constant16_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant16'
                                        */
  real_T NE_Gain_fh;                   /* Expression: 1
                                        * Referenced by: '<S13>/N->E'
                                        */
  real_T NE_Gain_py;                   /* Expression: 0.1
                                        * Referenced by: '<S141>/N->E'
                                        */
  real_T NE_Gain_gf;                   /* Expression: 0.1
                                        * Referenced by: '<S77>/N->E'
                                        */
  real_T degrad_Gain_hr;               /* Expression: pi/180
                                        * Referenced by: '<S77>/deg->rad'
                                        */
  real_T NE_Gain_fv;                   /* Expression: 1
                                        * Referenced by: '<S205>/N->E'
                                        */
  real_T Constant17_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant17'
                                        */
  real_T NE_Gain_ns;                   /* Expression: 1
                                        * Referenced by: '<S14>/N->E'
                                        */
  real_T NE_Gain_fd;                   /* Expression: 0.1
                                        * Referenced by: '<S142>/N->E'
                                        */
  real_T NE_Gain_pm;                   /* Expression: 0.1
                                        * Referenced by: '<S78>/N->E'
                                        */
  real_T degrad_Gain_ou;               /* Expression: pi/180
                                        * Referenced by: '<S78>/deg->rad'
                                        */
  real_T NE_Gain_b3;                   /* Expression: 1
                                        * Referenced by: '<S206>/N->E'
                                        */
  real_T Constant18_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant18'
                                        */
  real_T NE_Gain_dj;                   /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */
  real_T NE_Gain_eg;                   /* Expression: 0.1
                                        * Referenced by: '<S143>/N->E'
                                        */
  real_T NE_Gain_pv;                   /* Expression: 0.1
                                        * Referenced by: '<S79>/N->E'
                                        */
  real_T degrad_Gain_hg;               /* Expression: pi/180
                                        * Referenced by: '<S79>/deg->rad'
                                        */
  real_T NE_Gain_o5;                   /* Expression: 1
                                        * Referenced by: '<S207>/N->E'
                                        */
  real_T Constant19_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant19'
                                        */
  real_T NE_Gain_ez;                   /* Expression: 1
                                        * Referenced by: '<S16>/N->E'
                                        */
  real_T NE_Gain_ee;                   /* Expression: 0.1
                                        * Referenced by: '<S144>/N->E'
                                        */
  real_T NE_Gain_ih;                   /* Expression: 0.1
                                        * Referenced by: '<S80>/N->E'
                                        */
  real_T degrad_Gain_d;                /* Expression: pi/180
                                        * Referenced by: '<S80>/deg->rad'
                                        */
  real_T NE_Gain_pm3;                  /* Expression: 1
                                        * Referenced by: '<S208>/N->E'
                                        */
  real_T Constant20_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant20'
                                        */
  real_T NE_Gain_fn;                   /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */
  real_T NE_Gain_jw;                   /* Expression: 0.1
                                        * Referenced by: '<S146>/N->E'
                                        */
  real_T NE_Gain_fx;                   /* Expression: 0.1
                                        * Referenced by: '<S82>/N->E'
                                        */
  real_T degrad_Gain_nu;               /* Expression: pi/180
                                        * Referenced by: '<S82>/deg->rad'
                                        */
  real_T NE_Gain_h2;                   /* Expression: 1
                                        * Referenced by: '<S210>/N->E'
                                        */
  real_T Constant21_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant21'
                                        */
  real_T NE_Gain_ek;                   /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */
  real_T NE_Gain_gjq;                  /* Expression: 0.1
                                        * Referenced by: '<S147>/N->E'
                                        */
  real_T NE_Gain_dk;                   /* Expression: 0.1
                                        * Referenced by: '<S83>/N->E'
                                        */
  real_T degrad_Gain_dc;               /* Expression: pi/180
                                        * Referenced by: '<S83>/deg->rad'
                                        */
  real_T NE_Gain_p5;                   /* Expression: 1
                                        * Referenced by: '<S211>/N->E'
                                        */
  real_T Constant22_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant22'
                                        */
  real_T NE_Gain_pl;                   /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */
  real_T NE_Gain_g2;                   /* Expression: 0.1
                                        * Referenced by: '<S148>/N->E'
                                        */
  real_T NE_Gain_cn;                   /* Expression: 0.1
                                        * Referenced by: '<S84>/N->E'
                                        */
  real_T degrad_Gain_c;                /* Expression: pi/180
                                        * Referenced by: '<S84>/deg->rad'
                                        */
  real_T NE_Gain_kii;                  /* Expression: 1
                                        * Referenced by: '<S212>/N->E'
                                        */
  real_T Constant23_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant23'
                                        */
  real_T NE_Gain_hz;                   /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */
  real_T NE_Gain_o4;                   /* Expression: 0.1
                                        * Referenced by: '<S149>/N->E'
                                        */
  real_T NE_Gain_jwh;                  /* Expression: 0.1
                                        * Referenced by: '<S85>/N->E'
                                        */
  real_T degrad_Gain_f;                /* Expression: pi/180
                                        * Referenced by: '<S85>/deg->rad'
                                        */
  real_T NE_Gain_by;                   /* Expression: 1
                                        * Referenced by: '<S213>/N->E'
                                        */
  real_T Constant24_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant24'
                                        */
  real_T NE_Gain_id;                   /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */
  real_T NE_Gain_li;                   /* Expression: 0.1
                                        * Referenced by: '<S150>/N->E'
                                        */
  real_T NE_Gain_ep;                   /* Expression: 0.1
                                        * Referenced by: '<S86>/N->E'
                                        */
  real_T degrad_Gain_m;                /* Expression: pi/180
                                        * Referenced by: '<S86>/deg->rad'
                                        */
  real_T NE_Gain_fg;                   /* Expression: 1
                                        * Referenced by: '<S214>/N->E'
                                        */
  real_T Constant25_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant25'
                                        */
  real_T NE_Gain_f0;                   /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */
  real_T NE_Gain_pn;                   /* Expression: 0.1
                                        * Referenced by: '<S151>/N->E'
                                        */
  real_T NE_Gain_oj;                   /* Expression: 0.1
                                        * Referenced by: '<S87>/N->E'
                                        */
  real_T degrad_Gain_mg;               /* Expression: pi/180
                                        * Referenced by: '<S87>/deg->rad'
                                        */
  real_T NE_Gain_mt;                   /* Expression: 1
                                        * Referenced by: '<S215>/N->E'
                                        */
  real_T Constant26_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant26'
                                        */
  real_T NE_Gain_epv;                  /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */
  real_T NE_Gain_lu;                   /* Expression: 0.1
                                        * Referenced by: '<S152>/N->E'
                                        */
  real_T NE_Gain_mk;                   /* Expression: 0.1
                                        * Referenced by: '<S88>/N->E'
                                        */
  real_T degrad_Gain_a5;               /* Expression: pi/180
                                        * Referenced by: '<S88>/deg->rad'
                                        */
  real_T NE_Gain_al;                   /* Expression: 1
                                        * Referenced by: '<S216>/N->E'
                                        */
  real_T Constant27_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant27'
                                        */
  real_T NE_Gain_eb;                   /* Expression: 1
                                        * Referenced by: '<S25>/N->E'
                                        */
  real_T NE_Gain_alq;                  /* Expression: 0.1
                                        * Referenced by: '<S153>/N->E'
                                        */
  real_T NE_Gain_b2m;                  /* Expression: 0.1
                                        * Referenced by: '<S89>/N->E'
                                        */
  real_T degrad_Gain_j;                /* Expression: pi/180
                                        * Referenced by: '<S89>/deg->rad'
                                        */
  real_T NE_Gain_oxs;                  /* Expression: 1
                                        * Referenced by: '<S217>/N->E'
                                        */
  real_T Constant28_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant28'
                                        */
  real_T NE_Gain_ec;                   /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */
  real_T NE_Gain_lm;                   /* Expression: 0.1
                                        * Referenced by: '<S154>/N->E'
                                        */
  real_T NE_Gain_oic;                  /* Expression: 0.1
                                        * Referenced by: '<S90>/N->E'
                                        */
  real_T degrad_Gain_dt;               /* Expression: pi/180
                                        * Referenced by: '<S90>/deg->rad'
                                        */
  real_T NE_Gain_jj;                   /* Expression: 1
                                        * Referenced by: '<S218>/N->E'
                                        */
  real_T Constant29_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant29'
                                        */
  real_T NE_Gain_br;                   /* Expression: 1
                                        * Referenced by: '<S27>/N->E'
                                        */
  real_T NE_Gain_kr;                   /* Expression: 0.1
                                        * Referenced by: '<S155>/N->E'
                                        */
  real_T NE_Gain_de;                   /* Expression: 0.1
                                        * Referenced by: '<S91>/N->E'
                                        */
  real_T degrad_Gain_ko;               /* Expression: pi/180
                                        * Referenced by: '<S91>/deg->rad'
                                        */
  real_T NE_Gain_kz;                   /* Expression: 1
                                        * Referenced by: '<S219>/N->E'
                                        */
  real_T Constant30_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant30'
                                        */
  real_T NE_Gain_cu;                   /* Expression: 1
                                        * Referenced by: '<S29>/N->E'
                                        */
  real_T NE_Gain_eu;                   /* Expression: 0.1
                                        * Referenced by: '<S157>/N->E'
                                        */
  real_T NE_Gain_ld;                   /* Expression: 0.1
                                        * Referenced by: '<S93>/N->E'
                                        */
  real_T degrad_Gain_pv;               /* Expression: pi/180
                                        * Referenced by: '<S93>/deg->rad'
                                        */
  real_T NE_Gain_hi;                   /* Expression: 1
                                        * Referenced by: '<S221>/N->E'
                                        */
  real_T Constant31_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant31'
                                        */
  real_T NE_Gain_gm;                   /* Expression: 1
                                        * Referenced by: '<S30>/N->E'
                                        */
  real_T NE_Gain_d4;                   /* Expression: 0.1
                                        * Referenced by: '<S158>/N->E'
                                        */
  real_T NE_Gain_fo;                   /* Expression: 0.1
                                        * Referenced by: '<S94>/N->E'
                                        */
  real_T degrad_Gain_ca;               /* Expression: pi/180
                                        * Referenced by: '<S94>/deg->rad'
                                        */
  real_T NE_Gain_ok;                   /* Expression: 1
                                        * Referenced by: '<S222>/N->E'
                                        */
  real_T Constant32_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant32'
                                        */
  real_T NE_Gain_l1;                   /* Expression: 1
                                        * Referenced by: '<S31>/N->E'
                                        */
  real_T NE_Gain_jjw;                  /* Expression: 0.1
                                        * Referenced by: '<S159>/N->E'
                                        */
  real_T NE_Gain_nv;                   /* Expression: 0.1
                                        * Referenced by: '<S95>/N->E'
                                        */
  real_T degrad_Gain_im;               /* Expression: pi/180
                                        * Referenced by: '<S95>/deg->rad'
                                        */
  real_T NE_Gain_ds;                   /* Expression: 1
                                        * Referenced by: '<S223>/N->E'
                                        */
  real_T Constant33_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant33'
                                        */
  real_T NE_Gain_jq;                   /* Expression: 1
                                        * Referenced by: '<S32>/N->E'
                                        */
  real_T NE_Gain_dq;                   /* Expression: 0.1
                                        * Referenced by: '<S160>/N->E'
                                        */
  real_T NE_Gain_p1;                   /* Expression: 0.1
                                        * Referenced by: '<S96>/N->E'
                                        */
  real_T degrad_Gain_hj;               /* Expression: pi/180
                                        * Referenced by: '<S96>/deg->rad'
                                        */
  real_T NE_Gain_ma;                   /* Expression: 1
                                        * Referenced by: '<S224>/N->E'
                                        */
  real_T Constant34_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant34'
                                        */
  real_T NE_Gain_kz2;                  /* Expression: 1
                                        * Referenced by: '<S33>/N->E'
                                        */
  real_T NE_Gain_ny;                   /* Expression: 0.1
                                        * Referenced by: '<S161>/N->E'
                                        */
  real_T NE_Gain_av;                   /* Expression: 0.1
                                        * Referenced by: '<S97>/N->E'
                                        */
  real_T degrad_Gain_fy;               /* Expression: pi/180
                                        * Referenced by: '<S97>/deg->rad'
                                        */
  real_T NE_Gain_kz5;                  /* Expression: 1
                                        * Referenced by: '<S225>/N->E'
                                        */
  real_T Constant35_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant35'
                                        */
  real_T NE_Gain_g0;                   /* Expression: 1
                                        * Referenced by: '<S34>/N->E'
                                        */
  real_T NE_Gain_mp;                   /* Expression: 0.1
                                        * Referenced by: '<S162>/N->E'
                                        */
  real_T NE_Gain_be;                   /* Expression: 0.1
                                        * Referenced by: '<S98>/N->E'
                                        */
  real_T degrad_Gain_hrs;              /* Expression: pi/180
                                        * Referenced by: '<S98>/deg->rad'
                                        */
  real_T NE_Gain_he;                   /* Expression: 1
                                        * Referenced by: '<S226>/N->E'
                                        */
  real_T Constant36_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant36'
                                        */
  real_T NE_Gain_ls;                   /* Expression: 1
                                        * Referenced by: '<S35>/N->E'
                                        */
  real_T NE_Gain_hes;                  /* Expression: 0.1
                                        * Referenced by: '<S163>/N->E'
                                        */
  real_T NE_Gain_ba;                   /* Expression: 0.1
                                        * Referenced by: '<S99>/N->E'
                                        */
  real_T degrad_Gain_hi;               /* Expression: pi/180
                                        * Referenced by: '<S99>/deg->rad'
                                        */
  real_T NE_Gain_k5;                   /* Expression: 1
                                        * Referenced by: '<S227>/N->E'
                                        */
  real_T Constant37_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant37'
                                        */
  real_T NE_Gain_h2z;                  /* Expression: 1
                                        * Referenced by: '<S36>/N->E'
                                        */
  real_T NE_Gain_ps3;                  /* Expression: 0.1
                                        * Referenced by: '<S164>/N->E'
                                        */
  real_T NE_Gain_jd;                   /* Expression: 0.1
                                        * Referenced by: '<S100>/N->E'
                                        */
  real_T degrad_Gain_ng;               /* Expression: pi/180
                                        * Referenced by: '<S100>/deg->rad'
                                        */
  real_T NE_Gain_dy;                   /* Expression: 1
                                        * Referenced by: '<S228>/N->E'
                                        */
  real_T Constant38_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant38'
                                        */
  real_T NE_Gain_pk;                   /* Expression: 1
                                        * Referenced by: '<S37>/N->E'
                                        */
  real_T NE_Gain_owd;                  /* Expression: 0.1
                                        * Referenced by: '<S165>/N->E'
                                        */
  real_T NE_Gain_bg;                   /* Expression: 0.1
                                        * Referenced by: '<S101>/N->E'
                                        */
  real_T degrad_Gain_fp;               /* Expression: pi/180
                                        * Referenced by: '<S101>/deg->rad'
                                        */
  real_T NE_Gain_cfw;                  /* Expression: 1
                                        * Referenced by: '<S229>/N->E'
                                        */
  real_T Constant39_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant39'
                                        */
  real_T NE_Gain_po;                   /* Expression: 1
                                        * Referenced by: '<S38>/N->E'
                                        */
  real_T NE_Gain_ne;                   /* Expression: 0.1
                                        * Referenced by: '<S166>/N->E'
                                        */
  real_T NE_Gain_nr;                   /* Expression: 0.1
                                        * Referenced by: '<S102>/N->E'
                                        */
  real_T degrad_Gain_o0;               /* Expression: pi/180
                                        * Referenced by: '<S102>/deg->rad'
                                        */
  real_T NE_Gain_liy;                  /* Expression: 1
                                        * Referenced by: '<S230>/N->E'
                                        */
  real_T Constant40_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant40'
                                        */
  real_T NE_Gain_hze;                  /* Expression: 1
                                        * Referenced by: '<S40>/N->E'
                                        */
  real_T NE_Gain_b2o;                  /* Expression: 0.1
                                        * Referenced by: '<S168>/N->E'
                                        */
  real_T NE_Gain_dv;                   /* Expression: 0.1
                                        * Referenced by: '<S104>/N->E'
                                        */
  real_T degrad_Gain_ly;               /* Expression: pi/180
                                        * Referenced by: '<S104>/deg->rad'
                                        */
  real_T NE_Gain_aak;                  /* Expression: 1
                                        * Referenced by: '<S232>/N->E'
                                        */
  real_T Constant41_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant41'
                                        */
  real_T NE_Gain_o3;                   /* Expression: 1
                                        * Referenced by: '<S41>/N->E'
                                        */
  real_T NE_Gain_fgg;                  /* Expression: 0.1
                                        * Referenced by: '<S169>/N->E'
                                        */
  real_T NE_Gain_bh;                   /* Expression: 0.1
                                        * Referenced by: '<S105>/N->E'
                                        */
  real_T degrad_Gain_fh;               /* Expression: pi/180
                                        * Referenced by: '<S105>/deg->rad'
                                        */
  real_T NE_Gain_il;                   /* Expression: 1
                                        * Referenced by: '<S233>/N->E'
                                        */
  real_T Constant42_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant42'
                                        */
  real_T NE_Gain_o2;                   /* Expression: 1
                                        * Referenced by: '<S42>/N->E'
                                        */
  real_T NE_Gain_h3;                   /* Expression: 0.1
                                        * Referenced by: '<S170>/N->E'
                                        */
  real_T NE_Gain_bv;                   /* Expression: 0.1
                                        * Referenced by: '<S106>/N->E'
                                        */
  real_T degrad_Gain_mr;               /* Expression: pi/180
                                        * Referenced by: '<S106>/deg->rad'
                                        */
  real_T NE_Gain_nl;                   /* Expression: 1
                                        * Referenced by: '<S234>/N->E'
                                        */
  real_T Constant43_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant43'
                                        */
  real_T NE_Gain_km;                   /* Expression: 1
                                        * Referenced by: '<S43>/N->E'
                                        */
  real_T NE_Gain_df;                   /* Expression: 0.1
                                        * Referenced by: '<S171>/N->E'
                                        */
  real_T NE_Gain_bj;                   /* Expression: 0.1
                                        * Referenced by: '<S107>/N->E'
                                        */
  real_T degrad_Gain_gm;               /* Expression: pi/180
                                        * Referenced by: '<S107>/deg->rad'
                                        */
  real_T NE_Gain_lq;                   /* Expression: 1
                                        * Referenced by: '<S235>/N->E'
                                        */
  real_T Constant44_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant44'
                                        */
  real_T NE_Gain_n3;                   /* Expression: 1
                                        * Referenced by: '<S44>/N->E'
                                        */
  real_T NE_Gain_io;                   /* Expression: 0.1
                                        * Referenced by: '<S172>/N->E'
                                        */
  real_T NE_Gain_bc;                   /* Expression: 0.1
                                        * Referenced by: '<S108>/N->E'
                                        */
  real_T degrad_Gain_e;                /* Expression: pi/180
                                        * Referenced by: '<S108>/deg->rad'
                                        */
  real_T NE_Gain_c4;                   /* Expression: 1
                                        * Referenced by: '<S236>/N->E'
                                        */
  real_T Constant15_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T NE_Gain_op;                   /* Expression: 1
                                        * Referenced by: '<S45>/N->E'
                                        */
  real_T NE_Gain_fa;                   /* Expression: 0.1
                                        * Referenced by: '<S173>/N->E'
                                        */
  real_T NE_Gain_pt;                   /* Expression: 0.1
                                        * Referenced by: '<S109>/N->E'
                                        */
  real_T degrad_Gain_eo;               /* Expression: pi/180
                                        * Referenced by: '<S109>/deg->rad'
                                        */
  real_T NE_Gain_pi;                   /* Expression: 1
                                        * Referenced by: '<S237>/N->E'
                                        */
  real_T Constant45_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant45'
                                        */
  real_T NE_Gain_p4;                   /* Expression: 1
                                        * Referenced by: '<S46>/N->E'
                                        */
  real_T NE_Gain_lw;                   /* Expression: 0.1
                                        * Referenced by: '<S174>/N->E'
                                        */
  real_T NE_Gain_ia;                   /* Expression: 0.1
                                        * Referenced by: '<S110>/N->E'
                                        */
  real_T degrad_Gain_b;                /* Expression: pi/180
                                        * Referenced by: '<S110>/deg->rad'
                                        */
  real_T NE_Gain_hd;                   /* Expression: 1
                                        * Referenced by: '<S238>/N->E'
                                        */
  real_T Constant46_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant46'
                                        */
  real_T NE_Gain_jh;                   /* Expression: 1
                                        * Referenced by: '<S47>/N->E'
                                        */
  real_T NE_Gain_gz;                   /* Expression: 0.1
                                        * Referenced by: '<S175>/N->E'
                                        */
  real_T NE_Gain_elc;                  /* Expression: 0.1
                                        * Referenced by: '<S111>/N->E'
                                        */
  real_T degrad_Gain_h1;               /* Expression: pi/180
                                        * Referenced by: '<S111>/deg->rad'
                                        */
  real_T NE_Gain_lk;                   /* Expression: 1
                                        * Referenced by: '<S239>/N->E'
                                        */
  real_T Constant47_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant47'
                                        */
  real_T NE_Gain_k0;                   /* Expression: 1
                                        * Referenced by: '<S48>/N->E'
                                        */
  real_T NE_Gain_i0;                   /* Expression: 0.1
                                        * Referenced by: '<S176>/N->E'
                                        */
  real_T NE_Gain_d1;                   /* Expression: 0.1
                                        * Referenced by: '<S112>/N->E'
                                        */
  real_T degrad_Gain_bn;               /* Expression: pi/180
                                        * Referenced by: '<S112>/deg->rad'
                                        */
  real_T NE_Gain_kt;                   /* Expression: 1
                                        * Referenced by: '<S240>/N->E'
                                        */
  real_T Constant48_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant48'
                                        */
  real_T NE_Gain_mh;                   /* Expression: 1
                                        * Referenced by: '<S49>/N->E'
                                        */
  real_T NE_Gain_i3;                   /* Expression: 0.1
                                        * Referenced by: '<S177>/N->E'
                                        */
  real_T NE_Gain_ili;                  /* Expression: 0.1
                                        * Referenced by: '<S113>/N->E'
                                        */
  real_T degrad_Gain_g4;               /* Expression: pi/180
                                        * Referenced by: '<S113>/deg->rad'
                                        */
  real_T NE_Gain_ke;                   /* Expression: 1
                                        * Referenced by: '<S241>/N->E'
                                        */
  real_T Constant49_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant49'
                                        */
  real_T NE_Gain_jyp;                  /* Expression: 1
                                        * Referenced by: '<S51>/N->E'
                                        */
  real_T NE_Gain_k5h;                  /* Expression: 0.1
                                        * Referenced by: '<S179>/N->E'
                                        */
  real_T NE_Gain_fmv;                  /* Expression: 0.1
                                        * Referenced by: '<S115>/N->E'
                                        */
  real_T degrad_Gain_dn;               /* Expression: pi/180
                                        * Referenced by: '<S115>/deg->rad'
                                        */
  real_T NE_Gain_nw;                   /* Expression: 1
                                        * Referenced by: '<S243>/N->E'
                                        */
  real_T Constant50_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant50'
                                        */
  real_T NE_Gain_c2;                   /* Expression: 1
                                        * Referenced by: '<S52>/N->E'
                                        */
  real_T NE_Gain_pvr;                  /* Expression: 0.1
                                        * Referenced by: '<S180>/N->E'
                                        */
  real_T NE_Gain_on;                   /* Expression: 0.1
                                        * Referenced by: '<S116>/N->E'
                                        */
  real_T degrad_Gain_gw;               /* Expression: pi/180
                                        * Referenced by: '<S116>/deg->rad'
                                        */
  real_T NE_Gain_nj3;                  /* Expression: 1
                                        * Referenced by: '<S244>/N->E'
                                        */
  real_T Constant51_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant51'
                                        */
  real_T NE_Gain_kri;                  /* Expression: 1
                                        * Referenced by: '<S53>/N->E'
                                        */
  real_T NE_Gain_ik;                   /* Expression: 0.1
                                        * Referenced by: '<S181>/N->E'
                                        */
  real_T NE_Gain_cs;                   /* Expression: 0.1
                                        * Referenced by: '<S117>/N->E'
                                        */
  real_T degrad_Gain_ff;               /* Expression: pi/180
                                        * Referenced by: '<S117>/deg->rad'
                                        */
  real_T NE_Gain_ga;                   /* Expression: 1
                                        * Referenced by: '<S245>/N->E'
                                        */
  real_T Constant52_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant52'
                                        */
  real_T NE_Gain_pb;                   /* Expression: 1
                                        * Referenced by: '<S54>/N->E'
                                        */
  real_T NE_Gain_jz;                   /* Expression: 0.1
                                        * Referenced by: '<S182>/N->E'
                                        */
  real_T NE_Gain_ezv;                  /* Expression: 0.1
                                        * Referenced by: '<S118>/N->E'
                                        */
  real_T degrad_Gain_dn3;              /* Expression: pi/180
                                        * Referenced by: '<S118>/deg->rad'
                                        */
  real_T NE_Gain_hzeg;                 /* Expression: 1
                                        * Referenced by: '<S246>/N->E'
                                        */
  real_T Constant53_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant53'
                                        */
  real_T NE_Gain_ku;                   /* Expression: 1
                                        * Referenced by: '<S55>/N->E'
                                        */
  real_T NE_Gain_krm;                  /* Expression: 0.1
                                        * Referenced by: '<S183>/N->E'
                                        */
  real_T NE_Gain_fnr;                  /* Expression: 0.1
                                        * Referenced by: '<S119>/N->E'
                                        */
  real_T degrad_Gain_kb;               /* Expression: pi/180
                                        * Referenced by: '<S119>/deg->rad'
                                        */
  real_T NE_Gain_ov;                   /* Expression: 1
                                        * Referenced by: '<S247>/N->E'
                                        */
  real_T Constant54_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant54'
                                        */
  real_T NE_Gain_o0;                   /* Expression: 1
                                        * Referenced by: '<S56>/N->E'
                                        */
  real_T NE_Gain_fc;                   /* Expression: 0.1
                                        * Referenced by: '<S184>/N->E'
                                        */
  real_T NE_Gain_dj2;                  /* Expression: 0.1
                                        * Referenced by: '<S120>/N->E'
                                        */
  real_T degrad_Gain_po;               /* Expression: pi/180
                                        * Referenced by: '<S120>/deg->rad'
                                        */
  real_T NE_Gain_as;                   /* Expression: 1
                                        * Referenced by: '<S248>/N->E'
                                        */
  real_T Constant55_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant55'
                                        */
  real_T NE_Gain_oxd;                  /* Expression: 1
                                        * Referenced by: '<S57>/N->E'
                                        */
  real_T NE_Gain_jf;                   /* Expression: 0.1
                                        * Referenced by: '<S185>/N->E'
                                        */
  real_T NE_Gain_bl;                   /* Expression: 0.1
                                        * Referenced by: '<S121>/N->E'
                                        */
  real_T degrad_Gain_eq;               /* Expression: pi/180
                                        * Referenced by: '<S121>/deg->rad'
                                        */
  real_T NE_Gain_pf;                   /* Expression: 1
                                        * Referenced by: '<S249>/N->E'
                                        */
  real_T Constant56_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant56'
                                        */
  real_T NE_Gain_ah;                   /* Expression: 1
                                        * Referenced by: '<S58>/N->E'
                                        */
  real_T NE_Gain_j4;                   /* Expression: 0.1
                                        * Referenced by: '<S186>/N->E'
                                        */
  real_T NE_Gain_jg;                   /* Expression: 0.1
                                        * Referenced by: '<S122>/N->E'
                                        */
  real_T degrad_Gain_p0;               /* Expression: pi/180
                                        * Referenced by: '<S122>/deg->rad'
                                        */
  real_T NE_Gain_mtx;                  /* Expression: 1
                                        * Referenced by: '<S250>/N->E'
                                        */
  real_T Constant57_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant57'
                                        */
  real_T NE_Gain_jv;                   /* Expression: 1
                                        * Referenced by: '<S59>/N->E'
                                        */
  real_T NE_Gain_lql;                  /* Expression: 0.1
                                        * Referenced by: '<S187>/N->E'
                                        */
  real_T NE_Gain_hj;                   /* Expression: 0.1
                                        * Referenced by: '<S123>/N->E'
                                        */
  real_T degrad_Gain_gv;               /* Expression: pi/180
                                        * Referenced by: '<S123>/deg->rad'
                                        */
  real_T NE_Gain_lku;                  /* Expression: 1
                                        * Referenced by: '<S251>/N->E'
                                        */
  real_T Constant58_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant58'
                                        */
  real_T NE_Gain_lsz;                  /* Expression: 1
                                        * Referenced by: '<S60>/N->E'
                                        */
  real_T NE_Gain_ch;                   /* Expression: 0.1
                                        * Referenced by: '<S188>/N->E'
                                        */
  real_T NE_Gain_m4;                   /* Expression: 0.1
                                        * Referenced by: '<S124>/N->E'
                                        */
  real_T degrad_Gain_nc;               /* Expression: pi/180
                                        * Referenced by: '<S124>/deg->rad'
                                        */
  real_T NE_Gain_f2;                   /* Expression: 1
                                        * Referenced by: '<S252>/N->E'
                                        */
  real_T Constant59_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0]
                                        * Referenced by: '<Root>/Constant59'
                                        */
  real_T NE_Gain_kq;                   /* Expression: 1
                                        * Referenced by: '<S62>/N->E'
                                        */
  real_T NE_Gain_ej;                   /* Expression: 0.1
                                        * Referenced by: '<S190>/N->E'
                                        */
  real_T NE_Gain_h1;                   /* Expression: 0.1
                                        * Referenced by: '<S126>/N->E'
                                        */
  real_T degrad_Gain_hy;               /* Expression: pi/180
                                        * Referenced by: '<S126>/deg->rad'
                                        */
  real_T NE_Gain_du;                   /* Expression: 1
                                        * Referenced by: '<S254>/N->E'
                                        */
  real_T Constant60_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0]
                                        * Referenced by: '<Root>/Constant60'
                                        */
  real_T NE_Gain_ks;                   /* Expression: 1
                                        * Referenced by: '<S63>/N->E'
                                        */
  real_T NE_Gain_js;                   /* Expression: 0.1
                                        * Referenced by: '<S191>/N->E'
                                        */
  real_T NE_Gain_k0t;                  /* Expression: 0.1
                                        * Referenced by: '<S127>/N->E'
                                        */
  real_T degrad_Gain_lm;               /* Expression: pi/180
                                        * Referenced by: '<S127>/deg->rad'
                                        */
  real_T NE_Gain_l3;                   /* Expression: 1
                                        * Referenced by: '<S255>/N->E'
                                        */
  real_T Constant61_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0]
                                        * Referenced by: '<Root>/Constant61'
                                        */
  real_T NE_Gain_cp;                   /* Expression: 1
                                        * Referenced by: '<S64>/N->E'
                                        */
  real_T NE_Gain_j0;                   /* Expression: 0.1
                                        * Referenced by: '<S192>/N->E'
                                        */
  real_T NE_Gain_dja;                  /* Expression: 0.1
                                        * Referenced by: '<S128>/N->E'
                                        */
  real_T degrad_Gain_l2;               /* Expression: pi/180
                                        * Referenced by: '<S128>/deg->rad'
                                        */
  real_T NE_Gain_l0;                   /* Expression: 1
                                        * Referenced by: '<S256>/N->E'
                                        */
  real_T Constant62_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0]
                                        * Referenced by: '<Root>/Constant62'
                                        */
  real_T NE_Gain_br1;                  /* Expression: 1
                                        * Referenced by: '<S65>/N->E'
                                        */
  real_T NE_Gain_ovg;                  /* Expression: 0.1
                                        * Referenced by: '<S193>/N->E'
                                        */
  real_T NE_Gain_oy;                   /* Expression: 0.1
                                        * Referenced by: '<S129>/N->E'
                                        */
  real_T degrad_Gain_hl;               /* Expression: pi/180
                                        * Referenced by: '<S129>/deg->rad'
                                        */
  real_T NE_Gain_bo;                   /* Expression: 1
                                        * Referenced by: '<S257>/N->E'
                                        */
  real_T Constant63_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0]
                                        * Referenced by: '<Root>/Constant63'
                                        */
  real_T NE_Gain_dp;                   /* Expression: 1
                                        * Referenced by: '<S66>/N->E'
                                        */
  real_T NE_Gain_gr;                   /* Expression: 0.1
                                        * Referenced by: '<S194>/N->E'
                                        */
  real_T NE_Gain_dq5;                  /* Expression: 0.1
                                        * Referenced by: '<S130>/N->E'
                                        */
  real_T degrad_Gain_aj;               /* Expression: pi/180
                                        * Referenced by: '<S130>/deg->rad'
                                        */
  real_T NE_Gain_i0h;                  /* Expression: 1
                                        * Referenced by: '<S258>/N->E'
                                        */
  real_T Constant64_Value[64];         /* Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
                                        * Referenced by: '<Root>/Constant64'
                                        */
  real_T NE_Gain_dfu;                  /* Expression: 0.001
                                        * Referenced by: '<S2>/N->E'
                                        */
  real_T EN_Gain;                      /* Expression: 1
                                        * Referenced by: '<S1>/E->N'
                                        */
  real_T EN_Gain_b;                    /* Expression: 1
                                        * Referenced by: '<S4>/E->N'
                                        */
  uint8_T Track_ID_1_Value;            /* Computed Parameter: Track_ID_1_Value
                                        * Referenced by: '<Root>/Track_ID_1'
                                        */
  uint8_T Track_ID_2_Value;            /* Computed Parameter: Track_ID_2_Value
                                        * Referenced by: '<Root>/Track_ID_2'
                                        */
  uint8_T Track_ID_3_Value;            /* Computed Parameter: Track_ID_3_Value
                                        * Referenced by: '<Root>/Track_ID_3'
                                        */
  uint8_T Track_ID_4_Value;            /* Computed Parameter: Track_ID_4_Value
                                        * Referenced by: '<Root>/Track_ID_4'
                                        */
  uint8_T Track_ID_5_Value;            /* Computed Parameter: Track_ID_5_Value
                                        * Referenced by: '<Root>/Track_ID_5'
                                        */
  uint8_T Track_ID_6_Value;            /* Computed Parameter: Track_ID_6_Value
                                        * Referenced by: '<Root>/Track_ID_6'
                                        */
  uint8_T Track_ID_7_Value;            /* Computed Parameter: Track_ID_7_Value
                                        * Referenced by: '<Root>/Track_ID_7'
                                        */
  uint8_T Track_ID_8_Value;            /* Computed Parameter: Track_ID_8_Value
                                        * Referenced by: '<Root>/Track_ID_8'
                                        */
  uint8_T Track_ID_9_Value;            /* Computed Parameter: Track_ID_9_Value
                                        * Referenced by: '<Root>/Track_ID_9'
                                        */
  uint8_T Track_ID_10_Value;           /* Computed Parameter: Track_ID_10_Value
                                        * Referenced by: '<Root>/Track_ID_10'
                                        */
  uint8_T Track_ID_11_Value;           /* Computed Parameter: Track_ID_11_Value
                                        * Referenced by: '<Root>/Track_ID_11'
                                        */
  uint8_T Track_ID_12_Value;           /* Computed Parameter: Track_ID_12_Value
                                        * Referenced by: '<Root>/Track_ID_12'
                                        */
  uint8_T Track_ID_13_Value;           /* Computed Parameter: Track_ID_13_Value
                                        * Referenced by: '<Root>/Track_ID_13'
                                        */
  uint8_T Track_ID_14_Value;           /* Computed Parameter: Track_ID_14_Value
                                        * Referenced by: '<Root>/Track_ID_14'
                                        */
  uint8_T Track_ID_15_Value;           /* Computed Parameter: Track_ID_15_Value
                                        * Referenced by: '<Root>/Track_ID_15'
                                        */
  uint8_T Track_ID_16_Value;           /* Computed Parameter: Track_ID_16_Value
                                        * Referenced by: '<Root>/Track_ID_16'
                                        */
  uint8_T Track_ID_17_Value;           /* Computed Parameter: Track_ID_17_Value
                                        * Referenced by: '<Root>/Track_ID_17'
                                        */
  uint8_T Track_ID_18_Value;           /* Computed Parameter: Track_ID_18_Value
                                        * Referenced by: '<Root>/Track_ID_18'
                                        */
  uint8_T Track_ID_19_Value;           /* Computed Parameter: Track_ID_19_Value
                                        * Referenced by: '<Root>/Track_ID_19'
                                        */
  uint8_T Track_ID_20_Value;           /* Computed Parameter: Track_ID_20_Value
                                        * Referenced by: '<Root>/Track_ID_20'
                                        */
  uint8_T Track_ID_21_Value;           /* Computed Parameter: Track_ID_21_Value
                                        * Referenced by: '<Root>/Track_ID_21'
                                        */
  uint8_T Track_ID_22_Value;           /* Computed Parameter: Track_ID_22_Value
                                        * Referenced by: '<Root>/Track_ID_22'
                                        */
  uint8_T Track_ID_23_Value;           /* Computed Parameter: Track_ID_23_Value
                                        * Referenced by: '<Root>/Track_ID_23'
                                        */
  uint8_T Track_ID_24_Value;           /* Computed Parameter: Track_ID_24_Value
                                        * Referenced by: '<Root>/Track_ID_24'
                                        */
  uint8_T Track_ID_25_Value;           /* Computed Parameter: Track_ID_25_Value
                                        * Referenced by: '<Root>/Track_ID_25'
                                        */
  uint8_T Track_ID_26_Value;           /* Computed Parameter: Track_ID_26_Value
                                        * Referenced by: '<Root>/Track_ID_26'
                                        */
  uint8_T Track_ID_27_Value;           /* Computed Parameter: Track_ID_27_Value
                                        * Referenced by: '<Root>/Track_ID_27'
                                        */
  uint8_T Track_ID_28_Value;           /* Computed Parameter: Track_ID_28_Value
                                        * Referenced by: '<Root>/Track_ID_28'
                                        */
  uint8_T Track_ID_29_Value;           /* Computed Parameter: Track_ID_29_Value
                                        * Referenced by: '<Root>/Track_ID_29'
                                        */
  uint8_T Track_ID_30_Value;           /* Computed Parameter: Track_ID_30_Value
                                        * Referenced by: '<Root>/Track_ID_30'
                                        */
  uint8_T Track_ID_31_Value;           /* Computed Parameter: Track_ID_31_Value
                                        * Referenced by: '<Root>/Track_ID_31'
                                        */
  uint8_T Track_ID_32_Value;           /* Computed Parameter: Track_ID_32_Value
                                        * Referenced by: '<Root>/Track_ID_32'
                                        */
  uint8_T Track_ID_33_Value;           /* Computed Parameter: Track_ID_33_Value
                                        * Referenced by: '<Root>/Track_ID_33'
                                        */
  uint8_T Track_ID_34_Value;           /* Computed Parameter: Track_ID_34_Value
                                        * Referenced by: '<Root>/Track_ID_34'
                                        */
  uint8_T Track_ID_35_Value;           /* Computed Parameter: Track_ID_35_Value
                                        * Referenced by: '<Root>/Track_ID_35'
                                        */
  uint8_T Track_ID_36_Value;           /* Computed Parameter: Track_ID_36_Value
                                        * Referenced by: '<Root>/Track_ID_36'
                                        */
  uint8_T Track_ID_37_Value;           /* Computed Parameter: Track_ID_37_Value
                                        * Referenced by: '<Root>/Track_ID_37'
                                        */
  uint8_T Track_ID_38_Value;           /* Computed Parameter: Track_ID_38_Value
                                        * Referenced by: '<Root>/Track_ID_38'
                                        */
  uint8_T Track_ID_39_Value;           /* Computed Parameter: Track_ID_39_Value
                                        * Referenced by: '<Root>/Track_ID_39'
                                        */
  uint8_T Track_ID_40_Value;           /* Computed Parameter: Track_ID_40_Value
                                        * Referenced by: '<Root>/Track_ID_40'
                                        */
  uint8_T Track_ID_41_Value;           /* Computed Parameter: Track_ID_41_Value
                                        * Referenced by: '<Root>/Track_ID_41'
                                        */
  uint8_T Track_ID_42_Value;           /* Computed Parameter: Track_ID_42_Value
                                        * Referenced by: '<Root>/Track_ID_42'
                                        */
  uint8_T Track_ID_43_Value;           /* Computed Parameter: Track_ID_43_Value
                                        * Referenced by: '<Root>/Track_ID_43'
                                        */
  uint8_T Track_ID_44_Value;           /* Computed Parameter: Track_ID_44_Value
                                        * Referenced by: '<Root>/Track_ID_44'
                                        */
  uint8_T Track_ID_45_Value;           /* Computed Parameter: Track_ID_45_Value
                                        * Referenced by: '<Root>/Track_ID_45'
                                        */
  uint8_T Track_ID_46_Value;           /* Computed Parameter: Track_ID_46_Value
                                        * Referenced by: '<Root>/Track_ID_46'
                                        */
  uint8_T Track_ID_47_Value;           /* Computed Parameter: Track_ID_47_Value
                                        * Referenced by: '<Root>/Track_ID_47'
                                        */
  uint8_T Track_ID_48_Value;           /* Computed Parameter: Track_ID_48_Value
                                        * Referenced by: '<Root>/Track_ID_48'
                                        */
  uint8_T Track_ID_49_Value;           /* Computed Parameter: Track_ID_49_Value
                                        * Referenced by: '<Root>/Track_ID_49'
                                        */
  uint8_T Track_ID_50_Value;           /* Computed Parameter: Track_ID_50_Value
                                        * Referenced by: '<Root>/Track_ID_50'
                                        */
  uint8_T Track_ID_51_Value;           /* Computed Parameter: Track_ID_51_Value
                                        * Referenced by: '<Root>/Track_ID_51'
                                        */
  uint8_T Track_ID_52_Value;           /* Computed Parameter: Track_ID_52_Value
                                        * Referenced by: '<Root>/Track_ID_52'
                                        */
  uint8_T Track_ID_53_Value;           /* Computed Parameter: Track_ID_53_Value
                                        * Referenced by: '<Root>/Track_ID_53'
                                        */
  uint8_T Track_ID_54_Value;           /* Computed Parameter: Track_ID_54_Value
                                        * Referenced by: '<Root>/Track_ID_54'
                                        */
  uint8_T Track_ID_55_Value;           /* Computed Parameter: Track_ID_55_Value
                                        * Referenced by: '<Root>/Track_ID_55'
                                        */
  uint8_T Track_ID_56_Value;           /* Computed Parameter: Track_ID_56_Value
                                        * Referenced by: '<Root>/Track_ID_56'
                                        */
  uint8_T Track_ID_57_Value;           /* Computed Parameter: Track_ID_57_Value
                                        * Referenced by: '<Root>/Track_ID_57'
                                        */
  uint8_T Track_ID_58_Value;           /* Computed Parameter: Track_ID_58_Value
                                        * Referenced by: '<Root>/Track_ID_58'
                                        */
  uint8_T Track_ID_59_Value;           /* Computed Parameter: Track_ID_59_Value
                                        * Referenced by: '<Root>/Track_ID_59'
                                        */
  uint8_T Track_ID_60_Value;           /* Computed Parameter: Track_ID_60_Value
                                        * Referenced by: '<Root>/Track_ID_60'
                                        */
  uint8_T Track_ID_61_Value;           /* Computed Parameter: Track_ID_61_Value
                                        * Referenced by: '<Root>/Track_ID_61'
                                        */
  uint8_T Track_ID_62_Value;           /* Computed Parameter: Track_ID_62_Value
                                        * Referenced by: '<Root>/Track_ID_62'
                                        */
  uint8_T Track_ID_63_Value;           /* Computed Parameter: Track_ID_63_Value
                                        * Referenced by: '<Root>/Track_ID_63'
                                        */
  uint8_T Track_ID_64_Value;           /* Computed Parameter: Track_ID_64_Value
                                        * Referenced by: '<Root>/Track_ID_64'
                                        */
  uint8_T Switch_Threshold;            /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S263>/Switch'
                                        */
  boolean_T Memory_X0;                 /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S263>/Memory'
                                        */
  uint8_T NE_Gain_aw;                  /* Computed Parameter: NE_Gain_aw
                                        * Referenced by: '<S3>/N->E'
                                        */
  uint8_T EN_Gain_l;                   /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S5>/E->N'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ESR_CoorAlig_Fcn_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_P;

/* Block signals (auto storage) */
extern B_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_B;

/* Block states (auto storage) */
extern DW_ESR_CoorAlig_Fcn_T ESR_CoorAlig_Fcn_DW;

/* Model entry point functions */
extern void ESR_CoorAlig_Fcn_initialize(void);
extern void ESR_CoorAlig_Fcn_step(void);
extern void ESR_CoorAlig_Fcn_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ESR_CoorAlig_Fcn_T *const ESR_CoorAlig_Fcn_M;

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
 * '<Root>' : 'ESR_CoorAlig_Fcn'
 * '<S1>'   : 'ESR_CoorAlig_Fcn/Data_Cov_ESR_Data[64X4]'
 * '<S2>'   : 'ESR_CoorAlig_Fcn/Data_Cov_ESR_RxTime'
 * '<S3>'   : 'ESR_CoorAlig_Fcn/Data_Cov_ESR_Trigger'
 * '<S4>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Global_ESR_RxTime'
 * '<S5>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Global_Trigger_ESR'
 * '<S6>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_1'
 * '<S7>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_10'
 * '<S8>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_11'
 * '<S9>'   : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_12'
 * '<S10>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_13'
 * '<S11>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_14'
 * '<S12>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_15'
 * '<S13>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_16'
 * '<S14>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_17'
 * '<S15>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_18'
 * '<S16>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_19'
 * '<S17>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_2'
 * '<S18>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_20'
 * '<S19>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_21'
 * '<S20>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_22'
 * '<S21>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_23'
 * '<S22>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_24'
 * '<S23>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_25'
 * '<S24>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_26'
 * '<S25>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_27'
 * '<S26>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_28'
 * '<S27>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_29'
 * '<S28>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_3'
 * '<S29>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_30'
 * '<S30>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_31'
 * '<S31>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_32'
 * '<S32>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_33'
 * '<S33>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_34'
 * '<S34>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_35'
 * '<S35>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_36'
 * '<S36>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_37'
 * '<S37>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_38'
 * '<S38>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_39'
 * '<S39>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_4'
 * '<S40>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_40'
 * '<S41>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_41'
 * '<S42>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_42'
 * '<S43>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_43'
 * '<S44>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_44'
 * '<S45>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_45'
 * '<S46>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_46'
 * '<S47>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_47'
 * '<S48>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_48'
 * '<S49>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_49'
 * '<S50>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_5'
 * '<S51>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_50'
 * '<S52>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_51'
 * '<S53>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_52'
 * '<S54>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_53'
 * '<S55>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_54'
 * '<S56>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_55'
 * '<S57>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_56'
 * '<S58>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_57'
 * '<S59>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_58'
 * '<S60>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_59'
 * '<S61>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_6'
 * '<S62>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_60'
 * '<S63>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_61'
 * '<S64>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_62'
 * '<S65>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_63'
 * '<S66>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_64'
 * '<S67>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_7'
 * '<S68>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_8'
 * '<S69>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_ID_9'
 * '<S70>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_1'
 * '<S71>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_10'
 * '<S72>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_11'
 * '<S73>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_12'
 * '<S74>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_13'
 * '<S75>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_14'
 * '<S76>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_15'
 * '<S77>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_16'
 * '<S78>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_17'
 * '<S79>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_18'
 * '<S80>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_19'
 * '<S81>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_2'
 * '<S82>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_20'
 * '<S83>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_21'
 * '<S84>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_22'
 * '<S85>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_23'
 * '<S86>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_24'
 * '<S87>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_25'
 * '<S88>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_26'
 * '<S89>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_27'
 * '<S90>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_28'
 * '<S91>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_29'
 * '<S92>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_3'
 * '<S93>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_30'
 * '<S94>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_31'
 * '<S95>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_32'
 * '<S96>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_33'
 * '<S97>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_34'
 * '<S98>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_35'
 * '<S99>'  : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_36'
 * '<S100>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_37'
 * '<S101>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_38'
 * '<S102>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_39'
 * '<S103>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_4'
 * '<S104>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_40'
 * '<S105>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_41'
 * '<S106>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_42'
 * '<S107>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_43'
 * '<S108>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_44'
 * '<S109>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_45'
 * '<S110>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_46'
 * '<S111>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_47'
 * '<S112>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_48'
 * '<S113>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_49'
 * '<S114>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_5'
 * '<S115>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_50'
 * '<S116>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_51'
 * '<S117>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_52'
 * '<S118>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_53'
 * '<S119>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_54'
 * '<S120>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_55'
 * '<S121>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_56'
 * '<S122>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_57'
 * '<S123>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_58'
 * '<S124>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_59'
 * '<S125>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_6'
 * '<S126>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_60'
 * '<S127>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_61'
 * '<S128>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_62'
 * '<S129>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_63'
 * '<S130>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_64'
 * '<S131>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_7'
 * '<S132>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_8'
 * '<S133>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_ANGLE_9'
 * '<S134>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_1'
 * '<S135>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_10'
 * '<S136>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_11'
 * '<S137>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_12'
 * '<S138>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_13'
 * '<S139>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_14'
 * '<S140>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_15'
 * '<S141>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_16'
 * '<S142>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_17'
 * '<S143>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_18'
 * '<S144>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_19'
 * '<S145>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_2'
 * '<S146>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_20'
 * '<S147>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_21'
 * '<S148>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_22'
 * '<S149>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_23'
 * '<S150>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_24'
 * '<S151>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_25'
 * '<S152>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_26'
 * '<S153>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_27'
 * '<S154>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_28'
 * '<S155>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_29'
 * '<S156>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_3'
 * '<S157>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_30'
 * '<S158>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_31'
 * '<S159>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_32'
 * '<S160>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_33'
 * '<S161>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_34'
 * '<S162>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_35'
 * '<S163>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_36'
 * '<S164>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_37'
 * '<S165>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_38'
 * '<S166>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_39'
 * '<S167>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_4'
 * '<S168>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_40'
 * '<S169>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_41'
 * '<S170>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_42'
 * '<S171>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_43'
 * '<S172>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_44'
 * '<S173>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_45'
 * '<S174>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_46'
 * '<S175>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_47'
 * '<S176>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_48'
 * '<S177>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_49'
 * '<S178>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_5'
 * '<S179>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_50'
 * '<S180>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_51'
 * '<S181>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_52'
 * '<S182>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_53'
 * '<S183>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_54'
 * '<S184>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_55'
 * '<S185>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_56'
 * '<S186>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_57'
 * '<S187>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_58'
 * '<S188>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_59'
 * '<S189>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_6'
 * '<S190>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_60'
 * '<S191>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_61'
 * '<S192>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_62'
 * '<S193>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_63'
 * '<S194>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_64'
 * '<S195>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_7'
 * '<S196>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_8'
 * '<S197>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_RANGE_9'
 * '<S198>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_1'
 * '<S199>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_10'
 * '<S200>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_11'
 * '<S201>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_12'
 * '<S202>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_13'
 * '<S203>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_14'
 * '<S204>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_15'
 * '<S205>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_16'
 * '<S206>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_17'
 * '<S207>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_18'
 * '<S208>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_19'
 * '<S209>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_2'
 * '<S210>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_20'
 * '<S211>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_21'
 * '<S212>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_22'
 * '<S213>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_23'
 * '<S214>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_24'
 * '<S215>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_25'
 * '<S216>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_26'
 * '<S217>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_27'
 * '<S218>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_28'
 * '<S219>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_29'
 * '<S220>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_3'
 * '<S221>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_30'
 * '<S222>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_31'
 * '<S223>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_32'
 * '<S224>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_33'
 * '<S225>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_34'
 * '<S226>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_35'
 * '<S227>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_36'
 * '<S228>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_37'
 * '<S229>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_38'
 * '<S230>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_39'
 * '<S231>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_4'
 * '<S232>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_40'
 * '<S233>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_41'
 * '<S234>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_42'
 * '<S235>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_43'
 * '<S236>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_44'
 * '<S237>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_45'
 * '<S238>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_46'
 * '<S239>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_47'
 * '<S240>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_48'
 * '<S241>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_49'
 * '<S242>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_5'
 * '<S243>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_50'
 * '<S244>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_51'
 * '<S245>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_52'
 * '<S246>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_53'
 * '<S247>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_54'
 * '<S248>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_55'
 * '<S249>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_56'
 * '<S250>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_57'
 * '<S251>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_58'
 * '<S252>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_59'
 * '<S253>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_6'
 * '<S254>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_60'
 * '<S255>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_61'
 * '<S256>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_62'
 * '<S257>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_63'
 * '<S258>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_64'
 * '<S259>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_7'
 * '<S260>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_8'
 * '<S261>' : 'ESR_CoorAlig_Fcn/Data_Cov_Track_TRACK_STATUS_9'
 * '<S262>' : 'ESR_CoorAlig_Fcn/ESR_Data_Collect'
 * '<S263>' : 'ESR_CoorAlig_Fcn/Trigger_Gen'
 * '<S264>' : 'ESR_CoorAlig_Fcn/ESR_Data_Collect/TemporalAligFront'
 * '<S265>' : 'ESR_CoorAlig_Fcn/Trigger_Gen/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_ESR_CoorAlig_Fcn_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
