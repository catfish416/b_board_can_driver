/*
 * File: TransPathPlan.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "TransPathPlan.h"

/* Variable Definitions */
static double b_PV_tar;

/* Function Definitions */

/*
 * Arguments    : double CurActiveModel
 *                const double TarPosInfo[2]
 *                const double Info_Me[6]
 *                double StopReqFlg
 *                double V_tarOut
 *                double c_angle_out
 *                double *xposition
 *                double *yposition
 *                double *Ax
 *                double *Ay
 *                double *Vx
 *                double *Vy
 *                double *Theta
 *                double *xpositionNex
 *                double *ypositionNex
 *                double *Time2Cal
 * Return Type  : void
 */
void TransPathPlan(double CurActiveModel, const double TarPosInfo[2], const
                   double Info_Me[6], double StopReqFlg, double V_tarOut, double
                   c_angle_out, double *xposition, double *yposition, double *Ax,
                   double *Ay, double *Vx, double *Vy, double *Theta, double
                   *xpositionNex, double *ypositionNex, double *Time2Cal)
{
  double Time2Acc;
  double Arclen;
  if (fabs(CurActiveModel - 1.0) < 0.1) {
    /*          TarPosInfo = [x_inStartTPoint,y_inStartTPoint];         */
    /*      aTrans = 3; */
    Time2Acc = Info_Me[0] - TarPosInfo[0];
    Arclen = Info_Me[1] - TarPosInfo[1];
    Time2Acc = sqrt(Time2Acc * Time2Acc + Arclen * Arclen) + 0.0001;
    if (!(Info_Me[0] <= TarPosInfo[0])) {
      /* Stop Right Now         */
      Time2Acc = 0.1;
    }

    /*      if (Info_Me(3)^2/2/TarPos) < (aTrans - 1) */
    /*          Time2Acc = sqrt((Info_Me(3)^2 + 2*aTrans*TarPos)/2 - Info_Me(3))/aTrans; */
    /*  %         Time2Cal = min([Time2Acc,PreViewTime]); */
    /*          Time2Cal = PreViewTime; */
    /*          if Time2Cal > Time2Acc */
    /*              Vx = Info_Me(3) + aTrans * Time2Acc - aTrans * (Time2Cal - Time2Acc); */
    /*              Arclen = Info_Me(3) * Time2Acc + aTrans * Time2Acc^2 / 2; */
    /*              Arclen = Arclen + (Info_Me(3) + aTrans * Time2Acc) * (Time2Cal - Time2Acc) - aTrans * (Time2Cal - Time2Acc)^2 / 2; */
    /*              Ax = -aTrans; */
    /*          else */
    /*              Vx = Info_Me(3) + aTrans * Time2Cal; */
    /*              Arclen = Info_Me(3) * Time2Cal + aTrans * Time2Cal^2 / 2; */
    /*  %                     Arclen = Info_Me(3) * Time2Cal + aTrans * Time2Cal^2 / 2;    */
    /*              Ax = aTrans; */
    /*          end         */
    /*          if Time2Nex > Time2Acc */
    /*              ArclenNex = Info_Me(3) * Time2Acc + aTrans * Time2Acc^2 / 2; */
    /*              ArclenNex = ArclenNex + (Info_Me(3) + aTrans * Time2Acc) * (Time2Nex - Time2Acc) - aTrans * (Time2Nex - Time2Acc)^2 / 2; */
    /*          else */
    /*              ArclenNex = Info_Me(3) * Time2Nex + aTrans * Time2Nex^2 / 2; */
    /*          end */
    /*          xpositionNex = Info_Me(1) + ArclenNex * cos(Info_Me(6)); */
    /*          ypositionNex = Info_Me(2) + ArclenNex * sin(Info_Me(6));           */
    /*          xposition = Info_Me(1) + Arclen * cos(Info_Me(6)); */
    /*          yposition = Info_Me(2) + Arclen * sin(Info_Me(6));   */
    /*          Vy = 0; */
    /*          Ay = 0; */
    /*          Theta = Info_Me(6); */
    /*      else */
    /*  Stop infront of landMark    */
    if (Info_Me[2] < 0.1) {
      Time2Acc = 0.0;
      Arclen = 0.0;
      *Ax = -0.5;
    } else {
      *Ax = -(Info_Me[2] * Info_Me[2]) / 2.0 / Time2Acc;
      if (*Ax < -1.0) {
        *Ax = -1.0;
      } else {
        if (*Ax > -0.3) {
          *Ax = -0.4;
        }
      }

      if (fabs(*Ax) > 0.1) {
        Time2Acc = fabs(Info_Me[2] / *Ax);
      } else {
        Time2Acc = 255.0;
      }

      /*              Time2Cal = min([Time2Stop,PreViewTime]); */
      if (1.0 > Time2Acc) {
        Arclen = Info_Me[2] * Time2Acc + *Ax * (Time2Acc * Time2Acc) / 2.0;
      } else {
        Arclen = Info_Me[2] + *Ax / 2.0;
      }

      if (Arclen < 0.0) {
        Arclen = 0.0;
      }

      Time2Acc = Info_Me[2] * 0.01 + *Ax * 0.0001 / 2.0;
    }

    *Vx = Info_Me[2] + *Ax;
    if (*Vx < 0.0) {
      *Vx = 0.0;
    }

    *xposition = Info_Me[0] + Arclen * cos(Info_Me[5]);
    *yposition = Info_Me[1] + Arclen * sin(Info_Me[5]);
    *xpositionNex = Info_Me[0] + Time2Acc * cos(Info_Me[5]);
    *ypositionNex = Info_Me[1] + Time2Acc * sin(Info_Me[5]);

    /*      end */
    if (StopReqFlg < 0.5) {
      /* Not stop ,just to lower speed */
      /* V_tar */
      if (Info_Me[2] > 2.3611111111111112) {
        Time2Acc = fabs(-Info_Me[2] + 2.3611111111111112);
        if (-Info_Me[2] + 2.3611111111111112 < 0.0) {
          *Ax = -1.0;
        } else if (-Info_Me[2] + 2.3611111111111112 == 0.0) {
          *Ax = 0.0;
        } else {
          *Ax = -Info_Me[2] + 2.3611111111111112;
        }

        if (1.0 < Time2Acc) {
          Arclen = Info_Me[2] + *Ax / 2.0;
          *Vx = Info_Me[2] + *Ax;
        } else {
          Arclen = (Info_Me[2] * Time2Acc + *Ax * (Time2Acc * Time2Acc) / 2.0) +
            2.3611111111111112 * (1.0 - Time2Acc);
          *Vx = 2.3611111111111112;
        }

        if (0.01 < Time2Acc) {
          Time2Acc = Info_Me[2] * 0.01 + *Ax * 0.0001 / 2.0;
        } else {
          Time2Acc = (Info_Me[2] * Time2Acc + *Ax * (Time2Acc * Time2Acc) / 2.0)
            + 2.3611111111111112 * (0.01 - Time2Acc);
        }

        *xposition = Info_Me[0] + Arclen * cos(Info_Me[5]);
        *yposition = Info_Me[1] + Arclen * sin(Info_Me[5]);
        *xpositionNex = Info_Me[0] + Time2Acc * cos(Info_Me[5]);
        *ypositionNex = Info_Me[1] + Time2Acc * sin(Info_Me[5]);
      } else {
        *Vx = Info_Me[2];
        *Ax = 0.0;
        Time2Acc = Info_Me[2] * 0.01;
        *xposition = Info_Me[0] + Info_Me[2] * cos(Info_Me[5]);
        *yposition = Info_Me[1] + Info_Me[2] * sin(Info_Me[5]);
        *xpositionNex = Info_Me[0] + Time2Acc * cos(Info_Me[5]);
        *ypositionNex = Info_Me[1] + Time2Acc * sin(Info_Me[5]);
      }
    }

    *Ay = 0.0;
    *Vy = 0.0;
    *Theta = Info_Me[5];
    *Time2Cal = 1.0;
    b_PV_tar = 2.3611111111111112;
  } else if (fabs(CurActiveModel - 3.0) < 0.1) {
    /*          TarPosInfo = [x_outEndTPoint,y_outEndTPoint]; */
    /*      aTrans = 3; */
    Time2Acc = Info_Me[0] - TarPosInfo[0];
    Arclen = Info_Me[1] - TarPosInfo[1];

    /*      if abs(abs(Info_Me(3)) - V_tar)<1e-1 */
    if (Info_Me[2] - b_PV_tar >= 0.0) {
      *Ax = 0.0;
      Time2Acc = 0.0;
    } else {
      *Ax = (b_PV_tar * b_PV_tar - Info_Me[2] * Info_Me[2]) / 2.0 / (sqrt
        (Time2Acc * Time2Acc + Arclen * Arclen) + 0.0001);
      if (*Ax > 1.0) {
        *Ax = 1.0;
      }

      /*          Time2Acc = 2*TarPos/(Info_Me(3) + V_tar); */
      Time2Acc = fabs(Info_Me[2] - b_PV_tar) / (*Ax + 0.001);
    }

    /*      Time2Cal = min([Time2Acc,PreViewTime]); */
    if (1.0 > Time2Acc) {
      *Vx = b_PV_tar;
      Arclen = (Info_Me[2] * Time2Acc + *Ax * (Time2Acc * Time2Acc) / 2.0) +
        b_PV_tar * (1.0 - Time2Acc);
    } else {
      *Vx = Info_Me[2] + *Ax;
      Arclen = Info_Me[2] + *Ax / 2.0;
    }

    if (0.01 > Time2Acc) {
      Time2Acc = (Info_Me[2] * Time2Acc + *Ax * (Time2Acc * Time2Acc) / 2.0) +
        b_PV_tar * (0.01 - Time2Acc);
    } else {
      Time2Acc = Info_Me[2] * 0.01 + *Ax * 0.0001 / 2.0;
    }

    /*       */
    /*              if Time2Cal > Time2Acc */
    /*              Vx = Info_Me(3) + aTrans * Time2Acc - aTrans * (Time2Cal - Time2Acc); */
    /*              Arclen = Info_Me(3) * Time2Acc + aTrans * Time2Acc^2 / 2; */
    /*              Arclen = Arclen + (Info_Me(3) + aTrans * Time2Acc) * (Time2Cal - Time2Acc) - aTrans * (Time2Cal - Time2Acc)^2 / 2; */
    /*              Ax = -aTrans; */
    /*          else */
    /*              Vx = Info_Me(3) + aTrans * Time2Cal; */
    /*              Arclen = Info_Me(3) * Time2Cal + aTrans * Time2Cal^2 / 2; */
    /*  %                     Arclen = Info_Me(3) * Time2Cal + aTrans * Time2Cal^2 / 2;    */
    /*              Ax = aTrans; */
    /*          end */
    *xposition = Info_Me[0] + Arclen * cos(c_angle_out);
    *yposition = Info_Me[1] + Arclen * sin(c_angle_out);
    *xpositionNex = Info_Me[0] + Time2Acc * cos(c_angle_out);
    *ypositionNex = Info_Me[1] + Time2Acc * sin(c_angle_out);
    *Ay = 0.0;
    *Vy = 0.0;
    *Theta = c_angle_out;
    *Time2Cal = 1.0;
  } else {
    *xposition = 0.0;
    *yposition = 0.0;
    *xpositionNex = 0.0;
    *ypositionNex = 0.0;
    *Ax = 0.0;
    *Ay = 0.0;
    *Vx = 0.0;
    *Vy = 0.0;
    *Theta = 0.0;
    *Time2Cal = 1.0;
    b_PV_tar = V_tarOut;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void TransPathPlan_init(void)
{
  b_PV_tar = 0.0;
}

/*
 * File trailer for TransPathPlan.c
 *
 * [EOF]
 */
