/*
 * File: objects_of_interest_fast.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef OBJECTS_OF_INTEREST_FAST_H
#define OBJECTS_OF_INTEREST_FAST_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void objects_of_interest_fast(const double object_list[3302], double
  object_num, double x_in_lcs, double y_in_lcs, const double
  innerLine_coordinate[3562], const double innerLine_Vertex_index[8], const
  double middleLine_coordinate[3402], const double middleLine_Vertex_index[8],
  const double outerLine_coordinate[3682], const double outerLine_Vertex_index[8],
  double *obj_closest_in_path_ID, double *obj_closest_in_next_path_ID, double
  *ego_location);

#endif

/*
 * File trailer for objects_of_interest_fast.h
 *
 * [EOF]
 */
