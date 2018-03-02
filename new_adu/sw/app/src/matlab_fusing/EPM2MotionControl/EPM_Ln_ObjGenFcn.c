/*
 * File: EPM_Ln_ObjGenFcn.c
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
#include "interface.h"

/* Block signals (auto storage) */
B_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_B;

/* Block states (auto storage) */
DW_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_U;

/* Real-time model */
RT_MODEL_EPM_Ln_ObjGenFcn_T EPM_Ln_ObjGenFcn_M_;
RT_MODEL_EPM_Ln_ObjGenFcn_T *const EPM_Ln_ObjGenFcn_M = &EPM_Ln_ObjGenFcn_M_;


/* Forward declaration for local functions */
static real_T EPM_Ln_ObjGenFcn_ObsMFlgCalFromPath(real_T XPos, real_T YPos,
  real_T Width, real_T C0L, real_T C1L, real_T C2L, real_T C3L, real_T C0R,
  real_T C1R, real_T C2R, real_T C3R, real_T QL, real_T QR, real_T InLaneFactor,
  real_T ObsMDistance);
static boolean_T EPM_Ln_ObjGenFcn_ObsMFlgCalFromTraj(real_T XPos, real_T YPos,
  real_T Width, real_T LaneWidth, real_T ObsMDistance);
static boolean_T EPM_Ln_ObjGenFcn_ObsCutInFlgCalFromTraj(real_T XPos, real_T
  YPos, real_T Width, real_T LaneWidth, real_T YVel);


/* Function for Chart: '<S254>/ObsMCalFromPath' */
static real_T EPM_Ln_ObjGenFcn_ObsMFlgCalFromPath(real_T XPos, real_T YPos,
  real_T Width, real_T C0L, real_T C1L, real_T C2L, real_T C3L, real_T C0R,
  real_T C1R, real_T C2R, real_T C3R, real_T QL, real_T QR, real_T InLaneFactor,
  real_T ObsMDistance)
{
  real_T ObsMFlgOut;

  /* Graphical Function 'ObsMFlgCalFromPath': '<S259>:177' */
  /* Transition: '<S259>:254' */
  if (XPos < 2.0 * EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn / 3.6 + ObsMDistance) {
    /* Transition: '<S259>:255' */
    if ((QL > 1.0) && (QR > 1.0) && (fabs(C0R - C0L) < 4.5)) {
      /* Transition: '<S259>:196' */
      if ((YPos < (((C1R * XPos + C0R) + C2R * XPos * XPos) + C3R * XPos * XPos *
                   XPos) + (0.5 - InLaneFactor) * Width) && (YPos > (((C1L *
              XPos + C0L) + C2L * XPos * XPos) + C3L * XPos * XPos * XPos) -
           (0.5 - InLaneFactor) * Width)) {
        /* Transition: '<S259>:197' */
        /* Transition: '<S259>:200' */
        ObsMFlgOut = 1.0;

        /* Transition: '<S259>:216' */
      } else {
        /* Transition: '<S259>:199' */
        ObsMFlgOut = 0.0;
      }

      /* Transition: '<S259>:215' */
      /* Transition: '<S259>:214' */
      /* Transition: '<S259>:213' */
      /* Transition: '<S259>:212' */
      /* Transition: '<S259>:211' */
    } else {
      /* Transition: '<S259>:198' */
      if (((QL > 1.0) && (QR <= 1.0)) || ((QL > 1.0) && (QR > 1.0) && (fabs(C0R
             - C0L) > 4.5) && (C0R + C0L >= 0.0))) {
        /* Constant: '<S254>/Constant2' */
        /* Transition: '<S259>:202' */
        if ((YPos < ((((C1L * XPos + C0L) + C2L * XPos * XPos) + C3L * XPos *
                      XPos * XPos) + EPM_Ln_ObjGenFcn_P.Constant2_Value) + (0.5
              - InLaneFactor) * Width) && (YPos > (((C1L * XPos + C0L) + C2L *
               XPos * XPos) + C3L * XPos * XPos * XPos) - (0.5 - InLaneFactor) *
             Width)) {
          /* Transition: '<S259>:201' */
          /* Transition: '<S259>:205' */
          ObsMFlgOut = 1.0;

          /* Transition: '<S259>:214' */
          /* Transition: '<S259>:213' */
          /* Transition: '<S259>:212' */
          /* Transition: '<S259>:211' */
        } else {
          /* Transition: '<S259>:204' */
          ObsMFlgOut = 0.0;

          /* Transition: '<S259>:213' */
          /* Transition: '<S259>:212' */
          /* Transition: '<S259>:211' */
        }
      } else {
        /* Transition: '<S259>:203' */
        if (((QL <= 1.0) && (QR > 1.0)) || ((QL > 1.0) && (QR > 1.0) && (fabs
              (C0R - C0L) > 4.5) && (C0R + C0L < 0.0))) {
          /* Constant: '<S254>/Constant2' */
          /* Transition: '<S259>:206' */
          if ((YPos < (((C1R * XPos + C0R) + C2R * XPos * XPos) + C3R * XPos *
                       XPos * XPos) + (0.5 - InLaneFactor) * Width) && (YPos >
               ((((C1R * XPos + C0R) + C2R * XPos * XPos) + C3R * XPos * XPos *
                 XPos) - EPM_Ln_ObjGenFcn_P.Constant2_Value) - (0.5 -
                InLaneFactor) * Width)) {
            /* Transition: '<S259>:207' */
            /* Transition: '<S259>:210' */
            ObsMFlgOut = 1.0;

            /* Transition: '<S259>:212' */
            /* Transition: '<S259>:211' */
          } else {
            /* Transition: '<S259>:209' */
            ObsMFlgOut = 0.0;

            /* Transition: '<S259>:211' */
          }
        } else {
          /* Transition: '<S259>:208' */
          ObsMFlgOut = 0.0;
        }
      }
    }

    /* Transition: '<S259>:257' */
  } else {
    /* Transition: '<S259>:258' */
    ObsMFlgOut = 0.0;
  }

  /* Transition: '<S259>:260' */
  return ObsMFlgOut;
}

/* Function for Chart: '<S254>/ObsMCalFromTraj' */
static boolean_T EPM_Ln_ObjGenFcn_ObsMFlgCalFromTraj(real_T XPos, real_T YPos,
  real_T Width, real_T LaneWidth, real_T ObsMDistance)
{
  boolean_T ObsMFlgOut;

  /* Inport: '<Root>/VehSpdAvgDrvn' incorporates:
   *  Constant: '<S254>/KInLaneFactor'
   */
  /* Graphical Function 'ObsMFlgCalFromTraj': '<S260>:27' */
  /* Transition: '<S260>:45' */
  if ((XPos < 2.0 * EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn / 3.6 + ObsMDistance) &&
      (fabs(YPos - XPos * XPos * EPM_Ln_ObjGenFcn_B.Switch / 2.0) < (0.5 -
        EPM_Ln_ObjGenFcn_P.KInLaneFactor_Value) * Width + LaneWidth / 2.0)) {
    /* Transition: '<S260>:132' */
    /* Transition: '<S260>:135' */
    ObsMFlgOut = true;

    /* Transition: '<S260>:136' */
  } else {
    /* Transition: '<S260>:48' */
    ObsMFlgOut = false;
  }

  /* End of Inport: '<Root>/VehSpdAvgDrvn' */
  /* Transition: '<S260>:138' */
  return ObsMFlgOut;
}

/* Function for Chart: '<S254>/ObsCutInCalFromTraj' */
static boolean_T EPM_Ln_ObjGenFcn_ObsCutInFlgCalFromTraj(real_T XPos, real_T
  YPos, real_T Width, real_T LaneWidth, real_T YVel)
{
  boolean_T ObsCutInFlgOut;

  /* Inport: '<Root>/VehSpdAvgDrvn' incorporates:
   *  Constant: '<S254>/Constant11'
   */
  /* Graphical Function 'ObsCutInFlgCalFromTraj': '<S258>:27' */
  /* Transition: '<S258>:45' */
  if ((EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn < 150.0) && (XPos < 1.2 *
       EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn / 3.6 + 5.0) && (fabs(YPos - XPos * XPos
        * EPM_Ln_ObjGenFcn_B.Switch / 2.0) > (0.5 -
        EPM_Ln_ObjGenFcn_P.Constant11_Value) * Width + LaneWidth / 2.0) && (fabs
       (YPos - XPos * XPos * EPM_Ln_ObjGenFcn_B.Switch / 2.0) < (Width + 2.0) *
       0.5 + 2.5) && ((YPos - XPos * XPos * EPM_Ln_ObjGenFcn_B.Switch / 2.0) *
                      YVel < 0.0) && (fabs((fabs(YPos - XPos * XPos *
          EPM_Ln_ObjGenFcn_B.Switch / 2.0) - ((0.5 -
           EPM_Ln_ObjGenFcn_P.Constant11_Value) * Width + LaneWidth / 2.0)) /
        YVel) < 1.0)) {
    /* Transition: '<S258>:132' */
    /* Transition: '<S258>:135' */
    ObsCutInFlgOut = true;

    /* Transition: '<S258>:136' */
  } else {
    /* Transition: '<S258>:48' */
    ObsCutInFlgOut = false;
  }

  /* End of Inport: '<Root>/VehSpdAvgDrvn' */
  /* Transition: '<S258>:138' */
  return ObsCutInFlgOut;
}

