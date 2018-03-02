/*
 * File: lanefit.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef LANEFIT_H
#define LANEFIT_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void lanefit(const double veh_state[5], const double
                    middleLine_coordinate[5103], const double
                    middleLine_Vertex_index[8], const double
                    outerLine_coordinate[3682], const double
                    outerLine_Vertex_index[8], double lane_pos, double
                    cubic_poly_coef[4]);

#endif

/*
 * File trailer for lanefit.h
 *
 * [EOF]
 */
