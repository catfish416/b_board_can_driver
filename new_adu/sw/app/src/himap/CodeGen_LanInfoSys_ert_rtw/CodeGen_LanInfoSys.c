/*
 * File: CodeGen_LanInfoSys.c
 *
 * Code generated for Simulink model 'CodeGen_LanInfoSys'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 19:27:17 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen_LanInfoSys.h"
#include "CodeGen_LanInfoSys_private.h"
#include "M2S_Map.h"
/* Exported block signals */
real_T VehicleState[8];                /* '<Root>/MATLAB Function' */
real_T TrackPoint[300];                /* '<Root>/MATLAB Function' */
real_T EgoTrackPoint[300];             /* '<Root>/MATLAB Function' */
real_T Navi_InfoTurn[28];              /* '<Root>/MATLAB Function' */
real_T Lane_NumInfo[3];                /* '<Root>/MATLAB Function' */
real_T outLine_ShapeInfo[100];         /* '<Root>/MATLAB Function' */

/* Block signals (auto storage) */
B_CodeGen_LanInfoSys_T CodeGen_LanInfoSys_B;

/* Block states (auto storage) */
DW_CodeGen_LanInfoSys_T CodeGen_LanInfoSys_DW;

/* Real-time model */
RT_MODEL_CodeGen_LanInfoSys_T CodeGen_LanInfoSys_M_;
RT_MODEL_CodeGen_LanInfoSys_T *const CodeGen_LanInfoSys_M =
  &CodeGen_LanInfoSys_M_;

/* Forward declaration for local functions */
static real_T CodeGen_LanInfoSys_CyclicInc(real_T b_index, real_T MaxIndex);
static real_T CodeGen_LanInfoSys_mod(real_T x);
static real_T CodeGen_LanInfoSys_eml_xnrm2_j(int32_T n, const real_T x_data[],
  int32_T ix0);
static real_T CodeGen_LanInfoSys_eml_div(real_T x, real_T y);
static void CodeGen_LanInfoSy_eml_qrsolve_i(const real_T A_data[], const int32_T
  A_sizes[2], real_T B_data[], real_T Y[2], real_T *rankR);
static void CodeGen_LanInfoSys_polyfit_l(const real_T x_data[], const int32_T
  x_sizes, const real_T y_data[], const int32_T y_sizes, real_T p[2]);
static real_T CodeGen_LanInfoSys_eml_xnrm2(int32_T n, const real_T x_data[],
  int32_T ix0);
static void CodeGen_LanInfoSys_eml_xswap(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0);
static void CodeGen_LanInf_eml_matlab_zlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work[4]);
static void CodeGen_LanInfoSys_eml_qrsolve(const real_T A_data[], const int32_T
  A_sizes[2], real_T B_data[], real_T Y[4], real_T *rankR);
static void CodeGen_LanInfoSys_polyfit(const real_T x_data[], const int32_T
  x_sizes, const real_T y_data[], const int32_T y_sizes, real_T p[4]);
static real_T CodeGen_LanInfoSys_CyclicDec(real_T b_index);
static real_T CodeGen_LanInfoSys_angcal(real_T x1, real_T b_y1, real_T x2,
  real_T y2);



