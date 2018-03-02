/*
 * File: ElementaryPosCalInterSection.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "ElementaryPosCalInterSection.h"
#include "sign.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double PrePointCalEn;
static boolean_T PrePointCalEn_not_empty;
static double PointCalEn;
static double c_PV_tar;
static double PDelta;
static double PArclength;
static double b_PT_long;
static double Px_in;
static double Py_in;
static double Pangle_in;
static double Px_out;
static double Py_out;
static double Pangle_out;
static double PTime;
static double PV_me;
static double c_PGCXorig;
static double c_PGCYorig;
static double c_PGCThetaorig;

/* Function Declarations */
static void CordTransferBackInterSection(const double Info_Me[6], double
  PGCdxposition, double PGCdyposition, double PGCdAx, double PGCdAy, double
  PGCdVx, double PGCdVy, double PGCdTheta, double PGCdxpositionNex, double
  PGCdypositionNex, const double PGCdInfo[3], double FlagInit, double
  GCdInfo_Me[6], double *GCdxposition, double *GCdyposition, double *GCdAx,
  double *GCdAy, double *GCdVx, double *GCdVy, double *GCdTheta, double
  *GCdxpositionNex, double *GCdypositionNex);
static double quadcosu2(double ulimit);
static double quadsinu2(double ulimit);

/* Function Definitions */

/*
 * RoadInfo(1,1) = Info_Me(1);RoadInfo(1,2) = Info_Me(2);RoadInfo(1,3) = Info_Me(6);RoadInfo(1,4) = EgoLaneInfo(2);
 * Arguments    : const double Info_Me[6]
 *                double PGCdxposition
 *                double PGCdyposition
 *                double PGCdAx
 *                double PGCdAy
 *                double PGCdVx
 *                double PGCdVy
 *                double PGCdTheta
 *                double PGCdxpositionNex
 *                double PGCdypositionNex
 *                const double PGCdInfo[3]
 *                double FlagInit
 *                double GCdInfo_Me[6]
 *                double *GCdxposition
 *                double *GCdyposition
 *                double *GCdAx
 *                double *GCdAy
 *                double *GCdVx
 *                double *GCdVy
 *                double *GCdTheta
 *                double *GCdxpositionNex
 *                double *GCdypositionNex
 * Return Type  : void
 */
static void CordTransferBackInterSection(const double Info_Me[6], double
  PGCdxposition, double PGCdyposition, double PGCdAx, double PGCdAy, double
  PGCdVx, double PGCdVy, double PGCdTheta, double PGCdxpositionNex, double
  PGCdypositionNex, const double PGCdInfo[3], double FlagInit, double
  GCdInfo_Me[6], double *GCdxposition, double *GCdyposition, double *GCdAx,
  double *GCdAy, double *GCdVx, double *GCdVy, double *GCdTheta, double
  *GCdxpositionNex, double *GCdypositionNex)
{
  int i6;
  for (i6 = 0; i6 < 6; i6++) {
    GCdInfo_Me[i6] = Info_Me[i6];
  }

  /*      if abs(CurOpTemp - CurOpGCd) >1e-1 */
  /*          CurOpTemp = CurOpGCd; */
  /*          if abs(CurOpGCd - 2) < 1e-1 */
  /*              PGCXorig = -PGCdInfo(1); */
  /*              PGCYorig = -PGCdInfo(2); */
  /*              PGCThetaorig = -PGCdInfo(3); */
  /*          else */
  /*              PGCXorig = 0;PGCThetaorig = 0;PGCYorig = 0; */
  /*          end */
  /*      else */
  /*      end */
  if (FlagInit > 0.5) {
    c_PGCXorig = -PGCdInfo[0];
    c_PGCYorig = -PGCdInfo[1];
    c_PGCThetaorig = -PGCdInfo[2];
  }

  *GCdAx = PGCdAx * cos(c_PGCThetaorig) + PGCdAy * sin(c_PGCThetaorig);
  *GCdAy = PGCdAy * cos(c_PGCThetaorig) - PGCdAx * sin(c_PGCThetaorig);
  *GCdVx = PGCdVx * cos(c_PGCThetaorig) + PGCdVy * sin(c_PGCThetaorig);
  *GCdVy = PGCdVy * cos(c_PGCThetaorig) - PGCdVx * sin(c_PGCThetaorig);
  *GCdxposition = (PGCdxposition * cos(c_PGCThetaorig) + PGCdyposition * sin
                   (c_PGCThetaorig)) - c_PGCXorig;
  *GCdyposition = (PGCdyposition * cos(c_PGCThetaorig) - PGCdxposition * sin
                   (c_PGCThetaorig)) - c_PGCYorig;
  *GCdTheta = PGCdTheta - c_PGCThetaorig;
  *GCdxpositionNex = (PGCdxpositionNex * cos(c_PGCThetaorig) + PGCdypositionNex *
                      sin(c_PGCThetaorig)) - c_PGCXorig;
  *GCdypositionNex = (PGCdypositionNex * cos(c_PGCThetaorig) - PGCdxpositionNex *
                      sin(c_PGCThetaorig)) - c_PGCYorig;
  GCdInfo_Me[0] = (Info_Me[0] * cos(c_PGCThetaorig) + Info_Me[1] * sin
                   (c_PGCThetaorig)) - c_PGCXorig;
  GCdInfo_Me[1] = (Info_Me[1] * cos(c_PGCThetaorig) - Info_Me[0] * sin
                   (c_PGCThetaorig)) - c_PGCYorig;
  GCdInfo_Me[5] = Info_Me[5] - c_PGCThetaorig;
}

