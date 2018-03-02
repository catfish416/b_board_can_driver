/*
 * File: PathCreatorLC.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "PathCreatorLC.h"
#include "abs.h"
#include "norm.h"
#include "pinv.h"
#include "mldivide.h"
#include "diag.h"
#include "eye.h"
#include "DebugMain_data.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T_15x15
#define struct_emxArray_real_T_15x15

struct emxArray_real_T_15x15
{
  double data[225];
  int size[2];
};

#endif                                 /*struct_emxArray_real_T_15x15*/

#ifndef typedef_emxArray_real_T_15x15
#define typedef_emxArray_real_T_15x15

typedef struct emxArray_real_T_15x15 emxArray_real_T_15x15;

#endif                                 /*typedef_emxArray_real_T_15x15*/

/* Variable Definitions */
static double TrigCnt;
static boolean_T TrigCnt_not_empty;
static double FinishFlg;
static boolean_T FinishFlg_not_empty;
static double b_Pxoptres[3];
static double b_PPlanRes;
static double b_PKurMax;
static double b_FinishFlg;
static double Pdk[3];
static double PLamda[15];
static double Px1[3];
static boolean_T Px1_not_empty;
static double PCostGTemp[3];
static double PConGTemp[45];
static double RunCnt;
static double PHk[9];
static double PBk[9];
static double PCurStep;
static double PCostG[3];
static double PConG[45];
static emxArray_real_T_15x15 PHx;
static boolean_T PHx_not_empty;
static double PPfunc;
static double b_InitFlg;

/* Function Declarations */
static void ArcPosCal(double c_angle_out, double c_angle_in, double c_x_in,
                      double c_y_in, double c_x_out, double c_y_out, const
                      double Ycal[4], const double Xcal[4], double xposition[4],
                      double Theta[4], double ArcPos[4]);
static void GradientCal(const double Xin[3], const double LB[3], const double
  UB[3], double CostG[3], double ConG[45], double *Costx, double Hx[15]);
static void LaneChgFlPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionFl, double *ypositionFl, double *Theta);
static void LaneChgFrPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionFr, double *ypositionFr, double *Theta);
static void LaneChgNonLinearCon(const double Xin[3], double C[15]);
static void LaneChgRlPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionRl, double *ypositionRl, double *Theta);
static void LaneChgRrPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionRr, double *ypositionRr, double *Theta);
static double MSSFdJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_lat, double c_T_adj);
static double MSSFoJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_adj);
static double MSSLoJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_adj);
static void SQPCal(double x0[3], const double UB[3], double *Res, double *Sts,
                   double *IterGoldenStep, double *IterQpStep);
static double TcCalation(double ArcPos, double S_acc, double V_tar, double
  c_V_me, double A);
static void b_ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *c_Delta, double
  *c_k_localmax, double *c_Arclength);
static void b_ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
  double c_angle_out, double c_angle_in, double c_x_in, double c_y_in, double
  c_x_out, double c_y_out, double *xposition, double *yposition, double *Theta);
static double b_Pfunc(const double Xin[3], const double LB[3], const double UB[3]);
static void goldenSearch(const double x0[3], const double direction[3], double
  lo, double hi, const double LB[3], const double UB[3], double Accurcy, double *
  bestStep, double *goldenn);
static void qiConfigCal(double c_x_in, double c_y_in, double c_angle_in, double
  c_x_out, double c_y_out, double c_angle_out, double *x_qi, double *y_qi,
  double *theta_qi);
static double qpfunc(const double c_H[9], const double c[3], const double A[45],
                     const double b_data[], const int b_size[2], double x1[3],
                     double b_y1[15], double w1[15]);

/* Function Definitions */

/*
 * UNTITLED2 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                const double Ycal[4]
 *                const double Xcal[4]
 *                double xposition[4]
 *                double Theta[4]
 *                double ArcPos[4]
 * Return Type  : void
 */
static void ArcPosCal(double c_angle_out, double c_angle_in, double c_x_in,
                      double c_y_in, double c_x_out, double c_y_out, const
                      double Ycal[4], const double Xcal[4], double xposition[4],
                      double Theta[4], double ArcPos[4])
{
  double xTemp;
  double x1;
  double ArcEnd;
  double temp1;
  double temp2;
  double xpositionRlStart;
  double funx0;
  double x2;
  double ypositionRlEnd;
  double ThetaRlEnd;
  double d0;
  double d1;
  double d2;
  double d3;
  double d4;
  int Secantn;
  double d5;
  double d6;
  int exitg4;
  double d7;
  int exitg3;
  int exitg2;
  double d8;
  double funx1;
  double d9;
  int exitg1;
  double d10;
  double xpositionTemp;
  double ThetaRTemp;
  double d11;
  double d12;
  double d13;
  double d14;
  double d15;

  /*      global x_qitemp y_qitemp theta_qitemp k_localmaxTemp DeltaTemp */
  xTemp = 0.8 * ArclengthTol[0];
  x1 = 1.1 * ArclengthTol[0];
  ArcEnd = ArclengthTol[0] + ArclengthTol[1];

  /*  end */
  /*  Fd-Rl Fo-Rr Ld-Fl Lo-Fr */
  temp1 = xTemp;
  temp2 = x1;

  /*  Do a check, whether this function has a res */
  /*  TBD change 4 */
  /*      x0 = x2; */
  /*           */
  if (fabs(V[0]) < 100.0) {
    LaneChgRlPosCal2(0.0, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &xpositionRlStart, &funx0, &x2);
    LaneChgRlPosCal2(ArcEnd, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &x2, &ypositionRlEnd, &ThetaRlEnd);
    if (fabs(sin(c_angle_out)) > 0.98) {
      d0 = Ycal[0];
    } else {
      d0 = tan(c_angle_out) * (xpositionRlStart - Xcal[0]) + Ycal[0];
    }

    if (ypositionRlEnd < d0) {
      ArcPos[0] = 255.0;
      xposition[0] = 255.0;
      Theta[0] = 255.0;
    } else {
      if (fabs(sin(c_angle_out)) > 0.98) {
        d1 = Ycal[0];
      } else {
        d1 = tan(c_angle_out) * (x2 - Xcal[0]) + Ycal[0];
      }

      if (funx0 > d1) {
        ArcPos[0] = 0.0;
        xposition[0] = 0.0;
        Theta[0] = 0.0;
      } else {
        /*          [xpositionRl1,ypositionRl1,ThetaRl1] = LaneChgRlPosCal2( x1,angle_out,angle_in,x_in,y_in,x_out,y_out ); */
        /*          funx1 = ypositionRl1 -  Ycal(1); */
        /*          [xpositionRl0,ypositionRl0,ThetaRl0] = LaneChgRlPosCal2( x0,angle_out,angle_in,x_in,y_in,x_out,y_out ); */
        /*          funx0 = ypositionRl0 - Ycal(1); */
        /*          x2 = x1-funx1*(x1-x0)/(funx1-funx0); */
        /* x2 = x1-fun(x1)*(x1-x0)/(fun(x1)-fun(x0));    n = 1; */
        Secantn = 0;
        do {
          exitg4 = 0;

          /*  */
          /*              x0=x1;                                       %x1x0 */
          /*              x1=x2;                                       %x2x1 */
          /* x2=x1-fun(x1)*(x1-x0)/(fun(x1)-fun(x0));     % */
          LaneChgRlPosCal2(x1, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                           c_y_out, &ThetaRlEnd, &ypositionRlEnd,
                           &xpositionRlStart);
          if (fabs(sin(c_angle_out)) > 0.98) {
            d8 = Ycal[0];
          } else {
            d8 = tan(c_angle_out) * (ThetaRlEnd - Xcal[0]) + Ycal[0];
          }

          funx1 = ypositionRlEnd - d8;
          if ((funx1 < 0.1) && (funx1 > -0.1)) {
            xTemp = x1;
            xpositionTemp = ThetaRlEnd;
            ThetaRTemp = xpositionRlStart;
            exitg4 = 1;
          } else {
            LaneChgRlPosCal2(xTemp, c_angle_out, c_angle_in, c_x_in, c_y_in,
                             c_x_out, c_y_out, &xpositionTemp, &x2, &ThetaRTemp);
            if (fabs(sin(c_angle_out)) > 0.98) {
              d11 = Ycal[0];
            } else {
              d11 = tan(c_angle_out) * (xpositionTemp - Xcal[0]) + Ycal[0];
            }

            funx0 = x2 - d11;
            if ((funx0 < 0.1) && (funx0 > -0.1)) {
              exitg4 = 1;
            } else if (fabs(funx1 - funx0) > 0.1) {
              x2 = x1 - funx1 * (x1 - xTemp) / (funx1 - funx0);
              xTemp = x1;

              /* x1x0 */
              x1 = x2;

              /* x2x1 */
              if ((fabs(x2 - xTemp) >= 0.1) && (Secantn <= 20)) {
                Secantn++;
              } else {
                xTemp = (xTemp + x2) / 2.0;
                xpositionTemp = (xpositionTemp + ThetaRlEnd) / 2.0;
                ThetaRTemp = (ThetaRTemp + xpositionRlStart) / 2.0;
                exitg4 = 1;
              }
            } else {
              xTemp = (xTemp + x1) / 2.0;
              xpositionTemp = (xpositionTemp + ThetaRlEnd) / 2.0;
              ThetaRTemp = (ThetaRTemp + xpositionRlStart) / 2.0;
              exitg4 = 1;
            }
          }
        } while (exitg4 == 0);

        ArcPos[0] = xTemp;
        xposition[0] = xpositionTemp;
        Theta[0] = ThetaRTemp;
      }
    }
  } else {
    ArcPos[0] = -255.0;
    xposition[0] = -255.0;
    Theta[0] = -255.0;
  }

  if (fabs(V[1]) < 100.0) {
    /*  Do a check, whether this function has a res */
    /*  TBD change 4 */
    /*      x0 = x2; */
    LaneChgRrPosCal2(0.0, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &xpositionRlStart, &funx0, &x2);
    LaneChgRrPosCal2(ArcEnd, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &x2, &ypositionRlEnd, &ThetaRlEnd);
    if (fabs(sin(c_angle_out)) > 0.98) {
      d2 = Ycal[1];
    } else {
      d2 = tan(c_angle_out) * (xpositionRlStart - Xcal[1]) + Ycal[1];
    }

    if (ypositionRlEnd < d2) {
      ArcPos[1] = 0.0;
      xposition[1] = 0.0;
      Theta[1] = 0.0;
    } else {
      if (fabs(sin(c_angle_out)) > 0.98) {
        d4 = Ycal[1];
      } else {
        d4 = tan(c_angle_out) * (x2 - Xcal[1]) + Ycal[1];
      }

      if (funx0 > d4) {
        ArcPos[1] = 255.0;
        xposition[1] = 255.0;
        Theta[1] = 255.0;
      } else {
        xTemp = temp1;
        x1 = temp2;
        Secantn = 0;
        do {
          exitg3 = 0;

          /*  */
          /*              x0=x1;                                       %x1x0 */
          /*              x1=x2;                                       %x2x1 */
          /* x2=x1-fun(x1)*(x1-x0)/(fun(x1)-fun(x0));     % */
          LaneChgRrPosCal2(x1, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                           c_y_out, &ypositionRlEnd, &x2, &ThetaRlEnd);
          if (fabs(sin(c_angle_out)) > 0.98) {
            d10 = Ycal[1];
          } else {
            d10 = tan(c_angle_out) * (ypositionRlEnd - Xcal[1]) + Ycal[1];
          }

          funx1 = x2 - d10;
          if ((funx1 < 0.1) && (funx1 > -0.1)) {
            xTemp = x1;
            xpositionTemp = ypositionRlEnd;
            ThetaRTemp = ThetaRlEnd;
            exitg3 = 1;
          } else {
            LaneChgRrPosCal2(xTemp, c_angle_out, c_angle_in, c_x_in, c_y_in,
                             c_x_out, c_y_out, &xpositionTemp, &x2, &ThetaRTemp);
            if (fabs(sin(c_angle_out)) > 0.98) {
              d14 = Ycal[1];
            } else {
              d14 = tan(c_angle_out) * (xpositionTemp - Xcal[1]) + Ycal[1];
            }

            funx0 = x2 - d14;
            if ((funx0 < 0.1) && (funx0 > -0.1)) {
              exitg3 = 1;
            } else if (fabs(funx1 - funx0) > 0.1) {
              x2 = x1 - funx1 * (x1 - xTemp) / (funx1 - funx0);
              xTemp = x1;

              /* x1x0 */
              x1 = x2;

              /* x2x1 */
              if ((fabs(x2 - xTemp) >= 0.1) && (Secantn <= 20)) {
                Secantn++;
              } else {
                xTemp = (xTemp + x2) / 2.0;
                xpositionTemp = (ypositionRlEnd + xpositionTemp) / 2.0;
                ThetaRTemp = (ThetaRTemp + ThetaRlEnd) / 2.0;
                exitg3 = 1;
              }
            } else {
              xTemp = (xTemp + x1) / 2.0;
              xpositionTemp = (ypositionRlEnd + xpositionTemp) / 2.0;
              ThetaRTemp = (ThetaRTemp + ThetaRlEnd) / 2.0;
              exitg3 = 1;
            }
          }
        } while (exitg3 == 0);

        ArcPos[1] = xTemp;
        xposition[1] = xpositionTemp;
        Theta[1] = ThetaRTemp;
      }
    }
  } else {
    ArcPos[1] = -255.0;
    xposition[1] = -255.0;
    Theta[1] = -255.0;
  }

  if (fabs(V[2]) < 100.0) {
    /*  Do a simple check, whether this function has a res */
    LaneChgFlPosCal2(ArcEnd, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &ThetaRlEnd, &xpositionRlStart, &x2);
    LaneChgFlPosCal2(0.0, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &funx0, &x2, &ypositionRlEnd);
    if (fabs(sin(c_angle_out)) > 0.98) {
      d3 = Ycal[2];
    } else {
      d3 = tan(c_angle_out) * (funx0 - Xcal[2]) + Ycal[2];
    }

    if (xpositionRlStart < d3) {
      ArcPos[2] = 255.0;
      xposition[2] = 255.0;
      Theta[2] = 255.0;
    } else {
      if (fabs(sin(c_angle_out)) > 0.98) {
        d6 = Ycal[2];
      } else {
        d6 = tan(c_angle_out) * (ThetaRlEnd - Xcal[2]) + Ycal[2];
      }

      if (x2 > d6) {
        ArcPos[2] = 0.0;
        xposition[2] = 0.0;
        Theta[2] = 0.0;
      } else {
        xTemp = temp1;
        x1 = temp2;
        Secantn = 0;
        do {
          exitg2 = 0;
          LaneChgFlPosCal2(x1, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                           c_y_out, &ypositionRlEnd, &x2, &ThetaRlEnd);
          if (fabs(sin(c_angle_out)) > 0.98) {
            d9 = Ycal[2];
          } else {
            d9 = tan(c_angle_out) * (ypositionRlEnd - Xcal[2]) + Ycal[2];
          }

          funx1 = x2 - d9;
          if ((funx1 < 0.1) && (funx1 > -0.1)) {
            xTemp = x1;
            xpositionTemp = ypositionRlEnd;
            ThetaRTemp = ThetaRlEnd;
            exitg2 = 1;
          } else {
            LaneChgFlPosCal2(xTemp, c_angle_out, c_angle_in, c_x_in, c_y_in,
                             c_x_out, c_y_out, &xpositionTemp, &x2, &ThetaRTemp);
            if (fabs(sin(c_angle_out)) > 0.98) {
              d13 = Ycal[2];
            } else {
              d13 = tan(c_angle_out) * (xpositionTemp - Xcal[2]) + Ycal[2];
            }

            funx0 = x2 - d13;
            if ((funx0 < 0.1) && (funx0 > -0.1)) {
              exitg2 = 1;
            } else if (fabs(funx1 - funx0) > 0.1) {
              x2 = x1 - funx1 * (x1 - xTemp) / (funx1 - funx0);
              xTemp = x1;

              /* x1x0 */
              x1 = x2;

              /* x2x1 */
              if ((fabs(x2 - xTemp) >= 0.1) && (Secantn <= 20)) {
                Secantn++;
              } else {
                xTemp = (xTemp + x2) / 2.0;
                xpositionTemp = (ypositionRlEnd + xpositionTemp) / 2.0;
                ThetaRTemp = (ThetaRlEnd + ThetaRTemp) / 2.0;
                exitg2 = 1;
              }
            } else {
              xTemp = (xTemp + x1) / 2.0;
              xpositionTemp = (ypositionRlEnd + xpositionTemp) / 2.0;
              ThetaRTemp = (ThetaRlEnd + ThetaRTemp) / 2.0;
              exitg2 = 1;
            }
          }
        } while (exitg2 == 0);

        ArcPos[2] = xTemp;
        xposition[2] = xpositionTemp;
        Theta[2] = ThetaRTemp;
      }
    }
  } else {
    ArcPos[2] = -255.0;
    xposition[2] = -255.0;
    Theta[2] = -255.0;
  }

  if (fabs(V[3]) < 100.0) {
    LaneChgFrPosCal2(ArcEnd, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &ThetaRlEnd, &xpositionRlStart, &x2);
    LaneChgFrPosCal2(0.0, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                     c_y_out, &funx0, &x2, &ypositionRlEnd);
    if (fabs(sin(c_angle_out)) > 0.98) {
      d5 = Ycal[3];
    } else {
      d5 = tan(c_angle_out) * (funx0 - Xcal[3]) + Ycal[3];
    }

    if (xpositionRlStart < d5) {
      ArcPos[3] = 0.0;
      xposition[3] = 0.0;
      Theta[3] = 0.0;
    } else {
      if (fabs(sin(c_angle_out)) > 0.98) {
        d7 = Ycal[3];
      } else {
        d7 = tan(c_angle_out) * (ThetaRlEnd - Xcal[3]) + Ycal[3];
      }

      if (x2 > d7) {
        ArcPos[3] = 255.0;
        xposition[3] = 255.0;
        Theta[3] = 255.0;
      } else {
        xTemp = temp1;
        x1 = temp2;
        Secantn = 0;
        do {
          exitg1 = 0;
          LaneChgFrPosCal2(x1, c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                           c_y_out, &ypositionRlEnd, &x2, &ThetaRlEnd);
          if (fabs(sin(c_angle_out)) > 0.98) {
            d12 = Ycal[3];
          } else {
            d12 = tan(c_angle_out) * (ypositionRlEnd - Xcal[3]) + Ycal[3];
          }

          funx1 = x2 - d12;
          if ((funx1 < 0.1) && (funx1 > -0.1)) {
            xTemp = x1;
            xpositionTemp = ypositionRlEnd;
            ThetaRTemp = ThetaRlEnd;
            exitg1 = 1;
          } else {
            LaneChgFrPosCal2(xTemp, c_angle_out, c_angle_in, c_x_in, c_y_in,
                             c_x_out, c_y_out, &xpositionTemp, &x2, &ThetaRTemp);
            if (fabs(sin(c_angle_out)) > 0.98) {
              d15 = Ycal[3];
            } else {
              d15 = tan(c_angle_out) * (xpositionTemp - Xcal[3]) + Ycal[3];
            }

            funx0 = x2 - d15;
            if ((funx0 < 0.1) && (funx0 > -0.1)) {
              exitg1 = 1;
            } else if (fabs(funx1 - funx0) > 0.05) {
              x2 = x1 - funx1 * (x1 - xTemp) / (funx1 - funx0);
              xTemp = x1;

              /* x1x0 */
              x1 = x2;

              /* x2x1 */
              if ((fabs(x2 - xTemp) >= 0.1) && (Secantn <= 20)) {
                Secantn++;
              } else {
                xTemp = (xTemp + x2) / 2.0;
                xpositionTemp = (xpositionTemp + ypositionRlEnd) / 2.0;
                ThetaRTemp = (ThetaRlEnd + ThetaRTemp) / 2.0;
                exitg1 = 1;
              }
            } else {
              xTemp = (xTemp + x1) / 2.0;
              xpositionTemp = (xpositionTemp + ypositionRlEnd) / 2.0;
              ThetaRTemp = (ThetaRlEnd + ThetaRTemp) / 2.0;
              exitg1 = 1;
            }
          }
        } while (exitg1 == 0);

        ArcPos[3] = xTemp;
        xposition[3] = xpositionTemp;
        Theta[3] = ThetaRTemp;
      }
    }
  } else {
    ArcPos[3] = -255.0;
    xposition[3] = -255.0;
    Theta[3] = -255.0;
  }
}

