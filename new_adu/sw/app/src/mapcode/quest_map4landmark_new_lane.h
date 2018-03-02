/*
 * File: quest_map4landmark_new_lane.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef QUEST_MAP4LANDMARK_NEW_LANE_H
#define QUEST_MAP4LANDMARK_NEW_LANE_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void quest_map4landmark_new_lane(double x_in_lcs, double y_in_lcs, const
  double landmarks[594], const double middleLine_coordinate[3402], const double
  middleLine_Vertex_index[8], double c_landmarks_in_proximity_id_in_[99], double
  d_landmarks_in_proximity_id_in_[99]);

#endif

/*
 * File trailer for quest_map4landmark_new_lane.h
 *
 * [EOF]
 */
