/*
 * File: LaneChangePathPlanningModule.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "LaneChangePathPlanningModule.h"
#include "PosUpdateLC.h"
#include "PathCreatorLC.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double PLCTransEn;
static double b_TurnNexX;
static double b_TurnNexY;
static double PPathTrigFinishFlg;
static double b_TrigEventEdge;
static double LCStart;
static double LKADelayCnt;
static double b_PLCTransEn;
static double Y1Start;
static double Time;
static double StartTrig;

/* Function Definitions */

/*
 * Arguments    : const double Info_Me[6]
 *                const double RoadInfo[8]
 *                const double Info_Fd[6]
 *                const double Info_Fo[6]
 *                const double Info_Ld[6]
 *                const double Info_Lo[6]
 *                double LongDisLimit
 *                double ToLeftOrRight
 *                double b_CurOp
 *                double InLaneLCFlg
 *                double SpeedLimit
 *                const double PreInfo_Me[6]
 *                double LCEnbSts
 *                double VsPathPlan_h_position[4]
 *                double VsPathPlan_h_Motion[4]
 *                double *PathPlanningSuccessFlg
 *                double *TargetThetalo
 *                double *PreViewTime
 *                double *PathTrigFinishFlg
 *                double *LCTrans
 *                double *LCStartFlg
 * Return Type  : void
 */
