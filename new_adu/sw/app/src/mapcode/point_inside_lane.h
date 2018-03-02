/*
 * File: point_inside_lane.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef POINT_INSIDE_LANE_H
#define POINT_INSIDE_LANE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern double b_point_inside_lane(const double p[2], const double coordinate
  [3402], const double Vertex_index[8]);
extern double c_point_inside_lane(const double p[2], const double coordinate
  [3682], const double Vertex_index[8]);
extern double point_inside_lane(const double p[2], const double coordinate[3562],
  const double Vertex_index[8]);

#endif

/*
 * File trailer for point_inside_lane.h
 *
 * [EOF]
 */
