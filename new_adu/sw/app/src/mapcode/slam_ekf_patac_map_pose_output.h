/*
 * File: slam_ekf_patac_map_pose_output.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef SLAM_EKF_PATAC_MAP_POSE_OUTPUT_H
#define SLAM_EKF_PATAC_MAP_POSE_OUTPUT_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void cnt_not_empty_init(void);
extern void slam_ekf_patac_map_pose_output(const double chi2_dat[1000], const
  struct0_T *innerLine, const struct1_T *middleLine, const struct2_T *outerLine,
  double lane_offset, const double landmarks[594], double odo_motion_v, double
  rtk_gps_lat, double rtk_gps_lon, double rtk_gps_yaw, double rtk_gps_ts, const
  double sensor_data_raw[160], const double object_list[3302], double object_num,
  const double patac_navi[24], double global_landmarks[594], double
  vehicle_state[5], double object_list_update[3302], double CIPO_id[10], double
  CIPO_next_id[10], double c_landmarks_in_proximity_id_in_[99], double
  d_landmarks_in_proximity_id_in_[99], double maneuvers[24], double
  innerLaneMark[3562], double middleLaneMark[3402], double outerLaneMark[3682],
  double cubic_poly_coef[4], double *ego_location, double *odo_state_v, double
  *t_in_utm, double *x_in_utm, double *y_in_utm, double *a_in_utm, double
  *delta_t, double *x_last, double *y_last, double v_last[2], double *state_flag,
  double veh_ori_pos[4], double *step_out);
extern void step_not_empty_init(void);

#endif

/*
 * File trailer for slam_ekf_patac_map_pose_output.h
 *
 * [EOF]
 */