/*
 * Arguments    : const double Xin[3]
 *                const double LB[3]
 *                const double UB[3]
 *                double CostG[3]
 *                double ConG[45]
 *                double *Costx
 *                double Hx[15]
 * Return Type  : void
 */
static void GradientCal(const double Xin[3], const double LB[3], const double
  UB[3], double CostG[3], double ConG[45], double *Costx, double Hx[15])
{
  double Xin_x[3];
  double Xin_y[3];
  double Xin_z[3];
  int i;
  static const double dv6[3] = { 0.1, 0.0, 0.0 };

  static const double dv7[3] = { 0.0, 0.1, 0.0 };

  static const double dv8[3] = { 0.0, 0.0, 0.1 };

  double C[15];
  for (i = 0; i < 3; i++) {
    Xin_x[i] = Xin[i] + dv6[i];
    Xin_y[i] = Xin[i] + dv7[i];
    Xin_z[i] = Xin[i] + dv8[i];
  }

  CostG[0] = (-Xin_x[2] - (-Xin[2])) / 0.1;

  /* x */
  CostG[1] = (-Xin_y[2] - (-Xin[2])) / 0.1;

  /* y */
  CostG[2] = (-Xin_z[2] - (-Xin[2])) / 0.1;

  /* z */
  LaneChgNonLinearCon(Xin, Hx);
  for (i = 0; i < 3; i++) {
    Hx[i + 9] = Xin[i] - UB[i];
    Hx[i + 12] = LB[i] - Xin[i];
  }

  for (i = 0; i < 15; i++) {
    Hx[i] = -Hx[i];
  }

  LaneChgNonLinearCon(Xin_x, C);
  for (i = 0; i < 3; i++) {
    C[i + 9] = Xin_x[i] - UB[i];
    C[i + 12] = LB[i] - Xin_x[i];
  }

  for (i = 0; i < 15; i++) {
    ConG[3 * i] = (-C[i] - Hx[i]) / 0.1;
  }

  /* x */
  LaneChgNonLinearCon(Xin_y, C);
  for (i = 0; i < 3; i++) {
    C[i + 9] = Xin_y[i] - UB[i];
    C[i + 12] = LB[i] - Xin_y[i];
  }

  for (i = 0; i < 15; i++) {
    ConG[1 + 3 * i] = (-C[i] - Hx[i]) / 0.1;
  }

  /* y */
  LaneChgNonLinearCon(Xin_z, C);
  for (i = 0; i < 3; i++) {
    C[i + 9] = Xin_z[i] - UB[i];
    C[i + 12] = LB[i] - Xin_z[i];
  }

  for (i = 0; i < 15; i++) {
    ConG[2 + 3 * i] = (-C[i] - Hx[i]) / 0.1;
  }

  /* z */
  *Costx = -Xin[2];
}

/*
 * UNTITLED3 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double Arc
 *                double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double *xpositionFl
 *                double *ypositionFl
 *                double *Theta
 * Return Type  : void
 */
static void LaneChgFlPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionFl, double *ypositionFl, double *Theta)
{
  double xposition;
  double yposition;
  if (Arc <= 0.0) {
    xposition = Arc * cos(c_angle_in) + c_x_in;
    yposition = Arc * sin(c_angle_in) + c_y_in;
    *Theta = c_angle_in;
  } else if ((Arc <= ArclengthTol[0]) && (Arc > 0.0)) {
    b_ElementaryPosCal(Arc, DeltaTemp[0], ArclengthTol[0], theta_qitemp,
                       c_angle_in, c_x_in, c_y_in, x_qitemp, y_qitemp,
                       &xposition, &yposition, Theta);
  } else if ((Arc > ArclengthTol[0]) && (Arc <= ArclengthTol[0] + ArclengthTol[1]))
  {
    Arc -= ArclengthTol[0];
    b_ElementaryPosCal(Arc, DeltaTemp[1], ArclengthTol[1], c_angle_out,
                       theta_qitemp, x_qitemp, y_qitemp, c_x_out, c_y_out,
                       &xposition, &yposition, Theta);
  } else {
    xposition = Arc * cos(c_angle_out) + c_x_out;
    yposition = Arc * sin(c_angle_out) + c_y_out;
    *Theta = c_angle_out;
  }

  *xpositionFl = (xposition + L_me * cos(*Theta)) - W_me * sin(*Theta) / 2.0;
  *ypositionFl = (yposition + L_me * sin(*Theta)) + W_me * cos(*Theta) / 2.0;
}

/*
 * UNTITLED3 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double Arc
 *                double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double *xpositionFr
 *                double *ypositionFr
 *                double *Theta
 * Return Type  : void
 */
static void LaneChgFrPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionFr, double *ypositionFr, double *Theta)
{
  double xposition;
  double yposition;
  if (Arc <= 0.0) {
    xposition = Arc * cos(c_angle_in) + c_x_in;
    yposition = Arc * sin(c_angle_in) + c_y_in;
    *Theta = c_angle_in;
  } else if ((Arc <= ArclengthTol[0]) && (Arc > 0.0)) {
    b_ElementaryPosCal(Arc, DeltaTemp[0], ArclengthTol[0], theta_qitemp,
                       c_angle_in, c_x_in, c_y_in, x_qitemp, y_qitemp,
                       &xposition, &yposition, Theta);
  } else if ((Arc > ArclengthTol[0]) && (Arc <= ArclengthTol[0] + ArclengthTol[1]))
  {
    Arc -= ArclengthTol[0];
    b_ElementaryPosCal(Arc, DeltaTemp[1], ArclengthTol[1], c_angle_out,
                       theta_qitemp, x_qitemp, y_qitemp, c_x_out, c_y_out,
                       &xposition, &yposition, Theta);
  } else {
    xposition = Arc * cos(c_angle_out) + c_x_out;
    yposition = Arc * sin(c_angle_out) + c_y_out;
    *Theta = c_angle_out;
  }

  *xpositionFr = (xposition + L_me * cos(*Theta)) + W_me * sin(*Theta) / 2.0;
  *ypositionFr = (yposition + L_me * sin(*Theta)) - W_me * cos(*Theta) / 2.0;
}

/*
 * Arguments    : const double Xin[3]
 *                double C[15]
 * Return Type  : void
 */
