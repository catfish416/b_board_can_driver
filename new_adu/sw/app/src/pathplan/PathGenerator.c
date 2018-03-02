/*
 * File: PathGenerator.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "PathGenerator.h"
#include "LaneChangePathPlanningModule.h"
#include "InterSectionPathPlanningModule.h"
#include "CordTransfer.h"

/* Function Definitions */

/*
 * Arguments    : double Timelimit
 *                double EnterZoneFlg
 *                const double Info_MeGCd[6]
 *                const double Info_FdGCd[6]
 *                const double Info_FoGCd[6]
 *                const double Info_LdGCd[6]
 *                const double Info_LoGCd[6]
 *                double LongDisLimitGCd
 *                const double RoadInfoGCd[8]
 *                double CurOpGCd
 *                double InLaneLCFlg
 *                const double PreInfo_Me[6]
 *                double LCEnbSts
 *                double *PathFinishFlg
 *                double *PathPlanControl
 *                double *TargetLongitudinalSpeed
 *                double *TargetOrientationAngle
 *                double *PreviewTime
 *                double *PreviewDistance
 *                double *LateraDistance
 *                double *LongitudinalError
 *                double *LateralError
 *                double *LCStartFlg
 * Return Type  : void
 */
void PathGenerator(double Timelimit, double EnterZoneFlg, const double
                   Info_MeGCd[6], const double Info_FdGCd[6], const double
                   Info_FoGCd[6], const double Info_LdGCd[6], const double
                   Info_LoGCd[6], double LongDisLimitGCd, const double
                   RoadInfoGCd[8], double CurOpGCd, double InLaneLCFlg, const
                   double PreInfo_Me[6], double LCEnbSts, double *PathFinishFlg,
                   double *PathPlanControl, double *TargetLongitudinalSpeed,
                   double *TargetOrientationAngle, double *PreviewTime, double
                   *PreviewDistance, double *LateraDistance, double
                   *LongitudinalError, double *LateralError, double *LCStartFlg)
{
  double Info_MePGCd[6];
  double RoadInfoPGCd[8];
  double Info_FdPGCd[6];
  double Info_FoPGCd[6];
  double Info_LdPGCd[6];
  double Info_LoPGCd[6];
  double LongDisLimitPGCd;
  double ToLeftLC;
  double LCOPCntOut;
  double b_CurOp;
  double unusedU0[3];
  double unusedU1;
  double VsPathPlan_h_InterSecposition[4];
  double VsPathPlan_h_InterSecMotion[4];
  double VsPathPlan_h_LCposition[4];
  double VsPathPlan_h_LCMotion[4];
  double TargetThetaLoLC;
  double PreviewTimeLC;
  double PathTrigFinishFlgLC;

  /*  CordTransfer start */
  b_CordTransfer(Info_MeGCd, Info_FdGCd, Info_FoGCd, Info_LdGCd, Info_LoGCd,
                 CurOpGCd, LongDisLimitGCd, RoadInfoGCd, Info_MePGCd,
                 RoadInfoPGCd, Info_FdPGCd, Info_FoPGCd, Info_LdPGCd,
                 Info_LoPGCd, &LongDisLimitPGCd, &ToLeftLC, &LCOPCntOut,
                 &b_CurOp, unusedU0, &unusedU1);

  /*  CordTransfer end                        */
  /*  InterSectionPathPlanningModule start */
  InterSectionPathPlanningModule(Timelimit, EnterZoneFlg, Info_MePGCd,
    RoadInfoPGCd, b_CurOp, Info_LdPGCd, Info_FdPGCd, 3.8888888888888888,
    VsPathPlan_h_InterSecposition, VsPathPlan_h_InterSecMotion, PathPlanControl,
    TargetOrientationAngle, PreviewTime, PathFinishFlg);

  /*  InterSectionPathPlanningModule end */
  /*  LaneChangePathPlanningModule start */
  LaneChangePathPlanningModule(Info_MePGCd, RoadInfoPGCd, Info_FdPGCd,
    Info_FoPGCd, Info_LdPGCd, Info_LoPGCd, LongDisLimitPGCd, ToLeftLC, b_CurOp,
    InLaneLCFlg, 3.8888888888888888, PreInfo_Me, LCEnbSts,
    VsPathPlan_h_LCposition, VsPathPlan_h_LCMotion, &unusedU1, &TargetThetaLoLC,
    &PreviewTimeLC, &PathTrigFinishFlgLC, &LCOPCntOut, LCStartFlg);

  /*  LaneChangePathPlanningModule end */
  /*  SceneOutputSelectorModule start */
  if (fabs(b_CurOp - 5.0) < 0.1) {
    /* SceneOutputSelectorModule */
    *PreviewDistance = VsPathPlan_h_LCposition[0];
    *LateraDistance = VsPathPlan_h_LCposition[1];
    *LongitudinalError = VsPathPlan_h_LCposition[2];
    *LateralError = VsPathPlan_h_LCposition[3];
    *TargetLongitudinalSpeed = sqrt(VsPathPlan_h_LCMotion[2] *
      VsPathPlan_h_LCMotion[2] + VsPathPlan_h_LCMotion[3] *
      VsPathPlan_h_LCMotion[3]) * 3.6;
    *PathPlanControl = unusedU1;
    *TargetOrientationAngle = TargetThetaLoLC;
    *PreviewTime = PreviewTimeLC;
    *PathFinishFlg = PathTrigFinishFlgLC;
  } else if ((fabs(b_CurOp - 1.0) < 0.1) || (fabs(b_CurOp - 2.0) < 0.1)) {
    *PreviewDistance = VsPathPlan_h_InterSecposition[0];
    *LateraDistance = VsPathPlan_h_InterSecposition[1];
    *LongitudinalError = VsPathPlan_h_InterSecposition[2];
    *LateralError = VsPathPlan_h_InterSecposition[3];
    *TargetLongitudinalSpeed = sqrt(VsPathPlan_h_InterSecMotion[2] *
      VsPathPlan_h_InterSecMotion[2] + VsPathPlan_h_InterSecMotion[3] *
      VsPathPlan_h_InterSecMotion[3]) * 3.6;
  } else {
    *PreviewDistance = 0.0;
    *LateraDistance = 0.0;
    *LongitudinalError = 0.0;
    *LateralError = 0.0;
    *TargetLongitudinalSpeed = 0.0;
    *PathPlanControl = 0.0;
    *TargetOrientationAngle = 0.0;
    *PreviewTime = 0.0;
    *PathFinishFlg = 0.0;
  }

  /*  SceneOutputSelectorModule end */
}

/*
 * File trailer for PathGenerator.c
 *
 * [EOF]
 */
