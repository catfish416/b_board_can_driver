/*
 * File: point_projection2LNM.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef POINT_PROJECTION2LNM_H
#define POINT_PROJECTION2LNM_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void point_projection2LNM(const double p[2], const double corner_1[2],
  const double corner_2[2], double projected_point_veh[2], double
  *dist2StartCorner);

#endif

/*
 * File trailer for point_projection2LNM.h
 *
 * [EOF]
 */
