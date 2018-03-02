/*
 * File: tpcomp.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

#ifndef TPCOMP_H
#define TPCOMP_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "slam_ekf_patac_map_pose_output_types.h"

/* Function Declarations */
extern void b_tpcomp(const double Tab[3], const double Pb[62], double Pa[62]);
extern void tpcomp(const double Tab[3], const double Pb_data[], const int
                   Pb_size[2], double Pa_data[], int Pa_size[2]);

#endif

/*
 * File trailer for tpcomp.h
 *
 * [EOF]
 */
