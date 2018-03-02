/*
 * File: PosUpdateLC.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "PosUpdateLC.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double b_PrePointCalEn;
static boolean_T b_PrePointCalEn_not_empty;
static double b_PointCalEn;
static boolean_T PointCalEn_not_empty;
static double PDeltaTemp[2];
static double PArclengthTol[2];
static double Ptheta_qitemp;
static double b_Pangle_in;
static double b_Px_in;
static double b_Py_in;
static double Px_qitemp;
static double Py_qitemp;
static double b_Pangle_out;
static double b_Px_out;
static double b_Py_out;
static double b_PTime;
static double c_PT_long;
static double b_PV_me;
static double d_PV_tar;
static double PPreTmTransCnt;
static double PInLaneLCTrans;
static boolean_T PInLaneLCTrans_not_empty;
static double PPathPlanRes;
static double PToLeftOrRight;
static double PxpositionNex;
static double PypositionNex;

/* Function Declarations */
static void b_qiConfigCal(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *x_qi, double *y_qi,
  double *theta_qi);
static void c_ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *c_Delta, double
  *c_k_localmax, double *c_Arclength);
static void c_ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
  double c_angle_out, double c_angle_in, double c_x_in, double c_y_in, double
  c_x_out, double c_y_out, double *xposition, double *yposition, double *Theta);