void LaneChangePathPlanningModule(const double Info_Me[6], const double
  RoadInfo[8], const double Info_Fd[6], const double Info_Fo[6], const double
  Info_Ld[6], const double Info_Lo[6], double LongDisLimit, double ToLeftOrRight,
  double b_CurOp, double InLaneLCFlg, double SpeedLimit, const double
  PreInfo_Me[6], double LCEnbSts, double VsPathPlan_h_position[4], double
  VsPathPlan_h_Motion[4], double *PathPlanningSuccessFlg, double *TargetThetalo,
  double *PreViewTime, double *PathTrigFinishFlg, double *LCTrans, double
  *LCStartFlg)
{
  double y_outOut;
  double angle_outOut;
  double Info_FdOut[6];
  double Info_FoOut[6];
  double Info_LdOut[6];
  double Info_LoOut[6];
  int TrigFlg;
  int TrigEdgeResCur;
  double xoptres[3];
  double PlanRes;
  double KurMax;
  double IterGoldenStep;
  double IterQpStep;
  double IterSQPStep;
  double PathPlanRetryFlg;
  double d16;
  double Vx;
  double Vy;
  double Theta;
  double xpositionNex;
  double ypositionNex;
  double LCInTransState;
  double d17;
  double d18;
  double BeforeRotX[4];
  double BeforeRotY[4];
  double AfterRotX[4];
  double AfterRotY[4];

  /*  Left or Right start */
  /*      y_outIn = RoadInfoIn(2,2) - RoadInfoIn(2,1)*tan(RoadInfoIn(2,3)); */
  y_outOut = RoadInfo[3];
  angle_outOut = RoadInfo[5];
  for (TrigFlg = 0; TrigFlg < 6; TrigFlg++) {
    Info_FdOut[TrigFlg] = Info_Fd[TrigFlg];
    Info_FoOut[TrigFlg] = Info_Fo[TrigFlg];
    Info_LdOut[TrigFlg] = Info_Ld[TrigFlg];
    Info_LoOut[TrigFlg] = Info_Lo[TrigFlg];
  }

  if (!(ToLeftOrRight > 0.1)) {
    /* Right */
    Info_FdOut[1] = -Info_Fd[1];
    Info_FoOut[1] = -Info_Fo[1];
    Info_LdOut[1] = -Info_Ld[1];
    Info_LoOut[1] = -Info_Lo[1];
    Info_FdOut[5] = -Info_Fd[5];
    Info_FoOut[5] = -Info_Fo[5];
    Info_LdOut[5] = -Info_Ld[5];
    Info_LoOut[5] = -Info_Lo[5];
    y_outOut = -RoadInfo[3];
    angle_outOut = -RoadInfo[5];
  }

  while ((angle_outOut <= -3.1415926535897931) || (angle_outOut >
          3.1415926535897931)) {
    if (angle_outOut <= -3.1415926535897931) {
      angle_outOut += 6.2831853071795862;
    } else {
      if (angle_outOut >= 3.1415926535897931) {
        angle_outOut -= 6.2831853071795862;
      }
    }
  }

  /*      W_me = Info_MeIn(5); */
  /*      if y_outOut > (W_me + 1) */
  /*      else */
  /*          y_outOut = W_me + 1; */
  /*      end */
  /*  Left or Right end */
  /*  PathCreator start */
  /* Operation 0 NA    %Operation 1 RT    %Operation 2 LT    %Operation 3 ST    %Operation 4 PK    %Operation 5 LC    %Operation 6 Transition */
  if ((!TrigEventEdge_not_empty) || (PPathTrigFinishFlg > 0.1) || (fabs(b_CurOp
        - 5.0) > 0.1)) {
    b_TrigEventEdge = 0.0;
    TrigEventEdge_not_empty = true;
  }

  TrigFlg = 0;
  if (fabs(b_CurOp - 5.0) < 0.1) {
    TrigEdgeResCur = 1;
  } else {
    TrigEdgeResCur = 0;
    LCOPCNT = 0.0;
  }

  if ((fabs(b_TrigEventEdge - (double)TrigEdgeResCur) > 0.1) && (fabs(LCOPCNT -
        1.0) > 0.1)) {
    if (TrigEdgeResCur > 0.1) {
      TrigFlg = 1;
    }

    LCOPCNT = 1.0;
    b_TrigEventEdge = TrigEdgeResCur;
  }

  /*      if ((abs(TrigEventEdge - TrigEdgeResCur) > 1e-1))||(abs(LCOPCNT - OPCnt)>1e-1) */
  /*          if (TrigEdgeResCur > 1e-1) */
  /*              TrigFlg = 1; */
  /*          else */
  /*          end */
  /*          LCOPCNT = OPCnt; */
  /*          TrigEventEdge = TrigEdgeResCur; */
  /*      else */
  /*          TrigFlg = 0; */
  /*      end */
  /*  PathCreatorLC start */
  PathCreatorLC(Info_FdOut, Info_FoOut, Info_LdOut, Info_LoOut, Info_Me,
                RoadInfo[0], RoadInfo[2], RoadInfo[4], y_outOut, angle_outOut,
                RoadInfo[1], TrigFlg, LongDisLimit, PPathTrigFinishFlg,
                SpeedLimit, b_CurOp, xoptres, &PlanRes, &KurMax, &IterGoldenStep,
                &IterQpStep, &IterSQPStep, &PathPlanRetryFlg);

  /*  PathCreatorLC start */
  /*  PrePointCal start */
  for (TrigFlg = 0; TrigFlg < 6; TrigFlg++) {
    Info_FdOut[TrigFlg] = Info_Me[TrigFlg];
  }

  if (fabs(sin(angle_outOut)) > 0.98) {
    d16 = y_outOut;
  } else {
    d16 = tan(angle_outOut) * (xoptres[0] - RoadInfo[1]) + y_outOut;
  }

  PosUpdateLC(xoptres, RoadInfo[0], RoadInfo[2], RoadInfo[4], d16, angle_outOut,
              Info_FdOut, 2.0, PlanRes, ToLeftOrRight, PreInfo_Me, PLCTransEn,
              LCEnbSts, PreViewTime, &KurMax, &IterGoldenStep, &IterQpStep,
              &IterSQPStep, &Vx, &Vy, &Theta, &xpositionNex, &ypositionNex,
              PathPlanningSuccessFlg, PathTrigFinishFlg, &LCInTransState);

  /* LeftRightFlg 1 Left 0 Right */
  if ((!LCStart_not_empty) || (b_CurOp < 5.0)) {
    LCStart = 0.0;
    LCStart_not_empty = true;
    LKADelayCnt = 0.0;
    Y1Start = 0.0;
  }

  if ((!PLCTransEn_not_empty) || (LCEnbSts < 0.5)) {
    b_PLCTransEn = 0.0;
    PLCTransEn_not_empty = true;
  }

  if (ToLeftOrRight < 0.5) {
    TrigFlg = -1;
  } else {
    TrigFlg = 1;
  }

  if ((LCStart < 0.1) && (*PathPlanningSuccessFlg > 0.1) && (fabs(b_CurOp - 5.0)
       < 0.1)) {
    if (fabs(sin(angle_outOut)) > 0.98) {
      d17 = y_outOut;
    } else {
      d17 = tan(angle_outOut) * (xoptres[0] - RoadInfo[1]) + y_outOut;
    }

    if (Info_Me[1] * (double)TrigFlg > 0.2 * d17) {
      LCStart = 1.0;
      Y1Start = 0.0;
      if ((InLaneLCFlg > 0.5) && (ToLeftOrRight > 0.5)) {
        /*              if PLCTransEn < 1e-1  */
        b_PLCTransEn = 1.0;

        /*              end         */
      } else {
        b_PLCTransEn = 0.0;
      }
    }
  }

  TrigEdgeResCur = 0;
  if ((*PathTrigFinishFlg > 0.1) && (LCStart > 0.1)) {
    if (fabs(sin(angle_outOut)) > 0.98) {
      d18 = y_outOut;
    } else {
      d18 = tan(angle_outOut) * (Info_Me[0] - RoadInfo[1]) + y_outOut;
    }

    if ((fabs(Info_Me[1] * (double)TrigFlg - d18) < 0.3) && (fabs(sin(Info_Me[5]
           * (double)TrigFlg - angle_outOut)) < 0.03)) {
      /*              y1 = 1; */
      if (b_PLCTransEn > 0.5) {
        TrigEdgeResCur = 1;
        Y1Start = 0.0;
      } else {
        if ((LKADelayCnt < 0.5) && (Y1Start < 0.5)) {
          LKADelayCnt = 100.0;
          Y1Start = 1.0;
        }
      }

      /*          if (SideObjFlgResEgo > 0.5)&&(InLaneLCOutFlg>0.5)    */
      /*          if (SideObjFlgResEgo > 0.5)&&(LeftRightFlg>0.5)   */
      /*              y1 = 0; */
      /*          else */
      /*              y1 = 1; */
      /*          end */
    }

    if (Y1Start > 0.5) {
      if (LKADelayCnt < 0.5) {
        TrigEdgeResCur = 1;
      } else {
        LKADelayCnt--;
      }
    }
  }

  if (PathPlanRetryFlg > 0.5) {
    TrigEdgeResCur = -1;
  }

  *PathTrigFinishFlg = TrigEdgeResCur;
  *LCTrans = b_PLCTransEn;
  *LCStartFlg = LCStart;

  /*  PrePointCal end */
  /*  CordConvertLC start */
  y_outOut = Info_Me[0];
  angle_outOut = Info_Me[1];
  PlanRes = Info_Me[5];

  /* UNTITLED Summary of this function goes here */
  /*    Detailed explanation goes here */
  if ((!Time_not_empty) || (*PathPlanningSuccessFlg < 0.1)) {
    Time = 0.0;
    Time_not_empty = true;
    StartTrig = 0.0;
  }

  if ((*PathPlanningSuccessFlg > 0.1) && (StartTrig < 0.1)) {
    StartTrig = 1.0;
    Time = 0.0;
  }

  if (StartTrig > 0.1) {
    Time++;
  } else {
    Time = 0.0;
  }

  if (LCInTransState > 0.5) {
    y_outOut = PreInfo_Me[0];
    angle_outOut = PreInfo_Me[1];
    PlanRes = PreInfo_Me[5];
  }

  BeforeRotX[0] = KurMax;
  BeforeRotX[1] = b_TurnNexX;
  BeforeRotX[2] = IterQpStep;
  BeforeRotX[3] = Vx;
  BeforeRotY[0] = IterGoldenStep;
  BeforeRotY[1] = b_TurnNexY;
  BeforeRotY[2] = IterSQPStep;
  BeforeRotY[3] = Vy;
  KurMax = cos(PlanRes);
  IterGoldenStep = sin(PlanRes);
  IterQpStep = cos(PlanRes);
  IterSQPStep = sin(PlanRes);
  for (TrigFlg = 0; TrigFlg < 4; TrigFlg++) {
    AfterRotX[TrigFlg] = (BeforeRotX[TrigFlg] - y_outOut) * KurMax +
      (BeforeRotY[TrigFlg] - angle_outOut) * IterGoldenStep;
    AfterRotY[TrigFlg] = (BeforeRotY[TrigFlg] - angle_outOut) * IterQpStep -
      (BeforeRotX[TrigFlg] - y_outOut) * IterSQPStep;
  }

  VsPathPlan_h_position[0] = AfterRotX[0];
  VsPathPlan_h_position[1] = AfterRotY[0];
  VsPathPlan_h_position[2] = -AfterRotX[1];
  VsPathPlan_h_position[3] = -AfterRotY[1];
  VsPathPlan_h_Motion[0] = AfterRotX[2];
  VsPathPlan_h_Motion[1] = AfterRotY[2];
  VsPathPlan_h_Motion[2] = Vx;
  VsPathPlan_h_Motion[3] = Vy;
  if ((StartTrig > 0.1) && (Time < 20.0)) {
    if (ToLeftOrRight < 0.1) {
      if (AfterRotY[0] > 0.0) {
        VsPathPlan_h_position[1] = 0.0;
      }

      if (-AfterRotY[1] < 0.0) {
        VsPathPlan_h_position[3] = 0.0;
      }
    } else {
      if (AfterRotY[0] < 0.0) {
        VsPathPlan_h_position[1] = 0.0;
      }

      if (-AfterRotY[1] > 0.0) {
        VsPathPlan_h_position[3] = 0.0;
      }
    }
  }

  *TargetThetalo = Theta - PlanRes;

  /*  CordConvertLC end */
  PLCTransEn = b_PLCTransEn;
  PPathTrigFinishFlg = TrigEdgeResCur;
  b_TurnNexX = xpositionNex;
  b_TurnNexY = ypositionNex;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void c_LaneChangePathPlanningModule_(void)
{
  PLCTransEn = 0.0;
  b_TurnNexX = 0.0;
  b_TurnNexY = 0.0;
  PPathTrigFinishFlg = 0.0;
}

/*
 * File trailer for LaneChangePathPlanningModule.c
 *
 * [EOF]
 */
