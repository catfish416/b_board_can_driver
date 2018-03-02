/*
 * File: point2line.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef POINT2LINE_H
#define POINT2LINE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void point2line(const double p[2], const double A[2], const double B[2],
  double *H, double *flag);

#endif

/*
 * File trailer for point2line.h
 *
 * [EOF]
 */
