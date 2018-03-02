/*
 * File: object_localization.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef OBJECT_LOCALIZATION_H
#define OBJECT_LOCALIZATION_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void object_localization(const double object_list[3302], double
  object_num, const double innerLine_coordinate[3562], const double
  innerLine_Vertex_index[8], const double middleLine_coordinate[3402], const
  double middleLine_Vertex_index[8], const double outerLine_coordinate[3682],
  const double outerLine_Vertex_index[8], double lane_offset, double
  object_list_update[3302]);

#endif

/*
 * File trailer for object_localization.h
 *
 * [EOF]
 */
