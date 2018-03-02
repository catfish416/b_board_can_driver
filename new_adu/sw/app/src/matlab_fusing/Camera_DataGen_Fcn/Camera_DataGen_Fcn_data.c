/*
 * File: Camera_DataGen_Fcn_data.c
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

#include "Camera_DataGen_Fcn.h"
#include "Camera_DataGen_Fcn_private.h"

/* Block parameters (auto storage) */
P_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_P = {
  128U,                                /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S88>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S27>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S37>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S47>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S77>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S57>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S67>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/N->E'
                                        */

  /*  Expression: [1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant8'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S29>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S39>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S49>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S79>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S59>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S69>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S19>/N->E'
                                        */

  /*  Expression: [0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant5'
   */
  { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S10>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S30>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S40>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S50>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S80>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S60>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S70>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/N->E'
                                        */

  /*  Expression: [0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant6'
   */
  { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S31>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S41>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S51>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S81>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S61>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S71>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S21>/N->E'
                                        */

  /*  Expression: [0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant7'
   */
  { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S32>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S42>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S52>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S82>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S62>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S72>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/N->E'
                                        */

  /*  Expression: [0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant9'
   */
  { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S33>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S43>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S53>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S83>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S63>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S73>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S23>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant11'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S14>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S34>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S44>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S54>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S84>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S64>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S74>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S24>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant12'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S35>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S45>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S55>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S85>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S65>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S75>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S25>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant13'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S36>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S46>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S56>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S86>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S66>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S76>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S26>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S28>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S38>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S48>/N->E'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S78>/N->E'
                                        */
  0.0625,                              /* Expression: 0.0625
                                        * Referenced by: '<S58>/N->E'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<S68>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/N->E'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant10'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant140'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant141'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant142'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant143'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant144'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant135'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant136'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant137'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant138'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant139'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant17'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant15'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant130'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant131'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant132'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant133'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant134'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant20'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant21'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant19'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant125'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant126'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant127'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant128'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant129'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant22'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant24'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant25'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant23'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant120'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant121'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant122'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant123'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant124'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant26'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant28'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant29'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant27'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant115'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant116'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant117'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant118'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant119'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant30'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant32'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant33'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant31'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant110'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant111'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant112'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant113'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant114'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant34'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant36'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant37'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant35'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant105'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant106'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant107'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant108'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant109'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant38'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant40'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant41'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant39'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant100'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant101'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant102'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant103'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant104'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant42'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant44'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant45'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0]
   * Referenced by: '<Root>/Constant43'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant95'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant96'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant97'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant98'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant99'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant46'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant48'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant49'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0]
   * Referenced by: '<Root>/Constant47'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant90'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant91'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant92'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant93'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant94'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant50'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant52'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant53'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0]
   * Referenced by: '<Root>/Constant51'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant85'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant86'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant87'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant88'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant89'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant54'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant56'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant57'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0]
   * Referenced by: '<Root>/Constant55'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant80'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant81'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant82'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant83'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant84'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant58'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant60'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant61'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0]
   * Referenced by: '<Root>/Constant59'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant75'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant76'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant77'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant78'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant79'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant62'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant64'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant65'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0]
   * Referenced by: '<Root>/Constant63'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant70'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant71'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant72'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant73'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant74'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant66'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant68'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant69'
                                        */

  /*  Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1]
   * Referenced by: '<Root>/Constant67'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S2>/N->E'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/E->N'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/E->N'
                                        */
  0U,                                  /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S87>/Switch'
                                        */
  0,                                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S87>/Memory'
                                        */
  128U,                                /* Computed Parameter: NE_Gain_awq
                                        * Referenced by: '<S3>/N->E'
                                        */
  128U                                 /* Computed Parameter: EN_Gain_l
                                        * Referenced by: '<S6>/E->N'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
