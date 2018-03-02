/*
 * File: XinExtractFunc.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "XinExtractFunc.h"

/* Variable Definitions */
static double PTurnTrigFlg;
static boolean_T PTurnTrigFlg_not_empty;
static double PTrigFlg;
static double CurState;
static double PInfo_Me[6];

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void PTurnTrigFlg_not_empty_init(void)
{
  PTurnTrigFlg_not_empty = false;
}

/*
 * RoadInfo(1,1) = Info_Me(1);RoadInfo(1,2) = Info_Me(2);RoadInfo(1,3) = Info_Me(6);RoadInfo(1,4) = EgoLaneInfo(2);
 *          RoadInfo(2,:) = [EgoLaneInfo(3),EgoLaneInfo(4),EgoLaneInfo(1),EgoLaneInfo(2)];
 * Arguments    : double CurOPPP
 *                double TrigFlg
 *                double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_x_out
 *                double c_y_out
 *                double c_angle_out
 *                double W_in
 *                double W_out
 *                const double Info_Me[6]
 *                double EnterZoneFlg
 *                double PathPlanRetryFlg
 *                double *PathFinishFlg
 *                double *TrunTrigFlg
 *                double *x_inStartTPoint
 *                double *y_inStartTPoint
 *                double *x_outEndTPoint
 *                double *y_outEndTPoint
 *                double *CurActiveModel
 *                double RoadInfoPGCd[8]
 *                double TarPosInfo[2]
 *                double *PathPlanningSuccessFlg
 * Return Type  : void
 */
