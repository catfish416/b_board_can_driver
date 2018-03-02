/*
 * File: PathCreatorInterSection.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "PathCreatorInterSection.h"
#include "DebugMain_data.h"

/* Variable Definitions */
static double Pxoptres;
static boolean_T Pxoptres_not_empty;
static double PDeltaout;
static double PArclengthout;
static double PT_long;
static double PT_lat;
static double PPlanRes;
static double PKurMax;
static double InitFlg;

/* Function Declarations */
static void ArcPosCalInterSection(double c_angle_out, double c_angle_in, double
  c_x_in, double c_y_in, double c_x_out, double c_y_out, double x0, double x1,
  double xtarFr, double xtarRl, double *ArcFr, double *ArcRl, double
  *ypositionFr, double *ypositionRl);
static void ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *c_Delta, double
  *c_k_localmax, double *c_Arclength);
static void ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
  double c_angle_out, double c_angle_in, double c_x_in, double c_y_in, double
  c_x_out, double c_y_out, double *xposition, double *yposition, double *Theta);
static void Pfunc(double Xin, double UB, double *Pval, double *hminx);
static void PreGlbVal(const double Info_Ld[6], const double Info_Fd[6], const
                      double Info_Me[6], double c_x_out, double c_y_out);

/* Function Definitions */

/*
 * Arguments    : double c_angle_out
 *                double c_angle_in
 *                double c_x_in
 *                double c_y_in
 *                double c_x_out
 *                double c_y_out
 *                double x0
 *                double x1
 *                double xtarFr
 *                double xtarRl
 *                double *ArcFr
 *                double *ArcRl
 *                double *ypositionFr
 *                double *ypositionRl
 * Return Type  : void
 */
