/*
 * File: point_inside_lane.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "point_inside_lane.h"
#include "det.h"

/* Function Definitions */

/*
 * return flag -1 for inside; 1 for outside
 * Arguments    : const double p[2]
 *                const double coordinate[3402]
 *                const double Vertex_index[8]
 * Return Type  : double
 */
double b_point_inside_lane(const double p[2], const double coordinate[3402],
  const double Vertex_index[8])
{
  double inside;
  double line_det[4];
  int i;
  double b_p[9];
  int i6;

  /*  */
  /*  coordinate = offlineData.coordinate; */
  /*  Vertex_index = offlineData.Vertex_index; */
  /*  -1 inside +1 outside */
  for (i = 0; i < 4; i++) {
    /* 计算当前点在离线地图的哪个边? sideIndex */
    b_p[6] = 1.0;
    b_p[7] = 1.0;
    for (i6 = 0; i6 < 2; i6++) {
      b_p[3 * i6] = p[i6];
      b_p[1 + 3 * i6] = coordinate[((int)Vertex_index[i] + 1701 * i6) - 1];
      b_p[2 + 3 * i6] = coordinate[((int)Vertex_index[4 + i] + 1701 * i6) - 1];
    }

    b_p[8] = 1.0;
    line_det[i] = det(b_p);
  }

  if ((line_det[0] > 0.0) && (line_det[1] > 0.0) && (line_det[2] > 0.0) &&
      (line_det[3] > 0.0)) {
    inside = -1.0;

    /* inside */
  } else {
    inside = 1.0;

    /* outside */
  }

  return inside;
}

/*
 * return flag -1 for inside; 1 for outside
 * Arguments    : const double p[2]
 *                const double coordinate[3682]
 *                const double Vertex_index[8]
 * Return Type  : double
 */
double c_point_inside_lane(const double p[2], const double coordinate[3682],
  const double Vertex_index[8])
{
  double inside;
  double line_det[4];
  int i;
  double b_p[9];
  int i7;

  /*  */
  /*  coordinate = offlineData.coordinate; */
  /*  Vertex_index = offlineData.Vertex_index; */
  /*  -1 inside +1 outside */
  for (i = 0; i < 4; i++) {
    /* 计算当前点在离线地图的哪个边? sideIndex */
    b_p[6] = 1.0;
    b_p[7] = 1.0;
    for (i7 = 0; i7 < 2; i7++) {
      b_p[3 * i7] = p[i7];
      b_p[1 + 3 * i7] = coordinate[((int)Vertex_index[i] + 1841 * i7) - 1];
      b_p[2 + 3 * i7] = coordinate[((int)Vertex_index[4 + i] + 1841 * i7) - 1];
    }

    b_p[8] = 1.0;
    line_det[i] = det(b_p);
  }

  if ((line_det[0] > 0.0) && (line_det[1] > 0.0) && (line_det[2] > 0.0) &&
      (line_det[3] > 0.0)) {
    inside = -1.0;

    /* inside */
  } else {
    inside = 1.0;

    /* outside */
  }

  return inside;
}

/*
 * return flag -1 for inside; 1 for outside
 * Arguments    : const double p[2]
 *                const double coordinate[3562]
 *                const double Vertex_index[8]
 * Return Type  : double
 */
double point_inside_lane(const double p[2], const double coordinate[3562], const
  double Vertex_index[8])
{
  double inside;
  double line_det[4];
  int i;
  double b_p[9];
  int i4;

  /*  */
  /*  coordinate = offlineData.coordinate; */
  /*  Vertex_index = offlineData.Vertex_index; */
  /*  -1 inside +1 outside */
  for (i = 0; i < 4; i++) {
    /* 计算当前点在离线地图的哪个边? sideIndex */
    b_p[6] = 1.0;
    b_p[7] = 1.0;
    for (i4 = 0; i4 < 2; i4++) {
      b_p[3 * i4] = p[i4];
      b_p[1 + 3 * i4] = coordinate[((int)Vertex_index[i] + 1781 * i4) - 1];
      b_p[2 + 3 * i4] = coordinate[((int)Vertex_index[4 + i] + 1781 * i4) - 1];
    }

    b_p[8] = 1.0;
    line_det[i] = det(b_p);
  }

  if ((line_det[0] > 0.0) && (line_det[1] > 0.0) && (line_det[2] > 0.0) &&
      (line_det[3] > 0.0)) {
    inside = -1.0;

    /* inside */
  } else {
    inside = 1.0;

    /* outside */
  }

  return inside;
}

/*
 * File trailer for point_inside_lane.c
 *
 * [EOF]
 */
