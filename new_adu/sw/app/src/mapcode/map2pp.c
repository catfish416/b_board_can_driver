/*
 * File: map2pp.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 16-May-2017 12:10:42
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "map2pp.h"

/* Function Definitions */

/*
 * Arguments    : 
 * input:		  
 *		 const double local_landmarks_id_front[99]
 *                const double local_landmarks_id_rear[99]
 *                const double vehicle_state[5]
 *                const double object_list_update[3302]
 *                const double global_landmarks[594]
 *                const double CIPO_id[10]
 *                const double CIPO_next_id[10]
 *                const double maneuvers[24]
 *                double ego_lane
 *                double odo_state_v
 *                const double cubic_polynom_LC[4]
 * ouptput:
 *                double Sur_LandmarkIdList_front[99]
 *                double Sur_LandmarkIdList_rear[99]
 *                double Veh_State[8]
 *                double Object_Info[3302]
 *                double Sur_ObjectId_List[30]
 *                double Landmark_Info[594]
 *                double Navi_LandmarkIdList[24]
 *                double *EgoLane_Index
 *                double LaneCenteringLine[4]
 * Return Type  : void
 */
void map2pp(const double local_landmarks_id_front[99], const double
            local_landmarks_id_rear[99], const double vehicle_state[5], const
            double object_list_update[3302], const double global_landmarks[594],
            const double CIPO_id[10], const double CIPO_next_id[10], const
            double maneuvers[24], double ego_lane, double odo_state_v, const
            double cubic_polynom_LC[4], double Sur_LandmarkIdList_front[99],
            double Sur_LandmarkIdList_rear[99], double Veh_State[8], double
            Object_Info[3302], double Sur_ObjectId_List[30], double
            Landmark_Info[594], double Navi_LandmarkIdList[24], double
            *EgoLane_Index, double LaneCenteringLine[4])
{
  int i0;
  memcpy(&Sur_LandmarkIdList_front[0], &local_landmarks_id_front[0], 99U *
         sizeof(double));
  memcpy(&Sur_LandmarkIdList_rear[0], &local_landmarks_id_rear[0], 99U * sizeof
         (double));
  memcpy(&Object_Info[0], &object_list_update[0], 3302U * sizeof(double));
  memcpy(&Landmark_Info[0], &global_landmarks[0], 594U * sizeof(double));
  memset(&Veh_State[0], 0, sizeof(double) << 3);
  for (i0 = 0; i0 < 5; i0++) {
    Veh_State[i0] = vehicle_state[i0];
  }

  Veh_State[7] = odo_state_v;
  memcpy(&Navi_LandmarkIdList[0], &maneuvers[0], 24U * sizeof(double));
  memset(&Sur_ObjectId_List[0], 0, 30U * sizeof(double));
  for (i0 = 0; i0 < 10; i0++) {
    Sur_ObjectId_List[3 * i0] = CIPO_id[i0];
  }

  if (ego_lane == 1.0) {
    for (i0 = 0; i0 < 10; i0++) {
      Sur_ObjectId_List[1 + 3 * i0] = CIPO_next_id[i0];
    }
  } else {
    for (i0 = 0; i0 < 10; i0++) {
      Sur_ObjectId_List[2 + 3 * i0] = CIPO_next_id[i0];
    }
  }

  *EgoLane_Index = ego_lane;
  for (i0 = 0; i0 < 4; i0++) {
    LaneCenteringLine[i0] = cubic_polynom_LC[i0];
  }

  /*      %#codegen */
  /*      OperationFinishFlg = 1; */
  /*      Landmark_Info = zeros(30,5); */
  /*      Landmark_Info(1,:) = [0,0,0,-4,12];Landmark_Info(8,:) = [0,0,-4,0,11]; */
  /*      Landmark_Info(2,:) = [100,0,100,-4,11];Landmark_Info(3,:) = [100,0,104,0,12]; */
  /*      Landmark_Info(4,:) = [100,100,104,100,11];Landmark_Info(5,:) = [100,100,100,104,12]; */
  /*      Landmark_Info(6,:) = [0,100,0,104,11];Landmark_Info(7,:) = [0,100,-4,100,12]; */
  /*   */
  /*      Landmark_Info(1,:) = [0,0,0,-4,12];Landmark_Info(8,:) = [-20,20,-24,20,11]; */
  /*      Landmark_Info(2,:) = [100,0,100,-4,11];Landmark_Info(3,:) = [120,20,124,20,12]; */
  /*      Landmark_Info(4,:) = [120,120,124,120,11];Landmark_Info(5,:) = [100,140,100,144,12]; */
  /*      Landmark_Info(6,:) = [0,140,0,144,11];Landmark_Info(7,:) = [-20,120,-24,120,12]; */
  /*      Navi_LandmarkIdList = [0,20,40,2;100,20,40,2;100,120,40,2;0,120,40,2]; */
  /*      EgoLane_Index = 1; */
  /*      Veh_State = [99.5,-2,0,0,0,0,0,0]'; */
  /*      Sur_ObjectId_List = zeros(3,10); */
  /*      Sur_ObjectId_List(1,:) = [1,2,0,0,0,0,0,0,0,0]; */
  /*      Object_Info = zeros(127,26); */
  /*      Object_Info(1,:) = [1,122,0,50,0,1,2.5,0,0,0,0,0,0,0,0,0,1,30,10,0,0,1,2.5,0,0,0;];     */
  /*      Object_Info(2,:) = [2,122,0,-50,0,1,2.5,0,0,0,0,0,0,0,0,0,1,30,10,0,0,1,2.5,0,0,0;];  */
  /*      Object_Info(3,:) = [3,30,10,0,0,1,2.5,0,0,0,0,0,0,0,0,0,1,30,10,0,0,1,2.5,0,0,0;];     */
  /*      Object_Info(4,:) = [4,30,10,0,0,1,2.5,0,0,0,0,0,0,0,0,0,1,30,10,0,0,1,2.5,0,0,0;];  */
  /*      Sur_LandmarkIdList_front = [2,3,4,5,6,7,8,1,0]'; */
  /*      Sur_LandmarkIdList_rear = [2,3,4,5,6,7,8,1,0]'; */
  /*      LaneCenteringLine = cubic_polynom_LC; */
}

/*
 * File trailer for map2pp.c
 *
 * [EOF]
 */
