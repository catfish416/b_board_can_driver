/*
 * File: Camera_DataGen_Fcn.c
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
#include "interface.h"



/* Block signals (auto storage) */
B_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_B;

/* Block states (auto storage) */
DW_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_PrevZCX;

/* Real-time model */
RT_MODEL_Camera_DataGen_Fcn_T Camera_DataGen_Fcn_M_;
RT_MODEL_Camera_DataGen_Fcn_T *const Camera_DataGen_Fcn_M =
  &Camera_DataGen_Fcn_M_;




/* Forward declaration for local functions */
static void Camera_DataGen__ObstacleProcess(void);

/* Function for Chart: '<Root>/Camera_Data_Collect' */
static void Camera_DataGen__ObstacleProcess(void)
{
  /* Graphical Function 'ObstacleProcess': '<S1>:90' */
  /* Transition: '<S1>:109' */
  /* Transition: '<S1>:110' */
  Camera_DataGen_Fcn_B.DataOutput[Camera_DataGen_Fcn_DW.k] =
    Camera_DataGen_Fcn_B.MathFunction64[Camera_DataGen_Fcn_DW.k];
  Camera_DataGen_Fcn_B.DataOutput[25 + Camera_DataGen_Fcn_DW.k] =
    Camera_DataGen_Fcn_B.MathFunction64[25 + Camera_DataGen_Fcn_DW.k];
  Camera_DataGen_Fcn_B.DataOutput[50 + Camera_DataGen_Fcn_DW.k] =
    -Camera_DataGen_Fcn_B.MathFunction64[50 + Camera_DataGen_Fcn_DW.k];
  Camera_DataGen_Fcn_B.DataOutput[100 + Camera_DataGen_Fcn_DW.k] =
    Camera_DataGen_Fcn_B.MathFunction64[100 + Camera_DataGen_Fcn_DW.k];
  if (Camera_DataGen_Fcn_B.MathFunction64[75 + Camera_DataGen_Fcn_DW.k] != 7.0)
  {
    /* Transition: '<S1>:111' */
    if (Camera_DataGen_Fcn_B.MathFunction64[75 + Camera_DataGen_Fcn_DW.k] != 0.0)
    {
      /* Transition: '<S1>:112' */
      if (Camera_DataGen_Fcn_B.MathFunction64[75 + Camera_DataGen_Fcn_DW.k] !=
          1.0) {
        /* Transition: '<S1>:113' */
        /* Transition: '<S1>:117' */
        Camera_DataGen_Fcn_B.DataOutput[75 + Camera_DataGen_Fcn_DW.k] = 1.0;

        /* Pedestrian */
        /* Transition: '<S1>:120' */
      } else {
        /* Transition: '<S1>:116' */
        Camera_DataGen_Fcn_B.DataOutput[75 + Camera_DataGen_Fcn_DW.k] = 3.0;

        /* Truck */
      }

      /* Transition: '<S1>:119' */
    } else {
      /* Transition: '<S1>:115' */
      Camera_DataGen_Fcn_B.DataOutput[75 + Camera_DataGen_Fcn_DW.k] = 2.0;

      /* Car */
    }

    /* Transition: '<S1>:118' */
  } else {
    /* Transition: '<S1>:114' */
    Camera_DataGen_Fcn_B.DataOutput[75 + Camera_DataGen_Fcn_DW.k] = 15.0;

    /* undecided */
  }

  /* Transition: '<S1>:121' */
  if ((Camera_DataGen_Fcn_B.MathFunction64[175 + Camera_DataGen_Fcn_DW.k] != 0.0)
      && (Camera_DataGen_Fcn_B.MathFunction64[175 + Camera_DataGen_Fcn_DW.k] !=
          6.0)) {
    /* Transition: '<S1>:122' */
    if ((Camera_DataGen_Fcn_B.MathFunction64[175 + Camera_DataGen_Fcn_DW.k] !=
         1.0) && (Camera_DataGen_Fcn_B.MathFunction64[175 +
                  Camera_DataGen_Fcn_DW.k] != 2.0) &&
        (Camera_DataGen_Fcn_B.MathFunction64[175 + Camera_DataGen_Fcn_DW.k] !=
         5.0)) {
      /* Transition: '<S1>:123' */
      if (Camera_DataGen_Fcn_B.MathFunction64[175 + Camera_DataGen_Fcn_DW.k] ==
          3.0) {
        /* Transition: '<S1>:124' */
        /* Transition: '<S1>:128' */
        Camera_DataGen_Fcn_B.DataOutput[175 + Camera_DataGen_Fcn_DW.k] = 2.0;

        /* Moving in the same direction */
        /* Transition: '<S1>:131' */
      } else {
        /* Transition: '<S1>:127' */
        Camera_DataGen_Fcn_B.DataOutput[175 + Camera_DataGen_Fcn_DW.k] = 3.0;

        /* Oncoming */
      }

      /* Transition: '<S1>:130' */
    } else {
      /* Transition: '<S1>:126' */
      Camera_DataGen_Fcn_B.DataOutput[175 + Camera_DataGen_Fcn_DW.k] = 1.0;

      /* Stopped */
    }

    /* Transition: '<S1>:129' */
  } else {
    /* Transition: '<S1>:125' */
    Camera_DataGen_Fcn_B.DataOutput[175 + Camera_DataGen_Fcn_DW.k] = 4.0;

    /* undecided */
  }

  /* Transition: '<S1>:132' */
}