static void LaneChgNonLinearCon(const double Xin[3], double C[15])
{
  double y_outLo;
  double a;
  double S_arc;
  double S_acc;
  double varargin_2[2];
  int ixstart;
  double mtmp;
  int ix;
  boolean_T exitg3;
  boolean_T exitg2;
  double AylimitC;
  boolean_T exitg1;
  double KmlimitC;
  double T_long;
  double c_T_lat;
  double AxlimitC;
  double Tc[4];
  double Theta[4];
  double ArcPos[4];

  /*  global T_lat Axlimit  */
  memset(&C[0], 0, 15U * sizeof(double));

  /* T_long=Xin(2); */
  /*  x_in = 0;y_in = 0;angle_in = 0;y_out = 3;angle_out = 0; */
  if (fabs(sin(angle_out)) > 0.98) {
    y_outLo = y_out;
  } else {
    y_outLo = tan(angle_out) * (Xin[0] - x_out) + y_out;
  }

  qiConfigCal(x_in, y_in, angle_in, Xin[0], y_outLo, angle_out, &x_qitemp,
              &y_qitemp, &theta_qitemp);

  /* [ x_qitemp,y_qitemp,theta_qitemp ] = qiConfigCal( x_in,y_in,angle_in,x_outLo,y_outLo,angle_out ); */
  b_ElementaryPathPlot(x_in, y_in, angle_in, x_qitemp, y_qitemp, theta_qitemp,
                       &a, &S_arc, &S_acc);
  DeltaTemp[0] = a;
  k_localmaxTemp[0] = S_arc;
  ArclengthTol[0] = S_acc;
  b_ElementaryPathPlot(x_qitemp, y_qitemp, theta_qitemp, Xin[0], y_outLo,
                       angle_out, &a, &S_arc, &S_acc);
  DeltaTemp[1] = a;
  k_localmaxTemp[1] = S_arc;
  ArclengthTol[1] = S_acc;
  b_abs(DeltaTemp, varargin_2);
  ixstart = 1;
  mtmp = varargin_2[0];
  if (rtIsNaN(varargin_2[0])) {
    ix = 2;
    exitg3 = false;
    while ((!exitg3) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(varargin_2[1])) {
        mtmp = varargin_2[1];
        exitg3 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (varargin_2[1] > mtmp)) {
    mtmp = varargin_2[1];
  }

  b_abs(k_localmaxTemp, varargin_2);
  ixstart = 1;
  a = varargin_2[0];
  if (rtIsNaN(varargin_2[0])) {
    ix = 2;
    exitg2 = false;
    while ((!exitg2) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(varargin_2[1])) {
        a = varargin_2[1];
        exitg2 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (varargin_2[1] > a)) {
    a = varargin_2[1];
  }

  AylimitC = a * (Xin[2] * Xin[2]) - Aylimit;
  b_abs(k_localmaxTemp, varargin_2);
  ixstart = 1;
  a = varargin_2[0];
  if (rtIsNaN(varargin_2[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 3)) {
      ixstart = 2;
      if (!rtIsNaN(varargin_2[1])) {
        a = varargin_2[1];
        exitg1 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (varargin_2[1] > a)) {
    a = varargin_2[1];
  }

  KmlimitC = a - k_maxlimit;
  S_arc = ArclengthTol[0] + ArclengthTol[1];
  if (Xin[2] == V_me) {
    c_T_lat = S_arc / V_me;
    T_long = 0.0;
    S_acc = 0.0;
    a = 0.0;
  } else {
    T_long = 2.0 * S_arc / (Xin[2] + V_me) * Xin[1];
    S_acc = (Xin[2] + V_me) / 2.0 * T_long;
    a = (Xin[2] - V_me) / (fabs(T_long) + 0.5);
    if (S_acc < S_arc) {
      c_T_lat = T_long + (S_arc - S_acc) / Xin[2];
    } else if (a == 0.0) {
      c_T_lat = S_arc / V_me;
    } else {
      c_T_lat = (sqrt(V_me * V_me + 2.0 * a * S_arc) - V_me) / a;
    }
  }

  AxlimitC = fabs(a) - Axlimit;

  /*  1 Fl 2 Rr */
  ArcPosCal(angle_out, angle_in, x_in, y_in, Xin[0], y_outLo, Y_cal, X, Tc,
            Theta, ArcPos);

  /* Fd */
  /*  if xposition(1)>0 */
  /*      Tc(1) = (xposition(1) - X(1))/(V(1)+1e-6); */
  /*  else */
  /*      Tc(1) = 0; */
  /*  end */
  /*  if xposition(2)>0 */
  /*      Tc(2) = (xposition(2) - X(2))/(V(2)+1e-6); */
  /*  else */
  /*      Tc(2) = T_lat; */
  /*  end */
  /*   */
  /*  if xposition(3)>0 */
  /*      Tc(3) = (-xposition(3) + X(3))/(V(3)+1e-6); */
  /*  else */
  /*      Tc(3) = 0; */
  /*  end */
  /*  if xposition(4)>0 */
  /*      Tc(4) = (-xposition(4) + X(4))/(V(4)+1e-6); */
  /*  else */
  /*      Tc(4) = T_lat; */
  /*  end */
  for (ixstart = 0; ixstart < 4; ixstart++) {
    if (fabs(ArcPos[ixstart]) < 255.0) {
      S_arc = TcCalation(ArcPos[ixstart], S_acc, Xin[2], V_me, a);
    } else {
      S_arc = 255.0;
    }

    if (S_arc < 0.0) {
      S_arc = c_T_lat;
    }

    Tc[ixstart] = S_arc;
  }

  /*  X_meTemp = X_me - 2 * (ArcPos(1)+ArcPos(2) - xposition(1) - xposition(2)); */
  y_outLo = (ArclengthTol[0] + ArclengthTol[0]) - Xin[0];

  /* MSSFdlimitC < 0 which means safemargin >0 */
  if (c_T_lat < T_long) {
    c_T_lat = T_long;
  }

  if (Tc[2] < 255.0) {
    /* UNTITLED5 Summary of this function goes here */
    /*    Detailed explanation goes here */
    if (fabs(V_me - Xin[2]) < 1.0E-5) {
      if (V_me > V[2]) {
        S_arc = (V_me - V[2]) * (c_T_lat + T_adj);
      } else {
        S_arc = (V_me - V[2]) * (T_adj + Tc[2]);
      }
    } else {
      a = (V[2] - V_me) / (Xin[2] - V_me) * T_long;
      if (Tc[2] < T_long) {
        if ((V[2] >= Xin[2]) && (Xin[2] > V_me)) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc[2] < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (Tc[2] * Tc[2]) - (V[2] -
              V_me) * Tc[2];
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * Tc[2];
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        } else if ((V[2] >= V_me) && (V_me > Xin[2])) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc[2] < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (Tc[2] * Tc[2]) - (V[2] -
              V_me) * Tc[2];
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * Tc[2];
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        } else if ((V_me >= V[2]) && (V[2] >= Xin[2])) {
          if (Tc[2] > a) {
            /* UNTITLED3 Summary of this function goes here */
            /*    Detailed explanation goes here */
            /* Time2Cal is the time to be calculated */
            /* V_tar is the target of mergeing vehicle */
            /* V_obj is the obstacle object of mergeing vehicle */
            /* ObjDirection is the direction of object */
            /* T_long is the time when longitual vel adjust ends */
            if (Tc[2] < T_long) {
              S_arc = (Xin[2] - V_me) / 2.0 / T_long * (Tc[2] * Tc[2]) - (V[2] -
                V_me) * Tc[2];
            } else {
              /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
              S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * Tc[2];
            }

            S_arc += 4.0;

            /* obj is Leading vehicle  */
          } else {
            /*  Tc < T_max */
            /* UNTITLED3 Summary of this function goes here */
            /*    Detailed explanation goes here */
            /* Time2Cal is the time to be calculated */
            /* V_tar is the target of mergeing vehicle */
            /* V_obj is the obstacle object of mergeing vehicle */
            /* ObjDirection is the direction of object */
            /* T_long is the time when longitual vel adjust ends */
            if (a < T_long) {
              S_arc = (Xin[2] - V_me) / 2.0 / T_long * (a * a) - (V[2] - V_me) *
                a;
            } else {
              /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
              S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * a;
            }

            S_arc += 4.0;

            /* obj is Leading vehicle  */
          }
        } else if ((V[2] <= Xin[2]) && (Xin[2] < V_me)) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V[2]
              - V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * c_T_lat;
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        } else if ((V[2] <= V_me) && (V_me < Xin[2])) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V[2]
              - V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * c_T_lat;
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        } else if ((V_me <= V[2]) && (V[2] <= Xin[2])) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V[2]
              - V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * c_T_lat;
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc[2] < T_long) {
            S_acc = (Xin[2] - V_me) / 2.0 / T_long * (Tc[2] * Tc[2]) - (V[2] -
              V_me) * Tc[2];
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_acc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * Tc[2];
          }

          S_acc += 4.0;

          /* obj is Leading vehicle  */
          if ((S_arc >= S_acc) || rtIsNaN(S_acc)) {
          } else {
            S_arc = S_acc;
          }
        } else {
          /* Nothing */
          S_arc = 255.0;
        }
      } else {
        /*  Tc > T_long */
        if (V[2] > Xin[2]) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc[2] < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (Tc[2] * Tc[2]) - (V[2] -
              V_me) * Tc[2];
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * Tc[2];
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        } else {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            S_arc = (Xin[2] - V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V[2]
              - V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            S_arc = (V_me - Xin[2]) / 2.0 * T_long + (Xin[2] - V[2]) * c_T_lat;
          }

          S_arc += 4.0;

          /* obj is Leading vehicle  */
        }
      }
    }

    S_acc = (S_arc + L_veh[2]) - X[2];
  } else {
    S_acc = -50.0;
  }

  C[0] = mtmp - 0.5;
  C[1] = KmlimitC;
  if (Tc[0] < 255.0) {
    C[2] = ((X[0] + y_outLo) + L_me) + MSSFdJudgment(Xin[2], V_me, V[0], T_long,
      Tc[0], c_T_lat, T_adj);
  } else {
    C[2] = -50.0;
  }

  if (Tc[1] < 255.0) {
    C[3] = ((X[1] + y_outLo) + L_me) + MSSFoJudgment(Xin[2], V_me, V[1], T_long,
      Tc[1], T_adj);
  } else {
    C[3] = -50.0;
  }

  C[4] = AxlimitC;
  C[5] = S_acc;
  if (Tc[3] < 255.0) {
    C[6] = (MSSLoJudgment(Xin[2], V_me, V[3], T_long, Tc[3], T_adj) + L_veh[3])
      - X[3];
  } else {
    C[6] = -50.0;
  }

  C[7] = Xin[0] - X_melimit;
  C[8] = AylimitC;
}

/*
 * UNTITLED3 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double Arc
 *                double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double *xpositionRl
 *                double *ypositionRl
 *                double *Theta
 * Return Type  : void
 */
static void LaneChgRlPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionRl, double *ypositionRl, double *Theta)
{
  double xposition;
  double yposition;
  if (Arc <= 0.0) {
    xposition = Arc * cos(c_angle_in) + c_x_in;
    yposition = Arc * sin(c_angle_in) + c_y_in;
    *Theta = c_angle_in;
  } else if ((Arc <= ArclengthTol[0]) && (Arc > 0.0)) {
    b_ElementaryPosCal(Arc, DeltaTemp[0], ArclengthTol[0], theta_qitemp,
                       c_angle_in, c_x_in, c_y_in, x_qitemp, y_qitemp,
                       &xposition, &yposition, Theta);
  } else if ((Arc > ArclengthTol[0]) && (Arc <= ArclengthTol[0] + ArclengthTol[1]))
  {
    Arc -= ArclengthTol[0];
    b_ElementaryPosCal(Arc, DeltaTemp[1], ArclengthTol[1], c_angle_out,
                       theta_qitemp, x_qitemp, y_qitemp, c_x_out, c_y_out,
                       &xposition, &yposition, Theta);
  } else {
    xposition = Arc * cos(c_angle_out) + c_x_out;
    yposition = Arc * sin(c_angle_out) + c_y_out;
    *Theta = c_angle_out;
  }

  *xpositionRl = xposition - W_me * sin(*Theta) / 2.0;
  *ypositionRl = yposition + W_me * cos(*Theta) / 2.0;
}

/*
 * UNTITLED3 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double Arc
 *                double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double *xpositionRr
 *                double *ypositionRr
 *                double *Theta
 * Return Type  : void
 */
static void LaneChgRrPosCal2(double Arc, double c_angle_out, double c_angle_in,
  double c_x_in, double c_y_in, double c_x_out, double c_y_out, double
  *xpositionRr, double *ypositionRr, double *Theta)
{
  double xposition;
  double yposition;
  if (Arc <= 0.0) {
    xposition = Arc * cos(c_angle_in) + c_x_in;
    yposition = Arc * sin(c_angle_in) + c_y_in;
    *Theta = c_angle_in;
  } else if ((Arc <= ArclengthTol[0]) && (Arc > 0.0)) {
    b_ElementaryPosCal(Arc, DeltaTemp[0], ArclengthTol[0], theta_qitemp,
                       c_angle_in, c_x_in, c_y_in, x_qitemp, y_qitemp,
                       &xposition, &yposition, Theta);
  } else if ((Arc > ArclengthTol[0]) && (Arc <= ArclengthTol[0] + ArclengthTol[1]))
  {
    Arc -= ArclengthTol[0];
    b_ElementaryPosCal(Arc, DeltaTemp[1], ArclengthTol[1], c_angle_out,
                       theta_qitemp, x_qitemp, y_qitemp, c_x_out, c_y_out,
                       &xposition, &yposition, Theta);
  } else {
    xposition = Arc * cos(c_angle_out) + c_x_out;
    yposition = Arc * sin(c_angle_out) + c_y_out;
    *Theta = c_angle_out;
  }

  *xpositionRr = xposition + W_me * sin(*Theta) / 2.0;
  *ypositionRr = yposition - W_me * cos(*Theta) / 2.0;
}

/*
 * UNTITLED5 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double V_tar
 *                double c_V_me
 *                double V_obj
 *                double T_long
 *                double Tc
 *                double c_T_lat
 *                double c_T_adj
 * Return Type  : double
 */
