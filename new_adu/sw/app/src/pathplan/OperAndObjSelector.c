/*
 * File: OperAndObjSelector.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "OperAndObjSelector.h"
#include "UpdateSideObjRes.h"
#include "OpSchedule.h"
#include "ObjSelectDebugVersion.h"
#include "InPutMonitorAndFuncEnb.h"

/* Variable Definitions */
static double PCurOp;
static double PPCurOp;
static double PLCForceShutDwn;
static double PTunForceShutDwn;

/* Function Definitions */

/*
 * Arguments    : double PPEn
 *                double OperationFinishFlg
 *                const double Veh_State[8]
 *                const double FusData[3302]
 *                const double Lane_NumInfo[3]
 *                const double Line_ShapeInfo[100]
 *                const double Navi_InfoTurn[28]
 *                const double End[4]
 *                double DisEngFlg
 *                double LCStartFlg
 *                double TrigStart
 *                double TrnShutDwn
 *                double LCShutDwn
 *                double UseFakeCIPVEn
 *                double *TimeLimit
 *                double *EnterZoneEnFlg
 *                double Info_Me[6]
 *                double Info_Fd[6]
 *                double Info_Fo[6]
 *                double Info_Ld[6]
 *                double Info_Lo[6]
 *                double *OperationLongDislimit
 *                double RoadInfo[8]
 *                double *Curoperation
 *                double *InLaneLCFlg
 *                double *SpeedLimit
 *                double PreInfo_Me[6]
 *                double *LCEnbSts
 *                double *MonitorSts
 *                double CurRoadInfo[8]
 * Return Type  : void
 */
void OperAndObjSelector(double PPEn, double OperationFinishFlg, const double
  Veh_State[8], const double FusData[3302], const double Lane_NumInfo[3], const
  double Line_ShapeInfo[100], const double Navi_InfoTurn[28], const double End[4],
  double DisEngFlg, double LCStartFlg, double TrigStart, double TrnShutDwn,
  double LCShutDwn, double UseFakeCIPVEn, double *TimeLimit, double
  *EnterZoneEnFlg, double Info_Me[6], double Info_Fd[6], double Info_Fo[6],
  double Info_Ld[6], double Info_Lo[6], double *OperationLongDislimit, double
  RoadInfo[8], double *Curoperation, double *InLaneLCFlg, double *SpeedLimit,
  double PreInfo_Me[6], double *LCEnbSts, double *MonitorSts, double
  CurRoadInfo[8])
{
  double LCEnbRes;
  double TunEnbRes;
  double InputStatusFailCnt[3];
  double b_Veh_State[8];
  double b_Info_Me[7];
  double TargetPosition;
  double b_InLaneLCFlg;
  double ObjTrigOut;
  double LCTrigSuccessOut;
  double unusedU0;
  double unusedU3[10];
  int LCForceShutDwnFlg;
  int TunForceShutDwnFlg;
  int u;

  /*      UseFakeCIPVEn = 0; */
  /* InputMonitor Start */
  InPutMonitorAndFuncEnb(TrigStart, Navi_InfoTurn, Line_ShapeInfo, Lane_NumInfo,
    Veh_State, DisEngFlg, MonitorSts, &LCEnbRes, &TunEnbRes, InputStatusFailCnt);

  /* InputMonitor End */
  /*  OperAndObjSelectorStart     */
  if (PCurOp - PPCurOp > 0.5) {
    PPCurOp = PCurOp;
  } else {
    if (PCurOp - PPCurOp < -0.5) {
      PPCurOp = PCurOp;
    }
  }

  memcpy(&b_Veh_State[0], &Veh_State[0], sizeof(double) << 3);
  ObjSelectDebugVersion(Line_ShapeInfo, Lane_NumInfo, b_Veh_State, FusData,
                        UseFakeCIPVEn, TrigStart, LCEnbRes, PPEn, PCurOp,
                        InputStatusFailCnt, b_Info_Me, &TargetPosition,
                        &b_InLaneLCFlg, &ObjTrigOut, &LCTrigSuccessOut, Info_Lo,
                        Info_Fd, Info_Fo, Info_Ld, &unusedU0, unusedU3);

  /*  OperAndObjSelectorEnd */
  /*  OpSchedule Start */
  LCForceShutDwnFlg = 0;
  if ((fabs(PCurOp - 1.0) < 0.5) || (LCShutDwn > 0.5) || (DisEngFlg > 0.5)) {
    LCForceShutDwnFlg = 1;
  }

  TunForceShutDwnFlg = 0;
  if ((TrnShutDwn > 0.5) || (DisEngFlg > 0.5)) {
    TunForceShutDwnFlg = 1;
  }

  OpSchedule(Navi_InfoTurn, Line_ShapeInfo, InputStatusFailCnt, b_Info_Me,
             TargetPosition, b_InLaneLCFlg, LCTrigSuccessOut, Info_Lo, TrigStart,
             OperationFinishFlg, LCStartFlg, LCEnbRes, TunEnbRes,
             LCForceShutDwnFlg > PLCForceShutDwn, TunForceShutDwnFlg >
             PTunForceShutDwn, End, Curoperation, OperationLongDislimit,
             RoadInfo, SpeedLimit, Info_Me, InLaneLCFlg, PreInfo_Me, &ObjTrigOut,
             CurRoadInfo, &unusedU0);
  *SpeedLimit = 14.0;

  /*  OpSchedule End */
  /*  UpdateSideObjResStart */
  UpdateSideObjRes(*Curoperation, FusData, RoadInfo, UseFakeCIPVEn, TimeLimit,
                   EnterZoneEnFlg);

  /*  UpdateSideObjResEnd */
  if ((LCShutDwn > 0.5) || (unusedU0 > 0.5)) {
    u = 1;
  } else {
    u = 0;
  }

  *LCEnbSts = 1.0 - (double)u;
  PCurOp = *Curoperation;
  PLCForceShutDwn = LCForceShutDwnFlg;
  PTunForceShutDwn = TunForceShutDwnFlg;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void OperAndObjSelector_init(void)
{
  PCurOp = 0.0;
  PPCurOp = 0.0;
  PLCForceShutDwn = 0.0;
  PTunForceShutDwn = 0.0;
}

/*
 * File trailer for OperAndObjSelector.c
 *
 * [EOF]
 */