/* Model step function */
void Camera_DataGen_Fcn_step(void)
{
  real_T tmp[8];
  real_T tmp_0[25];
  boolean_T zcEvent;
  int32_T i;
  int32_T i_0;

  /* DataTypeConversion: '<S7>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion = (real_T)Get_Vis_Track_ID_1();

  /* Gain: '<S7>/N->E' */
  Camera_DataGen_Fcn_B.NE = Camera_DataGen_Fcn_P.NE_Gain *
    Camera_DataGen_Fcn_B.DataTypeConversion;

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_g = (real_T)Get_Vis_Track_PosX_1();

  /* Gain: '<S27>/N->E' */
  Camera_DataGen_Fcn_B.NE_g = Camera_DataGen_Fcn_P.NE_Gain_a *
    Camera_DataGen_Fcn_B.DataTypeConversion_g;

  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_d = (real_T)Get_Vis_Track_PosY_1();

  /* Gain: '<S37>/N->E' */
  Camera_DataGen_Fcn_B.NE_p = Camera_DataGen_Fcn_P.NE_Gain_k *
    Camera_DataGen_Fcn_B.DataTypeConversion_d;

  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_l = (real_T)Get_Vis_Track_Type_1();

  /* Gain: '<S47>/N->E' */
  Camera_DataGen_Fcn_B.NE_d = Camera_DataGen_Fcn_P.NE_Gain_n *
    Camera_DataGen_Fcn_B.DataTypeConversion_l;

  /* DataTypeConversion: '<S77>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ld = (real_T)Get_Vis_Track_Width_1();

  /* Gain: '<S77>/N->E' */
  Camera_DataGen_Fcn_B.NE_j = Camera_DataGen_Fcn_P.NE_Gain_j *
    Camera_DataGen_Fcn_B.DataTypeConversion_ld;

  /* DataTypeConversion: '<S57>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_n = (real_T)Get_Vis_Track_VelX_1();

  /* Gain: '<S57>/N->E' */
  Camera_DataGen_Fcn_B.NE_a = Camera_DataGen_Fcn_P.NE_Gain_m *
    Camera_DataGen_Fcn_B.DataTypeConversion_n;

  /* DataTypeConversion: '<S67>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_de = (real_T)Get_Vis_Track_VelY_1();

  /* Gain: '<S67>/N->E' */
  Camera_DataGen_Fcn_B.NE_n = Camera_DataGen_Fcn_P.NE_Gain_mq *
    Camera_DataGen_Fcn_B.DataTypeConversion_de;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_1'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_h = (real_T)Get_Vis_Track_ObjStatus_1();

  /* Gain: '<S17>/N->E' */
  Camera_DataGen_Fcn_B.NE_o = Camera_DataGen_Fcn_P.NE_Gain_d *
    Camera_DataGen_Fcn_B.DataTypeConversion_h;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide4Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[0] =
    Camera_DataGen_Fcn_B.NE;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[1] =
    Camera_DataGen_Fcn_B.NE_g;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[2] =
    Camera_DataGen_Fcn_B.NE_p;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[3] =
    Camera_DataGen_Fcn_B.NE_d;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[4] =
    Camera_DataGen_Fcn_B.NE_j;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[5] =
    Camera_DataGen_Fcn_B.NE_a;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[6] =
    Camera_DataGen_Fcn_B.NE_n;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[7] =
    Camera_DataGen_Fcn_B.NE_o;

  /* Math: '<Root>/Math Function4' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction4[0],
         &Camera_DataGen_Fcn_P.Constant8_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide4' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide4Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction4[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide4[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide4' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_nx = (real_T)Get_Vis_Track_ID_2();

  /* Gain: '<S9>/N->E' */
  Camera_DataGen_Fcn_B.NE_b = Camera_DataGen_Fcn_P.NE_Gain_o *
    Camera_DataGen_Fcn_B.DataTypeConversion_nx;

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_m = (real_T)Get_Vis_Track_PosX_2();

  /* Gain: '<S29>/N->E' */
  Camera_DataGen_Fcn_B.NE_l = Camera_DataGen_Fcn_P.NE_Gain_g *
    Camera_DataGen_Fcn_B.DataTypeConversion_m;

  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_f = (real_T)Get_Vis_Track_PosY_2();

  /* Gain: '<S39>/N->E' */
  Camera_DataGen_Fcn_B.NE_ab = Camera_DataGen_Fcn_P.NE_Gain_ko *
    Camera_DataGen_Fcn_B.DataTypeConversion_f;

  /* DataTypeConversion: '<S49>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_do = (real_T)Get_Vis_Track_Type_2();

  /* Gain: '<S49>/N->E' */
  Camera_DataGen_Fcn_B.NE_l2 = Camera_DataGen_Fcn_P.NE_Gain_gu *
    Camera_DataGen_Fcn_B.DataTypeConversion_do;

  /* DataTypeConversion: '<S79>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_dm = (real_T)Get_Vis_Track_Width_2();

  /* Gain: '<S79>/N->E' */
  Camera_DataGen_Fcn_B.NE_f = Camera_DataGen_Fcn_P.NE_Gain_l *
    Camera_DataGen_Fcn_B.DataTypeConversion_dm;

  /* DataTypeConversion: '<S59>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_o = (real_T)Get_Vis_Track_VelX_2();

  /* Gain: '<S59>/N->E' */
  Camera_DataGen_Fcn_B.NE_jw = Camera_DataGen_Fcn_P.NE_Gain_f *
    Camera_DataGen_Fcn_B.DataTypeConversion_o;

  /* DataTypeConversion: '<S69>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_i = (real_T)Get_Vis_Track_VelY_2();

  /* Gain: '<S69>/N->E' */
  Camera_DataGen_Fcn_B.NE_jj = Camera_DataGen_Fcn_P.NE_Gain_mh *
    Camera_DataGen_Fcn_B.DataTypeConversion_i;

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_2'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_d3 = (real_T)Get_Vis_Track_ObjStatus_2
    ();

  /* Gain: '<S19>/N->E' */
  Camera_DataGen_Fcn_B.NE_gx = Camera_DataGen_Fcn_P.NE_Gain_p *
    Camera_DataGen_Fcn_B.DataTypeConversion_d3;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide5Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[0] =
    Camera_DataGen_Fcn_B.NE_b;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[1] =
    Camera_DataGen_Fcn_B.NE_l;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[2] =
    Camera_DataGen_Fcn_B.NE_ab;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[3] =
    Camera_DataGen_Fcn_B.NE_l2;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[4] =
    Camera_DataGen_Fcn_B.NE_f;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[5] =
    Camera_DataGen_Fcn_B.NE_jw;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[6] =
    Camera_DataGen_Fcn_B.NE_jj;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[7] =
    Camera_DataGen_Fcn_B.NE_gx;

  /* Math: '<Root>/Math Function5' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction5[0],
         &Camera_DataGen_Fcn_P.Constant5_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide5' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide5Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction5[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide5[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide5' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_nl = (real_T)Get_Vis_Track_ID_3();

  /* Gain: '<S10>/N->E' */
  Camera_DataGen_Fcn_B.NE_ld = Camera_DataGen_Fcn_P.NE_Gain_d3 *
    Camera_DataGen_Fcn_B.DataTypeConversion_nl;

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_p = (real_T)Get_Vis_Track_PosX_3();

  /* Gain: '<S30>/N->E' */
  Camera_DataGen_Fcn_B.NE_e = Camera_DataGen_Fcn_P.NE_Gain_dc *
    Camera_DataGen_Fcn_B.DataTypeConversion_p;

  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_oj = (real_T)Get_Vis_Track_PosY_3();

  /* Gain: '<S40>/N->E' */
  Camera_DataGen_Fcn_B.NE_ez = Camera_DataGen_Fcn_P.NE_Gain_om *
    Camera_DataGen_Fcn_B.DataTypeConversion_oj;

  /* DataTypeConversion: '<S50>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_nn = (real_T)Get_Vis_Track_Type_3();

  /* Gain: '<S50>/N->E' */
  Camera_DataGen_Fcn_B.NE_dd = Camera_DataGen_Fcn_P.NE_Gain_au *
    Camera_DataGen_Fcn_B.DataTypeConversion_nn;

  /* DataTypeConversion: '<S80>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ln = (real_T)Get_Vis_Track_Width_3();

  /* Gain: '<S80>/N->E' */
  Camera_DataGen_Fcn_B.NE_bi = Camera_DataGen_Fcn_P.NE_Gain_oi *
    Camera_DataGen_Fcn_B.DataTypeConversion_ln;

  /* DataTypeConversion: '<S60>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_or = (real_T)Get_Vis_Track_VelX_3();

  /* Gain: '<S60>/N->E' */
  Camera_DataGen_Fcn_B.NE_o2 = Camera_DataGen_Fcn_P.NE_Gain_b *
    Camera_DataGen_Fcn_B.DataTypeConversion_or;

  /* DataTypeConversion: '<S70>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_a = (real_T)Get_Vis_Track_VelY_3();

  /* Gain: '<S70>/N->E' */
  Camera_DataGen_Fcn_B.NE_k = Camera_DataGen_Fcn_P.NE_Gain_ku *
    Camera_DataGen_Fcn_B.DataTypeConversion_a;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_3'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_av = (real_T)Get_Vis_Track_ObjStatus_3
    ();

  /* Gain: '<S20>/N->E' */
  Camera_DataGen_Fcn_B.NE_na = Camera_DataGen_Fcn_P.NE_Gain_gi *
    Camera_DataGen_Fcn_B.DataTypeConversion_av;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide6Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[0] =
    Camera_DataGen_Fcn_B.NE_ld;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[1] =
    Camera_DataGen_Fcn_B.NE_e;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[2] =
    Camera_DataGen_Fcn_B.NE_ez;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[3] =
    Camera_DataGen_Fcn_B.NE_dd;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[4] =
    Camera_DataGen_Fcn_B.NE_bi;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[5] =
    Camera_DataGen_Fcn_B.NE_o2;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[6] =
    Camera_DataGen_Fcn_B.NE_k;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[7] =
    Camera_DataGen_Fcn_B.NE_na;

  /* Math: '<Root>/Math Function6' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction6[0],
         &Camera_DataGen_Fcn_P.Constant6_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide6' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide6Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction6[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide6[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide6' */

  /* DataTypeConversion: '<S11>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_nz = (real_T)Get_Vis_Track_ID_4();

  /* Gain: '<S11>/N->E' */
  Camera_DataGen_Fcn_B.NE_f3 = Camera_DataGen_Fcn_P.NE_Gain_m0 *
    Camera_DataGen_Fcn_B.DataTypeConversion_nz;

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_e = (real_T)Get_Vis_Track_PosX_4();

  /* Gain: '<S31>/N->E' */
  Camera_DataGen_Fcn_B.NE_pl = Camera_DataGen_Fcn_P.NE_Gain_oz *
    Camera_DataGen_Fcn_B.DataTypeConversion_e;

  /* DataTypeConversion: '<S41>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_k = (real_T)Get_Vis_Track_PosY_4();

  /* Gain: '<S41>/N->E' */
  Camera_DataGen_Fcn_B.NE_kd = Camera_DataGen_Fcn_P.NE_Gain_po *
    Camera_DataGen_Fcn_B.DataTypeConversion_k;

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_nk = (real_T)Get_Vis_Track_Type_4();

  /* Gain: '<S51>/N->E' */
  Camera_DataGen_Fcn_B.NE_o3 = Camera_DataGen_Fcn_P.NE_Gain_c *
    Camera_DataGen_Fcn_B.DataTypeConversion_nk;

  /* DataTypeConversion: '<S81>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ar = (real_T)Get_Vis_Track_Width_4();

  /* Gain: '<S81>/N->E' */
  Camera_DataGen_Fcn_B.NE_jb = Camera_DataGen_Fcn_P.NE_Gain_k3 *
    Camera_DataGen_Fcn_B.DataTypeConversion_ar;

  /* DataTypeConversion: '<S61>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_d5 = (real_T)Get_Vis_Track_VelX_4();

  /* Gain: '<S61>/N->E' */
  Camera_DataGen_Fcn_B.NE_js = Camera_DataGen_Fcn_P.NE_Gain_i *
    Camera_DataGen_Fcn_B.DataTypeConversion_d5;

  /* DataTypeConversion: '<S71>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_on = (real_T)Get_Vis_Track_VelY_4();

  /* Gain: '<S71>/N->E' */
  Camera_DataGen_Fcn_B.NE_do = Camera_DataGen_Fcn_P.NE_Gain_e *
    Camera_DataGen_Fcn_B.DataTypeConversion_on;

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_4'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_fm = (real_T)Get_Vis_Track_ObjStatus_4
    ();

  /* Gain: '<S21>/N->E' */
  Camera_DataGen_Fcn_B.NE_lb = Camera_DataGen_Fcn_P.NE_Gain_n1 *
    Camera_DataGen_Fcn_B.DataTypeConversion_fm;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide7Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[0] =
    Camera_DataGen_Fcn_B.NE_f3;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[1] =
    Camera_DataGen_Fcn_B.NE_pl;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[2] =
    Camera_DataGen_Fcn_B.NE_kd;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[3] =
    Camera_DataGen_Fcn_B.NE_o3;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[4] =
    Camera_DataGen_Fcn_B.NE_jb;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[5] =
    Camera_DataGen_Fcn_B.NE_js;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[6] =
    Camera_DataGen_Fcn_B.NE_do;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[7] =
    Camera_DataGen_Fcn_B.NE_lb;

  /* Math: '<Root>/Math Function7' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction7[0],
         &Camera_DataGen_Fcn_P.Constant7_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide7' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide7Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction7[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide7[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide7' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_i3 = (real_T)Get_Vis_Track_ID_5();

  /* Gain: '<S12>/N->E' */
  Camera_DataGen_Fcn_B.NE_nq = Camera_DataGen_Fcn_P.NE_Gain_di *
    Camera_DataGen_Fcn_B.DataTypeConversion_i3;

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_b = (real_T)Get_Vis_Track_PosX_5();

  /* Gain: '<S32>/N->E' */
  Camera_DataGen_Fcn_B.NE_jv = Camera_DataGen_Fcn_P.NE_Gain_eu *
    Camera_DataGen_Fcn_B.DataTypeConversion_b;

  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_j = (real_T)Get_Vis_Track_PosY_5();

  /* Gain: '<S42>/N->E' */
  Camera_DataGen_Fcn_B.NE_nx = Camera_DataGen_Fcn_P.NE_Gain_mt *
    Camera_DataGen_Fcn_B.DataTypeConversion_j;

  /* DataTypeConversion: '<S52>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ls = (real_T)Get_Vis_Track_Type_5();

  /* Gain: '<S52>/N->E' */
  Camera_DataGen_Fcn_B.NE_c = Camera_DataGen_Fcn_P.NE_Gain_gg *
    Camera_DataGen_Fcn_B.DataTypeConversion_ls;

  /* DataTypeConversion: '<S82>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_h5 = (real_T)Get_Vis_Track_Width_5();

  /* Gain: '<S82>/N->E' */
  Camera_DataGen_Fcn_B.NE_ef = Camera_DataGen_Fcn_P.NE_Gain_gs *
    Camera_DataGen_Fcn_B.DataTypeConversion_h5;

  /* DataTypeConversion: '<S62>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_k4 = (real_T)Get_Vis_Track_VelX_5();

  /* Gain: '<S62>/N->E' */
  Camera_DataGen_Fcn_B.NE_jp = Camera_DataGen_Fcn_P.NE_Gain_av *
    Camera_DataGen_Fcn_B.DataTypeConversion_k4;

  /* DataTypeConversion: '<S72>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_i0 = (real_T)Get_Vis_Track_VelY_5();

  /* Gain: '<S72>/N->E' */
  Camera_DataGen_Fcn_B.NE_kn = Camera_DataGen_Fcn_P.NE_Gain_el *
    Camera_DataGen_Fcn_B.DataTypeConversion_i0;

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_5'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_gj = (real_T)Get_Vis_Track_ObjStatus_5
    ();

  /* Gain: '<S22>/N->E' */
  Camera_DataGen_Fcn_B.NE_oh = Camera_DataGen_Fcn_P.NE_Gain_g4 *
    Camera_DataGen_Fcn_B.DataTypeConversion_gj;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide8Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[0] =
    Camera_DataGen_Fcn_B.NE_nq;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[1] =
    Camera_DataGen_Fcn_B.NE_jv;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[2] =
    Camera_DataGen_Fcn_B.NE_nx;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[3] =
    Camera_DataGen_Fcn_B.NE_c;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[4] =
    Camera_DataGen_Fcn_B.NE_ef;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[5] =
    Camera_DataGen_Fcn_B.NE_jp;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[6] =
    Camera_DataGen_Fcn_B.NE_kn;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[7] =
    Camera_DataGen_Fcn_B.NE_oh;

  /* Math: '<Root>/Math Function8' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction8[0],
         &Camera_DataGen_Fcn_P.Constant9_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide8' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide8Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction8[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide8[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide8' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_c = (real_T)Get_Vis_Track_ID_6();

  /* Gain: '<S13>/N->E' */
  Camera_DataGen_Fcn_B.NE_o31 = Camera_DataGen_Fcn_P.NE_Gain_ot *
    Camera_DataGen_Fcn_B.DataTypeConversion_c;

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_iz = (real_T)Get_Vis_Track_PosX_6();

  /* Gain: '<S33>/N->E' */
  Camera_DataGen_Fcn_B.NE_h = Camera_DataGen_Fcn_P.NE_Gain_cz *
    Camera_DataGen_Fcn_B.DataTypeConversion_iz;

  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_gp = (real_T)Get_Vis_Track_PosY_6();

  /* Gain: '<S43>/N->E' */
  Camera_DataGen_Fcn_B.NE_kr = Camera_DataGen_Fcn_P.NE_Gain_ok *
    Camera_DataGen_Fcn_B.DataTypeConversion_gp;

  /* DataTypeConversion: '<S53>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_hh = (real_T)Get_Vis_Track_Type_6();

  /* Gain: '<S53>/N->E' */
  Camera_DataGen_Fcn_B.NE_fk = Camera_DataGen_Fcn_P.NE_Gain_nl *
    Camera_DataGen_Fcn_B.DataTypeConversion_hh;

  /* DataTypeConversion: '<S83>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_art = (real_T)Get_Vis_Track_Width_6();

  /* Gain: '<S83>/N->E' */
  Camera_DataGen_Fcn_B.NE_lj = Camera_DataGen_Fcn_P.NE_Gain_gh *
    Camera_DataGen_Fcn_B.DataTypeConversion_art;

  /* DataTypeConversion: '<S63>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_bq = (real_T)Get_Vis_Track_VelX_6();

  /* Gain: '<S63>/N->E' */
  Camera_DataGen_Fcn_B.NE_lr = Camera_DataGen_Fcn_P.NE_Gain_fk *
    Camera_DataGen_Fcn_B.DataTypeConversion_bq;

  /* DataTypeConversion: '<S73>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_mi = (real_T)Get_Vis_Track_VelY_6();

  /* Gain: '<S73>/N->E' */
  Camera_DataGen_Fcn_B.NE_om = Camera_DataGen_Fcn_P.NE_Gain_no *
    Camera_DataGen_Fcn_B.DataTypeConversion_mi;

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_6'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_jl = (real_T)Get_Vis_Track_ObjStatus_6
    ();

  /* Gain: '<S23>/N->E' */
  Camera_DataGen_Fcn_B.NE_ox = Camera_DataGen_Fcn_P.NE_Gain_ozt *
    Camera_DataGen_Fcn_B.DataTypeConversion_jl;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide9Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[0] =
    Camera_DataGen_Fcn_B.NE_o31;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[1] =
    Camera_DataGen_Fcn_B.NE_h;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[2] =
    Camera_DataGen_Fcn_B.NE_kr;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[3] =
    Camera_DataGen_Fcn_B.NE_fk;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[4] =
    Camera_DataGen_Fcn_B.NE_lj;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[5] =
    Camera_DataGen_Fcn_B.NE_lr;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[6] =
    Camera_DataGen_Fcn_B.NE_om;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[7] =
    Camera_DataGen_Fcn_B.NE_ox;

  /* Math: '<Root>/Math Function9' incorporates:
   *  Constant: '<Root>/Constant11'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction9[0],
         &Camera_DataGen_Fcn_P.Constant11_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide9' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide9Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction9[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide9[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide9' */

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_pm = (real_T)Get_Vis_Track_ID_7();

  /* Gain: '<S14>/N->E' */
  Camera_DataGen_Fcn_B.NE_ot = Camera_DataGen_Fcn_P.NE_Gain_fu *
    Camera_DataGen_Fcn_B.DataTypeConversion_pm;

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_lne = (real_T)Get_Vis_Track_PosX_7();

  /* Gain: '<S34>/N->E' */
  Camera_DataGen_Fcn_B.NE_b5 = Camera_DataGen_Fcn_P.NE_Gain_a2 *
    Camera_DataGen_Fcn_B.DataTypeConversion_lne;

  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_gpz = (real_T)Get_Vis_Track_PosY_7();

  /* Gain: '<S44>/N->E' */
  Camera_DataGen_Fcn_B.NE_d4 = Camera_DataGen_Fcn_P.NE_Gain_is *
    Camera_DataGen_Fcn_B.DataTypeConversion_gpz;

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_oy = (real_T)Get_Vis_Track_Type_7();

  /* Gain: '<S54>/N->E' */
  Camera_DataGen_Fcn_B.NE_m = Camera_DataGen_Fcn_P.NE_Gain_mv *
    Camera_DataGen_Fcn_B.DataTypeConversion_oy;

  /* DataTypeConversion: '<S84>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_os = (real_T)Get_Vis_Track_Width_7();

  /* Gain: '<S84>/N->E' */
  Camera_DataGen_Fcn_B.NE_c3 = Camera_DataGen_Fcn_P.NE_Gain_on *
    Camera_DataGen_Fcn_B.DataTypeConversion_os;

  /* DataTypeConversion: '<S64>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_d0 = (real_T)Get_Vis_Track_VelX_7();

  /* Gain: '<S64>/N->E' */
  Camera_DataGen_Fcn_B.NE_fe = Camera_DataGen_Fcn_P.NE_Gain_oj *
    Camera_DataGen_Fcn_B.DataTypeConversion_d0;

  /* DataTypeConversion: '<S74>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_fy = (real_T)Get_Vis_Track_VelY_7();

  /* Gain: '<S74>/N->E' */
  Camera_DataGen_Fcn_B.NE_jg = Camera_DataGen_Fcn_P.NE_Gain_pg *
    Camera_DataGen_Fcn_B.DataTypeConversion_fy;

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_7'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_cg = (real_T)Get_Vis_Track_ObjStatus_7
    ();

  /* Gain: '<S24>/N->E' */
  Camera_DataGen_Fcn_B.NE_ek = Camera_DataGen_Fcn_P.NE_Gain_dv *
    Camera_DataGen_Fcn_B.DataTypeConversion_cg;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide10Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[0] =
    Camera_DataGen_Fcn_B.NE_ot;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[1] =
    Camera_DataGen_Fcn_B.NE_b5;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[2] =
    Camera_DataGen_Fcn_B.NE_d4;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[3] =
    Camera_DataGen_Fcn_B.NE_m;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[4] =
    Camera_DataGen_Fcn_B.NE_c3;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[5] =
    Camera_DataGen_Fcn_B.NE_fe;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[6] =
    Camera_DataGen_Fcn_B.NE_jg;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[7] =
    Camera_DataGen_Fcn_B.NE_ek;

  /* Math: '<Root>/Math Function10' incorporates:
   *  Constant: '<Root>/Constant12'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction10[0],
         &Camera_DataGen_Fcn_P.Constant12_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide10' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide10In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction10[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide10[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide10' */

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_jn = (real_T)Get_Vis_Track_ID_8();

  /* Gain: '<S15>/N->E' */
  Camera_DataGen_Fcn_B.NE_mw = Camera_DataGen_Fcn_P.NE_Gain_pa *
    Camera_DataGen_Fcn_B.DataTypeConversion_jn;

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ce = (real_T)Get_Vis_Track_PosX_8();

  /* Gain: '<S35>/N->E' */
  Camera_DataGen_Fcn_B.NE_i = Camera_DataGen_Fcn_P.NE_Gain_h *
    Camera_DataGen_Fcn_B.DataTypeConversion_ce;

  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_lx = (real_T)Get_Vis_Track_PosY_8();

  /* Gain: '<S45>/N->E' */
  Camera_DataGen_Fcn_B.NE_le = Camera_DataGen_Fcn_P.NE_Gain_e4 *
    Camera_DataGen_Fcn_B.DataTypeConversion_lx;

  /* DataTypeConversion: '<S55>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_bj = (real_T)Get_Vis_Track_Type_8();

  /* Gain: '<S55>/N->E' */
  Camera_DataGen_Fcn_B.NE_hx = Camera_DataGen_Fcn_P.NE_Gain_ol *
    Camera_DataGen_Fcn_B.DataTypeConversion_bj;

  /* DataTypeConversion: '<S85>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_kp = (real_T)Get_Vis_Track_Width_8();

  /* Gain: '<S85>/N->E' */
  Camera_DataGen_Fcn_B.NE_ch = Camera_DataGen_Fcn_P.NE_Gain_je *
    Camera_DataGen_Fcn_B.DataTypeConversion_kp;

  /* DataTypeConversion: '<S65>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_aj = (real_T)Get_Vis_Track_VelX_8();

  /* Gain: '<S65>/N->E' */
  Camera_DataGen_Fcn_B.NE_ok = Camera_DataGen_Fcn_P.NE_Gain_ll *
    Camera_DataGen_Fcn_B.DataTypeConversion_aj;

  /* DataTypeConversion: '<S75>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_dy = (real_T)Get_Vis_Track_VelY_8();

  /* Gain: '<S75>/N->E' */
  Camera_DataGen_Fcn_B.NE_ce = Camera_DataGen_Fcn_P.NE_Gain_bi *
    Camera_DataGen_Fcn_B.DataTypeConversion_dy;

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_8'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_b1 = (real_T)Get_Vis_Track_ObjStatus_8
    ();

  /* Gain: '<S25>/N->E' */
  Camera_DataGen_Fcn_B.NE_mh = Camera_DataGen_Fcn_P.NE_Gain_at *
    Camera_DataGen_Fcn_B.DataTypeConversion_b1;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide11Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[0] =
    Camera_DataGen_Fcn_B.NE_mw;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[1] =
    Camera_DataGen_Fcn_B.NE_i;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[2] =
    Camera_DataGen_Fcn_B.NE_le;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[3] =
    Camera_DataGen_Fcn_B.NE_hx;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[4] =
    Camera_DataGen_Fcn_B.NE_ch;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[5] =
    Camera_DataGen_Fcn_B.NE_ok;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[6] =
    Camera_DataGen_Fcn_B.NE_ce;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[7] =
    Camera_DataGen_Fcn_B.NE_mh;

  /* Math: '<Root>/Math Function11' incorporates:
   *  Constant: '<Root>/Constant13'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction11[0],
         &Camera_DataGen_Fcn_P.Constant13_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide11' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide11In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction11[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide11[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide11' */

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ol = (real_T)Get_Vis_Track_ID_9();

  /* Gain: '<S16>/N->E' */
  Camera_DataGen_Fcn_B.NE_g2 = Camera_DataGen_Fcn_P.NE_Gain_kv *
    Camera_DataGen_Fcn_B.DataTypeConversion_ol;

  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ib = (real_T)Get_Vis_Track_PosX_9();

  /* Gain: '<S36>/N->E' */
  Camera_DataGen_Fcn_B.NE_me = Camera_DataGen_Fcn_P.NE_Gain_oc *
    Camera_DataGen_Fcn_B.DataTypeConversion_ib;

  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_le = (real_T)Get_Vis_Track_PosY_9();

  /* Gain: '<S46>/N->E' */
  Camera_DataGen_Fcn_B.NE_d0 = Camera_DataGen_Fcn_P.NE_Gain_aw *
    Camera_DataGen_Fcn_B.DataTypeConversion_le;

  /* DataTypeConversion: '<S56>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_jx = (real_T)Get_Vis_Track_Type_9();

  /* Gain: '<S56>/N->E' */
  Camera_DataGen_Fcn_B.NE_pd = Camera_DataGen_Fcn_P.NE_Gain_eg *
    Camera_DataGen_Fcn_B.DataTypeConversion_jx;

  /* DataTypeConversion: '<S86>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ir = (real_T)Get_Vis_Track_Width_9();

  /* Gain: '<S86>/N->E' */
  Camera_DataGen_Fcn_B.NE_my = Camera_DataGen_Fcn_P.NE_Gain_fd *
    Camera_DataGen_Fcn_B.DataTypeConversion_ir;

  /* DataTypeConversion: '<S66>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ay = (real_T)Get_Vis_Track_VelX_9();

  /* Gain: '<S66>/N->E' */
  Camera_DataGen_Fcn_B.NE_nb = Camera_DataGen_Fcn_P.NE_Gain_fw *
    Camera_DataGen_Fcn_B.DataTypeConversion_ay;

  /* DataTypeConversion: '<S76>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_dx = (real_T)Get_Vis_Track_VelY_9();

  /* Gain: '<S76>/N->E' */
  Camera_DataGen_Fcn_B.NE_cq = Camera_DataGen_Fcn_P.NE_Gain_j5 *
    Camera_DataGen_Fcn_B.DataTypeConversion_dx;

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_9'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_kd = (real_T)Get_Vis_Track_ObjStatus_9
    ();

  /* Gain: '<S26>/N->E' */
  Camera_DataGen_Fcn_B.NE_mj = Camera_DataGen_Fcn_P.NE_Gain_ks *
    Camera_DataGen_Fcn_B.DataTypeConversion_kd;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide12Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[0] =
    Camera_DataGen_Fcn_B.NE_g2;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[1] =
    Camera_DataGen_Fcn_B.NE_me;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[2] =
    Camera_DataGen_Fcn_B.NE_d0;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[3] =
    Camera_DataGen_Fcn_B.NE_pd;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[4] =
    Camera_DataGen_Fcn_B.NE_my;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[5] =
    Camera_DataGen_Fcn_B.NE_nb;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[6] =
    Camera_DataGen_Fcn_B.NE_cq;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[7] =
    Camera_DataGen_Fcn_B.NE_mj;

  /* Math: '<Root>/Math Function12' incorporates:
   *  Constant: '<Root>/Constant14'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction12[0],
         &Camera_DataGen_Fcn_P.Constant14_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide12' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide12In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction12[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide12[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide12' */

  /* DataTypeConversion: '<S8>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ID_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_lt = (real_T)Get_Vis_Track_ID_10();

  /* Gain: '<S8>/N->E' */
  Camera_DataGen_Fcn_B.NE_ge = Camera_DataGen_Fcn_P.NE_Gain_md *
    Camera_DataGen_Fcn_B.DataTypeConversion_lt;

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosX_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_dq = (real_T)Get_Vis_Track_PosX_10();

  /* Gain: '<S28>/N->E' */
  Camera_DataGen_Fcn_B.NE_gc = Camera_DataGen_Fcn_P.NE_Gain_lc *
    Camera_DataGen_Fcn_B.DataTypeConversion_dq;

  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_PosY_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_br = (real_T)Get_Vis_Track_PosY_10();

  /* Gain: '<S38>/N->E' */
  Camera_DataGen_Fcn_B.NE_do1 = Camera_DataGen_Fcn_P.NE_Gain_ag *
    Camera_DataGen_Fcn_B.DataTypeConversion_br;

  /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Type_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_kj = (real_T)Get_Vis_Track_Type_10();

  /* Gain: '<S48>/N->E' */
  Camera_DataGen_Fcn_B.NE_ou = Camera_DataGen_Fcn_P.NE_Gain_ge *
    Camera_DataGen_Fcn_B.DataTypeConversion_kj;

  /* DataTypeConversion: '<S78>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_Width_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ic = (real_T)Get_Vis_Track_Width_10();

  /* Gain: '<S78>/N->E' */
  Camera_DataGen_Fcn_B.NE_gu = Camera_DataGen_Fcn_P.NE_Gain_lo *
    Camera_DataGen_Fcn_B.DataTypeConversion_ic;

  /* DataTypeConversion: '<S58>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelX_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_gq = (real_T)Get_Vis_Track_VelX_10();

  /* Gain: '<S58>/N->E' */
  Camera_DataGen_Fcn_B.NE_fc = Camera_DataGen_Fcn_P.NE_Gain_ev *
    Camera_DataGen_Fcn_B.DataTypeConversion_gq;

  /* DataTypeConversion: '<S68>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_VelY_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_osk = (real_T)Get_Vis_Track_VelY_10();

  /* Gain: '<S68>/N->E' */
  Camera_DataGen_Fcn_B.NE_ft = Camera_DataGen_Fcn_P.NE_Gain_lz *
    Camera_DataGen_Fcn_B.DataTypeConversion_osk;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Vis_Track_ObjStatus_10'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_ah = (real_T)
    Get_Vis_Track_ObjStatus_10();

  /* Gain: '<S18>/N->E' */
  Camera_DataGen_Fcn_B.NE_ar = Camera_DataGen_Fcn_P.NE_Gain_ab *
    Camera_DataGen_Fcn_B.DataTypeConversion_ah;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide13Inport1' */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[0] =
    Camera_DataGen_Fcn_B.NE_ge;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[1] =
    Camera_DataGen_Fcn_B.NE_gc;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[2] =
    Camera_DataGen_Fcn_B.NE_do1;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[3] =
    Camera_DataGen_Fcn_B.NE_ou;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[4] =
    Camera_DataGen_Fcn_B.NE_gu;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[5] =
    Camera_DataGen_Fcn_B.NE_fc;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[6] =
    Camera_DataGen_Fcn_B.NE_ft;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[7] =
    Camera_DataGen_Fcn_B.NE_ar;

  /* Math: '<Root>/Math Function13' incorporates:
   *  Constant: '<Root>/Constant10'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction13[0],
         &Camera_DataGen_Fcn_P.Constant10_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide13' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide13In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction13[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide13[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide13' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide1Inport1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant140'
   *  Constant: '<Root>/Constant141'
   *  Constant: '<Root>/Constant142'
   *  Constant: '<Root>/Constant143'
   *  Constant: '<Root>/Constant144'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[0] =
    Camera_DataGen_Fcn_P.Constant140_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[1] =
    Camera_DataGen_Fcn_P.Constant141_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[2] =
    Camera_DataGen_Fcn_P.Constant142_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[3] =
    Camera_DataGen_Fcn_P.Constant143_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[4] =
    Camera_DataGen_Fcn_P.Constant144_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[5] =
    Camera_DataGen_Fcn_P.Constant_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[6] =
    Camera_DataGen_Fcn_P.Constant2_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[7] =
    Camera_DataGen_Fcn_P.Constant3_Value;

  /* Math: '<Root>/Math Function1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction1[0],
         &Camera_DataGen_Fcn_P.Constant1_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide1' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide1Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction1[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide1[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide1' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide2Inport1' incorporates:
   *  Constant: '<Root>/Constant135'
   *  Constant: '<Root>/Constant136'
   *  Constant: '<Root>/Constant137'
   *  Constant: '<Root>/Constant138'
   *  Constant: '<Root>/Constant139'
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant17'
   *  Constant: '<Root>/Constant4'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[0] =
    Camera_DataGen_Fcn_P.Constant135_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[1] =
    Camera_DataGen_Fcn_P.Constant136_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[2] =
    Camera_DataGen_Fcn_P.Constant137_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[3] =
    Camera_DataGen_Fcn_P.Constant138_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[4] =
    Camera_DataGen_Fcn_P.Constant139_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[5] =
    Camera_DataGen_Fcn_P.Constant4_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[6] =
    Camera_DataGen_Fcn_P.Constant16_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[7] =
    Camera_DataGen_Fcn_P.Constant17_Value;

  /* Math: '<Root>/Math Function2' incorporates:
   *  Constant: '<Root>/Constant15'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction2[0],
         &Camera_DataGen_Fcn_P.Constant15_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide2' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide2Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction2[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide2[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide2' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide3Inport1' incorporates:
   *  Constant: '<Root>/Constant130'
   *  Constant: '<Root>/Constant131'
   *  Constant: '<Root>/Constant132'
   *  Constant: '<Root>/Constant133'
   *  Constant: '<Root>/Constant134'
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant20'
   *  Constant: '<Root>/Constant21'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[0] =
    Camera_DataGen_Fcn_P.Constant130_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[1] =
    Camera_DataGen_Fcn_P.Constant131_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[2] =
    Camera_DataGen_Fcn_P.Constant132_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[3] =
    Camera_DataGen_Fcn_P.Constant133_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[4] =
    Camera_DataGen_Fcn_P.Constant134_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[5] =
    Camera_DataGen_Fcn_P.Constant18_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[6] =
    Camera_DataGen_Fcn_P.Constant20_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[7] =
    Camera_DataGen_Fcn_P.Constant21_Value;

  /* Math: '<Root>/Math Function3' incorporates:
   *  Constant: '<Root>/Constant19'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction3[0],
         &Camera_DataGen_Fcn_P.Constant19_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide3' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide3Inp[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction3[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide3[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide3' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide14Inport1' incorporates:
   *  Constant: '<Root>/Constant125'
   *  Constant: '<Root>/Constant126'
   *  Constant: '<Root>/Constant127'
   *  Constant: '<Root>/Constant128'
   *  Constant: '<Root>/Constant129'
   *  Constant: '<Root>/Constant22'
   *  Constant: '<Root>/Constant24'
   *  Constant: '<Root>/Constant25'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[0] =
    Camera_DataGen_Fcn_P.Constant125_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[1] =
    Camera_DataGen_Fcn_P.Constant126_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[2] =
    Camera_DataGen_Fcn_P.Constant127_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[3] =
    Camera_DataGen_Fcn_P.Constant128_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[4] =
    Camera_DataGen_Fcn_P.Constant129_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[5] =
    Camera_DataGen_Fcn_P.Constant22_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[6] =
    Camera_DataGen_Fcn_P.Constant24_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[7] =
    Camera_DataGen_Fcn_P.Constant25_Value;

  /* Math: '<Root>/Math Function14' incorporates:
   *  Constant: '<Root>/Constant23'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction14[0],
         &Camera_DataGen_Fcn_P.Constant23_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide14' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide14In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction14[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide14[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide14' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide15Inport1' incorporates:
   *  Constant: '<Root>/Constant120'
   *  Constant: '<Root>/Constant121'
   *  Constant: '<Root>/Constant122'
   *  Constant: '<Root>/Constant123'
   *  Constant: '<Root>/Constant124'
   *  Constant: '<Root>/Constant26'
   *  Constant: '<Root>/Constant28'
   *  Constant: '<Root>/Constant29'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[0] =
    Camera_DataGen_Fcn_P.Constant120_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[1] =
    Camera_DataGen_Fcn_P.Constant121_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[2] =
    Camera_DataGen_Fcn_P.Constant122_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[3] =
    Camera_DataGen_Fcn_P.Constant123_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[4] =
    Camera_DataGen_Fcn_P.Constant124_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[5] =
    Camera_DataGen_Fcn_P.Constant26_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[6] =
    Camera_DataGen_Fcn_P.Constant28_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[7] =
    Camera_DataGen_Fcn_P.Constant29_Value;

  /* Math: '<Root>/Math Function15' incorporates:
   *  Constant: '<Root>/Constant27'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction15[0],
         &Camera_DataGen_Fcn_P.Constant27_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide15' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide15In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction15[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide15[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide15' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide16Inport1' incorporates:
   *  Constant: '<Root>/Constant115'
   *  Constant: '<Root>/Constant116'
   *  Constant: '<Root>/Constant117'
   *  Constant: '<Root>/Constant118'
   *  Constant: '<Root>/Constant119'
   *  Constant: '<Root>/Constant30'
   *  Constant: '<Root>/Constant32'
   *  Constant: '<Root>/Constant33'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[0] =
    Camera_DataGen_Fcn_P.Constant115_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[1] =
    Camera_DataGen_Fcn_P.Constant116_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[2] =
    Camera_DataGen_Fcn_P.Constant117_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[3] =
    Camera_DataGen_Fcn_P.Constant118_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[4] =
    Camera_DataGen_Fcn_P.Constant119_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[5] =
    Camera_DataGen_Fcn_P.Constant30_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[6] =
    Camera_DataGen_Fcn_P.Constant32_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[7] =
    Camera_DataGen_Fcn_P.Constant33_Value;

  /* Math: '<Root>/Math Function16' incorporates:
   *  Constant: '<Root>/Constant31'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction16[0],
         &Camera_DataGen_Fcn_P.Constant31_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide16' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide16In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction16[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide16[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide16' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide17Inport1' incorporates:
   *  Constant: '<Root>/Constant110'
   *  Constant: '<Root>/Constant111'
   *  Constant: '<Root>/Constant112'
   *  Constant: '<Root>/Constant113'
   *  Constant: '<Root>/Constant114'
   *  Constant: '<Root>/Constant34'
   *  Constant: '<Root>/Constant36'
   *  Constant: '<Root>/Constant37'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[0] =
    Camera_DataGen_Fcn_P.Constant110_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[1] =
    Camera_DataGen_Fcn_P.Constant111_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[2] =
    Camera_DataGen_Fcn_P.Constant112_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[3] =
    Camera_DataGen_Fcn_P.Constant113_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[4] =
    Camera_DataGen_Fcn_P.Constant114_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[5] =
    Camera_DataGen_Fcn_P.Constant34_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[6] =
    Camera_DataGen_Fcn_P.Constant36_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[7] =
    Camera_DataGen_Fcn_P.Constant37_Value;

  /* Math: '<Root>/Math Function17' incorporates:
   *  Constant: '<Root>/Constant35'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction17[0],
         &Camera_DataGen_Fcn_P.Constant35_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide17' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide17In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction17[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide17[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide17' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide18Inport1' incorporates:
   *  Constant: '<Root>/Constant105'
   *  Constant: '<Root>/Constant106'
   *  Constant: '<Root>/Constant107'
   *  Constant: '<Root>/Constant108'
   *  Constant: '<Root>/Constant109'
   *  Constant: '<Root>/Constant38'
   *  Constant: '<Root>/Constant40'
   *  Constant: '<Root>/Constant41'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[0] =
    Camera_DataGen_Fcn_P.Constant105_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[1] =
    Camera_DataGen_Fcn_P.Constant106_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[2] =
    Camera_DataGen_Fcn_P.Constant107_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[3] =
    Camera_DataGen_Fcn_P.Constant108_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[4] =
    Camera_DataGen_Fcn_P.Constant109_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[5] =
    Camera_DataGen_Fcn_P.Constant38_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[6] =
    Camera_DataGen_Fcn_P.Constant40_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[7] =
    Camera_DataGen_Fcn_P.Constant41_Value;

  /* Math: '<Root>/Math Function18' incorporates:
   *  Constant: '<Root>/Constant39'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction18[0],
         &Camera_DataGen_Fcn_P.Constant39_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide18' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide18In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction18[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide18[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide18' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide19Inport1' incorporates:
   *  Constant: '<Root>/Constant100'
   *  Constant: '<Root>/Constant101'
   *  Constant: '<Root>/Constant102'
   *  Constant: '<Root>/Constant103'
   *  Constant: '<Root>/Constant104'
   *  Constant: '<Root>/Constant42'
   *  Constant: '<Root>/Constant44'
   *  Constant: '<Root>/Constant45'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[0] =
    Camera_DataGen_Fcn_P.Constant100_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[1] =
    Camera_DataGen_Fcn_P.Constant101_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[2] =
    Camera_DataGen_Fcn_P.Constant102_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[3] =
    Camera_DataGen_Fcn_P.Constant103_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[4] =
    Camera_DataGen_Fcn_P.Constant104_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[5] =
    Camera_DataGen_Fcn_P.Constant42_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[6] =
    Camera_DataGen_Fcn_P.Constant44_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[7] =
    Camera_DataGen_Fcn_P.Constant45_Value;

  /* Math: '<Root>/Math Function19' incorporates:
   *  Constant: '<Root>/Constant43'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction19[0],
         &Camera_DataGen_Fcn_P.Constant43_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide19' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide19In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction19[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide19[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide19' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide20Inport1' incorporates:
   *  Constant: '<Root>/Constant46'
   *  Constant: '<Root>/Constant48'
   *  Constant: '<Root>/Constant49'
   *  Constant: '<Root>/Constant95'
   *  Constant: '<Root>/Constant96'
   *  Constant: '<Root>/Constant97'
   *  Constant: '<Root>/Constant98'
   *  Constant: '<Root>/Constant99'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[0] =
    Camera_DataGen_Fcn_P.Constant95_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[1] =
    Camera_DataGen_Fcn_P.Constant96_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[2] =
    Camera_DataGen_Fcn_P.Constant97_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[3] =
    Camera_DataGen_Fcn_P.Constant98_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[4] =
    Camera_DataGen_Fcn_P.Constant99_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[5] =
    Camera_DataGen_Fcn_P.Constant46_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[6] =
    Camera_DataGen_Fcn_P.Constant48_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[7] =
    Camera_DataGen_Fcn_P.Constant49_Value;

  /* Math: '<Root>/Math Function20' incorporates:
   *  Constant: '<Root>/Constant47'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction20[0],
         &Camera_DataGen_Fcn_P.Constant47_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide20' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide20In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction20[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide20[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide20' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide21Inport1' incorporates:
   *  Constant: '<Root>/Constant50'
   *  Constant: '<Root>/Constant52'
   *  Constant: '<Root>/Constant53'
   *  Constant: '<Root>/Constant90'
   *  Constant: '<Root>/Constant91'
   *  Constant: '<Root>/Constant92'
   *  Constant: '<Root>/Constant93'
   *  Constant: '<Root>/Constant94'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[0] =
    Camera_DataGen_Fcn_P.Constant90_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[1] =
    Camera_DataGen_Fcn_P.Constant91_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[2] =
    Camera_DataGen_Fcn_P.Constant92_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[3] =
    Camera_DataGen_Fcn_P.Constant93_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[4] =
    Camera_DataGen_Fcn_P.Constant94_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[5] =
    Camera_DataGen_Fcn_P.Constant50_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[6] =
    Camera_DataGen_Fcn_P.Constant52_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[7] =
    Camera_DataGen_Fcn_P.Constant53_Value;

  /* Math: '<Root>/Math Function21' incorporates:
   *  Constant: '<Root>/Constant51'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction21[0],
         &Camera_DataGen_Fcn_P.Constant51_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide21' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide21In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction21[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide21[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide21' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide22Inport1' incorporates:
   *  Constant: '<Root>/Constant54'
   *  Constant: '<Root>/Constant56'
   *  Constant: '<Root>/Constant57'
   *  Constant: '<Root>/Constant85'
   *  Constant: '<Root>/Constant86'
   *  Constant: '<Root>/Constant87'
   *  Constant: '<Root>/Constant88'
   *  Constant: '<Root>/Constant89'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[0] =
    Camera_DataGen_Fcn_P.Constant85_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[1] =
    Camera_DataGen_Fcn_P.Constant86_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[2] =
    Camera_DataGen_Fcn_P.Constant87_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[3] =
    Camera_DataGen_Fcn_P.Constant88_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[4] =
    Camera_DataGen_Fcn_P.Constant89_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[5] =
    Camera_DataGen_Fcn_P.Constant54_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[6] =
    Camera_DataGen_Fcn_P.Constant56_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[7] =
    Camera_DataGen_Fcn_P.Constant57_Value;

  /* Math: '<Root>/Math Function22' incorporates:
   *  Constant: '<Root>/Constant55'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction22[0],
         &Camera_DataGen_Fcn_P.Constant55_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide22' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide22In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction22[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide22[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide22' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide23Inport1' incorporates:
   *  Constant: '<Root>/Constant58'
   *  Constant: '<Root>/Constant60'
   *  Constant: '<Root>/Constant61'
   *  Constant: '<Root>/Constant80'
   *  Constant: '<Root>/Constant81'
   *  Constant: '<Root>/Constant82'
   *  Constant: '<Root>/Constant83'
   *  Constant: '<Root>/Constant84'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[0] =
    Camera_DataGen_Fcn_P.Constant80_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[1] =
    Camera_DataGen_Fcn_P.Constant81_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[2] =
    Camera_DataGen_Fcn_P.Constant82_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[3] =
    Camera_DataGen_Fcn_P.Constant83_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[4] =
    Camera_DataGen_Fcn_P.Constant84_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[5] =
    Camera_DataGen_Fcn_P.Constant58_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[6] =
    Camera_DataGen_Fcn_P.Constant60_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[7] =
    Camera_DataGen_Fcn_P.Constant61_Value;

  /* Math: '<Root>/Math Function23' incorporates:
   *  Constant: '<Root>/Constant59'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction23[0],
         &Camera_DataGen_Fcn_P.Constant59_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide23' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide23In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction23[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide23[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide23' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide24Inport1' incorporates:
   *  Constant: '<Root>/Constant62'
   *  Constant: '<Root>/Constant64'
   *  Constant: '<Root>/Constant65'
   *  Constant: '<Root>/Constant75'
   *  Constant: '<Root>/Constant76'
   *  Constant: '<Root>/Constant77'
   *  Constant: '<Root>/Constant78'
   *  Constant: '<Root>/Constant79'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[0] =
    Camera_DataGen_Fcn_P.Constant75_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[1] =
    Camera_DataGen_Fcn_P.Constant76_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[2] =
    Camera_DataGen_Fcn_P.Constant77_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[3] =
    Camera_DataGen_Fcn_P.Constant78_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[4] =
    Camera_DataGen_Fcn_P.Constant79_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[5] =
    Camera_DataGen_Fcn_P.Constant62_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[6] =
    Camera_DataGen_Fcn_P.Constant64_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[7] =
    Camera_DataGen_Fcn_P.Constant65_Value;

  /* Math: '<Root>/Math Function24' incorporates:
   *  Constant: '<Root>/Constant63'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction24[0],
         &Camera_DataGen_Fcn_P.Constant63_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide24' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide24In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction24[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide24[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide24' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDivide25Inport1' incorporates:
   *  Constant: '<Root>/Constant66'
   *  Constant: '<Root>/Constant68'
   *  Constant: '<Root>/Constant69'
   *  Constant: '<Root>/Constant70'
   *  Constant: '<Root>/Constant71'
   *  Constant: '<Root>/Constant72'
   *  Constant: '<Root>/Constant73'
   *  Constant: '<Root>/Constant74'
   */
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[0] =
    Camera_DataGen_Fcn_P.Constant70_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[1] =
    Camera_DataGen_Fcn_P.Constant71_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[2] =
    Camera_DataGen_Fcn_P.Constant72_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[3] =
    Camera_DataGen_Fcn_P.Constant73_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[4] =
    Camera_DataGen_Fcn_P.Constant74_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[5] =
    Camera_DataGen_Fcn_P.Constant66_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[6] =
    Camera_DataGen_Fcn_P.Constant68_Value;
  Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[7] =
    Camera_DataGen_Fcn_P.Constant69_Value;

  /* Math: '<Root>/Math Function25' incorporates:
   *  Constant: '<Root>/Constant67'
   */
  memcpy(&Camera_DataGen_Fcn_B.MathFunction25[0],
         &Camera_DataGen_Fcn_P.Constant67_Value[0], 25U * sizeof(real_T));

  /* Product: '<Root>/Divide25' */
  memcpy(&tmp[0], &Camera_DataGen_Fcn_B.TmpSignalConversionAtDivide25In[0],
         sizeof(real_T) << 3U);
  memcpy(&tmp_0[0], &Camera_DataGen_Fcn_B.MathFunction25[0], 25U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.Divide25[i + (i_0 << 3)] = tmp[i] * tmp_0[i_0];
    }
  }

  /* End of Product: '<Root>/Divide25' */

  /* Sum: '<Root>/Add' */
  for (i = 0; i < 200; i++) {
    Camera_DataGen_Fcn_B.Add[i] =
      (((((((((((((((((((((((Camera_DataGen_Fcn_B.Divide4[i] +
      Camera_DataGen_Fcn_B.Divide5[i]) + Camera_DataGen_Fcn_B.Divide6[i]) +
      Camera_DataGen_Fcn_B.Divide7[i]) + Camera_DataGen_Fcn_B.Divide8[i]) +
                         Camera_DataGen_Fcn_B.Divide9[i]) +
                        Camera_DataGen_Fcn_B.Divide10[i]) +
                       Camera_DataGen_Fcn_B.Divide11[i]) +
                      Camera_DataGen_Fcn_B.Divide12[i]) +
                     Camera_DataGen_Fcn_B.Divide13[i]) +
                    Camera_DataGen_Fcn_B.Divide1[i]) +
                   Camera_DataGen_Fcn_B.Divide2[i]) +
                  Camera_DataGen_Fcn_B.Divide3[i]) +
                 Camera_DataGen_Fcn_B.Divide14[i]) +
                Camera_DataGen_Fcn_B.Divide15[i]) +
               Camera_DataGen_Fcn_B.Divide16[i]) +
              Camera_DataGen_Fcn_B.Divide17[i]) +
             Camera_DataGen_Fcn_B.Divide18[i]) + Camera_DataGen_Fcn_B.Divide19[i])
           + Camera_DataGen_Fcn_B.Divide20[i]) + Camera_DataGen_Fcn_B.Divide21[i])
         + Camera_DataGen_Fcn_B.Divide22[i]) + Camera_DataGen_Fcn_B.Divide23[i])
       + Camera_DataGen_Fcn_B.Divide24[i]) + Camera_DataGen_Fcn_B.Divide25[i];
  }

  /* End of Sum: '<Root>/Add' */

  /* Math: '<Root>/Math Function64' */
  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 25; i_0++) {
      Camera_DataGen_Fcn_B.MathFunction64[i_0 + 25 * i] =
        Camera_DataGen_Fcn_B.Add[(i_0 << 3) + i];
    }
  }

  /* End of Math: '<Root>/Math Function64' */

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Camera_RxTime'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_jb = (real_T)Get_Camera_RxTime();

  /* Gain: '<S2>/N->E' */
  Camera_DataGen_Fcn_B.NE_c2 = Camera_DataGen_Fcn_P.NE_Gain_df *
    Camera_DataGen_Fcn_B.DataTypeConversion_jb;

  /* Memory: '<S87>/Memory' */
  Camera_DataGen_Fcn_B.Memory = Camera_DataGen_Fcn_DW.Memory_PreviousInput;

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/Camera_Trigger'
   */
  Camera_DataGen_Fcn_B.DataTypeConversion_mu = Get_Camera_Trigger();

  /* Gain: '<S3>/N->E' */
  Camera_DataGen_Fcn_B.NE_bw = (uint16_T)((uint32_T)
    Camera_DataGen_Fcn_P.NE_Gain_awq *
    Camera_DataGen_Fcn_B.DataTypeConversion_mu);

  /* RelationalOperator: '<S88>/Compare' incorporates:
   *  Constant: '<S88>/Constant'
   */
  Camera_DataGen_Fcn_B.Compare = (uint8_T)(Camera_DataGen_Fcn_B.NE_bw ==
    Camera_DataGen_Fcn_P.CompareToConstant_const);

  /* Switch: '<S87>/Switch' */
  if (Camera_DataGen_Fcn_B.Compare > Camera_DataGen_Fcn_P.Switch_Threshold) {
    /* Logic: '<S87>/Logical Operator' */
    Camera_DataGen_Fcn_B.LogicalOperator = !Camera_DataGen_Fcn_B.Memory;
    Camera_DataGen_Fcn_B.Switch = Camera_DataGen_Fcn_B.LogicalOperator;
  } else {
    Camera_DataGen_Fcn_B.Switch = Camera_DataGen_Fcn_B.Memory;
  }

  /* End of Switch: '<S87>/Switch' */

  /* Chart: '<Root>/Camera_Data_Collect' incorporates:
   *  TriggerPort: '<S1>/Camera_Trigger'
   */
  zcEvent = (((Camera_DataGen_Fcn_PrevZCX.Camera_Data_Collect_Trig_ZCE ==
               POS_ZCSIG) != Camera_DataGen_Fcn_B.Switch) &&
             (Camera_DataGen_Fcn_PrevZCX.Camera_Data_Collect_Trig_ZCE !=
              UNINITIALIZED_ZCSIG));
  if (zcEvent) {
    Camera_DataGen_Fcn_B.Camera_Trigger_f = (int8_T)(Camera_DataGen_Fcn_B.Switch
      ? RISING_ZCEVENT : FALLING_ZCEVENT);

    /* Gateway: Camera_Data_Collect */
    /* Event: '<S1>:66' */
    /* During: Camera_Data_Collect */
    /* Entry Internal: Camera_Data_Collect */
    /* Transition: '<S1>:82' */
    Camera_DataGen_Fcn_DW.k = 0U;
    memset(&Camera_DataGen_Fcn_B.DataOutput[0], 0, 200U * sizeof(real_T));
    while (Camera_DataGen_Fcn_DW.k < 25) {
      /* Transition: '<S1>:141' */
      if (Camera_DataGen_Fcn_B.MathFunction64[Camera_DataGen_Fcn_DW.k] != 0.0) {
        /* Transition: '<S1>:175' */
        if (!(Camera_DataGen_Fcn_B.MathFunction64[Camera_DataGen_Fcn_DW.k] >
              64.0)) {
          /* Transition: '<S1>:178' */
          Camera_DataGen__ObstacleProcess();
        } else {
          /* Transition: '<S1>:84' */
          /* Transition: '<S1>:173' */
          /* this is TSR or TFL */
        }

        /* Transition: '<S1>:86' */
      } else {
        /* Transition: '<S1>:174' */
      }

      /* Transition: '<S1>:136' */
      Camera_DataGen_Fcn_DW.k++;
    }

    /* Transition: '<S1>:79' */
    /* Transition: '<S1>:137' */
    if (Camera_DataGen_Fcn_B.Global_Trigger_Camera_m == 0) {
      /* Transition: '<S1>:219' */
      /* Transition: '<S1>:215' */
      Camera_DataGen_Fcn_B.Global_Trigger_Camera_m = 1U;
      Camera_DataGen_Fcn_B.Camera_RxTime_Out = Camera_DataGen_Fcn_B.NE_c2;

      /* Global_Trigger_Camera is the output of Camera Data Gen, and the input of Global Fusion center,
         the signal is 1 to 0 and 0 to 1, which means that either rise or fall should trigger the Globao Fusion Center. */
      /* Transition: '<S1>:210' */
    } else {
      /* Transition: '<S1>:212' */
      Camera_DataGen_Fcn_B.Global_Trigger_Camera_m = 0U;
      Camera_DataGen_Fcn_B.Camera_RxTime_Out = Camera_DataGen_Fcn_B.NE_c2;
    }

    /* Transition: '<S1>:213' */
  }

  Camera_DataGen_Fcn_PrevZCX.Camera_Data_Collect_Trig_ZCE = (uint8_T)
    (Camera_DataGen_Fcn_B.Switch ? (int32_T)POS_ZCSIG : (int32_T)ZERO_ZCSIG);
  for (i = 0; i < 200; i++) {
    /* Gain: '<S4>/E->N' */
    Camera_DataGen_Fcn_B.EN[i] = Camera_DataGen_Fcn_P.EN_Gain *
      Camera_DataGen_Fcn_B.DataOutput[i];

    /* DataTypeConversion: '<S4>/Data Type Conversion' */
   Set_Camera_Obj( i , Camera_DataGen_Fcn_B.EN[i]);
  }

  /* Gain: '<S6>/E->N' */
  Camera_DataGen_Fcn_B.EN_e = (uint16_T)((uint32_T)
    Camera_DataGen_Fcn_P.EN_Gain_l *
    Camera_DataGen_Fcn_B.Global_Trigger_Camera_m);

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  Set_Global_Trigger_Camera((uint8_T)(Camera_DataGen_Fcn_B.EN_e >> 7));

  /* Gain: '<S5>/E->N' */
  Camera_DataGen_Fcn_B.EN_c = Camera_DataGen_Fcn_P.EN_Gain_b *
    Camera_DataGen_Fcn_B.Camera_RxTime_Out;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  Set_Global_Camera_RxTime(Camera_DataGen_Fcn_B.EN_c);

  /* Update for Memory: '<S87>/Memory' */
  Camera_DataGen_Fcn_DW.Memory_PreviousInput = Camera_DataGen_Fcn_B.Switch;
}

/* Model initialize function */
void Camera_DataGen_Fcn_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Camera_DataGen_Fcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Camera_DataGen_Fcn_B), 0,
                sizeof(B_Camera_DataGen_Fcn_T));

  /* states (dwork) */
  (void) memset((void *)&Camera_DataGen_Fcn_DW, 0,
                sizeof(DW_Camera_DataGen_Fcn_T));
  Camera_DataGen_Fcn_PrevZCX.Camera_Data_Collect_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* InitializeConditions for Memory: '<S87>/Memory' */
  Camera_DataGen_Fcn_DW.Memory_PreviousInput = Camera_DataGen_Fcn_P.Memory_X0;

  /* InitializeConditions for Chart: '<Root>/Camera_Data_Collect' */
  Camera_DataGen_Fcn_DW.k = 0U;
  memset(&Camera_DataGen_Fcn_B.DataOutput[0], 0, 200U * sizeof(real_T));
  Camera_DataGen_Fcn_B.Global_Trigger_Camera_m = 0U;
  Camera_DataGen_Fcn_B.Camera_RxTime_Out = 0.0;
}

/* Model terminate function */
void Camera_DataGen_Fcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
