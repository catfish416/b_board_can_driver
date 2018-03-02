/*
 * File: map2pp.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 16-May-2017 12:10:42
 */

#ifndef MAP2PP_H
#define MAP2PP_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "map2pp_types.h"

/* Function Declarations */
extern void map2pp(const double local_landmarks_id_front[99], const double
                   local_landmarks_id_rear[99], const double vehicle_state[5],
                   const double object_list_update[3302], const double
                   global_landmarks[594], const double CIPO_id[10], const double
                   CIPO_next_id[10], const double maneuvers[24], double ego_lane,
                   double odo_state_v, const double cubic_polynom_LC[4], double
                   Sur_LandmarkIdList_front[99], double Sur_LandmarkIdList_rear
                   [99], double Veh_State[8], double Object_Info[3302], double
                   Sur_ObjectId_List[30], double Landmark_Info[594], double
                   Navi_LandmarkIdList[24], double *EgoLane_Index, double
                   LaneCenteringLine[4]);

#endif

/*
 * File trailer for map2pp.h
 *
 * [EOF]
 */
