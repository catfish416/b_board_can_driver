/*
 * File: EPM_Ln_ObjGenFcn_data.c
 *
 * Code generated for Simulink model 'EPM_Ln_ObjGenFcn'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Mon May 08 17:28:08 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPM_Ln_ObjGenFcn.h"
#include "EPM_Ln_ObjGenFcn_private.h"

/* Block parameters (auto storage) */
P_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_P = {
  3.088,                               /* Expression: 3.088
                                        * Referenced by: '<S254>/WheelBase'
                                        */
  17.5,                                /* Expression: 17.5
                                        * Referenced by: '<S254>/SteerRatio'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S262>/Constant1'
                                        */
  -3.6,                                /* Expression: -3.6
                                        * Referenced by: '<S262>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S225>/N->E'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S17>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S38>/N->E'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S12>/E->N'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S41>/N->E'
                                        */
  0.032,                               /* Expression: 0.032
                                        * Referenced by: '<S14>/Saturation'
                                        */
  -0.032,                              /* Expression: -0.032
                                        * Referenced by: '<S14>/Saturation'
                                        */
  1.0235414534288639E+6,               /* Expression: 1/9.77e-007
                                        * Referenced by: '<S14>/E->N'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S42>/N->E'
                                        */
  0.000122,                            /* Expression: 0.000122
                                        * Referenced by: '<S15>/Saturation'
                                        */
  -0.000122,                           /* Expression: -0.000122
                                        * Referenced by: '<S15>/Saturation'
                                        */
  2.6843545599725562E+8,               /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S15>/E->N'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S40>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S13>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S13>/Saturation'
                                        */
  1024.0,                              /* Expression: 1/0.0009765625
                                        * Referenced by: '<S13>/E->N'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S232>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S16>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S16>/Saturation'
                                        */
  2.0,                                 /* Expression: 1/0.5
                                        * Referenced by: '<S16>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S226>/N->E'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S34>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S34>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S39>/N->E'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S29>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S29>/E->N'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S43>/N->E'
                                        */
  0.032,                               /* Expression: 0.032
                                        * Referenced by: '<S31>/Saturation'
                                        */
  -0.032,                              /* Expression: -0.032
                                        * Referenced by: '<S31>/Saturation'
                                        */
  1.0235414534288639E+6,               /* Expression: 1/9.77e-007
                                        * Referenced by: '<S31>/E->N'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S44>/N->E'
                                        */
  0.000122,                            /* Expression: 0.000122
                                        * Referenced by: '<S32>/Saturation'
                                        */
  -0.000122,                           /* Expression: -0.000122
                                        * Referenced by: '<S32>/Saturation'
                                        */
  2.6843545599725562E+8,               /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S32>/E->N'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S45>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S30>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S30>/Saturation'
                                        */
  1024.0,                              /* Expression: 1/0.0009765625
                                        * Referenced by: '<S30>/E->N'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S233>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S33>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S33>/Saturation'
                                        */
  2.0,                                 /* Expression: 1/0.5
                                        * Referenced by: '<S33>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S227>/N->E'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S23>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S23>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S67>/N->E'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S19>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S19>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S19>/E->N'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S69>/N->E'
                                        */
  0.032,                               /* Expression: 0.032
                                        * Referenced by: '<S21>/Saturation'
                                        */
  -0.032,                              /* Expression: -0.032
                                        * Referenced by: '<S21>/Saturation'
                                        */
  1.0235414534288639E+6,               /* Expression: 1/9.77e-007
                                        * Referenced by: '<S21>/E->N'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S70>/N->E'
                                        */
  0.000122,                            /* Expression: 0.000122
                                        * Referenced by: '<S22>/Saturation'
                                        */
  -0.000122,                           /* Expression: -0.000122
                                        * Referenced by: '<S22>/Saturation'
                                        */
  2.6843545599725562E+8,               /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S22>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S228>/N->E'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S28>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S28>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S72>/N->E'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S24>/Saturation'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S24>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S24>/E->N'
                                        */
  9.77E-7,                             /* Expression: 9.77e-7
                                        * Referenced by: '<S73>/N->E'
                                        */
  0.032,                               /* Expression: 0.032
                                        * Referenced by: '<S26>/Saturation'
                                        */
  -0.032,                              /* Expression: -0.032
                                        * Referenced by: '<S26>/Saturation'
                                        */
  1.0235414534288639E+6,               /* Expression: 1/9.77e-007
                                        * Referenced by: '<S26>/E->N'
                                        */
  3.7252902985E-9,                     /* Expression: 3.7252902985e-009
                                        * Referenced by: '<S74>/N->E'
                                        */
  0.000122,                            /* Expression: 0.000122
                                        * Referenced by: '<S27>/Saturation'
                                        */
  -0.000122,                           /* Expression: -0.000122
                                        * Referenced by: '<S27>/Saturation'
                                        */
  2.6843545599725562E+8,               /* Expression: 1/3.7252902985e-009
                                        * Referenced by: '<S27>/E->N'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S68>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S20>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S20>/Saturation'
                                        */
  1024.0,                              /* Expression: 1/0.0009765625
                                        * Referenced by: '<S20>/E->N'
                                        */
  0.0009765625,                        /* Expression: 0.0009765625
                                        * Referenced by: '<S71>/N->E'
                                        */
  0.357,                               /* Expression: 0.357
                                        * Referenced by: '<S25>/Saturation'
                                        */
  -0.357,                              /* Expression: -0.357
                                        * Referenced by: '<S25>/Saturation'
                                        */
  1024.0,                              /* Expression: 1/0.0009765625
                                        * Referenced by: '<S25>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S230>/N->E'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S18>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S18>/E->N'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S231>/N->E'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S35>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S35>/E->N'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S195>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S150>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S75>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S170>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S130>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S55>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S160>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S120>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S140>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S85>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S215>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S185>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S205>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S197>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S152>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S77>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S172>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S132>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S57>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S162>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S122>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S142>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S87>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S217>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S187>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S207>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S198>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S153>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S78>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S173>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S133>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S58>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S163>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S123>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S143>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S88>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S218>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S188>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S208>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S199>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S154>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S79>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S174>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S134>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S59>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S164>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S124>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S144>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S89>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S219>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S189>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S209>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S200>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S155>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S80>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S175>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S135>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S60>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S165>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S125>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S145>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S90>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S220>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S190>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S210>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S201>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S156>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S81>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S176>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S136>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S61>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S166>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S126>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S146>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S91>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S221>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S191>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S211>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S202>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S157>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S82>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S177>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S137>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S62>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S167>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S127>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S147>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S92>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S222>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S192>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S212>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S203>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S10>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S158>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S83>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S178>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S138>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S63>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S168>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S128>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S148>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S93>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S223>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S193>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S213>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S204>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S159>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S84>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S179>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S139>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S64>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S169>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S129>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S149>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S94>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S224>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S194>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S214>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S196>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S151>/N->E'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<S76>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S171>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S131>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S56>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S161>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S121>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S141>/N->E'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S86>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S216>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S186>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S206>/N->E'
                                        */
  3.2,                                 /* Expression: 3.2
                                        * Referenced by: '<S254>/Constant9'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S262>/Switch'
                                        */
  4.2,                                 /* Expression: 4.2
                                        * Referenced by: '<S254>/Constant10'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S254>/Constant11'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S254>/Constant1'
                                        */
  14.0,                                /* Expression: 14
                                        * Referenced by: '<S254>/Constant3'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S104>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S104>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S104>/E->N'
                                        */
  127.93,                              /* Expression: 127.93
                                        * Referenced by: '<S106>/Saturation'
                                        */
  -127.93,                             /* Expression: -127.93
                                        * Referenced by: '<S106>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S106>/E->N'
                                        */
  31.9375,                             /* Expression: 31.9375
                                        * Referenced by: '<S103>/Saturation'
                                        */
  -32.0,                               /* Expression: -32
                                        * Referenced by: '<S103>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S103>/E->N'
                                        */
  250.0,                               /* Expression: 250
                                        * Referenced by: '<S102>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S102>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S102>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S101>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S101>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S101>/E->N'
                                        */
  63.0,                                /* Expression: 63
                                        * Referenced by: '<S100>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S100>/E->N'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S97>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S97>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S97>/E->N'
                                        */
  327.67,                              /* Expression: 327.67
                                        * Referenced by: '<S96>/Saturation'
                                        */
  -327.68,                             /* Expression: -327.68
                                        * Referenced by: '<S96>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S96>/E->N'
                                        */
  14.97,                               /* Expression: 14.97
                                        * Referenced by: '<S95>/Saturation'
                                        */
  -14.97,                              /* Expression: -14.97
                                        * Referenced by: '<S95>/Saturation'
                                        */
  33.333333333333336,                  /* Expression: 1/0.03
                                        * Referenced by: '<S95>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S99>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S99>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S99>/E->N'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S105>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S105>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S105>/E->N'
                                        */
  12.5,                                /* Expression: 12.5
                                        * Referenced by: '<S107>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S107>/Saturation'
                                        */
  20.0,                                /* Expression: 1/0.05
                                        * Referenced by: '<S107>/E->N'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S98>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S98>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S98>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S1>/E->N'
                                        */
  3.2,                                 /* Expression: 3.2
                                        * Referenced by: '<S254>/KLaneWidth'
                                        */
  4.2,                                 /* Expression: 4.2
                                        * Referenced by: '<S254>/KLaneWidthObsM'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S254>/KInLaneFactor'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S254>/Unit Delay1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S254>/Constant8'
                                        */
  14.0,                                /* Expression: 14
                                        * Referenced by: '<S254>/Constant12'
                                        */
  3.2,                                 /* Expression: 3.2
                                        * Referenced by: '<S254>/Constant2'
                                        */
  0.3,                                 /* Expression: 0.3
                                        * Referenced by: '<S254>/Constant6'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S254>/Constant7'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S254>/Constant4'
                                        */
  14.0,                                /* Expression: 14
                                        * Referenced by: '<S254>/Constant5'
                                        */
  0.7,                                 /* Expression: 0.7
                                        * Referenced by: '<S254>/KObsMTLC'
                                        */
  127.93,                              /* Expression: 127.93
                                        * Referenced by: '<S118>/Saturation'
                                        */
  -127.93,                             /* Expression: -127.93
                                        * Referenced by: '<S118>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S118>/E->N'
                                        */
  250.0,                               /* Expression: 250
                                        * Referenced by: '<S115>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S115>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S115>/E->N'
                                        */
  14.97,                               /* Expression: 14.97
                                        * Referenced by: '<S108>/Saturation'
                                        */
  -14.97,                              /* Expression: -14.97
                                        * Referenced by: '<S108>/Saturation'
                                        */
  33.333333333333336,                  /* Expression: 1/0.03
                                        * Referenced by: '<S108>/E->N'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S117>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S117>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S117>/E->N'
                                        */
  63.0,                                /* Expression: 63
                                        * Referenced by: '<S112>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S112>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S112>/E->N'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S110>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S110>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S110>/E->N'
                                        */
  31.9375,                             /* Expression: 31.9375
                                        * Referenced by: '<S116>/Saturation'
                                        */
  -32.0,                               /* Expression: -32
                                        * Referenced by: '<S116>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S116>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S111>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S111>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S111>/E->N'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S114>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S114>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S114>/E->N'
                                        */
  327.67,                              /* Expression: 327.67
                                        * Referenced by: '<S109>/Saturation'
                                        */
  -327.68,                             /* Expression: -327.68
                                        * Referenced by: '<S109>/Saturation'
                                        */
  100.0,                               /* Expression: 1/0.01
                                        * Referenced by: '<S109>/E->N'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S113>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S113>/Saturation'
                                        */
  16.0,                                /* Expression: 1/0.0625
                                        * Referenced by: '<S113>/E->N'
                                        */
  12.5,                                /* Expression: 12.5
                                        * Referenced by: '<S119>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S119>/Saturation'
                                        */
  20.0,                                /* Expression: 1/0.05
                                        * Referenced by: '<S119>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S181>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S54>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S54>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S54>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S182>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S229>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S229>/Saturation'
                                        */
  1.0,                                 /* Expression: 1/1
                                        * Referenced by: '<S229>/E->N'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S254>/Constant13'
                                        */
  14.0                                 /* Expression: 14
                                        * Referenced by: '<S254>/Constant14'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
