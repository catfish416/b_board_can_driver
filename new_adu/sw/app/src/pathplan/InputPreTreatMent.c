/*
 * File: InputPreTreatMent.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "InputPreTreatMent.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double TargetLaneNum;
static double LeftTurnRisEdg;
static double RightTurnRisEdg;

/* Function Definitions */

/*
 * Arguments    : const double End[4]
 *                const double Veh_State[8]
 *                double EPS_Status
 *                double ResSwAct
 *                double DrvBrkEng
 *                double FusObjPre[3302]
 *                double Lane_NumInfoPre[3]
 *                double kur
 *                double TurnLight
 *                const double Navi_Info[28]
 * Return Type  : double
 */
double InputPreTreatMent(const double End[4], const double Veh_State[8], double
  EPS_Status, double ResSwAct, double DrvBrkEng, double FusObjPre[3302], double
  Lane_NumInfoPre[3], double kur, double TurnLight, const double Navi_Info[28])
{
  double DisEnFlg;
  int End_Status;
  double TunOffset;
  int InTurnFlg;

  /* TurnLight Left 1 Right 2 */
  End_Status = 0;
  if ((End[3] > 0.5) && (End[0] - Veh_State[3] < 10.0)) {
    End_Status = 1;
  }

  if ((fabs(EPS_Status - 5.0) < 0.5) || (fabs(EPS_Status - 4.0) < 0.5) || (fabs
       (DrvBrkEng) > 0.5) || (End_Status > 0.5)) {
    CurDisEnFlg = 1.0;
  } else {
    if (ResSwAct > 0.5) {
      CurDisEnFlg = 0.0;
    }
  }

  DisEnFlg = CurDisEnFlg;

  /* TurnLight Left 1 Right 2 */
  if ((!TargetLaneNum_not_empty) || (Lane_NumInfoPre[0] < 0.5) ||
      (Lane_NumInfoPre[2] < 0.5)) {
    TargetLaneNum = 2.0;
    TargetLaneNum_not_empty = true;
    LeftTurnRisEdg = 0.0;
    RightTurnRisEdg = 0.0;
  }

  if ((Lane_NumInfoPre[0] > 0.5) && (Lane_NumInfoPre[2] > 0.5)) {
    End_Status = 1;
    if ((Navi_Info[4] < 0.5) || (Navi_Info[5] < 0.5)) {
      /*  TunTrig will be forbidden */
      End_Status = 0;
    } else {
      TunOffset = Navi_Info[1] - Navi_Info[0];
      if ((TunOffset <= 0.0) || (TunOffset > 100.0)) {
        End_Status = 0;
      }
    }

    InTurnFlg = 0;
    if ((End_Status > 0.5) && ((Veh_State[3] - Navi_Info[0]) + 5.0 > 0.0) &&
        (Veh_State[3] - Navi_Info[1] < 0.0)) {
      InTurnFlg = 1;
    }

    if ((InTurnFlg < 0.5) && (CurDisEnFlg < 0.5)) {
      if (fabs(TurnLight - 1.0) < 0.1) {
        if (LeftTurnRisEdg < 0.5) {
          TargetLaneNum = Lane_NumInfoPre[1] - 1.0;
          LeftTurnRisEdg = 1.0;
          if (TargetLaneNum < 1.0) {
            TargetLaneNum = 1.0;
          }
        }
      } else if (fabs(TurnLight - 2.0) < 0.1) {
        if (RightTurnRisEdg < 0.5) {
          TargetLaneNum = Lane_NumInfoPre[1] + 1.0;
          RightTurnRisEdg = 1.0;
          if (TargetLaneNum > Lane_NumInfoPre[0]) {
            TargetLaneNum = Lane_NumInfoPre[0];
          }
        }
      } else {
        LeftTurnRisEdg = 0.0;
        RightTurnRisEdg = 0.0;
      }

      Lane_NumInfoPre[2] = TargetLaneNum;
    } else {
      TargetLaneNum = Lane_NumInfoPre[2];
      Lane_NumInfoPre[2] = TargetLaneNum;
    }
  }

  /* TurnLight Left 1 Right 2 */
  TunOffset = Veh_State[7];
  End_Status = 0;
  while ((End_Status < 127) && (!(FusObjPre[End_Status] < 0.5))) {
    FusObjPre[127 + End_Status] += 4.0;
    FusObjPre[254 + End_Status] = ((FusObjPre[254 + End_Status] + TunOffset) -
      TunOffset * kur * FusObjPre[381 + End_Status]) - TunOffset;
    FusObjPre[508 + End_Status] += TunOffset * kur * FusObjPre[127 + End_Status];
    End_Status++;
  }

  return DisEnFlg;
}

/*
 * File trailer for InputPreTreatMent.c
 *
 * [EOF]
 */
