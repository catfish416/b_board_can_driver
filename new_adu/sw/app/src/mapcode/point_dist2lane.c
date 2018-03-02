/*
 * File: point_dist2lane.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "point_dist2lane.h"
#include "map_norm.h"
#include "det.h"

/* Function Definitions */

/*
 * return flag -1 for inside; 1 for outside
 * Arguments    : const double p[2]
 *                const double coordinate[3682]
 *                const double Vertex_index[8]
 *                double projection_dist[4]
 *                double *inside
 * Return Type  : void
 */
void point_dist2lane(const double p[2], const double coordinate[3682], const
                     double Vertex_index[8], double projection_dist[4], double
                     *inside)
{
  double line_det[4];
  int i;
  double b_p[9];
  int i8;
  double b_line_det;
  double b_coordinate[2];

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  /*  */
  /*  coordinate = offlineData.coordinate; */
  /*  Vertex_index = offlineData.Vertex_index; */
  /*  -1 inside +1 outside */
  for (i = 0; i < 4; i++) {
    b_p[6] = 1.0;
    b_p[7] = 1.0;
    for (i8 = 0; i8 < 2; i8++) {
      b_p[3 * i8] = p[i8];
      b_p[1 + 3 * i8] = coordinate[((int)Vertex_index[i] + 1841 * i8) - 1];
      b_p[2 + 3 * i8] = coordinate[((int)Vertex_index[4 + i] + 1841 * i8) - 1];
    }

    b_p[8] = 1.0;
    b_line_det = det(b_p);
    for (i8 = 0; i8 < 2; i8++) {
      b_coordinate[i8] = coordinate[((int)Vertex_index[i] + 1841 * i8) - 1] -
        coordinate[((int)Vertex_index[4 + i] + 1841 * i8) - 1];
    }

    projection_dist[i] = fabs(b_line_det) / map_norm(b_coordinate);
    line_det[i] = b_line_det;
  }

  if ((line_det[0] > 0.0) && (line_det[1] > 0.0) && (line_det[2] > 0.0) &&
      (line_det[3] > 0.0)) {
    *inside = -1.0;

    /* inside */
  } else {
    *inside = 1.0;

    /* outside */
  }
}

/*
 * File trailer for point_dist2lane.c
 *
 * [EOF]
 */