static double MSSFdJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_lat, double c_T_adj)
{
  double MSS;
  double T_max;
  double MSSTemp2;
  if (fabs(c_V_me - V_tar) < 1.0E-5) {
    if (c_V_me > V_obj) {
      MSS = (-c_V_me + V_obj) * (Tc + c_T_adj);
    } else {
      MSS = (-c_V_me + V_obj) * (c_T_adj + c_T_lat);
    }
  } else {
    T_max = (V_obj - c_V_me) / (V_tar - c_V_me) * T_long;
    if (Tc < T_long) {
      if ((V_obj >= V_tar) && (V_tar > c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (c_T_lat < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V_obj -
            c_V_me) * c_T_lat;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * c_T_lat;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((V_obj >= c_V_me) && (c_V_me > V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (c_T_lat < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V_obj -
            c_V_me) * c_T_lat;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * c_T_lat;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((c_V_me >= V_obj) && (V_obj >= V_tar)) {
        if (Tc > T_max) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V_obj
              - c_V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * c_T_lat;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        } else {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (c_T_lat < T_long) {
            T_max = (V_tar - c_V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) -
              (V_obj - c_V_me) * c_T_lat;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            T_max = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * c_T_lat;
          }

          T_max += 4.0;

          /* obj is Following vehicle */
          T_max = -T_max;

          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSSTemp2 = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj -
              c_V_me) * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSSTemp2 = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSSTemp2 += 4.0;

          /* obj is Following vehicle */
          MSSTemp2 = -MSSTemp2;
          if ((T_max >= MSSTemp2) || rtIsNaN(MSSTemp2)) {
            MSS = T_max;
          } else {
            MSS = MSSTemp2;
          }
        }
      } else if ((V_obj <= V_tar) && (V_tar < c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((V_obj <= c_V_me) && (c_V_me < V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((c_V_me <= V_obj) && (V_obj <= V_tar)) {
        if (Tc > T_max) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
              * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        } else {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (T_max < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (T_max * T_max) - (V_obj -
              c_V_me) * T_max;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * T_max;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        }
      } else {
        /* Nothing */
        MSS = 255.0;
      }
    } else {
      /*  Tc > T_long */
      if (V_tar > V_obj) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (c_T_lat < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (c_T_lat * c_T_lat) - (V_obj -
            c_V_me) * c_T_lat;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * c_T_lat;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      }
    }
  }

  return MSS;
}

/*
 * UNTITLED5 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double V_tar
 *                double c_V_me
 *                double V_obj
 *                double T_long
 *                double Tc
 *                double c_T_adj
 * Return Type  : double
 */
static double MSSFoJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_adj)
{
  double MSS;
  double T_max;
  if (fabs(c_V_me - V_tar) < 1.0E-5) {
    if (c_V_me > V_obj) {
      MSS = 0.0;
    } else {
      MSS = (-c_V_me + V_obj) * (c_T_adj + Tc);
    }
  } else {
    T_max = (V_obj - c_V_me) / (V_tar - c_V_me) * T_long;
    if (Tc < T_long) {
      if ((V_obj >= V_tar) && (V_tar > c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((V_obj >= c_V_me) && (c_V_me > V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((c_V_me >= V_obj) && (V_obj >= V_tar)) {
        if (Tc > 2.0 * T_max) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
              * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        } else {
          MSS = 0.0;
        }
      } else if ((V_obj <= V_tar) && (V_tar < c_V_me)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,0 ); */
        MSS = 0.0;
      } else if ((V_obj <= c_V_me) && (c_V_me < V_tar)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,0 ); */
        MSS = 0.0;
      } else if ((c_V_me <= V_obj) && (V_obj <= V_tar)) {
        if (Tc > T_max) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (T_max < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (T_max * T_max) - (V_obj -
              c_V_me) * T_max;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * T_max;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        } else {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
              * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSS += 4.0;

          /* obj is Following vehicle */
          MSS = -MSS;
        }
      } else {
        /* Nothing */
        MSS = 255.0;
      }
    } else {
      /*  Tc > T_long */
      if ((V_obj >= V_tar) && (V_tar > c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((V_obj >= c_V_me) && (c_V_me > V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else if ((c_V_me >= V_obj) && (V_obj >= V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          T_max = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
            * Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          T_max = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        T_max += 4.0;

        /* obj is Following vehicle */
        T_max = -T_max;
        if ((0.0 >= T_max) || rtIsNaN(T_max)) {
          MSS = 0.0;
        } else {
          MSS = T_max;
        }
      } else if ((V_obj <= V_tar) && (V_tar < c_V_me)) {
        MSS = 0.0;
      } else if ((V_obj <= c_V_me) && (c_V_me < V_tar)) {
        MSS = 0.0;
      } else if ((c_V_me <= V_obj) && (V_obj <= V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (T_max < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (T_max * T_max) - (V_obj -
            c_V_me) * T_max;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * T_max;
        }

        MSS += 4.0;

        /* obj is Following vehicle */
        MSS = -MSS;
      } else {
        /* Nothing */
        MSS = 255.0;
      }
    }
  }

  return MSS;
}

/*
 * UNTITLED5 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double V_tar
 *                double c_V_me
 *                double V_obj
 *                double T_long
 *                double Tc
 *                double c_T_adj
 * Return Type  : double
 */
static double MSSLoJudgment(double V_tar, double c_V_me, double V_obj, double
  T_long, double Tc, double c_T_adj)
{
  double MSS;
  double T_max;
  if (fabs(c_V_me - V_tar) < 1.0E-5) {
    if (c_V_me > V_obj) {
      MSS = (c_V_me - V_obj) * (Tc + c_T_adj);
    } else {
      MSS = 0.0;
    }
  } else {
    T_max = (V_obj - c_V_me) / (V_tar - c_V_me) * T_long;
    if (Tc < T_long) {
      if ((V_obj >= V_tar) && (V_tar > c_V_me)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,1 ); */
        MSS = 0.0;
      } else if ((V_obj >= c_V_me) && (c_V_me > V_tar)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,1 ); */
        MSS = 0.0;
      } else if ((c_V_me >= V_obj) && (V_obj >= V_tar)) {
        if (Tc > T_max) {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (T_max < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (T_max * T_max) - (V_obj -
              c_V_me) * T_max;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * T_max;
          }

          MSS += 4.0;

          /* obj is Leading vehicle  */
        } else {
          /*  Tc < T_max */
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
              * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSS += 4.0;

          /* obj is Leading vehicle  */
        }
      } else if ((V_obj <= V_tar) && (V_tar < c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Leading vehicle  */
      } else if ((V_obj <= c_V_me) && (c_V_me < V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Leading vehicle  */
      } else if ((c_V_me <= V_obj) && (V_obj <= V_tar)) {
        if (Tc < 2.0 * T_max) {
          /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,1 );               */
          MSS = 0.0;
        } else {
          /* UNTITLED3 Summary of this function goes here */
          /*    Detailed explanation goes here */
          /* Time2Cal is the time to be calculated */
          /* V_tar is the target of mergeing vehicle */
          /* V_obj is the obstacle object of mergeing vehicle */
          /* ObjDirection is the direction of object */
          /* T_long is the time when longitual vel adjust ends */
          if (Tc < T_long) {
            MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
              * Tc;
          } else {
            /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
            MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
          }

          MSS += 4.0;

          /* obj is Leading vehicle  */
        }
      } else {
        /* Nothing */
        MSS = 255.0;
      }
    } else {
      /*  Tc > T_long */
      if ((V_obj >= V_tar) && (V_tar > c_V_me)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,1 ); */
        MSS = 0.0;
      } else if ((V_obj >= c_V_me) && (c_V_me > V_tar)) {
        /* MSS = MSSCalculate( V_tar,V_me,V_obj,T_long,0,1 ); */
        MSS = 0.0;
      } else if ((c_V_me >= V_obj) && (V_obj >= V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (T_max < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (T_max * T_max) - (V_obj -
            c_V_me) * T_max;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * T_max;
        }

        MSS += 4.0;

        /* obj is Leading vehicle  */
      } else if ((V_obj <= V_tar) && (V_tar < c_V_me)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Leading vehicle  */
      } else if ((V_obj <= c_V_me) && (c_V_me < V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          MSS = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me) *
            Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          MSS = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        MSS += 4.0;

        /* obj is Leading vehicle  */
      } else if ((c_V_me <= V_obj) && (V_obj <= V_tar)) {
        /* UNTITLED3 Summary of this function goes here */
        /*    Detailed explanation goes here */
        /* Time2Cal is the time to be calculated */
        /* V_tar is the target of mergeing vehicle */
        /* V_obj is the obstacle object of mergeing vehicle */
        /* ObjDirection is the direction of object */
        /* T_long is the time when longitual vel adjust ends */
        if (Tc < T_long) {
          T_max = (V_tar - c_V_me) / 2.0 / T_long * (Tc * Tc) - (V_obj - c_V_me)
            * Tc;
        } else {
          /*          MSS = (V_tar-V_me)/2*T_long - (V_obj - V_me)*T_long - (V_obj - V_tar)*Time2Cal; */
          T_max = (c_V_me - V_tar) / 2.0 * T_long + (V_tar - V_obj) * Tc;
        }

        T_max += 4.0;

        /* obj is Leading vehicle  */
        if ((0.0 >= T_max) || rtIsNaN(T_max)) {
          MSS = 0.0;
        } else {
          MSS = T_max;
        }
      } else {
        /* Nothing */
        MSS = 255.0;
      }
    }
  }

  return MSS;
}

/*
 * Arguments    : double x0[3]
 *                const double UB[3]
 *                double *Res
 *                double *Sts
 *                double *IterGoldenStep
 *                double *IterQpStep
 * Return Type  : void
 */
static void SQPCal(double x0[3], const double UB[3], double *Res, double *Sts,
                   double *IterGoldenStep, double *IterQpStep)
{
  int i;
  double x1[3];
  double Bk[9];
  double Hk[9];
  double yk[3];
  static const double LB[3] = { 15.0, 0.2, 1.0 };

  double Pval;
  double Lamda[15];
  double dv13[45];
  int ix;
  int n;
  double tmp_data[225];
  int exitg4;
  int tmp_size[2];
  double limit1[3];
  int ixstart;
  double limit2[3];
  double mtmp;
  double lolimit[3];
  double hilimit[3];
  boolean_T exitg9;
  double dv14[15];
  double varargin_1[4];
  double PPfuncVal;
  boolean_T exitg6;
  boolean_T exitg8;
  boolean_T exitg5;
  boolean_T exitg7;
  double dv15[3];
  double b_mtmp;
  boolean_T exitg3;
  double Alpha;
  boolean_T exitg2;
  boolean_T exitg1;
  double b_Bk[9];
  double c_Bk[9];
  double d_Bk[9];
  if (!Px1_not_empty) {
    for (i = 0; i < 3; i++) {
      Px1[i] = x0[i];
    }

    Px1_not_empty = true;
  }

  if (!PHx_not_empty) {
    PHx.size[0] = 1;
    PHx.size[1] = 15;
    memset(&PHx.data[0], 0, 15U * sizeof(double));
    PHx_not_empty = true;
    PPfunc = 100.0;
  }

  ratio = 1000.0;
  for (i = 0; i < 3; i++) {
    x1[i] = x0[i];
  }

  eye(Bk);
  eye(Hk);
  *Sts = 0.0;
  *Res = 0.0;

  /*      while (1) */
  *IterGoldenStep = 0.0;
  *IterQpStep = 0.0;
  if (PCurStep == 1.0) {
    if (RunCnt == 0.0) {
      /* First Trig  */
      RunCnt = 1.0;
      b_FinishFlg = 0.0;
      GradientCal(x0, LB, UB, PCostG, PConG, &Pval, Lamda);
      PHx.size[0] = 15;
      PHx.size[1] = 1;
      memcpy(&PHx.data[0], &Lamda[0], 15U * sizeof(double));
      for (i = 0; i < 3; i++) {
        PCostGTemp[i] = PCostG[i];
      }

      memcpy(&PConGTemp[0], &PConG[0], 45U * sizeof(double));

      /*              PPfunc = Pfunc(x0,LB,UB); */
      ixstart = 1;
      mtmp = Lamda[0];
      if (rtIsNaN(Lamda[0])) {
        ix = 2;
        exitg9 = false;
        while ((!exitg9) && (ix <= 15)) {
          ixstart = ix;
          if (!rtIsNaN(Lamda[ix - 1])) {
            mtmp = Lamda[ix - 1];
            exitg9 = true;
          } else {
            ix++;
          }
        }
      }

      if (ixstart < 15) {
        while (ixstart + 1 <= 15) {
          if (Lamda[ixstart] < mtmp) {
            mtmp = Lamda[ixstart];
          }

          ixstart++;
        }
      }

      Pval = 0.0;
      if (mtmp < 0.0) {
        Pval = mtmp;
      }

      PPfunc = -x0[2] + ratio * fabs(Pval);
      PPfuncVal = PPfunc;
    } else {
      /* LoadFrom Previous Step */
      for (i = 0; i < 3; i++) {
        yk[i] = Pdk[i];
        x1[i] = Px1[i];
      }

      memcpy(&Hk[0], &PHk[0], 9U * sizeof(double));
      memcpy(&Bk[0], &PBk[0], 9U * sizeof(double));
      n = 1;
      do {
        exitg4 = 0;
        for (i = 0; i < 3; i++) {
          if (fabs(yk[i]) < 0.0001) {
            limit1[i] = 0.0;
            limit2[i] = 10000.0;
          } else {
            limit1[i] = (LB[i] - Px1[i]) / yk[i];
            limit2[i] = (UB[i] - Px1[i]) / yk[i];
          }

          Pval = limit2[i];
          ixstart = 1;
          mtmp = limit1[i];
          if (rtIsNaN(limit1[i])) {
            ix = 2;
            exitg8 = false;
            while ((!exitg8) && (ix < 3)) {
              ixstart = 2;
              if (!rtIsNaN(Pval)) {
                mtmp = Pval;
                exitg8 = true;
              } else {
                ix = 3;
              }
            }
          }

          if ((ixstart < 2) && (limit2[i] < mtmp)) {
            mtmp = limit2[i];
          }

          lolimit[i] = mtmp;
          Pval = limit2[i];
          ixstart = 1;
          mtmp = limit1[i];
          if (rtIsNaN(limit1[i])) {
            ix = 2;
            exitg7 = false;
            while ((!exitg7) && (ix < 3)) {
              ixstart = 2;
              if (!rtIsNaN(Pval)) {
                mtmp = Pval;
                exitg7 = true;
              } else {
                ix = 3;
              }
            }
          }

          if ((ixstart < 2) && (limit2[i] > mtmp)) {
            mtmp = limit2[i];
          }

          hilimit[i] = mtmp;
          varargin_1[i] = lolimit[i];
        }

        varargin_1[3] = 0.0;
        ixstart = 1;
        mtmp = varargin_1[0];
        if (rtIsNaN(varargin_1[0])) {
          ix = 2;
          exitg6 = false;
          while ((!exitg6) && (ix < 5)) {
            ixstart = ix;
            if (!rtIsNaN(varargin_1[ix - 1])) {
              mtmp = varargin_1[ix - 1];
              exitg6 = true;
            } else {
              ix++;
            }
          }
        }

        if (ixstart < 4) {
          while (ixstart + 1 < 5) {
            if (varargin_1[ixstart] > mtmp) {
              mtmp = varargin_1[ixstart];
            }

            ixstart++;
          }
        }

        ixstart = 1;
        Pval = hilimit[0];
        if (rtIsNaN(hilimit[0])) {
          ix = 2;
          exitg5 = false;
          while ((!exitg5) && (ix < 4)) {
            ixstart = ix;
            if (!rtIsNaN(hilimit[ix - 1])) {
              Pval = hilimit[ix - 1];
              exitg5 = true;
            } else {
              ix++;
            }
          }
        }

        if (ixstart < 3) {
          while (ixstart + 1 < 4) {
            if (hilimit[ixstart] < Pval) {
              Pval = hilimit[ixstart];
            }

            ixstart++;
          }
        }

        if ((n <= 3) && ((Pval <= 0.0) || (Pval < mtmp))) {
          n++;
          if (Pval <= 0.0) {
            for (i = 0; i < 3; i++) {
              if ((hilimit[i] < 0.001) || (hilimit[i] < mtmp)) {
                yk[i] = 0.0;
              }
            }
          }
        } else {
          exitg4 = 1;
        }
      } while (exitg4 == 0);

      if ((Pval <= 0.0) || (Pval < mtmp)) {
        b_FinishFlg = 1.0;
      }

      dv15[0] = 0.01 / yk[0];
      dv15[1] = 0.001 / yk[1];
      dv15[2] = 0.01 / yk[2];
      c_abs(dv15, limit1);
      ixstart = 1;
      b_mtmp = limit1[0];
      if (rtIsNaN(limit1[0])) {
        ix = 2;
        exitg3 = false;
        while ((!exitg3) && (ix < 4)) {
          ixstart = ix;
          if (!rtIsNaN(limit1[ix - 1])) {
            b_mtmp = limit1[ix - 1];
            exitg3 = true;
          } else {
            ix++;
          }
        }
      }

      if (ixstart < 3) {
        while (ixstart + 1 < 4) {
          if (limit1[ixstart] < b_mtmp) {
            b_mtmp = limit1[ixstart];
          }

          ixstart++;
        }
      }

      goldenSearch(Px1, yk, mtmp, Pval, LB, UB, b_mtmp, &Alpha, IterGoldenStep);
      for (i = 0; i < 3; i++) {
        limit1[i] = Alpha * yk[i];
      }

      d_abs(limit1, limit2);
      ixstart = 1;
      mtmp = limit2[0];
      if (rtIsNaN(limit2[0])) {
        ix = 2;
        exitg2 = false;
        while ((!exitg2) && (ix < 4)) {
          ixstart = ix;
          if (!rtIsNaN(limit2[ix - 1])) {
            mtmp = limit2[ix - 1];
            exitg2 = true;
          } else {
            ix++;
          }
        }
      }

      if (ixstart < 3) {
        while (ixstart + 1 < 4) {
          if (limit2[ixstart] > mtmp) {
            mtmp = limit2[ixstart];
          }

          ixstart++;
        }
      }

      if (mtmp < 0.001) {
        b_FinishFlg = 1.0;
      }

      for (i = 0; i < 3; i++) {
        Pval = x1[i] + Alpha * yk[i];
        b_mtmp = Pval - x1[i];
        x1[i] = Pval;
        hilimit[i] = b_mtmp;
      }

      GradientCal(x1, LB, UB, PCostG, PConG, &Pval, Lamda);
      PHx.size[0] = 15;
      PHx.size[1] = 1;
      memcpy(&PHx.data[0], &Lamda[0], 15U * sizeof(double));
      ixstart = 1;
      mtmp = Lamda[0];
      if (rtIsNaN(Lamda[0])) {
        ix = 2;
        exitg1 = false;
        while ((!exitg1) && (ix <= 15)) {
          ixstart = ix;
          if (!rtIsNaN(Lamda[ix - 1])) {
            mtmp = Lamda[ix - 1];
            exitg1 = true;
          } else {
            ix++;
          }
        }
      }

      if (ixstart < 15) {
        while (ixstart + 1 <= 15) {
          if (Lamda[ixstart] < mtmp) {
            mtmp = Lamda[ixstart];
          }

          ixstart++;
        }
      }

      Pval = 0.0;
      if (mtmp < 0.0) {
        Pval = mtmp;
      }

      PPfuncVal = -x1[2] + ratio * fabs(Pval);

      /*  TBD change 5 */
      /*  TBD change 5 */
      for (i = 0; i < 3; i++) {
        Alpha = 0.0;
        for (ix = 0; ix < 15; ix++) {
          Alpha += PConGTemp[i + 3 * ix] * PLamda[ix];
        }

        limit2[i] = PCostGTemp[i] - Alpha;
        PCostGTemp[i] = PCostG[i];
      }

      memcpy(&PConGTemp[0], &PConG[0], 45U * sizeof(double));
      Alpha = 0.0;
      for (ix = 0; ix < 3; ix++) {
        Pval = 0.0;
        for (n = 0; n < 15; n++) {
          Pval += PConG[ix + 3 * n] * PLamda[n];
        }

        Pval = (PCostG[ix] - Pval) - limit2[ix];
        Alpha += Pval * hilimit[ix];
        yk[ix] = Pval;
      }

      if (Alpha > 0.0) {
        b_mtmp = 0.0;
        for (ix = 0; ix < 3; ix++) {
          b_mtmp += yk[ix] * hilimit[ix];
        }

        mtmp = 0.0;
        for (ix = 0; ix < 3; ix++) {
          limit1[ix] = 0.0;
          for (n = 0; n < 3; n++) {
            limit1[ix] += yk[n] * Bk[n + 3 * ix];
          }

          mtmp += limit1[ix] * yk[ix];
        }

        for (ix = 0; ix < 3; ix++) {
          limit1[ix] = 0.0;
          for (n = 0; n < 3; n++) {
            limit1[ix] += Bk[ix + 3 * n] * hilimit[n];
          }

          for (n = 0; n < 3; n++) {
            b_Bk[ix + 3 * n] = limit1[ix] * hilimit[n];
            c_Bk[ix + 3 * n] = Bk[ix + 3 * n] + yk[ix] * yk[n] / b_mtmp;
          }

          for (n = 0; n < 3; n++) {
            Alpha = 0.0;
            for (ixstart = 0; ixstart < 3; ixstart++) {
              Alpha += b_Bk[ix + 3 * ixstart] * Bk[ixstart + 3 * n];
            }

            d_Bk[ix + 3 * n] = Alpha / mtmp;
          }
        }

        for (ix = 0; ix < 3; ix++) {
          for (n = 0; n < 3; n++) {
            Bk[n + 3 * ix] = c_Bk[n + 3 * ix] - d_Bk[n + 3 * ix];
          }
        }
      }

      Alpha = 0.0;
      for (ix = 0; ix < 3; ix++) {
        Alpha += yk[ix] * hilimit[ix];
      }

      if (Alpha > 0.0) {
        b_mtmp = 0.0;
        for (ix = 0; ix < 3; ix++) {
          b_mtmp += yk[ix] * hilimit[ix];
        }

        mtmp = 0.0;
        for (ix = 0; ix < 3; ix++) {
          limit1[ix] = 0.0;
          for (n = 0; n < 3; n++) {
            limit1[ix] += Hk[ix + 3 * n] * yk[n];
          }

          mtmp += (hilimit[ix] - limit1[ix]) * yk[ix];
        }

        Pval = 0.0;
        for (ix = 0; ix < 3; ix++) {
          Pval += yk[ix] * hilimit[ix];
        }

        Pval *= Pval;
        for (ix = 0; ix < 3; ix++) {
          Alpha = 0.0;
          for (n = 0; n < 3; n++) {
            Alpha += Hk[ix + 3 * n] * yk[n];
          }

          limit2[ix] = hilimit[ix] - Alpha;
          limit1[ix] = 0.0;
          for (n = 0; n < 3; n++) {
            b_Bk[ix + 3 * n] = limit2[ix] * hilimit[n];
            limit1[ix] += Hk[ix + 3 * n] * yk[n];
          }

          lolimit[ix] = hilimit[ix] - limit1[ix];
        }

        for (ix = 0; ix < 3; ix++) {
          for (n = 0; n < 3; n++) {
            c_Bk[ix + 3 * n] = hilimit[ix] * lolimit[n];
            Hk[ix + 3 * n] = (Hk[ix + 3 * n] + (b_Bk[ix + 3 * n] + c_Bk[ix + 3 *
              n]) / b_mtmp) - mtmp * hilimit[ix] * hilimit[n] / Pval;
          }
        }
      }
    }

    memcpy(&PHk[0], &Hk[0], 9U * sizeof(double));
    PHx_not_empty = true;
    for (i = 0; i < 3; i++) {
      Px1[i] = x1[i];
    }

    memcpy(&PBk[0], &Bk[0], 9U * sizeof(double));
    PCurStep = 2.0;
    if (PPfuncVal < PPfunc) {
      PPfunc = PPfuncVal;
    }
  } else {
    if (b_FinishFlg == 0.0) {
      PCurStep = 1.0;

      /*              [dk,Lamda] = qpfunc( Hk,CostG,ConG',-Hx,dx1,y1,w1 );   */
      for (i = 0; i < 3; i++) {
        yk[i] = 1.0;
      }

      for (i = 0; i < 15; i++) {
        Lamda[i] = 1.0;
      }

      for (ix = 0; ix < 3; ix++) {
        for (n = 0; n < 15; n++) {
          dv13[n + 15 * ix] = PConG[ix + 3 * n];
        }
      }

      tmp_size[0] = PHx.size[0];
      tmp_size[1] = PHx.size[1];
      n = PHx.size[0] * PHx.size[1];
      for (ix = 0; ix < n; ix++) {
        tmp_data[ix] = -PHx.data[ix];
      }

      for (i = 0; i < 15; i++) {
        dv14[i] = 1.0;
      }

      *IterQpStep = qpfunc(PBk, PCostG, dv13, tmp_data, tmp_size, yk, Lamda,
                           dv14);
      if (c_norm(yk) < 0.001) {
        b_FinishFlg = 1.0;
      } else {
        for (i = 0; i < 3; i++) {
          Pdk[i] = yk[i];
        }

        memcpy(&PLamda[0], &Lamda[0], 15U * sizeof(double));
      }
    }

    PCurStep = 1.0;
  }

  RunCnt++;
  if (RunCnt > Nlimit2) {
    b_FinishFlg = 1.0;
  }

  if (b_FinishFlg == 1.0) {
    *Sts = 1.0;
    if (RunCnt > Nlimit2) {
      /*  0 Failure 1 Success */
      /*             Costx = Pfunc(Px1,LB,UB); */
      for (i = 0; i < 3; i++) {
        x0[i] = Px1[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        x0[i] = Px1[i];
      }
    }

    Pval = b_Pfunc(x0, LB, UB);
    if (!(Pval > 10.0)) {
      *Res = 1.0;
    }

    RunCnt = 0.0;
    PCurStep = 1.0;
  }
}

/*
 * Arguments    : double ArcPos
 *                double S_acc
 *                double V_tar
 *                double c_V_me
 *                double A
 * Return Type  : double
 */
static double TcCalation(double ArcPos, double S_acc, double V_tar, double
  c_V_me, double A)
{
  double Tc;
  if (ArcPos < 0.5) {
    Tc = 0.0;
  } else if (ArcPos > S_acc) {
    Tc = (ArcPos - S_acc) / V_tar + S_acc * 2.0 / (V_tar + c_V_me);
  } else if (fabs(A) > 0.01) {
    /*                  Tc = (-V_me - sqrt(V_me^2+2*A*ArcPos))/A; */
    /*              elseif A < -1e-2 */
    /*                  Tc = (-V_me + sqrt(V_me^2+2*A*ArcPos))/A; */
    Tc = (-c_V_me + sqrt(c_V_me * c_V_me + 2.0 * A * ArcPos)) / A;
  } else {
    Tc = ArcPos / (fabs(c_V_me) + 1.0E-5);
  }

  return Tc;
}

/*
 * UNTITLED2 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_x_out
 *                double c_y_out
 *                double c_angle_out
 *                double *c_Delta
 *                double *c_k_localmax
 *                double *c_Arclength
 * Return Type  : void
 */
static void b_ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *c_Delta, double
  *c_k_localmax, double *c_Arclength)
{
  double Beta;
  double ulimit;
  double D_BetaVal;
  double r;
  double SignBeta;

  /* ArcPos = zeros(Nlen,1); */
  Beta = (c_angle_out - c_angle_in) / 2.0;
  ulimit = c_x_in - c_x_out;
  D_BetaVal = c_y_in - c_y_out;
  r = sqrt(ulimit * ulimit + D_BetaVal * D_BetaVal);

  /* Move */
  /* Rotate */
  if (Beta < 0.0) {
    SignBeta = -1.0;
  } else if (Beta > 0.0) {
    SignBeta = 1.0;
  } else if (Beta == 0.0) {
    SignBeta = 0.0;
  } else {
    SignBeta = Beta;
  }

  Beta = fabs(Beta);
  ulimit = sqrt(Beta);

  /* UNTITLED4 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*  this function is used to calculate the integral of sin(x^2),which is used */
  /*  to calculate y position */
  /* UNTITLED4 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*  this function is used to calculate the integral of cos(x^2),which is used */
  /*  to calculate x position */
  D_BetaVal = sin(Beta) * quadsinu2tbl[(int)(floor(ulimit / 0.005) + 1.0) - 1] +
    cos(Beta) * quadcosu2tbl[(int)(floor(ulimit / 0.005) + 1.0) - 1];
  *c_Delta = 8.0 * SignBeta * (D_BetaVal * D_BetaVal) / (r * r);

  /* longth of the trajectary      */
  *c_Arclength = 2.0 * sqrt(2.0 * fabs(Beta / *c_Delta * SignBeta));
  *c_k_localmax = *c_Delta * *c_Arclength / 2.0;
}

/*
 * UNTITLED Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double Arc
 *                double c_Delta
 *                double c_Arclength
 *                double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double *xposition
 *                double *yposition
 *                double *Theta
 * Return Type  : void
 */
static void b_ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
  double c_angle_out, double c_angle_in, double c_x_in, double c_y_in, double
  c_x_out, double c_y_out, double *xposition, double *yposition, double *Theta)
{
  double Beta;
  double x_outRot;
  double y_outRot;
  double SignBeta;
  double ulimit;
  double A;
  double b_A;
  double c_A;
  double xpositionMirrTemp;
  double xpositionTemp;
  double d_A;
  double e_A;
  Beta = (c_angle_out - c_angle_in) / 2.0;
  x_outRot = (c_x_out - c_x_in) * cos(c_angle_in) + (c_y_out - c_y_in) * sin
    (c_angle_in);
  y_outRot = (c_y_out - c_y_in) * cos(c_angle_in) - (c_x_out - c_x_in) * sin
    (c_angle_in);
  if (Beta == 0.0) {
    SignBeta = 1.0;
  } else if (Beta < 0.0) {
    SignBeta = -1.0;
  } else if (Beta > 0.0) {
    SignBeta = 1.0;
  } else if (Beta == 0.0) {
    SignBeta = 0.0;
  } else {
    SignBeta = Beta;
  }

  if (Arc < c_Arclength / 2.0) {
    ulimit = Arc * sqrt(fabs(c_Delta) / 2.0);
    *Theta = c_Delta * (Arc * Arc) / 2.0;

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of cos(x^2),which is used */
    /*  to calculate x position */
    A = ulimit / 0.005;
    if (A < 0.0) {
      c_A = ceil(A);
    } else {
      c_A = floor(A);
    }

    xpositionTemp = sqrt(2.0 / fabs(c_Delta)) * quadcosu2tbl[(int)(c_A + 1.0) -
      1];

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of sin(x^2),which is used */
    /*  to calculate y position */
    A = ulimit / 0.005;
    if (A < 0.0) {
      e_A = ceil(A);
    } else {
      e_A = floor(A);
    }

    y_outRot = sqrt(2.0 / fabs(c_Delta)) * quadsinu2tbl[(int)(e_A + 1.0) - 1] *
      SignBeta;
  } else {
    ulimit = (c_Arclength - Arc) * sqrt(fabs(c_Delta) / 2.0);

    /* Theta = 2*Beta*SignBeta - Delta * (Arclength - Arc)^2/2;  */
    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of cos(x^2),which is used */
    /*  to calculate x position */
    A = ulimit / 0.005;
    if (A < 0.0) {
      b_A = ceil(A);
    } else {
      b_A = floor(A);
    }

    xpositionMirrTemp = sqrt(2.0 / fabs(c_Delta)) * quadcosu2tbl[(int)(b_A + 1.0)
      - 1];

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of sin(x^2),which is used */
    /*  to calculate y position */
    A = ulimit / 0.005;
    if (A < 0.0) {
      d_A = ceil(A);
    } else {
      d_A = floor(A);
    }

    ulimit = sqrt(2.0 / fabs(c_Delta)) * quadsinu2tbl[(int)(d_A + 1.0) - 1] *
      SignBeta;

    /* mirror line Ax+By+C=0 */
    A = tan(1.5707963267948966 + atan(y_outRot / x_outRot));
    x_outRot = y_outRot / 2.0 - A * (x_outRot / 2.0);

    /* two points are symmetrical to the Ax+By+C we just defined */
    xpositionTemp = xpositionMirrTemp - 2.0 * A * ((A * xpositionMirrTemp +
      -ulimit) + x_outRot) / (A * A + 1.0);
    y_outRot = ulimit - -2.0 * ((A * xpositionMirrTemp + -ulimit) + x_outRot) /
      (A * A + 1.0);
    x_outRot = c_Arclength - Arc;
    *Theta = 2.0 * fabs(Beta) * SignBeta - c_Delta * (x_outRot * x_outRot) / 2.0;
  }

  *xposition = (xpositionTemp * cos(-c_angle_in) + y_outRot * sin(-c_angle_in))
    + c_x_in;
  *yposition = (y_outRot * cos(-c_angle_in) - xpositionTemp * sin(-c_angle_in))
    + c_y_in;
  *Theta += c_angle_in;
}

/*
 * Arguments    : const double Xin[3]
 *                const double LB[3]
 *                const double UB[3]
 * Return Type  : double
 */
static double b_Pfunc(const double Xin[3], const double LB[3], const double UB[3])
{
  double C[15];
  int i;
  double mtmp;
  int ix;
  boolean_T exitg1;
  double b_mtmp;
  LaneChgNonLinearCon(Xin, C);
  for (i = 0; i < 3; i++) {
    C[i + 9] = Xin[i] - UB[i];
    C[i + 12] = LB[i] - Xin[i];
  }

  for (i = 0; i < 15; i++) {
    C[i] = -C[i];
  }

  i = 1;
  mtmp = C[0];
  if (rtIsNaN(C[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 16)) {
      i = ix;
      if (!rtIsNaN(C[ix - 1])) {
        mtmp = C[ix - 1];
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }

  if (i < 15) {
    while (i + 1 < 16) {
      if (C[i] < mtmp) {
        mtmp = C[i];
      }

      i++;
    }
  }

  b_mtmp = 0.0;
  if (mtmp < 0.0) {
    b_mtmp = mtmp;
  }

  return -Xin[2] + ratio * fabs(b_mtmp);
}

/*
 * Arguments    : const double x0[3]
 *                const double direction[3]
 *                double lo
 *                double hi
 *                const double LB[3]
 *                const double UB[3]
 *                double Accurcy
 *                double *bestStep
 *                double *goldenn
 * Return Type  : void
 */
static void goldenSearch(const double x0[3], const double direction[3], double
  lo, double hi, const double LB[3], const double UB[3], double Accurcy, double *
  bestStep, double *goldenn)
{
  double a;
  double b;
  double alpha;
  double beta;
  double b_x0[3];
  int i;
  double f_alpha;
  double f_beta;
  boolean_T exitg1;
  double c_x0[3];
  a = lo;
  b = hi;

  /*  TBD Change 2 */
  *goldenn = 0.0;
  alpha = lo + 0.38196602 * (hi - lo);
  beta = lo + 0.61803398 * (hi - lo);
  for (i = 0; i < 3; i++) {
    b_x0[i] = x0[i] + alpha * direction[i];
  }

  f_alpha = b_Pfunc(b_x0, LB, UB);
  for (i = 0; i < 3; i++) {
    b_x0[i] = x0[i] + beta * direction[i];
  }

  f_beta = b_Pfunc(b_x0, LB, UB);
  exitg1 = false;
  while ((!exitg1) && (fabs(b - a) > Accurcy)) {
    /*      a1=a;  b1=b; */
    (*goldenn)++;
    if (alpha > beta) {
      /*          a=a1;b=b1; */
      alpha = a + 0.38196602 * (b - a);
      beta = a + 0.61803398 * (b - a);
      for (i = 0; i < 3; i++) {
        b_x0[i] = x0[i] + alpha * direction[i];
      }

      f_alpha = b_Pfunc(b_x0, LB, UB);
      for (i = 0; i < 3; i++) {
        b_x0[i] = x0[i] + beta * direction[i];
      }

      f_beta = b_Pfunc(b_x0, LB, UB);
    }

    if (f_alpha <= f_beta) {
      b = beta;
      beta = alpha;
      f_beta = f_alpha;
      alpha = a + (b - alpha);
      for (i = 0; i < 3; i++) {
        b_x0[i] = x0[i] + alpha * direction[i];
      }

      f_alpha = b_Pfunc(b_x0, LB, UB);

      /*          a1=a;  b1=b; */
    } else {
      a = alpha;
      alpha = beta;
      f_alpha = f_beta;
      beta = b - (beta - a);
      for (i = 0; i < 3; i++) {
        b_x0[i] = x0[i] + beta * direction[i];
      }

      f_beta = b_Pfunc(b_x0, LB, UB);

      /*          a1=a;  b1=b; */
    }

    if (*goldenn > Nlimit) {
      exitg1 = true;
    }
  }

  for (i = 0; i < 3; i++) {
    b_x0[i] = x0[i] + a * direction[i];
    c_x0[i] = x0[i] + b * direction[i];
  }

  if (b_Pfunc(b_x0, LB, UB) < b_Pfunc(c_x0, LB, UB)) {
    *bestStep = a;
  } else {
    *bestStep = b;
  }
}

/*
 * UNTITLED2 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_x_out
 *                double c_y_out
 *                double c_angle_out
 *                double *x_qi
 *                double *y_qi
 *                double *theta_qi
 * Return Type  : void
 */
static void qiConfigCal(double c_x_in, double c_y_in, double c_angle_in, double
  c_x_out, double c_y_out, double c_angle_out, double *x_qi, double *y_qi,
  double *theta_qi)
{
  double r_en;
  double k_qi_en;
  double r_qi_en;
  double angle_qi_CC;
  double alpha_en;
  double angle_qi;
  double signK;
  r_en = c_x_in - c_x_out;
  k_qi_en = c_y_in - c_y_out;
  r_en = sqrt(r_en * r_en + k_qi_en * k_qi_en);
  k_qi_en = 2.0 * sin((c_angle_out - c_angle_in) / 2.0) / r_en;
  if (k_qi_en == 0.0) {
    *x_qi = (c_x_in + c_x_out) / 2.0;
    *y_qi = (c_y_in + c_y_out) / 2.0;
    *theta_qi = asin((c_y_out - c_y_in) / r_en) * 2.0 + (c_angle_in +
      c_angle_out) / 2.0;
  } else {
    r_qi_en = fabs(1.0 / k_qi_en);
    angle_qi_CC = 2.0 * asin(r_en * k_qi_en / 2.0);
    alpha_en = atan((c_y_out - c_y_in) / (c_x_out - c_x_in));
    if (c_x_out < c_x_in) {
      alpha_en += 3.1415926535897931;
    } else {
      if (c_angle_in > 3.1415926535897931) {
        alpha_en += 6.2831853071795862;
      }
    }

    if (alpha_en > 1.0E-5) {
      while (alpha_en > 6.2831853071795862) {
        alpha_en -= 6.2831853071795862;
      }
    } else {
      while (alpha_en < -6.2831853071795862) {
        alpha_en += 6.2831853071795862;
      }
    }

    angle_qi = angle_qi_CC / 2.0;
    if (k_qi_en == 0.0) {
      signK = 1.0;
    } else if (k_qi_en < 0.0) {
      signK = -1.0;
    } else if (k_qi_en > 0.0) {
      signK = 1.0;
    } else if (k_qi_en == 0.0) {
      signK = 0.0;
    } else {
      signK = k_qi_en;
    }

    r_en = r_qi_en * cos(-angle_qi_CC / 2.0 + angle_qi) - sqrt(r_qi_en * r_qi_en
      - r_en * r_en / 4.0);
    k_qi_en = r_qi_en * sin(-angle_qi_CC / 2.0 + angle_qi);
    *x_qi = (r_en * sin(alpha_en) * signK - k_qi_en * cos(alpha_en) * signK) +
      (c_x_in + c_x_out) / 2.0;
    *y_qi = (-r_en * cos(alpha_en) * signK - k_qi_en * sin(alpha_en) * signK) +
      (c_y_in + c_y_out) / 2.0;
    *theta_qi = -(c_angle_in + c_angle_out) / 2.0 + 2.0 * alpha_en;
  }

  if (*theta_qi > 1.0E-5) {
    while (*theta_qi > 6.2831853071795862) {
      *theta_qi -= 6.2831853071795862;
    }
  } else {
    while (*theta_qi < -6.2831853071795862) {
      *theta_qi += 6.2831853071795862;
    }
  }
}

/*
 * UNTITLED2 Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : const double c_H[9]
 *                const double c[3]
 *                const double A[45]
 *                const double b_data[]
 *                const int b_size[2]
 *                double x1[3]
 *                double b_y1[15]
 *                double w1[15]
 * Return Type  : double
 */
static double qpfunc(const double c_H[9], const double c[3], const double A[45],
                     const double b_data[], const int b_size[2], double x1[3],
                     double b_y1[15], double w1[15])
{
  double qpfunck;
  int ixstart;
  int u1;
  int exitg1;
  double b_Y[225];
  double W[225];
  double d21;
  double Mu;
  double dv16[225];
  int ix;
  double newMatricL[324];
  double dw[15];
  double b_Mu[225];
  double b_c[3];
  double b_A[3];
  double b[15];
  double varargin_1_idx_1;
  double newMatricR[18];
  double b_W[15];
  double varargin_1[30];
  int i9;
  boolean_T exitg2;
  boolean_T guard1 = false;
  ixstart = b_size[0];
  u1 = b_size[1];
  if (ixstart >= u1) {
    u1 = ixstart;
  }

  qpfunck = 0.0;
  do {
    exitg1 = 0;
    qpfunck++;
    if (qpfunck > Nlimit) {
      exitg1 = 1;
    } else {
      diag(b_y1, b_Y);
      diag(w1, W);
      d21 = 0.0;
      for (ixstart = 0; ixstart < 15; ixstart++) {
        d21 += b_y1[ixstart] * w1[ixstart];
      }

      Mu = 0.1 * d21 / (double)u1;

      /*          newMatricL = [-H A';A inv(Y)*W]; */
      /*          newMatricR = [c + H*x1 - A'*y1;b-A*x1 + Mu*inv(Y)*E]; */
      /*          dxy = inv(newMatricL)*newMatricR; */
      memcpy(&dv16[0], &W[0], 225U * sizeof(double));
      mldivide(b_Y, dv16);
      for (ixstart = 0; ixstart < 3; ixstart++) {
        for (ix = 0; ix < 3; ix++) {
          newMatricL[ix + 18 * ixstart] = -c_H[ix + 3 * ixstart];
        }
      }

      for (ixstart = 0; ixstart < 15; ixstart++) {
        for (ix = 0; ix < 3; ix++) {
          newMatricL[ix + 18 * (ixstart + 3)] = A[ixstart + 15 * ix];
        }
      }

      for (ixstart = 0; ixstart < 3; ixstart++) {
        memcpy(&newMatricL[ixstart * 18 + 3], &A[ixstart * 15], 15U * sizeof
               (double));
      }

      for (ixstart = 0; ixstart < 15; ixstart++) {
        memcpy(&newMatricL[ixstart * 18 + 57], &dv16[ixstart * 15], 15U * sizeof
               (double));
        dw[ixstart] = 1.0;
      }

      for (ixstart = 0; ixstart < 225; ixstart++) {
        b_Mu[ixstart] = Mu * b_Y[ixstart];
      }

      b_mldivide(b_Mu, dw);
      for (ixstart = 0; ixstart < 3; ixstart++) {
        varargin_1_idx_1 = 0.0;
        for (ix = 0; ix < 3; ix++) {
          varargin_1_idx_1 += c_H[ixstart + 3 * ix] * x1[ix];
        }

        b_c[ixstart] = c[ixstart] + varargin_1_idx_1;
        b_A[ixstart] = 0.0;
        for (ix = 0; ix < 15; ix++) {
          b_A[ixstart] += A[ix + 15 * ixstart] * b_y1[ix];
        }
      }

      for (ixstart = 0; ixstart < 15; ixstart++) {
        varargin_1_idx_1 = 0.0;
        for (ix = 0; ix < 3; ix++) {
          varargin_1_idx_1 += A[ixstart + 15 * ix] * x1[ix];
        }

        b[ixstart] = (b_data[ixstart] - varargin_1_idx_1) + dw[ixstart];
      }

      for (ixstart = 0; ixstart < 3; ixstart++) {
        newMatricR[ixstart] = b_c[ixstart] - b_A[ixstart];
      }

      memcpy(&newMatricR[3], &b[0], 15U * sizeof(double));
      c_mldivide(newMatricL, newMatricR);

      /*          dw = inv(Y)*(Mu*E - Y*W*E - W*dy); */
      for (ixstart = 0; ixstart < 15; ixstart++) {
        varargin_1_idx_1 = 0.0;
        for (ix = 0; ix < 15; ix++) {
          b_Mu[ixstart + 15 * ix] = 0.0;
          for (i9 = 0; i9 < 15; i9++) {
            b_Mu[ixstart + 15 * ix] += b_Y[ixstart + 15 * i9] * W[i9 + 15 * ix];
          }

          varargin_1_idx_1 += b_Mu[ixstart + 15 * ix];
        }

        b_W[ixstart] = 0.0;
        for (ix = 0; ix < 15; ix++) {
          b_W[ixstart] += W[ixstart + 15 * ix] * newMatricR[3 + ix];
        }

        dw[ixstart] = (Mu - varargin_1_idx_1) - b_W[ixstart];
      }

      b_mldivide(b_Y, dw);
      for (ixstart = 0; ixstart < 15; ixstart++) {
        varargin_1[ixstart] = -newMatricR[ixstart + 3] / b_y1[ixstart];
        varargin_1[ixstart + 15] = -dw[ixstart] / w1[ixstart];
      }

      ixstart = 1;
      Mu = varargin_1[0];
      if (rtIsNaN(varargin_1[0])) {
        ix = 2;
        exitg2 = false;
        while ((!exitg2) && (ix < 31)) {
          ixstart = ix;
          if (!rtIsNaN(varargin_1[ix - 1])) {
            Mu = varargin_1[ix - 1];
            exitg2 = true;
          } else {
            ix++;
          }
        }
      }

      if (ixstart < 30) {
        while (ixstart + 1 < 31) {
          if (varargin_1[ixstart] > Mu) {
            Mu = varargin_1[ixstart];
          }

          ixstart++;
        }
      }

      varargin_1_idx_1 = 0.9 * pinv(Mu);
      Mu = 1.0;
      if (varargin_1_idx_1 < 1.0) {
        Mu = varargin_1_idx_1;
      }

      /*          if (norm(Gamma,1)<1e-3)&(norm(Rho,1)<1e-3)&(norm(Sigma,1)<1e-3)||(Lamda<1e-3) */
      guard1 = false;
      if (fabs(d21) < 0.001) {
        for (ixstart = 0; ixstart < 15; ixstart++) {
          d21 = 0.0;
          for (ix = 0; ix < 3; ix++) {
            d21 += A[ixstart + 15 * ix] * x1[ix];
          }

          b_W[ixstart] = (b_data[ixstart] - d21) + w1[ixstart];
        }

        if (norm(b_W) < 0.001) {
          for (ixstart = 0; ixstart < 3; ixstart++) {
            d21 = 0.0;
            for (ix = 0; ix < 3; ix++) {
              d21 += c_H[ixstart + 3 * ix] * x1[ix];
            }

            b_A[ixstart] = 0.0;
            for (ix = 0; ix < 15; ix++) {
              b_A[ixstart] += A[ix + 15 * ixstart] * b_y1[ix];
            }

            b_c[ixstart] = (c[ixstart] + d21) - b_A[ixstart];
          }

          if (b_norm(b_c) < 0.001) {
            exitg1 = 1;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        if (Mu < 1.0E-5) {
          exitg1 = 1;
        } else {
          for (ixstart = 0; ixstart < 3; ixstart++) {
            x1[ixstart] += Mu * newMatricR[ixstart];
          }

          for (ixstart = 0; ixstart < 15; ixstart++) {
            b_y1[ixstart] += Mu * newMatricR[3 + ixstart];
            w1[ixstart] += Mu * dw[ixstart];
          }
        }
      }
    }
  } while (exitg1 == 0);

  return qpfunck;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void FinishFlg_not_empty_init(void)
{
  FinishFlg_not_empty = false;
}

/*
 * global Aylimit Axlimit X_melimit k_maxlimit Tc V L_veh  X L_me T_adj H AngleTC  Y W_veh  W_me X_me MSS x_qitemp y_qitemp theta_qitemp;
 * Arguments    : const double Info_FdIn[6]
 *                const double Info_FoIn[6]
 *                const double Info_LdIn[6]
 *                const double Info_LoIn[6]
 *                const double Info_MeIn[6]
 *                double x_inIn
 *                double y_inIn
 *                double angle_inIn
 *                double y_outIn
 *                double angle_outIn
 *                double x_outIn
 *                double TrigFlg
 *                double X_melimit_In
 *                double PathFinishFlg
 *                double SpeedLimitIn
 *                double b_CurOp
 *                double xoptres[3]
 *                double *PlanRes
 *                double *KurMax
 *                double *IterGoldenStep
 *                double *IterQpStep
 *                double *IterSQPStep
 *                double *PathPlanRetryFlg
 * Return Type  : void
 */
void PathCreatorLC(const double Info_FdIn[6], const double Info_FoIn[6], const
                   double Info_LdIn[6], const double Info_LoIn[6], const double
                   Info_MeIn[6], double x_inIn, double y_inIn, double angle_inIn,
                   double y_outIn, double angle_outIn, double x_outIn, double
                   TrigFlg, double X_melimit_In, double PathFinishFlg, double
                   SpeedLimitIn, double b_CurOp, double xoptres[3], double
                   *PlanRes, double *KurMax, double *IterGoldenStep, double
                   *IterQpStep, double *IterSQPStep, double *PathPlanRetryFlg)
{
  int i;
  double mtmp;
  double b_mtmp;
  int ix;
  boolean_T exitg4;
  double UB[3];
  double dv9[3];
  double c_mtmp;
  boolean_T exitg3;
  double varargin_1_idx_1;
  double b_Info_FdIn[4];
  boolean_T exitg2;
  double c_Info_FdIn[4];
  double d_Info_FdIn[4];
  boolean_T exitg1;
  double e_Info_FdIn[4];
  double f_Info_FdIn[4];
  double g_Info_FdIn[4];
  static const double dv10[356] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-5, 1.0E-5,
    1.0E-5, 2.0E-5, 3.0E-5, 4.0E-5, 6.0E-5, 7.0E-5, 9.0E-5, 0.00011, 0.00014,
    0.00017, 0.0002, 0.00024, 0.00029, 0.00033, 0.00039, 0.00044, 0.00051,
    0.00058, 0.00065, 0.00073, 0.00082, 0.00091, 0.00102, 0.00112, 0.00124,
    0.00137, 0.0015, 0.00164, 0.00179, 0.00194, 0.00211, 0.00229, 0.00247,
    0.00267, 0.00287, 0.00309, 0.00331, 0.00355, 0.0038, 0.00405, 0.00433,
    0.00461, 0.0049, 0.00521, 0.00553, 0.00586, 0.0062, 0.00656, 0.00693,
    0.00731, 0.00771, 0.00813, 0.00855, 0.00899, 0.00945, 0.00992, 0.01041,
    0.01091, 0.01143, 0.01197, 0.01252, 0.01309, 0.01367, 0.01428, 0.0149,
    0.01553, 0.01619, 0.01686, 0.01755, 0.01826, 0.01899, 0.01974, 0.02051,
    0.02129, 0.0221, 0.02293, 0.02377, 0.02464, 0.02553, 0.02644, 0.02737,
    0.02832, 0.02929, 0.03029, 0.0313, 0.03234, 0.0334, 0.03449, 0.03559,
    0.03672, 0.03788, 0.03906, 0.04026, 0.04148, 0.04273, 0.044, 0.0453, 0.04663,
    0.04797, 0.04935, 0.05075, 0.05217, 0.05362, 0.0551, 0.0566, 0.05813,
    0.05968, 0.06127, 0.06288, 0.06451, 0.06618, 0.06787, 0.06959, 0.07134,
    0.07311, 0.07492, 0.07675, 0.07861, 0.0805, 0.08242, 0.08436, 0.08634,
    0.08835, 0.09038, 0.09245, 0.09454, 0.09667, 0.09882, 0.10101, 0.10322,
    0.10547, 0.10774, 0.11005, 0.11239, 0.11476, 0.11716, 0.11959, 0.12205,
    0.12454, 0.12707, 0.12962, 0.13221, 0.13483, 0.13748, 0.14016, 0.14288,
    0.14562, 0.1484, 0.15121, 0.15405, 0.15692, 0.15983, 0.16277, 0.16574,
    0.16874, 0.17177, 0.17484, 0.17794, 0.18107, 0.18423, 0.18743, 0.19065,
    0.19391, 0.1972, 0.20052, 0.20388, 0.20726, 0.21068, 0.21413, 0.21761,
    0.22112, 0.22467, 0.22824, 0.23185, 0.23548, 0.23915, 0.24285, 0.24658,
    0.25034, 0.25413, 0.25795, 0.2618, 0.26568, 0.26959, 0.27353, 0.2775,
    0.28149, 0.28552, 0.28957, 0.29366, 0.29777, 0.30191, 0.30607, 0.31027,
    0.31449, 0.31874, 0.32301, 0.32731, 0.33164, 0.33599, 0.34036, 0.34477,
    0.34919, 0.35364, 0.35811, 0.36261, 0.36713, 0.37167, 0.37624, 0.38082,
    0.38543, 0.39006, 0.0, 0.39471, 0.39938, 0.40406, 0.40877, 0.4135, 0.41824,
    0.423, 0.42778, 0.43257, 0.43738, 0.4422, 0.44704, 0.4519, 0.45676, 0.46164,
    0.46654, 0.47144, 0.47636, 0.48128, 0.48622, 0.49116, 0.49612, 0.50108,
    0.50605, 0.51102, 0.516, 0.52099, 0.52598, 0.53097, 0.53596, 0.54096,
    0.54596, 0.55096, 0.55596, 0.56096, 0.56596, 0.57095, 0.57594, 0.58093,
    0.58591, 0.59088, 0.59585, 0.60081, 0.60577, 0.61071, 0.61564, 0.62056,
    0.62547, 0.63036, 0.63525, 0.64011, 0.64496, 0.6498, 0.65461, 0.65941,
    0.66419, 0.66895, 0.67368, 0.67839, 0.68308, 0.68775, 0.69239, 0.697,
    0.70158, 0.70614, 0.71067, 0.71516, 0.71963, 0.72406, 0.72846, 0.73282,
    0.73715, 0.74144, 0.7457, 0.74991, 0.75408, 0.75822, 0.76231, 0.76636,
    0.77036, 0.77432, 0.77824, 0.7821, 0.78592, 0.78969, 0.79341, 0.79708,
    0.80069, 0.80426, 0.80777, 0.81122, 0.81461, 0.81795, 0.82124, 0.82446,
    0.82762, 0.83072, 0.83376, 0.83673, 0.83964, 0.84249, 0.84527, 0.84798,
    0.85063, 0.8532, 0.85571, 0.85815, 0.86051, 0.86281, 0.86503, 0.86717,
    0.86925, 0.87124, 0.87316, 0.87501, 0.87677, 0.87846, 0.88007, 0.8816,
    0.88305, 0.88442, 0.8857, 0.88691, 0.88803, 0.88906, 0.89002, 0.89088,
    0.89167, 0.89237, 0.89298, 0.8935, 0.89394, 0.89429, 0.89456, 0.89473,
    0.89482 };

  static const double dv11[356] = { 0.0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.03,
    0.035, 0.04, 0.045, 0.05, 0.055, 0.06, 0.065, 0.07, 0.075, 0.08, 0.085, 0.09,
    0.095, 0.1, 0.105, 0.11, 0.115, 0.12, 0.125, 0.13, 0.135, 0.13999, 0.14499,
    0.14999, 0.15499, 0.15999, 0.16499, 0.16999, 0.17498, 0.17998, 0.18498,
    0.18998, 0.19497, 0.19997, 0.20496, 0.20996, 0.21495, 0.21995, 0.22494,
    0.22994, 0.23493, 0.23992, 0.24491, 0.2499, 0.25489, 0.25988, 0.26487,
    0.26986, 0.27484, 0.27983, 0.28481, 0.28979, 0.29478, 0.29976, 0.30474,
    0.30971, 0.31469, 0.31966, 0.32464, 0.32961, 0.33458, 0.33955, 0.34451,
    0.34948, 0.35444, 0.3594, 0.36435, 0.36931, 0.37426, 0.37921, 0.38415,
    0.3891, 0.39404, 0.39898, 0.40391, 0.40884, 0.41377, 0.41869, 0.42362,
    0.42853, 0.43345, 0.43835, 0.44326, 0.44816, 0.45305, 0.45794, 0.46283,
    0.46771, 0.47259, 0.47746, 0.48232, 0.48718, 0.49204, 0.49688, 0.50173,
    0.50656, 0.51139, 0.51621, 0.52103, 0.52583, 0.53063, 0.53543, 0.54021,
    0.54499, 0.54976, 0.55452, 0.55927, 0.56401, 0.56875, 0.57347, 0.57819,
    0.58289, 0.58759, 0.59227, 0.59694, 0.60161, 0.60626, 0.6109, 0.61553,
    0.62015, 0.62475, 0.62935, 0.63393, 0.63849, 0.64305, 0.64759, 0.65211,
    0.65662, 0.66112, 0.6656, 0.67007, 0.67452, 0.67896, 0.68338, 0.68778,
    0.69217, 0.69654, 0.70089, 0.70522, 0.70954, 0.71384, 0.71812, 0.72238,
    0.72661, 0.73083, 0.73503, 0.73921, 0.74337, 0.7475, 0.75162, 0.75571,
    0.75978, 0.76383, 0.76785, 0.77185, 0.77582, 0.77977, 0.78369, 0.78759,
    0.79147, 0.79531, 0.79913, 0.80292, 0.80669, 0.81043, 0.81413, 0.81781,
    0.82146, 0.82508, 0.82867, 0.83223, 0.83576, 0.83925, 0.84272, 0.84615,
    0.84955, 0.85291, 0.85624, 0.85954, 0.8628, 0.86603, 0.86922, 0.87237,
    0.87549, 0.87857, 0.88161, 0.88461, 0.88758, 0.8905, 0.89339, 0.89623,
    0.89904, 0.9018, 0.90452, 0.9072, 0.90984, 0.91244, 0.91499, 0.9175, 0.91996,
    0.92238, 0.92475, 0.92708, 0.92936, 0.93159, 0.93378, 0.93591, 0.938,
    0.94004, 0.94204, 0.94398, 0.94587, 0.94771, 0.9495, 0.95124, 0.95293,
    0.95457, 0.95615, 0.95768, 0.0, 0.95915, 0.96057, 0.96194, 0.96325, 0.96451,
    0.96571, 0.96685, 0.96794, 0.96897, 0.96995, 0.97086, 0.97172, 0.97252,
    0.97326, 0.97394, 0.97457, 0.97513, 0.97563, 0.97607, 0.97645, 0.97677,
    0.97703, 0.97723, 0.97737, 0.97744, 0.97745, 0.9774, 0.97728, 0.9771,
    0.97686, 0.97656, 0.97619, 0.97575, 0.97525, 0.97469, 0.97406, 0.97337,
    0.97261, 0.97179, 0.97091, 0.96996, 0.96894, 0.96786, 0.96671, 0.9655,
    0.96422, 0.96288, 0.96147, 0.95999, 0.95845, 0.95685, 0.95518, 0.95344,
    0.95164, 0.94978, 0.94785, 0.94586, 0.9438, 0.94167, 0.93949, 0.93724,
    0.93492, 0.93254, 0.9301, 0.9276, 0.92503, 0.9224, 0.91971, 0.91696, 0.91415,
    0.91128, 0.90834, 0.90535, 0.9023, 0.89918, 0.89601, 0.89279, 0.8895,
    0.88616, 0.88276, 0.87931, 0.8758, 0.87224, 0.86862, 0.86495, 0.86123,
    0.85746, 0.85363, 0.84976, 0.84584, 0.84187, 0.83785, 0.83378, 0.82967,
    0.82552, 0.82132, 0.81707, 0.81279, 0.80846, 0.8041, 0.79969, 0.79525,
    0.79077, 0.78625, 0.7817, 0.77712, 0.7725, 0.76786, 0.76318, 0.75847,
    0.75374, 0.74898, 0.74419, 0.73938, 0.73455, 0.7297, 0.72483, 0.71993,
    0.71503, 0.7101, 0.70516, 0.70021, 0.69525, 0.69028, 0.6853, 0.68031,
    0.67532, 0.67032, 0.66532 };

  if ((!TrigCnt_not_empty) || (PathFinishFlg > 0.1) || (b_CurOp < 5.0)) {
    TrigCnt = 0.0;
    TrigCnt_not_empty = true;
    for (i = 0; i < 3; i++) {
      b_Pxoptres[i] = 0.0;
    }

    b_PPlanRes = 0.0;
    b_PKurMax = 0.0;
  }

  if ((!FinishFlg_not_empty) || (PathFinishFlg > 0.1) || (b_CurOp < 5.0)) {
    FinishFlg = 1.0;
    FinishFlg_not_empty = true;
  }

  Nlimit = 25.0;
  Nlimit2 = 15.0;
  *PlanRes = 0.0;
  *KurMax = 0.0;
  *PathPlanRetryFlg = 0.0;
  *IterGoldenStep = 0.0;
  *IterQpStep = 0.0;
  *IterSQPStep = 0.0;

  /* Edge Trigger */
  if (TrigFlg > 0.1) {
    FinishFlg = 0.0;
    for (i = 0; i < 3; i++) {
      b_Pxoptres[i] = 0.0;
    }

    b_PPlanRes = 0.0;
    b_PKurMax = 0.0;
    TrigCnt = 1.0;
    if (X_melimit_In > 200.0) {
      X_melimit_In = 200.0;
    }

    /*      global MSS  Tc AngleTC */
    Aylimit = 1.5;
    Axlimit = 1.5;
    X_melimit = X_melimit_In;
    k_maxlimit = 0.2;

    /* Accurcy  3 - > 0.005 */
    /* lanewidth */
    H = 2.5;

    /* Time to adjust vel */
    T_adj = 0.0;

    /* Time to change lane */
    T_lat = 5.0;

    /* Fd Fo Ld Lo, all are considered to be moving in a constant speed */
    /*      Tc = [0,0,0,0]'; */
    b_Info_FdIn[0] = Info_FdIn[4];
    b_Info_FdIn[1] = 2.5;
    b_Info_FdIn[2] = Info_LdIn[4];
    b_Info_FdIn[3] = Info_LoIn[4];
    c_Info_FdIn[0] = Info_FdIn[3];
    c_Info_FdIn[1] = 1.5;
    c_Info_FdIn[2] = Info_LdIn[3];
    c_Info_FdIn[3] = Info_LoIn[3];
    d_Info_FdIn[0] = Info_FdIn[1];
    d_Info_FdIn[1] = Info_FoIn[1];
    d_Info_FdIn[2] = Info_LdIn[1];
    d_Info_FdIn[3] = Info_LoIn[1];
    e_Info_FdIn[0] = Info_FdIn[0];
    e_Info_FdIn[1] = Info_FoIn[0];
    e_Info_FdIn[2] = Info_LdIn[0];
    e_Info_FdIn[3] = Info_LoIn[0];
    f_Info_FdIn[0] = Info_FdIn[2];
    f_Info_FdIn[1] = Info_FoIn[2];
    f_Info_FdIn[2] = Info_LdIn[2];
    f_Info_FdIn[3] = Info_LoIn[2];
    g_Info_FdIn[0] = Info_FdIn[1] - Info_FdIn[4] / 2.0;
    g_Info_FdIn[1] = Info_FoIn[1] + 1.25;
    g_Info_FdIn[2] = Info_LdIn[1] - Info_LdIn[4] / 2.0;
    g_Info_FdIn[3] = Info_LoIn[1] + Info_LoIn[4] / 2.0;
    for (i = 0; i < 4; i++) {
      W_veh[i] = b_Info_FdIn[i];
      L_veh[i] = c_Info_FdIn[i];
      Y[i] = d_Info_FdIn[i];
      X[i] = e_Info_FdIn[i];
      V[i] = f_Info_FdIn[i];
      Y_cal[i] = g_Info_FdIn[i];
    }

    /*      for i = 1:4 */
    /*          if abs(V(i)) > 100 */
    /*              if i <2 */
    /*                  X(i) = -200;Y(i) = y_outIn;V(i) = 0; */
    /*              elseif i < 3 */
    /*                  X(i) = -200;Y(i) = 0;V(i) = 0; */
    /*              elseif i < 4 */
    /*                  X(i) = 200;Y(i) = y_outIn;V(i) = 100; */
    /*              else */
    /*                  X(i) = 200;Y(i) = 0;V(i) = 100; */
    /*              end */
    /*          end */
    /*      end */
    X_me = Info_MeIn[0];
    Y_me = Info_MeIn[1];
    V_me = Info_MeIn[2];
    L_me = Info_MeIn[3];
    W_me = Info_MeIn[4];
    x_in = x_inIn;
    y_in = y_inIn;
    angle_in = angle_inIn;
    y_out = y_outIn;
    x_out = x_outIn;
    angle_out = angle_outIn;

    /* Time of end of longitu vel modify */
    /*      MSS = [0,0,0,0]'; */
    /*      AngleTC = [0,0,0,0]'; */
    if (b_InitFlg < 0.1) {
      memcpy(&quadsinu2tbl[0], &dv10[0], 356U * sizeof(double));
      memcpy(&quadcosu2tbl[0], &dv11[0], 356U * sizeof(double));
      b_InitFlg = 1.0;
    }
  }

  if (FinishFlg == 0.0) {
    mtmp = 45.0;
    if (X_melimit_In < 45.0) {
      mtmp = X_melimit_In;
    }

    i = 1;
    b_mtmp = SpeedLimitIn;
    if (rtIsNaN(SpeedLimitIn)) {
      ix = 2;
      exitg4 = false;
      while ((!exitg4) && (ix < 3)) {
        i = 2;
        if (!rtIsNaN(V_me + 3.0)) {
          b_mtmp = V_me + 3.0;
          exitg4 = true;
        } else {
          ix = 3;
        }
      }
    }

    if ((i < 2) && (V_me + 3.0 < b_mtmp)) {
      b_mtmp = V_me + 3.0;
    }

    UB[0] = mtmp;
    UB[1] = 1.0;
    UB[2] = b_mtmp;
    if ((fabs(V[2]) < 30.0) && (fabs(X[2]) < 200.0) && (X[2] < (V_me - V[2]) *
         fabs(V_me - V[2]) / 4.0 + 10.0)) {
      /*  X(3) < 100 */
      i = 1;
      c_mtmp = SpeedLimitIn;
      if (rtIsNaN(SpeedLimitIn)) {
        ix = 2;
        exitg3 = false;
        while ((!exitg3) && (ix < 3)) {
          i = 2;
          if (!rtIsNaN(V_me + 3.0)) {
            c_mtmp = V_me + 3.0;
            exitg3 = true;
          } else {
            ix = 3;
          }
        }
      }

      if ((i < 2) && (V_me + 3.0 < c_mtmp)) {
        c_mtmp = V_me + 3.0;
      }

      varargin_1_idx_1 = fabs(V[2] * 1.2);
      i = 1;
      if (rtIsNaN(c_mtmp)) {
        ix = 2;
        exitg2 = false;
        while ((!exitg2) && (ix < 3)) {
          i = 2;
          if (!rtIsNaN(varargin_1_idx_1)) {
            c_mtmp = varargin_1_idx_1;
            exitg2 = true;
          } else {
            ix = 3;
          }
        }
      }

      if ((i < 2) && (varargin_1_idx_1 < c_mtmp)) {
        c_mtmp = varargin_1_idx_1;
      }

      UB[2] = c_mtmp;
    }

    dv9[0] = (2.0 * mtmp + 15.0) / 3.0;
    dv9[1] = 0.73333333333333339;
    dv9[2] = (2.0 * b_mtmp + 1.0) / 3.0;
    for (i = 0; i < 3; i++) {
      xoptres[i] = dv9[i];
    }

    SQPCal(xoptres, UB, &mtmp, &b_mtmp, IterGoldenStep, IterQpStep);
    if (b_mtmp == 1.0) {
      FinishFlg = 1.0;
      if (mtmp == 1.0) {
        *PlanRes = 1.0;
        TrigCnt = 0.0;
        i = 1;
        *KurMax = k_localmaxTemp[0];
        if (rtIsNaN(k_localmaxTemp[0])) {
          ix = 2;
          exitg1 = false;
          while ((!exitg1) && (ix < 3)) {
            i = 2;
            if (!rtIsNaN(k_localmaxTemp[1])) {
              *KurMax = k_localmaxTemp[1];
              exitg1 = true;
            } else {
              ix = 3;
            }
          }
        }

        if ((i < 2) && (k_localmaxTemp[1] > *KurMax)) {
          *KurMax = k_localmaxTemp[1];
        }

        for (i = 0; i < 3; i++) {
          b_Pxoptres[i] = xoptres[i];
        }

        b_PPlanRes = 1.0;
        b_PKurMax = *KurMax;
      } else {
        /* Fail to cal the path */
        *PathPlanRetryFlg = 1.0;
      }
    } else {
      TrigCnt++;
      *IterSQPStep = TrigCnt;
    }
  } else {
    for (i = 0; i < 3; i++) {
      xoptres[i] = b_Pxoptres[i];
    }

    *PlanRes = b_PPlanRes;
    *KurMax = b_PKurMax;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Px1_not_empty_init(void)
{
  Px1_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void SQPCal_free(void)
{
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void SQPCal_init(void)
{
  int i;
  PHx.size[1] = 0;
  PHx_not_empty = false;
  RunCnt = 0.0;
  memset(&PHk[0], 0, 9U * sizeof(double));
  for (i = 0; i < 3; i++) {
    PHk[i + 3 * i] = 1.0;
  }

  memset(&PBk[0], 0, 9U * sizeof(double));
  b_FinishFlg = 0.0;
  for (i = 0; i < 3; i++) {
    PBk[i + 3 * i] = 1.0;
    Pdk[i] = 1.0;
  }

  for (i = 0; i < 15; i++) {
    PLamda[i] = 1.0;
  }

  for (i = 0; i < 3; i++) {
    PCostGTemp[i] = 0.0;
  }

  memset(&PConGTemp[0], 0, 45U * sizeof(double));

  /*  1 golden 2 qpsub */
  PCurStep = 1.0;
  for (i = 0; i < 3; i++) {
    PCostG[i] = 0.0;
  }

  memset(&PConG[0], 0, 45U * sizeof(double));
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void TrigCnt_not_empty_init(void)
{
  TrigCnt_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void b_PreGlbVal_init(void)
{
  b_InitFlg = 0.0;
}

/*
 * File trailer for PathCreatorLC.c
 *
 * [EOF]
 */
