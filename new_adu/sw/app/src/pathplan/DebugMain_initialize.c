/*
 * File: DebugMain_initialize.c
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 17-Oct-2017 11:00:48
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "DebugMain.h"
#include "DebugMain_initialize.h"
#include "PathCreatorLC.h"
#include "OpTrigJudgeLC.h"
#include "LaneChangePathPlanningModule.h"
#include "ElementaryPosCalInterSection.h"
#include "PathCreatorInterSection.h"
#include "CordTransferInterSection.h"
#include "TransPathPlan.h"
#include "OpTrigJudgeTurn.h"
#include "InterSectionPathPlanningModule.h"
#include "CordTransfer.h"
#include "UpdateSideObjRes.h"
#include "OpSchedule.h"
#include "ObjSelectDebugVersion.h"
#include "InPutMonitorAndFuncEnb.h"
#include "OperAndObjSelector.h"
#include "DisEngStateMang.h"
#include "TurnLightTrigLane_NumInfo.h"
#include "XinExtractFunc.h"
#include "PosUpdateLC.h"
#include "LaneChgExitJudge.h"
#include "CordConvertLC.h"
#include "DebugMain_data.h"

/* Named Constants */
#define b_GTimeLimit                   (0.0)
#define b_Delta                        (0.0)
#define b_k_localmax                   (0.0)
#define b_Arclength                    (0.0)
#define b_X_Ld                         (0.0)
#define b_ArcCrossFr                   (0.0)
#define b_ArcCrossRl                   (0.0)
#define b_Y_CrossFr                    (0.0)
#define b_Y_CrossRl                    (0.0)
#define b_V_me                         (0.0)
#define b_aylimit                      (0.0)
#define b_axlimit                      (0.0)
#define b_ratio                        (0.0)
#define b_L_me                         (0.0)
#define b_W_me                         (0.0)
#define b_CorLength                    (0.0)
#define b_Y_Ld                         (0.0)
#define b_V_Ld                         (0.0)
#define b_L_Ld                         (0.0)
#define b_W_Ld                         (0.0)
#define b_X_Fd                         (0.0)
#define b_Y_Fd                         (0.0)
#define b_V_Fd                         (0.0)
#define b_L_Fd                         (0.0)
#define b_W_Fd                         (0.0)
#define b_Y_tar                        (0.0)
#define b_Nlimit                       (100.0)
#define b_Nlimit2                      (0.0)
#define b_angle_out                    (0.0)
#define b_x_out                        (0.0)
#define b_y_out                        (0.0)
#define b_x_in                         (0.0)
#define b_y_in                         (0.0)
#define b_angle_in                     (0.0)
#define b_x_qitemp                     (0.0)
#define b_y_qitemp                     (0.0)
#define b_theta_qitemp                 (0.0)
#define b_Aylimit                      (0.0)
#define b_k_maxlimit                   (0.0)
#define b_Axlimit                      (0.0)
#define b_T_adj                        (0.0)
#define b_X_melimit                    (0.0)
#define b_H                            (0.0)
#define b_T_lat                        (0.0)
#define b_X_me                         (0.0)
#define b_Y_me                         (0.0)

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void DebugMain_initialize(void)
{
  int i;
  rt_InitInfAndNaN(8U);
  Time_not_empty_init();
  PLCTransEn_not_empty_init();
  LCStart_not_empty_init();
  PInLaneLCTrans_not_empty_init();
  PointCalEn_not_empty_init();
  b_PrePointCalEn_not_empty_init();
  Y_me = b_Y_me;
  X_me = b_X_me;
  T_lat = b_T_lat;
  H = b_H;
  X_melimit = b_X_melimit;
  T_adj = b_T_adj;
  for (i = 0; i < 4; i++) {
    Y[i] = 0.0;
    W_veh[i] = 0.0;
    L_veh[i] = 0.0;
    Y_cal[i] = 0.0;
  }

  Axlimit = b_Axlimit;
  k_maxlimit = b_k_maxlimit;
  Aylimit = b_Aylimit;
  for (i = 0; i < 2; i++) {
    ArclengthTol[i] = 0.0;
    DeltaTemp[i] = 0.0;
  }

  theta_qitemp = b_theta_qitemp;
  y_qitemp = b_y_qitemp;
  x_qitemp = b_x_qitemp;
  angle_in = b_angle_in;
  y_in = b_y_in;
  x_in = b_x_in;
  y_out = b_y_out;
  x_out = b_x_out;
  angle_out = b_angle_out;
  Px1_not_empty_init();
  FinishFlg_not_empty_init();
  TrigCnt_not_empty_init();
  for (i = 0; i < 2; i++) {
    k_localmaxTemp[i] = 0.0;
  }

  for (i = 0; i < 4; i++) {
    X[i] = 0.0;
    V[i] = 0.0;
  }

  Nlimit2 = b_Nlimit2;
  Nlimit = b_Nlimit;
  TrigEventEdge_not_empty_init();
  PrePointCalEn_not_empty_init();
  Y_tar = b_Y_tar;
  W_Fd = b_W_Fd;
  L_Fd = b_L_Fd;
  V_Fd = b_V_Fd;
  Y_Fd = b_Y_Fd;
  X_Fd = b_X_Fd;
  W_Ld = b_W_Ld;
  L_Ld = b_L_Ld;
  V_Ld = b_V_Ld;
  Y_Ld = b_Y_Ld;
  CorLength = b_CorLength;
  memset(&quadsinu2tbl[0], 0, 356U * sizeof(double));
  memset(&quadcosu2tbl[0], 0, 356U * sizeof(double));
  W_me = b_W_me;
  L_me = b_L_me;
  ratio = b_ratio;
  Pxoptres_not_empty_init();
  axlimit = b_axlimit;
  aylimit = b_aylimit;
  V_me = b_V_me;
  Y_CrossRl = b_Y_CrossRl;
  Y_CrossFr = b_Y_CrossFr;
  ArcCrossRl = b_ArcCrossRl;
  ArcCrossFr = b_ArcCrossFr;
  X_Ld = b_X_Ld;
  Arclength = b_Arclength;
  k_localmax = b_k_localmax;
  Delta = b_Delta;
  GTimeLimit = b_GTimeLimit;
  PTurnTrigFlg_not_empty_init();
  TargetLaneNum_not_empty_init();
  DebugMain_init();
  DisEngStateMang_init();
  OperAndObjSelector_init();
  InPutMonitorAndFuncEnb_init();
  ObjSelectDebugVersion_init();
  OpSchedule_init();
  UpdateSideObjRes_init();
  CordTransfer_init();
  c_InterSectionPathPlanningModul();
  OpTrigJudgeTurn_init();
  TransPathPlan_init();
  CordTransferInterSection_init();
  PreGlbVal_init();
  c_CordTransferBackInterSection_();
  c_LaneChangePathPlanningModule_();
  OpTrigJudgeLC_init();
  SQPCal_init();
  b_PreGlbVal_init();
}

/*
 * File trailer for DebugMain_initialize.c
 *
 * [EOF]
 */