/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_CyclicInc(real_T b_index, real_T MaxIndex)
{
  real_T outIndex;
  if (b_index + 1.0 > MaxIndex) {
    outIndex = 1.0;
  } else {
    outIndex = b_index + 1.0;
  }

  return outIndex;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_mod(real_T x)
{
  return x - floor(x / 2.0) * 2.0;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_eml_xnrm2_j(int32_T n, const real_T x_data[],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T a;
  real_T b;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt(a * a + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt(b * b + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = b;
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_eml_div(real_T x, real_T y)
{
  return x / y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInfoSy_eml_qrsolve_i(const real_T A_data[], const int32_T
  A_sizes[2], real_T B_data[], real_T Y[2], real_T *rankR)
{
  int32_T mn;
  real_T tol;
  int8_T jpvt[2];
  real_T work[2];
  real_T vn1[2];
  int32_T b_k;
  int32_T mmi;
  real_T atmp;
  int32_T ix;
  int32_T iy;
  int32_T knt;
  int32_T lastv;
  int32_T lastc;
  real_T absxk;
  boolean_T exitg2;
  real_T b_A_data[100];
  int32_T b_A_sizes[2];
  real_T tau_data[2];
  tol = A_sizes[0];
  if (!(tol <= 2.0)) {
    tol = 2.0;
  }

  mn = (int32_T)tol - 1;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = 2;
  lastc = A_sizes[0] * A_sizes[1];
  for (mmi = 0; mmi < lastc; mmi++) {
    b_A_data[mmi] = A_data[mmi];
  }

  jpvt[0] = 1;
  jpvt[1] = 2;
  work[0] = 0.0;
  work[1] = 0.0;
  tol = CodeGen_LanInfoSys_eml_xnrm2_j(A_sizes[0], A_data, 1);
  b_k = 1 + A_sizes[0];
  vn1[0] = tol;
  tol = CodeGen_LanInfoSys_eml_xnrm2_j(A_sizes[0], A_data, b_k);
  vn1[1] = tol;
  mmi = A_sizes[0] - 1;
  b_k = 0;
  ix = 0;
  tol = fabs(vn1[0]);
  iy = 2;
  while (iy <= 2) {
    ix++;
    atmp = fabs(vn1[ix]);
    if (atmp > tol) {
      b_k = 1;
      tol = atmp;
    }

    iy = 3;
  }

  ix = b_k;
  if (ix + 1 != 1) {
    b_k = A_sizes[0] * ix;
    iy = 0;
    for (knt = 1; knt <= A_sizes[0]; knt++) {
      tol = b_A_data[b_k];
      b_A_data[b_k] = b_A_data[iy];
      b_A_data[iy] = tol;
      b_k++;
      iy++;
    }

    b_k = jpvt[ix];
    jpvt[ix] = 1;
    jpvt[0] = (int8_T)b_k;
  }

  atmp = b_A_data[0];
  absxk = 0.0;
  if (!(1 + mmi <= 0)) {
    tol = CodeGen_LanInfoSys_eml_xnrm2_j(mmi, b_A_data, 2);
    if (tol != 0.0) {
      tol = rt_hypotd_snf(b_A_data[0], tol);
      if (b_A_data[0] >= 0.0) {
        tol = -tol;
      }

      if (fabs(tol) < 1.0020841800044864E-292) {
        knt = 0;
        do {
          knt++;
          b_k = mmi;
          for (iy = 1; iy + 1 <= b_k + 1; iy++) {
            b_A_data[iy] *= 9.9792015476736E+291;
          }

          tol *= 9.9792015476736E+291;
          atmp *= 9.9792015476736E+291;
        } while (!(fabs(tol) >= 1.0020841800044864E-292));

        tol = CodeGen_LanInfoSys_eml_xnrm2_j(mmi, b_A_data, 2);
        tol = rt_hypotd_snf(atmp, tol);
        if (atmp >= 0.0) {
          tol = -tol;
        }

        absxk = (tol - atmp) / tol;
        atmp = 1.0 / (atmp - tol);
        for (iy = 1; iy + 1 <= b_k + 1; iy++) {
          b_A_data[iy] *= atmp;
        }

        for (b_k = 1; b_k <= knt; b_k++) {
          tol *= 1.0020841800044864E-292;
        }

        atmp = tol;
      } else {
        absxk = (tol - b_A_data[0]) / tol;
        atmp = 1.0 / (b_A_data[0] - tol);
        b_k = mmi;
        for (iy = 1; iy + 1 <= b_k + 1; iy++) {
          b_A_data[iy] *= atmp;
        }

        atmp = tol;
      }
    }
  }

  tau_data[0] = absxk;
  b_A_data[0] = atmp;
  atmp = b_A_data[0];
  b_A_data[0] = 1.0;
  if (tau_data[0] != 0.0) {
    lastv = mmi + 1;
    b_k = mmi;
    while ((lastv > 0) && (b_A_data[b_k] == 0.0)) {
      lastv--;
      b_k--;
    }

    lastc = 1;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      b_k = A_sizes[0];
      do {
        knt = 0;
        if (b_k + 1 <= A_sizes[0] + lastv) {
          if (b_A_data[b_k] != 0.0) {
            knt = 1;
          } else {
            b_k++;
          }
        } else {
          lastc = 0;
          knt = 2;
        }
      } while (knt == 0);

      if (knt == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      work[0] = 0.0;
      b_k = 0;
      for (ix = 1 + A_sizes[0]; ix <= A_sizes[0] + 1; ix += A_sizes[0]) {
        iy = 0;
        tol = 0.0;
        knt = (ix + lastv) - 1;
        for (mmi = ix; mmi <= knt; mmi++) {
          tol += b_A_data[mmi - 1] * b_A_data[iy];
          iy++;
        }

        work[b_k] += tol;
        b_k++;
      }
    }

    if (!(-tau_data[0] == 0.0)) {
      knt = A_sizes[0];
      mmi = 0;
      b_k = 1;
      while (b_k <= lastc) {
        if (work[mmi] != 0.0) {
          tol = work[mmi] * -tau_data[0];
          b_k = 0;
          ix = lastv + knt;
          for (iy = knt; iy + 1 <= ix; iy++) {
            b_A_data[iy] += b_A_data[b_k] * tol;
            b_k++;
          }
        }

        mmi++;
        knt += A_sizes[0];
        b_k = 2;
      }
    }
  }

  b_A_data[0] = atmp;
  lastc = 1 + A_sizes[0];
  mmi = A_sizes[0] - 2;
  atmp = b_A_data[lastc];
  absxk = 0.0;
  if (!(1 + mmi <= 0)) {
    tol = CodeGen_LanInfoSys_eml_xnrm2_j(mmi, b_A_data, lastc + 2);
    if (tol != 0.0) {
      tol = rt_hypotd_snf(b_A_data[lastc], tol);
      if (b_A_data[lastc] >= 0.0) {
        tol = -tol;
      }

      if (fabs(tol) < 1.0020841800044864E-292) {
        knt = 0;
        do {
          knt++;
          b_k = lastc + mmi;
          for (iy = lastc + 1; iy + 1 <= b_k + 1; iy++) {
            b_A_data[iy] *= 9.9792015476736E+291;
          }

          tol *= 9.9792015476736E+291;
          atmp *= 9.9792015476736E+291;
        } while (!(fabs(tol) >= 1.0020841800044864E-292));

        tol = CodeGen_LanInfoSys_eml_xnrm2_j(mmi, b_A_data, lastc + 2);
        tol = rt_hypotd_snf(atmp, tol);
        if (atmp >= 0.0) {
          tol = -tol;
        }

        absxk = (tol - atmp) / tol;
        atmp = 1.0 / (atmp - tol);
        b_k = lastc + mmi;
        for (iy = lastc + 1; iy + 1 <= b_k + 1; iy++) {
          b_A_data[iy] *= atmp;
        }

        for (b_k = 1; b_k <= knt; b_k++) {
          tol *= 1.0020841800044864E-292;
        }

        atmp = tol;
      } else {
        absxk = (tol - b_A_data[lastc]) / tol;
        atmp = 1.0 / (b_A_data[lastc] - tol);
        b_k = lastc + mmi;
        for (iy = lastc + 1; iy + 1 <= b_k + 1; iy++) {
          b_A_data[iy] *= atmp;
        }

        atmp = tol;
      }
    }
  }

  tau_data[1] = absxk;
  b_A_data[lastc] = atmp;
  *rankR = 0.0;
  tol = A_sizes[0];
  if (!(tol >= 2.0)) {
    tol = 2.0;
  }

  tol = tol * fabs(b_A_data[0]) * 2.2204460492503131E-16;
  b_k = 0;
  while ((b_k <= mn) && (!(fabs(b_A_data[b_A_sizes[0] * b_k + b_k]) <= tol))) {
    (*rankR)++;
    b_k++;
  }

  Y[0] = 0.0;
  Y[1] = 0.0;
  for (iy = 0; iy <= mn; iy++) {
    if (tau_data[iy] != 0.0) {
      tol = B_data[iy];
      b_k = A_sizes[0] - iy;
      for (ix = 0; ix <= b_k - 2; ix++) {
        knt = (iy + ix) + 1;
        tol += b_A_data[b_A_sizes[0] * iy + knt] * B_data[knt];
      }

      tol *= tau_data[iy];
      if (tol != 0.0) {
        B_data[iy] -= tol;
        b_k = A_sizes[0] - iy;
        for (ix = 0; ix <= b_k - 2; ix++) {
          knt = (iy + ix) + 1;
          B_data[knt] -= b_A_data[b_A_sizes[0] * iy + knt] * tol;
        }
      }
    }
  }

  for (b_k = 0; b_k <= mn; b_k++) {
    Y[jpvt[b_k] - 1] = B_data[b_k];
  }

  for (b_k = 0; b_k <= mn; b_k++) {
    ix = mn - b_k;
    Y[jpvt[ix] - 1] = CodeGen_LanInfoSys_eml_div(Y[jpvt[ix] - 1],
      b_A_data[b_A_sizes[0] * ix + ix]);
    iy = 0;
    while (iy <= ix - 1) {
      Y[jpvt[0] - 1] -= Y[jpvt[ix] - 1] * b_A_data[b_A_sizes[0] * ix];
      iy = 1;
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInfoSys_polyfit_l(const real_T x_data[], const int32_T
  x_sizes, const real_T y_data[], const int32_T y_sizes, real_T p[2])
{
  real_T p1[2];
  real_T rr;
  int32_T k;
  int32_T i;
  int32_T loop_ub;
  real_T V_data[100];
  int32_T V_sizes[2];
  real_T y_data_0[50];
  int8_T b_idx_0;
  b_idx_0 = (int8_T)x_sizes;
  V_sizes[0] = b_idx_0;
  V_sizes[1] = 2;
  for (k = 0; k < x_sizes; k++) {
    V_data[k + V_sizes[0]] = 1.0;
  }

  for (k = 0; k < x_sizes; k++) {
    V_data[k] = x_data[k];
  }

  k = y_sizes;
  loop_ub = y_sizes;
  for (i = 0; i < loop_ub; i++) {
    y_data_0[i] = y_data[i];
  }

  CodeGen_LanInfoSy_eml_qrsolve_i(V_data, V_sizes, y_data_0, p1, &rr);
  p[0] = p1[0];
  p[1] = p1[1];
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_eml_xnrm2(int32_T n, const real_T x_data[],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInfoSys_eml_xswap(int32_T n, real_T x_data[], int32_T ix0,
  int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 1; k <= n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix++;
    iy++;
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInf_eml_matlab_zlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[], int32_T ic0, int32_T ldc, real_T work[4])
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  int32_T ix;
  real_T c;
  int32_T iac;
  int32_T d;
  int32_T b_ia;
  int32_T jy;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C_data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = (lastc - 1) * ldc + ic0;
      jy = i;
      do {
        iac = 0;
        if (jy <= (i + lastv) - 1) {
          if (C_data[jy - 1] != 0.0) {
            iac = 1;
          } else {
            jy++;
          }
        } else {
          lastc--;
          iac = 2;
        }
      } while (iac == 0);

      if (iac == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (i = 1; i <= lastc; i++) {
        work[i - 1] = 0.0;
      }

      i = 0;
      jy = (lastc - 1) * ldc + ic0;
      for (iac = ic0; iac <= jy; iac += ldc) {
        ix = iv0;
        c = 0.0;
        d = (iac + lastv) - 1;
        for (b_ia = iac; b_ia <= d; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work[i] += c;
        i++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      jy = 0;
      for (iac = 1; iac <= lastc; iac++) {
        if (work[jy] != 0.0) {
          c = work[jy] * -tau;
          ix = iv0;
          d = lastv + i;
          for (b_ia = i; b_ia + 1 <= d; b_ia++) {
            C_data[b_ia] += C_data[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        i += ldc;
      }
    }
  }
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInfoSys_eml_qrsolve(const real_T A_data[], const int32_T
  A_sizes[2], real_T B_data[], real_T Y[4], real_T *rankR)
{
  real_T tol;
  int8_T jpvt[4];
  real_T work[4];
  real_T vn1[4];
  real_T vn2[4];
  int32_T b_k;
  int32_T i_i;
  int32_T mmi;
  real_T atmp;
  int32_T ix;
  real_T beta1;
  int32_T b_knt;
  int32_T kend;
  real_T t;
  real_T b_A_data[200];
  int32_T b_A_sizes[2];
  real_T tau_data_idx_0;
  real_T tau_data_idx_1;
  real_T tau_data_idx_2;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = 4;
  b_k = A_sizes[0] * A_sizes[1];
  for (mmi = 0; mmi < b_k; mmi++) {
    b_A_data[mmi] = A_data[mmi];
  }

  jpvt[0] = 1;
  jpvt[1] = 2;
  jpvt[2] = 3;
  jpvt[3] = 4;
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  work[3] = 0.0;
  tol = CodeGen_LanInfoSys_eml_xnrm2(A_sizes[0], A_data, 1);
  vn2[0] = tol;
  b_k = 1 + A_sizes[0];
  vn1[0] = tol;
  tol = CodeGen_LanInfoSys_eml_xnrm2(A_sizes[0], A_data, b_k);
  vn2[1] = tol;
  b_k += A_sizes[0];
  vn1[1] = tol;
  tol = CodeGen_LanInfoSys_eml_xnrm2(A_sizes[0], A_data, b_k);
  vn2[2] = tol;
  b_k += A_sizes[0];
  vn1[2] = tol;
  tol = CodeGen_LanInfoSys_eml_xnrm2(A_sizes[0], A_data, b_k);
  vn2[3] = tol;
  vn1[3] = tol;
  mmi = A_sizes[0];
  b_k = 1;
  ix = 0;
  tol = fabs(vn1[0]);
  for (kend = 2; kend < 5; kend++) {
    ix++;
    beta1 = fabs(vn1[ix]);
    if (beta1 > tol) {
      b_k = kend;
      tol = beta1;
    }
  }

  b_k--;
  if (b_k + 1 != 1) {
    CodeGen_LanInfoSys_eml_xswap(A_sizes[0], b_A_data, A_sizes[0] * b_k + 1, 1);
    ix = jpvt[b_k];
    jpvt[b_k] = 1;
    jpvt[0] = (int8_T)ix;
    vn1[b_k] = vn1[0];
    vn2[b_k] = vn2[0];
  }

  if (1 < A_sizes[0]) {
    atmp = b_A_data[0];
    beta1 = 0.0;
    if (!(mmi <= 0)) {
      tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, 2);
      if (tol != 0.0) {
        tol = rt_hypotd_snf(b_A_data[0], tol);
        if (b_A_data[0] >= 0.0) {
          tol = -tol;
        }

        if (fabs(tol) < 1.0020841800044864E-292) {
          b_knt = 0;
          do {
            b_knt++;
            b_k = mmi;
            for (kend = 1; kend + 1 <= b_k; kend++) {
              b_A_data[kend] *= 9.9792015476736E+291;
            }

            tol *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while (!(fabs(tol) >= 1.0020841800044864E-292));

          tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, 2);
          tol = rt_hypotd_snf(atmp, tol);
          if (atmp >= 0.0) {
            tol = -tol;
          }

          beta1 = (tol - atmp) / tol;
          atmp = 1.0 / (atmp - tol);
          for (kend = 1; kend + 1 <= b_k; kend++) {
            b_A_data[kend] *= atmp;
          }

          for (b_k = 1; b_k <= b_knt; b_k++) {
            tol *= 1.0020841800044864E-292;
          }

          atmp = tol;
        } else {
          beta1 = (tol - b_A_data[0]) / tol;
          atmp = 1.0 / (b_A_data[0] - tol);
          b_k = mmi;
          for (ix = 1; ix + 1 <= b_k; ix++) {
            b_A_data[ix] *= atmp;
          }

          atmp = tol;
        }
      }
    }

    tau_data_idx_0 = beta1;
  } else {
    atmp = b_A_data[0];
  }

  b_A_data[0] = atmp;
  atmp = b_A_data[0];
  b_A_data[0] = 1.0;
  CodeGen_LanInf_eml_matlab_zlarf(mmi, 3, 1, tau_data_idx_0, b_A_data, A_sizes[0]
    + 1, A_sizes[0], work);
  b_A_data[0] = atmp;
  for (b_k = 1; b_k + 1 < 5; b_k++) {
    ix = A_sizes[0] * b_k + 1;
    if (vn1[b_k] != 0.0) {
      tol = fabs(b_A_data[b_A_sizes[0] * b_k]) / vn1[b_k];
      tol = 1.0 - tol * tol;
      if (tol < 0.0) {
        tol = 0.0;
      }

      beta1 = vn1[b_k] / vn2[b_k];
      beta1 = beta1 * beta1 * tol;
      if (beta1 <= 1.4901161193847656E-8) {
        if (1 < A_sizes[0]) {
          tol = 0.0;
          if (!(mmi - 1 < 1)) {
            if (mmi - 1 == 1) {
              tol = fabs(b_A_data[ix]);
            } else {
              beta1 = 2.2250738585072014E-308;
              kend = (ix + mmi) - 1;
              while (ix + 1 <= kend) {
                atmp = fabs(b_A_data[ix]);
                if (atmp > beta1) {
                  t = beta1 / atmp;
                  tol = tol * t * t + 1.0;
                  beta1 = atmp;
                } else {
                  t = atmp / beta1;
                  tol += t * t;
                }

                ix++;
              }

              tol = beta1 * sqrt(tol);
            }
          }

          vn1[b_k] = tol;
          vn2[b_k] = vn1[b_k];
        } else {
          vn1[b_k] = 0.0;
          vn2[b_k] = 0.0;
        }
      } else {
        vn1[b_k] *= sqrt(tol);
      }
    }
  }

  i_i = 1 + A_sizes[0];
  mmi = A_sizes[0] - 1;
  b_k = 1;
  ix = 1;
  tol = fabs(vn1[1]);
  for (kend = 2; kend < 4; kend++) {
    ix++;
    beta1 = fabs(vn1[ix]);
    if (beta1 > tol) {
      b_k = kend;
      tol = beta1;
    }
  }

  if (b_k + 1 != 2) {
    CodeGen_LanInfoSys_eml_xswap(A_sizes[0], b_A_data, A_sizes[0] * b_k + 1,
      A_sizes[0] + 1);
    ix = jpvt[b_k];
    jpvt[b_k] = jpvt[1];
    jpvt[1] = (int8_T)ix;
    vn1[b_k] = vn1[1];
    vn2[b_k] = vn2[1];
  }

  if (2 < A_sizes[0]) {
    atmp = b_A_data[i_i];
    beta1 = 0.0;
    if (!(mmi <= 0)) {
      tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
      if (tol != 0.0) {
        tol = rt_hypotd_snf(b_A_data[i_i], tol);
        if (b_A_data[i_i] >= 0.0) {
          tol = -tol;
        }

        if (fabs(tol) < 1.0020841800044864E-292) {
          b_knt = 0;
          do {
            b_knt++;
            b_k = i_i + mmi;
            for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
              b_A_data[kend] *= 9.9792015476736E+291;
            }

            tol *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while (!(fabs(tol) >= 1.0020841800044864E-292));

          tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
          tol = rt_hypotd_snf(atmp, tol);
          if (atmp >= 0.0) {
            tol = -tol;
          }

          beta1 = (tol - atmp) / tol;
          atmp = 1.0 / (atmp - tol);
          b_k = i_i + mmi;
          for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
            b_A_data[kend] *= atmp;
          }

          for (b_k = 1; b_k <= b_knt; b_k++) {
            tol *= 1.0020841800044864E-292;
          }

          atmp = tol;
        } else {
          beta1 = (tol - b_A_data[i_i]) / tol;
          atmp = 1.0 / (b_A_data[i_i] - tol);
          b_k = i_i + mmi;
          for (ix = i_i + 1; ix + 1 <= b_k; ix++) {
            b_A_data[ix] *= atmp;
          }

          atmp = tol;
        }
      }
    }

    tau_data_idx_1 = beta1;
  } else {
    atmp = b_A_data[i_i];
  }

  b_A_data[i_i] = atmp;
  atmp = b_A_data[i_i];
  b_A_data[i_i] = 1.0;
  CodeGen_LanInf_eml_matlab_zlarf(mmi, 2, i_i + 1, tau_data_idx_1, b_A_data,
    (A_sizes[0] << 1) + 2, A_sizes[0], work);
  b_A_data[i_i] = atmp;
  for (b_k = 2; b_k + 1 < 5; b_k++) {
    ix = A_sizes[0] * b_k + 2;
    if (vn1[b_k] != 0.0) {
      tol = fabs(b_A_data[b_A_sizes[0] * b_k + 1]) / vn1[b_k];
      tol = 1.0 - tol * tol;
      if (tol < 0.0) {
        tol = 0.0;
      }

      beta1 = vn1[b_k] / vn2[b_k];
      beta1 = beta1 * beta1 * tol;
      if (beta1 <= 1.4901161193847656E-8) {
        if (2 < A_sizes[0]) {
          tol = 0.0;
          if (!(mmi - 1 < 1)) {
            if (mmi - 1 == 1) {
              tol = fabs(b_A_data[ix]);
            } else {
              beta1 = 2.2250738585072014E-308;
              kend = (ix + mmi) - 1;
              while (ix + 1 <= kend) {
                atmp = fabs(b_A_data[ix]);
                if (atmp > beta1) {
                  t = beta1 / atmp;
                  tol = tol * t * t + 1.0;
                  beta1 = atmp;
                } else {
                  t = atmp / beta1;
                  tol += t * t;
                }

                ix++;
              }

              tol = beta1 * sqrt(tol);
            }
          }

          vn1[b_k] = tol;
          vn2[b_k] = vn1[b_k];
        } else {
          vn1[b_k] = 0.0;
          vn2[b_k] = 0.0;
        }
      } else {
        vn1[b_k] *= sqrt(tol);
      }
    }
  }

  i_i = (A_sizes[0] << 1) + 2;
  mmi = A_sizes[0] - 2;
  b_k = 1;
  ix = 2;
  tol = fabs(vn1[2]);
  kend = 2;
  while (kend <= 2) {
    ix++;
    beta1 = fabs(vn1[ix]);
    if (beta1 > tol) {
      b_k = 2;
      tol = beta1;
    }

    kend = 3;
  }

  b_k++;
  if (b_k + 1 != 3) {
    CodeGen_LanInfoSys_eml_xswap(A_sizes[0], b_A_data, A_sizes[0] * b_k + 1,
      (A_sizes[0] << 1) + 1);
    ix = jpvt[b_k];
    jpvt[b_k] = jpvt[2];
    jpvt[2] = (int8_T)ix;
  }

  if (3 < A_sizes[0]) {
    atmp = b_A_data[i_i];
    beta1 = 0.0;
    if (!(mmi <= 0)) {
      tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
      if (tol != 0.0) {
        tol = rt_hypotd_snf(b_A_data[i_i], tol);
        if (b_A_data[i_i] >= 0.0) {
          tol = -tol;
        }

        if (fabs(tol) < 1.0020841800044864E-292) {
          b_knt = 0;
          do {
            b_knt++;
            b_k = i_i + mmi;
            for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
              b_A_data[kend] *= 9.9792015476736E+291;
            }

            tol *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while (!(fabs(tol) >= 1.0020841800044864E-292));

          tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
          tol = rt_hypotd_snf(atmp, tol);
          if (atmp >= 0.0) {
            tol = -tol;
          }

          beta1 = (tol - atmp) / tol;
          atmp = 1.0 / (atmp - tol);
          b_k = i_i + mmi;
          for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
            b_A_data[kend] *= atmp;
          }

          for (b_k = 1; b_k <= b_knt; b_k++) {
            tol *= 1.0020841800044864E-292;
          }

          atmp = tol;
        } else {
          beta1 = (tol - b_A_data[i_i]) / tol;
          atmp = 1.0 / (b_A_data[i_i] - tol);
          b_k = i_i + mmi;
          for (ix = i_i + 1; ix + 1 <= b_k; ix++) {
            b_A_data[ix] *= atmp;
          }

          atmp = tol;
        }
      }
    }

    tau_data_idx_2 = beta1;
  } else {
    atmp = b_A_data[i_i];
  }

  b_A_data[i_i] = atmp;
  atmp = b_A_data[i_i];
  b_A_data[i_i] = 1.0;
  CodeGen_LanInf_eml_matlab_zlarf(mmi, 1, i_i + 1, tau_data_idx_2, b_A_data, 3 *
    A_sizes[0] + 3, A_sizes[0], work);
  b_A_data[i_i] = atmp;
  i_i = 3 * A_sizes[0] + 3;
  mmi = A_sizes[0] - 3;
  if (4 < A_sizes[0]) {
    atmp = b_A_data[i_i];
    beta1 = 0.0;
    if (!(mmi <= 0)) {
      tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
      if (tol != 0.0) {
        tol = rt_hypotd_snf(b_A_data[i_i], tol);
        if (b_A_data[i_i] >= 0.0) {
          tol = -tol;
        }

        if (fabs(tol) < 1.0020841800044864E-292) {
          b_knt = 0;
          do {
            b_knt++;
            b_k = i_i + mmi;
            for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
              b_A_data[kend] *= 9.9792015476736E+291;
            }

            tol *= 9.9792015476736E+291;
            atmp *= 9.9792015476736E+291;
          } while (!(fabs(tol) >= 1.0020841800044864E-292));

          tol = CodeGen_LanInfoSys_eml_xnrm2(mmi - 1, b_A_data, i_i + 2);
          tol = rt_hypotd_snf(atmp, tol);
          if (atmp >= 0.0) {
            tol = -tol;
          }

          beta1 = (tol - atmp) / tol;
          atmp = 1.0 / (atmp - tol);
          b_k = i_i + mmi;
          for (kend = i_i + 1; kend + 1 <= b_k; kend++) {
            b_A_data[kend] *= atmp;
          }

          for (b_k = 1; b_k <= b_knt; b_k++) {
            tol *= 1.0020841800044864E-292;
          }

          atmp = tol;
        } else {
          beta1 = (tol - b_A_data[i_i]) / tol;
          atmp = 1.0 / (b_A_data[i_i] - tol);
          b_k = i_i + mmi;
          for (ix = i_i + 1; ix + 1 <= b_k; ix++) {
            b_A_data[ix] *= atmp;
          }

          atmp = tol;
        }
      }
    }
  } else {
    atmp = b_A_data[i_i];
    beta1 = 0.0;
  }

  b_A_data[i_i] = atmp;
  *rankR = 0.0;
  tol = A_sizes[0];
  if (!(tol >= 4.0)) {
    tol = 4.0;
  }

  tol = tol * fabs(b_A_data[0]) * 2.2204460492503131E-16;
  b_k = 0;
  while ((b_k <= 3) && (!(fabs(b_A_data[b_A_sizes[0] * b_k + b_k]) <= tol))) {
    (*rankR)++;
    b_k++;
  }

  Y[0] = 0.0;
  Y[1] = 0.0;
  Y[2] = 0.0;
  Y[3] = 0.0;
  if (tau_data_idx_0 != 0.0) {
    tol = B_data[0];
    b_k = A_sizes[0];
    for (ix = 0; ix <= b_k - 2; ix++) {
      b_knt = ix + 1;
      tol += b_A_data[b_knt] * B_data[b_knt];
    }

    tol *= tau_data_idx_0;
    if (tol != 0.0) {
      B_data[0] -= tol;
      b_k = A_sizes[0];
      for (ix = 0; ix <= b_k - 2; ix++) {
        b_knt = ix + 1;
        B_data[b_knt] -= b_A_data[b_knt] * tol;
      }
    }
  }

  if (tau_data_idx_1 != 0.0) {
    tol = B_data[1];
    b_k = A_sizes[0] - 1;
    for (ix = 0; ix <= b_k - 2; ix++) {
      b_knt = ix + 2;
      tol += b_A_data[b_knt + b_A_sizes[0]] * B_data[b_knt];
    }

    tol *= tau_data_idx_1;
    if (tol != 0.0) {
      B_data[1] -= tol;
      b_k = A_sizes[0] - 1;
      for (ix = 0; ix <= b_k - 2; ix++) {
        b_knt = ix + 2;
        B_data[b_knt] -= b_A_data[b_knt + b_A_sizes[0]] * tol;
      }
    }
  }

  if (tau_data_idx_2 != 0.0) {
    tol = B_data[2];
    b_k = A_sizes[0] - 2;
    for (ix = 0; ix <= b_k - 2; ix++) {
      b_knt = ix + 3;
      tol += b_A_data[(b_A_sizes[0] << 1) + b_knt] * B_data[b_knt];
    }

    tol *= tau_data_idx_2;
    if (tol != 0.0) {
      B_data[2] -= tol;
      b_k = A_sizes[0] - 2;
      for (ix = 0; ix <= b_k - 2; ix++) {
        b_knt = ix + 3;
        B_data[b_knt] -= b_A_data[(b_A_sizes[0] << 1) + b_knt] * tol;
      }
    }
  }

  if (beta1 != 0.0) {
    tol = B_data[3];
    b_k = A_sizes[0] - 3;
    for (ix = 0; ix <= b_k - 2; ix++) {
      b_knt = ix + 4;
      tol += b_A_data[b_A_sizes[0] * 3 + b_knt] * B_data[b_knt];
    }

    tol *= beta1;
    if (tol != 0.0) {
      B_data[3] -= tol;
      b_k = A_sizes[0] - 3;
      for (ix = 0; ix <= b_k - 2; ix++) {
        b_knt = ix + 4;
        B_data[b_knt] -= b_A_data[b_A_sizes[0] * 3 + b_knt] * tol;
      }
    }
  }

  Y[jpvt[0] - 1] = B_data[0];
  Y[jpvt[1] - 1] = B_data[1];
  Y[jpvt[2] - 1] = B_data[2];
  Y[jpvt[3] - 1] = B_data[3];
  Y[jpvt[3] - 1] = CodeGen_LanInfoSys_eml_div(Y[jpvt[3] - 1],
    b_A_data[b_A_sizes[0] * 3 + 3]);
  for (ix = 0; ix < 3; ix++) {
    Y[jpvt[ix] - 1] -= b_A_data[b_A_sizes[0] * 3 + ix] * Y[jpvt[3] - 1];
  }

  Y[jpvt[2] - 1] = CodeGen_LanInfoSys_eml_div(Y[jpvt[2] - 1], b_A_data
    [(b_A_sizes[0] << 1) + 2]);
  for (ix = 0; ix < 2; ix++) {
    Y[jpvt[ix] - 1] -= b_A_data[(b_A_sizes[0] << 1) + ix] * Y[jpvt[2] - 1];
  }

  Y[jpvt[1] - 1] = CodeGen_LanInfoSys_eml_div(Y[jpvt[1] - 1],
    b_A_data[b_A_sizes[0] + 1]);
  ix = 0;
  while (ix <= 0) {
    Y[jpvt[0] - 1] -= Y[jpvt[1] - 1] * b_A_data[b_A_sizes[0]];
    ix = 1;
  }

  Y[jpvt[0] - 1] = CodeGen_LanInfoSys_eml_div(Y[jpvt[0] - 1], b_A_data[0]);
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static void CodeGen_LanInfoSys_polyfit(const real_T x_data[], const int32_T
  x_sizes, const real_T y_data[], const int32_T y_sizes, real_T p[4])
{
  real_T p1[4];
  real_T rr;
  int32_T k;
  int32_T i;
  int32_T loop_ub;
  real_T V_data[200];
  int32_T V_sizes[2];
  real_T y_data_0[50];
  int8_T b_idx_0;
  b_idx_0 = (int8_T)x_sizes;
  V_sizes[0] = b_idx_0;
  V_sizes[1] = 4;
  for (k = 0; k < x_sizes; k++) {
    V_data[k + V_sizes[0] * 3] = 1.0;
  }

  for (k = 0; k < x_sizes; k++) {
    V_data[k + (V_sizes[0] << 1)] = x_data[k];
  }

  for (k = 0; k < x_sizes; k++) {
    V_data[k + V_sizes[0]] = V_data[(V_sizes[0] << 1) + k] * x_data[k];
  }

  for (k = 0; k < x_sizes; k++) {
    V_data[k] = V_data[k + V_sizes[0]] * x_data[k];
  }

  k = y_sizes;
  loop_ub = y_sizes;
  for (i = 0; i < loop_ub; i++) {
    y_data_0[i] = y_data[i];
  }

  CodeGen_LanInfoSys_eml_qrsolve(V_data, V_sizes, y_data_0, p1, &rr);
  p[0] = p1[0];
  p[1] = p1[1];
  p[2] = p1[2];
  p[3] = p1[3];
}

static real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_CyclicDec(real_T b_index)
{
  real_T outIndex;
  if (b_index <= 1.0) {
    outIndex = 1000.0;
  } else {
    outIndex = b_index - 1.0;
  }

  return outIndex;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T CodeGen_LanInfoSys_angcal(real_T x1, real_T b_y1, real_T x2,
  real_T y2)
{
  real_T ang;
  if (x1 == x2) {
    if (y2 >= b_y1) {
      ang = 1.5707963267948966;
    } else {
      ang = 4.71238898038469;
    }
  } else if (x2 > x1) {
    ang = atan((y2 - b_y1) / (x2 - x1));
    if (ang < 0.0) {
      ang += 6.2831853071795862;
    }
  } else {
    ang = atan((y2 - b_y1) / (x2 - x1)) + 3.1415926535897931;
  }

  return ang;
}

/* Model step function */
void CodeGen_LanInfoSys_step(void)
{
  real_T Vehicle_X;
  real_T Vehicle_Y;
  real_T Vehicle_Beta;
  real_T Vehicle_OffsetLong;
  real_T Vehicle_OffsetLat;
  int32_T VehicleIndexOnProfileLong;
  real_T tempIndex;
  real_T TrackPoint_0[400];
  real_T TrackPoint_EGO[400];
  int32_T PolyfitPointIndex;
  int32_T SegmentIndex;
  real_T LaneAmount;
  int32_T LaneIndex;
  real_T TargetLaneNum;
  real_T LaneWidth;
  real_T LCLeftEn;
  real_T LCRightEn;
  real_T CurLaneNum;
  real_T C2;
  real_T C0;
  real_T lineParameter[40];
  real_T ValidDis[10];
  real_T tempPara;
  real_T Variance;
  real_T y;
  real_T a;
  boolean_T exitg7;
  int32_T i;
  real_T tmp[2];
  real_T tmp_0[4];
  real_T tmp_data[50];
  real_T tmp_data_0[50];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/ClearAllFlag'
   *  Inport: '<Root>/End_Point'
   *  Inport: '<Root>/HeadingAngle'
   *  Inport: '<Root>/LaneMap'
   *  Inport: '<Root>/ORIG_X_UTM'
   *  Inport: '<Root>/ORIG_Y_UTM'
   *  Inport: '<Root>/PositionMapInput'
   *  Inport: '<Root>/PositionMap_Index'
   *  Inport: '<Root>/ProfileLongMapInput'
   *  Inport: '<Root>/ProfileShortMap1Input'
   *  Inport: '<Root>/SegmentMap'
   *  Inport: '<Root>/VehicleSpeed'
   *  Inport: '<Root>/X_UTM'
   *  Inport: '<Root>/Y_UTM'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /*  function [outVehicleState,outTrackPoint,outEgoTrackPoint,outNavi_InfoTurn,outLane_NumInfo] = DataRecon(ORIG_X_UTM,ORIG_Y_UTM,X_UTM,Y_UTM,HeadingAngle,PositionMap,PositionMap_Index,... */
  /*                            ProfileShortMap1, ProfileLongMap,LaneMap,SegmentMap,VehicleSpeed) */
  /*  Caculate the VehicleState //////////////////// */
  if ((!CodeGen_LanInfoSys_DW.CuraturePoint_not_empty) || (getClearAllFlag() ==
       1.0)) {
    /* '<S1>:1:12' */
    /* '<S1>:1:14' */
    memset(&CodeGen_LanInfoSys_DW.CuraturePoint[0], 0, 36U * sizeof(real_T));
    CodeGen_LanInfoSys_DW.CuraturePoint_not_empty = true;
  }

  /* '<S1>:1:20' */
  Vehicle_X = getX_UTM() - getORIG_X_UTM();

  /* '<S1>:1:22' */
  Vehicle_Y = getY_UTM() - getORIG_Y_UTM();

  /* '<S1>:1:24' */
  Vehicle_Beta = 1.5707963267948966 - getHeadingAngle();

  /* '<S1>:1:26' */
  C2 = getPositionMap_Index();
  if (!(C2 >= 1.0)) {
    C2 = 1.0;
  }

  tempIndex = getPositionMap_Index();
  if (!(tempIndex >= 1.0)) {
    tempIndex = 1.0;
  }

  Vehicle_OffsetLong = getPositionMapInput( (int32_T)tempIndex - 1 );

  /* '<S1>:1:28' */
  tempIndex = getPositionMap_Index();
  if (!(tempIndex >= 1.0)) {
    tempIndex = 1.0;
  }

  Vehicle_OffsetLat = getPositionMapInput( (int32_T)tempIndex + 1 );

  /* '<S1>:1:36' */
  y = getVehicleSpeed() / 3.6;

  /* ///////////////////////////////////////////////// */
  /* '<S1>:1:42' */
  VehicleIndexOnProfileLong = 1;

  /* '<S1>:1:42' */
  i = 0;
  exitg7 = false;
  while ((!exitg7) && (i < 1000)) {
    /* '<S1>:1:42' */
    VehicleIndexOnProfileLong = i + 1;

    /* '<S1>:1:44' */
    if ((getPositionMapInput( (int32_T)C2 - 1 ) - getProfileLongMapInput( i ) >=
         0.0) && (getPositionMapInput( (int32_T)C2 - 1 ) -
                  getProfileLongMapInput( (int32_T)CodeGen_LanInfoSys_CyclicInc
          (1.0 + (real_T)i, 1000.0) - 1 ) <= 0.0)) {
      /* '<S1>:1:46' */
      /* '<S1>:1:47' */
      exitg7 = true;
    } else {
      /* '<S1>:1:42' */
      i++;
    }
  }

  /* ///Caculate the TrackPoint and EGO_TrackPoint */
  /* '<S1>:1:56' */
  tempIndex = VehicleIndexOnProfileLong;

  /* '<S1>:1:58' */
  /* '<S1>:1:60' */
  for (i = 0; i < 400; i++) {
    TrackPoint_0[i] = 0.0;
    TrackPoint_EGO[i] = 0.0;
  }

  /* '<S1>:1:63' */
  for (VehicleIndexOnProfileLong = 0; VehicleIndexOnProfileLong < 100;
       VehicleIndexOnProfileLong++) {
    /* '<S1>:1:63' */
    if (getProfileLongMapInput( (int32_T)tempIndex + 4999 ) != 0.0) {
      /* '<S1>:1:65' */
      /*   only store unempty value use prototype */
      /* '<S1>:1:67' */
      TrackPoint_0[VehicleIndexOnProfileLong] = getProfileLongMapInput( (int32_T)
        tempIndex + 2999 );

      /* '<S1>:1:69' */
      TrackPoint_0[100 + VehicleIndexOnProfileLong] = getProfileLongMapInput
        ( (int32_T)tempIndex + 3999 );

      /* '<S1>:1:71' */
      TrackPoint_0[200 + VehicleIndexOnProfileLong] = getProfileLongMapInput
        ( (int32_T)tempIndex - 1 );

      /* '<S1>:1:73' */
      TrackPoint_0[300 + VehicleIndexOnProfileLong] = getProfileShortMap1Input
        ( (int32_T)tempIndex + 4999 );

      /*  store the curature point Angle */
      /* '<S1>:1:75' */
      TrackPoint_EGO[VehicleIndexOnProfileLong] = (TrackPoint_0[100 +
        VehicleIndexOnProfileLong] - Vehicle_Y) * sin(1.5707963267948966 -
        getHeadingAngle()) + (TrackPoint_0[VehicleIndexOnProfileLong] -
        Vehicle_X) * cos(1.5707963267948966 - getHeadingAngle());

      /* '<S1>:1:78' */
      TrackPoint_EGO[100 + VehicleIndexOnProfileLong] = (TrackPoint_0[100 +
        VehicleIndexOnProfileLong] - Vehicle_Y) * cos(1.5707963267948966 -
        getHeadingAngle()) - (TrackPoint_0[VehicleIndexOnProfileLong] -
        Vehicle_X) * sin(1.5707963267948966 - getHeadingAngle());

      /* '<S1>:1:81' */
      TrackPoint_EGO[200 + VehicleIndexOnProfileLong] = getProfileLongMapInput
        ( (int32_T)tempIndex - 1 ) - getPositionMapInput( (int32_T)C2 - 1 );

      /*  Relative offset */
      /* '<S1>:1:83' */
      TrackPoint_EGO[300 + VehicleIndexOnProfileLong] = getProfileShortMap1Input
        ( (int32_T)tempIndex + 4999 ) - (1.5707963267948966 - getHeadingAngle());

      /*  Relative Angle */
      /* '<S1>:1:85' */
      tempIndex = CodeGen_LanInfoSys_CyclicInc(tempIndex, 1000.0);

      /* '<S1>:1:87' */
      tempPara = TrackPoint_EGO[200 + VehicleIndexOnProfileLong];

      /* '<S1>:1:89' */
      TrackPoint_EGO[200 + VehicleIndexOnProfileLong] = TrackPoint_EGO[100 +
        VehicleIndexOnProfileLong];

      /* '<S1>:1:90' */
      TrackPoint_EGO[100 + VehicleIndexOnProfileLong] =
        TrackPoint_EGO[VehicleIndexOnProfileLong];

      /* '<S1>:1:91' */
      TrackPoint_EGO[VehicleIndexOnProfileLong] = tempPara;
    }

    /* '<S1>:1:63' */
  }

  /* '<S1>:1:102' */
  /* '<S1>:1:104' */
  /* /////////////////////////////////////////////////////////////////////////////////// */
  /* Caculate the Navi Turn Infomation */
  /* '<S1>:1:112' */
  for (LaneIndex = 0; LaneIndex < 1000; LaneIndex++) {
    /* '<S1>:1:112' */
    /* '<S1>:1:114' */
    tempIndex = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)LaneIndex, 1000.0);
    if ((getPositionMapInput( (int32_T)C2 - 1 ) - getProfileShortMap1Input( 1000
          + LaneIndex ) >= 0.0) && (getPositionMapInput( (int32_T)C2 - 1 ) -
         getProfileShortMap1Input( (int32_T)tempIndex + 999 ) <= 0.0) &&
        (getProfileShortMap1Input( LaneIndex ) != 0.0)) {
      /* '<S1>:1:116' */
      /* '<S1>:1:117' */
      /* '<S1>:1:119' */
      C0 = 0.0;

      /* '<S1>:1:122' */
      VehicleIndexOnProfileLong = 0;
      while ((VehicleIndexOnProfileLong < 1000) && (!(C0 >= 4.0)) &&
             (!(getProfileShortMap1Input( VehicleIndexOnProfileLong ) == 0.0)))
      {
        /* '<S1>:1:122' */
        if (getProfileShortMap1Input( (int32_T)tempIndex + 2999 ) == 21.0) {
          /* '<S1>:1:129' */
          /* '<S1>:1:131' */
          C0++;

          /* '<S1>:1:133' */
          CodeGen_LanInfoSys_DW.CuraturePoint[(int32_T)C0 - 1] =
            getProfileShortMap1Input( (int32_T)tempIndex + 999 );

          /* '<S1>:1:134' */
          CodeGen_LanInfoSys_DW.CuraturePoint[(int32_T)C0 + 3] = 21.0;
        }

        if (getProfileShortMap1Input( (int32_T)tempIndex + 3999 ) == 22.0) {
          /* '<S1>:1:137' */
          /* '<S1>:1:139' */
          C0++;
          if (CodeGen_LanInfoSys_mod(C0) != 0.0) {
            /* '<S1>:1:141' */
            /* '<S1>:1:142' */
            C0++;
          }

          /* '<S1>:1:145' */
          CodeGen_LanInfoSys_DW.CuraturePoint[(int32_T)C0 - 1] =
            getProfileShortMap1Input( (int32_T)tempIndex + 999 );

          /* '<S1>:1:146' */
          CodeGen_LanInfoSys_DW.CuraturePoint[(int32_T)C0 + 3] = 22.0;
        }

        /* '<S1>:1:149' */
        tempIndex = CodeGen_LanInfoSys_CyclicInc(tempIndex, 1000.0);

        /* '<S1>:1:122' */
        VehicleIndexOnProfileLong++;
      }

      /* '<S1>:1:124' */
      /* '<S1>:1:153' */
      C0 = 0.0;

      /* '<S1>:1:154' */
      VehicleIndexOnProfileLong = 0;
      while ((VehicleIndexOnProfileLong < 1000) && (!((C0 >= 4.0) ||
               (getProfileLongMapInput( 5000 + VehicleIndexOnProfileLong ) ==
                0.0)))) {
        /* '<S1>:1:154' */
        /* '<S1>:1:161' */
        if ((getProfileLongMapInput( VehicleIndexOnProfileLong ) ==
             CodeGen_LanInfoSys_DW.CuraturePoint[0]) &&
            (CodeGen_LanInfoSys_DW.CuraturePoint[0] != 0.0)) {
          /* '<S1>:1:163' */
          /*  CuraturePoints have none zero values */
          /* '<S1>:1:165' */
          CodeGen_LanInfoSys_DW.CuraturePoint[8] = getProfileLongMapInput( 3000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:166' */
          CodeGen_LanInfoSys_DW.CuraturePoint[12] = getProfileLongMapInput( 4000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:168' */
          CodeGen_LanInfoSys_DW.CuraturePoint[16] = (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * cos
            (1.5707963267948966 - getHeadingAngle()) + (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * sin
            (1.5707963267948966 - getHeadingAngle());

          /* '<S1>:1:171' */
          CodeGen_LanInfoSys_DW.CuraturePoint[20] = (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * cos
            (1.5707963267948966 - getHeadingAngle()) - (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * sin
            (1.5707963267948966 - getHeadingAngle());
          if (CodeGen_LanInfoSys_DW.CuraturePoint[4] == 21.0) {
            /* '<S1>:1:174' */
            /*  if is entrance point, store the previous point */
            /* '<S1>:1:175' */
            tempPara = CodeGen_LanInfoSys_CyclicDec(1.0 + (real_T)
              VehicleIndexOnProfileLong);

            /* '<S1>:1:176' */
            CodeGen_LanInfoSys_DW.CuraturePoint[28] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:177' */
            CodeGen_LanInfoSys_DW.CuraturePoint[32] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:178' */
            CodeGen_LanInfoSys_DW.CuraturePoint[24] = CodeGen_LanInfoSys_angcal
              (Vehicle_X, Vehicle_Y, CodeGen_LanInfoSys_DW.CuraturePoint[28],
               CodeGen_LanInfoSys_DW.CuraturePoint[32]);

            /* caculate entrance angle */
          }

          if (CodeGen_LanInfoSys_DW.CuraturePoint[4] == 22.0) {
            /* '<S1>:1:182' */
            /*  if is exit point, store the later point */
            /* '<S1>:1:183' */
            tempPara = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
              VehicleIndexOnProfileLong, 1000.0);

            /* '<S1>:1:184' */
            CodeGen_LanInfoSys_DW.CuraturePoint[28] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:185' */
            CodeGen_LanInfoSys_DW.CuraturePoint[32] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:186' */
            CodeGen_LanInfoSys_DW.CuraturePoint[24] = CodeGen_LanInfoSys_angcal
              (CodeGen_LanInfoSys_DW.CuraturePoint[8],
               CodeGen_LanInfoSys_DW.CuraturePoint[12],
               CodeGen_LanInfoSys_DW.CuraturePoint[28],
               CodeGen_LanInfoSys_DW.CuraturePoint[32]);

            /* caculate exit angle */
          }

          /* '<S1>:1:190' */
          C0++;
        }

        /* '<S1>:1:161' */
        if ((getProfileLongMapInput( VehicleIndexOnProfileLong ) ==
             CodeGen_LanInfoSys_DW.CuraturePoint[1]) &&
            (CodeGen_LanInfoSys_DW.CuraturePoint[1] != 0.0)) {
          /* '<S1>:1:163' */
          /*  CuraturePoints have none zero values */
          /* '<S1>:1:165' */
          CodeGen_LanInfoSys_DW.CuraturePoint[9] = getProfileLongMapInput( 3000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:166' */
          CodeGen_LanInfoSys_DW.CuraturePoint[13] = getProfileLongMapInput( 4000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:168' */
          CodeGen_LanInfoSys_DW.CuraturePoint[17] = (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * cos
            (1.5707963267948966 - getHeadingAngle()) + (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * sin
            (1.5707963267948966 - getHeadingAngle());

          /* '<S1>:1:171' */
          CodeGen_LanInfoSys_DW.CuraturePoint[21] = (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * cos
            (1.5707963267948966 - getHeadingAngle()) - (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * sin
            (1.5707963267948966 - getHeadingAngle());
          if (CodeGen_LanInfoSys_DW.CuraturePoint[5] == 21.0) {
            /* '<S1>:1:174' */
            /*  if is entrance point, store the previous point */
            /* '<S1>:1:175' */
            tempPara = CodeGen_LanInfoSys_CyclicDec(1.0 + (real_T)
              VehicleIndexOnProfileLong);

            /* '<S1>:1:176' */
            CodeGen_LanInfoSys_DW.CuraturePoint[29] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:177' */
            CodeGen_LanInfoSys_DW.CuraturePoint[33] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:178' */
            CodeGen_LanInfoSys_DW.CuraturePoint[25] = CodeGen_LanInfoSys_angcal
              (Vehicle_X, Vehicle_Y, CodeGen_LanInfoSys_DW.CuraturePoint[29],
               CodeGen_LanInfoSys_DW.CuraturePoint[33]);

            /* caculate entrance angle */
          }

          if (CodeGen_LanInfoSys_DW.CuraturePoint[5] == 22.0) {
            /* '<S1>:1:182' */
            /*  if is exit point, store the later point */
            /* '<S1>:1:183' */
            tempPara = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
              VehicleIndexOnProfileLong, 1000.0);

            /* '<S1>:1:184' */
            CodeGen_LanInfoSys_DW.CuraturePoint[29] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:185' */
            CodeGen_LanInfoSys_DW.CuraturePoint[33] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:186' */
            CodeGen_LanInfoSys_DW.CuraturePoint[25] = CodeGen_LanInfoSys_angcal
              (CodeGen_LanInfoSys_DW.CuraturePoint[9],
               CodeGen_LanInfoSys_DW.CuraturePoint[13],
               CodeGen_LanInfoSys_DW.CuraturePoint[29],
               CodeGen_LanInfoSys_DW.CuraturePoint[33]);

            /* caculate exit angle */
          }

          /* '<S1>:1:190' */
          C0++;
        }

        /* '<S1>:1:161' */
        if ((getProfileLongMapInput( VehicleIndexOnProfileLong ) ==
             CodeGen_LanInfoSys_DW.CuraturePoint[2]) &&
            (CodeGen_LanInfoSys_DW.CuraturePoint[2] != 0.0)) {
          /* '<S1>:1:163' */
          /*  CuraturePoints have none zero values */
          /* '<S1>:1:165' */
          CodeGen_LanInfoSys_DW.CuraturePoint[10] = getProfileLongMapInput( 3000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:166' */
          CodeGen_LanInfoSys_DW.CuraturePoint[14] = getProfileLongMapInput( 4000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:168' */
          CodeGen_LanInfoSys_DW.CuraturePoint[18] = (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * cos
            (1.5707963267948966 - getHeadingAngle()) + (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * sin
            (1.5707963267948966 - getHeadingAngle());

          /* '<S1>:1:171' */
          CodeGen_LanInfoSys_DW.CuraturePoint[22] = (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * cos
            (1.5707963267948966 - getHeadingAngle()) - (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * sin
            (1.5707963267948966 - getHeadingAngle());
          if (CodeGen_LanInfoSys_DW.CuraturePoint[6] == 21.0) {
            /* '<S1>:1:174' */
            /*  if is entrance point, store the previous point */
            /* '<S1>:1:175' */
            tempPara = CodeGen_LanInfoSys_CyclicDec(1.0 + (real_T)
              VehicleIndexOnProfileLong);

            /* '<S1>:1:176' */
            CodeGen_LanInfoSys_DW.CuraturePoint[30] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:177' */
            CodeGen_LanInfoSys_DW.CuraturePoint[34] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:178' */
            CodeGen_LanInfoSys_DW.CuraturePoint[26] = CodeGen_LanInfoSys_angcal
              (Vehicle_X, Vehicle_Y, CodeGen_LanInfoSys_DW.CuraturePoint[30],
               CodeGen_LanInfoSys_DW.CuraturePoint[34]);

            /* caculate entrance angle */
          }

          if (CodeGen_LanInfoSys_DW.CuraturePoint[6] == 22.0) {
            /* '<S1>:1:182' */
            /*  if is exit point, store the later point */
            /* '<S1>:1:183' */
            tempPara = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
              VehicleIndexOnProfileLong, 1000.0);

            /* '<S1>:1:184' */
            CodeGen_LanInfoSys_DW.CuraturePoint[30] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:185' */
            CodeGen_LanInfoSys_DW.CuraturePoint[34] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:186' */
            CodeGen_LanInfoSys_DW.CuraturePoint[26] = CodeGen_LanInfoSys_angcal
              (CodeGen_LanInfoSys_DW.CuraturePoint[10],
               CodeGen_LanInfoSys_DW.CuraturePoint[14],
               CodeGen_LanInfoSys_DW.CuraturePoint[30],
               CodeGen_LanInfoSys_DW.CuraturePoint[34]);

            /* caculate exit angle */
          }

          /* '<S1>:1:190' */
          C0++;
        }

        /* '<S1>:1:161' */
        if ((getProfileLongMapInput( VehicleIndexOnProfileLong ) ==
             CodeGen_LanInfoSys_DW.CuraturePoint[3]) &&
            (CodeGen_LanInfoSys_DW.CuraturePoint[3] != 0.0)) {
          /* '<S1>:1:163' */
          /*  CuraturePoints have none zero values */
          /* '<S1>:1:165' */
          CodeGen_LanInfoSys_DW.CuraturePoint[11] = getProfileLongMapInput( 3000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:166' */
          CodeGen_LanInfoSys_DW.CuraturePoint[15] = getProfileLongMapInput( 4000
            + VehicleIndexOnProfileLong );

          /* '<S1>:1:168' */
          CodeGen_LanInfoSys_DW.CuraturePoint[19] = (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * cos
            (1.5707963267948966 - getHeadingAngle()) + (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * sin
            (1.5707963267948966 - getHeadingAngle());

          /* '<S1>:1:171' */
          CodeGen_LanInfoSys_DW.CuraturePoint[23] = (getProfileLongMapInput
            ( 4000 + VehicleIndexOnProfileLong ) - Vehicle_Y) * cos
            (1.5707963267948966 - getHeadingAngle()) - (getProfileLongMapInput
            ( 3000 + VehicleIndexOnProfileLong ) - Vehicle_X) * sin
            (1.5707963267948966 - getHeadingAngle());
          if (CodeGen_LanInfoSys_DW.CuraturePoint[7] == 21.0) {
            /* '<S1>:1:174' */
            /*  if is entrance point, store the previous point */
            /* '<S1>:1:175' */
            tempPara = CodeGen_LanInfoSys_CyclicDec(1.0 + (real_T)
              VehicleIndexOnProfileLong);

            /* '<S1>:1:176' */
            CodeGen_LanInfoSys_DW.CuraturePoint[31] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:177' */
            CodeGen_LanInfoSys_DW.CuraturePoint[35] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:178' */
            CodeGen_LanInfoSys_DW.CuraturePoint[27] = CodeGen_LanInfoSys_angcal
              (Vehicle_X, Vehicle_Y, CodeGen_LanInfoSys_DW.CuraturePoint[31],
               CodeGen_LanInfoSys_DW.CuraturePoint[35]);

            /* caculate entrance angle */
          }

          if (CodeGen_LanInfoSys_DW.CuraturePoint[7] == 22.0) {
            /* '<S1>:1:182' */
            /*  if is exit point, store the later point */
            /* '<S1>:1:183' */
            tempPara = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
              VehicleIndexOnProfileLong, 1000.0);

            /* '<S1>:1:184' */
            CodeGen_LanInfoSys_DW.CuraturePoint[31] = getProfileLongMapInput
              ( (int32_T)tempPara + 2999 );

            /* '<S1>:1:185' */
            CodeGen_LanInfoSys_DW.CuraturePoint[35] = getProfileLongMapInput
              ( (int32_T)tempPara + 3999 );

            /* '<S1>:1:186' */
            CodeGen_LanInfoSys_DW.CuraturePoint[27] = CodeGen_LanInfoSys_angcal
              (CodeGen_LanInfoSys_DW.CuraturePoint[11],
               CodeGen_LanInfoSys_DW.CuraturePoint[15],
               CodeGen_LanInfoSys_DW.CuraturePoint[31],
               CodeGen_LanInfoSys_DW.CuraturePoint[35]);

            /* caculate exit angle */
          }

          /* '<S1>:1:190' */
          C0++;
        }

        /* '<S1>:1:161' */
        /* '<S1>:1:154' */
        VehicleIndexOnProfileLong++;
      }

      /* '<S1>:1:156' */
      /*  6 is index of profile type . equals to 0 means no value. */
    }

    /* '<S1>:1:112' */
  }

  /* '<S1>:1:202' */
  for (i = 0; i < 7; i++) {
    Navi_InfoTurn[i << 2] = CodeGen_LanInfoSys_DW.CuraturePoint[i << 2];
    Navi_InfoTurn[1 + (i << 2)] = CodeGen_LanInfoSys_DW.CuraturePoint[(i << 2) +
      1];
    Navi_InfoTurn[2 + (i << 2)] = CodeGen_LanInfoSys_DW.CuraturePoint[(i << 2) +
      2];
    Navi_InfoTurn[3 + (i << 2)] = CodeGen_LanInfoSys_DW.CuraturePoint[(i << 2) +
      3];
  }

  if (getPositionMapInput( (int32_T)C2 - 1 ) <
      CodeGen_LanInfoSys_DW.CuraturePoint[0] - 10.0) {
    /* '<S1>:1:207' */
    /* '<S1>:1:209' */
    PolyfitPointIndex = 0;

    /* '<S1>:1:209' */
    VehicleIndexOnProfileLong = 0;
    exitg7 = false;
    while ((!exitg7) && (VehicleIndexOnProfileLong < 100)) {
      /* '<S1>:1:209' */
      PolyfitPointIndex = VehicleIndexOnProfileLong;
      if (TrackPoint_EGO[VehicleIndexOnProfileLong] >=
          CodeGen_LanInfoSys_DW.CuraturePoint[0]) {
        /* '<S1>:1:211' */
        exitg7 = true;
      } else {
        /* '<S1>:1:209' */
        VehicleIndexOnProfileLong++;
      }
    }
  } else if ((getPositionMapInput( (int32_T)C2 - 1 ) >=
              CodeGen_LanInfoSys_DW.CuraturePoint[0] - 10.0) &&
             (getPositionMapInput( (int32_T)C2 - 1 ) <=
              CodeGen_LanInfoSys_DW.CuraturePoint[1] - 5.0)) {
    /* '<S1>:1:218' */
    /* '<S1>:1:220' */
    PolyfitPointIndex = 0;

    /* '<S1>:1:220' */
    VehicleIndexOnProfileLong = 0;
    exitg7 = false;
    while ((!exitg7) && (VehicleIndexOnProfileLong < 100)) {
      /* '<S1>:1:220' */
      PolyfitPointIndex = VehicleIndexOnProfileLong;
      if (TrackPoint_EGO[VehicleIndexOnProfileLong] >=
          CodeGen_LanInfoSys_DW.CuraturePoint[1]) {
        /* '<S1>:1:222' */
        exitg7 = true;
      } else {
        /* '<S1>:1:220' */
        VehicleIndexOnProfileLong++;
      }
    }
  } else {
    /* '<S1>:1:228' */
    PolyfitPointIndex = 0;

    /* '<S1>:1:228' */
    VehicleIndexOnProfileLong = 0;
    exitg7 = false;
    while ((!exitg7) && (VehicleIndexOnProfileLong < 100)) {
      /* '<S1>:1:228' */
      PolyfitPointIndex = VehicleIndexOnProfileLong;
      if (TrackPoint_EGO[VehicleIndexOnProfileLong] >= getEnd_Point( 0 )) {
        /* '<S1>:1:230' */
        exitg7 = true;
      } else {
        /* '<S1>:1:228' */
        VehicleIndexOnProfileLong++;
      }
    }
  }

  /* /////////////////////////Caculate the Lane_NumInfo ////////////////////////////// */
  /* Get current position LaneAmount sent on Segment Message */
  /* '<S1>:1:252' */
  SegmentIndex = 0;

  /* '<S1>:1:252' */
  VehicleIndexOnProfileLong = 0;
  exitg7 = false;
  while ((!exitg7) && (VehicleIndexOnProfileLong < 100)) {
    /* '<S1>:1:252' */
    SegmentIndex = VehicleIndexOnProfileLong;

    /* '<S1>:1:254' */
    tempIndex = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
      VehicleIndexOnProfileLong, 100.0);
    if (((getPositionMapInput( (int32_T)C2 - 1 ) - getSegmentMap
          ( VehicleIndexOnProfileLong ) >= 0.0) && (getPositionMapInput
          ( (int32_T)C2 - 1 ) - getSegmentMap( (int32_T)tempIndex - 1 ) <= 0.0))
        || (getPositionMapInput( (int32_T)C2 - 1 ) - getSegmentMap
            ( VehicleIndexOnProfileLong ) <= 0.0) || (getSegmentMap( (int32_T)
          tempIndex - 1 ) == 0.0)) {
      /* '<S1>:1:256' */
      /* '<S1>:1:257' */
      exitg7 = true;
    } else {
      /* '<S1>:1:252' */
      VehicleIndexOnProfileLong++;
    }
  }

  /* '<S1>:1:264' */
  LaneAmount = getSegmentMap( 200 + SegmentIndex );

  /* /////////////////////////////////////////////////////////////////// */
  /* ///////////////////////////////////////////////////////////////////// */
  /*  get the TargetLaneNum  sent on Lane Message */
  /* '<S1>:1:276' */
  LaneIndex = 1;

  /* '<S1>:1:276' */
  VehicleIndexOnProfileLong = 0;
  exitg7 = false;
  while ((!exitg7) && (VehicleIndexOnProfileLong < 100)) {
    /* '<S1>:1:276' */
    LaneIndex = 1 + VehicleIndexOnProfileLong;

    /* '<S1>:1:278' */
    tempIndex = CodeGen_LanInfoSys_CyclicInc(1.0 + (real_T)
      VehicleIndexOnProfileLong, 100.0);
    if (((getPositionMapInput( (int32_T)C2 - 1 ) - getLaneMap
          ( VehicleIndexOnProfileLong ) >= 0.0) && (getPositionMapInput
          ( (int32_T)C2 - 1 ) - getLaneMap( (int32_T)tempIndex - 1 ) <= 0.0)) ||
        (getPositionMapInput( (int32_T)C2 - 1 ) - getLaneMap
         ( VehicleIndexOnProfileLong ) <= 0.0) || (getLaneMap( (int32_T)
          tempIndex - 1 ) == 0.0)) {
      /* '<S1>:1:280' */
      /* '<S1>:1:281' */
      exitg7 = true;
    } else {
      /* '<S1>:1:276' */
      VehicleIndexOnProfileLong++;
    }
  }

  /* '<S1>:1:287' */
  TargetLaneNum = getLaneMap( LaneIndex + 199 );

  /* LaneWidth =  LaneMap(LaneIndex,2);  % By the way get the Lane Width for current Vehicle position. */
  /* '<S1>:1:290' */
  LaneWidth = getLaneMap( (int32_T)CodeGen_LanInfoSys_CyclicInc((real_T)
    LaneIndex, 100.0) + 99 );

  /*  By the way get the Lane Width for current Vehicle position. */
  /* /////////////////////////////////////////////////////////////////  */
  /* Caculate the ChangeRule */
  /* '<S1>:1:296' */
  /* '<S1>:1:298' */
  LCLeftEn = CodeGen_LanInfoSys_mod(getLaneMap( LaneIndex + 299 ));

  /* '<S1>:1:302' */
  LCRightEn = CodeGen_LanInfoSys_mod(getLaneMap( LaneIndex + 299 ) / 2.0);

  /* /////////////////////////////////////////////////////////////////// */
  /* ///////////////////////////////////////////////////////////////// */
  /* '<S1>:1:311' */
  tempPara = getPositionMap_Index();
  if (!(tempPara >= 1.0)) {
    tempPara = 1.0;
  }

  tempIndex = getPositionMap_Index();
  if (!(tempIndex >= 1.0)) {
    tempIndex = 1.0;
  }

  CurLaneNum = getPositionMapInput( (int32_T)tempIndex + 3 );

  /*  caculate Current Lane index sent on position Message. */
  /* '<S1>:1:313' */
  /* ///////////////////////Caculate Lane_NumInfo End//////////////////// */
  /* //////////////////////////////////////////////////////////////////// */
  /* //////////////////////caculate the deduced road point side by current line///// */
  /* '<S1>:1:333' */
  /* '<S1>:1:335' */
  for (i = 0; i < 500; i++) {
    CodeGen_LanInfoSys_B.outPointCluster_X[i] = 0.0;
    CodeGen_LanInfoSys_B.outPointCluster_Y[i] = 0.0;
  }

  /* '<S1>:1:337' */
  tempIndex = (real_T)PolyfitPointIndex + 1.0;
  if (50.0 <= tempIndex) {
    tempIndex = 50.0;
  }

  PolyfitPointIndex = (int32_T)tempIndex;

  /* '<S1>:1:341' */
  for (VehicleIndexOnProfileLong = 0; VehicleIndexOnProfileLong <
       PolyfitPointIndex; VehicleIndexOnProfileLong++) {
    /* '<S1>:1:341' */
    /* '<S1>:1:343' */
    for (i = 0; i < (int32_T)getSegmentMap( 200 + SegmentIndex ); i++) {
      /* '<S1>:1:343' */
      if (1.0 + (real_T)i < getPositionMapInput( (int32_T)tempPara + 3 )) {
        /* '<S1>:1:344' */
        /* '<S1>:1:345' */
        CodeGen_LanInfoSys_B.outPointCluster_X[VehicleIndexOnProfileLong + 50 *
          i] = TrackPoint_EGO[100 + VehicleIndexOnProfileLong] - (1.0 + (real_T)
          i) * getLaneMap( (int32_T)CodeGen_LanInfoSys_CyclicInc((real_T)
          LaneIndex, 100.0) + 99 ) * sin(TrackPoint_EGO[300 +
          VehicleIndexOnProfileLong]);

        /* '<S1>:1:346' */
        CodeGen_LanInfoSys_B.outPointCluster_Y[VehicleIndexOnProfileLong + 50 *
          i] = TrackPoint_EGO[200 + VehicleIndexOnProfileLong] - (1.0 + (real_T)
          i) * getLaneMap( (int32_T)CodeGen_LanInfoSys_CyclicInc((real_T)
          LaneIndex, 100.0) + 99 ) * cos(TrackPoint_EGO[300 +
          VehicleIndexOnProfileLong]);
      } else {
        /* '<S1>:1:349' */
        CodeGen_LanInfoSys_B.outPointCluster_X[VehicleIndexOnProfileLong + 50 *
          i] = ((1.0 + (real_T)i) - getPositionMapInput( (int32_T)tempPara + 3 ))
          * getLaneMap( (int32_T)CodeGen_LanInfoSys_CyclicInc((real_T)LaneIndex,
          100.0) + 99 ) * sin(TrackPoint_EGO[300 + VehicleIndexOnProfileLong]) +
          TrackPoint_EGO[100 + VehicleIndexOnProfileLong];

        /* '<S1>:1:350' */
        CodeGen_LanInfoSys_B.outPointCluster_Y[VehicleIndexOnProfileLong + 50 *
          i] = ((1.0 + (real_T)i) - getPositionMapInput( (int32_T)tempPara + 3 ))
          * getLaneMap( (int32_T)CodeGen_LanInfoSys_CyclicInc((real_T)LaneIndex,
          100.0) + 99 ) * cos(TrackPoint_EGO[300 + VehicleIndexOnProfileLong]) +
          TrackPoint_EGO[200 + VehicleIndexOnProfileLong];
      }

      /* '<S1>:1:343' */
    }

    /* '<S1>:1:341' */
  }

  /* Caculate the Line Shape */
  /* '<S1>:1:369' */
  memset(&lineParameter[0], 0, 40U * sizeof(real_T));

  /* '<S1>:1:370' */
  memset(&ValidDis[0], 0, 10U * sizeof(real_T));

  /* '<S1>:1:372' */
  for (VehicleIndexOnProfileLong = 0; VehicleIndexOnProfileLong < (int32_T)
       LaneAmount; VehicleIndexOnProfileLong++) {
    /* '<S1>:1:372' */
    exitg7 = false;
    while ((!exitg7) && (PolyfitPointIndex >= 4)) {
      /* '<S1>:1:374' */
      if ((Vehicle_OffsetLong >= CodeGen_LanInfoSys_DW.CuraturePoint[0] - 10.0) &&
          (Vehicle_OffsetLong <= CodeGen_LanInfoSys_DW.CuraturePoint[1] - 5.0))
      {
        /* '<S1>:1:375' */
        /* '<S1>:1:377' */
        for (i = 0; i < PolyfitPointIndex; i++) {
          tmp_data[i] = CodeGen_LanInfoSys_B.outPointCluster_X[50 *
            VehicleIndexOnProfileLong + i];
        }

        for (i = 0; i < PolyfitPointIndex; i++) {
          tmp_data_0[i] = CodeGen_LanInfoSys_B.outPointCluster_Y[50 *
            VehicleIndexOnProfileLong + i];
        }

        CodeGen_LanInfoSys_polyfit(tmp_data, PolyfitPointIndex, tmp_data_0,
          PolyfitPointIndex, tmp_0);
        lineParameter[VehicleIndexOnProfileLong] = tmp_0[0];
        lineParameter[VehicleIndexOnProfileLong + 10] = tmp_0[1];
        lineParameter[VehicleIndexOnProfileLong + 20] = tmp_0[2];
        lineParameter[VehicleIndexOnProfileLong + 30] = tmp_0[3];

        /* '<S1>:1:379' */
        tempPara = lineParameter[VehicleIndexOnProfileLong];

        /* '<S1>:1:380' */
        lineParameter[VehicleIndexOnProfileLong] = lineParameter[30 +
          VehicleIndexOnProfileLong];

        /* '<S1>:1:381' */
        lineParameter[30 + VehicleIndexOnProfileLong] = lineParameter[10 +
          VehicleIndexOnProfileLong];

        /* '<S1>:1:382' */
        lineParameter[10 + VehicleIndexOnProfileLong] = lineParameter[20 +
          VehicleIndexOnProfileLong];

        /* '<S1>:1:383' */
        lineParameter[20 + VehicleIndexOnProfileLong] = lineParameter[30 +
          VehicleIndexOnProfileLong];

        /* '<S1>:1:384' */
        lineParameter[30 + VehicleIndexOnProfileLong] = tempPara;

        /* '<S1>:1:386' */
        C0 = lineParameter[VehicleIndexOnProfileLong];

        /* '<S1>:1:387' */
        tempIndex = lineParameter[10 + VehicleIndexOnProfileLong];

        /* '<S1>:1:388' */
        C2 = lineParameter[20 + VehicleIndexOnProfileLong];

        /* '<S1>:1:389' */
        tempPara = lineParameter[30 + VehicleIndexOnProfileLong];

        /* '<S1>:1:391' */
        ValidDis[VehicleIndexOnProfileLong] =
          (CodeGen_LanInfoSys_DW.CuraturePoint[1] -
           CodeGen_LanInfoSys_DW.CuraturePoint[0]) + 10.0;
      } else {
        /* '<S1>:1:393' */
        for (i = 0; i < PolyfitPointIndex; i++) {
          tmp_data[i] = CodeGen_LanInfoSys_B.outPointCluster_X[50 *
            VehicleIndexOnProfileLong + i];
        }

        for (i = 0; i < PolyfitPointIndex; i++) {
          tmp_data_0[i] = CodeGen_LanInfoSys_B.outPointCluster_Y[50 *
            VehicleIndexOnProfileLong + i];
        }

        CodeGen_LanInfoSys_polyfit_l(tmp_data, PolyfitPointIndex, tmp_data_0,
          PolyfitPointIndex, tmp);
        lineParameter[VehicleIndexOnProfileLong] = tmp[0];
        lineParameter[VehicleIndexOnProfileLong + 10] = tmp[1];

        /* '<S1>:1:395' */
        tempPara = lineParameter[VehicleIndexOnProfileLong];

        /* '<S1>:1:396' */
        lineParameter[VehicleIndexOnProfileLong] = lineParameter[10 +
          VehicleIndexOnProfileLong];

        /* '<S1>:1:397' */
        lineParameter[10 + VehicleIndexOnProfileLong] = tempPara;

        /* '<S1>:1:399' */
        C0 = lineParameter[VehicleIndexOnProfileLong];

        /* '<S1>:1:400' */
        tempIndex = lineParameter[10 + VehicleIndexOnProfileLong];

        /* '<S1>:1:401' */
        C2 = 0.0;

        /* '<S1>:1:402' */
        tempPara = 0.0;
        if (Vehicle_OffsetLong < CodeGen_LanInfoSys_DW.CuraturePoint[0] - 10.0)
        {
          /* '<S1>:1:404' */
          /* '<S1>:1:406' */
          ValidDis[VehicleIndexOnProfileLong] =
            (CodeGen_LanInfoSys_DW.CuraturePoint[1] -
             CodeGen_LanInfoSys_DW.CuraturePoint[0]) + 10.0;
        } else {
          /* '<S1>:1:410' */
          ValidDis[VehicleIndexOnProfileLong] = (getEnd_Point( 0 ) -
            CodeGen_LanInfoSys_DW.CuraturePoint[1]) + 10.0;
        }
      }

      /* '<S1>:1:414' */
      Variance = 0.0;

      /* '<S1>:1:415' */
      for (i = 0; i < PolyfitPointIndex; i++) {
        /* '<S1>:1:415' */
        /* '<S1>:1:416' */
        /* '<S1>:1:417' */
        /* '<S1>:1:419' */
        a = (((CodeGen_LanInfoSys_B.outPointCluster_X[50 *
               VehicleIndexOnProfileLong + i] *
               CodeGen_LanInfoSys_B.outPointCluster_X[50 *
               VehicleIndexOnProfileLong + i] * C2 + rt_powd_snf
               (CodeGen_LanInfoSys_B.outPointCluster_X[50 *
                VehicleIndexOnProfileLong + i], 3.0) * tempPara) +
              CodeGen_LanInfoSys_B.outPointCluster_X[50 *
              VehicleIndexOnProfileLong + i] * tempIndex) + C0) -
          CodeGen_LanInfoSys_B.outPointCluster_Y[50 * VehicleIndexOnProfileLong
          + i];
        Variance += a * a;

        /*  Caculate the Variance */
        /* '<S1>:1:415' */
      }

      if (Variance / (real_T)PolyfitPointIndex < 1.5) {
        /* '<S1>:1:423' */
        /*  The 1.5 is the torrance than can be accepeted. Change it if you need. */
        exitg7 = true;
      } else {
        /* '<S1>:1:430' */
        PolyfitPointIndex = (int32_T)floor((real_T)PolyfitPointIndex / 2.0);

        /*  binary search */
        /*           PolyfitPointIndex = PolyfitPointIndex -1; */
      }
    }

    /* '<S1>:1:372' */
  }

  /* '<S1>:1:443' */
  memset(&outLine_ShapeInfo[0], 0, 100U * sizeof(real_T));

  /* '<S1>:1:445' */
  for (i = 0; i < 4; i++) {
    memcpy(&outLine_ShapeInfo[10 * i], &lineParameter[10 * i], 10U * sizeof
           (real_T));
  }

  /* '<S1>:1:446' */
  memcpy(&outLine_ShapeInfo[40], &ValidDis[0], 10U * sizeof(real_T));

  /* '<S1>:1:447' */
  for (i = 0; i < 10; i++) {
    outLine_ShapeInfo[50 + i] = LaneWidth;
  }

  /* '<S1>:1:448' */
  for (i = 0; i < 10; i++) {
    outLine_ShapeInfo[60 + i] = LCLeftEn;
  }

  /* '<S1>:1:449' */
  for (i = 0; i < 10; i++) {
    outLine_ShapeInfo[70 + i] = 100.0;
  }

  /* '<S1>:1:450' */
  for (i = 0; i < 10; i++) {
    outLine_ShapeInfo[80 + i] = LCRightEn;
  }

  /* '<S1>:1:451' */
  for (i = 0; i < 10; i++) {
    outLine_ShapeInfo[90 + i] = 100.0;
  }

  /* outLine_ShapeInfo = [C0,C1,C2,C3,ValidDis,LaneWidth,LCLeftEn,LeftRuleValidDistance,LCRightEn,RightRuleValidDistance]; */
  /* '<S1>:1:455' */
  /* '<S1>:1:457' */
  /* '<S1>:1:458' */
  VehicleState[0] = Vehicle_X;
  VehicleState[1] = Vehicle_Y;
  VehicleState[2] = Vehicle_Beta;
  VehicleState[3] = Vehicle_OffsetLong;
  VehicleState[4] = Vehicle_OffsetLat;
  VehicleState[5] = 0.0;
  VehicleState[6] = 0.0;
  VehicleState[7] = y;
  for (i = 0; i < 3; i++) {
    memcpy(&TrackPoint[100 * i], &TrackPoint_0[100 * i], 100U * sizeof(real_T));
  }

  for (i = 0; i < 3; i++) {
    memcpy(&EgoTrackPoint[100 * i], &TrackPoint_EGO[100 * i], 100U * sizeof
           (real_T));
  }

  Lane_NumInfo[0] = LaneAmount;
  Lane_NumInfo[1] = CurLaneNum;
  Lane_NumInfo[2] = TargetLaneNum;

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void CodeGen_LanInfoSys_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(CodeGen_LanInfoSys_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &CodeGen_LanInfoSys_B), 0,
                sizeof(B_CodeGen_LanInfoSys_T));

  /* exported global signals */
  {
    int_T i;
    for (i = 0; i < 8; i++) {
      VehicleState[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 300; i++) {
      TrackPoint[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 300; i++) {
      EgoTrackPoint[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 28; i++) {
      Navi_InfoTurn[i] = 0.0;
    }
  }

  Lane_NumInfo[0] = 0.0;
  Lane_NumInfo[1] = 0.0;
  Lane_NumInfo[2] = 0.0;

  {
    int_T i;
    for (i = 0; i < 100; i++) {
      outLine_ShapeInfo[i] = 0.0;
    }
  }

  /* states (dwork) */
  (void) memset((void *)&CodeGen_LanInfoSys_DW, 0,
                sizeof(DW_CodeGen_LanInfoSys_T));

  /* InitializeConditions for MATLAB Function: '<Root>/MATLAB Function' */
  CodeGen_LanInfoSys_DW.CuraturePoint_not_empty = false;
}

/* Model terminate function */
void CodeGen_LanInfoSys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
