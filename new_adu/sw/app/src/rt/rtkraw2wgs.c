/*
 * File: rtkraw2wgs.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 27-Apr-2017 16:26:20
 */

/* Include Files */
#include "rt_nonfinite.h"
//#include "slam_ekf_patac_map_pose_output.h"
#include "rtkraw2wgs.h"

/* Function Definitions */

/*
 * Arguments    : double rtk_gps_lat
 *                double rtk_gps_lon
 *                double rtk_gps_yaw
 *                double rtk_gps_ts
 *                double *wgs_lat
 *                double *wgs_lon
 *                double *wgs_yaw
 *                double *wgs_ts_in_sec
 * Return Type  : void
 */
void rtkraw2wgs(double rtk_gps_lat, double rtk_gps_lon, double rtk_gps_yaw,
                double rtk_gps_ts, double *wgs_lat, double *wgs_lon, double
                *wgs_yaw, double *wgs_ts_in_sec)
{
  double wgs_ts_s;
  double wgs_ts_h;

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /* ------------------------------------------------------- */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /*  */
  /*  calculates the inverse of one or more transformations */
  /* ------------------------------------------------------- */
  *wgs_lat = floor(rtk_gps_lat / 100.0) + (rtk_gps_lat - floor(rtk_gps_lat /
    100.0) * 100.0) / 60.0;
  *wgs_lon = floor(rtk_gps_lon / 100.0) + (rtk_gps_lon - floor(rtk_gps_lon /
    100.0) * 100.0) / 60.0;
  wgs_ts_s = rtk_gps_ts - floor(rtk_gps_ts / 100.0) * 100.0;
  wgs_ts_h = floor(rtk_gps_ts / 10000.0);
  *wgs_ts_in_sec = (wgs_ts_h * 3600.0 + floor(((rtk_gps_ts - wgs_ts_h * 10000.0)
    - wgs_ts_s) / 100.0) * 60.0) + wgs_ts_s;
  *wgs_yaw = rtk_gps_yaw * 3.1415926535897931 / 180.0;
}

/*
 * File trailer for rtkraw2wgs.c
 *
 * [EOF]
 */
