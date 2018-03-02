/*
 * File: calDistance.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef CALDISTANCE_H
#define CALDISTANCE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void calDistance(const double p[2], const double coordinate[3402], const
  double Vertex_index[8], double *distance, double *flag, double *nearestIndex);

#endif

/*
 * File trailer for calDistance.h
 *
 * [EOF]
 */
