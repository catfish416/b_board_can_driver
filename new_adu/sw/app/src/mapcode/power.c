/*
 * File: power.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "power.h"

/* Function Definitions */

/*
 * Arguments    : const double a[99]
 *                double y[99]
 * Return Type  : void
 */
void power(const double a[99], double y[99])
{
  int k;
  for (k = 0; k < 99; k++) {
    y[k] = a[k] * a[k];
  }
}

/*
 * File trailer for power.c
 *
 * [EOF]
 */