/* Function Definitions */

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
static void b_qiConfigCal(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *x_qi, double *y_qi,
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
static void c_ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
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

  /* Droot = fzero(@(x) sin(x)*quadsinu2(x)+cos(x)*quadcosu2(x), pi); */
  *c_Delta = 8.0 * SignBeta * (D_BetaVal * D_BetaVal) / (r * r);

  /* longth of the trajectary      */
  *c_Arclength = 2.0 * sqrt(2.0 * fabs(Beta / *c_Delta * SignBeta));
  *c_k_localmax = *c_Delta * *c_Arclength / 2.0;

  /*      ArcPos = 0:(Arclength/Nlen):Arclength; */
  /* mirror line Ax+By+C=0 */
  /*      x_mirr = (x_inRot + x_outRot)/2; */
  /*      y_mirr = (y_inRot + y_outRot)/2; */
  /*      angle_mirr = pi/2 + atan((y_outRot - y_inRot)/(x_outRot - x_inRot));     */
  /*      A = tan(angle_mirr); */
  /*      B = -1; */
  /*      C = y_mirr - A * x_mirr;     */
  /*      for i=1:length(ArcPos) */
  /*          if ArcPos(i)<=Arclength/2 */
  /*              ulimit = ArcPos(i) * sqrt(abs(Delta)/2); */
  /*              xposition(i) = sqrt(2/abs(Delta))*quadcosu2(ulimit); */
  /*              yposition(i) = sqrt(2/abs(Delta))*quadsinu2(ulimit) * SignBeta; */
  /*              Theta(i) = Delta * (ArcPos(i))^2/2; */
  /*              kur(i) = ArcPos(i)*Delta; */
  /*               */
  /*          else */
  /*              ulimit = (Arclength - ArcPos(i)) * sqrt(abs(Delta)/2);    */
  /*              xpositionMirrTemp = sqrt(2/abs(Delta))*quadcosu2(ulimit); */
  /*              ypositionMirrTemp = sqrt(2/abs(Delta))*quadsinu2(ulimit) * SignBeta; */
  /*              %two points are symmetrical to the Ax+By+C we just defined */
  /*              xposition(i) = xpositionMirrTemp - 2*A*(A*xpositionMirrTemp+B*ypositionMirrTemp+C)/(A^2+B^2); */
  /*              yposition(i) = ypositionMirrTemp - 2*B*(A*xpositionMirrTemp+B*ypositionMirrTemp+C)/(A^2+B^2); */
  /*              Theta(i) = 2*Beta*SignBeta - Delta * (Arclength - ArcPos(i))^2/2;   */
  /*              kur(i) = (Arclength - ArcPos(i))*Delta;   */
  /*               */
  /*          end */
  /*          %Rotate and move back */
  /*          x_positionMove = xposition(i)*cos(-theta_rot) + yposition(i)*sin(-theta_rot); */
  /*          y_positionMove = yposition(i)*cos(-theta_rot) - xposition(i)*sin(-theta_rot); */
  /*   */
  /*          xposition(i) = x_positionMove + x_in; */
  /*          yposition(i) = y_positionMove + y_in; */
  /*          Theta(i) = Theta(i) + theta_rot; */
  /*      end    */
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
static void c_ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
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
 * Arguments    : void
 * Return Type  : void
 */
void PInLaneLCTrans_not_empty_init(void)
{
  PInLaneLCTrans_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PointCalEn_not_empty_init(void)
{
  PointCalEn_not_empty = false;
}

/*
 * Arguments    : const double xoptres[3]
 *                double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_y_out
 *                double c_angle_out
 *                double Info_Me[6]
 *                double PreTime
 *                double PathPlanRes
 *                double ToLeftOrRight
 *                const double PreInfo_Me[6]
 *                double LCTransEn
 *                double LCEnSts
 *                double *PreTimeAcu
 *                double *xpositionPre
 *                double *ypositionPre
 *                double *Ax
 *                double *Ay
 *                double *Vx
 *                double *Vy
 *                double *Theta
 *                double *xpositionNex
 *                double *ypositionNex
 *                double *PathPlanSucFlg
 *                double *PathTrjFinishFlg
 *                double *LCInTransState
 * Return Type  : void
 */
void PosUpdateLC(const double xoptres[3], double c_x_in, double c_y_in, double
                 c_angle_in, double c_y_out, double c_angle_out, double Info_Me
                 [6], double PreTime, double PathPlanRes, double ToLeftOrRight,
                 const double PreInfo_Me[6], double LCTransEn, double LCEnSts,
                 double *PreTimeAcu, double *xpositionPre, double *ypositionPre,
                 double *Ax, double *Ay, double *Vx, double *Vy, double *Theta,
                 double *xpositionNex, double *ypositionNex, double
                 *PathPlanSucFlg, double *PathTrjFinishFlg, double
                 *LCInTransState)
{
  int FirstTrigFlg;
  int i7;
  double b_DeltaTemp[2];
  double PreDis;
  double b_ArclengthTol[2];
  double Kur;
  double V_tarPos;
  double Arc;
  *xpositionPre = 0.0;
  *ypositionPre = 0.0;
  *Ax = 0.0;
  *Ay = 0.0;
  *Vx = 0.0;
  *Vy = 0.0;
  *Theta = 0.0;
  *PathTrjFinishFlg = 0.0;
  FirstTrigFlg = 0;
  *PathPlanSucFlg = PathPlanRes;
  *LCInTransState = 0.0;

  /*      if (isempty(PrePointCalEn))||(PathPlanRes < 1e-1)||(CurOp < 4) */
  if ((!b_PrePointCalEn_not_empty) || (LCEnSts < 0.5)) {
    b_PrePointCalEn = 0.0;
    b_PrePointCalEn_not_empty = true;
    b_PointCalEn = 0.0;
    PointCalEn_not_empty = true;
    for (i7 = 0; i7 < 2; i7++) {
      PDeltaTemp[i7] = 0.0;
      PArclengthTol[i7] = 0.0;
    }

    Ptheta_qitemp = 0.0;
    b_Pangle_in = 0.0;
    b_Px_in = 0.0;
    b_Py_in = 0.0;
    Px_qitemp = 0.0;
    Py_qitemp = 0.0;
    b_Pangle_out = 0.0;
    b_Px_out = 0.0;
    b_Py_out = 0.0;
    b_PTime = 0.0;
    c_PT_long = 0.0;
    b_PV_me = 0.0;
    d_PV_tar = 0.0;
    PPreTmTransCnt = 50.0;
    PPathPlanRes = 0.0;
    PToLeftOrRight = 0.0;
    PxpositionNex = 0.0;
    PypositionNex = 0.0;
    PInLaneLCTrans = 0.0;
    PInLaneLCTrans_not_empty = true;
  }

  if (!PointCalEn_not_empty) {
    b_PointCalEn = 0.0;
  }

  if (!PInLaneLCTrans_not_empty) {
    PInLaneLCTrans = 0.0;
  }

  if ((!(b_PointCalEn < 0.1)) && (PInLaneLCTrans > 0.5)) {
    /*  If In LC transition state */
    if (!(PToLeftOrRight > 0.5)) {
      Info_Me[1] = -Info_Me[1];
      Info_Me[5] = -Info_Me[5];
    }

    /*  New PPres Rising Edge or Exit Trans and PPres = 0; */
    if (((PathPlanRes > 0.5) && (PPathPlanRes < 0.5)) || ((LCTransEn < 0.5) &&
         (PathPlanRes < 0.5))) {
      /* End Transition to accept new PlanRes */
      b_PrePointCalEn = 0.0;
      b_PointCalEn = 0.0;
      PInLaneLCTrans = 0.0;
    }
  }

  if (PInLaneLCTrans > 0.5) {
    for (i7 = 0; i7 < 6; i7++) {
      Info_Me[i7] = PreInfo_Me[i7];
    }
  }

  if ((b_PointCalEn < 0.1) && (PathPlanRes > 0.1)) {
    b_PointCalEn = 1.0;
    if (b_PrePointCalEn < 0.1) {
      b_PrePointCalEn = 1.0;
      FirstTrigFlg = 1;
    }
  }

  if (fabs(PathPlanRes - PPathPlanRes) > 0.1) {
    PPathPlanRes = PathPlanRes;
  }

  *xpositionNex = 0.0;
  *ypositionNex = 0.0;

  /*  Not supposed to work */
  *PreTimeAcu = 2.0;
  if (b_PointCalEn > 0.1) {
    if (FirstTrigFlg > 0.1) {
      b_qiConfigCal(c_x_in, c_y_in, c_angle_in, xoptres[0], c_y_out, c_angle_out,
                    &Px_qitemp, &Py_qitemp, &Ptheta_qitemp);
      c_ElementaryPathPlot(c_x_in, c_y_in, c_angle_in, Px_qitemp, Py_qitemp,
                           Ptheta_qitemp, &b_DeltaTemp[0], &PreDis,
                           &b_ArclengthTol[0]);
      c_ElementaryPathPlot(Px_qitemp, Py_qitemp, Ptheta_qitemp, xoptres[0],
                           c_y_out, c_angle_out, &b_DeltaTemp[1], &PreDis,
                           &b_ArclengthTol[1]);
      PToLeftOrRight = ToLeftOrRight;

      /*              Pxoptres = xoptres; */
      for (i7 = 0; i7 < 2; i7++) {
        PDeltaTemp[i7] = b_DeltaTemp[i7];
        PArclengthTol[i7] = b_ArclengthTol[i7];
      }

      b_Pangle_in = c_angle_in;
      b_Px_in = c_x_in;
      b_Py_in = c_y_in;
      b_Pangle_out = c_angle_out;
      b_Px_out = xoptres[0];
      b_Py_out = c_y_out;
      b_PTime = 0.0;
      c_PT_long = xoptres[1] * 2.0 * (b_ArclengthTol[0] + b_ArclengthTol[1]) /
        (xoptres[2] + Info_Me[2]);
      d_PV_tar = xoptres[2];
      b_PV_me = Info_Me[2];
      PPreTmTransCnt = 50.0;
      PInLaneLCTrans = 0.0;
      PxpositionNex = 0.0;
      PypositionNex = 0.0;
    } else {
      b_PTime += 0.01;
    }

    /*  Transition of Preview Time */
    if (PPreTmTransCnt > 0.5) {
      PPreTmTransCnt--;
      PreTime = (50.0 - PPreTmTransCnt) / 50.0 + 1.0;
    }

    FirstTrigFlg = 0;
    Kur = 0.0;
    V_tarPos = 0.0;
    PreDis = 0.0;
    while ((FirstTrigFlg < 0.5) || ((PreDis < 1.0) && (FirstTrigFlg < 10))) {
      FirstTrigFlg++;
      PreDis = b_PTime + PreTime * (double)FirstTrigFlg;
      *PreTimeAcu = PreTime * (double)FirstTrigFlg;
      if (PreDis <= c_PT_long) {
        if (fabs(d_PV_tar - b_PV_me) > 1.0E-5) {
          Kur = (d_PV_tar - b_PV_me) / c_PT_long;
        } else {
          Kur = 0.0;
        }

        Arc = b_PV_me * PreDis + 0.5 * Kur * (PreDis * PreDis);
        V_tarPos = b_PV_me + PreDis * Kur;
      } else {
        Arc = (b_PV_me + d_PV_tar) / 2.0 * c_PT_long + (PreDis - c_PT_long) *
          d_PV_tar;
        V_tarPos = d_PV_tar;
      }

      if (Arc <= PArclengthTol[0]) {
        c_ElementaryPosCal(Arc, PDeltaTemp[0], PArclengthTol[0], Ptheta_qitemp,
                           b_Pangle_in, b_Px_in, b_Py_in, Px_qitemp, Py_qitemp,
                           xpositionPre, ypositionPre, Theta);
        if (Arc <= PArclengthTol[0] / 2.0) {
          Kur = Arc * PDeltaTemp[0];
        } else {
          Kur = PDeltaTemp[0] * Arc - PArclengthTol[0] / 2.0 * PDeltaTemp[0];
        }
      } else if (Arc <= PArclengthTol[0] + PArclengthTol[1]) {
        Arc -= PArclengthTol[0];
        c_ElementaryPosCal(Arc, PDeltaTemp[1], PArclengthTol[1], b_Pangle_out,
                           Ptheta_qitemp, Px_qitemp, Py_qitemp, b_Px_out,
                           b_Py_out, xpositionPre, ypositionPre, Theta);
        if (Arc <= PArclengthTol[1] / 2.0) {
          Kur = Arc * PDeltaTemp[1];
        } else {
          Kur = PDeltaTemp[1] * Arc - PArclengthTol[1] / 2.0 * PDeltaTemp[1];
        }
      } else {
        Arc = (Arc - PArclengthTol[0]) - PArclengthTol[1];

        /*              if Time > PT_long */
        *xpositionPre = b_Px_out + Arc * cos(b_Pangle_out);
        *ypositionPre = b_Py_out + Arc * sin(b_Pangle_out);

        /*              else                 */
        /*              end */
        /*  Straight line preview point calculate; */
        *Theta = 0.0;
        Kur = 0.0;
      }

      PreDis = (*xpositionPre - Info_Me[0]) * cos(Info_Me[5]) + (*ypositionPre -
        Info_Me[1]) * sin(Info_Me[5]);
    }

    *Vx = V_tarPos * cos(*Theta);
    *Vy = V_tarPos * sin(*Theta);
    PreDis = V_tarPos * V_tarPos * Kur;
    *Ax = PreDis * cos(*Theta);
    *Ay = PreDis * sin(*Theta);

    /* To cal next point */
    if (b_PTime + 0.01 <= c_PT_long) {
      if (fabs(d_PV_tar - b_PV_me) > 1.0E-5) {
        Kur = (d_PV_tar - b_PV_me) / c_PT_long;
      } else {
        Kur = 0.0;
      }

      Arc = b_PV_me * (b_PTime + 0.01) + 0.5 * Kur * ((b_PTime + 0.01) *
        (b_PTime + 0.01));
    } else {
      Arc = (b_PV_me + d_PV_tar) / 2.0 * c_PT_long + ((b_PTime + 0.01) -
        c_PT_long) * d_PV_tar;
    }

    if (Arc <= PArclengthTol[0]) {
      c_ElementaryPosCal(Arc, PDeltaTemp[0], PArclengthTol[0], Ptheta_qitemp,
                         b_Pangle_in, b_Px_in, b_Py_in, Px_qitemp, Py_qitemp,
                         &Kur, &V_tarPos, &PreDis);

      /*              Pxposition = xpositionPre;Pyposition = ypositionPre; */
    } else if (Arc <= PArclengthTol[0] + PArclengthTol[1]) {
      Arc -= PArclengthTol[0];
      c_ElementaryPosCal(Arc, PDeltaTemp[1], PArclengthTol[1], b_Pangle_out,
                         Ptheta_qitemp, Px_qitemp, Py_qitemp, b_Px_out, b_Py_out,
                         &Kur, &V_tarPos, &PreDis);

      /*              Pxposition = xpositionPre;Pyposition = ypositionPre; */
    } else {
      Arc = (Arc - PArclengthTol[0]) - PArclengthTol[1];

      /*              if Time > PT_long */
      Kur = b_Px_out + Arc * cos(b_Pangle_out);
      V_tarPos = b_Py_out + Arc * sin(b_Pangle_out);

      /*              else                 */
      /*              end */
      /*  Straight line preview point calculate; */
      /*                  if PathPlanRes < 1e-1  */
      /*                      if LCTransEn < 0.5 */
      /*                          PointCalEn = 0;PrePointCalEn = 0; */
      /*                      else */
      /*                          PInLaneLCTrans = 1; */
      /*                          PathPlanSucFlg = 1; */
      /*                      end */
      /*                  end */
      if (LCTransEn < 0.5) {
        if (PathPlanRes < 0.1) {
          b_PointCalEn = 0.0;
          b_PrePointCalEn = 0.0;
        }
      } else {
        PInLaneLCTrans = 1.0;
        *PathPlanSucFlg = 1.0;
      }

      *PathTrjFinishFlg = 1.0;
    }

    *xpositionNex = PxpositionNex;
    *ypositionNex = PypositionNex;
    PxpositionNex = Kur;
    PypositionNex = V_tarPos;
    if (!(PToLeftOrRight > 0.1)) {
      *ypositionPre = -*ypositionPre;
      *Ay = -*Ay;
      *Vy = -*Vy;
      *Theta = -*Theta;
      *ypositionNex = -*ypositionNex;
    }

    *LCInTransState = PInLaneLCTrans;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void b_PrePointCalEn_not_empty_init(void)
{
  b_PrePointCalEn_not_empty = false;
}

/*
 * File trailer for PosUpdateLC.c
 *
 * [EOF]
 */
