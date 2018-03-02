/*
 * File: DebugMain.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "PathGenerator.h"
#include "MonitorObjDebugVersion.h"
#include "OperAndObjSelector.h"
#include "InputPreTreatMent.h"

/* Variable Definitions */
static double POperationFinishFlgIn;
static double PPPEn;
static double PLCStartFlg;

/* Function Definitions */

/*
 * YawRate deg/s StrWhAng deg/s--Steering wheel angle
 *  rate
 * Arguments    : const double FusObjPre[3302]
 *                const double Lane_NumInfoPre[3]
 *                const double Line_ShapeInfo[100]
 *                const double Veh_State[8]
 *                const double Navi_Info[28]
 *                double TrigStart
 *                const double End[4]
 *                double EPS_Status
 *                double ResSwAct
 *                double DrvBrkEng
 *                double YawRate
 *                double StrWhAng
 *                double TurnLight
 *                double TrnShutDwn
 *                double LCShutDwn
 *                double UseFakeCIPVEn
 *                double *PreviewDistance
 *                double *LateralDistance
 *                double *LongitudinalError
 *                double *LateralError
 *                double *TargetLongitudinalSpeed
 *                double *PathPlanControl
 *                double *TargetOrientationAngle
 *                double *PreviewTime
 *                double *PathPlanAvaliable
 *                double *SpeedLimit
 *                double *StopFlg
 *                double *aCal
 * Return Type  : void
 */
void DebugMain(const double FusObjPre[3302], const double Lane_NumInfoPre[3],
               const double Line_ShapeInfo[100], const double Veh_State[8],
               const double Navi_Info[28], double TrigStart, const double End[4],
               double EPS_Status, double ResSwAct, double DrvBrkEng, double
               YawRate, double StrWhAng, double TurnLight, double TrnShutDwn,
               double LCShutDwn, double UseFakeCIPVEn, double *PreviewDistance,
               double *LateralDistance, double *LongitudinalError, double
               *LateralError, double *TargetLongitudinalSpeed, double
               *PathPlanControl, double *TargetOrientationAngle, double
               *PreviewTime, double *PathPlanAvaliable, double *SpeedLimit,
               double *StopFlg, double *aCal)
{
  double kur;
  double FusObj[3302];
  double Lane_NumInfo[3];
  int i0;
  double DisEngFlg;
  double TimeLimit;
  double EnterZoneEnFlg;
  double Info_Me[6];
  double Info_Fd[6];
  double Info_Fo[6];
  double Info_Ld[6];
  double Info_Lo[6];
  double OperationLongDislimit;
  double RoadInfo[8];
  double Curoperation;
  double InLaneLCFlg;
  double PreInfo_Me[6];
  double LCEnbSts;
  double MonitorSts;
  double CurRoadInfo[8];
  double ArcPre;
  double VPre;
  double VNex;
  double CIPOInfo[5];
  double StopReason;
  if (fabs(Veh_State[7]) > 1.0) {
    kur = YawRate / 180.0 * 3.14 / Veh_State[7];
  } else {
    kur = sin(StrWhAng / 180.0 * 3.14 / 15.6) / 2.86;
  }

  memcpy(&FusObj[0], &FusObjPre[0], 3302U * sizeof(double));
  for (i0 = 0; i0 < 3; i0++) {
    Lane_NumInfo[i0] = Lane_NumInfoPre[i0];
  }

  DisEngFlg = InputPreTreatMent(End, Veh_State, EPS_Status, ResSwAct, DrvBrkEng,
    FusObj, Lane_NumInfo, kur, TurnLight, Navi_Info);

  /*  OperAndObjSelector Start */
  OperAndObjSelector(PPPEn, POperationFinishFlgIn, Veh_State, FusObj,
                     Lane_NumInfo, Line_ShapeInfo, Navi_Info, End, DisEngFlg,
                     PLCStartFlg, TrigStart, TrnShutDwn, LCShutDwn,
                     UseFakeCIPVEn, &TimeLimit, &EnterZoneEnFlg, Info_Me,
                     Info_Fd, Info_Fo, Info_Ld, Info_Lo, &OperationLongDislimit,
                     RoadInfo, &Curoperation, &InLaneLCFlg, SpeedLimit,
                     PreInfo_Me, &LCEnbSts, &MonitorSts, CurRoadInfo);
  *SpeedLimit = 14.0;

  /*  OperAndObjSelector End */
  /* ObjMonitor */
  /*  MonitorObjDebugVersion Start */
  MonitorObjDebugVersion(PPPEn, CurRoadInfo, Curoperation, FusObj, Info_Me, kur,
    Line_ShapeInfo, Lane_NumInfo, StopFlg, &DisEngFlg, &MonitorSts, &ArcPre,
    &VPre, &VNex, aCal, CIPOInfo, &StopReason);
  *StopFlg = 0.0;

  /*  MonitorObjDebugVersion End */
  /*  PathGenerator Start */
  PathGenerator(TimeLimit, EnterZoneEnFlg, Info_Me, Info_Fd, Info_Fo, Info_Ld,
                Info_Lo, OperationLongDislimit, RoadInfo, Curoperation,
                InLaneLCFlg, PreInfo_Me, LCEnbSts, &DisEngFlg, PathPlanControl,
                TargetLongitudinalSpeed, TargetOrientationAngle, PreviewTime,
                PreviewDistance, LateralDistance, LongitudinalError,
                LateralError, &MonitorSts);
  *PathPlanAvaliable = 1.0;

  /*  PathGenerator End */
  POperationFinishFlgIn = DisEngFlg;
  PPPEn = *PathPlanControl;
  PLCStartFlg = MonitorSts;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void DebugMain_init(void)
{
  POperationFinishFlgIn = 0.0;
  PPPEn = 0.0;
  PLCStartFlg = 0.0;
}

/*
 * File trailer for DebugMain.c
 *
 * [EOF]
 */
