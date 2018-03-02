/*
 * File: point_dist2lane.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef POINT_DIST2LANE_H
#define POINT_DIST2LANE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void point_dist2lane(const double p[2], const double coordinate[3682],
  const double Vertex_index[8], double projection_dist[4], double *inside);

#endif

/*
 * File trailer for point_dist2lane.h
 *
 * [EOF]
 */
