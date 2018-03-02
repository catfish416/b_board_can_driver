/*
 * File: wgs2utm.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef WGS2UTM_H
#define WGS2UTM_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void wgs2utm(double Lat, double Lon, double *utmzone, double *x, double
                    *y, char *utmhemi);

#endif

/*
 * File trailer for wgs2utm.h
 *
 * [EOF]
 */
