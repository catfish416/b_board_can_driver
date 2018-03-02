/*
 * File: xgeqp3.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "xgeqp3.h"
#include "xzlarf.h"
#include "xnrm2.h"

/* Function Declarations */
static double rt_hypotd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_hypotd_snf(double u0, double u1)
{
  double y;
  double a;
  double b;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = b * sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * sqrt(b * b + 1.0);
  } else if (rtIsNaN(b)) {
    y = b;
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

/*
 * Arguments    : double A[124]
 *                double tau[4]
 *                int jpvt[4]
 * Return Type  : void
 */
void xgeqp3(double A[124], double tau[4], int jpvt[4])
{
  int k;
  double vn1[4];
  double vn2[4];
  double work[4];
  int pvt;
  int i;
  double smax;
  int i_i;
  double temp2;
  int iy;
  int ix;
  double absxk;
  double t;
  k = 1;
  for (pvt = 0; pvt < 4; pvt++) {
    jpvt[pvt] = 1 + pvt;
    work[pvt] = 0.0;
    smax = 0.0;
    temp2 = 2.2250738585072014E-308;
    for (iy = k; iy <= k + 30; iy++) {
      absxk = fabs(A[iy - 1]);
      if (absxk > temp2) {
        t = temp2 / absxk;
        smax = 1.0 + smax * t * t;
        temp2 = absxk;
      } else {
        t = absxk / temp2;
        smax += t * t;
      }
    }

    smax = temp2 * sqrt(smax);
    vn1[pvt] = smax;
    vn2[pvt] = vn1[pvt];
    k += 31;
  }

  for (i = 0; i < 4; i++) {
    i_i = i + i * 31;
    iy = 0;
    if (4 - i > 1) {
      ix = i;
      smax = vn1[i];
      for (k = 1; k + 1 <= 4 - i; k++) {
        ix++;
        if (vn1[ix] > smax) {
          iy = k;
          smax = vn1[ix];
        }
      }
    }

    pvt = i + iy;
    if (pvt + 1 != i + 1) {
      ix = 31 * pvt;
      iy = 31 * i;
      for (k = 0; k < 31; k++) {
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix++;
        iy++;
      }

      iy = jpvt[pvt];
      jpvt[pvt] = jpvt[i];
      jpvt[i] = iy;
      vn1[pvt] = vn1[i];
      vn2[pvt] = vn2[i];
    }

    temp2 = A[i_i];
    absxk = 0.0;
    smax = xnrm2(30 - i, A, i_i + 2);
    if (smax != 0.0) {
      smax = rt_hypotd_snf(A[i_i], smax);
      if (A[i_i] >= 0.0) {
        smax = -smax;
      }

      if (fabs(smax) < 1.0020841800044864E-292) {
        ix = 0;
        do {
          ix++;
          iy = (i_i - i) + 31;
          for (k = i_i + 1; k + 1 <= iy; k++) {
            A[k] *= 9.9792015476736E+291;
          }

          smax *= 9.9792015476736E+291;
          temp2 *= 9.9792015476736E+291;
        } while (!(fabs(smax) >= 1.0020841800044864E-292));

        smax = rt_hypotd_snf(temp2, xnrm2(30 - i, A, i_i + 2));
        if (temp2 >= 0.0) {
          smax = -smax;
        }

        absxk = (smax - temp2) / smax;
        temp2 = 1.0 / (temp2 - smax);
        iy = (i_i - i) + 31;
        for (k = i_i + 1; k + 1 <= iy; k++) {
          A[k] *= temp2;
        }

        for (k = 1; k <= ix; k++) {
          smax *= 1.0020841800044864E-292;
        }

        temp2 = smax;
      } else {
        absxk = (smax - A[i_i]) / smax;
        temp2 = 1.0 / (A[i_i] - smax);
        iy = (i_i - i) + 31;
        for (k = i_i + 1; k + 1 <= iy; k++) {
          A[k] *= temp2;
        }

        temp2 = smax;
      }
    }

    tau[i] = absxk;
    A[i_i] = temp2;
    if (i + 1 < 4) {
      temp2 = A[i_i];
      A[i_i] = 1.0;
      xzlarf(31 - i, 3 - i, i_i + 1, tau[i], A, (i + (i + 1) * 31) + 1, work);
      A[i_i] = temp2;
    }

    for (pvt = i + 1; pvt + 1 < 5; pvt++) {
      iy = (i + 31 * pvt) + 2;
      if (vn1[pvt] != 0.0) {
        smax = fabs(A[i + 31 * pvt]) / vn1[pvt];
        smax = 1.0 - smax * smax;
        if (smax < 0.0) {
          smax = 0.0;
        }

        temp2 = vn1[pvt] / vn2[pvt];
        temp2 = smax * (temp2 * temp2);
        if (temp2 <= 1.4901161193847656E-8) {
          smax = 0.0;
          temp2 = 2.2250738585072014E-308;
          ix = (iy - i) + 29;
          while (iy <= ix) {
            absxk = fabs(A[iy - 1]);
            if (absxk > temp2) {
              t = temp2 / absxk;
              smax = 1.0 + smax * t * t;
              temp2 = absxk;
            } else {
              t = absxk / temp2;
              smax += t * t;
            }

            iy++;
          }

          smax = temp2 * sqrt(smax);
          vn1[pvt] = smax;
          vn2[pvt] = vn1[pvt];
        } else {
          vn1[pvt] *= sqrt(smax);
        }
      }
    }
  }
}

/*
 * File trailer for xgeqp3.c
 *
 * [EOF]
 */
