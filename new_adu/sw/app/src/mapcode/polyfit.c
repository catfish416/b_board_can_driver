/*
 * File: polyfit.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "polyfit.h"
#include "xgeqp3.h"

/* Function Definitions */

/*
 * Arguments    : const double x[31]
 *                const double y[31]
 *                double p[4]
 * Return Type  : void
 */
void polyfit(const double x[31], const double y[31], double p[4])
{
  double V[124];
  int i;
  int j;
  double tau[4];
  int jpvt[4];
  double p1[4];
  double B[31];
  double wj;
  for (i = 0; i < 31; i++) {
    V[93 + i] = 1.0;
    V[62 + i] = x[i];
  }

  for (j = 0; j < 2; j++) {
    for (i = 0; i < 31; i++) {
      V[i + 31 * (1 - j)] = x[i] * V[i + 31 * (2 - j)];
    }
  }

  xgeqp3(V, tau, jpvt);
  for (i = 0; i < 4; i++) {
    p1[i] = 0.0;
  }

  memcpy(&B[0], &y[0], 31U * sizeof(double));
  for (j = 0; j < 4; j++) {
    if (tau[j] != 0.0) {
      wj = B[j];
      for (i = j + 1; i + 1 < 32; i++) {
        wj += V[i + 31 * j] * B[i];
      }

      wj *= tau[j];
      if (wj != 0.0) {
        B[j] -= wj;
        for (i = j + 1; i + 1 < 32; i++) {
          B[i] -= V[i + 31 * j] * wj;
        }
      }
    }
  }

  for (i = 0; i < 4; i++) {
    p1[jpvt[i] - 1] = B[i];
  }

  for (j = 3; j >= 0; j += -1) {
    p1[jpvt[j] - 1] /= V[j + 31 * j];
    for (i = 0; i + 1 <= j; i++) {
      p1[jpvt[i] - 1] -= p1[jpvt[j] - 1] * V[i + 31 * j];
    }
  }

  for (i = 0; i < 4; i++) {
    p[i] = p1[i];
  }
}

/*
 * File trailer for polyfit.c
 *
 * [EOF]
 */