/* Model step function */
void EPM_Ln_ObjGenFcn_step(void)
{
  real_T i;
  boolean_T Flg;
  real_T rtb_NE;
  real_T rtb_NE_df;
  real_T rtb_NE_b12;
  real_T rtb_NE_c2;
  real_T rtb_NE_iu;
  real_T rtb_NE_id;
  real_T rtb_NE_ki;
  real_T rtb_NE_k5;
  real_T rtb_NE_ef;
  real_T rtb_NE_f;
  real_T rtb_NE_h;
  real_T rtb_NE_a;
  real_T rtb_NE_p;
  real_T rtb_NE_gn;
  real_T rtb_NE_m;
  real_T rtb_NE_k0;
  real_T rtb_NE_p5;
  real_T rtb_NE_ey;
  real_T rtb_NE_mwd;
  real_T rtb_NE_bq;
  real_T rtb_NE_jg;
  real_T rtb_NE_jd;
  real_T rtb_NE_g;
  real_T rtb_NE_ls;
  real_T rtb_NE_l;
  real_T rtb_NE_kgk;
  real_T rtb_NE_n;
  real_T rtb_NE_l1;
  real_T rtb_NE_fy;
  real_T rtb_NE_o;
  real_T rtb_NE_n5;
  real_T rtb_NE_go;
  real_T rtb_NE_pw;
  real_T rtb_NE_i;
  real_T rtb_NE_ic;
  real_T rtb_NE_ag;
  real_T rtb_NE_c;
  real_T rtb_NE_g4;
  real_T rtb_NE_k;
  real_T rtb_NE_drl;
  real_T rtb_NE_mr;
  real_T rtb_NE_i4;
  real_T rtb_NE_ec;
  real_T rtb_NE_mu;
  real_T rtb_NE_d;
  real_T rtb_NE_e;
  real_T rtb_NE_bl;
  real_T rtb_NE_pt;
  real_T rtb_NE_aj;
  real_T rtb_NE_jz;
  real_T rtb_NE_gf;
  real_T rtb_NE_kdn;
  real_T rtb_NE_o1;
  real_T rtb_NE_myk;
  real_T rtb_NE_ne;
  real_T rtb_NE_pec;
  real_T rtb_NE_gb;
  real_T rtb_NE_hm;
  real_T rtb_NE_j2;
  real_T rtb_NE_ob;
  real_T rtb_NE_n2;
  real_T rtb_NE_aii;
  real_T rtb_NE_cg;
  real_T rtb_NE_j;
  real_T rtb_NE_fe;
  real_T rtb_NE_b;
  real_T rtb_NE_gzu;
  real_T rtb_NE_ok;
  real_T rtb_NE_cj;
  real_T rtb_NE_km;
  real_T rtb_NE_gi;
  real_T rtb_NE_ivo;
  real_T rtb_NE_c4;
  real_T rtb_NE_ifn;
  real_T rtb_NE_ai;
  real_T rtb_NE_ao;
  real_T rtb_NE_do;
  real_T rtb_NE_pn;
  real_T rtb_NE_cd;
  real_T rtb_NE_oj;
  real_T rtb_NE_cb;
  real_T rtb_NE_gl;
  real_T rtb_NE_f0;
  real_T rtb_NE_b3;
  real_T rtb_NE_la;
  real_T rtb_NE_er;
  real_T rtb_NE_ah;
  real_T rtb_NE_ab;
  real_T rtb_NE_hj;
  real_T rtb_NE_fdw;
  real_T rtb_NE_of;
  real_T rtb_NE_gso;
  real_T rtb_NE_hc;
  real_T rtb_NE_h0;
  real_T rtb_NE_lo0;
  real_T rtb_NE_ht;
  real_T rtb_NE_cz;
  real_T rtb_NE_le;
  real_T rtb_NE_ptn;
  real_T rtb_NE_pp;
  real_T rtb_NE_eo;
  real_T rtb_NE_dq;
  real_T rtb_NE_ejz;
  real_T rtb_NE_pe;
  real_T rtb_NE_ba;
  real_T rtb_NE_ad;
  real_T rtb_NE_o3j;
  real_T rtb_NE_myi;
  real_T rtb_NE_pk;
  real_T rtb_NE_fdi;
  real_T rtb_NE_p0;
  real_T rtb_NE_kp;
  real_T rtb_NE_lg;
  real_T rtb_NE_f1;
  real_T rtb_NE_bbt;
  real_T rtb_NE_hg;
  real_T rtb_NE_aw;
  real_T rtb_NE_el;
  real_T rtb_NE_ka;
  real_T rtb_NE_g2;
  real_T rtb_NE_lp;
  real_T rtb_NE_cj2;
  real_T rtb_NE_fz;
  real_T rtb_NE_gx;
  real_T rtb_NE_eqb;
  real_T rtb_NE_dx1;
  real_T rtb_NE_e3;
  real_T rtb_NE_ol;
  real_T rtb_NE_o2f;
  real_T rtb_NE_ck;
  real_T rtb_NE_k4;
  real_T rtb_NE_lz;
  real_T rtb_NE_co;
  real_T rtb_NE_ib;
  real_T rtb_NE_on;
  real_T rtb_NE_nv;
  real_T rtb_NE_j4i;
  real_T rtb_NE_iy;
  real_T rtb_NE_kq;
  real_T rtb_NE_mn;
  real_T rtb_NE_kv;
  real_T rtb_NE_omc;
  real_T NE;
  real_T NE_d;
  real_T NE_h;
  real_T NE_o;
  real_T NE_n;
  real_T NE_j;
  real_T NE_p;
  real_T NE_av;
  real_T NE_na;
  real_T NE_m;
  real_T ObsCutInStatus_a;
  real_T ObsCutInVelX_f;
  real_T ObsCutInPosY_m;
  real_T ObsCutInPosX_d;
  real_T ObsCutInLane_m;
  real_T ObsCutInID_k;
  real_T ObsCutInCutIn_p;
  real_T ObsCutInAngle_k;
  real_T ObsCutInAccelX_d;
  int32_T ObsCutInFlg_e;
  real_T ObsCutInITTC;
  real_T ObsCutInWidth_d;
  real_T TmpSignalConversionAtSFunctionInport1_b[140];
  real_T UnitDelay1;
  real_T ObsMVelX_g;
  real_T ObsMPosX_j;
  real_T ObsMAccelX_c;
  real_T ObsMStatus_l;
  real_T ObsMID_c;
  real_T ObsMCutIn_n;
  real_T ObsMPosY_k;
  int32_T ObsMFlg_d;
  real_T ObsMLane_g;
  real_T ObsMAngle_m;
  real_T ObsMITTC_a;
  real_T ObsMWidth_m;

  /* Gain: '<S225>/N->E' incorporates:
   *  DataTypeConversion: '<S225>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Quality'
   */
  NE = EPM_Ln_ObjGenFcn_P.NE_Gain * (real_T)Get_LKA_Left_Lane_A_Lane_Quality();

  /* Saturate: '<S17>/Saturation' */
  if (NE > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat;
  } else if (NE < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat;
  } else {
    i = NE;
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Gain: '<S17>/E->N'
   *  Saturate: '<S17>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Left_Lane_Quality((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* Gain: '<S38>/N->E' incorporates:
   *  DataTypeConversion: '<S38>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C0'
   */
  NE_d = EPM_Ln_ObjGenFcn_P.NE_Gain_h * (real_T)
    Get_LKA_Left_Lane_A_Lane_Lane_Model_C0();

  /* Saturate: '<S12>/Saturation' */
  if (NE_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_e) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_e;
  } else if (NE_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_l) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_l;
  } else {
    i = NE_d;
  }

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Gain: '<S12>/E->N'
   *  Saturate: '<S12>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_c * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Left_Lane_C0_PosRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S12>/Data Type Conversion' */

  /* Gain: '<S41>/N->E' incorporates:
   *  DataTypeConversion: '<S41>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C2'
   */
  NE_h = EPM_Ln_ObjGenFcn_P.NE_Gain_a * (real_T)
    Get_LKA_Left_Lane_A_Lane_Lane_Model_C2();

  /* Saturate: '<S14>/Saturation' */
  if (NE_h > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_l) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_l;
  } else if (NE_h < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_d) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_d;
  } else {
    i = NE_h;
  }

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Gain: '<S14>/E->N'
   *  Saturate: '<S14>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_m * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Left_Lane_C2_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Gain: '<S42>/N->E' incorporates:
   *  DataTypeConversion: '<S42>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_A_Lane_Lane_Model_C3'
   */
  NE_o = EPM_Ln_ObjGenFcn_P.NE_Gain_o * (real_T)
    Get_LKA_Left_Lane_A_Lane_Lane_Model_C3();

  /* Saturate: '<S15>/Saturation' */
  if (NE_o > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_f) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_f;
  } else if (NE_o < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_c) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_c;
  } else {
    i = NE_o;
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion' incorporates:
   *  Gain: '<S15>/E->N'
   *  Saturate: '<S15>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_e * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Left_Lane_C3_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S15>/Data Type Conversion' */

  /* Gain: '<S40>/N->E' incorporates:
   *  DataTypeConversion: '<S40>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_B_Lane_Model_C1'
   */
  NE_n = EPM_Ln_ObjGenFcn_P.NE_Gain_m * (real_T)
    Get_LKA_Left_Lane_B_Lane_Model_C1();

  /* Saturate: '<S13>/Saturation' */
  if (NE_n > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_d) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_d;
  } else if (NE_n < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o;
  } else {
    i = NE_n;
  }

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Gain: '<S13>/E->N'
   *  Saturate: '<S13>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_cc * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Left_Lane_C1_PosTLeft((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

  /* Gain: '<S232>/N->E' incorporates:
   *  DataTypeConversion: '<S232>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_B_View_Range_End'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_b * (real_T)Get_LKA_Left_Lane_B_View_Range_End();

  /* Saturate: '<S16>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_j) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_j;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_j) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_j;
    }
  }

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
   *  Gain: '<S16>/E->N'
   *  Saturate: '<S16>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_cj * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Left_Lane_End((uint16_T)(i < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-i : (int32_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Gain: '<S226>/N->E' incorporates:
   *  DataTypeConversion: '<S226>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_A_Quality'
   */
  NE_j = EPM_Ln_ObjGenFcn_P.NE_Gain_k * (real_T)Get_LKA_Right_Lane_A_Quality();

  /* Saturate: '<S34>/Saturation' */
  if (NE_j > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_b) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_b;
  } else if (NE_j < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jn) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jn;
  } else {
    i = NE_j;
  }

  /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
   *  Gain: '<S34>/E->N'
   *  Saturate: '<S34>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_p * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Right_Lane_Quality((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
                                  (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S34>/Data Type Conversion' */

  /* Gain: '<S39>/N->E' incorporates:
   *  DataTypeConversion: '<S39>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_A_Lane_Model_C0'
   */
  NE_p = EPM_Ln_ObjGenFcn_P.NE_Gain_p * (real_T)
    Get_LKA_Right_Lane_A_Lane_Model_C0();

  /* Saturate: '<S29>/Saturation' */
  if (NE_p > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_o) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_o;
  } else if (NE_p < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_e) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_e;
  } else {
    i = NE_p;
  }

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Gain: '<S29>/E->N'
   *  Saturate: '<S29>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_d * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Right_Lane_C0_PosRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S29>/Data Type Conversion' */

  /* Gain: '<S43>/N->E' incorporates:
   *  DataTypeConversion: '<S43>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_A_Lane_Model_C2'
   */
  NE_av = EPM_Ln_ObjGenFcn_P.NE_Gain_bl * (real_T)
    Get_LKA_Right_Lane_A_Lane_Model_C2();

  /* Saturate: '<S31>/Saturation' */
  if (NE_av > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_c) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_c;
  } else if (NE_av < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_i) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_i;
  } else {
    i = NE_av;
  }

  /* DataTypeConversion: '<S31>/Data Type Conversion' incorporates:
   *  Gain: '<S31>/E->N'
   *  Saturate: '<S31>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_i * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Right_Lane_C2_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S31>/Data Type Conversion' */

  /* Gain: '<S44>/N->E' incorporates:
   *  DataTypeConversion: '<S44>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_A_Lane_Model_C3'
   */
  NE_na = EPM_Ln_ObjGenFcn_P.NE_Gain_d * (real_T)
    Get_LKA_Right_Lane_A_Lane_Model_C3();

  /* Saturate: '<S32>/Saturation' */
  if (NE_na > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_m) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_m;
  } else if (NE_na < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jd) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jd;
  } else {
    i = NE_na;
  }

  /* DataTypeConversion: '<S32>/Data Type Conversion' incorporates:
   *  Gain: '<S32>/E->N'
   *  Saturate: '<S32>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_k * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Right_Lane_C3_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S32>/Data Type Conversion' */

  /* Gain: '<S45>/N->E' incorporates:
   *  DataTypeConversion: '<S45>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_B_Lane_Model_C1'
   */
  NE_m = EPM_Ln_ObjGenFcn_P.NE_Gain_c * (real_T)
    Get_LKA_Right_Lane_B_Lane_Model_C1();

  /* Saturate: '<S30>/Saturation' */
  if (NE_m > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fp) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fp;
  } else if (NE_m < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_cn) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_cn;
  } else {
    i = NE_m;
  }

  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  Gain: '<S30>/E->N'
   *  Saturate: '<S30>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_k0 * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Right_Lane_C1_PosTLeft((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S30>/Data Type Conversion' */

  /* Gain: '<S233>/N->E' incorporates:
   *  DataTypeConversion: '<S233>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_B_View_Range_End'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_e * (real_T)Get_LKA_Right_Lane_B_View_Range_End
    ();

  /* Saturate: '<S33>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_a) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_a;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_m) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_m;
    }
  }

  /* DataTypeConversion: '<S33>/Data Type Conversion' incorporates:
   *  Gain: '<S33>/E->N'
   *  Saturate: '<S33>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_mi * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Right_Lane_End((uint16_T)(i < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-i : (int32_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S33>/Data Type Conversion' */

  /* Gain: '<S227>/N->E' incorporates:
   *  DataTypeConversion: '<S227>/Data Type Conversion'
   *  Inport: '<Root>/Next_Left_Lane_A_Quality'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_mj * (real_T)Get_Next_Left_Lane_A_Quality();

  /* Saturate: '<S23>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_i) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_i;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_d1) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_d1;
    }
  }

  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  Gain: '<S23>/E->N'
   *  Saturate: '<S23>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_n * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Next_Left_Lane_Quality((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S23>/Data Type Conversion' */

  /* Gain: '<S67>/N->E' incorporates:
   *  DataTypeConversion: '<S67>/Data Type Conversion'
   *  Inport: '<Root>/Next_Left_Lane_A_Lane_Model_C0'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_cg * (real_T)Get_Next_Left_Lane_A_Lane_Model_C0
    ();

  /* Saturate: '<S19>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_lu) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_lu;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_a) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_a;
    }
  }

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  Gain: '<S19>/E->N'
   *  Saturate: '<S19>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_g * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Left_Lane_C0_PosRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */

  /* Gain: '<S69>/N->E' incorporates:
   *  DataTypeConversion: '<S69>/Data Type Conversion'
   *  Inport: '<Root>/Next_Left_Lane_A_Lane_Model_C2'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_ml * (real_T)Get_Next_Left_Lane_A_Lane_Model_C2
    ();

  /* Saturate: '<S21>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_l2) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_l2;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_h) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_h;
    }
  }

  /* DataTypeConversion: '<S21>/Data Type Conversion' incorporates:
   *  Gain: '<S21>/E->N'
   *  Saturate: '<S21>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_cb * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Left_Lane_C2_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S21>/Data Type Conversion' */

  /* Gain: '<S70>/N->E' incorporates:
   *  DataTypeConversion: '<S70>/Data Type Conversion'
   *  Inport: '<Root>/Next_Left_Lane_A_Lane_Model_C3'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_ob * (real_T)Get_Next_Left_Lane_A_Lane_Model_C3
    ();

  /* Saturate: '<S22>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_g) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_g;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_at) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_at;
    }
  }

  /* DataTypeConversion: '<S22>/Data Type Conversion' incorporates:
   *  Gain: '<S22>/E->N'
   *  Saturate: '<S22>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_dt * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Left_Lane_C3_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S22>/Data Type Conversion' */

  /* Gain: '<S228>/N->E' incorporates:
   *  DataTypeConversion: '<S228>/Data Type Conversion'
   *  Inport: '<Root>/Next_Right_Lane_A_Quality'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_cv * (real_T)Get_Next_Right_Lane_A_Quality();

  /* Saturate: '<S28>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_k) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_k;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ai) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ai;
    }
  }

  /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
   *  Gain: '<S28>/E->N'
   *  Saturate: '<S28>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_a * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Next_Right_Lane_Quality((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S28>/Data Type Conversion' */

  /* Gain: '<S72>/N->E' incorporates:
   *  DataTypeConversion: '<S72>/Data Type Conversion'
   *  Inport: '<Root>/Next_Right_Lane_A_Lane_Model_C0'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_g * (real_T)Get_Next_Right_Lane_A_Lane_Model_C0
    ();

  /* Saturate: '<S24>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_n) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_n;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jb) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jb;
    }
  }

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Gain: '<S24>/E->N'
   *  Saturate: '<S24>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ms * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Right_Lane_C0_PosRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */

  /* Gain: '<S73>/N->E' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion'
   *  Inport: '<Root>/Next_Right_Lane_A_Lane_Model_C2'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_bk * (real_T)
    Get_Next_Right_Lane_A_Lane_Model_C2();

  /* Saturate: '<S26>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ij) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ij;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_p) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_p;
    }
  }

  /* DataTypeConversion: '<S26>/Data Type Conversion' incorporates:
   *  Gain: '<S26>/E->N'
   *  Saturate: '<S26>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ao * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Right_Lane_C2_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S26>/Data Type Conversion' */

  /* Gain: '<S74>/N->E' incorporates:
   *  DataTypeConversion: '<S74>/Data Type Conversion'
   *  Inport: '<Root>/Next_Right_Lane_A_Lane_Model_C3'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_j * (real_T)Get_Next_Right_Lane_A_Lane_Model_C3
    ();

  /* Saturate: '<S27>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_p) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_p;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jbj) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jbj;
    }
  }

  /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
   *  Gain: '<S27>/E->N'
   *  Saturate: '<S27>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_f * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Right_Lane_C3_PosTRght((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S27>/Data Type Conversion' */

  /* Gain: '<S68>/N->E' incorporates:
   *  DataTypeConversion: '<S68>/Data Type Conversion'
   *  Inport: '<Root>/Next_Left_Lane_B_Lane_Model_C1'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_n * (real_T)Get_Next_Left_Lane_B_Lane_Model_C1();

  /* Saturate: '<S20>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_gx) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_gx;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_j2) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_j2;
    }
  }

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Gain: '<S20>/E->N'
   *  Saturate: '<S20>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ir * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Left_Lane_C1_PosTLeft((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* Gain: '<S71>/N->E' incorporates:
   *  DataTypeConversion: '<S71>/Data Type Conversion'
   *  Inport: '<Root>/Next_Right_Lane_B_Lane_Model_C1'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_l * (real_T)Get_Next_Right_Lane_B_Lane_Model_C1
    ();

  /* Saturate: '<S25>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_cx) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_cx;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_oy) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_oy;
    }
  }

  /* DataTypeConversion: '<S25>/Data Type Conversion' incorporates:
   *  Gain: '<S25>/E->N'
   *  Saturate: '<S25>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ey * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_SEN_LKA_Next_Right_Lane_C1_PosTLeft((int16_T)(i < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S25>/Data Type Conversion' */

  /* Gain: '<S230>/N->E' incorporates:
   *  DataTypeConversion: '<S230>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Left_Lane_B_TLC'
   */
  rtb_NE = EPM_Ln_ObjGenFcn_P.NE_Gain_bx * (real_T)Get_LKA_Left_Lane_B_TLC();

  /* Saturate: '<S18>/Saturation' */
  if (rtb_NE > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_h) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_h;
  } else if (rtb_NE < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_b) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_b;
  } else {
    i = rtb_NE;
  }

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Gain: '<S18>/E->N'
   *  Saturate: '<S18>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ge * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Left_Lane_TLC((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

  /* Gain: '<S231>/N->E' incorporates:
   *  DataTypeConversion: '<S231>/Data Type Conversion'
   *  Inport: '<Root>/LKA_Right_Lane_B_TLC'
   */
  rtb_NE_df = EPM_Ln_ObjGenFcn_P.NE_Gain_kd * (real_T)Get_LKA_Right_Lane_B_TLC();

  /* Saturate: '<S35>/Saturation' */
  if (rtb_NE_df > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_b0) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_b0;
  } else if (rtb_NE_df < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_m1) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_m1;
  } else {
    i = rtb_NE_df;
  }

  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  Gain: '<S35>/E->N'
   *  Saturate: '<S35>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_m2 * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_SEN_LKA_Right_Lane_TLC((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S35>/Data Type Conversion' */

  /* Gain: '<S195>/N->E' incorporates:
   *  DataTypeConversion: '<S195>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstacleVelX'
   */
  rtb_NE_b12 = EPM_Ln_ObjGenFcn_P.NE_Gain_k4 * (real_T)
    Get_ObstacleDataA1_ObstacleVelX();

  /* Gain: '<S2>/N->E' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB1_CIPVFlag'
   */
  rtb_NE_c2 = EPM_Ln_ObjGenFcn_P.NE_Gain_n0 * (real_T)
    Get_ObstacleDataB1_CIPVFlag();

  /* Gain: '<S150>/N->E' incorporates:
   *  DataTypeConversion: '<S150>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstaclePosX'
   */
  rtb_NE_iu = EPM_Ln_ObjGenFcn_P.NE_Gain_by * (real_T)
    Get_ObstacleDataA1_ObstaclePosX();

  /* Gain: '<S75>/N->E' incorporates:
   *  DataTypeConversion: '<S75>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC1_Object_Accel_X'
   */
  rtb_NE_id = EPM_Ln_ObjGenFcn_P.NE_Gain_cr * (real_T)
    Get_ObstacleDataC1_Object_Accel_X();

  /* Gain: '<S170>/N->E' incorporates:
   *  DataTypeConversion: '<S170>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstacleStatus'
   */
  rtb_NE_ki = EPM_Ln_ObjGenFcn_P.NE_Gain_i * (real_T)
    Get_ObstacleDataA1_ObstacleStatus();

  /* Gain: '<S130>/N->E' incorporates:
   *  DataTypeConversion: '<S130>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstacleID'
   */
  rtb_NE_k5 = EPM_Ln_ObjGenFcn_P.NE_Gain_ov * (real_T)
    Get_ObstacleDataA1_ObstacleID();

  /* Gain: '<S55>/N->E' incorporates:
   *  DataTypeConversion: '<S55>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_Move_in_and_Out'
   */
  rtb_NE_ef = EPM_Ln_ObjGenFcn_P.NE_Gain_oh * (real_T)
    Get_ObstacleDataA1_Move_in_and_Out();

  /* Gain: '<S160>/N->E' incorporates:
   *  DataTypeConversion: '<S160>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstaclePosY'
   */
  rtb_NE_f = EPM_Ln_ObjGenFcn_P.NE_Gain_hz * (real_T)
    Get_ObstacleDataA1_ObstaclePosY();

  /* Gain: '<S120>/N->E' incorporates:
   *  DataTypeConversion: '<S120>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB1_ObstacleAge'
   */
  rtb_NE_h = EPM_Ln_ObjGenFcn_P.NE_Gain_eb * (real_T)
    Get_ObstacleDataB1_ObstacleAge();

  /* Gain: '<S140>/N->E' incorporates:
   *  DataTypeConversion: '<S140>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB1_ObstacleLane'
   */
  rtb_NE_a = EPM_Ln_ObjGenFcn_P.NE_Gain_cc * (real_T)
    Get_ObstacleDataB1_ObstacleLane();

  /* Gain: '<S85>/N->E' incorporates:
   *  DataTypeConversion: '<S85>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC1_ObstacleAngle'
   */
  rtb_NE_p = EPM_Ln_ObjGenFcn_P.NE_Gain_ly * (real_T)
    Get_ObstacleDataC1_Object_Accel_X();

  /* Gain: '<S215>/N->E' incorporates:
   *  DataTypeConversion: '<S215>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB1_ObstacleWidth'
   */
  rtb_NE_gn = EPM_Ln_ObjGenFcn_P.NE_Gain_jx * (real_T)
    Get_ObstacleDataB1_ObstacleWidth();

  /* Gain: '<S185>/N->E' incorporates:
   *  DataTypeConversion: '<S185>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA1_ObstacleType'
   */
  rtb_NE_m = EPM_Ln_ObjGenFcn_P.NE_Gain_ew * (real_T)
    Get_ObstacleDataA1_ObstacleType();

  /* Gain: '<S205>/N->E' incorporates:
   *  DataTypeConversion: '<S205>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC1_ObstacleVelY'
   */
  rtb_NE_k0 = EPM_Ln_ObjGenFcn_P.NE_Gain_as * (real_T)
    Get_ObstacleDataC1_ObstacleVelY();

  /* Gain: '<S197>/N->E' incorporates:
   *  DataTypeConversion: '<S197>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstacleVelX'
   */
  rtb_NE_p5 = EPM_Ln_ObjGenFcn_P.NE_Gain_ny * (real_T)
    Get_ObstacleDataA2_ObstacleVelX();

  /* Gain: '<S4>/N->E' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB2_CIPVFlag'
   */
  rtb_NE_ey = EPM_Ln_ObjGenFcn_P.NE_Gain_pq * (real_T)
    Get_ObstacleDataB2_CIPVFlag();

  /* Gain: '<S152>/N->E' incorporates:
   *  DataTypeConversion: '<S152>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstaclePosX'
   */
  rtb_NE_mwd = EPM_Ln_ObjGenFcn_P.NE_Gain_m5 * (real_T)
    Get_ObstacleDataA2_ObstaclePosX();

  /* Gain: '<S77>/N->E' incorporates:
   *  DataTypeConversion: '<S77>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC2_Object_Accel_X'
   */
  rtb_NE_bq = EPM_Ln_ObjGenFcn_P.NE_Gain_dj * (real_T)
    Get_ObstacleDataC2_Object_Accel_X();

  /* Gain: '<S172>/N->E' incorporates:
   *  DataTypeConversion: '<S172>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstacleStatus'
   */
  rtb_NE_jg = EPM_Ln_ObjGenFcn_P.NE_Gain_f * (real_T)
    Get_ObstacleDataA2_ObstacleStatus();

  /* Gain: '<S132>/N->E' incorporates:
   *  DataTypeConversion: '<S132>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstacleID'
   */
  rtb_NE_jd = EPM_Ln_ObjGenFcn_P.NE_Gain_hw * (real_T)
    Get_ObstacleDataA2_ObstacleID();

  /* Gain: '<S57>/N->E' incorporates:
   *  DataTypeConversion: '<S57>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_Move_in_and_Out'
   */
  rtb_NE_g = EPM_Ln_ObjGenFcn_P.NE_Gain_hg * (real_T)
    Get_ObstacleDataA2_Move_in_and_Out();

  /* Gain: '<S162>/N->E' incorporates:
   *  DataTypeConversion: '<S162>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstaclePosY'
   */
  rtb_NE_ls = EPM_Ln_ObjGenFcn_P.NE_Gain_ha * (real_T)
    Get_ObstacleDataA2_ObstaclePosY();

  /* Gain: '<S122>/N->E' incorporates:
   *  DataTypeConversion: '<S122>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB2_ObstacleAge'
   */
  rtb_NE_l = EPM_Ln_ObjGenFcn_P.NE_Gain_am * (real_T)
    Get_ObstacleDataB2_ObstacleAge();

  /* Gain: '<S142>/N->E' incorporates:
   *  DataTypeConversion: '<S142>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB2_ObstacleLane'
   */
  rtb_NE_kgk = EPM_Ln_ObjGenFcn_P.NE_Gain_ng * (real_T)
    Get_ObstacleDataB2_ObstacleLane();

  /* Gain: '<S87>/N->E' incorporates:
   *  DataTypeConversion: '<S87>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC2_ObstacleAngle'
   */
  rtb_NE_n = EPM_Ln_ObjGenFcn_P.NE_Gain_do * (real_T)
    Get_ObstacleDataC2_ObstacleAngle();

  /* Gain: '<S217>/N->E' incorporates:
   *  DataTypeConversion: '<S217>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB2_ObstacleWidth'
   */
  rtb_NE_l1 = EPM_Ln_ObjGenFcn_P.NE_Gain_ko * (real_T)
    Get_ObstacleDataB2_ObstacleWidth();

  /* Gain: '<S187>/N->E' incorporates:
   *  DataTypeConversion: '<S187>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA2_ObstacleType'
   */
  rtb_NE_fy = EPM_Ln_ObjGenFcn_P.NE_Gain_ma * (real_T)
    Get_ObstacleDataA2_ObstacleType();

  /* Gain: '<S207>/N->E' incorporates:
   *  DataTypeConversion: '<S207>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC2_ObstacleVelY'
   */
  rtb_NE_o = EPM_Ln_ObjGenFcn_P.NE_Gain_bv * (real_T)
    Get_ObstacleDataC2_ObstacleVelY();

  /* Gain: '<S198>/N->E' incorporates:
   *  DataTypeConversion: '<S198>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstacleVelX'
   */
  rtb_NE_n5 = EPM_Ln_ObjGenFcn_P.NE_Gain_cc3 * (real_T)
    Get_ObstacleDataA3_ObstacleVelX();

  /* Gain: '<S5>/N->E' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB3_CIPVFlag'
   */
  rtb_NE_go = EPM_Ln_ObjGenFcn_P.NE_Gain_bj * (real_T)
    Get_ObstacleDataB3_CIPVFlag();

  /* Gain: '<S153>/N->E' incorporates:
   *  DataTypeConversion: '<S153>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstaclePosX'
   */
  rtb_NE_pw = EPM_Ln_ObjGenFcn_P.NE_Gain_o0 * (real_T)
    Get_ObstacleDataA3_ObstaclePosX();

  /* Gain: '<S78>/N->E' incorporates:
   *  DataTypeConversion: '<S78>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC3_Object_Accel_X'
   */
  rtb_NE_i = EPM_Ln_ObjGenFcn_P.NE_Gain_bn * (real_T)
    Get_ObstacleDataC3_Object_Accel_X();

  /* Gain: '<S173>/N->E' incorporates:
   *  DataTypeConversion: '<S173>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstacleStatus'
   */
  rtb_NE_ic = EPM_Ln_ObjGenFcn_P.NE_Gain_pa * (real_T)
    Get_ObstacleDataA3_ObstacleStatus();

  /* Gain: '<S133>/N->E' incorporates:
   *  DataTypeConversion: '<S133>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstacleID'
   */
  rtb_NE_ag = EPM_Ln_ObjGenFcn_P.NE_Gain_hn * (real_T)
    Get_ObstacleDataA3_ObstacleID();

  /* Gain: '<S58>/N->E' incorporates:
   *  DataTypeConversion: '<S58>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_Move_in_and_Out'
   */
  rtb_NE_c = EPM_Ln_ObjGenFcn_P.NE_Gain_m2 * (real_T)
    Get_ObstacleDataA3_Move_in_and_Out();

  /* Gain: '<S163>/N->E' incorporates:
   *  DataTypeConversion: '<S163>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstaclePosY'
   */
  rtb_NE_g4 = EPM_Ln_ObjGenFcn_P.NE_Gain_gj * (real_T)
    Get_ObstacleDataA3_ObstaclePosY();

  /* Gain: '<S123>/N->E' incorporates:
   *  DataTypeConversion: '<S123>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB3_ObstacleAge'
   */
  rtb_NE_k = EPM_Ln_ObjGenFcn_P.NE_Gain_byv * (real_T)
    Get_ObstacleDataB3_ObstacleAge();

  /* Gain: '<S143>/N->E' incorporates:
   *  DataTypeConversion: '<S143>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB3_ObstacleLane'
   */
  rtb_NE_drl = EPM_Ln_ObjGenFcn_P.NE_Gain_lv * (real_T)
    Get_ObstacleDataB3_ObstacleLane();

  /* Gain: '<S88>/N->E' incorporates:
   *  DataTypeConversion: '<S88>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC3_ObstacleAngle'
   */
  rtb_NE_mr = EPM_Ln_ObjGenFcn_P.NE_Gain_f3 * (real_T)
    Get_ObstacleDataC3_ObstacleAngle();

  /* Gain: '<S218>/N->E' incorporates:
   *  DataTypeConversion: '<S218>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB3_ObstacleWidth'
   */
  rtb_NE_i4 = EPM_Ln_ObjGenFcn_P.NE_Gain_io * (real_T)
    Get_ObstacleDataB3_ObstacleWidth();

  /* Gain: '<S188>/N->E' incorporates:
   *  DataTypeConversion: '<S188>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA3_ObstacleType'
   */
  rtb_NE_ec = EPM_Ln_ObjGenFcn_P.NE_Gain_f2 * (real_T)
    Get_ObstacleDataA3_ObstacleType();

  /* Gain: '<S208>/N->E' incorporates:
   *  DataTypeConversion: '<S208>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC3_ObstacleVelY'
   */
  rtb_NE_mu = EPM_Ln_ObjGenFcn_P.NE_Gain_blf * (real_T)
    Get_ObstacleDataC3_ObstacleVelY();

  /* Gain: '<S199>/N->E' incorporates:
   *  DataTypeConversion: '<S199>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstacleVelX'
   */
  rtb_NE_d = EPM_Ln_ObjGenFcn_P.NE_Gain_o5 * (real_T)
    Get_ObstacleDataA4_ObstacleVelX();

  /* Gain: '<S6>/N->E' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB4_CIPVFlag'
   */
  rtb_NE_e = EPM_Ln_ObjGenFcn_P.NE_Gain_mu * (real_T)Get_ObstacleDataB4_CIPVFlag
    ();

  /* Gain: '<S154>/N->E' incorporates:
   *  DataTypeConversion: '<S154>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstaclePosX'
   */
  rtb_NE_bl = EPM_Ln_ObjGenFcn_P.NE_Gain_dk * (real_T)
    Get_ObstacleDataA4_ObstaclePosX();

  /* Gain: '<S79>/N->E' incorporates:
   *  DataTypeConversion: '<S79>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC4_Object_Accel_X'
   */
  rtb_NE_pt = EPM_Ln_ObjGenFcn_P.NE_Gain_mn * (real_T)
    Get_ObstacleDataC4_Object_Accel_X();

  /* Gain: '<S174>/N->E' incorporates:
   *  DataTypeConversion: '<S174>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstacleStatus'
   */
  rtb_NE_aj = EPM_Ln_ObjGenFcn_P.NE_Gain_ji * (real_T)
    Get_ObstacleDataA4_ObstacleStatus();

  /* Gain: '<S134>/N->E' incorporates:
   *  DataTypeConversion: '<S134>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstacleID'
   */
  rtb_NE_jz = EPM_Ln_ObjGenFcn_P.NE_Gain_kh * (real_T)
    Get_ObstacleDataA4_ObstacleID();

  /* Gain: '<S59>/N->E' incorporates:
   *  DataTypeConversion: '<S59>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_Move_in_and_Out'
   */
  rtb_NE_gf = EPM_Ln_ObjGenFcn_P.NE_Gain_i5 * (real_T)
    Get_ObstacleDataA4_Move_in_and_Out();

  /* Gain: '<S164>/N->E' incorporates:
   *  DataTypeConversion: '<S164>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstaclePosY'
   */
  rtb_NE_kdn = EPM_Ln_ObjGenFcn_P.NE_Gain_bq * (real_T)
    Get_ObstacleDataA4_ObstaclePosY();

  /* Gain: '<S124>/N->E' incorporates:
   *  DataTypeConversion: '<S124>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB4_ObstacleAge'
   */
  rtb_NE_o1 = EPM_Ln_ObjGenFcn_P.NE_Gain_lp * (real_T)
    Get_ObstacleDataB4_ObstacleAge();

  /* Gain: '<S144>/N->E' incorporates:
   *  DataTypeConversion: '<S144>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB4_ObstacleLane'
   */
  rtb_NE_myk = EPM_Ln_ObjGenFcn_P.NE_Gain_ed * (real_T)
    Get_ObstacleDataB4_ObstacleLane();

  /* Gain: '<S89>/N->E' incorporates:
   *  DataTypeConversion: '<S89>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC4_ObstacleAngle'
   */
  rtb_NE_ne = EPM_Ln_ObjGenFcn_P.NE_Gain_nr * (real_T)
    Get_ObstacleDataC4_ObstacleAngle();

  /* Gain: '<S219>/N->E' incorporates:
   *  DataTypeConversion: '<S219>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB4_ObstacleWidth'
   */
  rtb_NE_pec = EPM_Ln_ObjGenFcn_P.NE_Gain_jh * (real_T)
    Get_ObstacleDataB4_ObstacleWidth();

  /* Gain: '<S189>/N->E' incorporates:
   *  DataTypeConversion: '<S189>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA4_ObstacleType'
   */
  rtb_NE_gb = EPM_Ln_ObjGenFcn_P.NE_Gain_pj * (real_T)
    Get_ObstacleDataA4_ObstacleType();

  /* Gain: '<S209>/N->E' incorporates:
   *  DataTypeConversion: '<S209>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC4_ObstacleVelY'
   */
  rtb_NE_hm = EPM_Ln_ObjGenFcn_P.NE_Gain_po * (real_T)
    Get_ObstacleDataB4_CIPVFlag();

  /* Gain: '<S200>/N->E' incorporates:
   *  DataTypeConversion: '<S200>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstacleVelX'
   */
  rtb_NE_j2 = EPM_Ln_ObjGenFcn_P.NE_Gain_ag * (real_T)
    Get_ObstacleDataA5_ObstacleVelX();

  /* Gain: '<S7>/N->E' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB5_CIPVFlag'
   */
  rtb_NE_ob = EPM_Ln_ObjGenFcn_P.NE_Gain_d0 * (real_T)
    Get_ObstacleDataB5_CIPVFlag();

  /* Gain: '<S155>/N->E' incorporates:
   *  DataTypeConversion: '<S155>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstaclePosX'
   */
  rtb_NE_n2 = EPM_Ln_ObjGenFcn_P.NE_Gain_i3 * (real_T)
    Get_ObstacleDataA5_ObstaclePosX();

  /* Gain: '<S80>/N->E' incorporates:
   *  DataTypeConversion: '<S80>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC5_Object_Accel_X'
   */
  rtb_NE_aii = EPM_Ln_ObjGenFcn_P.NE_Gain_ph * (real_T)
    Get_ObstacleDataC5_Object_Accel_X();

  /* Gain: '<S175>/N->E' incorporates:
   *  DataTypeConversion: '<S175>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstacleStatus'
   */
  rtb_NE_cg = EPM_Ln_ObjGenFcn_P.NE_Gain_bc * (real_T)
    Get_ObstacleDataA5_ObstacleStatus();

  /* Gain: '<S135>/N->E' incorporates:
   *  DataTypeConversion: '<S135>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstacleID'
   */
  rtb_NE_j = EPM_Ln_ObjGenFcn_P.NE_Gain_dz * (real_T)
    Get_ObstacleDataA5_ObstacleID();

  /* Gain: '<S60>/N->E' incorporates:
   *  DataTypeConversion: '<S60>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_Move_in_and_Out'
   */
  rtb_NE_fe = EPM_Ln_ObjGenFcn_P.NE_Gain_er * (real_T)
    Get_ObstacleDataA5_Move_in_and_Out();

  /* Gain: '<S165>/N->E' incorporates:
   *  DataTypeConversion: '<S165>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstaclePosY'
   */
  rtb_NE_b = EPM_Ln_ObjGenFcn_P.NE_Gain_ll * (real_T)
    Get_ObstacleDataA5_ObstaclePosY();

  /* Gain: '<S125>/N->E' incorporates:
   *  DataTypeConversion: '<S125>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB5_ObstacleAge'
   */
  rtb_NE_gzu = EPM_Ln_ObjGenFcn_P.NE_Gain_jp * (real_T)
    Get_ObstacleDataB5_ObstacleAge();

  /* Gain: '<S145>/N->E' incorporates:
   *  DataTypeConversion: '<S145>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB5_ObstacleLane'
   */
  rtb_NE_ok = EPM_Ln_ObjGenFcn_P.NE_Gain_a1 * (real_T)
    Get_ObstacleDataB5_ObstacleLane();

  /* Gain: '<S90>/N->E' incorporates:
   *  DataTypeConversion: '<S90>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC5_ObstacleAngle'
   */
  rtb_NE_cj = EPM_Ln_ObjGenFcn_P.NE_Gain_hs * (real_T)
    Get_ObstacleDataC5_ObstacleAngle();

  /* Gain: '<S220>/N->E' incorporates:
   *  DataTypeConversion: '<S220>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB5_ObstacleWidth'
   */
  rtb_NE_km = EPM_Ln_ObjGenFcn_P.NE_Gain_aw * (real_T)
    Get_ObstacleDataB5_ObstacleWidth();

  /* Gain: '<S190>/N->E' incorporates:
   *  DataTypeConversion: '<S190>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA5_ObstacleType'
   */
  rtb_NE_gi = EPM_Ln_ObjGenFcn_P.NE_Gain_dkt * (real_T)
    Get_ObstacleDataA5_ObstacleType();

  /* Gain: '<S210>/N->E' incorporates:
   *  DataTypeConversion: '<S210>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC5_ObstacleVelY'
   */
  rtb_NE_ivo = EPM_Ln_ObjGenFcn_P.NE_Gain_ie * (real_T)
    Get_ObstacleDataC5_ObstacleVelY();

  /* Gain: '<S201>/N->E' incorporates:
   *  DataTypeConversion: '<S201>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstacleVelX'
   */
  rtb_NE_c4 = EPM_Ln_ObjGenFcn_P.NE_Gain_lpn * (real_T)
    Get_ObstacleDataA6_ObstacleVelX();

  /* Gain: '<S8>/N->E' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB6_CIPVFlag'
   */
  rtb_NE_ifn = EPM_Ln_ObjGenFcn_P.NE_Gain_nx * (real_T)
    Get_ObstacleDataB6_CIPVFlag();

  /* Gain: '<S156>/N->E' incorporates:
   *  DataTypeConversion: '<S156>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstaclePosX'
   */
  rtb_NE_ai = EPM_Ln_ObjGenFcn_P.NE_Gain_i4 * (real_T)
    Get_ObstacleDataA6_ObstaclePosX();

  /* Gain: '<S81>/N->E' incorporates:
   *  DataTypeConversion: '<S81>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC6_Object_Accel_X'
   */
  rtb_NE_ao = EPM_Ln_ObjGenFcn_P.NE_Gain_gw * (real_T)
    Get_ObstacleDataC6_Object_Accel_X();

  /* Gain: '<S176>/N->E' incorporates:
   *  DataTypeConversion: '<S176>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstacleStatus'
   */
  rtb_NE_do = EPM_Ln_ObjGenFcn_P.NE_Gain_lyy * (real_T)
    Get_ObstacleDataA6_ObstacleStatus();

  /* Gain: '<S136>/N->E' incorporates:
   *  DataTypeConversion: '<S136>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstacleID'
   */
  rtb_NE_pn = EPM_Ln_ObjGenFcn_P.NE_Gain_ce * (real_T)
    Get_ObstacleDataA6_ObstacleID();

  /* Gain: '<S61>/N->E' incorporates:
   *  DataTypeConversion: '<S61>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_Move_in_and_Out'
   */
  rtb_NE_cd = EPM_Ln_ObjGenFcn_P.NE_Gain_ad * (real_T)
    Get_ObstacleDataA6_Move_in_and_Out();

  /* Gain: '<S166>/N->E' incorporates:
   *  DataTypeConversion: '<S166>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstaclePosY'
   */
  rtb_NE_oj = EPM_Ln_ObjGenFcn_P.NE_Gain_ck * (real_T)
    Get_ObstacleDataA6_ObstaclePosY();

  /* Gain: '<S126>/N->E' incorporates:
   *  DataTypeConversion: '<S126>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB6_ObstacleAge'
   */
  rtb_NE_cb = EPM_Ln_ObjGenFcn_P.NE_Gain_ni * (real_T)
    Get_ObstacleDataB6_ObstacleAge();

  /* Gain: '<S146>/N->E' incorporates:
   *  DataTypeConversion: '<S146>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB6_ObstacleLane'
   */
  rtb_NE_gl = EPM_Ln_ObjGenFcn_P.NE_Gain_hr * (real_T)
    Get_ObstacleDataB6_ObstacleLane();

  /* Gain: '<S91>/N->E' incorporates:
   *  DataTypeConversion: '<S91>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC6_ObstacleAngle'
   */
  rtb_NE_f0 = EPM_Ln_ObjGenFcn_P.NE_Gain_mq * (real_T)
    Get_ObstacleDataC6_ObstacleAngle();

  /* Gain: '<S221>/N->E' incorporates:
   *  DataTypeConversion: '<S221>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB6_ObstacleWidth'
   */
  rtb_NE_b3 = EPM_Ln_ObjGenFcn_P.NE_Gain_js * (real_T)
    Get_ObstacleDataB6_ObstacleWidth();

  /* Gain: '<S191>/N->E' incorporates:
   *  DataTypeConversion: '<S191>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA6_ObstacleType'
   */
  rtb_NE_la = EPM_Ln_ObjGenFcn_P.NE_Gain_bkc * (real_T)
    Get_ObstacleDataA6_ObstacleType();

  /* Gain: '<S211>/N->E' incorporates:
   *  DataTypeConversion: '<S211>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC6_ObstacleVelY'
   */
  rtb_NE_er = EPM_Ln_ObjGenFcn_P.NE_Gain_e5 * (real_T)
    Get_ObstacleDataC6_ObstacleVelY();

  /* Gain: '<S202>/N->E' incorporates:
   *  DataTypeConversion: '<S202>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstacleVelX'
   */
  rtb_NE_ah = EPM_Ln_ObjGenFcn_P.NE_Gain_gp * (real_T)
    Get_ObstacleDataA7_ObstacleVelX();

  /* Gain: '<S9>/N->E' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB7_CIPVFlag'
   */
  rtb_NE_ab = EPM_Ln_ObjGenFcn_P.NE_Gain_os * (real_T)
    Get_ObstacleDataB7_CIPVFlag();

  /* Gain: '<S157>/N->E' incorporates:
   *  DataTypeConversion: '<S157>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstaclePosX'
   */
  rtb_NE_hj = EPM_Ln_ObjGenFcn_P.NE_Gain_jn * (real_T)
    Get_ObstacleDataA7_ObstaclePosX();

  /* Gain: '<S82>/N->E' incorporates:
   *  DataTypeConversion: '<S82>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC7_Object_Accel_X'
   */
  rtb_NE_fdw = EPM_Ln_ObjGenFcn_P.NE_Gain_af * (real_T)
    Get_ObstacleDataC7_Object_Accel_X();

  /* Gain: '<S177>/N->E' incorporates:
   *  DataTypeConversion: '<S177>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstacleStatus'
   */
  rtb_NE_of = EPM_Ln_ObjGenFcn_P.NE_Gain_no * (real_T)
    Get_ObstacleDataA7_ObstacleStatus();

  /* Gain: '<S137>/N->E' incorporates:
   *  DataTypeConversion: '<S137>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstacleID'
   */
  rtb_NE_gso = EPM_Ln_ObjGenFcn_P.NE_Gain_iv * (real_T)
    Get_ObstacleDataA7_ObstacleID();

  /* Gain: '<S62>/N->E' incorporates:
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_Move_in_and_Out'
   */
  rtb_NE_hc = EPM_Ln_ObjGenFcn_P.NE_Gain_ou * (real_T)
    Get_ObstacleDataA7_Move_in_and_Out();

  /* Gain: '<S167>/N->E' incorporates:
   *  DataTypeConversion: '<S167>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstaclePosY'
   */
  rtb_NE_h0 = EPM_Ln_ObjGenFcn_P.NE_Gain_oo * (real_T)
    Get_ObstacleDataA7_ObstaclePosY();

  /* Gain: '<S127>/N->E' incorporates:
   *  DataTypeConversion: '<S127>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB7_ObstacleAge'
   */
  rtb_NE_lo0 = EPM_Ln_ObjGenFcn_P.NE_Gain_le * (real_T)
    Get_ObstacleDataB7_ObstacleAge();

  /* Gain: '<S147>/N->E' incorporates:
   *  DataTypeConversion: '<S147>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB7_ObstacleLane'
   */
  rtb_NE_ht = EPM_Ln_ObjGenFcn_P.NE_Gain_kk * (real_T)
    Get_ObstacleDataB7_ObstacleLane();

  /* Gain: '<S92>/N->E' incorporates:
   *  DataTypeConversion: '<S92>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC7_ObstacleAngle'
   */
  rtb_NE_cz = EPM_Ln_ObjGenFcn_P.NE_Gain_h5 * (real_T)
    Get_ObstacleDataC7_ObstacleAngle();

  /* Gain: '<S222>/N->E' incorporates:
   *  DataTypeConversion: '<S222>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB7_ObstacleWidth'
   */
  rtb_NE_le = EPM_Ln_ObjGenFcn_P.NE_Gain_ac * (real_T)
    Get_ObstacleDataB7_ObstacleWidth();

  /* Gain: '<S192>/N->E' incorporates:
   *  DataTypeConversion: '<S192>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA7_ObstacleType'
   */
  rtb_NE_ptn = EPM_Ln_ObjGenFcn_P.NE_Gain_kkc * (real_T)
    Get_ObstacleDataA7_ObstacleType();

  /* Gain: '<S212>/N->E' incorporates:
   *  DataTypeConversion: '<S212>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC7_ObstacleVelY'
   */
  rtb_NE_pp = EPM_Ln_ObjGenFcn_P.NE_Gain_kw * (real_T)
    Get_ObstacleDataC7_ObstacleVelY();

  /* Gain: '<S203>/N->E' incorporates:
   *  DataTypeConversion: '<S203>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstacleVelX'
   */
  rtb_NE_eo = EPM_Ln_ObjGenFcn_P.NE_Gain_ls * (real_T)
    Get_ObstacleDataA8_ObstacleVelX();

  /* Gain: '<S10>/N->E' incorporates:
   *  DataTypeConversion: '<S10>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB8_CIPVFlag'
   */
  rtb_NE_dq = EPM_Ln_ObjGenFcn_P.NE_Gain_iof * (real_T)
    Get_ObstacleDataB8_CIPVFlag();

  /* Gain: '<S158>/N->E' incorporates:
   *  DataTypeConversion: '<S158>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstaclePosX'
   */
  rtb_NE_ejz = EPM_Ln_ObjGenFcn_P.NE_Gain_gt * (real_T)
    Get_ObstacleDataA8_ObstaclePosX();

  /* Gain: '<S83>/N->E' incorporates:
   *  DataTypeConversion: '<S83>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC8_Object_Accel_X'
   */
  rtb_NE_pe = EPM_Ln_ObjGenFcn_P.NE_Gain_p1 * (real_T)
    Get_ObstacleDataC8_Object_Accel_X();

  /* Gain: '<S178>/N->E' incorporates:
   *  DataTypeConversion: '<S178>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstacleStatus'
   */
  rtb_NE_ba = EPM_Ln_ObjGenFcn_P.NE_Gain_fp * (real_T)
    Get_ObstacleDataA8_ObstacleStatus();

  /* Gain: '<S138>/N->E' incorporates:
   *  DataTypeConversion: '<S138>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstacleID'
   */
  rtb_NE_ad = EPM_Ln_ObjGenFcn_P.NE_Gain_fg * (real_T)
    Get_ObstacleDataA8_ObstacleID();

  /* Gain: '<S63>/N->E' incorporates:
   *  DataTypeConversion: '<S63>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_Move_in_and_Out'
   */
  rtb_NE_o3j = EPM_Ln_ObjGenFcn_P.NE_Gain_k4u * (real_T)
    Get_ObstacleDataA8_Move_in_and_Out();

  /* Gain: '<S168>/N->E' incorporates:
   *  DataTypeConversion: '<S168>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstaclePosY'
   */
  rtb_NE_myi = EPM_Ln_ObjGenFcn_P.NE_Gain_hp * (real_T)
    Get_ObstacleDataA8_ObstaclePosY();

  /* Gain: '<S128>/N->E' incorporates:
   *  DataTypeConversion: '<S128>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB8_ObstacleAge'
   */
  rtb_NE_pk = EPM_Ln_ObjGenFcn_P.NE_Gain_ca * (real_T)
    Get_ObstacleDataB8_ObstacleAge();

  /* Gain: '<S148>/N->E' incorporates:
   *  DataTypeConversion: '<S148>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB8_ObstacleLane'
   */
  rtb_NE_fdi = EPM_Ln_ObjGenFcn_P.NE_Gain_i3j * (real_T)
    Get_ObstacleDataB8_ObstacleLane();

  /* Gain: '<S93>/N->E' incorporates:
   *  DataTypeConversion: '<S93>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC8_ObstacleAngle'
   */
  rtb_NE_p0 = EPM_Ln_ObjGenFcn_P.NE_Gain_c3 * (real_T)
    Get_ObstacleDataC8_ObstacleAngle();

  /* Gain: '<S223>/N->E' incorporates:
   *  DataTypeConversion: '<S223>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB8_ObstacleWidth'
   */
  rtb_NE_kp = EPM_Ln_ObjGenFcn_P.NE_Gain_fr * (real_T)
    Get_ObstacleDataB8_ObstacleWidth();

  /* Gain: '<S193>/N->E' incorporates:
   *  DataTypeConversion: '<S193>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA8_ObstacleType'
   */
  rtb_NE_lg = EPM_Ln_ObjGenFcn_P.NE_Gain_ivg * (real_T)
    Get_ObstacleDataA8_ObstacleType();

  /* Gain: '<S213>/N->E' incorporates:
   *  DataTypeConversion: '<S213>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC8_ObstacleVelY'
   */
  rtb_NE_f1 = EPM_Ln_ObjGenFcn_P.NE_Gain_cb * (real_T)
    Get_ObstacleDataC8_ObstacleVelY();

  /* Gain: '<S204>/N->E' incorporates:
   *  DataTypeConversion: '<S204>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstacleVelX'
   */
  rtb_NE_bbt = EPM_Ln_ObjGenFcn_P.NE_Gain_mup * (real_T)
    Get_ObstacleDataA9_ObstacleVelX();

  /* Gain: '<S11>/N->E' incorporates:
   *  DataTypeConversion: '<S11>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB9_CIPVFlag'
   */
  rtb_NE_hg = EPM_Ln_ObjGenFcn_P.NE_Gain_k4q * (real_T)
    Get_ObstacleDataB9_CIPVFlag();

  /* Gain: '<S159>/N->E' incorporates:
   *  DataTypeConversion: '<S159>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstaclePosX'
   */
  rtb_NE_aw = EPM_Ln_ObjGenFcn_P.NE_Gain_it * (real_T)
    Get_ObstacleDataA9_ObstaclePosX();

  /* Gain: '<S84>/N->E' incorporates:
   *  DataTypeConversion: '<S84>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC9_Object_Accel_X'
   */
  rtb_NE_el = EPM_Ln_ObjGenFcn_P.NE_Gain_ok * (real_T)
    Get_ObstacleDataC9_Object_Accel_X();

  /* Gain: '<S179>/N->E' incorporates:
   *  DataTypeConversion: '<S179>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstacleStatus'
   */
  rtb_NE_ka = EPM_Ln_ObjGenFcn_P.NE_Gain_cw * (real_T)
    Get_ObstacleDataA9_ObstacleStatus();

  /* Gain: '<S139>/N->E' incorporates:
   *  DataTypeConversion: '<S139>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstacleID'
   */
  rtb_NE_g2 = EPM_Ln_ObjGenFcn_P.NE_Gain_gh * (real_T)
    Get_ObstacleDataA9_ObstacleID();

  /* Gain: '<S64>/N->E' incorporates:
   *  DataTypeConversion: '<S64>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_Move_in_and_Out'
   */
  rtb_NE_lp = EPM_Ln_ObjGenFcn_P.NE_Gain_bw * (real_T)
    Get_ObstacleDataA9_Move_in_and_Out();

  /* Gain: '<S169>/N->E' incorporates:
   *  DataTypeConversion: '<S169>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstaclePosY'
   */
  rtb_NE_cj2 = EPM_Ln_ObjGenFcn_P.NE_Gain_dn * (real_T)
    Get_ObstacleDataA9_ObstaclePosY();

  /* Gain: '<S129>/N->E' incorporates:
   *  DataTypeConversion: '<S129>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB9_ObstacleAge'
   */
  rtb_NE_fz = EPM_Ln_ObjGenFcn_P.NE_Gain_d1 * (real_T)
    Get_ObstacleDataB9_ObstacleAge();

  /* Gain: '<S149>/N->E' incorporates:
   *  DataTypeConversion: '<S149>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB9_ObstacleLane'
   */
  rtb_NE_gx = EPM_Ln_ObjGenFcn_P.NE_Gain_cd * (real_T)
    Get_ObstacleDataB9_ObstacleAge();

  /* Gain: '<S94>/N->E' incorporates:
   *  DataTypeConversion: '<S94>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC9_ObstacleAngle'
   */
  rtb_NE_eqb = EPM_Ln_ObjGenFcn_P.NE_Gain_e3 * (real_T)
    Get_ObstacleDataC9_ObstacleAngle();

  /* Gain: '<S224>/N->E' incorporates:
   *  DataTypeConversion: '<S224>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB9_ObstacleWidth'
   */
  rtb_NE_dx1 = EPM_Ln_ObjGenFcn_P.NE_Gain_lt * (real_T)
    Get_ObstacleDataB9_ObstacleWidth();

  /* Gain: '<S194>/N->E' incorporates:
   *  DataTypeConversion: '<S194>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA9_ObstacleType'
   */
  rtb_NE_e3 = EPM_Ln_ObjGenFcn_P.NE_Gain_jy * (real_T)
    Get_ObstacleDataA9_ObstacleType();

  /* Gain: '<S214>/N->E' incorporates:
   *  DataTypeConversion: '<S214>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC9_ObstacleVelY'
   */
  rtb_NE_ol = EPM_Ln_ObjGenFcn_P.NE_Gain_d5 * (real_T)
    Get_ObstacleDataC9_ObstacleVelY();

  /* Gain: '<S196>/N->E' incorporates:
   *  DataTypeConversion: '<S196>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_ObstacleVelX'
   */
  rtb_NE_o2f = EPM_Ln_ObjGenFcn_P.NE_Gain_n0u * (real_T)
    Get_ObstacleDataA10_ObstacleVelX();

  /* Gain: '<S3>/N->E' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB10_CIPVFlag'
   */
  rtb_NE_ck = EPM_Ln_ObjGenFcn_P.NE_Gain_dq * (real_T)
    Get_ObstacleDataB10_CIPVFlag();

  /* Gain: '<S151>/N->E' incorporates:
   *  DataTypeConversion: '<S151>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_ObstaclePosX'
   */
  rtb_NE_k4 = EPM_Ln_ObjGenFcn_P.NE_Gain_bjt * (real_T)
    Get_ObstacleDataA10_ObstaclePosX();

  /* Gain: '<S76>/N->E' incorporates:
   *  DataTypeConversion: '<S76>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC10_Object_Accel_X'
   */
  rtb_NE_lz = EPM_Ln_ObjGenFcn_P.NE_Gain_ju * (real_T)
    Get_ObstacleDataC10_Object_Accel_X();

  /* Gain: '<S171>/N->E' incorporates:
   *  DataTypeConversion: '<S171>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleData10_ObstacleStatus'
   */
  rtb_NE_co = EPM_Ln_ObjGenFcn_P.NE_Gain_ez * (real_T)
    Get_ObstacleData10_ObstacleStatus();

  /* Gain: '<S131>/N->E' incorporates:
   *  DataTypeConversion: '<S131>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_ObstacleID'
   */
  rtb_NE_ib = EPM_Ln_ObjGenFcn_P.NE_Gain_b2 * (real_T)
    Get_ObstacleDataA10_ObstacleID();

  /* Gain: '<S56>/N->E' incorporates:
   *  DataTypeConversion: '<S56>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_Move_in_and_Out'
   */
  rtb_NE_on = EPM_Ln_ObjGenFcn_P.NE_Gain_l0 * (real_T)
    Get_ObstacleDataA10_Move_in_and_Out();

  /* Gain: '<S161>/N->E' incorporates:
   *  DataTypeConversion: '<S161>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_ObstaclePosY'
   */
  rtb_NE_nv = EPM_Ln_ObjGenFcn_P.NE_Gain_f2j * (real_T)
    Get_ObstacleDataA10_ObstaclePosY();

  /* Gain: '<S121>/N->E' incorporates:
   *  DataTypeConversion: '<S121>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB10_ObstacleAge'
   */
  rtb_NE_j4i = EPM_Ln_ObjGenFcn_P.NE_Gain_b2f * (real_T)
    Get_ObstacleDataB10_ObstacleAge();

  /* Gain: '<S141>/N->E' incorporates:
   *  DataTypeConversion: '<S141>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB10_ObstacleLane'
   */
  rtb_NE_iy = EPM_Ln_ObjGenFcn_P.NE_Gain_pu * (real_T)
    Get_ObstacleDataB10_ObstacleLane();

  /* Gain: '<S86>/N->E' incorporates:
   *  DataTypeConversion: '<S86>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC10_ObstacleAngle'
   */
  rtb_NE_kq = EPM_Ln_ObjGenFcn_P.NE_Gain_hd * (real_T)
    Get_ObstacleDataC10_ObstacleAngle();

  /* Gain: '<S216>/N->E' incorporates:
   *  DataTypeConversion: '<S216>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataB10_ObstacleWidth'
   */
  rtb_NE_mn = EPM_Ln_ObjGenFcn_P.NE_Gain_ik * (real_T)
    Get_ObstacleDataB10_ObstacleWidth();

  /* Gain: '<S186>/N->E' incorporates:
   *  DataTypeConversion: '<S186>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataA10_ObstacleType'
   */
  rtb_NE_kv = EPM_Ln_ObjGenFcn_P.NE_Gain_dn5 * (real_T)
    Get_ObstacleDataA10_ObstacleType();

  /* Gain: '<S206>/N->E' incorporates:
   *  DataTypeConversion: '<S206>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleDataC10_ObstacleVelY'
   */
  rtb_NE_omc = EPM_Ln_ObjGenFcn_P.NE_Gain_e1 * (real_T)
    Get_ObstacleDataC10_ObstacleVelY();

  /* Switch: '<S262>/Switch' incorporates:
   *  Constant: '<S254>/SteerRatio'
   *  Constant: '<S254>/WheelBase'
   *  Constant: '<S262>/Constant'
   *  Constant: '<S262>/Constant1'
   *  Inport: '<Root>/StrWhlAng'
   *  Inport: '<Root>/VehSpdAvgDrvn'
   *  Inport: '<Root>/YawRate'
   *  Product: '<S262>/Divide'
   *  Product: '<S262>/Divide1'
   */
  if (EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn > EPM_Ln_ObjGenFcn_P.Switch_Threshold) {
    EPM_Ln_ObjGenFcn_B.Switch = EPM_Ln_ObjGenFcn_U.YawRate *
      EPM_Ln_ObjGenFcn_P.Constant_Value / EPM_Ln_ObjGenFcn_U.VehSpdAvgDrvn;
  } else {
    EPM_Ln_ObjGenFcn_B.Switch = EPM_Ln_ObjGenFcn_P.Constant1_Value *
      EPM_Ln_ObjGenFcn_U.StrWhlAng / EPM_Ln_ObjGenFcn_P.SteerRatio_Value /
      EPM_Ln_ObjGenFcn_P.WheelBase_Value;
  }

  /* End of Switch: '<S262>/Switch' */

  /* SignalConversion: '<S258>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Chart: '<S254>/ObsCutInCalFromTraj'
   */
  TmpSignalConversionAtSFunctionInport1_b[0] = rtb_NE_b12;
  TmpSignalConversionAtSFunctionInport1_b[1] = rtb_NE_c2;
  TmpSignalConversionAtSFunctionInport1_b[2] = rtb_NE_iu;
  TmpSignalConversionAtSFunctionInport1_b[3] = rtb_NE_id;
  TmpSignalConversionAtSFunctionInport1_b[4] = rtb_NE_ki;
  TmpSignalConversionAtSFunctionInport1_b[5] = rtb_NE_k5;
  TmpSignalConversionAtSFunctionInport1_b[6] = rtb_NE_ef;
  TmpSignalConversionAtSFunctionInport1_b[7] = rtb_NE_f;
  TmpSignalConversionAtSFunctionInport1_b[8] = rtb_NE_h;
  TmpSignalConversionAtSFunctionInport1_b[9] = rtb_NE_a;
  TmpSignalConversionAtSFunctionInport1_b[10] = rtb_NE_p;
  TmpSignalConversionAtSFunctionInport1_b[11] = rtb_NE_gn;
  TmpSignalConversionAtSFunctionInport1_b[12] = rtb_NE_m;
  TmpSignalConversionAtSFunctionInport1_b[13] = rtb_NE_k0;
  TmpSignalConversionAtSFunctionInport1_b[14] = rtb_NE_p5;
  TmpSignalConversionAtSFunctionInport1_b[15] = rtb_NE_ey;
  TmpSignalConversionAtSFunctionInport1_b[16] = rtb_NE_mwd;
  TmpSignalConversionAtSFunctionInport1_b[17] = rtb_NE_bq;
  TmpSignalConversionAtSFunctionInport1_b[18] = rtb_NE_jg;
  TmpSignalConversionAtSFunctionInport1_b[19] = rtb_NE_jd;
  TmpSignalConversionAtSFunctionInport1_b[20] = rtb_NE_g;
  TmpSignalConversionAtSFunctionInport1_b[21] = rtb_NE_ls;
  TmpSignalConversionAtSFunctionInport1_b[22] = rtb_NE_l;
  TmpSignalConversionAtSFunctionInport1_b[23] = rtb_NE_kgk;
  TmpSignalConversionAtSFunctionInport1_b[24] = rtb_NE_n;
  TmpSignalConversionAtSFunctionInport1_b[25] = rtb_NE_l1;
  TmpSignalConversionAtSFunctionInport1_b[26] = rtb_NE_fy;
  TmpSignalConversionAtSFunctionInport1_b[27] = rtb_NE_o;
  TmpSignalConversionAtSFunctionInport1_b[28] = rtb_NE_n5;
  TmpSignalConversionAtSFunctionInport1_b[29] = rtb_NE_go;
  TmpSignalConversionAtSFunctionInport1_b[30] = rtb_NE_pw;
  TmpSignalConversionAtSFunctionInport1_b[31] = rtb_NE_i;
  TmpSignalConversionAtSFunctionInport1_b[32] = rtb_NE_ic;
  TmpSignalConversionAtSFunctionInport1_b[33] = rtb_NE_ag;
  TmpSignalConversionAtSFunctionInport1_b[34] = rtb_NE_c;
  TmpSignalConversionAtSFunctionInport1_b[35] = rtb_NE_g4;
  TmpSignalConversionAtSFunctionInport1_b[36] = rtb_NE_k;
  TmpSignalConversionAtSFunctionInport1_b[37] = rtb_NE_drl;
  TmpSignalConversionAtSFunctionInport1_b[38] = rtb_NE_mr;
  TmpSignalConversionAtSFunctionInport1_b[39] = rtb_NE_i4;
  TmpSignalConversionAtSFunctionInport1_b[40] = rtb_NE_ec;
  TmpSignalConversionAtSFunctionInport1_b[41] = rtb_NE_mu;
  TmpSignalConversionAtSFunctionInport1_b[42] = rtb_NE_d;
  TmpSignalConversionAtSFunctionInport1_b[43] = rtb_NE_e;
  TmpSignalConversionAtSFunctionInport1_b[44] = rtb_NE_bl;
  TmpSignalConversionAtSFunctionInport1_b[45] = rtb_NE_pt;
  TmpSignalConversionAtSFunctionInport1_b[46] = rtb_NE_aj;
  TmpSignalConversionAtSFunctionInport1_b[47] = rtb_NE_jz;
  TmpSignalConversionAtSFunctionInport1_b[48] = rtb_NE_gf;
  TmpSignalConversionAtSFunctionInport1_b[49] = rtb_NE_kdn;
  TmpSignalConversionAtSFunctionInport1_b[50] = rtb_NE_o1;
  TmpSignalConversionAtSFunctionInport1_b[51] = rtb_NE_myk;
  TmpSignalConversionAtSFunctionInport1_b[52] = rtb_NE_ne;
  TmpSignalConversionAtSFunctionInport1_b[53] = rtb_NE_pec;
  TmpSignalConversionAtSFunctionInport1_b[54] = rtb_NE_gb;
  TmpSignalConversionAtSFunctionInport1_b[55] = rtb_NE_hm;
  TmpSignalConversionAtSFunctionInport1_b[56] = rtb_NE_j2;
  TmpSignalConversionAtSFunctionInport1_b[57] = rtb_NE_ob;
  TmpSignalConversionAtSFunctionInport1_b[58] = rtb_NE_n2;
  TmpSignalConversionAtSFunctionInport1_b[59] = rtb_NE_aii;
  TmpSignalConversionAtSFunctionInport1_b[60] = rtb_NE_cg;
  TmpSignalConversionAtSFunctionInport1_b[61] = rtb_NE_j;
  TmpSignalConversionAtSFunctionInport1_b[62] = rtb_NE_fe;
  TmpSignalConversionAtSFunctionInport1_b[63] = rtb_NE_b;
  TmpSignalConversionAtSFunctionInport1_b[64] = rtb_NE_gzu;
  TmpSignalConversionAtSFunctionInport1_b[65] = rtb_NE_ok;
  TmpSignalConversionAtSFunctionInport1_b[66] = rtb_NE_cj;
  TmpSignalConversionAtSFunctionInport1_b[67] = rtb_NE_km;
  TmpSignalConversionAtSFunctionInport1_b[68] = rtb_NE_gi;
  TmpSignalConversionAtSFunctionInport1_b[69] = rtb_NE_ivo;
  TmpSignalConversionAtSFunctionInport1_b[70] = rtb_NE_c4;
  TmpSignalConversionAtSFunctionInport1_b[71] = rtb_NE_ifn;
  TmpSignalConversionAtSFunctionInport1_b[72] = rtb_NE_ai;
  TmpSignalConversionAtSFunctionInport1_b[73] = rtb_NE_ao;
  TmpSignalConversionAtSFunctionInport1_b[74] = rtb_NE_do;
  TmpSignalConversionAtSFunctionInport1_b[75] = rtb_NE_pn;
  TmpSignalConversionAtSFunctionInport1_b[76] = rtb_NE_cd;
  TmpSignalConversionAtSFunctionInport1_b[77] = rtb_NE_oj;
  TmpSignalConversionAtSFunctionInport1_b[78] = rtb_NE_cb;
  TmpSignalConversionAtSFunctionInport1_b[79] = rtb_NE_gl;
  TmpSignalConversionAtSFunctionInport1_b[80] = rtb_NE_f0;
  TmpSignalConversionAtSFunctionInport1_b[81] = rtb_NE_b3;
  TmpSignalConversionAtSFunctionInport1_b[82] = rtb_NE_la;
  TmpSignalConversionAtSFunctionInport1_b[83] = rtb_NE_er;
  TmpSignalConversionAtSFunctionInport1_b[84] = rtb_NE_ah;
  TmpSignalConversionAtSFunctionInport1_b[85] = rtb_NE_ab;
  TmpSignalConversionAtSFunctionInport1_b[86] = rtb_NE_hj;
  TmpSignalConversionAtSFunctionInport1_b[87] = rtb_NE_fdw;
  TmpSignalConversionAtSFunctionInport1_b[88] = rtb_NE_of;
  TmpSignalConversionAtSFunctionInport1_b[89] = rtb_NE_gso;
  TmpSignalConversionAtSFunctionInport1_b[90] = rtb_NE_hc;
  TmpSignalConversionAtSFunctionInport1_b[91] = rtb_NE_h0;
  TmpSignalConversionAtSFunctionInport1_b[92] = rtb_NE_lo0;
  TmpSignalConversionAtSFunctionInport1_b[93] = rtb_NE_ht;
  TmpSignalConversionAtSFunctionInport1_b[94] = rtb_NE_cz;
  TmpSignalConversionAtSFunctionInport1_b[95] = rtb_NE_le;
  TmpSignalConversionAtSFunctionInport1_b[96] = rtb_NE_ptn;
  TmpSignalConversionAtSFunctionInport1_b[97] = rtb_NE_pp;
  TmpSignalConversionAtSFunctionInport1_b[98] = rtb_NE_eo;
  TmpSignalConversionAtSFunctionInport1_b[99] = rtb_NE_dq;
  TmpSignalConversionAtSFunctionInport1_b[100] = rtb_NE_ejz;
  TmpSignalConversionAtSFunctionInport1_b[101] = rtb_NE_pe;
  TmpSignalConversionAtSFunctionInport1_b[102] = rtb_NE_ba;
  TmpSignalConversionAtSFunctionInport1_b[103] = rtb_NE_ad;
  TmpSignalConversionAtSFunctionInport1_b[104] = rtb_NE_o3j;
  TmpSignalConversionAtSFunctionInport1_b[105] = rtb_NE_myi;
  TmpSignalConversionAtSFunctionInport1_b[106] = rtb_NE_pk;
  TmpSignalConversionAtSFunctionInport1_b[107] = rtb_NE_fdi;
  TmpSignalConversionAtSFunctionInport1_b[108] = rtb_NE_p0;
  TmpSignalConversionAtSFunctionInport1_b[109] = rtb_NE_kp;
  TmpSignalConversionAtSFunctionInport1_b[110] = rtb_NE_lg;
  TmpSignalConversionAtSFunctionInport1_b[111] = rtb_NE_f1;
  TmpSignalConversionAtSFunctionInport1_b[112] = rtb_NE_bbt;
  TmpSignalConversionAtSFunctionInport1_b[113] = rtb_NE_hg;
  TmpSignalConversionAtSFunctionInport1_b[114] = rtb_NE_aw;
  TmpSignalConversionAtSFunctionInport1_b[115] = rtb_NE_el;
  TmpSignalConversionAtSFunctionInport1_b[116] = rtb_NE_ka;
  TmpSignalConversionAtSFunctionInport1_b[117] = rtb_NE_g2;
  TmpSignalConversionAtSFunctionInport1_b[118] = rtb_NE_lp;
  TmpSignalConversionAtSFunctionInport1_b[119] = rtb_NE_cj2;
  TmpSignalConversionAtSFunctionInport1_b[120] = rtb_NE_fz;
  TmpSignalConversionAtSFunctionInport1_b[121] = rtb_NE_gx;
  TmpSignalConversionAtSFunctionInport1_b[122] = rtb_NE_eqb;
  TmpSignalConversionAtSFunctionInport1_b[123] = rtb_NE_dx1;
  TmpSignalConversionAtSFunctionInport1_b[124] = rtb_NE_e3;
  TmpSignalConversionAtSFunctionInport1_b[125] = rtb_NE_ol;
  TmpSignalConversionAtSFunctionInport1_b[126] = rtb_NE_o2f;
  TmpSignalConversionAtSFunctionInport1_b[127] = rtb_NE_ck;
  TmpSignalConversionAtSFunctionInport1_b[128] = rtb_NE_k4;
  TmpSignalConversionAtSFunctionInport1_b[129] = rtb_NE_lz;
  TmpSignalConversionAtSFunctionInport1_b[130] = rtb_NE_co;
  TmpSignalConversionAtSFunctionInport1_b[131] = rtb_NE_ib;
  TmpSignalConversionAtSFunctionInport1_b[132] = rtb_NE_on;
  TmpSignalConversionAtSFunctionInport1_b[133] = rtb_NE_nv;
  TmpSignalConversionAtSFunctionInport1_b[134] = rtb_NE_j4i;
  TmpSignalConversionAtSFunctionInport1_b[135] = rtb_NE_iy;
  TmpSignalConversionAtSFunctionInport1_b[136] = rtb_NE_kq;
  TmpSignalConversionAtSFunctionInport1_b[137] = rtb_NE_mn;
  TmpSignalConversionAtSFunctionInport1_b[138] = rtb_NE_kv;
  TmpSignalConversionAtSFunctionInport1_b[139] = rtb_NE_omc;

  /* Chart: '<S254>/ObsCutInCalFromTraj' incorporates:
   *  Constant: '<S254>/Constant1'
   *  Constant: '<S254>/Constant11'
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant9'
   */
  /* Gateway: Subsystem1/EyeQ_Sensor/ObsCutInCalFromTraj */
  /* During: Subsystem1/EyeQ_Sensor/ObsCutInCalFromTraj */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/ObsCutInCalFromTraj */
  /* Transition: '<S258>:79' */
  i = 0.0;
  ObsCutInVelX_f = 0.0;
  ObsCutInPosX_d = 1000.0;
  ObsCutInAccelX_d = 0.0;
  ObsCutInStatus_a = 0.0;
  ObsCutInID_k = 0.0;
  ObsCutInCutIn_p = 0.0;
  ObsCutInPosY_m = 100.0;
  ObsCutInFlg_e = 0;
  ObsCutInLane_m = 2.0;
  ObsCutInAngle_k = 0.0;
  ObsCutInITTC = -100.0;
  ObsCutInWidth_d = 5.0;
  while ((i < EPM_Ln_ObjGenFcn_P.Constant1_Value_c) &&
         (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 5.0)] != 0.0)) {
    /* Transition: '<S258>:80' */
    /* //4->oncoming */
    if ((TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)] <= ObsCutInPosX_d) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 4.0)] != 4.0) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 12.0)] != 3.0)) {
      /* Transition: '<S258>:94' */
      /* 3->pedestrian */
      /* Transition: '<S258>:96' */
      Flg = EPM_Ln_ObjGenFcn_ObsCutInFlgCalFromTraj
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)],
         TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 7.0)],
         TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 11.0)],
         EPM_Ln_ObjGenFcn_P.Constant9_Value,
         TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 13.0)]);
      if (Flg == 1) {
        /* Transition: '<S258>:81' */
        /* Transition: '<S258>:84' */
        ObsCutInVelX_f = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i)] * 3.6;
        ObsCutInPosX_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)];
        ObsCutInAccelX_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 3.0)];
        ObsCutInStatus_a = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 4.0)];
        ObsCutInID_k = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 5.0)];
        ObsCutInCutIn_p = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 6.0)];
        ObsCutInPosY_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 7.0)];
        ObsCutInFlg_e = 1;
        ObsCutInLane_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 9.0)];
        ObsCutInAngle_k = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 10.0)];
        ObsCutInITTC = -TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i)] /
          TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)];
        ObsCutInWidth_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 11.0)];
        EPM_Ln_ObjGenFcn_B.ObsCutInCutInTime_m = fabs((fabs
          (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 7.0)] -
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)] *
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 2.0)] *
           EPM_Ln_ObjGenFcn_B.Switch / 2.0) -
          (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 11.0)] * (0.5 -
          EPM_Ln_ObjGenFcn_P.Constant11_Value) +
           EPM_Ln_ObjGenFcn_P.Constant9_Value / 2.0)) /
          TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant3_Value * i + 13.0)]);

        /* Transition: '<S258>:89' */
      } else {
        /* Transition: '<S258>:123' */
      }

      /* Transition: '<S258>:97' */
    } else {
      /* Transition: '<S258>:88' */
    }

    /* Transition: '<S258>:82' */
    i++;
  }

  /* Saturate: '<S104>/Saturation' */
  /* Transition: '<S258>:83' */
  if (ObsCutInStatus_a > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_bi) {
    ObsCutInStatus_a = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_bi;
  } else {
    if (ObsCutInStatus_a < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mh) {
      ObsCutInStatus_a = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mh;
    }
  }

  /* DataTypeConversion: '<S104>/Data Type Conversion' incorporates:
   *  Gain: '<S104>/E->N'
   *  Saturate: '<S104>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_o * ObsCutInStatus_a);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInStatus((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                      (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S104>/Data Type Conversion' */

  /* Saturate: '<S106>/Saturation' */
  if (ObsCutInVelX_f > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_c0) {
    ObsCutInVelX_f = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_c0;
  } else {
    if (ObsCutInVelX_f < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_g) {
      ObsCutInVelX_f = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_g;
    }
  }

  /* DataTypeConversion: '<S106>/Data Type Conversion' incorporates:
   *  Gain: '<S106>/E->N'
   *  Saturate: '<S106>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_o2 * ObsCutInVelX_f);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsCutInVelX((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
                    (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S106>/Data Type Conversion' */

  /* Saturate: '<S103>/Saturation' */
  if (ObsCutInPosY_m > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ac) {
    ObsCutInPosY_m = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ac;
  } else {
    if (ObsCutInPosY_m < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o0) {
      ObsCutInPosY_m = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o0;
    }
  }

  /* DataTypeConversion: '<S103>/Data Type Conversion' incorporates:
   *  Gain: '<S103>/E->N'
   *  Saturate: '<S103>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ec * ObsCutInPosY_m);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsCutInPosY((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
                    (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S103>/Data Type Conversion' */

  /* Saturate: '<S102>/Saturation' */
  if (ObsCutInPosX_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_n2) {
    ObsCutInPosX_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_n2;
  } else {
    if (ObsCutInPosX_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o5) {
      ObsCutInPosX_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_o5;
    }
  }

  /* DataTypeConversion: '<S102>/Data Type Conversion' incorporates:
   *  Gain: '<S102>/E->N'
   *  Saturate: '<S102>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ez * ObsCutInPosX_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsCutInPosX((uint16_T)(i < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
    -i : (int32_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S102>/Data Type Conversion' */

  /* Saturate: '<S101>/Saturation' */
  if (ObsCutInLane_m > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fk) {
    ObsCutInLane_m = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fk;
  } else {
    if (ObsCutInLane_m < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_po) {
      ObsCutInLane_m = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_po;
    }
  }

  /* DataTypeConversion: '<S101>/Data Type Conversion' incorporates:
   *  Gain: '<S101>/E->N'
   *  Saturate: '<S101>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_nz * ObsCutInLane_m);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInLane((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S101>/Data Type Conversion' */

  /* Saturate: '<S100>/Saturation' */
  if (ObsCutInID_k > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_au) {
    ObsCutInID_k = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_au;
  } else {
    if (ObsCutInID_k < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_oa) {
      ObsCutInID_k = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_oa;
    }
  }

  /* DataTypeConversion: '<S100>/Data Type Conversion' incorporates:
   *  Gain: '<S100>/E->N'
   *  Saturate: '<S100>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_nx * ObsCutInID_k);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInID((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S100>/Data Type Conversion' */

  /* Saturate: '<S97>/Saturation' */
  if (ObsCutInCutIn_p > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_pn) {
    ObsCutInCutIn_p = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_pn;
  } else {
    if (ObsCutInCutIn_p < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jb0) {
      ObsCutInCutIn_p = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jb0;
    }
  }

  /* DataTypeConversion: '<S97>/Data Type Conversion' incorporates:
   *  Gain: '<S97>/E->N'
   *  Saturate: '<S97>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_f3 * ObsCutInCutIn_p);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInCutIn((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                     (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S97>/Data Type Conversion' */

  /* Saturate: '<S96>/Saturation' */
  if (ObsCutInAngle_k > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_bv) {
    ObsCutInAngle_k = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_bv;
  } else {
    if (ObsCutInAngle_k < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mn) {
      ObsCutInAngle_k = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mn;
    }
  }

  /* DataTypeConversion: '<S96>/Data Type Conversion' incorporates:
   *  Gain: '<S96>/E->N'
   *  Saturate: '<S96>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_fj * ObsCutInAngle_k);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsCutInAngle((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i
    : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S96>/Data Type Conversion' */

  /* Saturate: '<S95>/Saturation' */
  if (ObsCutInAccelX_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_os) {
    ObsCutInAccelX_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_os;
  } else {
    if (ObsCutInAccelX_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ds) {
      ObsCutInAccelX_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ds;
    }
  }

  /* DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
   *  Gain: '<S95>/E->N'
   *  Saturate: '<S95>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ok * ObsCutInAccelX_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsCutInAccelX((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)
    -i : (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S95>/Data Type Conversion' */

  /* Saturate: '<S99>/Saturation' */
  if (ObsCutInFlg_e > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_dc) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_dc;
  } else if (ObsCutInFlg_e < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_dx) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_dx;
  } else {
    i = ObsCutInFlg_e;
  }

  /* DataTypeConversion: '<S99>/Data Type Conversion' incorporates:
   *  Gain: '<S99>/E->N'
   *  Saturate: '<S99>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_a2 * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInFlg((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S99>/Data Type Conversion' */

  /* Saturate: '<S105>/Saturation' */
  if (ObsCutInITTC > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fj) {
    ObsCutInITTC = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fj;
  } else {
    if (ObsCutInITTC < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jp) {
      ObsCutInITTC = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jp;
    }
  }

  /* DataTypeConversion: '<S105>/Data Type Conversion' incorporates:
   *  Gain: '<S105>/E->N'
   *  Saturate: '<S105>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_df * ObsCutInITTC);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInTTC((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S105>/Data Type Conversion' */

  /* Saturate: '<S107>/Saturation' */
  if (ObsCutInWidth_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_nm) {
    ObsCutInWidth_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_nm;
  } else {
    if (ObsCutInWidth_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_f) {
      ObsCutInWidth_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_f;
    }
  }

  /* DataTypeConversion: '<S107>/Data Type Conversion' incorporates:
   *  Gain: '<S107>/E->N'
   *  Saturate: '<S107>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_c1 * ObsCutInWidth_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInWidth((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                     (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S107>/Data Type Conversion' */

  /* Saturate: '<S98>/Saturation' */
  if (EPM_Ln_ObjGenFcn_B.ObsCutInCutInTime_m >
      EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ps) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ps;
  } else if (EPM_Ln_ObjGenFcn_B.ObsCutInCutInTime_m <
             EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ct) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ct;
  } else {
    i = EPM_Ln_ObjGenFcn_B.ObsCutInCutInTime_m;
  }

  /* DataTypeConversion: '<S98>/Data Type Conversion' incorporates:
   *  Gain: '<S98>/E->N'
   *  Saturate: '<S98>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_fh * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsCutInCutInTime((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S98>/Data Type Conversion' */

  /* Chart: '<S254>/Chart4' */
  /* Gateway: Subsystem1/EyeQ_Sensor/Chart4 */
  /* During: Subsystem1/EyeQ_Sensor/Chart4 */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/Chart4 */
  /* Transition: '<S257>:2' */
  if (0.0 == EPM_Ln_ObjGenFcn_DW.RxTimeLast) {
    /* Transition: '<S257>:7' */
    if (EPM_Ln_ObjGenFcn_DW.Cnt > 10.0) {
      /* Transition: '<S257>:11' */
      /* Transition: '<S257>:13' */
      EPM_Ln_ObjGenFcn_B.BusOff_d = 1.0;

      /* Transition: '<S257>:19' */
    } else {
      /* Transition: '<S257>:9' */
      EPM_Ln_ObjGenFcn_DW.Cnt++;
    }

    /* Transition: '<S257>:18' */
  } else {
    /* Transition: '<S257>:5' */
    EPM_Ln_ObjGenFcn_DW.Cnt = 0.0;
    EPM_Ln_ObjGenFcn_B.BusOff_d = 0.0;
  }

  /* Transition: '<S257>:15' */
  EPM_Ln_ObjGenFcn_DW.RxTimeLast = 0.0;

  /* End of Chart: '<S254>/Chart4' */

  /* Saturate: '<S1>/Saturation' */
  /* Transition: '<S257>:17' */
  if (EPM_Ln_ObjGenFcn_B.BusOff_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ob) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ob;
  } else if (EPM_Ln_ObjGenFcn_B.BusOff_d <
             EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_iv) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_iv;
  } else {
    i = EPM_Ln_ObjGenFcn_B.BusOff_d;
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Gain: '<S1>/E->N'
   *  Saturate: '<S1>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ei * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_BusOff((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                       (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* UnitDelay: '<S254>/Unit Delay1' */
  UnitDelay1 = EPM_Ln_ObjGenFcn_DW.UnitDelay1_DSTATE;

  /* SignalConversion: '<S260>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Chart: '<S254>/ObsMCalFromTraj'
   */
  TmpSignalConversionAtSFunctionInport1_b[0] = rtb_NE_b12;
  TmpSignalConversionAtSFunctionInport1_b[1] = rtb_NE_c2;
  TmpSignalConversionAtSFunctionInport1_b[2] = rtb_NE_iu;
  TmpSignalConversionAtSFunctionInport1_b[3] = rtb_NE_id;
  TmpSignalConversionAtSFunctionInport1_b[4] = rtb_NE_ki;
  TmpSignalConversionAtSFunctionInport1_b[5] = rtb_NE_k5;
  TmpSignalConversionAtSFunctionInport1_b[6] = rtb_NE_ef;
  TmpSignalConversionAtSFunctionInport1_b[7] = rtb_NE_f;
  TmpSignalConversionAtSFunctionInport1_b[8] = rtb_NE_h;
  TmpSignalConversionAtSFunctionInport1_b[9] = rtb_NE_a;
  TmpSignalConversionAtSFunctionInport1_b[10] = rtb_NE_p;
  TmpSignalConversionAtSFunctionInport1_b[11] = rtb_NE_gn;
  TmpSignalConversionAtSFunctionInport1_b[12] = rtb_NE_m;
  TmpSignalConversionAtSFunctionInport1_b[13] = rtb_NE_k0;
  TmpSignalConversionAtSFunctionInport1_b[14] = rtb_NE_p5;
  TmpSignalConversionAtSFunctionInport1_b[15] = rtb_NE_ey;
  TmpSignalConversionAtSFunctionInport1_b[16] = rtb_NE_mwd;
  TmpSignalConversionAtSFunctionInport1_b[17] = rtb_NE_bq;
  TmpSignalConversionAtSFunctionInport1_b[18] = rtb_NE_jg;
  TmpSignalConversionAtSFunctionInport1_b[19] = rtb_NE_jd;
  TmpSignalConversionAtSFunctionInport1_b[20] = rtb_NE_g;
  TmpSignalConversionAtSFunctionInport1_b[21] = rtb_NE_ls;
  TmpSignalConversionAtSFunctionInport1_b[22] = rtb_NE_l;
  TmpSignalConversionAtSFunctionInport1_b[23] = rtb_NE_kgk;
  TmpSignalConversionAtSFunctionInport1_b[24] = rtb_NE_n;
  TmpSignalConversionAtSFunctionInport1_b[25] = rtb_NE_l1;
  TmpSignalConversionAtSFunctionInport1_b[26] = rtb_NE_fy;
  TmpSignalConversionAtSFunctionInport1_b[27] = rtb_NE_o;
  TmpSignalConversionAtSFunctionInport1_b[28] = rtb_NE_n5;
  TmpSignalConversionAtSFunctionInport1_b[29] = rtb_NE_go;
  TmpSignalConversionAtSFunctionInport1_b[30] = rtb_NE_pw;
  TmpSignalConversionAtSFunctionInport1_b[31] = rtb_NE_i;
  TmpSignalConversionAtSFunctionInport1_b[32] = rtb_NE_ic;
  TmpSignalConversionAtSFunctionInport1_b[33] = rtb_NE_ag;
  TmpSignalConversionAtSFunctionInport1_b[34] = rtb_NE_c;
  TmpSignalConversionAtSFunctionInport1_b[35] = rtb_NE_g4;
  TmpSignalConversionAtSFunctionInport1_b[36] = rtb_NE_k;
  TmpSignalConversionAtSFunctionInport1_b[37] = rtb_NE_drl;
  TmpSignalConversionAtSFunctionInport1_b[38] = rtb_NE_mr;
  TmpSignalConversionAtSFunctionInport1_b[39] = rtb_NE_i4;
  TmpSignalConversionAtSFunctionInport1_b[40] = rtb_NE_ec;
  TmpSignalConversionAtSFunctionInport1_b[41] = rtb_NE_mu;
  TmpSignalConversionAtSFunctionInport1_b[42] = rtb_NE_d;
  TmpSignalConversionAtSFunctionInport1_b[43] = rtb_NE_e;
  TmpSignalConversionAtSFunctionInport1_b[44] = rtb_NE_bl;
  TmpSignalConversionAtSFunctionInport1_b[45] = rtb_NE_pt;
  TmpSignalConversionAtSFunctionInport1_b[46] = rtb_NE_aj;
  TmpSignalConversionAtSFunctionInport1_b[47] = rtb_NE_jz;
  TmpSignalConversionAtSFunctionInport1_b[48] = rtb_NE_gf;
  TmpSignalConversionAtSFunctionInport1_b[49] = rtb_NE_kdn;
  TmpSignalConversionAtSFunctionInport1_b[50] = rtb_NE_o1;
  TmpSignalConversionAtSFunctionInport1_b[51] = rtb_NE_myk;
  TmpSignalConversionAtSFunctionInport1_b[52] = rtb_NE_ne;
  TmpSignalConversionAtSFunctionInport1_b[53] = rtb_NE_pec;
  TmpSignalConversionAtSFunctionInport1_b[54] = rtb_NE_gb;
  TmpSignalConversionAtSFunctionInport1_b[55] = rtb_NE_hm;
  TmpSignalConversionAtSFunctionInport1_b[56] = rtb_NE_j2;
  TmpSignalConversionAtSFunctionInport1_b[57] = rtb_NE_ob;
  TmpSignalConversionAtSFunctionInport1_b[58] = rtb_NE_n2;
  TmpSignalConversionAtSFunctionInport1_b[59] = rtb_NE_aii;
  TmpSignalConversionAtSFunctionInport1_b[60] = rtb_NE_cg;
  TmpSignalConversionAtSFunctionInport1_b[61] = rtb_NE_j;
  TmpSignalConversionAtSFunctionInport1_b[62] = rtb_NE_fe;
  TmpSignalConversionAtSFunctionInport1_b[63] = rtb_NE_b;
  TmpSignalConversionAtSFunctionInport1_b[64] = rtb_NE_gzu;
  TmpSignalConversionAtSFunctionInport1_b[65] = rtb_NE_ok;
  TmpSignalConversionAtSFunctionInport1_b[66] = rtb_NE_cj;
  TmpSignalConversionAtSFunctionInport1_b[67] = rtb_NE_km;
  TmpSignalConversionAtSFunctionInport1_b[68] = rtb_NE_gi;
  TmpSignalConversionAtSFunctionInport1_b[69] = rtb_NE_ivo;
  TmpSignalConversionAtSFunctionInport1_b[70] = rtb_NE_c4;
  TmpSignalConversionAtSFunctionInport1_b[71] = rtb_NE_ifn;
  TmpSignalConversionAtSFunctionInport1_b[72] = rtb_NE_ai;
  TmpSignalConversionAtSFunctionInport1_b[73] = rtb_NE_ao;
  TmpSignalConversionAtSFunctionInport1_b[74] = rtb_NE_do;
  TmpSignalConversionAtSFunctionInport1_b[75] = rtb_NE_pn;
  TmpSignalConversionAtSFunctionInport1_b[76] = rtb_NE_cd;
  TmpSignalConversionAtSFunctionInport1_b[77] = rtb_NE_oj;
  TmpSignalConversionAtSFunctionInport1_b[78] = rtb_NE_cb;
  TmpSignalConversionAtSFunctionInport1_b[79] = rtb_NE_gl;
  TmpSignalConversionAtSFunctionInport1_b[80] = rtb_NE_f0;
  TmpSignalConversionAtSFunctionInport1_b[81] = rtb_NE_b3;
  TmpSignalConversionAtSFunctionInport1_b[82] = rtb_NE_la;
  TmpSignalConversionAtSFunctionInport1_b[83] = rtb_NE_er;
  TmpSignalConversionAtSFunctionInport1_b[84] = rtb_NE_ah;
  TmpSignalConversionAtSFunctionInport1_b[85] = rtb_NE_ab;
  TmpSignalConversionAtSFunctionInport1_b[86] = rtb_NE_hj;
  TmpSignalConversionAtSFunctionInport1_b[87] = rtb_NE_fdw;
  TmpSignalConversionAtSFunctionInport1_b[88] = rtb_NE_of;
  TmpSignalConversionAtSFunctionInport1_b[89] = rtb_NE_gso;
  TmpSignalConversionAtSFunctionInport1_b[90] = rtb_NE_hc;
  TmpSignalConversionAtSFunctionInport1_b[91] = rtb_NE_h0;
  TmpSignalConversionAtSFunctionInport1_b[92] = rtb_NE_lo0;
  TmpSignalConversionAtSFunctionInport1_b[93] = rtb_NE_ht;
  TmpSignalConversionAtSFunctionInport1_b[94] = rtb_NE_cz;
  TmpSignalConversionAtSFunctionInport1_b[95] = rtb_NE_le;
  TmpSignalConversionAtSFunctionInport1_b[96] = rtb_NE_ptn;
  TmpSignalConversionAtSFunctionInport1_b[97] = rtb_NE_pp;
  TmpSignalConversionAtSFunctionInport1_b[98] = rtb_NE_eo;
  TmpSignalConversionAtSFunctionInport1_b[99] = rtb_NE_dq;
  TmpSignalConversionAtSFunctionInport1_b[100] = rtb_NE_ejz;
  TmpSignalConversionAtSFunctionInport1_b[101] = rtb_NE_pe;
  TmpSignalConversionAtSFunctionInport1_b[102] = rtb_NE_ba;
  TmpSignalConversionAtSFunctionInport1_b[103] = rtb_NE_ad;
  TmpSignalConversionAtSFunctionInport1_b[104] = rtb_NE_o3j;
  TmpSignalConversionAtSFunctionInport1_b[105] = rtb_NE_myi;
  TmpSignalConversionAtSFunctionInport1_b[106] = rtb_NE_pk;
  TmpSignalConversionAtSFunctionInport1_b[107] = rtb_NE_fdi;
  TmpSignalConversionAtSFunctionInport1_b[108] = rtb_NE_p0;
  TmpSignalConversionAtSFunctionInport1_b[109] = rtb_NE_kp;
  TmpSignalConversionAtSFunctionInport1_b[110] = rtb_NE_lg;
  TmpSignalConversionAtSFunctionInport1_b[111] = rtb_NE_f1;
  TmpSignalConversionAtSFunctionInport1_b[112] = rtb_NE_bbt;
  TmpSignalConversionAtSFunctionInport1_b[113] = rtb_NE_hg;
  TmpSignalConversionAtSFunctionInport1_b[114] = rtb_NE_aw;
  TmpSignalConversionAtSFunctionInport1_b[115] = rtb_NE_el;
  TmpSignalConversionAtSFunctionInport1_b[116] = rtb_NE_ka;
  TmpSignalConversionAtSFunctionInport1_b[117] = rtb_NE_g2;
  TmpSignalConversionAtSFunctionInport1_b[118] = rtb_NE_lp;
  TmpSignalConversionAtSFunctionInport1_b[119] = rtb_NE_cj2;
  TmpSignalConversionAtSFunctionInport1_b[120] = rtb_NE_fz;
  TmpSignalConversionAtSFunctionInport1_b[121] = rtb_NE_gx;
  TmpSignalConversionAtSFunctionInport1_b[122] = rtb_NE_eqb;
  TmpSignalConversionAtSFunctionInport1_b[123] = rtb_NE_dx1;
  TmpSignalConversionAtSFunctionInport1_b[124] = rtb_NE_e3;
  TmpSignalConversionAtSFunctionInport1_b[125] = rtb_NE_ol;
  TmpSignalConversionAtSFunctionInport1_b[126] = rtb_NE_o2f;
  TmpSignalConversionAtSFunctionInport1_b[127] = rtb_NE_ck;
  TmpSignalConversionAtSFunctionInport1_b[128] = rtb_NE_k4;
  TmpSignalConversionAtSFunctionInport1_b[129] = rtb_NE_lz;
  TmpSignalConversionAtSFunctionInport1_b[130] = rtb_NE_co;
  TmpSignalConversionAtSFunctionInport1_b[131] = rtb_NE_ib;
  TmpSignalConversionAtSFunctionInport1_b[132] = rtb_NE_on;
  TmpSignalConversionAtSFunctionInport1_b[133] = rtb_NE_nv;
  TmpSignalConversionAtSFunctionInport1_b[134] = rtb_NE_j4i;
  TmpSignalConversionAtSFunctionInport1_b[135] = rtb_NE_iy;
  TmpSignalConversionAtSFunctionInport1_b[136] = rtb_NE_kq;
  TmpSignalConversionAtSFunctionInport1_b[137] = rtb_NE_mn;
  TmpSignalConversionAtSFunctionInport1_b[138] = rtb_NE_kv;
  TmpSignalConversionAtSFunctionInport1_b[139] = rtb_NE_omc;

  /* Chart: '<S254>/ObsMCalFromTraj' incorporates:
   *  Constant: '<S254>/Constant12'
   *  Constant: '<S254>/Constant8'
   *  Constant: '<S254>/KLaneWidth'
   *  Constant: '<S254>/KLaneWidthObsM'
   */
  /* Gateway: Subsystem1/EyeQ_Sensor/ObsMCalFromTraj */
  /* During: Subsystem1/EyeQ_Sensor/ObsMCalFromTraj */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/ObsMCalFromTraj */
  /* Transition: '<S260>:79' */
  i = 0.0;
  ObsMVelX_g = 0.0;
  ObsMPosX_j = 1000.0;
  ObsMAccelX_c = 0.0;
  ObsMStatus_l = 0.0;
  ObsMID_c = 0.0;
  ObsMCutIn_n = 0.0;
  ObsMPosY_k = 100.0;
  ObsMFlg_d = 0;
  ObsMLane_g = 2.0;
  ObsMAngle_m = 0.0;
  ObsMITTC_a = -100.0;
  ObsMWidth_m = 5.0;
  while ((i < EPM_Ln_ObjGenFcn_P.Constant8_Value) &&
         (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 5.0)] != 0.0)) {
    /* Transition: '<S260>:80' */
    /* //4->oncoming */
    if ((TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 2.0)] <= ObsMPosX_j) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 4.0)] != 4.0) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 12.0)] != 3.0)) {
      /* Transition: '<S260>:94' */
      /* 3->pedestrian */
      if (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 5.0)] == UnitDelay1) {
        /* Transition: '<S260>:149' */
        /* Transition: '<S260>:96' */
        Flg = EPM_Ln_ObjGenFcn_ObsMFlgCalFromTraj
          (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 2.0)],
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 7.0)],
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 11.0)],
           EPM_Ln_ObjGenFcn_P.KLaneWidthObsM_Value, 60.0);
      } else {
        /* Transition: '<S260>:151' */
        Flg = EPM_Ln_ObjGenFcn_ObsMFlgCalFromTraj
          (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 2.0)],
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 7.0)],
           TmpSignalConversionAtSFunctionInport1_b[(int32_T)
           (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 11.0)],
           EPM_Ln_ObjGenFcn_P.KLaneWidth_Value, 50.0);

        /* Transition: '<S260>:152' */
      }

      if (Flg == 1) {
        /* Transition: '<S260>:81' */
        /* Transition: '<S260>:84' */
        ObsMVelX_g = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i)] * 3.6;
        ObsMPosX_j = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 2.0)];
        ObsMAccelX_c = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 3.0)];
        ObsMStatus_l = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 4.0)];
        ObsMID_c = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 5.0)];
        ObsMCutIn_n = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 6.0)];
        ObsMPosY_k = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 7.0)];
        ObsMFlg_d = 1;
        ObsMLane_g = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 9.0)];
        ObsMAngle_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 10.0)];
        ObsMITTC_a = -TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i)] /
          TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 2.0)];
        ObsMWidth_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant12_Value * i + 11.0)];

        /* Transition: '<S260>:89' */
      } else {
        /* Transition: '<S260>:123' */
      }

      /* Transition: '<S260>:97' */
    } else {
      /* Transition: '<S260>:88' */
    }

    /* Transition: '<S260>:82' */
    i++;
  }

  /* SignalConversion: '<S259>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  Chart: '<S254>/ObsMCalFromPath'
   */
  /* Transition: '<S260>:83' */
  TmpSignalConversionAtSFunctionInport1_b[0] = rtb_NE_b12;
  TmpSignalConversionAtSFunctionInport1_b[1] = rtb_NE_c2;
  TmpSignalConversionAtSFunctionInport1_b[2] = rtb_NE_iu;
  TmpSignalConversionAtSFunctionInport1_b[3] = rtb_NE_id;
  TmpSignalConversionAtSFunctionInport1_b[4] = rtb_NE_ki;
  TmpSignalConversionAtSFunctionInport1_b[5] = rtb_NE_k5;
  TmpSignalConversionAtSFunctionInport1_b[6] = rtb_NE_ef;
  TmpSignalConversionAtSFunctionInport1_b[7] = rtb_NE_f;
  TmpSignalConversionAtSFunctionInport1_b[8] = rtb_NE_h;
  TmpSignalConversionAtSFunctionInport1_b[9] = rtb_NE_a;
  TmpSignalConversionAtSFunctionInport1_b[10] = rtb_NE_p;
  TmpSignalConversionAtSFunctionInport1_b[11] = rtb_NE_gn;
  TmpSignalConversionAtSFunctionInport1_b[12] = rtb_NE_m;
  TmpSignalConversionAtSFunctionInport1_b[13] = rtb_NE_k0;
  TmpSignalConversionAtSFunctionInport1_b[14] = rtb_NE_p5;
  TmpSignalConversionAtSFunctionInport1_b[15] = rtb_NE_ey;
  TmpSignalConversionAtSFunctionInport1_b[16] = rtb_NE_mwd;
  TmpSignalConversionAtSFunctionInport1_b[17] = rtb_NE_bq;
  TmpSignalConversionAtSFunctionInport1_b[18] = rtb_NE_jg;
  TmpSignalConversionAtSFunctionInport1_b[19] = rtb_NE_jd;
  TmpSignalConversionAtSFunctionInport1_b[20] = rtb_NE_g;
  TmpSignalConversionAtSFunctionInport1_b[21] = rtb_NE_ls;
  TmpSignalConversionAtSFunctionInport1_b[22] = rtb_NE_l;
  TmpSignalConversionAtSFunctionInport1_b[23] = rtb_NE_kgk;
  TmpSignalConversionAtSFunctionInport1_b[24] = rtb_NE_n;
  TmpSignalConversionAtSFunctionInport1_b[25] = rtb_NE_l1;
  TmpSignalConversionAtSFunctionInport1_b[26] = rtb_NE_fy;
  TmpSignalConversionAtSFunctionInport1_b[27] = rtb_NE_o;
  TmpSignalConversionAtSFunctionInport1_b[28] = rtb_NE_n5;
  TmpSignalConversionAtSFunctionInport1_b[29] = rtb_NE_go;
  TmpSignalConversionAtSFunctionInport1_b[30] = rtb_NE_pw;
  TmpSignalConversionAtSFunctionInport1_b[31] = rtb_NE_i;
  TmpSignalConversionAtSFunctionInport1_b[32] = rtb_NE_ic;
  TmpSignalConversionAtSFunctionInport1_b[33] = rtb_NE_ag;
  TmpSignalConversionAtSFunctionInport1_b[34] = rtb_NE_c;
  TmpSignalConversionAtSFunctionInport1_b[35] = rtb_NE_g4;
  TmpSignalConversionAtSFunctionInport1_b[36] = rtb_NE_k;
  TmpSignalConversionAtSFunctionInport1_b[37] = rtb_NE_drl;
  TmpSignalConversionAtSFunctionInport1_b[38] = rtb_NE_mr;
  TmpSignalConversionAtSFunctionInport1_b[39] = rtb_NE_i4;
  TmpSignalConversionAtSFunctionInport1_b[40] = rtb_NE_ec;
  TmpSignalConversionAtSFunctionInport1_b[41] = rtb_NE_mu;
  TmpSignalConversionAtSFunctionInport1_b[42] = rtb_NE_d;
  TmpSignalConversionAtSFunctionInport1_b[43] = rtb_NE_e;
  TmpSignalConversionAtSFunctionInport1_b[44] = rtb_NE_bl;
  TmpSignalConversionAtSFunctionInport1_b[45] = rtb_NE_pt;
  TmpSignalConversionAtSFunctionInport1_b[46] = rtb_NE_aj;
  TmpSignalConversionAtSFunctionInport1_b[47] = rtb_NE_jz;
  TmpSignalConversionAtSFunctionInport1_b[48] = rtb_NE_gf;
  TmpSignalConversionAtSFunctionInport1_b[49] = rtb_NE_kdn;
  TmpSignalConversionAtSFunctionInport1_b[50] = rtb_NE_o1;
  TmpSignalConversionAtSFunctionInport1_b[51] = rtb_NE_myk;
  TmpSignalConversionAtSFunctionInport1_b[52] = rtb_NE_ne;
  TmpSignalConversionAtSFunctionInport1_b[53] = rtb_NE_pec;
  TmpSignalConversionAtSFunctionInport1_b[54] = rtb_NE_gb;
  TmpSignalConversionAtSFunctionInport1_b[55] = rtb_NE_hm;
  TmpSignalConversionAtSFunctionInport1_b[56] = rtb_NE_j2;
  TmpSignalConversionAtSFunctionInport1_b[57] = rtb_NE_ob;
  TmpSignalConversionAtSFunctionInport1_b[58] = rtb_NE_n2;
  TmpSignalConversionAtSFunctionInport1_b[59] = rtb_NE_aii;
  TmpSignalConversionAtSFunctionInport1_b[60] = rtb_NE_cg;
  TmpSignalConversionAtSFunctionInport1_b[61] = rtb_NE_j;
  TmpSignalConversionAtSFunctionInport1_b[62] = rtb_NE_fe;
  TmpSignalConversionAtSFunctionInport1_b[63] = rtb_NE_b;
  TmpSignalConversionAtSFunctionInport1_b[64] = rtb_NE_gzu;
  TmpSignalConversionAtSFunctionInport1_b[65] = rtb_NE_ok;
  TmpSignalConversionAtSFunctionInport1_b[66] = rtb_NE_cj;
  TmpSignalConversionAtSFunctionInport1_b[67] = rtb_NE_km;
  TmpSignalConversionAtSFunctionInport1_b[68] = rtb_NE_gi;
  TmpSignalConversionAtSFunctionInport1_b[69] = rtb_NE_ivo;
  TmpSignalConversionAtSFunctionInport1_b[70] = rtb_NE_c4;
  TmpSignalConversionAtSFunctionInport1_b[71] = rtb_NE_ifn;
  TmpSignalConversionAtSFunctionInport1_b[72] = rtb_NE_ai;
  TmpSignalConversionAtSFunctionInport1_b[73] = rtb_NE_ao;
  TmpSignalConversionAtSFunctionInport1_b[74] = rtb_NE_do;
  TmpSignalConversionAtSFunctionInport1_b[75] = rtb_NE_pn;
  TmpSignalConversionAtSFunctionInport1_b[76] = rtb_NE_cd;
  TmpSignalConversionAtSFunctionInport1_b[77] = rtb_NE_oj;
  TmpSignalConversionAtSFunctionInport1_b[78] = rtb_NE_cb;
  TmpSignalConversionAtSFunctionInport1_b[79] = rtb_NE_gl;
  TmpSignalConversionAtSFunctionInport1_b[80] = rtb_NE_f0;
  TmpSignalConversionAtSFunctionInport1_b[81] = rtb_NE_b3;
  TmpSignalConversionAtSFunctionInport1_b[82] = rtb_NE_la;
  TmpSignalConversionAtSFunctionInport1_b[83] = rtb_NE_er;
  TmpSignalConversionAtSFunctionInport1_b[84] = rtb_NE_ah;
  TmpSignalConversionAtSFunctionInport1_b[85] = rtb_NE_ab;
  TmpSignalConversionAtSFunctionInport1_b[86] = rtb_NE_hj;
  TmpSignalConversionAtSFunctionInport1_b[87] = rtb_NE_fdw;
  TmpSignalConversionAtSFunctionInport1_b[88] = rtb_NE_of;
  TmpSignalConversionAtSFunctionInport1_b[89] = rtb_NE_gso;
  TmpSignalConversionAtSFunctionInport1_b[90] = rtb_NE_hc;
  TmpSignalConversionAtSFunctionInport1_b[91] = rtb_NE_h0;
  TmpSignalConversionAtSFunctionInport1_b[92] = rtb_NE_lo0;
  TmpSignalConversionAtSFunctionInport1_b[93] = rtb_NE_ht;
  TmpSignalConversionAtSFunctionInport1_b[94] = rtb_NE_cz;
  TmpSignalConversionAtSFunctionInport1_b[95] = rtb_NE_le;
  TmpSignalConversionAtSFunctionInport1_b[96] = rtb_NE_ptn;
  TmpSignalConversionAtSFunctionInport1_b[97] = rtb_NE_pp;
  TmpSignalConversionAtSFunctionInport1_b[98] = rtb_NE_eo;
  TmpSignalConversionAtSFunctionInport1_b[99] = rtb_NE_dq;
  TmpSignalConversionAtSFunctionInport1_b[100] = rtb_NE_ejz;
  TmpSignalConversionAtSFunctionInport1_b[101] = rtb_NE_pe;
  TmpSignalConversionAtSFunctionInport1_b[102] = rtb_NE_ba;
  TmpSignalConversionAtSFunctionInport1_b[103] = rtb_NE_ad;
  TmpSignalConversionAtSFunctionInport1_b[104] = rtb_NE_o3j;
  TmpSignalConversionAtSFunctionInport1_b[105] = rtb_NE_myi;
  TmpSignalConversionAtSFunctionInport1_b[106] = rtb_NE_pk;
  TmpSignalConversionAtSFunctionInport1_b[107] = rtb_NE_fdi;
  TmpSignalConversionAtSFunctionInport1_b[108] = rtb_NE_p0;
  TmpSignalConversionAtSFunctionInport1_b[109] = rtb_NE_kp;
  TmpSignalConversionAtSFunctionInport1_b[110] = rtb_NE_lg;
  TmpSignalConversionAtSFunctionInport1_b[111] = rtb_NE_f1;
  TmpSignalConversionAtSFunctionInport1_b[112] = rtb_NE_bbt;
  TmpSignalConversionAtSFunctionInport1_b[113] = rtb_NE_hg;
  TmpSignalConversionAtSFunctionInport1_b[114] = rtb_NE_aw;
  TmpSignalConversionAtSFunctionInport1_b[115] = rtb_NE_el;
  TmpSignalConversionAtSFunctionInport1_b[116] = rtb_NE_ka;
  TmpSignalConversionAtSFunctionInport1_b[117] = rtb_NE_g2;
  TmpSignalConversionAtSFunctionInport1_b[118] = rtb_NE_lp;
  TmpSignalConversionAtSFunctionInport1_b[119] = rtb_NE_cj2;
  TmpSignalConversionAtSFunctionInport1_b[120] = rtb_NE_fz;
  TmpSignalConversionAtSFunctionInport1_b[121] = rtb_NE_gx;
  TmpSignalConversionAtSFunctionInport1_b[122] = rtb_NE_eqb;
  TmpSignalConversionAtSFunctionInport1_b[123] = rtb_NE_dx1;
  TmpSignalConversionAtSFunctionInport1_b[124] = rtb_NE_e3;
  TmpSignalConversionAtSFunctionInport1_b[125] = rtb_NE_ol;
  TmpSignalConversionAtSFunctionInport1_b[126] = rtb_NE_o2f;
  TmpSignalConversionAtSFunctionInport1_b[127] = rtb_NE_ck;
  TmpSignalConversionAtSFunctionInport1_b[128] = rtb_NE_k4;
  TmpSignalConversionAtSFunctionInport1_b[129] = rtb_NE_lz;
  TmpSignalConversionAtSFunctionInport1_b[130] = rtb_NE_co;
  TmpSignalConversionAtSFunctionInport1_b[131] = rtb_NE_ib;
  TmpSignalConversionAtSFunctionInport1_b[132] = rtb_NE_on;
  TmpSignalConversionAtSFunctionInport1_b[133] = rtb_NE_nv;
  TmpSignalConversionAtSFunctionInport1_b[134] = rtb_NE_j4i;
  TmpSignalConversionAtSFunctionInport1_b[135] = rtb_NE_iy;
  TmpSignalConversionAtSFunctionInport1_b[136] = rtb_NE_kq;
  TmpSignalConversionAtSFunctionInport1_b[137] = rtb_NE_mn;
  TmpSignalConversionAtSFunctionInport1_b[138] = rtb_NE_kv;
  TmpSignalConversionAtSFunctionInport1_b[139] = rtb_NE_omc;

  /* Chart: '<S254>/ObsMCalFromPath' incorporates:
   *  Constant: '<S254>/Constant4'
   *  Constant: '<S254>/Constant5'
   *  Constant: '<S254>/Constant6'
   *  Constant: '<S254>/Constant7'
   */
  /* Gateway: Subsystem1/EyeQ_Sensor/ObsMCalFromPath */
  /* During: Subsystem1/EyeQ_Sensor/ObsMCalFromPath */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/ObsMCalFromPath */
  /* Transition: '<S259>:232' */
  i = 0.0;
  ObsCutInVelX_f = 0.0;
  ObsCutInPosX_d = 1000.0;
  ObsCutInAccelX_d = 0.0;
  ObsCutInStatus_a = 0.0;
  ObsCutInID_k = 0.0;
  ObsCutInCutIn_p = 0.0;
  ObsCutInPosY_m = 100.0;
  ObsCutInFlg_e = 0;
  ObsCutInLane_m = 2.0;
  ObsCutInAngle_k = 0.0;
  ObsCutInITTC = -100.0;
  ObsCutInWidth_d = 5.0;
  while ((i < EPM_Ln_ObjGenFcn_P.Constant4_Value) &&
         (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 5.0)] != 0.0)) {
    /* Transition: '<S259>:230' */
    /* //4->oncoming */
    if ((TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 2.0)] <= ObsCutInPosX_d) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 4.0)] != 4.0) &&
        (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
         (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 12.0)] != 3.0)) {
      /* Transition: '<S259>:231' */
      /* 3->pedestrian */
      if (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 5.0)] == UnitDelay1) {
        /* Transition: '<S259>:246' */
        /* Transition: '<S259>:228' */
        Flg = (EPM_Ln_ObjGenFcn_ObsMFlgCalFromPath
               (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 2.0)],
                TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 7.0)],
                TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 11.0)], NE_d, NE_n,
                NE_h, NE_o, NE_p, NE_m, NE_av, NE_na, NE, NE_j,
                EPM_Ln_ObjGenFcn_P.Constant7_Value, 60.0) != 0.0);
      } else {
        /* Transition: '<S259>:248' */
        Flg = (EPM_Ln_ObjGenFcn_ObsMFlgCalFromPath
               (TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 2.0)],
                TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 7.0)],
                TmpSignalConversionAtSFunctionInport1_b[(int32_T)
                (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 11.0)], NE_d, NE_n,
                NE_h, NE_o, NE_p, NE_m, NE_av, NE_na, NE, NE_j,
                EPM_Ln_ObjGenFcn_P.Constant6_Value, 50.0) != 0.0);

        /* Transition: '<S259>:249' */
      }

      if (Flg == 1) {
        /* Transition: '<S259>:227' */
        /* Transition: '<S259>:224' */
        ObsCutInVelX_f = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i)] * 3.6;
        ObsCutInPosX_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 2.0)];
        ObsCutInAccelX_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 3.0)];
        ObsCutInStatus_a = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 4.0)];
        ObsCutInID_k = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 5.0)];
        ObsCutInCutIn_p = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 6.0)];
        ObsCutInPosY_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 7.0)];
        ObsCutInFlg_e = 1;
        ObsCutInLane_m = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 9.0)];
        ObsCutInAngle_k = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 10.0)];
        ObsCutInITTC = -TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i)] /
          TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 2.0)];
        ObsCutInWidth_d = TmpSignalConversionAtSFunctionInport1_b[(int32_T)
          (EPM_Ln_ObjGenFcn_P.Constant5_Value * i + 11.0)];

        /* Transition: '<S259>:243' */
      } else {
        /* Transition: '<S259>:225' */
      }

      /* Transition: '<S259>:223' */
    } else {
      /* Transition: '<S259>:229' */
    }

    /* Transition: '<S259>:233' */
    i++;
  }

  /* Chart: '<S254>/ObsMCalMergeTLC' incorporates:
   *  Constant: '<S254>/KObsMTLC'
   *  SignalConversion: '<S261>/TmpSignal ConversionAt SFunction Inport1'
   *  SignalConversion: '<S261>/TmpSignal ConversionAt SFunction Inport2'
   */
  /* Transition: '<S259>:226' */
  /* Gateway: Subsystem1/EyeQ_Sensor/ObsMCalMergeTLC */
  /* During: Subsystem1/EyeQ_Sensor/ObsMCalMergeTLC */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/ObsMCalMergeTLC */
  /* Transition: '<S261>:20' */
  if ((NE <= 1.0) && (NE_j <= 1.0)) {
    /* Transition: '<S261>:4' */
    /* Transition: '<S261>:6' */
    ObsCutInVelX_f = ObsMVelX_g;
    ObsCutInPosX_d = ObsMPosX_j;
    ObsCutInAccelX_d = ObsMAccelX_c;
    ObsCutInStatus_a = ObsMStatus_l;
    ObsCutInID_k = ObsMID_c;
    ObsCutInCutIn_p = ObsMCutIn_n;
    ObsCutInPosY_m = ObsMPosY_k;
    ObsCutInFlg_e = ObsMFlg_d;
    ObsCutInLane_m = ObsMLane_g;
    ObsCutInAngle_k = ObsMAngle_m;
    ObsCutInITTC = ObsMITTC_a;
    ObsCutInWidth_d = ObsMWidth_m;

    /* Transition: '<S261>:35' */
    /* Transition: '<S261>:36' */
    /* Transition: '<S261>:39' */
  } else {
    /* Transition: '<S261>:8' */
    if ((ObsMID_c != ObsCutInID_k) && (((rtb_NE <=
           EPM_Ln_ObjGenFcn_P.KObsMTLC_Value) && (NE_n > 0.0)) || ((rtb_NE_df <=
           EPM_Ln_ObjGenFcn_P.KObsMTLC_Value) && (NE_m < 0.0)))) {
      /* Transition: '<S261>:10' */
      /* Transition: '<S261>:22' */
      /* Transition: '<S261>:32' */
      ObsCutInVelX_f = ObsMVelX_g;
      ObsCutInPosX_d = ObsMPosX_j;
      ObsCutInAccelX_d = ObsMAccelX_c;
      ObsCutInStatus_a = ObsMStatus_l;
      ObsCutInID_k = ObsMID_c;
      ObsCutInCutIn_p = ObsMCutIn_n;
      ObsCutInPosY_m = ObsMPosY_k;
      ObsCutInFlg_e = ObsMFlg_d;
      ObsCutInLane_m = ObsMLane_g;
      ObsCutInAngle_k = ObsMAngle_m;
      ObsCutInITTC = ObsMITTC_a;
      ObsCutInWidth_d = ObsMWidth_m;

      /* Transition: '<S261>:36' */
      /* Transition: '<S261>:39' */
    } else {
      /* Transition: '<S261>:38' */
      /* Transition: '<S261>:34' */
      /* Transition: '<S261>:39' */
    }
  }

  /* End of Chart: '<S254>/ObsMCalMergeTLC' */

  /* Saturate: '<S118>/Saturation' */
  /* Transition: '<S261>:41' */
  if (ObsCutInVelX_f > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_k3) {
    ObsCutInVelX_f = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_k3;
  } else {
    if (ObsCutInVelX_f < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ed) {
      ObsCutInVelX_f = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ed;
    }
  }

  /* DataTypeConversion: '<S118>/Data Type Conversion' incorporates:
   *  Gain: '<S118>/E->N'
   *  Saturate: '<S118>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_oy * ObsCutInVelX_f);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsMVelX((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
    (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S118>/Data Type Conversion' */

  /* Saturate: '<S115>/Saturation' */
  if (ObsCutInPosX_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_iw) {
    ObsCutInPosX_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_iw;
  } else {
    if (ObsCutInPosX_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_c4) {
      ObsCutInPosX_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_c4;
    }
  }

  /* DataTypeConversion: '<S115>/Data Type Conversion' incorporates:
   *  Gain: '<S115>/E->N'
   *  Saturate: '<S115>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ix * ObsCutInPosX_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsMPosX((uint16_T)(i < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-i :
                (int32_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S115>/Data Type Conversion' */

  /* Saturate: '<S108>/Saturation' */
  if (ObsCutInAccelX_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_a3) {
    ObsCutInAccelX_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_a3;
  } else {
    if (ObsCutInAccelX_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_p1) {
      ObsCutInAccelX_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_p1;
    }
  }

  /* DataTypeConversion: '<S108>/Data Type Conversion' incorporates:
   *  Gain: '<S108>/E->N'
   *  Saturate: '<S108>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_b * ObsCutInAccelX_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsMAccelX((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
                  (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S108>/Data Type Conversion' */

  /* Saturate: '<S117>/Saturation' */
  if (ObsCutInStatus_a > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_am) {
    ObsCutInStatus_a = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_am;
  } else {
    if (ObsCutInStatus_a < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_lk) {
      ObsCutInStatus_a = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_lk;
    }
  }

  /* DataTypeConversion: '<S117>/Data Type Conversion' incorporates:
   *  Gain: '<S117>/E->N'
   *  Saturate: '<S117>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_cv * ObsCutInStatus_a);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMStatus((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S117>/Data Type Conversion' */

  /* Saturate: '<S112>/Saturation' */
  if (ObsCutInID_k > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_at) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_at;
  } else if (ObsCutInID_k < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mz) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_mz;
  } else {
    i = ObsCutInID_k;
  }

  /* DataTypeConversion: '<S112>/Data Type Conversion' incorporates:
   *  Gain: '<S112>/E->N'
   *  Saturate: '<S112>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_oy0 * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMID((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                       (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S112>/Data Type Conversion' */

  /* Saturate: '<S110>/Saturation' */
  if (ObsCutInCutIn_p > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_m5) {
    ObsCutInCutIn_p = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_m5;
  } else {
    if (ObsCutInCutIn_p < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_he) {
      ObsCutInCutIn_p = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_he;
    }
  }

  /* DataTypeConversion: '<S110>/Data Type Conversion' incorporates:
   *  Gain: '<S110>/E->N'
   *  Saturate: '<S110>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ap * ObsCutInCutIn_p);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMCutIn((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S110>/Data Type Conversion' */

  /* Saturate: '<S116>/Saturation' */
  if (ObsCutInPosY_m > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ci) {
    ObsCutInPosY_m = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ci;
  } else {
    if (ObsCutInPosY_m < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ju) {
      ObsCutInPosY_m = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_ju;
    }
  }

  /* DataTypeConversion: '<S116>/Data Type Conversion' incorporates:
   *  Gain: '<S116>/E->N'
   *  Saturate: '<S116>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_j * ObsCutInPosY_m);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsMPosY((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
    (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S116>/Data Type Conversion' */

  /* Saturate: '<S111>/Saturation' */
  if (ObsCutInFlg_e > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_h1) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_h1;
  } else if (ObsCutInFlg_e < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_cj) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_cj;
  } else {
    i = ObsCutInFlg_e;
  }

  /* DataTypeConversion: '<S111>/Data Type Conversion' incorporates:
   *  Gain: '<S111>/E->N'
   *  Saturate: '<S111>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_il * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMFlg((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
                        (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S111>/Data Type Conversion' */

  /* Saturate: '<S114>/Saturation' */
  if (ObsCutInLane_m > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ko) {
    ObsCutInLane_m = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ko;
  } else {
    if (ObsCutInLane_m < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_hj) {
      ObsCutInLane_m = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_hj;
    }
  }

  /* DataTypeConversion: '<S114>/Data Type Conversion' incorporates:
   *  Gain: '<S114>/E->N'
   *  Saturate: '<S114>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_c0 * ObsCutInLane_m);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMLane((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S114>/Data Type Conversion' */

  /* Saturate: '<S109>/Saturation' */
  if (ObsCutInAngle_k > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ax) {
    ObsCutInAngle_k = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ax;
  } else {
    if (ObsCutInAngle_k < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jl) {
      ObsCutInAngle_k = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_jl;
    }
  }

  /* DataTypeConversion: '<S109>/Data Type Conversion' incorporates:
   *  Gain: '<S109>/E->N'
   *  Saturate: '<S109>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_f0 * ObsCutInAngle_k);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 65536.0);
  }

  Set_ObsMAngle((int16_T)(i < 0.0 ? (int32_T)(int16_T)-(int16_T)(uint16_T)-i :
    (int32_T)(int16_T)(uint16_T)i));

  /* End of DataTypeConversion: '<S109>/Data Type Conversion' */

  /* Saturate: '<S113>/Saturation' */
  if (ObsCutInITTC > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ct) {
    ObsCutInITTC = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_ct;
  } else {
    if (ObsCutInITTC < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_hu) {
      ObsCutInITTC = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_hu;
    }
  }

  /* DataTypeConversion: '<S113>/Data Type Conversion' incorporates:
   *  Gain: '<S113>/E->N'
   *  Saturate: '<S113>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_mj * ObsCutInITTC);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMITTC((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S113>/Data Type Conversion' */

  /* Saturate: '<S119>/Saturation' */
  if (ObsCutInWidth_d > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_j2) {
    ObsCutInWidth_d = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_j2;
  } else {
    if (ObsCutInWidth_d < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_dv) {
      ObsCutInWidth_d = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_dv;
    }
  }

  /* DataTypeConversion: '<S119>/Data Type Conversion' incorporates:
   *  Gain: '<S119>/E->N'
   *  Saturate: '<S119>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_ki * ObsCutInWidth_d);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_ObsMWidth((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-i :
    (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S119>/Data Type Conversion' */

  /* Gain: '<S181>/N->E' incorporates:
   *  DataTypeConversion: '<S181>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleStatusA_LeftCloseRangeCutIn'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_n4 * (real_T)
    Get_ObstacleStatusA_LeftCloseRangeCutIn();

  /* Saturate: '<S54>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fv) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_fv;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_bk) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_bk;
    }
  }

  /* DataTypeConversion: '<S54>/Data Type Conversion' incorporates:
   *  Gain: '<S54>/E->N'
   *  Saturate: '<S54>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_h * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_LeftCloseRangeCutIn((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S54>/Data Type Conversion' */

  /* Gain: '<S182>/N->E' incorporates:
   *  DataTypeConversion: '<S182>/Data Type Conversion'
   *  Inport: '<Root>/ObstacleStatusA_RightCloseRangeCutIn'
   */
  i = EPM_Ln_ObjGenFcn_P.NE_Gain_mlp * (real_T)
    Get_ObstacleStatusA_RightCloseRangeCutIn();

  /* Saturate: '<S229>/Saturation' */
  if (i > EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_by) {
    i = EPM_Ln_ObjGenFcn_P.Saturation_UpperSat_by;
  } else {
    if (i < EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_fa) {
      i = EPM_Ln_ObjGenFcn_P.Saturation_LowerSat_fa;
    }
  }

  /* DataTypeConversion: '<S229>/Data Type Conversion' incorporates:
   *  Gain: '<S229>/E->N'
   *  Saturate: '<S229>/Saturation'
   */
  i = floor(EPM_Ln_ObjGenFcn_P.EN_Gain_hp * i);
  if (rtIsNaN(i) || rtIsInf(i)) {
    i = 0.0;
  } else {
    i = fmod(i, 256.0);
  }

  Set_RightCloseRangeCutIn((uint8_T)(i < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-i : (int32_T)(uint8_T)i));

  /* End of DataTypeConversion: '<S229>/Data Type Conversion' */

  /* Update for UnitDelay: '<S254>/Unit Delay1' */
  /* Gateway: Subsystem1/EyeQ_Sensor/Chart */
  /* During: Subsystem1/EyeQ_Sensor/Chart */
  /* Entry Internal: Subsystem1/EyeQ_Sensor/Chart */
  /* Transition: '<S256>:2' */
  /* Transition: '<S256>:87' */
  /* Transition: '<S256>:20' */
  /* Transition: '<S256>:56' */
  /* Transition: '<S256>:73' */
  EPM_Ln_ObjGenFcn_DW.UnitDelay1_DSTATE = ObsCutInID_k;
}

