/*
 * File: slam_ekf_patac_map_pose_output.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 15-May-2017 18:33:17
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "slam_ekf_patac_map_pose_output.h"
#include "lanefit.h"
#include "objects_of_interest_fast.h"
#include "object_localization.h"
#include "quest_map4landmark_new_lane.h"
#include "tpcomp.h"
#include "wgs2utm.h"
#include "rtkraw2wgs.h"
#include "slam_ekf_patac_map_pose_output_data.h"

/* Type Definitions */
#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  double x_in_utm;
  double y_in_utm;
  double a_in_utm;
  double t_in_utm;
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef struct_emxArray_real_T_127
#define struct_emxArray_real_T_127

struct emxArray_real_T_127
{
  double data[127];
  int size[1];
};

#endif                                 /*struct_emxArray_real_T_127*/

#ifndef typedef_emxArray_real_T_127
#define typedef_emxArray_real_T_127

typedef struct emxArray_real_T_127 emxArray_real_T_127;

#endif                                 /*typedef_emxArray_real_T_127*/

#ifndef struct_sCOmqUAMgCTJTOu7x1zRbmG
#define struct_sCOmqUAMgCTJTOu7x1zRbmG

struct sCOmqUAMgCTJTOu7x1zRbmG
{
  emxArray_real_T_127 f1;
};

#endif                                 /*struct_sCOmqUAMgCTJTOu7x1zRbmG*/

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct sCOmqUAMgCTJTOu7x1zRbmG cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  boolean_T ellipses;
  boolean_T tags;
  boolean_T odometry;
  boolean_T noise;
  double alpha;
  boolean_T step_by_step;
  boolean_T people;
  double proximity;
  double ground;
  double map;
  double observations;
  double compatibility;
  double ground_hypothesis;
  double hypothesis;
  double tables;
} struct_T;

#endif                                 /*typedef_struct_T*/

/* Variable Definitions */
static double step;
static boolean_T step_not_empty;
static b_struct_T veh_origin_pose;
static struct_T configuration;
static double x_in_utm_last;
static double y_in_utm_last;
static double a_in_utm_last;
static double t_in_utm_last;
static double x_in_utm_last_meas;
static double y_in_utm_last_meas;
static double veh_vel_last[2];
static double wgs_ts_last;
static struct0_T innerLine_lcs;
static struct1_T middleLine_lcs;
static struct2_T outerLine_lcs;
static double landmarks_lcs[594];
static double patac_navi_lcs[24];
static double cnt;
static boolean_T cnt_not_empty;

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void cnt_not_empty_init(void)
{
  cnt_not_empty = false;
}

/*
 * Arguments    : const double chi2_dat[1000]
 *                const struct0_T *innerLine
 *                const struct1_T *middleLine
 *                const struct2_T *outerLine
 *                double lane_offset
 *                const double landmarks[594]
 *                double odo_motion_v
 *                double rtk_gps_lat
 *                double rtk_gps_lon
 *                double rtk_gps_yaw
 *                double rtk_gps_ts
 *                const double sensor_data_raw[160]
 *                const double object_list[3302]
 *                double object_num
 *                const double patac_navi[24]
 *                double global_landmarks[594]
 *                double vehicle_state[5]
 *                double object_list_update[3302]
 *                double CIPO_id[10]
 *                double CIPO_next_id[10]
 *                double c_landmarks_in_proximity_id_in_[99]
 *                double d_landmarks_in_proximity_id_in_[99]
 *                double maneuvers[24]
 *                double innerLaneMark[3562]
 *                double middleLaneMark[3402]
 *                double outerLaneMark[3682]
 *                double cubic_poly_coef[4]
 *                double *ego_location
 *                double *odo_state_v
 *                double *t_in_utm
 *                double *x_in_utm
 *                double *y_in_utm
 *                double *a_in_utm
 *                double *delta_t
 *                double *x_last
 *                double *y_last
 *                double v_last[2]
 *                double *state_flag
 *                double veh_ori_pos[4]
 *                double *step_out
 * Return Type  : void
 */
