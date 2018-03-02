/*
 * File: rtkraw2wgs.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 27-Apr-2017 16:26:20
 */

#ifndef RTKRAW2WGS_H
#define RTKRAW2WGS_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void rtkraw2wgs(double rtk_gps_lat, double rtk_gps_lon, double
  rtk_gps_yaw, double rtk_gps_ts, double *wgs_lat, double *wgs_lon, double
  *wgs_yaw, double *wgs_ts_in_sec);

#endif

/*
 * File trailer for rtkraw2wgs.h
 *
 * [EOF]
 */