static void ArcPosCalInterSection(double c_angle_out, double c_angle_in, double
  c_x_in, double c_y_in, double c_x_out, double c_y_out, double x0, double x1,
  double xtarFr, double xtarRl, double *ArcFr, double *ArcRl, double
  *ypositionFr, double *ypositionRl)
{
  double temp2;
  double xposition;
  double funx1;
  double Theta;
  double xpositionFrtemp;
  int Sectn;
  temp2 = x1;

  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    Num == 1 Calculate All */
  /*    Num == 0 Calculate None */
  /*    Num == 2 Calculate Fr only */
  /*    Num == 3 Calculate Rl only */
  ElementaryPosCal(x0, Delta, Arclength, c_angle_out, c_angle_in, c_x_in, c_y_in,
                   c_x_out, c_y_out, &xposition, &funx1, &Theta);
  xpositionFrtemp = (xposition + L_me * cos(Theta)) + W_me * sin(Theta) / 2.0;

  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    Num == 1 Calculate All */
  /*    Num == 0 Calculate None */
  /*    Num == 2 Calculate Fr only */
  /*    Num == 3 Calculate Rl only */
  ElementaryPosCal(x1, Delta, Arclength, c_angle_out, c_angle_in, c_x_in, c_y_in,
                   c_x_out, c_y_out, &xposition, &funx1, &Theta);
  *ypositionFr = (funx1 + L_me * sin(Theta)) - W_me * cos(Theta) / 2.0;
  funx1 = ((xposition + L_me * cos(Theta)) + W_me * sin(Theta) / 2.0) - xtarFr;
  *ArcRl = x1 - funx1 * (x1 - x0) / (funx1 - (xpositionFrtemp - xtarFr));
  Sectn = 0;
  while ((fabs(x1 - x0) >= 0.1) && (Sectn <= 20)) {
    x0 = x1;
    x1 = *ArcRl;

    /* UNTITLED3 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*    Num == 1 Calculate All */
    /*    Num == 0 Calculate None */
    /*    Num == 2 Calculate Fr only */
    /*    Num == 3 Calculate Rl only */
    ElementaryPosCal(x0, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                     c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
    xpositionFrtemp = (xposition + L_me * cos(Theta)) + W_me * sin(Theta) / 2.0;

    /* UNTITLED3 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*    Num == 1 Calculate All */
    /*    Num == 0 Calculate None */
    /*    Num == 2 Calculate Fr only */
    /*    Num == 3 Calculate Rl only */
    ElementaryPosCal(*ArcRl, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                     c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
    *ypositionFr = (funx1 + L_me * sin(Theta)) - W_me * cos(Theta) / 2.0;
    funx1 = ((xposition + L_me * cos(Theta)) + W_me * sin(Theta) / 2.0) - xtarFr;
    *ArcRl -= funx1 * (*ArcRl - x0) / (funx1 - (xpositionFrtemp - xtarFr));
    Sectn++;
  }

  *ArcFr = *ArcRl;

  /*      x0 = temp1; */
  x0 = *ArcRl;
  x1 = temp2;

  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    Num == 1 Calculate All */
  /*    Num == 0 Calculate None */
  /*    Num == 2 Calculate Fr only */
  /*    Num == 3 Calculate Rl only */
  ElementaryPosCal(*ArcRl, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                   c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
  xpositionFrtemp = xposition - W_me * sin(Theta) / 2.0;

  /* UNTITLED3 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    Num == 1 Calculate All */
  /*    Num == 0 Calculate None */
  /*    Num == 2 Calculate Fr only */
  /*    Num == 3 Calculate Rl only */
  ElementaryPosCal(temp2, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                   c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
  *ypositionRl = funx1 + W_me * cos(Theta) / 2.0;
  funx1 = (xposition - W_me * sin(Theta) / 2.0) - xtarRl;
  *ArcRl = temp2 - funx1 * (temp2 - *ArcRl) / (funx1 - (xpositionFrtemp - xtarRl));
  Sectn = 0;
  while ((fabs(x1 - x0) >= 0.1) && (Sectn <= 20)) {
    x0 = x1;
    x1 = *ArcRl;

    /* x2=x1-fun(x1)*(x1-x0)/(fun(x1)-fun(x0));             */
    /* UNTITLED3 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*    Num == 1 Calculate All */
    /*    Num == 0 Calculate None */
    /*    Num == 2 Calculate Fr only */
    /*    Num == 3 Calculate Rl only */
    ElementaryPosCal(x0, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                     c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
    xpositionFrtemp = xposition - W_me * sin(Theta) / 2.0;

    /* UNTITLED3 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*    Num == 1 Calculate All */
    /*    Num == 0 Calculate None */
    /*    Num == 2 Calculate Fr only */
    /*    Num == 3 Calculate Rl only */
    ElementaryPosCal(*ArcRl, Delta, Arclength, c_angle_out, c_angle_in, c_x_in,
                     c_y_in, c_x_out, c_y_out, &xposition, &funx1, &Theta);
    *ypositionRl = funx1 + W_me * cos(Theta) / 2.0;
    funx1 = (xposition - W_me * sin(Theta) / 2.0) - xtarRl;
    *ArcRl -= funx1 * (*ArcRl - x0) / (funx1 - (xpositionFrtemp - xtarRl));
    Sectn++;
  }
}

/*
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
static void ElementaryPathPlot(double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double *c_Delta, double
  *c_k_localmax, double *c_Arclength)
{
  double Beta;
  double ulimit;
  double D_BetaVal;
  double r;
  double SignBeta;
  Beta = (c_angle_out - c_angle_in) / 2.0;
  ulimit = c_x_in - c_x_out;
  D_BetaVal = c_y_in - c_y_out;
  r = sqrt(ulimit * ulimit + D_BetaVal * D_BetaVal);
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
static void ElementaryPosCal(double Arc, double c_Delta, double c_Arclength,
  double c_angle_out, double c_angle_in, double c_x_in, double c_y_in, double
  c_x_out, double c_y_out, double *xposition, double *yposition, double *Theta)
{
  double Beta;
  double x_outRot;
  double y_outRot;
  double SignBeta;
  double ulimit;
  double ypositionMirrTemp;
  double b_ypositionMirrTemp;
  double xpositionMirrTemp;
  double c_ypositionMirrTemp;
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

  if (Arc < 0.0) {
    y_outRot = Arc * cos(c_angle_in) + c_x_in;
    x_outRot = Arc * sin(c_angle_in) + c_y_in;
    *Theta = c_angle_in;
  } else if (Arc <= c_Arclength / 2.0) {
    ulimit = Arc * sqrt(fabs(c_Delta) / 2.0);
    *Theta = c_Delta * (Arc * Arc) / 2.0;

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of cos(x^2),which is used */
    /*  to calculate x position */
    y_outRot = sqrt(2.0 / fabs(c_Delta)) * quadcosu2tbl[(int)(floor(ulimit /
      0.005) + 1.0) - 1];

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of sin(x^2),which is used */
    /*  to calculate y position */
    x_outRot = sqrt(2.0 / fabs(c_Delta)) * quadsinu2tbl[(int)(floor(ulimit /
      0.005) + 1.0) - 1] * SignBeta;
  } else if ((Arc > c_Arclength / 2.0) && (Arc < c_Arclength)) {
    ulimit = (c_Arclength - Arc) * sqrt(fabs(c_Delta) / 2.0);

    /* Theta = 2*Beta*SignBeta - Delta * (Arclength - Arc)^2/2;  */
    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of cos(x^2),which is used */
    /*  to calculate x position */
    ypositionMirrTemp = ulimit / 0.005;
    if (ypositionMirrTemp < 0.0) {
      b_ypositionMirrTemp = ceil(ypositionMirrTemp);
    } else {
      b_ypositionMirrTemp = floor(ypositionMirrTemp);
    }

    xpositionMirrTemp = sqrt(2.0 / fabs(c_Delta)) * quadcosu2tbl[(int)
      (b_ypositionMirrTemp + 1.0) - 1];

    /* UNTITLED4 Summary of this function goes here */
    /*    Detailed explanation goes here */
    /*  this function is used to calculate the integral of sin(x^2),which is used */
    /*  to calculate y position */
    ypositionMirrTemp = ulimit / 0.005;
    if (ypositionMirrTemp < 0.0) {
      c_ypositionMirrTemp = ceil(ypositionMirrTemp);
    } else {
      c_ypositionMirrTemp = floor(ypositionMirrTemp);
    }

    ypositionMirrTemp = sqrt(2.0 / fabs(c_Delta)) * quadsinu2tbl[(int)
      (c_ypositionMirrTemp + 1.0) - 1] * SignBeta;

    /* mirror line Ax+By+C=0 */
    ulimit = tan(1.5707963267948966 + atan(y_outRot / x_outRot));
    x_outRot = y_outRot / 2.0 - ulimit * (x_outRot / 2.0);

    /* two points are symmetrical to the Ax+By+C we just defined */
    y_outRot = xpositionMirrTemp - 2.0 * ulimit * ((ulimit * xpositionMirrTemp +
      -ypositionMirrTemp) + x_outRot) / (ulimit * ulimit + 1.0);
    x_outRot = ypositionMirrTemp - -2.0 * ((ulimit * xpositionMirrTemp +
      -ypositionMirrTemp) + x_outRot) / (ulimit * ulimit + 1.0);
    ypositionMirrTemp = c_Arclength - Arc;
    *Theta = 2.0 * fabs(Beta) * SignBeta - c_Delta * (ypositionMirrTemp *
      ypositionMirrTemp) / 2.0;
  } else {
    y_outRot = Arc * cos(c_angle_out) + c_x_out;
    x_outRot = Arc * sin(c_angle_out) + c_y_out;
    *Theta = c_angle_out;
  }

  *xposition = (y_outRot * cos(-c_angle_in) + x_outRot * sin(-c_angle_in)) +
    c_x_in;
  *yposition = (x_outRot * cos(-c_angle_in) - y_outRot * sin(-c_angle_in)) +
    c_y_in;
  *Theta += c_angle_in;
}

/*
 * Arguments    : double Xin
 *                double UB
 *                double *Pval
 *                double *hminx
 * Return Type  : void
 */
static void Pfunc(double Xin, double UB, double *Pval, double *hminx)
{
  double C[6];
  int ixstart;
  double a_me;
  double T_Cross;
  double dv5[4];
  double varargin_1[6];
  int ix;
  boolean_T exitg1;

  /*  function  Pval = Pfunc2(Xin,LB,UB) */
  /*      global ratio  */
  /*      C = ConFunc(Xin,LB,UB) */
  /*      hminx= min([0,min(-C)]); */
  /*      Pval = InterSectionCostFunc(Xin) + ratio* norm(hminx,1); */
  /*  end */
  for (ixstart = 0; ixstart < 6; ixstart++) {
    C[ixstart] = 0.0;
  }

  /* UNTITLED Summary of this function goes here */
  /*    Detailed explanation goes here */
  /*    Non linear constraints of intersection */
  a_me = (Xin * Xin - V_me * V_me) / 2.0 / Arclength;

  /*      V_CrossRr = sqrt(V_me^2 + 2*a_me*ArcCrossRl); */
  if (fabs(a_me) > 1.0E-5) {
    /*          T_CrossRr = (V_CrossRr-V_me)/a_me; */
    T_Cross = (Xin - V_me) / a_me;
  } else {
    /*          T_CrossRr = ArcCrossRl/V_me; */
    T_Cross = Arclength / V_me;
  }

  /*      V_CrossFr = sqrt(V_me^2 + 2*a_me*ArcCrossFr); */
  /*      if abs(a_me) >1e-5 */
  /*          T_CrossFr = (V_CrossFr-V_me)/a_me; */
  /*      else */
  /*          T_CrossFr = Y_CrossFr/V_Ld; */
  /*      end */
  /*      Tc(1) = T_CrossFr; */
  /*      Tc(2) = T_CrossRr;     */
  /*      T_long = T_lat; */
  /*      T_adj = 0; */
  /*       */
  /*      MSS(1) = MSSFdJudgment( V_tar,V_me,V_Fd,T_lat,Tc(1),T_lat,T_adj ); */
  /*      MSS(2) = MSSLdJudgment( V_tar,V_me,V_Ld,T_lat,Tc(2),T_lat,T_adj );     */
  /*      Y_meTemp = - Arclength + Y_tar;     */
  /*      MSSFdlimitC = Y_Fd - Y_meTemp + L_Fd + MSS(1); */
  /*      MSSLdlimitC = MSS(2) + Y_meTemp + L_me - Y_Ld; */
  /*          Xin; */
  /*          MSS; */
  /*      C(1) = MSSFdlimitC; */
  /*      C(2) = MSSLdlimitC; */
  dv5[0] = T_Cross - GTimeLimit;
  dv5[1] = T_Cross - GTimeLimit;

  /*  local vehicle position is calculated approximately, using Y = Ax + B, by */
  /*  solving the local position - Fd/Ld position, we can judge whether the two */
  /*  vehicle will collide in the process  */
  /* TnearFr = fzero(@(t) (Y_Ld + V_Ld * T_CrossFr - L_Ld + V_Ld * t) - (CorLength + L_me - Y_CrossFr) / (Arclength - ArcCossFr) * (V_CrossFr*t + a_me * t^2 /2) - Y_CrossFr,0); */
  /*      CRootFrLd(3) = Y_Ld + V_Ld * T_CrossFr - L_Ld - Y_CrossFr; */
  /*      CRootFrLd(2) = V_Ld - (CorLength + L_me - Y_CrossFr) / (Arclength - ArcCrossFr) * V_CrossFr; */
  /*      CRootFrLd(1) = (CorLength + L_me - Y_CrossFr) / (Arclength - ArcCrossFr) * (a_me / 2 ); */
  /*      %TnearRr = fzero(@(t) (Y_Fd + V_Fd * T_CrossRr + V_Fd * t) - (CorLength - Y_CrossRl) / (Arclength - ArcCossRr) * (V_CrossRr*t + a_me * t^2 /2) - Y_CrossRl,0); */
  /*      CRootRrFd(3) = Y_Fd + V_Fd * T_CrossRr - Y_CrossRl; */
  /*      CRootRrFd(2) = V_Fd - (CorLength - Y_CrossRl) / (Arclength - ArcCrossRl) * V_CrossRr; */
  /*      CRootRrFd(1) = (CorLength - Y_CrossRl) / (Arclength - ArcCrossRl) * (a_me /2); */
  /*      % Judge whether the time to collide lies within T_cross, if not, the path */
  /*      % will be considered as a safe path */
  /*      if (CRootFrLd(2)^2-4*CRootFrLd(3)*CRootFrLd(1)) >= 0 */
  /*          RootFrLdtemp = roots(CRootFrLd); */
  /*          RootFrLd = real(RootFrLdtemp); */
  /*          if CRootFrLd(1) ==0 */
  /*              RootFrLd(2) = RootFrLd(1); */
  /*          end */
  /*          if(RootFrLd(2)>= 0) */
  /*              C(1) = -(RootFrLd(2) + T_CrossFr) + T_Cross; */
  /*          elseif(RootFrLd(1) >= 0) */
  /*              C(1) = -(RootFrLd(1) + T_CrossFr) + T_Cross;         */
  /*          else */
  /*              C(1) = -1; */
  /*          end */
  /*      else */
  /*          C(1) = -1;     */
  /*      end */
  /*      if (CRootRrFd(2)^2-4*CRootRrFd(3)*CRootRrFd(1)) >= 0 */
  /*          RootRrFdtemp = roots(CRootRrFd); */
  /*          RootRrFd = real(RootRrFdtemp); */
  /*          if CRootRrFd(1) ==0 */
  /*              RootRrFd(2) = RootRrFd(1); */
  /*          end */
  /*          if(RootRrFd(2)>= 0) */
  /*              C(2) = -(RootRrFd(2) + T_CrossRr) + T_Cross; */
  /*          elseif(RootRrFd(1) >= 0) */
  /*              C(2) = -(RootRrFd(1) + T_CrossRr) + T_Cross;         */
  /*          else */
  /*              C(2) = -1; */
  /*          end */
  /*      else */
  /*          C(2) = -1;  */
  /*      end */
  /*  ay is calculated approximately using the half Arclength position, where */
  /*  the corning radius is the smallest */
  /*      C(3) = V_CrossFr^2 * Delta * Arclength/2 - aylimit; */
  dv5[2] = (Xin * Xin + V_me * V_me) / 2.0 * Delta * Arclength / 2.0 - aylimit;
  dv5[3] = fabs(a_me) - axlimit;
  for (ixstart = 0; ixstart < 4; ixstart++) {
    C[ixstart] = dv5[ixstart];
  }

  C[4] = Xin - UB;
  C[5] = 0.0 - Xin;

  /*      C=-C; */
  for (ixstart = 0; ixstart < 6; ixstart++) {
    varargin_1[ixstart] = -C[ixstart];
  }

  ixstart = 1;
  a_me = varargin_1[0];
  if (rtIsNaN(varargin_1[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 7)) {
      ixstart = ix;
      if (!rtIsNaN(varargin_1[ix - 1])) {
        a_me = varargin_1[ix - 1];
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 6) {
    while (ixstart + 1 < 7) {
      if (varargin_1[ixstart] < a_me) {
        a_me = varargin_1[ixstart];
      }

      ixstart++;
    }
  }

  *hminx = 0.0;
  if (a_me < 0.0) {
    *hminx = a_me;
  }

  /* UNTITLED2 Summary of this function goes here */
  /*    Detailed explanation goes here */
  *Pval = -Xin + ratio * fabs(*hminx);
}

/*
 * Arguments    : const double Info_Ld[6]
 *                const double Info_Fd[6]
 *                const double Info_Me[6]
 *                double c_x_out
 *                double c_y_out
 * Return Type  : void
 */
static void PreGlbVal(const double Info_Ld[6], const double Info_Fd[6], const
                      double Info_Me[6], double c_x_out, double c_y_out)
{
  static const double dv3[356] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0E-5, 1.0E-5,
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

  static const double dv4[356] = { 0.0, 0.005, 0.01, 0.015, 0.02, 0.025, 0.03,
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

  /* Config doublecheck of the safe judgement when driving through intersection */
  /* Config plot the process or not */
  /* Config check the accuracy of y postion estimate */
  /* cor start point at intersection which is also the Radius of the intersection */
  CorLength = 20.0;
  ratio = 1000.0;

  /* the 1/2 direction changed in the intersection    */
  /*      x_out,y_out,angle_out; */
  if (fabs(Info_Ld[2]) > 100.0) {
    /* Invalid Leading vehicle */
    X_Ld = c_x_out;
    Y_Ld = c_y_out + 100.0;
    V_Ld = 30.0;
    L_Ld = 2.5;
    W_Ld = 1.5;
  } else {
    X_Ld = Info_Ld[0];
    Y_Ld = Info_Ld[1];
    V_Ld = Info_Ld[2];
    L_Ld = Info_Ld[3];
    W_Ld = Info_Ld[4];
  }

  if (fabs(Info_Fd[2]) > 100.0) {
    /* Invalid Leading vehicle */
    X_Fd = c_x_out;
    Y_Fd = c_y_out - 100.0;
    V_Fd = 0.0;
    L_Fd = 2.5;
    W_Fd = 1.5;
  } else {
    X_Fd = Info_Fd[0];
    Y_Fd = Info_Fd[1];
    V_Fd = Info_Fd[2];
    L_Fd = Info_Fd[3];
    W_Fd = Info_Fd[4];
  }

  V_me = Info_Me[2];
  L_me = Info_Me[3];
  W_me = Info_Me[4];
  Y_tar = 20.0;
  aylimit = 1.5;
  axlimit = 1.0;
  ArcCrossFr = 0.0;
  ArcCrossRl = 0.0;
  Y_CrossFr = 0.0;
  Y_CrossRl = 0.0;
  if (InitFlg < 0.1) {
    memcpy(&quadsinu2tbl[0], &dv3[0], 356U * sizeof(double));
    memcpy(&quadcosu2tbl[0], &dv4[0], 356U * sizeof(double));
    InitFlg = 1.0;
  }
}

/*
 * Arguments    : const double Info_Ld[6]
 *                const double Info_Fd[6]
 *                const double Info_Me[6]
 *                double c_x_in
 *                double c_y_in
 *                double c_angle_in
 *                double c_x_out
 *                double c_y_out
 *                double c_angle_out
 *                double TrigFlg
 *                double CurOP
 *                double SpeedLimitIn
 *                double PathFinishFlg
 *                double TimeLimit
 *                double *xoptres
 *                double *Deltaout
 *                double *Arclengthout
 *                double *T_long
 *                double *c_T_lat
 *                double *PlanRes
 *                double *KurMax
 *                double *IterGoldenStep
 *                double *PathPlanRetryFlg
 * Return Type  : void
 */
void PathCreatorInterSection(const double Info_Ld[6], const double Info_Fd[6],
  const double Info_Me[6], double c_x_in, double c_y_in, double c_angle_in,
  double c_x_out, double c_y_out, double c_angle_out, double TrigFlg, double
  CurOP, double SpeedLimitIn, double PathFinishFlg, double TimeLimit, double
  *xoptres, double *Deltaout, double *Arclengthout, double *T_long, double
  *c_T_lat, double *PlanRes, double *KurMax, double *IterGoldenStep, double
  *PathPlanRetryFlg)
{
  int ixstart;
  double mtmp;
  int ix;
  boolean_T exitg2;
  double a_me;
  double varargin_1[3];
  double alpha;
  boolean_T exitg1;
  double a;
  double beta;
  double f_alpha;
  double f_beta;
  if ((!Pxoptres_not_empty) || (PathFinishFlg == 1.0) || ((fabs(CurOP - 2.0) >
        0.1) && (fabs(CurOP - 1.0) > 0.1))) {
    Pxoptres = 0.0;
    Pxoptres_not_empty = true;
    PDeltaout = 0.0;
    PArclengthout = 0.0;
    PT_long = 0.0;
    PT_lat = 0.0;
    PPlanRes = 0.0;
    PKurMax = 0.0;
  }

  *PathPlanRetryFlg = 0.0;
  *IterGoldenStep = 0.0;
  if (TrigFlg > 0.1) {
    Pxoptres = 0.0;
    PDeltaout = 0.0;
    PArclengthout = 0.0;
    PT_long = 0.0;
    PT_lat = 0.0;
    PPlanRes = 0.0;
    PKurMax = 0.0;
    GTimeLimit = TimeLimit;
    PreGlbVal(Info_Ld, Info_Fd, Info_Me, c_x_out, c_y_out);
    ElementaryPathPlot(c_x_in, c_y_in, c_angle_in, c_x_out, c_y_out, c_angle_out,
                       &Delta, &k_localmax, &Arclength);
    ArcPosCalInterSection(c_angle_out, c_angle_in, c_x_in, c_y_in, c_x_out,
                          c_y_out, 0.3 * Arclength, 0.9 * Arclength, X_Ld - 1.0,
                          X_Ld - 1.0, &ArcCrossFr, &ArcCrossRl, &Y_CrossFr,
                          &Y_CrossRl);
    ixstart = 1;
    mtmp = SpeedLimitIn;
    if (rtIsNaN(SpeedLimitIn)) {
      ix = 2;
      exitg2 = false;
      while ((!exitg2) && (ix < 3)) {
        ixstart = 2;
        if (!rtIsNaN(V_me + 3.0)) {
          mtmp = V_me + 3.0;
          exitg2 = true;
        } else {
          ix = 3;
        }
      }
    }

    if ((ixstart < 2) && (V_me + 3.0 < mtmp)) {
      mtmp = V_me + 3.0;
    }

    /* x0 = [V_Ld]; */
    /* xoptres = SQPCal(x0',LB',UB'); */
    /*          upbound = min([(V_me^2 + 2*axlimit*Arclength),(4*aylimit/Arclength/abs(Delta) - V_me^2),UB]); */
    /*          lobound = max([0,(V_me^2 - 2*axlimit*Arclength),(-4*aylimit/Arclength/abs(Delta) - V_me^2),LB]); */
    a_me = 4.0 * aylimit / Arclength / fabs(Delta) - V_me * V_me;
    ixstart = 1;
    if (rtIsNaN(a_me)) {
      ixstart = 2;
      a_me = 0.0;
    }

    if ((ixstart < 2) && (0.0 > a_me)) {
      a_me = 0.0;
    }

    varargin_1[0] = V_me * V_me + 2.0 * axlimit * Arclength;
    varargin_1[1] = a_me;
    varargin_1[2] = SpeedLimitIn * SpeedLimitIn;
    ixstart = 1;
    alpha = varargin_1[0];
    if (rtIsNaN(varargin_1[0])) {
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix < 4)) {
        ixstart = ix;
        if (!rtIsNaN(varargin_1[ix - 1])) {
          alpha = varargin_1[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < 3) {
      while (ixstart + 1 < 4) {
        if (varargin_1[ixstart] < alpha) {
          alpha = varargin_1[ixstart];
        }

        ixstart++;
      }
    }

    varargin_1[0] = 0.0;
    varargin_1[1] = V_me * V_me - 2.0 * axlimit * Arclength;
    varargin_1[2] = -4.0 * aylimit / Arclength / fabs(Delta) - V_me * V_me;
    a_me = 0.0;
    for (ix = 0; ix < 2; ix++) {
      if (varargin_1[ix + 1] > a_me) {
        a_me = varargin_1[ix + 1];
      }
    }

    if (a_me < alpha) {
      a = sqrt(a_me);
      *xoptres = sqrt(alpha);
      *IterGoldenStep = 0.0;
      alpha = a + 0.38196602 * (*xoptres - a);
      beta = a + 0.61803398 * (*xoptres - a);
      Pfunc(alpha, mtmp, &f_alpha, &a_me);
      Pfunc(beta, mtmp, &f_beta, &a_me);
      while (fabs(*xoptres - a) > 0.1) {
        (*IterGoldenStep)++;

        /*      a1=a;  b1=b; */
        if (alpha > beta) {
          /*          a=a1;b=b1; */
          alpha = a + 0.38196602 * (*xoptres - a);
          beta = a + 0.61803398 * (*xoptres - a);
          Pfunc(alpha, mtmp, &f_alpha, &a_me);
          Pfunc(beta, mtmp, &f_beta, &a_me);
        }

        if (f_alpha <= f_beta) {
          *xoptres = beta;
          beta = alpha;
          f_beta = f_alpha;
          alpha = a + (*xoptres - alpha);
          Pfunc(alpha, mtmp, &f_alpha, &a_me);

          /*          a1=a;  b1=b; */
        } else {
          a = alpha;
          alpha = beta;
          f_alpha = f_beta;
          beta = *xoptres - (beta - a);
          Pfunc(beta, mtmp, &f_beta, &a_me);

          /*          a1=a;  b1=b; */
        }
      }

      /*      bestStep = (a + b)/2; */
      /*      hminx = (hminx_beta + hminx_alpha)/2; */
      /*       */
      Pfunc(a, mtmp, &a_me, &alpha);
      Pfunc(*xoptres, mtmp, &beta, &f_alpha);
      if (a_me < beta) {
        *xoptres = a;
        f_alpha = alpha;
      }

      /*      if Pfunc(a,LB,UB)<Pfunc(b,LB,UB) */
      /*          bestStep=a; */
      /*      else */
      /*          bestStep=b; */
      /*      end */
      if (f_alpha >= -0.01) {
        a_me = (*xoptres * *xoptres - V_me * V_me) / 2.0 / Arclength;
        if (fabs(a_me) > 1.0E-5) {
          *T_long = (*xoptres - V_me) / a_me;
        } else {
          *T_long = Arclength / V_me;
        }

        *c_T_lat = *T_long;
        *Deltaout = Delta;
        *Arclengthout = Arclength;
        *PlanRes = 1.0;
        *KurMax = k_localmax;
        Pxoptres = *xoptres;
        PDeltaout = Delta;
        PArclengthout = Arclength;
        PT_long = *T_long;
        PT_lat = *T_long;
        PPlanRes = 1.0;
        PKurMax = k_localmax;
      } else {
        *PathPlanRetryFlg = 1.0;
        *xoptres = 0.0;
        *Deltaout = 0.0;
        *Arclengthout = 0.0;
        *T_long = 0.0;
        *c_T_lat = 0.0;
        *PlanRes = 0.0;
        *KurMax = 0.0;
      }
    } else {
      *PathPlanRetryFlg = 1.0;
      *xoptres = 0.0;
      *Deltaout = 0.0;
      *Arclengthout = 0.0;
      *T_long = 0.0;
      *c_T_lat = 0.0;
      *PlanRes = 0.0;
      *KurMax = 0.0;
    }
  } else {
    *xoptres = Pxoptres;
    *Deltaout = PDeltaout;
    *Arclengthout = PArclengthout;
    *T_long = PT_long;
    *c_T_lat = PT_lat;
    *PlanRes = PPlanRes;
    *KurMax = PKurMax;
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PreGlbVal_init(void)
{
  InitFlg = 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void Pxoptres_not_empty_init(void)
{
  Pxoptres_not_empty = false;
}

/*
 * File trailer for PathCreatorInterSection.c
 *
 * [EOF]
 */
