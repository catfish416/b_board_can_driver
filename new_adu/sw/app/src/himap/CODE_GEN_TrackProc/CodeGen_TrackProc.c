/*
 * File: CodeGen_TrackProc.c
 *
 * Code generated for Simulink model 'CodeGen_TrackProc'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Fri Oct 20 09:25:15 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_TrackProc.h"
#include "CodeGen_TrackProc_private.h"

/* Exported block signals */
int32_T PreviewDistance;               /* '<Root>/Data Type Conversion1' */
int32_T PreviewLateralDistance;        /* '<Root>/Data Type Conversion2' */
int32_T VehicleOffset_Now;             /* '<Root>/Data Type Conversion5' */
int16_T TrackerLateralError;           /* '<Root>/Data Type Conversion3' */
int8_T Final_a;                        /* '<Root>/Data Type Conversion' */
uint8_T End_Flag;                      /* '<Root>/Data Type Conversion4' */

/* Block signals (auto storage) */
B_CodeGen_TrackProc_T CodeGen_TrackProc_B;

/* Block states (auto storage) */
DW_CodeGen_TrackProc_T CodeGen_TrackProc_DW;

/* Real-time model */
RT_MODEL_CodeGen_TrackProc_T CodeGen_TrackProc_M_;
RT_MODEL_CodeGen_TrackProc_T *const CodeGen_TrackProc_M = &CodeGen_TrackProc_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/* Model step function */
void CodeGen_TrackProc_step(void)
{
  int32_T StartNum;
  real_T LateralError;
  real_T Station[20];
  real_T j;
  real_T Dis;
  int32_T b_i;
  boolean_T exitg1;
  int32_T i;
  real_T A_data[20];
  real_T C_data[19];
  real_T Curv_data[19];
  real_T V_limit_data[19];
  real_T a_data[19];
  real_T u1;
  real_T u2;

  /* Gain: '<Root>/Gain' */
  CodeGen_TrackProc_B.Gain = CodeGen_TrackProc_P.Gain_Gain * 0.0;

  /* Saturate: '<Root>/Saturation' */
  j = CodeGen_TrackProc_B.Gain;
  u1 = CodeGen_TrackProc_P.Saturation_LowerSat;
  u2 = CodeGen_TrackProc_P.Saturation_UpperSat;
  if (j > u2) {
    CodeGen_TrackProc_B.Saturation = u2;
  } else if (j < u1) {
    CodeGen_TrackProc_B.Saturation = u1;
  } else {
    CodeGen_TrackProc_B.Saturation = j;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* UnitDelay: '<Root>/Unit Delay3' */
  CodeGen_TrackProc_B.UnitDelay3 = CodeGen_TrackProc_DW.UnitDelay3_DSTATE;

  /* Abs: '<Root>/Abs' */
  CodeGen_TrackProc_B.Abs = fabs(CodeGen_TrackProc_B.UnitDelay3);

  /* Lookup_n-D: '<Root>/1-D Lookup Table' */
  CodeGen_TrackProc_B.DLookupTable = look1_binlxpw(CodeGen_TrackProc_B.Abs,
    CodeGen_TrackProc_P.DLookupTable_bp01Data,
    CodeGen_TrackProc_P.DLookupTable_tableData, 2U);

  /* Saturate: '<Root>/Saturation2' */
  j = CodeGen_TrackProc_B.DLookupTable;
  u1 = CodeGen_TrackProc_P.Saturation2_LowerSat;
  u2 = CodeGen_TrackProc_P.Saturation2_UpperSat;
  if (j > u2) {
    CodeGen_TrackProc_B.Saturation2 = u2;
  } else if (j < u1) {
    CodeGen_TrackProc_B.Saturation2 = u1;
  } else {
    CodeGen_TrackProc_B.Saturation2 = j;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* MinMax: '<Root>/MinMax' */
  j = CodeGen_TrackProc_B.Saturation;
  Dis = CodeGen_TrackProc_B.Saturation2;
  if ((j >= Dis) || rtIsNaN(Dis)) {
    Dis = j;
  }

  CodeGen_TrackProc_B.MinMax = Dis;

  /* End of MinMax: '<Root>/MinMax' */

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  CodeGen_TrackProc_B.Product = CodeGen_TrackProc_P.Constant_Value_b *
    CodeGen_TrackProc_P.TSample;

  /* UnitDelay: '<S1>/Unit Delay1' */
  CodeGen_TrackProc_B.UnitDelay1 = CodeGen_TrackProc_DW.UnitDelay1_DSTATE;

  /* Chart: '<S1>/Chart2' */
  /* Gateway: DataChangeSpeedLimit/Chart2 */
  /* During: DataChangeSpeedLimit/Chart2 */
  /* Entry Internal: DataChangeSpeedLimit/Chart2 */
  /* Transition: '<S7>:5' */
  if (fabs(CodeGen_TrackProc_B.MinMax - CodeGen_TrackProc_B.UnitDelay1) >
      CodeGen_TrackProc_B.Product) {
    /* Transition: '<S7>:7' */
    if (CodeGen_TrackProc_B.MinMax > CodeGen_TrackProc_B.UnitDelay1) {
      /* Transition: '<S7>:19' */
      /* Transition: '<S7>:16' */
      CodeGen_TrackProc_B.DataOutput = CodeGen_TrackProc_B.UnitDelay1 +
        CodeGen_TrackProc_B.Product;

      /* Transition: '<S7>:21' */
    } else {
      /* Transition: '<S7>:20' */
      CodeGen_TrackProc_B.DataOutput = CodeGen_TrackProc_B.UnitDelay1 -
        CodeGen_TrackProc_B.Product;
    }

    /* Transition: '<S7>:12' */
  } else {
    /* Transition: '<S7>:9' */
    CodeGen_TrackProc_B.DataOutput = CodeGen_TrackProc_B.MinMax;
  }

  /* End of Chart: '<S1>/Chart2' */

  /* MATLAB Function: '<Root>/Tracking2' incorporates:
   *  Constant: '<Root>/Ay_limit'
   *  Constant: '<Root>/P_SumDis'
   *  Constant: '<Root>/P_dis'
   *  Inport: '<Root>/EgoTrackPoint'
   *  Inport: '<Root>/End_Point'
   *  Inport: '<Root>/VehicleState'
   */
  /* Transition: '<S7>:14' */
  /* MATLAB Function 'Tracking2': '<S6>:1' */
  /* '<S6>:1:3' */
  CodeGen_TrackProc_B.R = 0.0;

  /* '<S6>:1:4' */
  CodeGen_TrackProc_B.CurrentAngle = 0.0;

  /* '<S6>:1:5' */
  CodeGen_TrackProc_B.DirectionAngle = 0.0;

  /* % 5m */
  /*  */
  /* '<S6>:1:9' */
  StartNum = -1;

  /*  */
  /* '<S6>:1:10' */
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i < 100)) {
    /* '<S6>:1:10' */
    if (getEgoTrackPoint( 100 ) > 0.0) {
      /* '<S6>:1:11' */
      /* '<S6>:1:12' */
      StartNum = 0;
      exitg1 = true;
    } else if (getEgoTrackPoint( 100 + b_i ) > 0.0) {
      /* '<S6>:1:14' */
      /* '<S6>:1:15' */
      StartNum = b_i;
      exitg1 = true;
    } else {
      /* '<S6>:1:10' */
      b_i++;
    }
  }

  /*  EndNum=0;% */
  /*  for i=StartNum:1:100 */
  /*      if Tracker(i,2)==0 */
  /*          EndNum=i-1; */
  /*      end */
  /*  end */
  /* '<S6>:1:27' */
  /* '<S6>:1:28' */
  /* '<S6>:1:29' */
  /*  */
  /* '<S6>:1:31' */
  memset(&CodeGen_TrackProc_B.S[0], 0, 100U * sizeof(real_T));

  /*  */
  /* '<S6>:1:32' */
  /* '<S6>:1:33' */
  /* '<S6>:1:35' */
  for (i = 0; i < 20; i++) {
    CodeGen_TrackProc_B.X[i] = 0.0;
    CodeGen_TrackProc_B.Y[i] = 0.0;
    Station[i] = 0.0;
  }

  /* '<S6>:1:38' */
  j = 0.0;

  /* '<S6>:1:39' */
  CodeGen_TrackProc_B.PreviewDistance_f = 25.0;

  /* '<S6>:1:40' */
  CodeGen_TrackProc_B.LateralDistance = 0.0;

  /* '<S6>:1:41' */
  LateralError = 0.0;

  /* '<S6>:1:42' */
  Dis = 0.0;
  if (StartNum + 1 >= 1) {
    /* '<S6>:1:44' */
    if (StartNum + 1 == 1) {
      /* '<S6>:1:45' */
      /* '<S6>:1:46' */
      LateralError = (getEgoTrackPoint( 101 ) * getEgoTrackPoint( 200 ) -
                      getEgoTrackPoint( 100 ) * getEgoTrackPoint( 201 )) /
        ((getEgoTrackPoint( 101 ) - getEgoTrackPoint( 100 )) + 1.0E-6);

      /* 计算当前位置横向偏差，StartNum为1表示所有的点都在车前方，当前横向偏差根据前面两个点计算 */
      /* '<S6>:1:47' */
      CodeGen_TrackProc_B.CurrentAngle = -atan((getEgoTrackPoint( 201 ) -
        getEgoTrackPoint( 200 )) / ((getEgoTrackPoint( 101 ) - getEgoTrackPoint(
        100 )) + 0.0001)) * 180.0 / 3.1415926535897931;
    } else {
      /* '<S6>:1:49' */
      LateralError = (getEgoTrackPoint( 100 + StartNum ) * getEgoTrackPoint
                      ( StartNum + 199 ) - getEgoTrackPoint( StartNum + 99 ) *
                      getEgoTrackPoint( 200 + StartNum )) / ((getEgoTrackPoint
        ( 100 + StartNum ) - getEgoTrackPoint( StartNum + 99 )) + 1.0E-6);

      /* 计算当前位置横向偏差，StartNum大于1表示有点在车后方，当前横向偏差根据前后两个点计算 */
      /* '<S6>:1:50' */
      CodeGen_TrackProc_B.CurrentAngle = -atan((getEgoTrackPoint( 200 + StartNum
        ) - getEgoTrackPoint( StartNum + 199 )) / ((getEgoTrackPoint( 100 +
        StartNum ) - getEgoTrackPoint( StartNum + 99 )) + 0.0001)) * 180.0 /
        3.1415926535897931;
    }

    /* %  */
    /* '<S6>:1:53' */
    for (b_i = 0; b_i <= 99 - StartNum; b_i++) {
      /* '<S6>:1:53' */
      i = StartNum + b_i;
      if ((getEgoTrackPoint( i ) != 0.0) || (getEgoTrackPoint( 100 + i ) != 0.0)
          || (getEgoTrackPoint( 200 + i ) != 0.0)) {
        /* '<S6>:1:54' */
        if (i + 1 == StartNum + 1) {
          /* '<S6>:1:55' */
          /* '<S6>:1:56' */
          u1 = getEgoTrackPoint( 100 + i );
          if (u1 < 0.0) {
            u1 = -1.0;
          } else if (u1 > 0.0) {
            u1 = 1.0;
          } else {
            if (u1 == 0.0) {
              u1 = 0.0;
            }
          }

          CodeGen_TrackProc_B.S[i] = sqrt(getEgoTrackPoint( 100 + i ) *
            getEgoTrackPoint( 100 + i ) + getEgoTrackPoint( 200 + i ) *
            getEgoTrackPoint( 200 + i )) * u1;
        } else {
          /* '<S6>:1:58' */
          u2 = getEgoTrackPoint( 100 + i ) - getEgoTrackPoint( i + 99 );
          u1 = getEgoTrackPoint( 200 + i ) - getEgoTrackPoint( i + 199 );
          CodeGen_TrackProc_B.S[i] = sqrt(u2 * u2 + u1 * u1) +
            CodeGen_TrackProc_B.S[i - 1];
        }
      }

      /* % 505 */
      if (((CodeGen_TrackProc_B.S[i] - Dis >= CodeGen_TrackProc_P.P_dis_Value) ||
           (i + 1 == 100)) && (CodeGen_TrackProc_B.S[i] <
           CodeGen_TrackProc_P.P_SumDis_Value)) {
        /* '<S6>:1:62' */
        /* '<S6>:1:63' */
        j++;

        /* '<S6>:1:64' */
        CodeGen_TrackProc_B.X[(int32_T)j - 1] = getEgoTrackPoint( 100 + i );

        /* '<S6>:1:65' */
        CodeGen_TrackProc_B.Y[(int32_T)j - 1] = getEgoTrackPoint( 200 + i );

        /* '<S6>:1:66' */
        Station[(int32_T)j - 1] = CodeGen_TrackProc_B.S[i];

        /* '<S6>:1:67' */
        Dis = CodeGen_TrackProc_B.S[i];
      }

      /* '<S6>:1:53' */
    }

    /* % 计算预瞄距离 */
    /* '<S6>:1:73' */
    for (b_i = 0; b_i < 99; b_i++) {
      /* '<S6>:1:73' */
      if (CodeGen_TrackProc_B.S[0] > CodeGen_TrackProc_B.DataOutput) {
        /* '<S6>:1:74' */
        /* '<S6>:1:75' */
        CodeGen_TrackProc_B.PreviewDistance_f = getEgoTrackPoint( 100 ) *
          CodeGen_TrackProc_B.DataOutput / (CodeGen_TrackProc_B.S[0] + 0.0001);

        /* '<S6>:1:76' */
        CodeGen_TrackProc_B.LateralDistance = getEgoTrackPoint( 200 ) *
          CodeGen_TrackProc_B.DataOutput / (CodeGen_TrackProc_B.S[0] + 0.0001);

        /* '<S6>:1:77' */
        CodeGen_TrackProc_B.DirectionAngle = -atan(getEgoTrackPoint( 200 ) /
          (getEgoTrackPoint( 100 ) + 0.001)) * 180.0 / 3.1415926535897931;
      } else {
        if ((CodeGen_TrackProc_B.S[b_i] <= CodeGen_TrackProc_B.DataOutput) &&
            (CodeGen_TrackProc_B.S[1 + b_i] >= CodeGen_TrackProc_B.DataOutput))
        {
          /* '<S6>:1:78' */
          if (getEgoTrackPoint( 100 + b_i ) < 0.0) {
            /* '<S6>:1:79' */
            /* '<S6>:1:80' */
            CodeGen_TrackProc_B.PreviewDistance_f = getEgoTrackPoint( b_i + 101 )
              * CodeGen_TrackProc_B.DataOutput / (CodeGen_TrackProc_B.S[1 + b_i]
              + 0.0001);

            /* '<S6>:1:81' */
            CodeGen_TrackProc_B.LateralDistance = getEgoTrackPoint( b_i + 201 ) *
              CodeGen_TrackProc_B.DataOutput / (CodeGen_TrackProc_B.S[1 + b_i] +
              0.0001);

            /* '<S6>:1:82' */
            CodeGen_TrackProc_B.DirectionAngle = -atan((getEgoTrackPoint( b_i +
              201 ) - getEgoTrackPoint( 200 + b_i )) / ((getEgoTrackPoint( b_i +
              101 ) - getEgoTrackPoint( 100 + b_i )) + 0.001)) * 180.0 /
              3.1415926535897931;
          } else {
            /* '<S6>:1:84' */
            CodeGen_TrackProc_B.PreviewDistance_f = (getEgoTrackPoint( b_i + 101
              ) - getEgoTrackPoint( 100 + b_i )) *
              (CodeGen_TrackProc_B.DataOutput - CodeGen_TrackProc_B.S[b_i]) /
              ((CodeGen_TrackProc_B.S[1 + b_i] - CodeGen_TrackProc_B.S[b_i]) +
               0.0001) + getEgoTrackPoint( 100 + b_i );

            /* '<S6>:1:85' */
            CodeGen_TrackProc_B.LateralDistance = (getEgoTrackPoint( b_i + 201 )
              - getEgoTrackPoint( 200 + b_i )) * (CodeGen_TrackProc_B.DataOutput
              - CodeGen_TrackProc_B.S[b_i]) / ((CodeGen_TrackProc_B.S[1 + b_i] -
              CodeGen_TrackProc_B.S[b_i]) + 0.0001) + getEgoTrackPoint( 200 +
              b_i );

            /* '<S6>:1:86' */
            CodeGen_TrackProc_B.DirectionAngle = -atan((getEgoTrackPoint( b_i +
              201 ) - getEgoTrackPoint( 200 + b_i )) / ((getEgoTrackPoint( b_i +
              101 ) - getEgoTrackPoint( 100 + b_i )) + 0.001)) * 180.0 /
              3.1415926535897931;
          }
        }
      }

      /* '<S6>:1:73' */
    }
  }

  /* % , */
  /* '<S6>:1:93' */
  u1 = 2.0;

  /* '<S6>:1:93' */
  CodeGen_TrackProc_B.CurvFlag = 0.0;

  /* '<S6>:1:93' */
  CodeGen_TrackProc_B.V_max = 30.0;

  /* '<S6>:1:94' */
  CodeGen_TrackProc_B.Xpoint = 0.0;

  /* '<S6>:1:94' */
  CodeGen_TrackProc_B.Ypoint = 0.0;

  /*  PointSize=size(Ax); */
  /*  PointNum=PointSize(2); */
  /* '<S6>:1:97' */
  CodeGen_TrackProc_B.PointNum = j;
  if (j >= 2.0) {
    /* '<S6>:1:99' */
    /* '<S6>:1:101' */
    b_i = (int32_T)j;
    for (i = 0; i < b_i; i++) {
      A_data[i] = 0.0;
    }

    /* '<S6>:1:102' */
    b_i = (int32_T)(j - 1.0);
    for (i = 0; i < b_i; i++) {
      C_data[i] = 0.0;
    }

    /* '<S6>:1:103' */
    b_i = (int32_T)(j - 1.0);
    for (i = 0; i < b_i; i++) {
      Curv_data[i] = 0.0;
    }

    /* '<S6>:1:104' */
    b_i = (int32_T)(j - 1.0);
    for (i = 0; i < b_i; i++) {
      V_limit_data[i] = 0.0;
    }

    /* '<S6>:1:105' */
    b_i = (int32_T)(j - 1.0);
    for (i = 0; i < b_i; i++) {
      a_data[i] = 0.0;
    }

    /* '<S6>:1:106' */
    for (b_i = 0; b_i < (int32_T)j; b_i++) {
      /* '<S6>:1:106' */
      if (CodeGen_TrackProc_B.X[b_i] != 0.0) {
        /* '<S6>:1:107' */
        if (1.0 + (real_T)b_i == 1.0) {
          /* '<S6>:1:108' */
          /* '<S6>:1:109' */
          Dis = CodeGen_TrackProc_B.Y[0] - LateralError;
          A_data[0] = sqrt(CodeGen_TrackProc_B.X[0] * CodeGen_TrackProc_B.X[0] +
                           Dis * Dis);
        } else {
          /* '<S6>:1:111' */
          Dis = CodeGen_TrackProc_B.X[b_i] - CodeGen_TrackProc_B.X[(int32_T)
            ((1.0 + (real_T)b_i) - 1.0) - 1];
          u2 = CodeGen_TrackProc_B.Y[b_i] - CodeGen_TrackProc_B.Y[(int32_T)((1.0
            + (real_T)b_i) - 1.0) - 1];
          A_data[b_i] = sqrt(Dis * Dis + u2 * u2);
        }
      }

      /* '<S6>:1:106' */
    }

    /* '<S6>:1:116' */
    for (b_i = 0; b_i < (int32_T)(j - 1.0); b_i++) {
      /* '<S6>:1:116' */
      if (1.0 + (real_T)b_i == 1.0) {
        /* '<S6>:1:117' */
        /* '<S6>:1:118' */
        Dis = CodeGen_TrackProc_B.Y[1] - LateralError;
        C_data[0] = sqrt(CodeGen_TrackProc_B.X[1] * CodeGen_TrackProc_B.X[1] +
                         Dis * Dis);
      } else {
        /* '<S6>:1:120' */
        Dis = CodeGen_TrackProc_B.X[(int32_T)((1.0 + (real_T)b_i) + 1.0) - 1] -
          CodeGen_TrackProc_B.X[(int32_T)((1.0 + (real_T)b_i) - 1.0) - 1];
        u2 = CodeGen_TrackProc_B.Y[(int32_T)((1.0 + (real_T)b_i) + 1.0) - 1] -
          CodeGen_TrackProc_B.Y[(int32_T)((1.0 + (real_T)b_i) - 1.0) - 1];
        C_data[b_i] = sqrt(Dis * Dis + u2 * u2);
      }

      if ((C_data[b_i] > 0.0) && (A_data[(int32_T)((1.0 + (real_T)b_i) + 1.0) -
           1] > 0.0)) {
        /* '<S6>:1:122' */
        /* '<S6>:1:123' */
        Dis = ((A_data[(int32_T)((1.0 + (real_T)b_i) + 1.0) - 1] * A_data
                [(int32_T)((1.0 + (real_T)b_i) + 1.0) - 1] + A_data[b_i] *
                A_data[b_i]) - C_data[b_i] * C_data[b_i]) / (A_data[(int32_T)
          ((1.0 + (real_T)b_i) + 1.0) - 1] * (2.0 * A_data[b_i]) + 0.001);
        Curv_data[b_i] = sqrt(fabs(1.0 - Dis * Dis)) * 2.0 / (C_data[b_i] +
          0.001);
      }

      if (Curv_data[b_i] < 0.001) {
        /* '<S6>:1:125' */
        /* '<S6>:1:126' */
        Curv_data[b_i] = 0.001;
      }

      /* '<S6>:1:129' */
      V_limit_data[b_i] = sqrt(CodeGen_TrackProc_P.Ay_limit_Value /
        Curv_data[b_i]) * 3.6;
      if (V_limit_data[b_i] > 30.0) {
        /* '<S6>:1:131' */
        /* '<S6>:1:132' */
        V_limit_data[b_i] = 30.0;
      }

      /* '<S6>:1:134' */
      a_data[b_i] = (V_limit_data[b_i] * V_limit_data[b_i] - 0.0 * 0.0) /
        Station[b_i] / 12.96;

      /* '<S6>:1:116' */
    }

    /* % */
    /*  */
    /* '<S6>:1:143' */
    for (b_i = 0; b_i < (int32_T)(j - 1.0); b_i++) {
      /* '<S6>:1:143' */
      if ((u1 > a_data[b_i]) && (Station[b_i] < 50.0)) {
        /* '<S6>:1:144' */
        /* '<S6>:1:145' */
        u1 = a_data[b_i];

        /* '<S6>:1:146' */
        CodeGen_TrackProc_B.V_max = V_limit_data[b_i];

        /* '<S6>:1:147' */
        CodeGen_TrackProc_B.Xpoint = CodeGen_TrackProc_B.X[b_i];

        /* '<S6>:1:148' */
        CodeGen_TrackProc_B.Ypoint = CodeGen_TrackProc_B.Y[b_i];

        /* '<S6>:1:149' */
        CodeGen_TrackProc_B.R = Curv_data[b_i];

        /* '<S6>:1:150' */
        CodeGen_TrackProc_B.CurvFlag = 1.0;
      }

      /* '<S6>:1:143' */
    }
  }

  /* %  */
  /* End_Flag,End_OffSet,End_x,End_y */
  /* '<S6>:1:158' */
  Dis = 2.0;
  if ((getEnd_Point( 3 ) == 1.0) && (getEnd_Point( 0 ) - getVehicleState( 3 ) <
       30.0)) {
    /* '<S6>:1:159' */
    /* '<S6>:1:160' */
    /* '<S6>:1:161' */
    Dis = (0.0 - 0.0 * 0.0) / (getEnd_Point( 0 ) - getVehicleState( 3 )) / 12.96;
  }

  /* '<S6>:1:164' */
  /* '<S6>:1:165' */
  CodeGen_TrackProc_B.StartNum = (real_T)StartNum + 1.0;
  CodeGen_TrackProc_B.LateralError = LateralError;
  for (i = 0; i < 100; i++) {
    CodeGen_TrackProc_B.Ypos[i] = getEgoTrackPoint( 200 + i );
    CodeGen_TrackProc_B.Xpos[i] = getEgoTrackPoint( 100 + i );
    CodeGen_TrackProc_B.Offset[i] = getEgoTrackPoint( i );
  }

  CodeGen_TrackProc_B.Curv_a = u1;
  CodeGen_TrackProc_B.End_a = Dis;
  if ((u1 <= Dis) || rtIsNaN(Dis)) {
    Dis = u1;
  }

  if (Dis >= -3.0) {
    CodeGen_TrackProc_B.Final_a_d = Dis;
  } else {
    CodeGen_TrackProc_B.Final_a_d = -3.0;
  }

  /* End of MATLAB Function: '<Root>/Tracking2' */

  /* Product: '<S4>/Divide' incorporates:
   *  Constant: '<S4>/FIilter'
   */
  CodeGen_TrackProc_B.Divide = CodeGen_TrackProc_B.Final_a_d *
    CodeGen_TrackProc_P.FIilter_Value;

  /* Sum: '<S4>/Add1' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/FIilter'
   */
  CodeGen_TrackProc_B.Add1 = CodeGen_TrackProc_P.Constant_Value_b3 -
    CodeGen_TrackProc_P.FIilter_Value;

  /* UnitDelay: '<S4>/Unit Delay' */
  CodeGen_TrackProc_B.UnitDelay = CodeGen_TrackProc_DW.UnitDelay_DSTATE;

  /* Product: '<S4>/Divide4' */
  CodeGen_TrackProc_B.Divide4 = CodeGen_TrackProc_B.Add1 *
    CodeGen_TrackProc_B.UnitDelay;

  /* Sum: '<S4>/Add2' */
  CodeGen_TrackProc_B.Add2 = CodeGen_TrackProc_B.Divide +
    CodeGen_TrackProc_B.Divide4;

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant'
   */
  CodeGen_TrackProc_B.Product_c = CodeGen_TrackProc_P.Constant_Value *
    CodeGen_TrackProc_B.Add2;

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  u1 = floor(CodeGen_TrackProc_B.Product_c);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 256.0);
  }

  Final_a = (int8_T)(u1 < 0.0 ? (int32_T)(int8_T)-(int8_T)(uint8_T)-u1 :
                     (int32_T)(int8_T)(uint8_T)u1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* Product: '<S3>/Divide' incorporates:
   *  Constant: '<S3>/FIilter'
   */
  CodeGen_TrackProc_B.Divide_a = CodeGen_TrackProc_B.PreviewDistance_f *
    CodeGen_TrackProc_P.FIilter_Value_b;

  /* Sum: '<S3>/Add1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/FIilter'
   */
  CodeGen_TrackProc_B.Add1_o = CodeGen_TrackProc_P.Constant_Value_p -
    CodeGen_TrackProc_P.FIilter_Value_b;

  /* UnitDelay: '<S3>/Unit Delay' */
  CodeGen_TrackProc_B.UnitDelay_e = CodeGen_TrackProc_DW.UnitDelay_DSTATE_o;

  /* Product: '<S3>/Divide4' */
  CodeGen_TrackProc_B.Divide4_n = CodeGen_TrackProc_B.Add1_o *
    CodeGen_TrackProc_B.UnitDelay_e;

  /* Sum: '<S3>/Add2' */
  CodeGen_TrackProc_B.Add2_e = CodeGen_TrackProc_B.Divide_a +
    CodeGen_TrackProc_B.Divide4_n;

  /* Product: '<Root>/Product1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  CodeGen_TrackProc_B.Product1 = CodeGen_TrackProc_P.Constant_Value *
    CodeGen_TrackProc_B.Add2_e;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  u1 = floor(CodeGen_TrackProc_B.Product1);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 4.294967296E+9);
  }

  PreviewDistance = u1 < 0.0 ? -(int32_T)(uint32_T)-u1 : (int32_T)(uint32_T)u1;

  /* End of DataTypeConversion: '<Root>/Data Type Conversion1' */

  /* Product: '<S5>/Divide' incorporates:
   *  Constant: '<S5>/FIilter'
   */
  CodeGen_TrackProc_B.Divide_i = CodeGen_TrackProc_B.LateralDistance *
    CodeGen_TrackProc_P.FIilter_Value_k;

  /* Sum: '<S5>/Add1' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/FIilter'
   */
  CodeGen_TrackProc_B.Add1_i = CodeGen_TrackProc_P.Constant_Value_d -
    CodeGen_TrackProc_P.FIilter_Value_k;

  /* UnitDelay: '<S5>/Unit Delay' */
  CodeGen_TrackProc_B.UnitDelay_k = CodeGen_TrackProc_DW.UnitDelay_DSTATE_a;

  /* Product: '<S5>/Divide4' */
  CodeGen_TrackProc_B.Divide4_l = CodeGen_TrackProc_B.Add1_i *
    CodeGen_TrackProc_B.UnitDelay_k;

  /* Sum: '<S5>/Add2' */
  CodeGen_TrackProc_B.Add2_g = CodeGen_TrackProc_B.Divide_i +
    CodeGen_TrackProc_B.Divide4_l;

  /* Product: '<Root>/Product2' incorporates:
   *  Constant: '<Root>/Constant'
   */
  CodeGen_TrackProc_B.Product2 = CodeGen_TrackProc_P.Constant_Value *
    CodeGen_TrackProc_B.Add2_g;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  u1 = floor(CodeGen_TrackProc_B.Product2);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 4.294967296E+9);
  }

  PreviewLateralDistance = u1 < 0.0 ? -(int32_T)(uint32_T)-u1 : (int32_T)
    (uint32_T)u1;

  /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

  /* Product: '<S2>/Divide' incorporates:
   *  Constant: '<S2>/FIilter'
   */
  CodeGen_TrackProc_B.Divide_e = CodeGen_TrackProc_B.LateralError *
    CodeGen_TrackProc_P.FIilter_Value_o;

  /* Sum: '<S2>/Add1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/FIilter'
   */
  CodeGen_TrackProc_B.Add1_m = CodeGen_TrackProc_P.Constant_Value_m -
    CodeGen_TrackProc_P.FIilter_Value_o;

  /* UnitDelay: '<S2>/Unit Delay' */
  CodeGen_TrackProc_B.UnitDelay_ea = CodeGen_TrackProc_DW.UnitDelay_DSTATE_h;

  /* Product: '<S2>/Divide4' */
  CodeGen_TrackProc_B.Divide4_e = CodeGen_TrackProc_B.Add1_m *
    CodeGen_TrackProc_B.UnitDelay_ea;

  /* Sum: '<S2>/Add2' */
  CodeGen_TrackProc_B.Add2_b = CodeGen_TrackProc_B.Divide_e +
    CodeGen_TrackProc_B.Divide4_e;

  /* Sum: '<Root>/Add' incorporates:
   *  Constant: '<Root>/error'
   */
  CodeGen_TrackProc_B.Add = CodeGen_TrackProc_B.Add2_b -
    CodeGen_TrackProc_P.error_Value;

  /* Product: '<Root>/Divide1' incorporates:
   *  Constant: '<Root>/error1'
   */
  CodeGen_TrackProc_B.Divide1 = CodeGen_TrackProc_B.Add *
    CodeGen_TrackProc_P.error1_Value;

  /* Product: '<Root>/Product3' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  CodeGen_TrackProc_B.Product3 = CodeGen_TrackProc_B.Divide1 *
    CodeGen_TrackProc_P.Constant1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  u1 = floor(CodeGen_TrackProc_B.Product3);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 65536.0);
  }

  TrackerLateralError = (int16_T)(u1 < 0.0 ? (int32_T)(int16_T)-(int16_T)
    (uint16_T)-u1 : (int32_T)(int16_T)(uint16_T)u1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion3' */

  /* Product: '<Root>/Product4' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Inport: '<Root>/End_Point'
   */
  CodeGen_TrackProc_B.Product4 = getEnd_Point( 3 ) *
    CodeGen_TrackProc_P.Constant2_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  u1 = floor(CodeGen_TrackProc_B.Product4);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 256.0);
  }

  End_Flag = (uint8_T)(u1 < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-u1 :
                       (int32_T)(uint8_T)u1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion4' */

  /* Product: '<Root>/Product5' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/VehicleState'
   */
  CodeGen_TrackProc_B.Product5 = getVehicleState( 3 ) *
    CodeGen_TrackProc_P.Constant3_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  u1 = floor(CodeGen_TrackProc_B.Product5);
  if (rtIsNaN(u1) || rtIsInf(u1)) {
    u1 = 0.0;
  } else {
    u1 = fmod(u1, 4.294967296E+9);
  }

  VehicleOffset_Now = u1 < 0.0 ? -(int32_T)(uint32_T)-u1 : (int32_T)(uint32_T)u1;

  /* End of DataTypeConversion: '<Root>/Data Type Conversion5' */

  /* Update for UnitDelay: '<Root>/Unit Delay3' */
  CodeGen_TrackProc_DW.UnitDelay3_DSTATE = CodeGen_TrackProc_B.Divide1;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  CodeGen_TrackProc_DW.UnitDelay1_DSTATE = CodeGen_TrackProc_B.DataOutput;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE = CodeGen_TrackProc_B.Add2;

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_o = CodeGen_TrackProc_B.Add2_e;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_a = CodeGen_TrackProc_B.Add2_g;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_h = CodeGen_TrackProc_B.Add2_b;
}

/* Model initialize function */
void CodeGen_TrackProc_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_TrackProc_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &CodeGen_TrackProc_B), 0,
                sizeof(B_CodeGen_TrackProc_T));

  /* exported global signals */
  PreviewDistance = 0;
  PreviewLateralDistance = 0;
  VehicleOffset_Now = 0;
  TrackerLateralError = 0;
  Final_a = 0;
  End_Flag = 0U;

  /* states (dwork) */
  (void) memset((void *)&CodeGen_TrackProc_DW, 0,
                sizeof(DW_CodeGen_TrackProc_T));

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
  CodeGen_TrackProc_DW.UnitDelay3_DSTATE =
    CodeGen_TrackProc_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  CodeGen_TrackProc_DW.UnitDelay1_DSTATE =
    CodeGen_TrackProc_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE =
    CodeGen_TrackProc_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_o =
    CodeGen_TrackProc_P.UnitDelay_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_a =
    CodeGen_TrackProc_P.UnitDelay_InitialCondition_h;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  CodeGen_TrackProc_DW.UnitDelay_DSTATE_h =
    CodeGen_TrackProc_P.UnitDelay_InitialCondition_g;
}

/* Model terminate function */
void CodeGen_TrackProc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
