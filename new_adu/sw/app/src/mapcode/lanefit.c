/*
 * File: lanefit.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "lanefit.h"
#include "polyfit.h"
#include "tpcomp.h"
#include "point_projection2LNM.h"
#include "point_dist2lane.h"

/* Function Definitions */

/*
 * -------------------------------------------------------
 *  Patac
 *  SHD
 *  Software
 *  Authors:  Binjian Xin
 *  Date   :  2017-1
 * right_shift = 2; assuming middle lane mark is used, this parameter gives
 * the right shift of line fitting result.
 * point_num = 50; the point of number used for line fitting. assuming point
 * interval is 1m, then the curve fitting result is 50m
 * middleLine is the middle lane mark to be fitted
 * flag is for clockwise (1) or couter-clockwise (-1)
 * ang is yaw angle in Radian referring to east of GCS
 * x0 y0 is the vehicle locaton referring to the GCS
 * Arguments    : const double veh_state[5]
 *                const double middleLine_coordinate[5103]
 *                const double middleLine_Vertex_index[8]
 *                const double outerLine_coordinate[3682]
 *                const double outerLine_Vertex_index[8]
 *                double lane_pos
 *                double cubic_poly_coef[4]
 * Return Type  : void
 */
void lanefit(const double veh_state[5], const double middleLine_coordinate[5103],
             const double middleLine_Vertex_index[8], const double
             outerLine_coordinate[3682], const double outerLine_Vertex_index[8],
             double lane_pos, double cubic_poly_coef[4])
{
  double varargin_1[4];
  double cor_index;
  int ixstart;
  int itmp;
  int ix;
  boolean_T exitg2;
  double b_outerLine_coordinate[2];
  double c_outerLine_coordinate[2];
  double unusedU2[2];
  int x_size_idx_0;
  int loop_ub;
  boolean_T x_data[1701];
  int ii_data[1701];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int lanepoint_behind_data[1701];
  double mid_insight[62];
  double dv7[3];
  double b_mid_insight[62];
  double dv8[62];
  double b_lane_pos;

  /*  x0 =  ; y0 =   ; */
  /*  flag =   ;    0逆时针, 1顺时针  */
  /*  ang = pi;   x和原坐标系横轴逆时针方向上的夹角，x为车辆行驶方向  */
  /* ------------------------------------------------------- */
  /* Find the closest side */
  point_dist2lane(*(double (*)[2])&veh_state[0], outerLine_coordinate,
                  outerLine_Vertex_index, varargin_1, &cor_index);
  ixstart = 1;
  cor_index = varargin_1[0];
  itmp = 0;
  if (rtIsNaN(varargin_1[0])) {
    ix = 1;
    exitg2 = false;
    while ((!exitg2) && (ix + 1 < 5)) {
      ixstart = ix + 1;
      if (!rtIsNaN(varargin_1[ix])) {
        cor_index = varargin_1[ix];
        itmp = ix;
        exitg2 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 4) {
    while (ixstart + 1 < 5) {
      if (varargin_1[ixstart] < cor_index) {
        cor_index = varargin_1[ixstart];
        itmp = ixstart;
      }

      ixstart++;
    }
  }

  /* find the projected point of vehicle on the outer lane mark and its distance to the 1st corner. */
  for (ixstart = 0; ixstart < 2; ixstart++) {
    b_outerLine_coordinate[ixstart] = outerLine_coordinate[((int)
      outerLine_Vertex_index[itmp] + 1841 * ixstart) - 1];
    c_outerLine_coordinate[ixstart] = outerLine_coordinate[((int)
      outerLine_Vertex_index[4 + itmp] + 1841 * ixstart) - 1];
  }

  point_projection2LNM(*(double (*)[2])&veh_state[0], b_outerLine_coordinate,
                       c_outerLine_coordinate, unusedU2, &cor_index);

  /*  n = size(side_lane,1); */
  if (middleLine_Vertex_index[itmp] > middleLine_Vertex_index[4 + itmp]) {
    ixstart = 0;
    ix = 0;
  } else {
    ixstart = (int)middleLine_Vertex_index[itmp] - 1;
    ix = (int)middleLine_Vertex_index[4 + itmp];
  }

  /*  cor_index = find(side_lane_dist<dist2StartCorner_veh,n,'last'); */
  x_size_idx_0 = ix - ixstart;
  loop_ub = ix - ixstart;
  for (ix = 0; ix < loop_ub; ix++) {
    x_data[ix] = (middleLine_coordinate[3402 + (ixstart + ix)] < cor_index);
  }

  ixstart = 0;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x_size_idx_0)) {
    guard1 = false;
    if (x_data[ix - 1]) {
      ixstart++;
      ii_data[ixstart - 1] = ix;
      if (ixstart >= x_size_idx_0) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ix++;
    }
  }

  if (x_size_idx_0 == 1) {
    if (ixstart == 0) {
      x_size_idx_0 = 0;
    }
  } else if (1 > ixstart) {
    x_size_idx_0 = 0;
  } else {
    x_size_idx_0 = ixstart;
  }

  for (ixstart = 0; ixstart < x_size_idx_0; ixstart++) {
    lanepoint_behind_data[ixstart] = ii_data[ixstart];
  }

  ixstart = lanepoint_behind_data[0];
  if (x_size_idx_0 > 1) {
    for (ix = 1; ix + 1 <= x_size_idx_0; ix++) {
      if (lanepoint_behind_data[ix] > ixstart) {
        ixstart = lanepoint_behind_data[ix];
      }
    }
  }

  cor_index = ((double)ixstart + middleLine_Vertex_index[itmp]) - 1.0;

  /*   é?‰??–?–???‘  */
  if ((middleLine_Vertex_index[4 + itmp] - cor_index >= 30.0) && (cor_index -
       middleLine_Vertex_index[itmp] > 20.0)) {
    for (ixstart = 0; ixstart < 2; ixstart++) {
      for (ix = 0; ix < 31; ix++) {
        mid_insight[ix + 31 * ixstart] = middleLine_coordinate[((int)(cor_index
          + (double)ix) + 1701 * ixstart) - 1];
      }
    }

    dv7[0] = 0.0;
    dv7[1] = 0.0;
    dv7[2] = -veh_state[2];
    for (ixstart = 0; ixstart < 31; ixstart++) {
      mid_insight[ixstart] -= veh_state[0];
      mid_insight[31 + ixstart] -= veh_state[1];
      for (ix = 0; ix < 2; ix++) {
        b_mid_insight[ix + (ixstart << 1)] = mid_insight[ixstart + 31 * ix];
      }
    }

    b_tpcomp(dv7, b_mid_insight, dv8);
    for (ixstart = 0; ixstart < 2; ixstart++) {
      for (ix = 0; ix < 31; ix++) {
        mid_insight[ix + 31 * ixstart] = dv8[ixstart + (ix << 1)];
      }
    }

    /* curve fitting */
    polyfit(*(double (*)[31])&mid_insight[0], *(double (*)[31])&mid_insight[31],
            cubic_poly_coef);

    /*    y(i) = C(1)*x(i)*x(i)*x(i)+ C(2)*x(i)*x(i) + C(3)*x(i) + C(4); */
    /* right shift */
    if (lane_pos == 2.0) {
      b_lane_pos = 2.0 * sqrt(cubic_poly_coef[2] * cubic_poly_coef[2] + 1.0);
    } else if (lane_pos == 1.0) {
      b_lane_pos = -2.0 * sqrt(cubic_poly_coef[2] * cubic_poly_coef[2] + 1.0);
    } else {
      b_lane_pos = 0.0;
    }

    cubic_poly_coef[3] -= b_lane_pos;
  } else {
    for (ixstart = 0; ixstart < 4; ixstart++) {
      cubic_poly_coef[ixstart] = 0.0;
    }
  }
}

/*
 * File trailer for lanefit.c
 *
 * [EOF]
 */
