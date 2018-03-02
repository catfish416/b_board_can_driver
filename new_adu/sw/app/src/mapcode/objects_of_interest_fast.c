/*
 * File: objects_of_interest_fast.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "objects_of_interest_fast.h"
#include "point_projection2LNM.h"
#include "point_dist2lane.h"
#include "sum.h"
#include "point_inside_lane.h"

/* Function Definitions */

/*
 * Arguments    : const double object_list[3302]
 *                double object_num
 *                double x_in_lcs
 *                double y_in_lcs
 *                const double innerLine_coordinate[3562]
 *                const double innerLine_Vertex_index[8]
 *                const double middleLine_coordinate[3402]
 *                const double middleLine_Vertex_index[8]
 *                const double outerLine_coordinate[3682]
 *                const double outerLine_Vertex_index[8]
 *                double *obj_closest_in_path_ID
 *                double *obj_closest_in_next_path_ID
 *                double *ego_location
 * Return Type  : void
 */
void objects_of_interest_fast(const double object_list[3302], double object_num,
  double x_in_lcs, double y_in_lcs, const double innerLine_coordinate[3562],
  const double innerLine_Vertex_index[8], const double middleLine_coordinate
  [3402], const double middleLine_Vertex_index[8], const double
  outerLine_coordinate[3682], const double outerLine_Vertex_index[8], double
  *obj_closest_in_path_ID, double *obj_closest_in_next_path_ID, double
  *ego_location)
{
  double p[2];
  double inside[3];
  boolean_T b0;
  int next_lane;
  double varargin_1[4];
  double unusedU0;
  int ixstart;
  int itmp;
  int max_len;
  boolean_T exitg3;
  double corner_1[2];
  double corner_2[2];
  double b_outerLine_coordinate[2];
  double c_outerLine_coordinate[2];
  int i9;
  double unusedU2[2];
  int loop_ub;
  double object_list_lane_loc_data[127];
  boolean_T x_data[1701];
  int ii_data[1701];
  int ii_size_idx_0;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int i_size_idx_0;
  int i_data[1701];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int b_i_data[1701];
  double dist2StartCorner_obj_data[254];
  double objects_in_ego_lane_data[254];
  double obj_closest_in_path_ID_dist;
  p[0] = x_in_lcs;
  p[1] = y_in_lcs;
  inside[0] = point_inside_lane(p, innerLine_coordinate, innerLine_Vertex_index);
  inside[1] = b_point_inside_lane(p, middleLine_coordinate,
    middleLine_Vertex_index);
  inside[2] = c_point_inside_lane(p, outerLine_coordinate,
    outerLine_Vertex_index);

  /* counter-clockwise */
  switch ((int)sum(inside)) {
   case 3:
    /* ( 1  1  1) outside outer ring what if in case of on the line, the output could be zero?! */
    *ego_location = 3.0;
    break;

   case 1:
    /* ( 1  1 -1) */
    *ego_location = 2.0;

    /* outer lane  */
    break;

   case -1:
    /* ( 1 -1 -1) */
    *ego_location = 1.0;

    /* inner lane */
    break;

   case -3:
    /* (-1 -1 -1) */
    *ego_location = 0.0;

    /* inside inner ring */
    break;

   default:
    *ego_location = 5.0;

    /* warning('Unexpected location!') */
    break;
  }

  if ((*ego_location == 2.0) || (*ego_location == 1.0)) {
    b0 = true;
  } else {
    b0 = false;
  }

  if (!b0) {
    *obj_closest_in_path_ID = 0.0;
    *obj_closest_in_next_path_ID = 0.0;
  } else {
    if (*ego_location == 1.0) {
      next_lane = 2;
    } else {
      next_lane = 1;
    }

    point_dist2lane(p, outerLine_coordinate, outerLine_Vertex_index, varargin_1,
                    &unusedU0);
    ixstart = 1;
    unusedU0 = varargin_1[0];
    itmp = 0;
    if (rtIsNaN(varargin_1[0])) {
      max_len = 1;
      exitg3 = false;
      while ((!exitg3) && (max_len + 1 < 5)) {
        ixstart = max_len + 1;
        if (!rtIsNaN(varargin_1[max_len])) {
          unusedU0 = varargin_1[max_len];
          itmp = max_len;
          exitg3 = true;
        } else {
          max_len++;
        }
      }
    }

    if (ixstart < 4) {
      while (ixstart + 1 < 5) {
        if (varargin_1[ixstart] < unusedU0) {
          unusedU0 = varargin_1[ixstart];
          itmp = ixstart;
        }

        ixstart++;
      }
    }

    /* find the projected point of vehicle on the outer lane mark and its distance to the 1st corner. */
    for (i9 = 0; i9 < 2; i9++) {
      corner_1[i9] = outerLine_coordinate[((int)outerLine_Vertex_index[itmp] +
        1841 * i9) - 1];
      corner_2[i9] = outerLine_coordinate[((int)outerLine_Vertex_index[4 + itmp]
        + 1841 * i9) - 1];
      b_outerLine_coordinate[i9] = outerLine_coordinate[((int)
        outerLine_Vertex_index[itmp] + 1841 * i9) - 1];
      c_outerLine_coordinate[i9] = outerLine_coordinate[((int)
        outerLine_Vertex_index[4 + itmp] + 1841 * i9) - 1];
    }

    point_projection2LNM(p, b_outerLine_coordinate, c_outerLine_coordinate,
                         unusedU2, &unusedU0);

    /* find object in ego lane and next lane */
    if (1.0 > object_num) {
      loop_ub = 0;
    } else {
      loop_ub = (int)object_num;
    }

    for (i9 = 0; i9 < loop_ub; i9++) {
      object_list_lane_loc_data[i9] = object_list[1016 + i9];
    }

    for (i9 = 0; i9 < loop_ub; i9++) {
      x_data[i9] = (object_list_lane_loc_data[i9] == *ego_location);
    }

    ixstart = 0;
    ii_size_idx_0 = loop_ub;
    itmp = 1;
    exitg2 = false;
    while ((!exitg2) && (itmp <= loop_ub)) {
      guard2 = false;
      if (x_data[itmp - 1]) {
        ixstart++;
        ii_data[ixstart - 1] = itmp;
        if (ixstart >= loop_ub) {
          exitg2 = true;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2) {
        itmp++;
      }
    }

    if (loop_ub == 1) {
      if (ixstart == 0) {
        ii_size_idx_0 = 0;
      }
    } else if (1 > ixstart) {
      ii_size_idx_0 = 0;
    } else {
      ii_size_idx_0 = ixstart;
    }

    i_size_idx_0 = ii_size_idx_0;
    for (i9 = 0; i9 < ii_size_idx_0; i9++) {
      i_data[i9] = ii_data[i9];
    }

    max_len = ii_size_idx_0;
    for (i9 = 0; i9 < loop_ub; i9++) {
      x_data[i9] = (object_list_lane_loc_data[i9] == next_lane);
    }

    ixstart = 0;
    ii_size_idx_0 = loop_ub;
    itmp = 1;
    exitg1 = false;
    while ((!exitg1) && (itmp <= loop_ub)) {
      guard1 = false;
      if (x_data[itmp - 1]) {
        ixstart++;
        ii_data[ixstart - 1] = itmp;
        if (ixstart >= loop_ub) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        itmp++;
      }
    }

    if (loop_ub == 1) {
      if (ixstart == 0) {
        ii_size_idx_0 = 0;
      }
    } else if (1 > ixstart) {
      ii_size_idx_0 = 0;
    } else {
      ii_size_idx_0 = ixstart;
    }

    for (i9 = 0; i9 < ii_size_idx_0; i9++) {
      b_i_data[i9] = ii_data[i9];
    }

    /*  objects_in_ego_lane_id(1:size(objects_in_next_lane_id_temp,1))=objects_in_ego_lane_id_temp; */
    if (max_len >= ii_size_idx_0) {
    } else {
      max_len = ii_size_idx_0;
    }

    loop_ub = max_len << 1;
    for (i9 = 0; i9 < loop_ub; i9++) {
      dist2StartCorner_obj_data[i9] = 0.0;
    }

    if (i_size_idx_0 != 0) {
      for (i9 = 0; i9 < i_size_idx_0; i9++) {
        objects_in_ego_lane_data[i9] = object_list[i_data[i9] + 126];
      }

      for (i9 = 0; i9 < i_size_idx_0; i9++) {
        objects_in_ego_lane_data[i9 + i_size_idx_0] = object_list[i_data[i9] +
          380];
      }

      obj_closest_in_path_ID_dist = unusedU0 + 500.0;
      *obj_closest_in_path_ID = 0.0;

      /* Find the closest in-path object (CIPO) */
      for (ixstart = 0; ixstart < i_size_idx_0; ixstart++) {
        for (i9 = 0; i9 < 2; i9++) {
          p[i9] = objects_in_ego_lane_data[ixstart + i_size_idx_0 * i9];
        }

        point_projection2LNM(p, corner_1, corner_2, unusedU2,
                             &dist2StartCorner_obj_data[ixstart]);

        /*  projection onto the outerlane  */
        if ((dist2StartCorner_obj_data[ixstart] >= unusedU0) &&
            (dist2StartCorner_obj_data[ixstart] <= obj_closest_in_path_ID_dist))
        {
          *obj_closest_in_path_ID = i_data[ixstart];
          obj_closest_in_path_ID_dist = dist2StartCorner_obj_data[ixstart];
        }
      }
    } else {
      *obj_closest_in_path_ID = 0.0;
    }

    /*  obj_closest_in_next_path_ID =0; */
    if (ii_size_idx_0 != 0) {
      for (i9 = 0; i9 < ii_size_idx_0; i9++) {
        objects_in_ego_lane_data[i9] = object_list[b_i_data[i9] + 126];
      }

      for (i9 = 0; i9 < ii_size_idx_0; i9++) {
        objects_in_ego_lane_data[i9 + ii_size_idx_0] = object_list[b_i_data[i9]
          + 380];
      }

      obj_closest_in_path_ID_dist = unusedU0 + 500.0;
      *obj_closest_in_next_path_ID = 0.0;

      /* Find the closest Next Lane object */
      for (ixstart = 0; ixstart < ii_size_idx_0; ixstart++) {
        for (i9 = 0; i9 < 2; i9++) {
          p[i9] = objects_in_ego_lane_data[ixstart + ii_size_idx_0 * i9];
        }

        point_projection2LNM(p, corner_1, corner_2, unusedU2,
                             &dist2StartCorner_obj_data[ixstart + max_len]);
        if ((dist2StartCorner_obj_data[ixstart + max_len] > unusedU0) &&
            (dist2StartCorner_obj_data[ixstart + max_len] <
             obj_closest_in_path_ID_dist)) {
          *obj_closest_in_next_path_ID = b_i_data[ixstart];
          obj_closest_in_path_ID_dist = dist2StartCorner_obj_data[ixstart +
            max_len];
        }
      }
    } else {
      *obj_closest_in_next_path_ID = 0.0;
    }
  }

  /* Sort objects in ego and next lane in driving direction and in the proximity sequence of ego vehicle. */
  /* flipud/fliplr/flip(a,dim); */
  /* sortrows */
  /*  object_of_interest_id = obj_closest_in_path_ID; */
}

/*
 * File trailer for objects_of_interest_fast.c
 *
 * [EOF]
 */
