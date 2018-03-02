/*
 * File: quest_map4landmark_new_lane.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "quest_map4landmark_new_lane.h"
#include "calDistance.h"
#include "flipud.h"
#include "eml_setop.h"
#include "power.h"

/* Function Definitions */

/*
 * -------------------------------------------------------
 *  Patac
 *  SHD
 *  Software
 *  Authors:  Binjian Xin
 *  Date   :  2017-1
 *  ground and veh_pose for setting observation.ground
 *  landmarks and landmarks_in_proximity in column vector.
 * -------------------------------------------------------
 * -------------------------------------------------------
 * Arguments    : double x_in_lcs
 *                double y_in_lcs
 *                const double landmarks[594]
 *                const double middleLine_coordinate[3402]
 *                const double middleLine_Vertex_index[8]
 *                double c_landmarks_in_proximity_id_in_[99]
 *                double d_landmarks_in_proximity_id_in_[99]
 * Return Type  : void
 */
void quest_map4landmark_new_lane(double x_in_lcs, double y_in_lcs, const double
  landmarks[594], const double middleLine_coordinate[3402], const double
  middleLine_Vertex_index[8], double c_landmarks_in_proximity_id_in_[99], double
  d_landmarks_in_proximity_id_in_[99])
{
  double b_landmarks[99];
  int i1;
  double dv5[99];
  double dv6[99];
  boolean_T x[99];
  int i;
  int idx;
  int ii_data[99];
  int ii;
  boolean_T exitg13;
  boolean_T guard13 = false;
  int loop_ub;
  int ii_size[1];
  signed char visible_data[99];
  double b_x_in_lcs[2];
  double ldm_closest_in_path_ID_Index;
  double unusedU1;
  double nearestIndex_Ego;
  double landmarks_in_proximity_data[594];
  double lat_distance_ldm_data[99];
  double side_direction_ldm_data[99];
  double nearestIndex_ldm_data[99];
  int ldm_closest_in_path_ID;
  int lat_distance_ldm_size[1];
  signed char tmp_data[99];
  boolean_T x_data[1701];
  int b_ii_data[1701];
  int ii_size_idx_0;
  boolean_T exitg8;
  boolean_T exitg10;
  boolean_T exitg12;
  boolean_T exitg4;
  boolean_T guard8 = false;
  boolean_T guard10 = false;
  boolean_T guard12 = false;
  boolean_T guard4 = false;
  int i_size_idx_0;
  int nearestIndex_ldm_size[1];
  double b_tmp_data[98];
  double rear_cyclic_2_data[99];
  signed char c_tmp_data[98];
  int b_ii_size_idx_0;
  boolean_T exitg3;
  boolean_T exitg7;
  boolean_T exitg9;
  boolean_T exitg11;
  boolean_T guard3 = false;
  boolean_T guard7 = false;
  boolean_T guard9 = false;
  boolean_T guard11 = false;
  int side_direction_ldm_size[1];
  int i_data[1701];
  boolean_T exitg2;
  boolean_T exitg6;
  boolean_T guard2 = false;
  boolean_T guard6 = false;
  int c_ii_data[1701];
  boolean_T exitg5;
  boolean_T exitg1;
  boolean_T guard5 = false;
  boolean_T guard1 = false;
  int rear_cyclic_2_size[1];
  int ib_data[99];
  int ib_size[1];

  /* ------------------------------------------------------- */
  /*  Patac */
  /*  SHD */
  /*  Software */
  /*  Authors:  Binjian Xin */
  /*  Date   :  2017-1 */
  /* ------------------------------------------------------- */
  /*  landmarks_in_proximity = zeros(size(landmarks)); */
  /* Landmarks */
  /* landmarks column vector */
  /*  visible = find( (abs(x1) <= roi.x) & (abs(y1) <= roi.y) ); */
  /*  distance2ego = (x1.^2 + y1.^2); */
  /*  [min_dist, ind] = min(distance2ego); */
  for (i1 = 0; i1 < 99; i1++) {
    b_landmarks[i1] = (landmarks[i1] + landmarks[198 + i1]) / 2.0 - x_in_lcs;
  }

  power(b_landmarks, dv5);
  for (i1 = 0; i1 < 99; i1++) {
    b_landmarks[i1] = (landmarks[99 + i1] + landmarks[297 + i1]) / 2.0 -
      y_in_lcs;
  }

  power(b_landmarks, dv6);
  for (i = 0; i < 99; i++) {
    x[i] = (dv5[i] + dv6[i] <= 2500.0);
  }

  idx = 0;
  ii = 1;
  exitg13 = false;
  while ((!exitg13) && (ii < 100)) {
    guard13 = false;
    if (x[ii - 1]) {
      idx++;
      ii_data[idx - 1] = ii;
      if (idx >= 99) {
        exitg13 = true;
      } else {
        guard13 = true;
      }
    } else {
      guard13 = true;
    }

    if (guard13) {
      ii++;
    }
  }

  if (1 > idx) {
    loop_ub = 0;
    ii_size[0] = 0;
  } else {
    loop_ub = idx;
    ii_size[0] = idx;
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    visible_data[i1] = (signed char)ii_data[i1];
  }

  /* %%%%%%%%%%%%%%%%%%% */
  if (ii_size[0] != 0) {
    b_x_in_lcs[0] = x_in_lcs;
    b_x_in_lcs[1] = y_in_lcs;
    calDistance(b_x_in_lcs, middleLine_coordinate, middleLine_Vertex_index,
                &ldm_closest_in_path_ID_Index, &unusedU1, &nearestIndex_Ego);
    idx = ii_size[0];
    for (i1 = 0; i1 < 6; i1++) {
      for (ii = 0; ii < loop_ub; ii++) {
        landmarks_in_proximity_data[ii + idx * i1] = landmarks[(visible_data[ii]
          + 99 * i1) - 1];
      }
    }

    i = ii_size[0];
    for (i1 = 0; i1 < i; i1++) {
      lat_distance_ldm_data[i1] = 0.0;
    }

    i = ii_size[0];
    for (i1 = 0; i1 < i; i1++) {
      side_direction_ldm_data[i1] = 0.0;
    }

    i = ii_size[0];
    for (i1 = 0; i1 < i; i1++) {
      nearestIndex_ldm_data[i1] = 0.0;
    }

    /* Initialize search */
    /*      p = (landmarks_in_proximity(1,1:2)+ landmarks_in_proximity(1,3:4))/2; % */
    /*      [lat_distance_ldm(1),side_direction_ldm(1),nearestIndex_ldm(1)] = calDistance(p,middleLine_coordinate,middleLine_Vertex_index,option); */
    /*      ldm_closest_in_path_ID_Index = nearestIndex_ldm(1); */
    ldm_closest_in_path_ID = -2;
    ldm_closest_in_path_ID_Index = nearestIndex_Ego;

    /* Find the closest landmark in front */
    for (i = 0; i < loop_ub; i++) {
      /*  */
      for (i1 = 0; i1 < 2; i1++) {
        b_x_in_lcs[i1] = (landmarks_in_proximity_data[i + idx * i1] +
                          landmarks_in_proximity_data[i + idx * (2 + i1)]) / 2.0;
      }

      calDistance(b_x_in_lcs, middleLine_coordinate, middleLine_Vertex_index,
                  &lat_distance_ldm_data[i], &side_direction_ldm_data[i],
                  &nearestIndex_ldm_data[i]);

      /*  projection onto the middleLine */
      /* counter-clockwise */
      /* %middleLine Index-->(2);in front of the ego car; */
      if ((nearestIndex_ldm_data[i] >= nearestIndex_Ego) &&
          ((nearestIndex_ldm_data[i] < ldm_closest_in_path_ID_Index) ||
           (ldm_closest_in_path_ID + 1 < 0))) {
        /* nearer than the closest so far */
        ldm_closest_in_path_ID = i;
        ldm_closest_in_path_ID_Index = nearestIndex_ldm_data[i];
      }
    }

    memset(&c_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
    memset(&d_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
    if (ldm_closest_in_path_ID + 1 < 0) {
      /* no front landmarks all are behind the ego vehicle. */
      /* counter-clockwise */
      lat_distance_ldm_size[0] = ii_size[0];
      i = ii_size[0];
      for (i1 = 0; i1 < i; i1++) {
        lat_distance_ldm_data[i1] = visible_data[i1];
      }

      flipud(lat_distance_ldm_data, lat_distance_ldm_size);
      loop_ub = (signed char)((signed char)loop_ub - 1);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        tmp_data[i1] = (signed char)i1;
      }

      loop_ub = (signed char)((signed char)ii_size[0] - 1) + 1;
      for (i1 = 0; i1 < loop_ub; i1++) {
        d_landmarks_in_proximity_id_in_[tmp_data[i1]] = lat_distance_ldm_data[i1];
      }
    } else if (fabs(((double)ldm_closest_in_path_ID + 1.0) - 1.0) < 0.001) {
      /*  counter-clockwise */
      if ((middleLine_Vertex_index[0] < nearestIndex_Ego) && (nearestIndex_Ego <
           middleLine_Vertex_index[4])) {
        /* beginning */
        /*                  ldm_ID = visible(ldm_closest_in_path_ID); */
        for (i1 = 0; i1 < loop_ub; i1++) {
          x_data[i1] = (nearestIndex_ldm_data[i1] >= nearestIndex_Ego);
        }

        i = ii_size[0];
        idx = 0;
        ii_size_idx_0 = ii_size[0];
        ii = 1;
        exitg12 = false;
        while ((!exitg12) && (ii <= i)) {
          guard12 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= i) {
              exitg12 = true;
            } else {
              guard12 = true;
            }
          } else {
            guard12 = true;
          }

          if (guard12) {
            ii++;
          }
        }

        if (ii_size[0] == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        i_size_idx_0 = ii_size_idx_0;
        nearestIndex_ldm_size[0] = ii_size_idx_0;
        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          rear_cyclic_2_data[i1] = b_ii_data[i1];
        }

        for (i1 = 0; i1 < loop_ub; i1++) {
          x_data[i1] = (nearestIndex_ldm_data[i1] < nearestIndex_Ego);
        }

        i = ii_size[0];
        idx = 0;
        ii_size_idx_0 = ii_size[0];
        ii = 1;
        exitg11 = false;
        while ((!exitg11) && (ii <= i)) {
          guard11 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= i) {
              exitg11 = true;
            } else {
              guard11 = true;
            }
          } else {
            guard11 = true;
          }

          if (guard11) {
            ii++;
          }
        }

        if (ii_size[0] == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          i_data[i1] = b_ii_data[i1];
        }

        if (nearestIndex_ldm_size[0] != 0) {
          loop_ub = (signed char)((signed char)i_size_idx_0 - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)i_size_idx_0 - 1) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
              rear_cyclic_2_data[i1] - 1];
          }
        }

        if (ii_size_idx_0 != 0) {
          lat_distance_ldm_size[0] = ii_size_idx_0;
          for (i1 = 0; i1 < ii_size_idx_0; i1++) {
            lat_distance_ldm_data[i1] = visible_data[i_data[i1] - 1];
          }

          flipud(lat_distance_ldm_data, lat_distance_ldm_size);
          loop_ub = (signed char)((signed char)ii_size_idx_0 - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)ii_size_idx_0 - 1) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            d_landmarks_in_proximity_id_in_[tmp_data[i1]] =
              lat_distance_ldm_data[i1];
          }
        }
      } else if ((middleLine_Vertex_index[3] < nearestIndex_Ego) &&
                 (nearestIndex_Ego < middleLine_Vertex_index[7])) {
        /* end */
        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] >= visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg10 = false;
        while ((!exitg10) && (ii <= loop_ub)) {
          guard10 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg10 = true;
            } else {
              guard10 = true;
            }
          } else {
            guard10 = true;
          }

          if (guard10) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        i_size_idx_0 = ii_size_idx_0;
        nearestIndex_ldm_size[0] = ii_size_idx_0;
        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          rear_cyclic_2_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] < visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg9 = false;
        while ((!exitg9) && (ii <= loop_ub)) {
          guard9 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg9 = true;
            } else {
              guard9 = true;
            }
          } else {
            guard9 = true;
          }

          if (guard9) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          i_data[i1] = b_ii_data[i1];
        }

        if (nearestIndex_ldm_size[0] != 0) {
          loop_ub = (signed char)((signed char)i_size_idx_0 - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)i_size_idx_0 - 1) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
              rear_cyclic_2_data[i1] - 1];
          }
        }

        if (ii_size_idx_0 != 0) {
          lat_distance_ldm_size[0] = ii_size_idx_0;
          for (i1 = 0; i1 < ii_size_idx_0; i1++) {
            lat_distance_ldm_data[i1] = visible_data[i_data[i1] - 1];
          }

          flipud(lat_distance_ldm_data, lat_distance_ldm_size);
          loop_ub = (signed char)((signed char)ii_size_idx_0 - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)ii_size_idx_0 - 1) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            d_landmarks_in_proximity_id_in_[tmp_data[i1]] =
              lat_distance_ldm_data[i1];
          }
        }
      } else {
        loop_ub = (signed char)((signed char)loop_ub - 1);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          tmp_data[i1] = (signed char)i1;
        }

        loop_ub = (signed char)((signed char)ii_size[0] - 1) + 1;
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[i1];
        }
      }
    } else {
      /*  (ldm_closest_in_path_ID>1) */
      /*  counter-clockwise */
      if ((middleLine_Vertex_index[0] < nearestIndex_Ego) && (nearestIndex_Ego <
           middleLine_Vertex_index[4])) {
        /* beginning */
        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] <= 79);
        }

        idx = 0;
        ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg8 = false;
        while ((!exitg8) && (ii <= loop_ub)) {
          guard8 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg8 = true;
            } else {
              guard8 = true;
            }
          } else {
            guard8 = true;
          }

          if (guard8) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        lat_distance_ldm_size[0] = ii_size_idx_0;
        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          lat_distance_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] >= visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        b_ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg7 = false;
        while ((!exitg7) && (ii <= loop_ub)) {
          guard7 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg7 = true;
            } else {
              guard7 = true;
            }
          } else {
            guard7 = true;
          }

          if (guard7) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            b_ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          b_ii_size_idx_0 = 0;
        } else {
          b_ii_size_idx_0 = idx;
        }

        i_size_idx_0 = b_ii_size_idx_0;
        side_direction_ldm_size[0] = b_ii_size_idx_0;
        for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
          side_direction_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] > 79);
        }

        idx = 0;
        b_ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg6 = false;
        while ((!exitg6) && (ii <= loop_ub)) {
          guard6 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg6 = true;
            } else {
              guard6 = true;
            }
          } else {
            guard6 = true;
          }

          if (guard6) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            b_ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          b_ii_size_idx_0 = 0;
        } else {
          b_ii_size_idx_0 = idx;
        }

        nearestIndex_ldm_size[0] = b_ii_size_idx_0;
        for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
          nearestIndex_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] < visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        ii = 1;
        exitg5 = false;
        while ((!exitg5) && (ii <= loop_ub)) {
          guard5 = false;
          if (x_data[ii - 1]) {
            idx++;
            c_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg5 = true;
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }

          if (guard5) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            loop_ub = 0;
          }
        } else if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        for (i1 = 0; i1 < loop_ub; i1++) {
          i_data[i1] = c_ii_data[i1];
        }

        rear_cyclic_2_size[0] = loop_ub;
        for (i1 = 0; i1 < loop_ub; i1++) {
          rear_cyclic_2_data[i1] = c_ii_data[i1];
        }

        if (visible_data[ldm_closest_in_path_ID] >= 96) {
          if (side_direction_ldm_size[0] != 0) {
            i = (signed char)((signed char)i_size_idx_0 - 1);
            for (i1 = 0; i1 <= i; i1++) {
              tmp_data[i1] = (signed char)i1;
            }

            i = (signed char)((signed char)i_size_idx_0 - 1) + 1;
            for (i1 = 0; i1 < i; i1++) {
              c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
                side_direction_ldm_data[i1] - 1];
            }
          }

          if (ii_size_idx_0 != 0) {
            i = (unsigned char)((unsigned char)ii_size_idx_0 + 255U);
            for (i1 = 0; i1 <= i; i1++) {
              tmp_data[i1] = (signed char)((unsigned int)i1 + (unsigned char)
                ((unsigned char)side_direction_ldm_size[0] + 1U));
            }

            i = (unsigned char)((unsigned char)ii_size_idx_0 + 255U) + 1;
            for (i1 = 0; i1 < i; i1++) {
              c_landmarks_in_proximity_id_in_[tmp_data[i1] - 1] = visible_data
                [(int)lat_distance_ldm_data[i1] - 1];
            }
          }

          if (b_ii_size_idx_0 == 0) {
            nearestIndex_ldm_size[0] = 0;
          }

          if (loop_ub == 0) {
            rear_cyclic_2_size[0] = 0;
          }

          do_vectors(nearestIndex_ldm_data, nearestIndex_ldm_size,
                     rear_cyclic_2_data, rear_cyclic_2_size,
                     side_direction_ldm_data, side_direction_ldm_size, ii_data,
                     ii_size, ib_data, ib_size);
          if (side_direction_ldm_size[0] != 0) {
            lat_distance_ldm_size[0] = side_direction_ldm_size[0];
            loop_ub = side_direction_ldm_size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              lat_distance_ldm_data[i1] = visible_data[(int)
                side_direction_ldm_data[i1] - 1];
            }

            flipud(lat_distance_ldm_data, lat_distance_ldm_size);
            loop_ub = (signed char)((signed char)side_direction_ldm_size[0] - 1);
            for (i1 = 0; i1 <= loop_ub; i1++) {
              tmp_data[i1] = (signed char)i1;
            }

            loop_ub = (signed char)((signed char)side_direction_ldm_size[0] - 1)
              + 1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              d_landmarks_in_proximity_id_in_[tmp_data[i1]] =
                lat_distance_ldm_data[i1];
            }
          }
        } else {
          if (side_direction_ldm_size[0] == 0) {
            side_direction_ldm_size[0] = 0;
          }

          if (ii_size_idx_0 == 0) {
            lat_distance_ldm_size[0] = 0;
          }

          do_vectors(lat_distance_ldm_data, lat_distance_ldm_size,
                     side_direction_ldm_data, side_direction_ldm_size,
                     rear_cyclic_2_data, nearestIndex_ldm_size, ii_data, ii_size,
                     ib_data, ib_size);
          if (nearestIndex_ldm_size[0] != 0) {
            i = (signed char)((signed char)nearestIndex_ldm_size[0] - 1);
            for (i1 = 0; i1 <= i; i1++) {
              tmp_data[i1] = (signed char)i1;
            }

            i = (signed char)((signed char)nearestIndex_ldm_size[0] - 1) + 1;
            for (i1 = 0; i1 < i; i1++) {
              c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
                rear_cyclic_2_data[i1] - 1];
            }
          }

          if (loop_ub != 0) {
            lat_distance_ldm_size[0] = loop_ub;
            for (i1 = 0; i1 < loop_ub; i1++) {
              lat_distance_ldm_data[i1] = visible_data[i_data[i1] - 1];
            }

            flipud(lat_distance_ldm_data, lat_distance_ldm_size);
            i = (signed char)((signed char)loop_ub - 1);
            for (i1 = 0; i1 <= i; i1++) {
              tmp_data[i1] = (signed char)i1;
            }

            i = (signed char)((signed char)loop_ub - 1) + 1;
            for (i1 = 0; i1 < i; i1++) {
              d_landmarks_in_proximity_id_in_[tmp_data[i1]] =
                lat_distance_ldm_data[i1];
            }
          }

          if (b_ii_size_idx_0 != 0) {
            i = (unsigned char)((unsigned char)b_ii_size_idx_0 + 255U);
            for (i1 = 0; i1 <= i; i1++) {
              tmp_data[i1] = (signed char)((unsigned int)i1 + (unsigned char)
                ((unsigned char)loop_ub + 1U));
            }

            lat_distance_ldm_size[0] = b_ii_size_idx_0;
            for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
              lat_distance_ldm_data[i1] = visible_data[b_ii_data[i1] - 1];
            }

            flipud(lat_distance_ldm_data, lat_distance_ldm_size);
            loop_ub = (unsigned char)((unsigned char)b_ii_size_idx_0 + 255U) + 1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              d_landmarks_in_proximity_id_in_[tmp_data[i1] - 1] =
                lat_distance_ldm_data[i1];
            }
          }
        }
      } else if ((middleLine_Vertex_index[3] < nearestIndex_Ego) &&
                 (nearestIndex_Ego < middleLine_Vertex_index[7])) {
        /* end */
        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] <= 21);
        }

        idx = 0;
        ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg4 = false;
        while ((!exitg4) && (ii <= loop_ub)) {
          guard4 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg4 = true;
            } else {
              guard4 = true;
            }
          } else {
            guard4 = true;
          }

          if (guard4) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          ii_size_idx_0 = 0;
        } else {
          ii_size_idx_0 = idx;
        }

        for (i1 = 0; i1 < ii_size_idx_0; i1++) {
          lat_distance_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] >= visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        b_ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg3 = false;
        while ((!exitg3) && (ii <= loop_ub)) {
          guard3 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg3 = true;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            b_ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          b_ii_size_idx_0 = 0;
        } else {
          b_ii_size_idx_0 = idx;
        }

        i_size_idx_0 = b_ii_size_idx_0;
        side_direction_ldm_size[0] = b_ii_size_idx_0;
        for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
          side_direction_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] > 21);
        }

        idx = 0;
        b_ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg2 = false;
        while ((!exitg2) && (ii <= loop_ub)) {
          guard2 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg2 = true;
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }

          if (guard2) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            b_ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          b_ii_size_idx_0 = 0;
        } else {
          b_ii_size_idx_0 = idx;
        }

        nearestIndex_ldm_size[0] = b_ii_size_idx_0;
        for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
          nearestIndex_ldm_data[i1] = b_ii_data[i1];
        }

        i = ii_size[0];
        for (i1 = 0; i1 < i; i1++) {
          x_data[i1] = (visible_data[i1] < visible_data[ldm_closest_in_path_ID]);
        }

        idx = 0;
        b_ii_size_idx_0 = loop_ub;
        ii = 1;
        exitg1 = false;
        while ((!exitg1) && (ii <= loop_ub)) {
          guard1 = false;
          if (x_data[ii - 1]) {
            idx++;
            b_ii_data[idx - 1] = ii;
            if (idx >= loop_ub) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            ii++;
          }
        }

        if (loop_ub == 1) {
          if (idx == 0) {
            b_ii_size_idx_0 = 0;
          }
        } else if (1 > idx) {
          b_ii_size_idx_0 = 0;
        } else {
          b_ii_size_idx_0 = idx;
        }

        rear_cyclic_2_size[0] = b_ii_size_idx_0;
        for (i1 = 0; i1 < b_ii_size_idx_0; i1++) {
          rear_cyclic_2_data[i1] = b_ii_data[i1];
        }

        if (side_direction_ldm_size[0] != 0) {
          loop_ub = (signed char)((signed char)i_size_idx_0 - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)i_size_idx_0 - 1) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
              side_direction_ldm_data[i1] - 1];
          }
        }

        if (ii_size_idx_0 != 0) {
          i1 = ii_size_idx_0 + side_direction_ldm_size[0];
          if (i_size_idx_0 + 1 > i1) {
            ii = 1;
            i1 = 0;
          } else {
            ii = i_size_idx_0 + 1;
          }

          loop_ub = (signed char)((signed char)i1 - (signed char)ii);
          for (i = 0; i <= loop_ub; i++) {
            tmp_data[i] = (signed char)((signed char)((signed char)ii + i) - 1);
          }

          loop_ub = (signed char)((signed char)i1 - (signed char)ii) + 1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_landmarks_in_proximity_id_in_[tmp_data[i1]] = visible_data[(int)
              lat_distance_ldm_data[i1] - 1];
          }
        }

        if (nearestIndex_ldm_size[0] == 0) {
          nearestIndex_ldm_size[0] = 0;
        }

        if (b_ii_size_idx_0 == 0) {
          rear_cyclic_2_size[0] = 0;
        }

        do_vectors(nearestIndex_ldm_data, nearestIndex_ldm_size,
                   rear_cyclic_2_data, rear_cyclic_2_size,
                   side_direction_ldm_data, side_direction_ldm_size, ii_data,
                   ii_size, ib_data, ib_size);
        if (side_direction_ldm_size[0] != 0) {
          lat_distance_ldm_size[0] = side_direction_ldm_size[0];
          loop_ub = side_direction_ldm_size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            lat_distance_ldm_data[i1] = visible_data[(int)
              side_direction_ldm_data[i1] - 1];
          }

          flipud(lat_distance_ldm_data, lat_distance_ldm_size);
          loop_ub = (signed char)((signed char)side_direction_ldm_size[0] - 1);
          for (i1 = 0; i1 <= loop_ub; i1++) {
            tmp_data[i1] = (signed char)i1;
          }

          loop_ub = (signed char)((signed char)side_direction_ldm_size[0] - 1) +
            1;
          for (i1 = 0; i1 < loop_ub; i1++) {
            d_landmarks_in_proximity_id_in_[tmp_data[i1]] =
              lat_distance_ldm_data[i1];
          }
        }
      } else {
        if (ldm_closest_in_path_ID + 1 > ii_size[0]) {
          i1 = 0;
          ii = 0;
        } else {
          i1 = ldm_closest_in_path_ID;
          ii = ii_size[0];
        }

        loop_ub = ii - i1;
        for (ii = 0; ii < loop_ub; ii++) {
          c_landmarks_in_proximity_id_in_[ii] = visible_data[i1 + ii];
        }

        if (1 > ldm_closest_in_path_ID) {
          loop_ub = 0;
          i1 = 0;
        } else {
          loop_ub = ldm_closest_in_path_ID;
          i1 = ldm_closest_in_path_ID;
        }

        lat_distance_ldm_size[0] = loop_ub;
        for (ii = 0; ii < loop_ub; ii++) {
          lat_distance_ldm_data[ii] = visible_data[ii];
        }

        flipud(lat_distance_ldm_data, lat_distance_ldm_size);
        loop_ub = lat_distance_ldm_size[0];
        for (ii = 0; ii < loop_ub; ii++) {
          b_tmp_data[ii] = lat_distance_ldm_data[ii];
        }

        loop_ub = (signed char)((signed char)i1 - 1);
        for (ii = 0; ii <= loop_ub; ii++) {
          c_tmp_data[ii] = (signed char)ii;
        }

        loop_ub = (signed char)((signed char)i1 - 1) + 1;
        for (i1 = 0; i1 < loop_ub; i1++) {
          d_landmarks_in_proximity_id_in_[c_tmp_data[i1]] = b_tmp_data[i1];
        }
      }
    }
  } else {
    memset(&c_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
    memset(&d_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
  }

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
}

/*
 * File trailer for quest_map4landmark_new_lane.c
 *
 * [EOF]
 */
