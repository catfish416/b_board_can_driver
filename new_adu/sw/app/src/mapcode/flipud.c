/*
 * File: flipud.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "flipud.h"

/* Function Definitions */

/*
 * Arguments    : double x_data[]
 *                int x_size[1]
 * Return Type  : void
 */
void flipud(double x_data[], int x_size[1])
{
  int m;
  int md2;
  int i;
  double xtmp;
  m = x_size[0];
  md2 = x_size[0] >> 1;
  for (i = 1; i <= md2; i++) {
    xtmp = x_data[i - 1];
    x_data[i - 1] = x_data[m - i];
    x_data[m - i] = xtmp;
  }
}

/*
 * File trailer for flipud.c
 *
 * [EOF]
 */