/*
 * UNTITLED4 Summary of this function goes here
 *    Detailed explanation goes here
 *  this function is used to calculate the integral of cos(x^2),which is used
 *  to calculate x position
 * Arguments    : double ulimit
 * Return Type  : double
 */
static double quadcosu2(double ulimit)
{
  double y;
  double b_y;
  y = ulimit / 0.005;
  if (y < 0.0) {
    b_y = ceil(y);
  } else {
    b_y = floor(y);
  }

  return quadcosu2tbl[(int)(b_y + 1.0) - 1];
}

/*
 * UNTITLED4 Summary of this function goes here
 *    Detailed explanation goes here
 *  this function is used to calculate the integral of sin(x^2),which is used
 *  to calculate y position
 * Arguments    : double ulimit
 * Return Type  : double
 */
static double quadsinu2(double ulimit)
{
  double y;
  double b_y;
  y = ulimit / 0.005;
  if (y < 0.0) {
    b_y = ceil(y);
  } else {
    b_y = floor(y);
  }

  return quadsinu2tbl[(int)(b_y + 1.0) - 1];
}

/*
 * UNTITLED Summary of this function goes here
 *    Detailed explanation goes here
 * Arguments    : const double Info_Me[6]
 *                double V_tar
 *                double c_Delta
 *                double c_Arclength
 *                double T_long
 *                double PathPlanRes
 *                double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_x_out
 *                double c_y_out
 *                double c_angle_out
 *                double b_CurOp
 *                const double PGCdInfo[3]
 *                double GCdInfo_Me[6]
 *                double *GCdxposition
 *                double *GCdyposition
 *                double *GCdAx
 *                double *GCdAy
 *                double *GCdVx
 *                double *GCdVy
 *                double *GCdTheta
 *                double *GCdxpositionNex
 *                double *GCdypositionNex
 *                double *PreTimeAcu
 *                double *PathTrjFinishFlg
 * Return Type  : void
 */
