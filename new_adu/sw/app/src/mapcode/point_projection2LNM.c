/*
 * File: point_projection2LNM.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "point_projection2LNM.h"

/* Function Definitions */

/*
 * return flag -1 for inside; 1 for outside
 * Arguments    : const double p[2]
 *                const double corner_1[2]
 *                const double corner_2[2]
 *                double projected_point_veh[2]
 *                double *dist2StartCorner
 * Return Type  : void
 */
void point_projection2LNM(const double p[2], const double corner_1[2], const
  double corner_2[2], double projected_point_veh[2], double *dist2StartCorner)
{
  double A[4];
  double b_p[2];
  double B[2];
  int r1;
  int r2;
  double a21;
  double absxk;
  double t;

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  A[0] = corner_2[0] - corner_1[0];
  A[2] = corner_2[1] - corner_1[1];
  A[1] = corner_1[1] - corner_2[1];
  A[3] = corner_2[0] - corner_1[0];
  b_p[0] = -p[0] * (corner_2[0] - corner_1[0]) - p[1] * (corner_2[1] - corner_1
    [1]);
  b_p[1] = -corner_1[1] * (corner_2[0] - corner_1[0]) + corner_1[0] * (corner_2
    [1] - corner_1[1]);
  for (r1 = 0; r1 < 2; r1++) {
    B[r1] = -b_p[r1];
  }

  if (fabs(A[1]) > fabs(A[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  a21 = A[r2] / A[r1];
  projected_point_veh[1] = (B[r2] - B[r1] * a21) / (A[2 + r2] - a21 * A[2 + r1]);
  projected_point_veh[0] = (B[r1] - projected_point_veh[1] * A[2 + r1]) / A[r1];
  *dist2StartCorner = 0.0;
  a21 = 2.2250738585072014E-308;
  for (r1 = 0; r1 < 2; r1++) {
    absxk = fabs(projected_point_veh[r1] - corner_1[r1]);
    if (absxk > a21) {
      t = a21 / absxk;
      *dist2StartCorner = 1.0 + *dist2StartCorner * t * t;
      a21 = absxk;
    } else {
      t = absxk / a21;
      *dist2StartCorner += t * t;
    }
  }

  *dist2StartCorner = a21 * sqrt(*dist2StartCorner);
}

/*
 * File trailer for point_projection2LNM.c
 *
 * [EOF]
 */
