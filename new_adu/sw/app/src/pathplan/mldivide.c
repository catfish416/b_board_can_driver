/*
 * File: mldivide.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "mldivide.h"
#include "xgetrf.h"

/* Function Definitions */

/*
 * Arguments    : const double A[225]
 *                double B[15]
 * Return Type  : void
 */
void b_mldivide(const double A[225], double B[15])
{
  double b_A[225];
  int ipiv[15];
  int info;
  double temp;
  int kAcol;
  int i;
  memcpy(&b_A[0], &A[0], 225U * sizeof(double));
  xgetrf(b_A, ipiv, &info);
  for (info = 0; info < 14; info++) {
    if (ipiv[info] != info + 1) {
      temp = B[info];
      B[info] = B[ipiv[info] - 1];
      B[ipiv[info] - 1] = temp;
    }
  }

  for (info = 0; info < 15; info++) {
    kAcol = 15 * info;
    if (B[info] != 0.0) {
      for (i = info + 1; i + 1 < 16; i++) {
        B[i] -= B[info] * b_A[i + kAcol];
      }
    }
  }

  for (info = 14; info >= 0; info += -1) {
    kAcol = 15 * info;
    if (B[info] != 0.0) {
      B[info] /= b_A[info + kAcol];
      for (i = 0; i + 1 <= info; i++) {
        B[i] -= B[info] * b_A[i + kAcol];
      }
    }
  }
}

/*
 * Arguments    : const double A[324]
 *                double B[18]
 * Return Type  : void
 */
void c_mldivide(const double A[324], double B[18])
{
  double b_A[324];
  int ipiv[18];
  int info;
  double temp;
  int kAcol;
  int i;
  memcpy(&b_A[0], &A[0], 324U * sizeof(double));
  b_xgetrf(b_A, ipiv, &info);
  for (info = 0; info < 17; info++) {
    if (ipiv[info] != info + 1) {
      temp = B[info];
      B[info] = B[ipiv[info] - 1];
      B[ipiv[info] - 1] = temp;
    }
  }

  for (info = 0; info < 18; info++) {
    kAcol = 18 * info;
    if (B[info] != 0.0) {
      for (i = info + 1; i + 1 < 19; i++) {
        B[i] -= B[info] * b_A[i + kAcol];
      }
    }
  }

  for (info = 17; info >= 0; info += -1) {
    kAcol = 18 * info;
    if (B[info] != 0.0) {
      B[info] /= b_A[info + kAcol];
      for (i = 0; i + 1 <= info; i++) {
        B[i] -= B[info] * b_A[i + kAcol];
      }
    }
  }
}

/*
 * Arguments    : const double A[225]
 *                double B[225]
 * Return Type  : void
 */
void mldivide(const double A[225], double B[225])
{
  double b_A[225];
  int ipiv[15];
  int info;
  int jBcol;
  int k;
  double temp;
  int kAcol;
  int i;
  memcpy(&b_A[0], &A[0], 225U * sizeof(double));
  xgetrf(b_A, ipiv, &info);
  for (info = 0; info < 14; info++) {
    if (ipiv[info] != info + 1) {
      jBcol = ipiv[info] - 1;
      for (k = 0; k < 15; k++) {
        temp = B[info + 15 * k];
        B[info + 15 * k] = B[jBcol + 15 * k];
        B[jBcol + 15 * k] = temp;
      }
    }
  }

  for (info = 0; info < 15; info++) {
    jBcol = 15 * info;
    for (k = 0; k < 15; k++) {
      kAcol = 15 * k;
      if (B[k + jBcol] != 0.0) {
        for (i = k + 1; i + 1 < 16; i++) {
          B[i + jBcol] -= B[k + jBcol] * b_A[i + kAcol];
        }
      }
    }
  }

  for (info = 0; info < 15; info++) {
    jBcol = 15 * info;
    for (k = 14; k >= 0; k += -1) {
      kAcol = 15 * k;
      if (B[k + jBcol] != 0.0) {
        B[k + jBcol] /= b_A[k + kAcol];
        for (i = 0; i + 1 <= k; i++) {
          B[i + jBcol] -= B[k + jBcol] * b_A[i + kAcol];
        }
      }
    }
  }
}

/*
 * File trailer for mldivide.c
 *
 * [EOF]
 */