/* Model initialize function */
void EPM_Ln_ObjGenFcn_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(EPM_Ln_ObjGenFcn_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &EPM_Ln_ObjGenFcn_B), 0,
                sizeof(B_EPM_Ln_ObjGenFcn_T));

  /* states (dwork) */
  (void) memset((void *)&EPM_Ln_ObjGenFcn_DW, 0,
                sizeof(DW_EPM_Ln_ObjGenFcn_T));

  /* external inputs */
  (void) memset((void *)&EPM_Ln_ObjGenFcn_U, 0,
                sizeof(ExtU_EPM_Ln_ObjGenFcn_T));

  /* InitializeConditions for Chart: '<S254>/ObsCutInCalFromTraj' */
  EPM_Ln_ObjGenFcn_B.ObsCutInCutInTime_m = 0.0;

  /* InitializeConditions for Chart: '<S254>/Chart4' */
  EPM_Ln_ObjGenFcn_DW.Cnt = 0.0;
  EPM_Ln_ObjGenFcn_DW.RxTimeLast = 0.0;
  EPM_Ln_ObjGenFcn_B.BusOff_d = 0.0;

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay1' */
  EPM_Ln_ObjGenFcn_DW.UnitDelay1_DSTATE =
    EPM_Ln_ObjGenFcn_P.UnitDelay1_InitialCondition;
}

/* Model terminate function */
void EPM_Ln_ObjGenFcn_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