void ElementaryPosCalInterSection(const double Info_Me[6], double V_tar, double
  c_Delta, double c_Arclength, double T_long, double PathPlanRes, double c_x_in,
  double c_y_in, double c_angle_in, double c_x_out, double c_y_out, double
  c_angle_out, double b_CurOp, const double PGCdInfo[3], double GCdInfo_Me[6],
  double *GCdxposition, double *GCdyposition, double *GCdAx, double *GCdAy,
  double *GCdVx, double *GCdVy, double *GCdTheta, double *GCdxpositionNex,
  double *GCdypositionNex, double *PreTimeAcu, double *PathTrjFinishFlg)
{
  int FirstTrigFlg;
  int FlagInit;
  double xpositionPre;
  double ypositionPre;
  double Ax;
  double Ay;
  double Vx;
  double Vy;
  double Theta;
  double xpositionNex;
  double ypositionNex;
  double Arc;
  double a_me;
  double Beta;
  double y_outRot;
  double SignBeta;
  double xpositionTemp;
  double xpositionMirrTemp;
  double A;
  if ((!PrePointCalEn_not_empty) || (PathPlanRes < 0.1) || ((fabs(b_CurOp - 1.0)
        > 0.1) && (fabs(b_CurOp - 2.0) > 0.1))) {
    PrePointCalEn = 0.0;
    PrePointCalEn_not_empty = true;
    PointCalEn = 0.0;
    c_PV_tar = 0.0;
    PDelta = 0.0;
    PArclength = 0.0;
    b_PT_long = 0.0;
    Px_in = 0.0;
    Py_in = 0.0;
    Pangle_in = 0.0;
    Px_out = 0.0;
    Py_out = 0.0;
    PTime = 0.0;
    Pangle_out = 0.0;
    PV_me = 0.0;
  }

  FirstTrigFlg = 0;
  FlagInit = 0;
  if ((PointCalEn < 0.1) && (PathPlanRes > 0.1)) {
    PointCalEn = 1.0;
    if (PrePointCalEn < 0.1) {
      PrePointCalEn = 1.0;
      FirstTrigFlg = 1;
      FlagInit = 1;
    }
  }

  xpositionPre = 0.0;
  ypositionPre = 0.0;
  Ax = 0.0;
  Ay = 0.0;
  Vx = 0.0;
  Vy = 0.0;
  Theta = 0.0;
  *PathTrjFinishFlg = 0.0;
  xpositionNex = 0.0;
  ypositionNex = 0.0;
  *PreTimeAcu = 2.0;
  if (PointCalEn > 0.1) {
    if (FirstTrigFlg > 0.1) {
      c_PV_tar = V_tar;
      PDelta = c_Delta;
      PArclength = c_Arclength;
      b_PT_long = T_long;
      Px_in = c_x_in;
      Py_in = c_y_in;
      Pangle_in = c_angle_in;
      Px_out = c_x_out;
      Py_out = c_y_out;
      Pangle_out = c_angle_out;
      PV_me = Info_Me[2];
      PTime = 0.0;
    } else {
      PTime += 0.01;
    }

    FirstTrigFlg = 0;
    Ay = 0.0;
    ypositionNex = 0.0;

    /*          while((xpositionPre < (Info_Me(1)+0.5))&&(StopFlg<0.5)&&((i<0.5)||(PosPreDisEn>0.5)))||((StopFlg>0.5)&&(i<0.5)) */
    /*          while(i<0.5)||((xpositionPre < (Info_Me(1)+0.5))&&(StopFlg<0.5)&&(PosPreDisEn>0.5)&&(i<10)) */
    /*          while(i<0.5)||((PreDis<0.5)&&(StopFlg<0.5)&&(PosPreDisEn>0.5)&&(i<10)) */
    while (FirstTrigFlg < 0.5) {
      FirstTrigFlg++;
      ypositionNex = PTime + 2.0 * (double)FirstTrigFlg;
      *PreTimeAcu = 2.0 * (double)FirstTrigFlg;

      /*          Time = PTime + PreTime;  */
      /*                  Time = PTime + PreTime;      */
      if (ypositionNex <= b_PT_long) {
        if (fabs(c_PV_tar - PV_me) > 1.0E-5) {
          a_me = (c_PV_tar - PV_me) / b_PT_long;
        } else {
          a_me = 0.0;
        }

        Arc = PV_me * ypositionNex + 0.5 * a_me * (ypositionNex * ypositionNex);
        Ay = PV_me + ypositionNex * a_me;
      } else {
        Arc = (PV_me + c_PV_tar) / 2.0 * b_PT_long + (ypositionNex - b_PT_long) *
          c_PV_tar;
        Ay = c_PV_tar;
      }

      /*                  if Time > PT_lat */
      /*                      if Time <= PT_long */
      /*                          if abs(PV_tar - PV_me) >1e-5 */
      /*                              a_me = (PV_tar - PV_me)/PT_long; */
      /*                          else */
      /*                              a_me = 0; */
      /*                          end */
      /*                          Arc = PV_me * Time + 0.5 * a_me * Time ^2; */
      /*                          V_tarPos = PV_me + Time * a_me; */
      /*                      else */
      /*                          Arc = (PV_me + PV_tar) /2 * PT_long + (Time - PT_long) * PV_tar;             */
      /*                          V_tarPos = PV_tar; */
      /*                      end */
      /*                      V_tarPos = PV_tar; */
      /*                  else */
      /*                      if Time <= PT_long */
      /*                          if abs(PV_tar - PV_me) >1e-5 */
      /*                              a_me = (PV_tar - PV_me)/PT_long; */
      /*                          else */
      /*                              a_me = 0; */
      /*                          end */
      /*                          Arc = PV_me * Time + 0.5 * a_me * Time ^2; */
      /*                          V_tarPos = PV_me + Time * a_me; */
      /*                      else */
      /*                          Arc = (PV_me + PV_tar) /2 * PT_long + (Time - PT_long) * PV_tar;             */
      /*                          V_tarPos = PV_tar; */
      /*                      end */
      /*                  end */
      Beta = (Pangle_out - Pangle_in) / 2.0;
      xpositionNex = (Px_out - Px_in) * cos(Pangle_in) + (Py_out - Py_in) * sin
        (Pangle_in);
      y_outRot = (Py_out - Py_in) * cos(Pangle_in) - (Px_out - Px_in) * sin
        (Pangle_in);
      if (Beta == 0.0) {
        SignBeta = 1.0;
      } else {
        SignBeta = Beta;
        b_sign(&SignBeta);
      }

      if (Arc < PArclength / 2.0) {
        ypositionNex = Arc * sqrt(fabs(PDelta) / 2.0);
        Theta = PDelta * (Arc * Arc) / 2.0;
        a_me = fabs(PDelta);
        xpositionTemp = sqrt(2.0 / a_me) * quadcosu2(ypositionNex);
        a_me = fabs(PDelta);
        a_me = sqrt(2.0 / a_me) * quadsinu2(ypositionNex) * SignBeta;
        ypositionNex = Arc * PDelta;
      } else if (Arc <= PArclength) {
        ypositionNex = (PArclength - Arc) * sqrt(fabs(PDelta) / 2.0);

        /* Theta = 2*Beta*SignBeta - Delta * (Arclength - Arc)^2/2;  */
        a_me = fabs(PDelta);
        xpositionMirrTemp = sqrt(2.0 / a_me) * quadcosu2(ypositionNex);
        a_me = fabs(PDelta);
        a_me = sqrt(2.0 / a_me) * quadsinu2(ypositionNex) * SignBeta;

        /* mirror line Ax+By+C=0 */
        A = tan(1.5707963267948966 + atan(y_outRot / xpositionNex));
        ypositionNex = y_outRot / 2.0 - A * (xpositionNex / 2.0);

        /* two points are symmetrical to the Ax+By+C we just defined */
        xpositionTemp = xpositionMirrTemp - 2.0 * A * ((A * xpositionMirrTemp +
          -a_me) + ypositionNex) / (A * A + 1.0);
        a_me -= -2.0 * ((A * xpositionMirrTemp + -a_me) + ypositionNex) / (A * A
          + 1.0);
        ypositionNex = PArclength - Arc;
        Theta = 2.0 * fabs(Beta) * SignBeta - PDelta * (ypositionNex *
          ypositionNex) / 2.0;
        ypositionNex = PDelta * Arc - PArclength / 2.0 * PDelta;
      } else {
        xpositionTemp = xpositionNex + (Arc - PArclength) * cos(Pangle_out -
          Pangle_in);
        a_me = y_outRot + (Arc - PArclength) * sin(Pangle_out - Pangle_in);

        /*              PrePointCalEn = 0;PointCalEn = 0;FirstTrigFlg = 0;Kur = 0;Theta = 0; */
        /*              PathTrjFinishFlg = 1; */
        ypositionNex = 0.0;
        Theta = 0.0;
      }

      xpositionPre = (xpositionTemp * cos(-Pangle_in) + a_me * sin(-Pangle_in))
        + Px_in;
      ypositionPre = (a_me * cos(-Pangle_in) - xpositionTemp * sin(-Pangle_in))
        + Py_in;
      Theta += Pangle_in;
    }

    Vx = Ay * cos(Theta);
    Vy = Ay * sin(Theta);
    ypositionNex *= Ay * Ay;
    Ax = ypositionNex * cos(Theta);
    Ay = ypositionNex * sin(Theta);

    /* To Cal next point */
    /*          V_tarPos = 255; */
    if (PTime + 0.01 <= b_PT_long) {
      if (fabs(c_PV_tar - PV_me) > 1.0E-5) {
        a_me = (c_PV_tar - PV_me) / b_PT_long;
      } else {
        a_me = 0.0;
      }

      Arc = PV_me * (PTime + 0.01) + 0.5 * a_me * ((PTime + 0.01) * (PTime +
        0.01));
    } else {
      Arc = (PV_me + c_PV_tar) / 2.0 * b_PT_long + ((PTime + 0.01) - b_PT_long) *
        c_PV_tar;
    }

    /*              if Time > PT_lat */
    /*                  if Time <= PT_long */
    /*                      if abs(PV_tar - PV_me) >1e-5 */
    /*                          a_me = (PV_tar - PV_me)/PT_long; */
    /*                      else */
    /*                          a_me = 0; */
    /*                      end */
    /*                      Arc = PV_me * Time + 0.5 * a_me * Time ^2; */
    /*                  else */
    /*                      Arc = (PV_me + PV_tar) /2 * PT_long + (Time - PT_long) * PV_tar;             */
    /*                  end */
    /*   */
    /*              else */
    /*                  if Time <= PT_long */
    /*                      if abs(PV_tar - PV_me) >1e-5 */
    /*                          a_me = (PV_tar - PV_me)/PT_long; */
    /*                      else */
    /*                          a_me = 0; */
    /*                      end */
    /*                      Arc = PV_me * Time + 0.5 * a_me * Time ^2; */
    /*                  else */
    /*                      Arc = (PV_me + PV_tar) /2 * PT_long + (Time - PT_long) * PV_tar;             */
    /*                  end */
    /*              end */
    Beta = (Pangle_out - Pangle_in) / 2.0;
    xpositionNex = (Px_out - Px_in) * cos(Pangle_in) + (Py_out - Py_in) * sin
      (Pangle_in);
    y_outRot = (Py_out - Py_in) * cos(Pangle_in) - (Px_out - Px_in) * sin
      (Pangle_in);
    if (Beta == 0.0) {
      SignBeta = 1.0;
    } else {
      SignBeta = Beta;
      b_sign(&SignBeta);
    }

    if (Arc < PArclength / 2.0) {
      ypositionNex = Arc * sqrt(fabs(PDelta) / 2.0);
      a_me = fabs(PDelta);
      xpositionTemp = sqrt(2.0 / a_me) * quadcosu2(ypositionNex);
      a_me = fabs(PDelta);
      a_me = sqrt(2.0 / a_me) * quadsinu2(ypositionNex) * SignBeta;
    } else if (Arc <= PArclength) {
      ypositionNex = (PArclength - Arc) * sqrt(fabs(PDelta) / 2.0);
      a_me = fabs(PDelta);
      xpositionMirrTemp = sqrt(2.0 / a_me) * quadcosu2(ypositionNex);
      a_me = fabs(PDelta);
      a_me = sqrt(2.0 / a_me) * quadsinu2(ypositionNex) * SignBeta;

      /* mirror line Ax+By+C=0 */
      A = tan(1.5707963267948966 + atan(y_outRot / xpositionNex));
      ypositionNex = y_outRot / 2.0 - A * (xpositionNex / 2.0);

      /* two points are symmetrical to the Ax+By+C we just defined */
      xpositionTemp = xpositionMirrTemp - 2.0 * A * ((A * xpositionMirrTemp +
        -a_me) + ypositionNex) / (A * A + 1.0);
      a_me -= -2.0 * ((A * xpositionMirrTemp + -a_me) + ypositionNex) / (A * A +
        1.0);
    } else {
      /*                  if Time >= PT_long */
      xpositionTemp = xpositionNex + (Arc - PArclength) * cos(Pangle_out -
        Pangle_in);
      a_me = y_outRot + (Arc - PArclength) * sin(Pangle_out - Pangle_in);

      /*                  else        */
      /*                      xpositionTemp = 0;ypositionTemp = 0; */
      /*                  end   */
      if (PathPlanRes < 0.1) {
        PrePointCalEn = 0.0;
        PointCalEn = 0.0;
      }

      *PathTrjFinishFlg = 1.0;
    }

    xpositionNex = (xpositionTemp * cos(-Pangle_in) + a_me * sin(-Pangle_in)) +
      Px_in;
    ypositionNex = (a_me * cos(-Pangle_in) - xpositionTemp * sin(-Pangle_in)) +
      Py_in;

    /* To Cal next point */
  } else {
    /*          PathTrjFinishFlg = 1; */
  }

  CordTransferBackInterSection(Info_Me, xpositionPre, ypositionPre, Ax, Ay, Vx,
    Vy, Theta, xpositionNex, ypositionNex, PGCdInfo, FlagInit, GCdInfo_Me,
    GCdxposition, GCdyposition, GCdAx, GCdAy, GCdVx, GCdVy, GCdTheta,
    GCdxpositionNex, GCdypositionNex);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PrePointCalEn_not_empty_init(void)
{
  PrePointCalEn_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void c_CordTransferBackInterSection_(void)
{
  c_PGCXorig = 0.0;
  c_PGCYorig = 0.0;
  c_PGCThetaorig = 0.0;
}

/*
 * File trailer for ElementaryPosCalInterSection.c
 *
 * [EOF]
 */