void slam_ekf_patac_map_pose_output(const double chi2_dat[1000], const struct0_T
  *innerLine, const struct1_T *middleLine, const struct2_T *outerLine, double
  lane_offset, const double landmarks[594], double odo_motion_v, double
  rtk_gps_lat, double rtk_gps_lon, double rtk_gps_yaw, double rtk_gps_ts, const
  double sensor_data_raw[160], const double object_list[3302], double object_num,
  const double patac_navi[24], double global_landmarks[594], double
  vehicle_state[5], double object_list_update[3302], double CIPO_id[10], double
  CIPO_next_id[10], double c_landmarks_in_proximity_id_in_[99], double
  d_landmarks_in_proximity_id_in_[99], double maneuvers[24], double
  innerLaneMark[3562], double middleLaneMark[3402], double outerLaneMark[3682],
  double cubic_poly_coef[4], double *ego_location, double *odo_state_v, double
  *t_in_utm, double *x_in_utm, double *y_in_utm, double *a_in_utm, double
  *delta_t, double *x_last, double *y_last, double v_last[2], double *state_flag,
  double veh_ori_pos[4], double *step_out)
{
  double a_in_lcs;
  double wgs_lon;
  double x_in_lcs;
  double unusedU0;
  char unusedU1;
  double y_in_lcs;
  double dv1[3562];
  int i0;
  double dv2[3402];
  int i;
  double dv3[3682];
  int ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  double object_list_lcs[3302];
  int loop_ub;
  int object_loc_size[2];
  double object_loc_data[254];
  double b_object_loc_data[127];
  double b_x_in_lcs[3];
  double Pa_data[254];
  int Pa_size[2];
  cell_wrap_0 reshapes[2];
  double dv4[3];
  int reshapes_size[2];
  (void)sensor_data_raw;
  (void)object_num;

  /* ------------------------------------------------------- */
  /*  PATAC */
  /*  ADU */
  /*  SHD */
  /*   */
  /*  Authors:  Binjian Xin */
  /*  Date   :  11-2016 */
  /* ------------------------------------------------------- */
  /*  slam, explore data association algorithms */
  /*  hd_map: offline HD map orginal ground */
  /*  odo_motion: vehicle odometer data: odo_motion.x; odo_motion.y; odo_motion.yaw; */
  /*  sensor_data_raw: raw sensor data 40x4 [ID, x, y, MoveInfo] */
  /*  sensor_data_raw.srr[4] srr(1)-srr(4) are four SRR Radar raw data. */
  /*  srr(i).Measure --> [rho tita;...] */
  /*  srr(i).Rn --> [rho tita;...]c */
  /*  sensor_data_fusion: sensor fuison data; sensor_data_fusion */
  /*  127x26 */
  /*  [ID,RangeX,VelX,RangeY,VelY,MoveInfo,Width,Type,Fus_State,Confidence, */
  /*  P11,...P44]; FuseState Byte 9 for Lane Position Judge */
  /*  hd_map offline hd map, supposed to be converted to RTM 51r : wgs2utm(Lat,Lon,51,'N'); */
  /*  hd_map.lanemarking1/lanemarking2/lanemarking3: three lanes, points in counterclockwise order; 1 */
  /*  for left, 2 for middle, 3 for right; */
  /*  hd_map.landmark(:,5) (x,y,length, width, LandMarkType) */
  /*  rtk_gps: rtk_gps.[lat, lon, alt, yaw, pitch, roll, ts] */
  /*   */
  /*    enumeration */
  /*    XCrossing_Stop (11) % ??????? */
  /*    XCrossing_Start (12) % ??????????? */
  /*    TCrossing_Stop (21)%T?????? */
  /*    TCrossing_Start (22)%T?????????? */
  /*    ZCrossing (30)%????? */
  /*    Stop_1 (51)%??1???????????????????????????????????????????????2???????? */
  /*    Stop_2 (52)%??2????????? */
  /*    LeftTurn_Stop (61)% ??L?????? */
  /*    LeftTurn_Start (62)% ??L?????? */
  /*    RightTurn_Stop (71)% ??L?????? */
  /*    RightTurn_Start (72)% ??L?????? */
  /*    ParkSlotOnRoad_Stop (81)% ???????1????????? */
  /*    ParkSlotOnRoad_Start (82)% ???????2????????? */
  /*    ParkSlotOffRoad (90)%  ????????????????????????? */
  /*    ParkSlotOffRoad_Start (91)%  ????????????????????? */
  /*    ParkSlotOffRoad_Stop  (92)%  ????????????????????? */
  /*    RoadChange (100)% ????????????????????????????????????????????????????????? */
  /*    SpeedLimit (110)%???????? */
  /*    GroundArrow (120)%???????EPM3???????????? */
  /*    TrafficLight (130)%????????? */
  /*    UnClassified (180)%?? */
  /*    end */
  /* ------------------------------------------------------- */
  /*              t_in_utm,... */
  /*              x_in_utm,... */
  /*              y_in_utm,... */
  /*              a_in_utm,... */
  /*              delta_t,... */
  /*              x_last,... */
  /*              y_last,... */
  /*              v_last,... */
  /*              veh_ori_pos,... */
  /*  sensor_data_raw_lcs; */
  /* Convert rtk raw data to longitude, latitude, yaw in radian and ts in */
  /* second */
  rtkraw2wgs(rtk_gps_lat, rtk_gps_lon, rtk_gps_yaw, rtk_gps_ts, &a_in_lcs,
             &wgs_lon, &x_in_lcs, t_in_utm);
  unusedU0 = 51.0;
  wgs2utm(a_in_lcs, wgs_lon, &unusedU0, x_in_utm, y_in_utm, &unusedU1);
 // printf("latitude=%lf, longtitude=%lf, x_utm=%lf,y_utm=%lf\n",a_in_lcs, wgs_lon, x_in_utm, y_in_utm);

  /* rtk system --> VCS offset */
  /* rtk calibration info input! */
  *a_in_utm = (6.2831853071795862 - x_in_lcs) + 1.5707963267948966;
  if ((6.2831853071795862 - x_in_lcs) + 1.5707963267948966 > 6.2831853071795862)
  {
    *a_in_utm = ((6.2831853071795862 - x_in_lcs) + 1.5707963267948966) -
      6.2831853071795862;
  }

  memcpy(&chi2[0], &chi2_dat[0], 1000U * sizeof(double));
  if (!cnt_not_empty) {
    cnt = 0.0;
    cnt_not_empty = true;
  } else {
    cnt++;
  }

  if ((!step_not_empty) || (cnt < 100.0)) {
    /*  first cycle */
    step = 0.0;
    step_not_empty = true;
    *state_flag = 0.0;
    configuration.ellipses = true;
    configuration.tags = false;
    configuration.odometry = true;
    configuration.noise = true;
    configuration.alpha = 0.99;
    configuration.step_by_step = false;
    configuration.people = false;
    configuration.proximity = 50.0;
    configuration.ground = 1.0;
    configuration.map = 2.0;
    configuration.observations = 3.0;
    configuration.compatibility = 4.0;
    configuration.ground_hypothesis = 5.0;
    configuration.hypothesis = 6.0;
    configuration.tables = 7.0;
    configuration.step_by_step = true;
    veh_origin_pose.x_in_utm = 0.0;
    veh_origin_pose.y_in_utm = 0.0;
    veh_origin_pose.a_in_utm = 0.0;
    veh_origin_pose.t_in_utm = 0.0;
    veh_origin_pose.x_in_utm = *x_in_utm;

    /*  in Mercator */
    veh_origin_pose.y_in_utm = *y_in_utm;

    /*  in Mercator */
    veh_origin_pose.a_in_utm = *a_in_utm;
    veh_origin_pose.t_in_utm = *t_in_utm;

    /* Square One */
    /*  x, y, yaw in LCS */
    /* standing still */
    /*  V_x, V_y in LCS */
    for (i = 0; i < 5; i++) {
      vehicle_state[i] = 0.0;
    }

    x_in_utm_last = *x_in_utm;
    y_in_utm_last = *y_in_utm;
    a_in_utm_last = *a_in_utm;
    t_in_utm_last = *t_in_utm;
    wgs_ts_last = *t_in_utm;
    x_in_utm_last_meas = *x_in_utm;
    y_in_utm_last_meas = *y_in_utm;

    /*      a_last = a_in_utm; */
    for (i = 0; i < 2; i++) {
      veh_vel_last[i] = 0.0;
    }

    innerLine_lcs = *innerLine;
    middleLine_lcs = *middleLine;
    outerLine_lcs = *outerLine;
    memcpy(&landmarks_lcs[0], &landmarks[0], 594U * sizeof(double));
    memcpy(&patac_navi_lcs[0], &patac_navi[0], 24U * sizeof(double));
    memset(&c_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
    memset(&d_landmarks_in_proximity_id_in_[0], 0, 99U * sizeof(double));
    memcpy(&maneuvers[0], &patac_navi[0], 24U * sizeof(double));
    memcpy(&global_landmarks[0], &landmarks[0], 594U * sizeof(double));
    *odo_state_v = odo_motion_v;
    *step_out = 0.0;
    memcpy(&object_list_update[0], &object_list[0], 3302U * sizeof(double));
    *ego_location = -1.0;

    /*  due to invalid data from rtk ego locatoin cannot be determined. */
    *delta_t = 0.0;
    *x_last = 0.0;
    *y_last = 0.0;
    for (i = 0; i < 2; i++) {
      v_last[i] = 0.0;
    }

    veh_ori_pos[0] = veh_origin_pose.x_in_utm;
    veh_ori_pos[1] = veh_origin_pose.y_in_utm;
    veh_ori_pos[2] = veh_origin_pose.a_in_utm;
    veh_ori_pos[3] = veh_origin_pose.t_in_utm;
    memset(&CIPO_id[0], 0, 10U * sizeof(double));
    memset(&CIPO_next_id[0], 0, 10U * sizeof(double));
    for (i0 = 0; i0 < 4; i0++) {
      cubic_poly_coef[i0] = 0.0;
    }

    memcpy(&innerLaneMark[0], &innerLine_lcs.coordinate[0], 3562U * sizeof
           (double));
    for (i0 = 0; i0 < 2; i0++) {
      memcpy(&middleLaneMark[i0 * 1701], &middleLine_lcs.coordinate[i0 * 1701],
             1701U * sizeof(double));
    }

    memcpy(&outerLaneMark[0], &outerLine_lcs.coordinate[0], 3682U * sizeof
           (double));
  } else {
    step++;
    if (step == 1.0) {
      innerLine_lcs = *innerLine;
      middleLine_lcs = *middleLine;
      outerLine_lcs = *outerLine;
      for (i0 = 0; i0 < 1781; i0++) {
        dv1[i0] = veh_origin_pose.x_in_utm;
        dv1[1781 + i0] = veh_origin_pose.y_in_utm;
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i = 0; i < 1781; i++) {
          innerLine_lcs.coordinate[i + 1781 * i0] = innerLine->coordinate[i +
            1781 * i0] - dv1[i + 1781 * i0];
        }
      }

      for (i0 = 0; i0 < 1701; i0++) {
        dv2[i0] = veh_origin_pose.x_in_utm;
        dv2[1701 + i0] = veh_origin_pose.y_in_utm;
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i = 0; i < 1701; i++) {
          middleLine_lcs.coordinate[i + 1701 * i0] = middleLine->coordinate[i +
            1701 * i0] - dv2[i + 1701 * i0];
        }
      }

      for (i0 = 0; i0 < 1841; i0++) {
        dv3[i0] = veh_origin_pose.x_in_utm;
        dv3[1841 + i0] = veh_origin_pose.y_in_utm;
      }

      for (i0 = 0; i0 < 2; i0++) {
        for (i = 0; i < 1841; i++) {
          outerLine_lcs.coordinate[i + 1841 * i0] = outerLine->coordinate[i +
            1841 * i0] - dv3[i + 1841 * i0];
        }
      }

      /* relocate landmarks in LCS, origin is the starting point. */
      memcpy(&landmarks_lcs[0], &landmarks[0], 594U * sizeof(double));

      /*  landmarks in LCS! */
      /*  landmarks in LCS! */
      /*  landmarks in LCS! */
      for (i0 = 0; i0 < 99; i0++) {
        landmarks_lcs[i0] = landmarks[i0] - veh_origin_pose.x_in_utm;
        landmarks_lcs[99 + i0] = landmarks[99 + i0] - veh_origin_pose.y_in_utm;
        landmarks_lcs[198 + i0] = landmarks[198 + i0] - veh_origin_pose.x_in_utm;
        landmarks_lcs[297 + i0] = landmarks[297 + i0] - veh_origin_pose.y_in_utm;
      }

      /*  landmarks in LCS! */
      /* relocate navigation maneuver list in LCS, origin is the starting point. */
      memcpy(&patac_navi_lcs[0], &patac_navi[0], 24U * sizeof(double));

      /* navigation maneuver in LCS! */
      for (i0 = 0; i0 < 6; i0++) {
        patac_navi_lcs[i0] = patac_navi[i0] - veh_origin_pose.x_in_utm;
        patac_navi_lcs[6 + i0] = patac_navi[6 + i0] - veh_origin_pose.y_in_utm;
      }

      /* navigation maneuver in LCS! */
      /*  x, y, yaw in LCS */
      /* standing still */
      /*  V_x, V_y in LCS */
      /*      draw_map_nav_ground(innerLine_lcs.coordinate,innerLine_lcs.Vertex_index,... */
      /*                        middleLine_lcs.coordinate,middleLine_lcs.Vertex_index,... */
      /*                        outerLine_lcs.coordinate,outerLine_lcs.Vertex_index,... */
      /*                        landmarks_lcs, vehicle_state, patac_navi_lcs, configuration); */
    }

    *delta_t = *t_in_utm - t_in_utm_last;
    if ((fabs(rtk_gps_lat) < 1.0E-6) || (fabs(rtk_gps_lon) < 1.0E-6) || (fabs
         (rtk_gps_ts) < 1.0E-6)) {
      /* if invalid rtk data after initialization halfways due to rtk signal loss */
      *state_flag = 1.0;
      x_in_lcs = (x_in_utm_last + veh_vel_last[0] * 0.01) -
        veh_origin_pose.x_in_utm;
      y_in_lcs = (y_in_utm_last + veh_vel_last[1] * 0.01) -
        veh_origin_pose.y_in_utm;
      a_in_lcs = a_in_utm_last;
      x_in_utm_last += veh_vel_last[0] * 0.01;
      y_in_utm_last += veh_vel_last[1] * 0.01;
      a_in_utm_last = *a_in_utm;
      t_in_utm_last += 0.01;

      /*          veh_vel_last = veh_vel; */
      wgs_ts_last = *t_in_utm;

      /*          x_in_utm_last_meas = x_in_utm; */
      /*          y_in_utm_last_meas = y_in_utm; */
    } else if (fabs(*t_in_utm - wgs_ts_last) < 1.0E-6) {
      *state_flag = 2.0;
      x_in_lcs = (x_in_utm_last + veh_vel_last[0] * 0.01) -
        veh_origin_pose.x_in_utm;
      y_in_lcs = (y_in_utm_last + veh_vel_last[1] * 0.01) -
        veh_origin_pose.y_in_utm;
      a_in_lcs = a_in_utm_last;
      x_in_utm_last += veh_vel_last[0] * 0.01;
      y_in_utm_last += veh_vel_last[1] * 0.01;
      a_in_utm_last = *a_in_utm;
      t_in_utm_last += 0.01;

      /*              veh_vel_last = veh_vel; */
      /* wgs_ts_last = wgs_ts_in_sec; */
    } else {
      *state_flag = 3.0;
      x_in_lcs = *x_in_utm - veh_origin_pose.x_in_utm;
      y_in_lcs = *y_in_utm - veh_origin_pose.y_in_utm;
      a_in_lcs = *a_in_utm;

      /* a_in_utm - veh_origin_pose.a_in_utm; */
      /* veh_vel = [(x_in_lcs-x_in_lcs_last)/0.01; (y_in_lcs-y_in_lcs_last)/0.01];%(ts_in_lcs - ts_in_lcs_last); */
      veh_vel_last[0] = (*x_in_utm - x_in_utm_last_meas) * 20.0;

      /* (x_in_lcs-x_in_lcs_last)*100; */
      veh_vel_last[1] = (*y_in_utm - y_in_utm_last_meas) * 20.0;

      /* (y_in_lcs-y_in_lcs_last)*100;%(ts_in_lcs - ts_in_lcs_last); */
      x_in_utm_last_meas = *x_in_utm;
      y_in_utm_last_meas = *y_in_utm;
      x_in_utm_last = *x_in_utm;
      y_in_utm_last = *y_in_utm;
      a_in_utm_last = *a_in_utm;
      t_in_utm_last = *t_in_utm;
      wgs_ts_last = *t_in_utm;
    }

    *x_last = x_in_utm_last;
    *y_last = y_in_utm_last;
    veh_ori_pos[0] = veh_origin_pose.x_in_utm;
    veh_ori_pos[1] = veh_origin_pose.y_in_utm;
    veh_ori_pos[2] = veh_origin_pose.a_in_utm;
    veh_ori_pos[3] = veh_origin_pose.t_in_utm;

    /*  x, y, yaw in LCS */
    vehicle_state[0] = x_in_lcs;
    vehicle_state[1] = y_in_lcs;
    vehicle_state[2] = a_in_lcs;
    for (i = 0; i < 2; i++) {
      v_last[i] = veh_vel_last[i];
      vehicle_state[i + 3] = veh_vel_last[i];
    }

    /* { */
    /*  */
    /* if isempty(step) */
    /*     step = 0; */
    /*     state_flag = 0; */
    /*     configuration = struct('ellipses',true,'tags',false,'odometry',true, ... */
    /*                             'noise',true,'alpha',0.99,'step_by_step',false,... */
    /*                             'people',false,'proximity',50, 'ground',1,'map',2,'observations',3,... */
    /*                             'compatibility',4,'ground_hypothesis',5,'hypothesis',6,... */
    /*                             'tables',7); */
    /*     configuration.step_by_step = true;                 */
    /*     veh_origin_pose = struct('x_in_utm',0,'y_in_utm',0,'a_in_utm',0,'t_in_utm',0);    */
    /*  */
    /*     veh_origin_pose.x_in_utm = x_in_utm;% in Mercator */
    /*     veh_origin_pose.y_in_utm = y_in_utm;% in Mercator */
    /*     veh_origin_pose.a_in_utm = a_in_utm; */
    /*     veh_origin_pose.t_in_utm = t_in_utm; */
    /*      */
    /*     %Square One */
    /*     x_in_lcs = 0; */
    /*     y_in_lcs = 0; */
    /*     a_in_lcs = 0; */
    /*    t_in_lcs = 0; */
    /*     veh_pose = [0 0 0]';% x, y, yaw in LCS */
    /*     %standing still */
    /*     veh_vel = [0 0]';% V_x, V_y in LCS */
    /*     vehicle_state = [veh_pose; veh_vel]; */
    /*      */
    /*     x_in_utm_last = x_in_utm; */
    /*     y_in_utm_last = y_in_utm; */
    /*     a_in_utm_last = a_in_utm; */
    /*     t_in_utm_last = t_in_utm; */
    /*     veh_vel_last = [0 0]'; */
    /*     wgs_ts_last = wgs_ts_in_sec; */
    /*     x_in_utm_last_meas = x_in_utm; */
    /*     y_in_utm_last_meas = y_in_utm; */
    /*      */
    /*     innerLine_lcs = innerLine; */
    /*     middleLine_lcs = middleLine; */
    /*     outerLine_lcs = outerLine; */
    /*     landmarks_lcs = landmarks; */
    /*     patac_navi_lcs = patac_navi; */
    /*     object_list_lcs = object_list; */
    /*     object_num_lcs = object_num; */
    /*     object_list_update_lcs = object_list; */
    /*     CIPO_id_lcs = zeros(10,1); */
    /*     CIPO_id_next_lcs = zeros(10,1); */
    /*     sensor_data_raw_lcs = sensor_data_raw; */
    /*     ego_location_lcs = -1; */
    /*     cubic_poly_coef_lcs = zeros(1,4); */
    /*      */
    /*     landmarks_in_proximity_id_in_front = zeros(size(landmarks,1),1); */
    /*     landmarks_in_proximity_id_in_rear  = zeros(size(landmarks,1),1);  */
    /*     landmarks_in_proximity_id_in_rear_lcs  = landmarks_in_proximity_id_in_front; */
    /*     landmarks_in_proximity_id_in_front_lcs = landmarks_in_proximity_id_in_rear; */
    /*      */
    /*     maneuvers = patac_navi_lcs; */
    /*     global_landmarks = landmarks; */
    /*     odo_state_v = odo_motion_v; */
    /*     object_list_update = object_list_update_lcs; */
    /*     CIPO_id = CIPO_id_lcs;%zeros(10,1); */
    /*     CIPO_next_id = CIPO_id_next_lcs;%zeros(10,1); */
    /*     ego_location = -1; % due to invalid data from rtk ego locatoin cannot be determined. */
    /*     */
    /*     x_last = 0; */
    /*     y_last = 0; */
    /*     v_last = [0;0]; */
    /*     delta_t = 0; */
    /*     veh_ori_pos = [veh_origin_pose.x_in_utm;veh_origin_pose.y_in_utm;veh_origin_pose.a_in_utm;veh_origin_pose.t_in_utm]; */
    /*     step_out = step; */
    /*  */
    /*     innerLaneMark = innerLine_lcs.coordinate; */
    /*     middleLaneMark = middleLine_lcs.coordinate(:,1:2); */
    /*     outerLaneMark = outerLine_lcs.coordinate;     */
    /*     cubic_poly_coef = zeros(1,4); */
    /*     return;     */
    /* end */
    /* after first cycle   */
    /* if( step ==0 )%initialisation */
    /*     if(abs(rtk_gps_lat)<1e-6 ... */
    /*        || abs(rtk_gps_lon)<1e-6 ... */
    /*        || abs(rtk_gps_ts)<1e-6... */
    /*       ) */
    /*         % invalid rtk after first cycle */
    /*         step = 0; */
    /*         state_flag = 1; */
    /*         veh_pose = [0 0 0]';% x, y, yaw in LCS */
    /*         %standing still */
    /*         veh_vel = [0 0]';% V_x, V_y in LCS */
    /*         vehicle_state = [veh_pose; veh_vel]; */
    /*  */
    /*         landmarks_in_proximity_id_in_front = zeros(size(landmarks,1),1); */
    /*         landmarks_in_proximity_id_in_rear  = zeros(size(landmarks,1),1);  */
    /*         maneuvers = patac_navi_lcs; */
    /*         global_landmarks = landmarks; */
    /*         odo_state_v = odo_motion_v; */
    /*         object_list_update = object_list_update_lcs; */
    /*         CIPO_id = zeros(10,1); */
    /*         CIPO_next_id = zeros(10,1); */
    /*         ego_location = -1;% due to invalid data from rtk ego locatoin cannot be determined. */
    /*         innerLaneMark = innerLine_lcs.coordinate; */
    /*         middleLaneMark = middleLine_lcs.coordinate(:,1:2); */
    /*         outerLaneMark = outerLine_lcs.coordinate;     */
    /*         step_out = step; */
    /*         cubic_poly_coef = zeros(1,4); */
    /*  */
    /*             delta_t = 0; */
    /*             x_last = x_in_utm_last; */
    /*             y_last = y_in_utm_last; */
    /*             v_last = veh_vel_last; */
    /*             veh_ori_pos = [veh_origin_pose.x_in_utm;veh_origin_pose.y_in_utm;veh_origin_pose.a_in_utm;veh_origin_pose.t_in_utm]; */
    /*         return; */
    /*     end */
    /* end */
    /*  % valid rtk after first cycle for initialization, initialization most probably in this branch */
    /*     step = step+1; */
    /*     state_flag = 2; */
    /* if(step==1) */
    /*     veh_origin_pose.x_in_utm = x_in_utm;% in Mercator */
    /*     veh_origin_pose.y_in_utm = y_in_utm;% in Mercator */
    /*     veh_origin_pose.a_in_utm = a_in_utm; */
    /*     veh_origin_pose.t_in_utm = t_in_utm; */
    /*  */
    /*     x_in_lcs = 0; */
    /*     y_in_lcs = 0; */
    /*     a_in_lcs = a_in_utm; */
    /*            t_in_lcs = wgs_ts_in_sec - veh_origin_pose.t_in_utm; */
    /*     veh_vel =  [0 0]';%[x_in_lcs-x_in_lcs_last; y_in_lcs-y_in_lcs_last]/(ts_in_lcs - ts_in_lcs_last); */
    /*     veh_pose = [x_in_lcs y_in_lcs a_in_lcs]';% x, y, yaw in LCS */
    /*     vehicle_state = [veh_pose; veh_vel]; */
    /*              delta_t = 0; */
    /*              x_last = x_in_utm_last; */
    /*              y_last = y_in_utm_last; */
    /*              v_last = veh_vel_last; */
    /*              veh_ori_pos = [veh_origin_pose.x_in_utm;veh_origin_pose.y_in_utm;veh_origin_pose.a_in_utm;veh_origin_pose.t_in_utm]; */
    /*  */
    /*     x_in_utm_last = x_in_utm; */
    /*     y_in_utm_last = y_in_utm; */
    /*     a_in_utm_last = a_in_utm; */
    /*     t_in_utm_last = t_in_utm; */
    /*     veh_vel_last = [0 0]';   */
    /*     wgs_ts_last = wgs_ts_in_sec; */
    /*     x_in_utm_last_meas = x_in_utm; */
    /*     y_in_utm_last_meas = y_in_utm; */
    /*  */
    /*  */
    /*     innerLine_lcs.coordinate = innerLine.coordinate - ... */
    /*      [ones(size(innerLine.coordinate,1),1).*veh_origin_pose.x_in_utm,... */
    /*       ones(size(innerLine.coordinate,1),1).*veh_origin_pose.y_in_utm]; */
    /*     middleLine_lcs.coordinate(:,1:2) = middleLine.coordinate(:,1:2) - ... */
    /*      [ones(size(middleLine.coordinate,1),1).*veh_origin_pose.x_in_utm,... */
    /*       ones(size(middleLine.coordinate,1),1).*veh_origin_pose.y_in_utm]; */
    /*     outerLine_lcs.coordinate = outerLine.coordinate - ... */
    /*      [ones(size(outerLine.coordinate,1),1).*veh_origin_pose.x_in_utm,... */
    /*       ones(size(outerLine.coordinate,1),1).*veh_origin_pose.y_in_utm]; */
    /*  */
    /*     %relocate landmarks in LCS, origin is the starting point. */
    /*     landmarks_lcs(:,1) = landmarks(:,1) - veh_origin_pose.x_in_utm;% landmarks in LCS! */
    /*     landmarks_lcs(:,2) = landmarks(:,2) - veh_origin_pose.y_in_utm;% landmarks in LCS! */
    /*     landmarks_lcs(:,3) = landmarks(:,3) - veh_origin_pose.x_in_utm;% landmarks in LCS! */
    /*     landmarks_lcs(:,4) = landmarks(:,4) - veh_origin_pose.y_in_utm;% landmarks in LCS! */
    /*  */
    /*     %relocate navigation maneuver list in LCS, origin is the starting point. */
    /*     patac_navi_lcs(:,1) = patac_navi(:,1) - veh_origin_pose.x_in_utm;%navigation maneuver in LCS! */
    /*     patac_navi_lcs(:,2) = patac_navi(:,2) - veh_origin_pose.y_in_utm;%navigation maneuver in LCS! */
    /*  */
    /*          landmarks_in_proximity_id_in_front = zeros(size(landmarks,1),1); */
    /*          landmarks_in_proximity_id_in_rear  = zeros(size(landmarks,1),1);  */
    /*          object_list_update = object_list; */
    /*          ego_location = -1; % due to invalid data from rtk ego locatoin cannot be determined. */
    /*   */
    /*          maneuvers = patac_navi; */
    /*           global_landmarks = landmarks_lcs; */
    /*          odo_state_v = odo_motion_v; */
    /*          step_out = step; */
    /*          delta_t = 0; */
    /*          innerLaneMark = innerLine_lcs.coordinate; */
    /*          middleLaneMark = middleLine_lcs.coordinate; */
    /*          outerLaneMark = outerLine_lcs.coordinate;     */
    /*          x_last = x_in_utm_last; */
    /*          y_last = y_in_utm_last; */
    /*          v_last = veh_vel_last; */
    /*          veh_ori_pos = [veh_origin_pose.x_in_utm;veh_origin_pose.y_in_utm;veh_origin_pose.a_in_utm;veh_origin_pose.t_in_utm]; */
    /*     draw_map_nav_ground(innerLine_lcs.coordinate,innerLine_lcs.Vertex_index,... */
    /*                       middleLine_lcs.coordinate(:,1:2),middleLine_lcs.Vertex_index,... */
    /*                       outerLine_lcs.coordinate,outerLine_lcs.Vertex_index,... */
    /*                       landmarks_lcs, vehicle_state, patac_navi_lcs, configuration);         */
    /*  */
    /* end */
    /*  after initialization */
    /*  */
    /* state_flag = 3; */
    /*  */
    /* if(abs(rtk_gps_lat)<1e-6 ... */
    /*    || abs(rtk_gps_lon)<1e-6 ... */
    /*    || abs(rtk_gps_ts)<1e-6... */
    /*    )%if invalid rtk data after initialization halfways due to rtk signal loss */
    /*              t_in_lcs = (t_in_utm_last +0.01)-veh_origin_pose.t_in_utm; */
    /*     x_in_lcs = (x_in_utm_last+veh_vel_last(1)*0.01)-veh_origin_pose.x_in_utm; */
    /*     y_in_lcs = (y_in_utm_last+veh_vel_last(2)*0.01)-veh_origin_pose.y_in_utm; */
    /*     a_in_lcs = a_in_utm_last; */
    /*     veh_vel = veh_vel_last;  */
    /*  */
    /*     x_in_utm_last = x_in_utm_last+veh_vel_last(1)*0.01; */
    /*     y_in_utm_last = y_in_utm_last+veh_vel_last(2)*0.01; */
    /*    a_in_utm_last = a_in_utm_last; */
    /*     t_in_utm_last = t_in_utm+0.01; */
    /*     veh_vel_last = veh_vel; */
    /*     wgs_ts_last = wgs_ts_in_sec; */
    /*          x_in_utm_last_meas = x_in_utm; */
    /*          y_in_utm_last_meas = y_in_utm;             */
    /* else */
    /*     if(abs(wgs_ts_in_sec - wgs_ts_last)<1e-6) */
    /*          t_in_lcs = (t_in_utm_last +0.01)-veh_origin_pose.t_in_utm; */
    /*         x_in_lcs = (x_in_utm_last+veh_vel_last(1)*0.01)-veh_origin_pose.x_in_utm; */
    /*         y_in_lcs = (y_in_utm_last+veh_vel_last(2)*0.01)-veh_origin_pose.y_in_utm; */
    /*         a_in_lcs = a_in_utm_last; */
    /*         veh_vel = veh_vel_last;  */
    /*         x_in_utm_last = x_in_utm_last+veh_vel_last(1)*0.01; */
    /*         y_in_utm_last = y_in_utm_last+veh_vel_last(2)*0.01; */
    /*                a_in_utm_last = a_in_utm_last; */
    /*         t_in_utm_last = t_in_utm+0.01; */
    /*                veh_vel_last = veh_vel; */
    /*                wgs_ts_last = wgs_ts_in_sec; */
    /*                x_in_utm_last_meas = x_in_utm; */
    /*                y_in_utm_last_meas = y_in_utm; */
    /*     else */
    /*                t_in_lcs = t_in_utm - veh_origin_pose.t_in_utm; */
    /*         x_in_lcs = x_in_utm-veh_origin_pose.x_in_utm; */
    /*         y_in_lcs = y_in_utm-veh_origin_pose.y_in_utm; */
    /*         a_in_lcs = a_in_utm; %a_in_utm - veh_origin_pose.a_in_utm; */
    /*                  veh_vel = [(x_in_utm-x_in_utm_last)/0.01; (y_in_utm-y_in_utm_last)/0.01];%(ts_in_lcs - ts_in_lcs_last); */
    /*         veh_vel = [(x_in_utm-x_in_utm_last); (y_in_utm-y_in_utm_last)]/(t_in_utm - t_in_utm_last); */
    /*                  veh_vel = [0;0]; */
    /*                  veh_vel(1) = (x_in_utm-x_in_utm_last_meas)*20;%(x_in_lcs-x_in_lcs_last)*100; */
    /*                  veh_vel(2) = (y_in_utm-y_in_utm_last_meas)*20;%(y_in_lcs-y_in_lcs_last)*100;%(ts_in_lcs - ts_in_lcs_last); */
    /*  */
    /*         x_in_utm_last_meas = x_in_utm; */
    /*         y_in_utm_last_meas = y_in_utm; */
    /*  */
    /*         x_in_utm_last = x_in_utm; */
    /*         y_in_utm_last = y_in_utm; */
    /*         a_in_utm_last = a_in_utm; */
    /*         t_in_utm_last = t_in_utm; */
    /*         veh_vel_last = veh_vel; */
    /*         wgs_ts_last = wgs_ts_in_sec;                */
    /*     end */
    /* end */
    /*  */
    /* delta_t = (t_in_utm - t_in_utm_last); */
    /* x_last = x_in_utm_last; */
    /* y_last = y_in_utm_last; */
    /* v_last = veh_vel_last; */
    /* veh_ori_pos = [veh_origin_pose.x_in_utm;veh_origin_pose.y_in_utm;veh_origin_pose.a_in_utm;veh_origin_pose.t_in_utm]; */
    /*  */
    /* veh_pose = [x_in_lcs y_in_lcs a_in_lcs]';% x, y, yaw in LCS */
    /* vehicle_state = [veh_pose; veh_vel]; */
    /* } */
    /*  if(mod(step,2)==1) */
    /* Relocate object list in LCS */
    /* SCS --> VCS offset  */
    /* vehicle length 5.24m */
    /* vehicle width 1.8m */
    /* VCS --> CCS (Control Coordinate System) offset  */
    /*  x_offset = x_scs_offset+x_ccs_offset; */
    /*  y_offset = y_scs_offset+y_ccs_offset; */
    i = 0;
    ii = 1;
    exitg1 = false;
    while ((!exitg1) && (ii < 128)) {
      guard1 = false;
      if (object_list[ii - 1] != 0.0) {
        i++;
        if (i >= 127) {
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

    if (1 > i) {
      i = 0;
    }

    memcpy(&object_list_lcs[0], &object_list[0], 3302U * sizeof(double));
    if (1 > i) {
      ii = 0;
      loop_ub = -1;
    } else {
      ii = i;
      loop_ub = i - 1;
    }

    object_loc_size[0] = 2;
    object_loc_size[1] = ii;
    for (i0 = 0; i0 < ii; i0++) {
      object_loc_data[i0 << 1] = object_list[127 + i0];
    }

    for (i0 = 0; i0 <= loop_ub; i0++) {
      object_loc_data[1 + (i0 << 1)] = object_list[381 + i0];
    }

    for (i0 = 0; i0 < ii; i0++) {
      b_object_loc_data[i0] = object_loc_data[i0 << 1] + 2.62;
    }

    for (i0 = 0; i0 < ii; i0++) {
      object_loc_data[i0 << 1] = b_object_loc_data[i0];
    }

    b_x_in_lcs[0] = x_in_lcs;
    b_x_in_lcs[1] = y_in_lcs;
    b_x_in_lcs[2] = a_in_lcs;
    tpcomp(b_x_in_lcs, object_loc_data, object_loc_size, Pa_data, Pa_size);
    ii = Pa_size[1] - 1;
    for (i0 = 0; i0 <= ii; i0++) {
      object_list_lcs[127 + i0] = Pa_data[Pa_size[0] * i0];
    }

    /* object_list(:,2)+ x_scs_offset + x_in_lcs;%RangeX in LCS, displacement of VCS to SCS by 2.6m, half of vehicle length */
    ii = Pa_size[1] - 1;
    for (i0 = 0; i0 <= ii; i0++) {
      object_list_lcs[381 + i0] = Pa_data[1 + Pa_size[0] * i0];
    }

    /* object_list(:,4)+ y_scs_offset + y_in_lcs;%RangeY in LCS */
    if (1 > i) {
      ii = 0;
      loop_ub = 0;
    } else {
      ii = i;
      loop_ub = i;
    }

    for (i0 = 0; i0 < ii; i0++) {
      reshapes[0].f1.data[i0] = object_list[254 + i0];
    }

    for (i0 = 0; i0 < loop_ub; i0++) {
      reshapes[1].f1.data[i0] = object_list[508 + i0];
    }

    dv4[0] = veh_vel_last[0];
    dv4[1] = veh_vel_last[1];
    dv4[2] = a_in_lcs;
    reshapes_size[0] = 2;
    reshapes_size[1] = ii;
    for (i0 = 0; i0 < ii; i0++) {
      Pa_data[i0 << 1] = reshapes[0].f1.data[i0];
    }

    for (i0 = 0; i0 < loop_ub; i0++) {
      Pa_data[1 + (i0 << 1)] = reshapes[1].f1.data[i0];
    }

    tpcomp(dv4, Pa_data, reshapes_size, object_loc_data, object_loc_size);
    ii = object_loc_size[1] - 1;
    for (i0 = 0; i0 <= ii; i0++) {
      object_list_lcs[254 + i0] = object_loc_data[object_loc_size[0] * i0];
    }

    /* object_list(:,3)+ veh_vel(1);%VelX */
    ii = object_loc_size[1] - 1;
    for (i0 = 0; i0 <= ii; i0++) {
      object_list_lcs[508 + i0] = object_loc_data[1 + object_loc_size[0] * i0];
    }

    /* object_list(:,5)+ veh_vel(2);%VelY     */ 
    /*     raw_loc = [sensor_data_raw(:,2),sensor_data_raw(:,3)]'; */
    /*     Tab = [ x_scs_offset + x_in_lcs; y_scs_offset + y_in_lcs; a_in_lcs]; */
    /*     Pa = tpcomp(Tab, raw_loc); */
    /*     sensor_data_raw_lcs = sensor_data_raw; */
    /*     sensor_data_raw_lcs(:,2)=Pa(1,:)';%object_list(:,2)+ x_scs_offset + x_in_lcs;%RangeX in LCS, displacement of VCS to SCS by 2.6m, half of vehicle length */
    /*     sensor_data_raw_lcs(:,3)=Pa(2,:)';%object_list(:,4)+ y_scs_offset + y_in_lcs;%RangeY in LCS */
    /* find local landmarks */
    /* 0 for counter-clockwise?1 for clockwise     */
    quest_map4landmark_new_lane(x_in_lcs, y_in_lcs, landmarks_lcs, *(double (*)
      [3402])&middleLine_lcs.coordinate[0], middleLine_lcs.Vertex_index,
      c_landmarks_in_proximity_id_in_, d_landmarks_in_proximity_id_in_);
	
   /* printf("  c_landmarks_in_proximity_id_in_[0]=%lf, \
		c_landmarks_in_proximity_id_in_[1]=%lf\n \
		d_landmarks_in_proximity_id_in_[0]=%lf, \
		d_landmarks_in_proximity_id_in_[1]=%lf\n", \
		c_landmarks_in_proximity_id_in_[0], \ 
		c_landmarks_in_proximity_id_in_[1], \ 
		d_landmarks_in_proximity_id_in_[0], \ 
		d_landmarks_in_proximity_id_in_[1]);*/

    /*      landmarks_in_proximity_id_in_front = landmarks_in_proximity_id_in_front_lcs; */
    /*      landmarks_in_proximity_id_in_rear = landmarks_in_proximity_id_in_rear_lcs; */
    /*      sensor_data_raw(:,2)=sensor_data_raw(:,2)+ x0_offset + veh_origin_pose.x;%RangeX, displacement of VCS to SCS by 2.6m, half of vehicle length */
    /*      sensor_data_raw(:,3)=sensor_data_raw(:,3)+ y0_offset + veh_origin_pose.y;%RangeY */
    /*     [veh_pose, veh_vel] = slam_ekf_patac (inner, middle, outer, landmarks, ... */
    /*          odo_motion_x, odo_motion_y, odo_motion_yaw, ... */
    /*          rtk_gps_lat, rtk_gps_lon, rtk_gps_yaw, rtk_gps_ts, ... */
    /*          sensor_data_raw,... */
    /*          proximity); */
    /*  end */
    /*   */
    /*  if(mod(step,2)==0) */
    /* locate objects in lanes     */
    /* decide object list location in lanes */
    /* 0 for counter-clockwise?1 for clockwise */
    object_localization(object_list_lcs, i, innerLine_lcs.coordinate,
                        innerLine_lcs.Vertex_index, *(double (*)[3402])&
                        middleLine_lcs.coordinate[0],
                        middleLine_lcs.Vertex_index, outerLine_lcs.coordinate,
                        outerLine_lcs.Vertex_index, lane_offset,
                        object_list_update);

    /*  end */
    /*   */
    /*  if(mod(step,2)==1) */
    /* find the closest object in ego lane (probably CIPO) */
    /* 0 for counter-clockwise?1 for clockwise     */
    objects_of_interest_fast(object_list_update, i, x_in_lcs, y_in_lcs,
      innerLine_lcs.coordinate, innerLine_lcs.Vertex_index, *(double (*)[3402])&
      middleLine_lcs.coordinate[0], middleLine_lcs.Vertex_index,
      outerLine_lcs.coordinate, outerLine_lcs.Vertex_index, &wgs_lon, &unusedU0,
      ego_location);
    memset(&CIPO_id[0], 0, 10U * sizeof(double));
    memset(&CIPO_next_id[0], 0, 10U * sizeof(double));
    CIPO_id[0] = wgs_lon;
    CIPO_next_id[0] = unusedU0;

    /* counter-clockwise right shift 2m for outer lane; left shift for inner lane. */
    lanefit(vehicle_state, middleLine_lcs.coordinate,
            middleLine_lcs.Vertex_index, outerLine_lcs.coordinate,
            outerLine_lcs.Vertex_index, *ego_location, cubic_poly_coef);

    /*  end */
    /*  draw_observations_nav_ground(innerLine_lcs.coordinate, innerLine_lcs.Vertex_index,... */
    /*                                  middleLine_lcs.coordinate(:,1:2), middleLine_lcs.Vertex_index,... */
    /*                                  outerLine_lcs.coordinate, outerLine_lcs.Vertex_index,... */
    /*                                  landmarks_lcs, landmarks_in_proximity_id_in_front_lcs, ... */
    /*                                  landmarks_in_proximity_id_in_rear_lcs, vehicle_state, object_list_lcs, ... */
    /*                                  obj_closest_in_path_ID, sensor_data_raw_lcs, ... */
    /*                                  patac_navi_lcs,configuration); */
    memcpy(&maneuvers[0], &patac_navi_lcs[0], 24U * sizeof(double));
    *odo_state_v = odo_motion_v;
    memcpy(&global_landmarks[0], &landmarks_lcs[0], 594U * sizeof(double));
    memcpy(&innerLaneMark[0], &innerLine_lcs.coordinate[0], 3562U * sizeof
           (double));
    for (i0 = 0; i0 < 2; i0++) {
      memcpy(&middleLaneMark[i0 * 1701], &middleLine_lcs.coordinate[i0 * 1701],
             1701U * sizeof(double));
    }

    memcpy(&outerLaneMark[0], &outerLine_lcs.coordinate[0], 3682U * sizeof
           (double));
    *step_out = step;
  }
  
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void step_not_empty_init(void)
{
  step_not_empty = false;
}

/*
 * File trailer for slam_ekf_patac_map_pose_output.c
 *
 * [EOF]
 */
