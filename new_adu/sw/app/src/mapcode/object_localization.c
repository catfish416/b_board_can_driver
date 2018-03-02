/*
 * File: object_localization.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "object_localization.h"
#include "map_norm.h"
#include "det.h"
#include "point_inside_lane.h"

/* Function Definitions */

/*
 * -------------------------------------------------------
 *  Patac
 *  SHD
 *  Software
 *  Authors:  Binjian Xin
 *  Date   :  2017-1
 * -------------------------------------------------------
 * Arguments    : const double object_list[3302]
 *                double object_num
 *                const double innerLine_coordinate[3562]
 *                const double innerLine_Vertex_index[8]
 *                const double middleLine_coordinate[3402]
 *                const double middleLine_Vertex_index[8]
 *                const double outerLine_coordinate[3682]
 *                const double outerLine_Vertex_index[8]
 *                double lane_offset
 *                double object_list_update[3302]
 * Return Type  : void
 */
void object_localization(const double object_list[3302], double object_num,
  const double innerLine_coordinate[3562], const double innerLine_Vertex_index[8],
  const double middleLine_coordinate[3402], const double
  middleLine_Vertex_index[8], const double outerLine_coordinate[3682], const
  double outerLine_Vertex_index[8], double lane_offset, double
  object_list_update[3302])
{
  double side_direction[381];
  int i;
  double p[2];
  double y;
  int k;
  double line_det[4];
  double projection_dist[4];
  double b_p[9];
  int i3;
  double b_outerLine_coordinate[2];
  memcpy(&object_list_update[0], &object_list[0], 3302U * sizeof(double));

  /*  distance 			= zeros(size(object_list,1),3); */
  memset(&side_direction[0], 0, 381U * sizeof(double));

  /*  nearestIndex 		= zeros(size(object_list,1),3); */
  for (i = 0; i < (int)object_num; i++) {
    if (object_list[i] != 0.0) {
      p[0] = object_list[127 + i];
      p[1] = object_list[381 + i];

      /* 2nd and 4th colomn are range x and range y */
      side_direction[i] = point_inside_lane(p, innerLine_coordinate,
        innerLine_Vertex_index);
      side_direction[127 + i] = b_point_inside_lane(p, middleLine_coordinate,
        middleLine_Vertex_index);

      /*          side_direction(i,3) = point_inside_lane(p,outerLine_coordinate, outerLine_Vertex_index); */
      /*  return flag -1 for inside; 1 for outside  */
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
      for (k = 0; k < 4; k++) {
        /* 计算当前点在离线地图的哪个边�? sideIndex */
        b_p[6] = 1.0;
        b_p[7] = 1.0;
        for (i3 = 0; i3 < 2; i3++) {
          b_p[3 * i3] = p[i3];
          b_p[1 + 3 * i3] = outerLine_coordinate[((int)outerLine_Vertex_index[k]
            + 1841 * i3) - 1];
          b_p[2 + 3 * i3] = outerLine_coordinate[((int)outerLine_Vertex_index[4
            + k] + 1841 * i3) - 1];
        }

        b_p[8] = 1.0;
        y = det(b_p);
        for (i3 = 0; i3 < 2; i3++) {
          b_outerLine_coordinate[i3] = outerLine_coordinate[((int)
            outerLine_Vertex_index[k] + 1841 * i3) - 1] - outerLine_coordinate
            [((int)outerLine_Vertex_index[4 + k] + 1841 * i3) - 1];
        }

        projection_dist[k] = fabs(y) / map_norm(b_outerLine_coordinate);
        line_det[k] = y;
      }

      if ((line_det[0] > 0.0) && (line_det[1] > 0.0) && (line_det[2] > 0.0) &&
          (line_det[3] > 0.0) && (projection_dist[0] > lane_offset) &&
          (projection_dist[1] > lane_offset) && (projection_dist[2] >
           lane_offset) && (projection_dist[3] > lane_offset)) {
        k = -1;

        /* inside */
      } else {
        k = 1;

        /* outside */
      }

      side_direction[254 + i] = k;
    }
  }

  for (i = 0; i < (int)object_num; i++) {
    if (object_list[i] != 0.0) {
      /* counter-clockwise */
      y = side_direction[i];
      for (k = 0; k < 2; k++) {
        y += side_direction[i + 127 * (k + 1)];
      }

      switch ((int)y) {
       case 3:
        /* ( 1  1  1) outside outer ring */
        object_list_update[1016 + i] = 3.0;
        break;

       case 1:
        /* ( 1  1 -1) */
        object_list_update[1016 + i] = 2.0;

        /* outer lane  */
        break;

       case -1:
        /* ( 1 -1 -1) */
        object_list_update[1016 + i] = 1.0;

        /* inner lane */
        break;

       case -3:
        /* (-1 -1 -1) */
        object_list_update[1016 + i] = 0.0;

        /* inside inner ring */
        break;

       default:
        object_list_update[1016 + i] = 5.0;

        /* warning('Unexpected location!') */
        break;
      }
    }
  }
}

/*
 * File trailer for object_localization.c
 *
 * [EOF]
 */
