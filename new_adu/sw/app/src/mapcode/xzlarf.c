/*
 * File: xzlarf.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "xzlarf.h"

/* Function Definitions */

/*
 * Arguments    : int m
 *                int n
 *                int iv0
 *                double tau
 *                double C[124]
 *                int ic0
 *                double work[4]
 * Return Type  : void
 */
void xzlarf(int m, int n, int iv0, double tau, double C[124], int ic0, double
            work[4])
{
  int lastv;
  int lastc;
  int i;
  boolean_T exitg2;
  int jy;
  int j;
  int i12;
  int ia;
  int exitg1;
  double c;
  int ix;
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * 31;
      ia = i;
      do {
        exitg1 = 0;
        if (ia <= (i + lastv) - 1) {
          if (C[ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            ia++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
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
      i12 = ic0 + 31 * (lastc - 1);
      for (jy = ic0; jy <= i12; jy += 31) {
        ix = iv0;
        c = 0.0;
        j = (jy + lastv) - 1;
        for (ia = jy; ia <= j; ia++) {
          c += C[ia - 1] * C[ix - 1];
          ix++;
        }

        work[i] += c;
        i++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      jy = 0;
      for (j = 1; j <= lastc; j++) {
        if (work[jy] != 0.0) {
          c = work[jy] * -tau;
          ix = iv0;
          i12 = lastv + i;
          for (ia = i; ia + 1 <= i12; ia++) {
            C[ia] += C[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        i += 31;
      }
    }
  }
}

/*
 * File trailer for xzlarf.c
 *
 * [EOF]
 */