void XinExtractFunc(double CurOPPP, double TrigFlg, double c_x_in, double c_y_in,
                    double c_angle_in, double c_x_out, double c_y_out, double
                    c_angle_out, double W_in, double W_out, const double
                    Info_Me[6], double EnterZoneFlg, double PathPlanRetryFlg,
                    double *PathFinishFlg, double *TrunTrigFlg, double
                    *x_inStartTPoint, double *y_inStartTPoint, double
                    *x_outEndTPoint, double *y_outEndTPoint, double
                    *CurActiveModel, double RoadInfoPGCd[8], double TarPosInfo[2],
                    double *PathPlanningSuccessFlg)
{
  int ixstart;
  double Xcent;
  double a;
  double b_a;
  double varargin_1_idx_0;
  int ix;
  boolean_T exitg1;
  if ((!PTurnTrigFlg_not_empty) || ((fabs(CurOPPP - 1.0) > 0.1) && (fabs(CurOPPP
         - 2.0) > 0.1))) {
    PTurnTrigFlg = 0.0;
    PTurnTrigFlg_not_empty = true;
    PTrigFlg = 0.0;
    CurState = 1.0;
    for (ixstart = 0; ixstart < 6; ixstart++) {
      PInfo_Me[ixstart] = 0.0;
    }
  }

  if (TrigFlg > 0.1) {
    PTrigFlg = 1.0;
    CurState = 1.0;
    PTurnTrigFlg = 0.0;
    for (ixstart = 0; ixstart < 6; ixstart++) {
      PInfo_Me[ixstart] = 0.0;
    }
  }

  *TrunTrigFlg = 0.0;
  *CurActiveModel = 0.0;
  *PathFinishFlg = 0.0;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    TarPosInfo[ixstart] = 0.0;
  }

  if (fabs(sin(c_angle_out - c_angle_in)) < 0.1) {
    /*  Treat outpoint as a 90 degree Turn */
    /*  No Turn is needed  */
    Xcent = 0.0;
  } else {
    Xcent = c_x_out - c_y_out * (1.0 / tan(c_angle_out - c_angle_in));
  }

  a = c_x_in - Xcent;
  b_a = c_x_out - Xcent;
  varargin_1_idx_0 = sqrt(a * a + c_y_in * c_y_in);
  a = sqrt(b_a * b_a + c_y_out * c_y_out);
  ixstart = 1;
  if (rtIsNaN(varargin_1_idx_0)) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(a)) {
        varargin_1_idx_0 = a;
        exitg1 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (a < varargin_1_idx_0)) {
    varargin_1_idx_0 = a;
  }

  if (varargin_1_idx_0 > 16.0) {
    *x_inStartTPoint = Xcent - 16.0;
    *y_inStartTPoint = 0.0;
    *x_outEndTPoint = Xcent + 16.0 * cos(c_angle_out - c_angle_in);
    *y_outEndTPoint = 16.0 * sin(c_angle_out - c_angle_in);
  } else {
    *x_inStartTPoint = Xcent - varargin_1_idx_0;
    *y_inStartTPoint = 0.0;
    *x_outEndTPoint = Xcent + varargin_1_idx_0 * cos(c_angle_out - c_angle_in);
    *y_outEndTPoint = varargin_1_idx_0 * sin(c_angle_out - c_angle_in);
  }

  if (PTrigFlg > 0.1) {
    *PathPlanningSuccessFlg = 1.0;
    switch ((int)CurState) {
     case 1:
      a = Info_Me[0] - *x_inStartTPoint;
      TarPosInfo[0] = *x_inStartTPoint;
      TarPosInfo[1] = 0.0;
      if ((PTurnTrigFlg < 1.0) && ((sqrt(a * a + Info_Me[1] * Info_Me[1]) < 1.0)
           || (((Info_Me[0] - *x_inStartTPoint) * cos(c_angle_in) + Info_Me[1] *
                sin(c_angle_in) > 0.0) > 0.5))) {
        if (EnterZoneFlg > 0.5) {
          *TrunTrigFlg = 1.0;
          PTurnTrigFlg = 1.0;
          CurState = 2.0;
          for (ixstart = 0; ixstart < 6; ixstart++) {
            PInfo_Me[ixstart] = Info_Me[ixstart];
          }

          *CurActiveModel = 2.0;
          TarPosInfo[0] = *x_outEndTPoint;
          TarPosInfo[1] = *y_outEndTPoint;
        } else {
          CurState = 4.0;
        }
      } else {
        *CurActiveModel = 1.0;
      }
      break;

     case 2:
      if (PathPlanRetryFlg < 0.5) {
        a = Info_Me[0] - c_x_out;
        b_a = Info_Me[1] - c_y_out;
        TarPosInfo[0] = *x_outEndTPoint;
        TarPosInfo[1] = *y_outEndTPoint;
        if (((sqrt(a * a + b_a * b_a) < 1.0) || (((Info_Me[0] - *x_outEndTPoint)
               * cos(c_angle_out) + (Info_Me[1] - *y_outEndTPoint) * sin
               (c_angle_out) > 0.0) > 0.5)) && (fabs(sin(c_angle_out - Info_Me[5]))
             < 0.0871116706328801)) {
          PTurnTrigFlg = 0.0;
          CurState = 0.0;
          *PathFinishFlg = 1.0;
          *CurActiveModel = 2.0;
          *PathPlanningSuccessFlg = 0.0;
          PTrigFlg = 0.0;
        } else {
          *CurActiveModel = 2.0;
        }
      } else {
        PTurnTrigFlg = 0.0;
        CurState = 4.0;
        *CurActiveModel = 1.0;
        TarPosInfo[0] = *x_inStartTPoint;
        TarPosInfo[1] = 0.0;
      }
      break;

     case 3:
      a = Info_Me[0] - c_x_out;
      b_a = Info_Me[1] - c_y_out;
      TarPosInfo[0] = c_x_out;
      TarPosInfo[1] = c_y_out;
      if (sqrt(a * a + b_a * b_a) < 1.0) {
        PTurnTrigFlg = 0.0;
        CurState = 0.0;
        *PathFinishFlg = 1.0;
        *CurActiveModel = 3.0;
        *PathPlanningSuccessFlg = 0.0;
        PTrigFlg = 0.0;
      } else {
        *CurActiveModel = 3.0;
      }
      break;

     case 4:
      /* Pending */
      TarPosInfo[0] = *x_inStartTPoint;
      TarPosInfo[1] = 0.0;
      if ((PTurnTrigFlg < 1.0) && (EnterZoneFlg > 0.5)) {
        *TrunTrigFlg = 1.0;
        PTurnTrigFlg = 1.0;
        CurState = 2.0;
        for (ixstart = 0; ixstart < 6; ixstart++) {
          PInfo_Me[ixstart] = Info_Me[ixstart];
        }

        *CurActiveModel = 2.0;
        TarPosInfo[0] = *x_outEndTPoint;
        TarPosInfo[1] = *y_outEndTPoint;
      } else {
        *CurActiveModel = 1.0;
      }
      break;
    }
  } else {
    *PathFinishFlg = 1.0;
    PTrigFlg = 0.0;
    *PathPlanningSuccessFlg = 0.0;
  }

  RoadInfoPGCd[0] = PInfo_Me[0];
  RoadInfoPGCd[2] = PInfo_Me[1];
  RoadInfoPGCd[4] = PInfo_Me[5];
  RoadInfoPGCd[6] = W_in;
  RoadInfoPGCd[1] = *x_outEndTPoint;
  RoadInfoPGCd[3] = *y_outEndTPoint;
  RoadInfoPGCd[5] = c_angle_out;
  RoadInfoPGCd[7] = W_out;
}

/*
 * File trailer for XinExtractFunc.c
 *
 * [EOF]
 */
