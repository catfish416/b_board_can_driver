/*
 * File: det.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "det.h"

/* Function Definitions */

/*
 * Arguments    : const double x[9]
 * Return Type  : double
 */
double det(const double x[9])
{
  double y;
  double A[9];
  signed char ipiv[3];
  int i5;
  int j;
  int c;
  boolean_T isodd;
  int iy;
  int jy;
  int ix;
  double smax;
  double s;
  int b_j;
  int ijA;
  memcpy(&A[0], &x[0], 9U * sizeof(double));
  for (i5 = 0; i5 < 3; i5++) {
    ipiv[i5] = (signed char)(1 + i5);
  }

  for (j = 0; j < 2; j++) {
    c = j << 2;
    iy = 0;
    ix = c;
    smax = fabs(A[c]);
    for (jy = 2; jy <= 3 - j; jy++) {
      ix++;
      s = fabs(A[ix]);
      if (s > smax) {
        iy = jy - 1;
        smax = s;
      }
    }

    if (A[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (signed char)((j + iy) + 1);
        ix = j;
        iy += j;
        for (jy = 0; jy < 3; jy++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 3;
          iy += 3;
        }
      }

      i5 = (c - j) + 3;
      for (iy = c + 1; iy + 1 <= i5; iy++) {
        A[iy] /= A[c];
      }
    }

    iy = c;
    jy = c + 3;
    for (b_j = 1; b_j <= 2 - j; b_j++) {
      smax = A[jy];
      if (A[jy] != 0.0) {
        ix = c + 1;
        i5 = (iy - j) + 6;
        for (ijA = 4 + iy; ijA + 1 <= i5; ijA++) {
          A[ijA] += A[ix] * -smax;
          ix++;
        }
      }

      jy += 3;
      iy += 3;
    }
  }

  y = A[0];
  isodd = false;
  for (jy = 0; jy < 2; jy++) {
    y *= A[(jy + 3 * (jy + 1)) + 1];
    if (ipiv[jy] > 1 + jy) {
      isodd = !isodd;
    }
  }

  if (isodd) {
    y = -y;
  }

  return y;
}

/*
 * File trailer for det.c
 *
 * [EOF]
 */
