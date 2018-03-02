/*
 * File: InterSectionPathPlanningModule.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "InterSectionPathPlanningModule.h"
#include "ElementaryPosCalInterSection.h"
#include "PathCreatorInterSection.h"
#include "CordTransferInterSection.h"
#include "TransPathPlan.h"
#include "XinExtractFunc.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double PathFinishFlgTurn;
static double TurnNexX;
static double TurnNexY;
static double PV_tar;
static double PPathPlanRetryFlg;

/* Function Definitions */

/*
 * Arguments    : double TimeLimit
 *                double EnterZoneflg
 *                const double Info_Me[6]
 *                const double RoadInfo[8]
 *                double b_CurOp
 *                const double Info_Ld[6]
 *                const double Info_Fd[6]
 *                double SpeedLimit
 *                double VsPathPlan_h_position[4]
 *                double VsPathPlan_h_Motion[4]
 *                double *PathPlanningSuccessFlg
 *                double *TargetThetalo
 *                double *PreViewTime
 *                double *PathTrigFinishFlg
 * Return Type  : void
 */
void InterSectionPathPlanningModule(double TimeLimit, double EnterZoneflg, const
  double Info_Me[6], const double RoadInfo[8], double b_CurOp, const double
  Info_Ld[6], const double Info_Fd[6], double SpeedLimit, double
  VsPathPlan_h_position[4], double VsPathPlan_h_Motion[4], double
  *PathPlanningSuccessFlg, double *TargetThetalo, double *PreViewTime, double
  *PathTrigFinishFlg)
{
  int TrigFlgTurn;
  int TrigEdgeResCur;
  double TrunTrigFlg;
  double xposition;
  double yposition;
  double Ax;
  double Ay;
  double CurActiveModel;
  double unusedU4[8];
  double TarPosInfo[2];
  double Info_MeTurn[6];
  double Info_FdPGCd[6];
  double Info_MePGCd[6];
  double x_inPGCd;
  double y_inPGCd;
  double angle_inPGCd;
  double x_outPGCd;
  double y_outPGCd;
  double angle_outPGCd;
  double CurOpPGCd;
  double PGCdInfo[3];
  double Vx;
  double Vy;
  double Theta;
  double xpositionNex;
  double ypositionNex;
  double xoptres;
  double Deltaout;
  double Arclengthout;
  double T_long;
  double PlanRes;
  double PathPlanRetryFlg;
  double BeforeRotX[4];
  double BeforeRotY[4];
  double AfterRotX[4];
  double AfterRotY[4];

  /* Operation 0 NA    %Operation 1 RT    %Operation 2 LT    %Operation 3 ST    %Operation 4 PK    %Operation 5 LC    %Operation 6 Transition */
  TrigFlgTurn = 0;
  if ((fabs(b_CurOp - 1.0) < 0.1) || (fabs(b_CurOp - 2.0) < 0.1)) {
    TrigEdgeResCur = 1;
  } else {
    TrigEdgeResCur = 0;
  }

  if (fabs(TrigEventEdge - (double)TrigEdgeResCur) > 0.1) {
    if (TrigEdgeResCur > 0.1) {
      TrigFlgTurn = 1;
    }

    TrigEventEdge = TrigEdgeResCur;
  }

  /*  TurnEnterExitPointCal Start */
  XinExtractFunc(b_CurOp, TrigFlgTurn, RoadInfo[0], RoadInfo[2], RoadInfo[4],
                 RoadInfo[1], RoadInfo[3], RoadInfo[5], RoadInfo[6], RoadInfo[7],
                 Info_Me, EnterZoneflg, PPathPlanRetryFlg, PathTrigFinishFlg,
                 &TrunTrigFlg, &xposition, &yposition, &Ax, &Ay, &CurActiveModel,
                 unusedU4, TarPosInfo, PathPlanningSuccessFlg);
  if (fabs(CurActiveModel - 2.0) > 0.1) {
    /* Line Section */
    /*  TurnEnterExitPointCal End */
    /*  TurnStarightLinePrePointCal Start                   */
    TransPathPlan(CurActiveModel, TarPosInfo, Info_Me, EnterZoneflg < 0.5,
                  PV_tar, RoadInfo[5], &xposition, &yposition, &Ax, &Ay, &Vx,
                  &Vy, &Theta, &xpositionNex, &ypositionNex, PreViewTime);
    Ay = 0.0;
    Vy = 0.0;
    *PreViewTime = 1.0;

    /*  TurnStarightLinePrePointCal End     */
    for (TrigFlgTurn = 0; TrigFlgTurn < 6; TrigFlgTurn++) {
      Info_MeTurn[TrigFlgTurn] = Info_Me[TrigFlgTurn];
    }
  } else {
    /* Turn Section */
    /*  CordTransferInterSection start */
    CordTransferInterSection(Info_Ld, Info_Fd, Info_Me, b_CurOp, RoadInfo[0],
      RoadInfo[2], RoadInfo[4], RoadInfo[1], RoadInfo[3], RoadInfo[5], RoadInfo
      [6], RoadInfo[7], TarPosInfo, TrunTrigFlg, Info_MeTurn, Info_FdPGCd,
      Info_MePGCd, &x_inPGCd, &y_inPGCd, &angle_inPGCd, &x_outPGCd, &y_outPGCd,
      &angle_outPGCd, &Ay, &CurOpPGCd, PGCdInfo, &xposition, &yposition);

    /*  CordTransferInterSection End */
    /*  PathCreatorInterSection start */
    if ((PathFinishFlgTurn == 1.0) && (fabs(CurActiveModel - 2.0) > 0.5)) {
      TrigFlgTurn = 1;
    } else {
      TrigFlgTurn = 0;
    }

    PathCreatorInterSection(Info_MeTurn, Info_FdPGCd, Info_MePGCd, x_inPGCd,
      y_inPGCd, angle_inPGCd, x_outPGCd, y_outPGCd, angle_outPGCd, Ay, CurOpPGCd,
      SpeedLimit, TrigFlgTurn, TimeLimit, &xoptres, &Deltaout, &Arclengthout,
      &T_long, &xposition, &PlanRes, &yposition, &Ax, &PathPlanRetryFlg);

    /*  PathCreatorInterSection end                                       */
    /*  ElementaryPosCalInterSection start */
    ElementaryPosCalInterSection(Info_Me, xoptres, Deltaout, Arclengthout,
      T_long, PlanRes, x_inPGCd, y_inPGCd, angle_inPGCd, x_outPGCd, y_outPGCd,
      angle_outPGCd, CurOpPGCd, PGCdInfo, Info_MeTurn, &xposition, &yposition,
      &Ax, &Ay, &Vx, &Vy, &Theta, &xpositionNex, &ypositionNex, PreViewTime,
      &PathFinishFlgTurn);

    /*  ElementaryPosCalInterSection end */
    PPathPlanRetryFlg = PathPlanRetryFlg;
    PV_tar = xoptres;
  }

  if ((fabs(b_CurOp - 1.0) > 0.1) && (fabs(b_CurOp - 2.0) > 0.1)) {
    CordTransferInterSection(Info_Ld, Info_Fd, Info_Me, b_CurOp, RoadInfo[0],
      RoadInfo[2], RoadInfo[4], RoadInfo[1], RoadInfo[3], RoadInfo[5], RoadInfo
      [6], RoadInfo[7], TarPosInfo, TrunTrigFlg, Info_MeTurn, Info_FdPGCd,
      Info_MePGCd, &x_inPGCd, &y_inPGCd, &angle_inPGCd, &x_outPGCd, &y_outPGCd,
      &angle_outPGCd, &Ay, &CurOpPGCd, PGCdInfo, &xposition, &yposition);

    /*  CordTransferInterSection End */
    /*  PathCreatorInterSection start */
    if ((PathFinishFlgTurn == 1.0) && (fabs(CurActiveModel - 2.0) > 0.5)) {
      TrigFlgTurn = 1;
    } else {
      TrigFlgTurn = 0;
    }

    PathCreatorInterSection(Info_MeTurn, Info_FdPGCd, Info_MePGCd, x_inPGCd,
      y_inPGCd, angle_inPGCd, x_outPGCd, y_outPGCd, angle_outPGCd, Ay, CurOpPGCd,
      SpeedLimit, TrigFlgTurn, TimeLimit, &xoptres, &Deltaout, &Arclengthout,
      &T_long, &xposition, &PlanRes, &yposition, &Ax, &PathPlanRetryFlg);

    /*  PathCreatorInterSection end                                       */
    /*  ElementaryPosCalInterSection start */
    ElementaryPosCalInterSection(Info_Me, xoptres, Deltaout, Arclengthout,
      T_long, PlanRes, x_inPGCd, y_inPGCd, angle_inPGCd, x_outPGCd, y_outPGCd,
      angle_outPGCd, CurOpPGCd, PGCdInfo, Info_MeTurn, &xposition, &yposition,
      &Ax, &Ay, &Vx, &Vy, &Theta, &xpositionNex, &ypositionNex, PreViewTime,
      &PathFinishFlgTurn);

    /*  ElementaryPosCalInterSection end */
    PPathPlanRetryFlg = PathPlanRetryFlg;
    PV_tar = xoptres;
  }

  /* UNTITLED Summary of this function goes here */
  /*    Detailed explanation goes here */
  BeforeRotX[0] = xposition;
  BeforeRotX[1] = TurnNexX;
  BeforeRotX[2] = Ax;
  BeforeRotX[3] = Vx;
  BeforeRotY[0] = yposition;
  BeforeRotY[1] = TurnNexY;
  BeforeRotY[2] = Ay;
  BeforeRotY[3] = Vy;
  xposition = cos(Info_MeTurn[5]);
  yposition = sin(Info_MeTurn[5]);
  Ax = cos(Info_MeTurn[5]);
  Ay = sin(Info_MeTurn[5]);
  for (TrigFlgTurn = 0; TrigFlgTurn < 4; TrigFlgTurn++) {
    AfterRotX[TrigFlgTurn] = (BeforeRotX[TrigFlgTurn] - Info_MeTurn[0]) *
      xposition + (BeforeRotY[TrigFlgTurn] - Info_MeTurn[1]) * yposition;
    AfterRotY[TrigFlgTurn] = (BeforeRotY[TrigFlgTurn] - Info_MeTurn[1]) * Ax -
      (BeforeRotX[TrigFlgTurn] - Info_MeTurn[0]) * Ay;
  }

  VsPathPlan_h_position[0] = AfterRotX[0];
  VsPathPlan_h_position[1] = AfterRotY[0];
  VsPathPlan_h_position[2] = -AfterRotX[1];
  VsPathPlan_h_position[3] = -AfterRotY[1];
  VsPathPlan_h_Motion[0] = AfterRotX[2];
  VsPathPlan_h_Motion[1] = AfterRotY[2];

  /*      VsPathPlan_h_Motion(3) = AfterRotX(4); */
  /*      VsPathPlan_h_Motion(4) = AfterRotY(4); */
  VsPathPlan_h_Motion[2] = Vx;
  VsPathPlan_h_Motion[3] = Vy;
  *TargetThetalo = Theta - Info_MeTurn[5];
  TurnNexX = xpositionNex;
  TurnNexY = ypositionNex;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void c_InterSectionPathPlanningModul(void)
{
  PathFinishFlgTurn = 0.0;
  TurnNexX = 0.0;
  TurnNexY = 0.0;
  PPathPlanRetryFlg = 0.0;
  PV_tar = 2.3611111111111112;
}

/*
 * File trailer for InterSectionPathPlanningModule.c
 *
 * [EOF]
 */
