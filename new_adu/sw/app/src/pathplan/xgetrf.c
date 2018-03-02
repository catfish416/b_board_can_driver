/*
 * File: xgetrf.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "xgetrf.h"

/* Function Definitions */

/*
 * Arguments    : double A[324]
 *                int ipiv[18]
 *                int *info
 * Return Type  : void
 */
void b_xgetrf(double A[324], int ipiv[18], int *info)
{
  int i11;
  int j;
  int c;
  int iy;
  int ix;
  double smax;
  int jy;
  double s;
  int b_j;
  int ijA;
  for (i11 = 0; i11 < 18; i11++) {
    ipiv[i11] = 1 + i11;
  }

  *info = 0;
  for (j = 0; j < 17; j++) {
    c = j * 19;
    iy = 0;
    ix = c;
    smax = fabs(A[c]);
    for (jy = 2; jy <= 18 - j; jy++) {
      ix++;
      s = fabs(A[ix]);
      if (s > smax) {
        iy = jy - 1;
        smax = s;
      }
    }

    if (A[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (j + iy) + 1;
        ix = j;
        iy += j;
        for (jy = 0; jy < 18; jy++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 18;
          iy += 18;
        }
      }

      i11 = (c - j) + 18;
      for (iy = c + 1; iy + 1 <= i11; iy++) {
        A[iy] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    iy = c;
    jy = c + 18;
    for (b_j = 1; b_j <= 17 - j; b_j++) {
      smax = A[jy];
      if (A[jy] != 0.0) {
        ix = c + 1;
        i11 = (iy - j) + 36;
        for (ijA = 19 + iy; ijA + 1 <= i11; ijA++) {
          A[ijA] += A[ix] * -smax;
          ix++;
        }
      }

      jy += 18;
      iy += 18;
    }
  }

  if ((*info == 0) && (!(A[323] != 0.0))) {
    *info = 18;
  }
}

/*
 * Arguments    : double A[225]
 *                int ipiv[15]
 *                int *info
 * Return Type  : void
 */
void xgetrf(double A[225], int ipiv[15], int *info)
{
  int i10;
  int j;
  int c;
  int iy;
  int ix;
  double smax;
  int jy;
  double s;
  int b_j;
  int ijA;
  for (i10 = 0; i10 < 15; i10++) {
    ipiv[i10] = 1 + i10;
  }

  *info = 0;
  for (j = 0; j < 14; j++) {
    c = j << 4;
    iy = 0;
    ix = c;
    smax = fabs(A[c]);
    for (jy = 2; jy <= 15 - j; jy++) {
      ix++;
      s = fabs(A[ix]);
      if (s > smax) {
        iy = jy - 1;
        smax = s;
      }
    }

    if (A[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (j + iy) + 1;
        ix = j;
        iy += j;
        for (jy = 0; jy < 15; jy++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 15;
          iy += 15;
        }
      }

      i10 = (c - j) + 15;
      for (iy = c + 1; iy + 1 <= i10; iy++) {
        A[iy] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    iy = c;
    jy = c + 15;
    for (b_j = 1; b_j <= 14 - j; b_j++) {
      smax = A[jy];
      if (A[jy] != 0.0) {
        ix = c + 1;
        i10 = (iy - j) + 30;
        for (ijA = 16 + iy; ijA + 1 <= i10; ijA++) {
          A[ijA] += A[ix] * -smax;
          ix++;
        }
      }

      jy += 15;
      iy += 15;
    }
  }

  if ((*info == 0) && (!(A[224] != 0.0))) {
    *info = 15;
  }
}

/*
 * File trailer for xgetrf.c
 *
 * [EOF]
 */
