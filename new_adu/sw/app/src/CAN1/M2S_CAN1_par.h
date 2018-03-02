#ifndef _M2S_CAN1_PAR_H
#define _M2S_CAN1_PAR_H

#include "resue.h"

typedef struct F_Master_Time_Sync_LRTag
{
  vbittype FTimeSyncMstrClock_0 : 8;
  vbittype FTimeSyncMstrClock_1 : 8;
  vbittype FTimeSyncMstrClock_2 : 8;
  vbittype FTimeSyncMstrClock_3 : 8;
  vbittype FTimeSyncMstrChksm_0 : 4;
  vbittype FTimeSyncMstrClockV : 1;
  vbittype SensorModeCmdLRR : 3;
  vbittype FTimeSyncMstrChksm_1 : 8;
  vbittype SensorModeCmdSRR : 3;
  vbittype SensorModeCmdFCamera : 3;
  vbittype unused0 : 2;
} F_Master_Time_Sync_LR;
typedef struct F_Vehicle_Path_Estimate_LRTag
{
  vbittype Vpath_CurvatureV : 1;
  vbittype Vpath_TrnCtrLngOfstV : 1;
  vbittype unused0 : 4;
  vbittype Vpath_RollingCount : 2;
  vbittype Vpath_TrnCtrLngOfst : 8;
  vbittype Vpath_TrnCtrLatOfst_0 : 6;
  vbittype unused1 : 2;
  vbittype Vpath_TrnCtrLatOfst_1 : 8;
  vbittype Vpath_Curvature_0 : 8;
  vbittype Vpath_Curvature_1 : 8;
  vbittype Vpath_Checksum_0 : 3;
  vbittype unused2 : 5;
  vbittype Vpath_Checksum_1 : 8;
} F_Vehicle_Path_Estimate_LR;
typedef struct F_Vehicle_Path_Data_2_LRTag
{
  vbittype unused0 : 1;
  vbittype Vpath_Data2LongVelV : 1;
  vbittype Vpath_Data2YawRateV : 1;
  vbittype Vpath_Data2TravlDirctn : 2;
  vbittype unused1 : 3;
  vbittype Vpath_Data2LongVel_0 : 8;
  vbittype Vpath_Data2YawRate_0 : 4;
  vbittype Vpath_Data2LongVel_1 : 4;
  vbittype Vpath_Data2YawRate_1 : 8;
  vbittype Vpath_Data2LatVel : 8;
  vbittype Vpath2_Checksum_0 : 3;
  vbittype Vpath_Data2ModeInfo : 2;
  vbittype Vpath_Data2RollCnt : 2;
  vbittype Vpath_Data2LatVelV : 1;
  vbittype Vpath2_Checksum_1 : 8;
} F_Vehicle_Path_Data_2_LR;
typedef struct Body_Info_FOB_LRTag
{
  vbittype HighBmAct : 1;
  vbittype LowBmAct : 1;
  vbittype WSWprAct : 1;
  vbittype LftLwBmFld : 1;
  vbittype RtLwBmFld : 1;
  vbittype OtsdAmbtLtLvlStatV : 1;
  vbittype OtsdAmbtLtLvlStat : 2;
  vbittype SysPwrMdV : 1;
  vbittype SysPwrMd : 2;
  vbittype WSWshSwAtv : 1;
  vbittype TrStLgMdAtv : 1;
  vbittype DrvrHndsOnWhlZn3 : 1;
  vbittype DrvrHndsOnWhlZn2 : 1;
  vbittype DrvrHndsOnWhlZn1 : 1;
  vbittype DrDoorOpenSwActV : 1;
  vbittype DrDoorOpenSwAct : 1;
  vbittype StrgColCommsFlt : 2;
  vbittype DrvWndPosStat : 3;
  vbittype InterLghtStat : 1;
  vbittype StrgColInOutPos : 8;
  vbittype StrgColUpDwnPos : 8;
  vbittype unused0 : 7;
  vbittype CPMAPINFO4 : 1;
} Body_Info_FOB_LR;
typedef struct R_SRR_Object_Header_LRTag
{
  vbittype RSrrRollingCnt : 2;
  vbittype RSRRModeCmdFdbk : 3;
  vbittype unused0 : 3;
  vbittype RSrrTimeStamp_0 : 3;
  vbittype RSRRNumValidTargets : 4;
  vbittype RSrrTimeStampV : 1;
  vbittype RSrrTimeStamp_1 : 8;
  vbittype RSRRSnstvFltPrsntInt : 1;
  vbittype RSRRHWFltPrsntInt : 1;
  vbittype RSRRAntTngFltPrsnt : 1;
  vbittype RSRRCANIDAddrsUnsbl : 1;
  vbittype RSRRCANRxErr : 1;
  vbittype RSRRCANSgnlSpvFld : 1;
  vbittype RSRRDiagSpare : 1;
  vbittype unused1 : 1;
  vbittype RSRRMsalgnPtchUp : 1;
  vbittype RSRRMsalgnPtchDn : 1;
  vbittype RSRRMsalgnRllLt : 1;
  vbittype RSRRMsalgnRllRt : 1;
  vbittype RSRRExtIntrfrnc : 1;
  vbittype RSRRPlntAlgnInProc : 1;
  vbittype RSRRSvcAlgnInPrcs : 1;
  vbittype RSRRAlgnFltPrsnt : 1;
  vbittype RSRRInitDiagCmplt : 1;
  vbittype RSRRAmbTmpOutRngHi : 1;
  vbittype RSRRAmbTmpOutRngLw : 1;
  vbittype RSRRVltgOutRngHi : 1;
  vbittype RSRRVltgOutRngLo : 1;
  vbittype RSRRSnsrBlckd : 1;
  vbittype RSRRMsalgnYawLt : 1;
  vbittype RSRRMsalgnYawRt : 1;
  vbittype RSrrBurstChecksum_0 : 8;
  vbittype RSrrBurstChecksum_1 : 8;
} R_SRR_Object_Header_LR;
typedef struct R_SRR_Object_Track1_LRTag
{
  vbittype RSrrTrkRange1_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange1_1 : 8;
  vbittype RSrrTrkRRate1_0 : 3;
  vbittype RSrrTrkObjElevation1 : 2;
  vbittype RSrrTrkDynamProp1 : 3;
  vbittype RSrrTrkRRate1_1 : 8;
  vbittype RSrrTrkAzimuth1_0 : 3;
  vbittype RSrrTrkObjID1 : 5;
  vbittype RSrrTrkAzimuth1_1 : 8;
  vbittype RSrrTrkObsRange1 : 6;
  vbittype RSrrTrkMeasStatus1 : 2;
  vbittype RSrrTrkRawAzimuth1 : 6;
  vbittype RSrrBurstID1 : 2;
} R_SRR_Object_Track1_LR;
typedef struct R_SRR_Object_Track2_LRTag
{
  vbittype RSrrTrkRange2_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange2_1 : 8;
  vbittype RSrrTrkRRate2_0 : 3;
  vbittype RSrrTrkObjElevation2 : 2;
  vbittype RSrrTrkDynamProp2 : 3;
  vbittype RSrrTrkRRate2_1 : 8;
  vbittype RSrrTrkAzimuth2_0 : 3;
  vbittype RSrrTrkObjID2 : 5;
  vbittype RSrrTrkAzimuth2_1 : 8;
  vbittype RSrrTrkObsRange2 : 6;
  vbittype RSrrTrkMeasStatus2 : 2;
  vbittype RSrrTrkRawAzimuth2 : 6;
  vbittype RSrrBurstID2 : 2;
} R_SRR_Object_Track2_LR;
typedef struct R_SRR_Object_Track3_LRTag
{
  vbittype RSrrTrkRange3_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange3_1 : 8;
  vbittype RSrrTrkRRate3_0 : 3;
  vbittype RSrrTrkObjElevation3 : 2;
  vbittype RSrrTrkDynamProp3 : 3;
  vbittype RSrrTrkRRate3_1 : 8;
  vbittype RSrrTrkAzimuth3_0 : 3;
  vbittype RSrrTrkObjID3 : 5;
  vbittype RSrrTrkAzimuth3_1 : 8;
  vbittype RSrrTrkObsRange3 : 6;
  vbittype RSrrTrkMeasStatus3 : 2;
  vbittype RSrrTrkRawAzimuth3 : 6;
  vbittype RSrrBurstID3 : 2;
} R_SRR_Object_Track3_LR;
typedef struct R_SRR_Object_Track4_LRTag
{
  vbittype RSrrTrkRange4_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange4_1 : 8;
  vbittype RSrrTrkRRate4_0 : 3;
  vbittype RSrrTrkObjElevation4 : 2;
  vbittype RSrrTrkDynamProp4 : 3;
  vbittype RSrrTrkRRate4_1 : 8;
  vbittype RSrrTrkAzimuth4_0 : 3;
  vbittype RSrrTrkObjID4 : 5;
  vbittype RSrrTrkAzimuth4_1 : 8;
  vbittype RSrrTrkObsRange4 : 6;
  vbittype RSrrTrkMeasStatus4 : 2;
  vbittype RSrrTrkRawAzimuth4 : 6;
  vbittype RSrrBurstID4 : 2;
} R_SRR_Object_Track4_LR;
typedef struct R_SRR_Object_Track5_LRTag
{
  vbittype RSrrTrkRange5_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange5_1 : 8;
  vbittype RSrrTrkRRate5_0 : 3;
  vbittype RSrrTrkObjElevation5 : 2;
  vbittype RSrrTrkDynamProp5 : 3;
  vbittype RSrrTrkRRate5_1 : 8;
  vbittype RSrrTrkAzimuth5_0 : 3;
  vbittype RSrrTrkObjID5 : 5;
  vbittype RSrrTrkAzimuth5_1 : 8;
  vbittype RSrrTrkObsRange5 : 6;
  vbittype RSrrTrkMeasStatus5 : 2;
  vbittype RSrrTrkRawAzimuth5 : 6;
  vbittype RSrrBurstID5 : 2;
} R_SRR_Object_Track5_LR;
typedef struct R_SRR_Object_Track6_LRTag
{
  vbittype RSrrTrkRange6_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange6_1 : 8;
  vbittype RSrrTrkRRate6_0 : 3;
  vbittype RSrrTrkObjElevation6 : 2;
  vbittype RSrrTrkDynamProp6 : 3;
  vbittype RSrrTrkRRate6_1 : 8;
  vbittype RSrrTrkAzimuth6_0 : 3;
  vbittype RSrrTrkObjID6 : 5;
  vbittype RSrrTrkAzimuth6_1 : 8;
  vbittype RSrrTrkObsRange6 : 6;
  vbittype RSrrTrkMeasStatus6 : 2;
  vbittype RSrrTrkRawAzimuth6 : 6;
  vbittype RSrrBurstID6 : 2;
} R_SRR_Object_Track6_LR;
typedef struct R_SRR_Object_Track7_LRTag
{
  vbittype RSrrTrkRange7_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange7_1 : 8;
  vbittype RSrrTrkRRate7_0 : 3;
  vbittype RSrrTrkObjElevation7 : 2;
  vbittype RSrrTrkDynamProp7 : 3;
  vbittype RSrrTrkRRate7_1 : 8;
  vbittype RSrrTrkAzimuth7_0 : 3;
  vbittype RSrrTrkObjID7 : 5;
  vbittype RSrrTrkAzimuth7_1 : 8;
  vbittype RSrrTrkObsRange7 : 6;
  vbittype RSrrTrkMeasStatus7 : 2;
  vbittype RSrrTrkRawAzimuth7 : 6;
  vbittype RSrrBurstID7 : 2;
} R_SRR_Object_Track7_LR;
typedef struct R_SRR_Object_Track8_LRTag
{
  vbittype RSrrTrkRange8_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange8_1 : 8;
  vbittype RSrrTrkRRate8_0 : 3;
  vbittype RSrrTrkObjElevation8 : 2;
  vbittype RSrrTrkDynamProp8 : 3;
  vbittype RSrrTrkRRate8_1 : 8;
  vbittype RSrrTrkAzimuth8_0 : 3;
  vbittype RSrrTrkObjID8 : 5;
  vbittype RSrrTrkAzimuth8_1 : 8;
  vbittype RSrrTrkObsRange8 : 6;
  vbittype RSrrTrkMeasStatus8 : 2;
  vbittype RSrrTrkRawAzimuth8 : 6;
  vbittype RSrrBurstID8 : 2;
} R_SRR_Object_Track8_LR;
typedef struct R_SRR_Object_Track9_LRTag
{
  vbittype RSrrTrkRange9_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange9_1 : 8;
  vbittype RSrrTrkRRate9_0 : 3;
  vbittype RSrrTrkObjElevation9 : 2;
  vbittype RSrrTrkDynamProp9 : 3;
  vbittype RSrrTrkRRate9_1 : 8;
  vbittype RSrrTrkAzimuth9_0 : 3;
  vbittype RSrrTrkObjID9 : 5;
  vbittype RSrrTrkAzimuth9_1 : 8;
  vbittype RSrrTrkObsRange9 : 6;
  vbittype RSrrTrkMeasStatus9 : 2;
  vbittype RSrrTrkRawAzimuth9 : 6;
  vbittype RSrrBurstID9 : 2;
} R_SRR_Object_Track9_LR;
typedef struct R_SRR_Object_Track10_LRTag
{
  vbittype RSrrTrkRange10_0 : 3;
  vbittype unused0 : 5;
  vbittype RSrrTrkRange10_1 : 8;
  vbittype RSrrTrkRRate10_0 : 3;
  vbittype RSrrTrkObjElevation10 : 2;
  vbittype RSrrTrkDynamProp10 : 3;
  vbittype RSrrTrkRRate10_1 : 8;
  vbittype RSrrTrkAzimuth10_0 : 3;
  vbittype RSrrTrkObjID10 : 5;
  vbittype RSrrTrkAzimuth10_1 : 8;
  vbittype RSrrTrkObsRange10 : 6;
  vbittype RSrrTrkMeasStatus10 : 2;
  vbittype RSrrTrkRawAzimuth10 : 6;
  vbittype RSrrBurstID10 : 2;
} R_SRR_Object_Track10_LR;
typedef struct ESR_Status1Tag
{
  vbittype CAN_TX_DSP_TIMESTAMP_0 : 6;
  vbittype CAN_TX_ROLLING_COUNT_1_flag : 2;
  vbittype CAN_TX_RADIUS_CURVATURE_CALC_0 : 6;
  vbittype CAN_TX_COMM_ERROR : 1;
  vbittype CAN_TX_DSP_TIMESTAMP_1 : 1;
  vbittype CAN_TX_RADIUS_CURVATURE_CALC_1 : 8;
  vbittype CAN_TX_SCAN_INDEX_0 : 8;
  vbittype CAN_TX_SCAN_INDEX_1 : 8;
  vbittype CAN_TX_YAW_RATE_CALC_0 : 8;
  vbittype CAN_TX_VEHICLE_SPEED_CALC_0 : 3;
  vbittype unused0 : 1;
  vbittype CAN_TX_YAW_RATE_CALC_1 : 4;
  vbittype CAN_TX_VEHICLE_SPEED_CALC_1 : 8;
} ESR_Status1;
typedef struct ESR_Status2Tag
{
  vbittype CAN_TX_ROLLING_COUNT_2_flag : 2;
  vbittype CAN_TX_MAXIMUM_TRACKS_ACK : 6;
  vbittype CAN_TX_STEERING_ANGLE_ACK_0 : 3;
  vbittype CAN_TX_RAW_DATA_MODE : 1;
  vbittype CAN_TX_XCVR_OPERATIONAL : 1;
  vbittype CAN_TX_INTERNAL_ERROR : 1;
  vbittype CAN_TX_RANGE_PERF_ERROR : 1;
  vbittype CAN_TX_OVERHEAT_ERROR : 1;
  vbittype CAN_TX_STEERING_ANGLE_ACK_1 : 8;
  vbittype CAN_TX_TEMPERATURE : 8;
  vbittype CAN_TX_GROUPING_MODE : 2;
  vbittype CAN_TX_VEH_SPD_COMP_FACTOR : 6;
  vbittype CAN_TX_YAW_RATE_BIAS : 8;
  vbittype CAN_TX_SW_VERSION_DSP_0 : 8;
  vbittype CAN_TX_SW_VERSION_DSP_1 : 8;
} ESR_Status2;
typedef struct ESR_Status3Tag
{
  vbittype CAN_TX_HW_VERSION : 4;
  vbittype CAN_TX_INTERFACE_VERSION : 4;
  vbittype CAN_TX_SW_VERSION_HOST_0 : 8;
  vbittype CAN_TX_SW_VERSION_HOST_1 : 8;
  vbittype CAN_TX_SW_VERSION_HOST_2 : 8;
  vbittype CAN_TX_SERIAL_NUM_0 : 8;
  vbittype CAN_TX_SERIAL_NUM_1 : 8;
  vbittype CAN_TX_SERIAL_NUM_2 : 8;
  vbittype CAN_TX_SW_VERSION_PLD : 8;
} ESR_Status3;
typedef struct ESR_Status4Tag
{
  vbittype CAN_TX_ROLLING_COUNT_3_flag : 2;
  vbittype CAN_TX_MR_LR_MODE : 2;
  vbittype CAN_TX_PARTIAL_BLOCKAGE : 1;
  vbittype CAN_TX_SIDELOBE_BLOCKAGE : 1;
  vbittype CAN_TX_LR_ONLY_GRATING_LOBE_DET : 1;
  vbittype CAN_TX_TRUCK_TARGET_DET : 1;
  vbittype CAN_TX_PATH_ID_ACC : 8;
  vbittype CAN_TX_PATH_ID_CMBB_MOVE : 8;
  vbittype CAN_TX_PATH_ID_CMBB_STAT : 8;
  vbittype CAN_TX_PATH_ID_FCW_MOVE : 8;
  vbittype CAN_TX_PATH_ID_FCW_STAT : 8;
  vbittype CAN_TX_AUTO_ALIGN_ANGLE : 8;
  vbittype CAN_TX_PATH_ID_ACC_STAT : 8;
} ESR_Status4;
typedef struct Vehicle1Tag
{
  vbittype CAN_RX_VEHICLE_SPEED_0 : 8;
  vbittype CAN_RX_YAW_RATE_0 : 4;
  vbittype CAN_RX_VEHICLE_SPEED_DIRECTION : 1;
  vbittype CAN_RX_VEHICLE_SPEED_1 : 3;
  vbittype CAN_RX_YAW_RATE_1 : 8;
  vbittype CAN_RX_RADIUS_CURVATURE_0 : 6;
  vbittype CAN_RX_STEERING_ANGLE_RATE_SIGN : 1;
  vbittype CAN_RX_YAW_RATE_VALIDITY : 1;
  vbittype CAN_RX_RADIUS_CURVATURE_1 : 8;
  vbittype CAN_RX_STEERING_ANGLE_0 : 6;
  vbittype CAN_RX_STEERING_ANGLE_SIGN : 1;
  vbittype CAN_RX_STEERING_ANGLE_VALIDITY : 1;
  vbittype CAN_RX_STEERING_ANGLE_RATE_0 : 3;
  vbittype CAN_RX_STEERING_ANGLE_1 : 5;
  vbittype CAN_RX_STEERING_ANGLE_RATE_1 : 8;
} Vehicle1;
typedef struct Vehicle2Tag
{
  vbittype CAN_RX_SCAN_INDEX_ACK_0 : 8;
  vbittype CAN_RX_SCAN_INDEX_ACK_1 : 8;
  vbittype CAN_RX_HIGH_YAW_ANGLE : 6;
  vbittype CAN_RX_CLEAR_FAULTS : 1;
  vbittype CAN_RX_USE_ANGLE_MISALIGNMENT : 1;
  vbittype CAN_RX_LR_ONLY_TRANSMIT : 1;
  vbittype CAN_RX_MR_ONLY_TRANSMIT : 1;
  vbittype unused0 : 2;
  vbittype CAN_RX_VOLVO_SHORT_TRACK_ROC : 4;
  vbittype CAN_RX_ANGLE_MISALIGNMENT : 8;
  vbittype CAN_RX_LATERAL_MOUNTING_OFFSET : 8;
  vbittype CAN_RX_MAXIMUM_TRACKS : 6;
  vbittype CAN_RX_BLOCKAGE_DISABLE : 1;
  vbittype CAN_RX_RADAR_CMD_RADIATE : 1;
  vbittype CAN_RX_RAW_DATA_ENABLE : 1;
  vbittype CAN_RX_WIPER_STATUS : 1;
  vbittype CAN_RX_GROUPING_MODE : 2;
  vbittype CAN_RX_MMR_UPSIDE_DOWN : 1;
  vbittype CAN_RX_VEHICLE_SPEED_VALIDITY : 1;
  vbittype CAN_RX_TURN_SIGNAL_STATUS : 2;
} Vehicle2;
typedef struct ESR_Track01Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track01;
typedef struct ESR_Track02Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track02;
typedef struct ESR_Track03Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track03;
typedef struct ESR_Track04Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track04;
typedef struct ESR_Track05Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track05;
typedef struct ESR_Track06Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track06;
typedef struct ESR_Track07Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track07;
typedef struct ESR_Track08Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track08;
typedef struct ESR_Track09Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track09;
typedef struct ESR_Track10Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track10;
typedef struct ESR_Track11Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track11;
typedef struct ESR_Track12Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track12;
typedef struct ESR_Track13Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track13;
typedef struct ESR_Track14Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track14;
typedef struct ESR_Track15Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track15;
typedef struct ESR_Track16Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track16;
typedef struct ESR_Track17Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track17;
typedef struct ESR_Track18Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track18;
typedef struct ESR_Track19Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track19;
typedef struct ESR_Track20Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track20;
typedef struct ESR_Track21Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track21;
typedef struct ESR_Track22Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track22;
typedef struct ESR_Track23Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track23;
typedef struct ESR_Track24Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track24;
typedef struct ESR_Track25Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track25;
typedef struct ESR_Track26Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track26;
typedef struct ESR_Track27Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track27;
typedef struct ESR_Track28Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track28;
typedef struct ESR_Track29Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track29;
typedef struct ESR_Track30Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track30;
typedef struct ESR_Track31Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track31;
typedef struct ESR_Track32Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track32;
typedef struct ESR_Track33Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track33;
typedef struct ESR_Track34Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track34;
typedef struct ESR_Track35Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track35;
typedef struct ESR_Track36Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track36;
typedef struct ESR_Track37Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track37;
typedef struct ESR_Track38Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track38;
typedef struct ESR_Track39Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track39;
typedef struct ESR_Track40Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track40;
typedef struct ESR_Track41Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track41;
typedef struct ESR_Track42Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track42;
typedef struct ESR_Track43Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track43;
typedef struct ESR_Track44Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track44;
typedef struct ESR_Track45Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track45;
typedef struct ESR_Track46Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track46;
typedef struct ESR_Track47Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track47;
typedef struct ESR_Track48Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track48;
typedef struct ESR_Track49Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track49;
typedef struct ESR_Track50Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track50;
typedef struct ESR_Track51Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track51;
typedef struct ESR_Track52Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track52;
typedef struct ESR_Track53Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track53;
typedef struct ESR_Track54Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track54;
typedef struct ESR_Track55Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track55;
typedef struct ESR_Track56Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track56;
typedef struct ESR_Track57Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track57;
typedef struct ESR_Track58Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track58;
typedef struct ESR_Track59Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track59;
typedef struct ESR_Track60Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track60;
typedef struct ESR_Track61Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track61;
typedef struct ESR_Track62Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track62;
typedef struct ESR_Track63Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track63;
typedef struct ESR_Track64Tag
{
  vbittype CAN_TX_TRACK_ONCOMING : 1;
  vbittype CAN_TX_TRACK_GROUPING_CHANGED : 1;
  vbittype CAN_TX_TRACK_LAT_RATE : 6;
  vbittype CAN_TX_TRACK_ANGLE_0 : 5;
  vbittype CAN_TX_TRACK_STATUS : 3;
  vbittype CAN_TX_TRACK_RANGE_0 : 3;
  vbittype CAN_TX_TRACK_ANGLE_1 : 5;
  vbittype CAN_TX_TRACK_RANGE_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_0 : 2;
  vbittype CAN_TX_TRACK_WIDTH : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT : 1;
  vbittype CAN_TX_TRACK_BRIDGE_OBJECT : 1;
  vbittype CAN_TX_TRACK_RANGE_ACCEL_1 : 8;
  vbittype CAN_TX_TRACK_RANGE_RATE_0 : 6;
  vbittype CAN_TX_TRACK_MED_RANGE_MODE : 2;
  vbittype CAN_TX_TRACK_RANGE_RATE_1 : 8;
} ESR_Track64;
typedef struct ESR_TrackMotionPower_m0Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER01_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING01_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW01_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST01_m0 : 1;
  vbittype CAN_TX_TRACK_POWER02_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING02_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW02_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST02_m0 : 1;
  vbittype CAN_TX_TRACK_POWER03_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING03_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW03_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST03_m0 : 1;
  vbittype CAN_TX_TRACK_POWER04_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING04_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW04_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST04_m0 : 1;
  vbittype CAN_TX_TRACK_POWER05_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING05_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW05_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST05_m0 : 1;
  vbittype CAN_TX_TRACK_POWER06_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING06_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW06_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST06_m0 : 1;
  vbittype CAN_TX_TRACK_POWER07_m0 : 5;
  vbittype CAN_TX_TRACK_MOVING07_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW07_m0 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST07_m0 : 1;
} ESR_TrackMotionPower_m0;
typedef struct ESR_TrackMotionPower_m1Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER08_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING08_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW08_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST08_m1 : 1;
  vbittype CAN_TX_TRACK_POWER09_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING09_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW09_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST09_m1 : 1;
  vbittype CAN_TX_TRACK_POWER10_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING10_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW10_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST10_m1 : 1;
  vbittype CAN_TX_TRACK_POWER11_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING11_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW11_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST11_m1 : 1;
  vbittype CAN_TX_TRACK_POWER12_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING12_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW12_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST12_m1 : 1;
  vbittype CAN_TX_TRACK_POWER13_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING13_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW13_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST13_m1 : 1;
  vbittype CAN_TX_TRACK_POWER14_m1 : 5;
  vbittype CAN_TX_TRACK_MOVING14_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW14_m1 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST14_m1 : 1;
} ESR_TrackMotionPower_m1;
typedef struct ESR_TrackMotionPower_m2Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER15_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING15_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW15_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST15_m2 : 1;
  vbittype CAN_TX_TRACK_POWER16_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING16_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW16_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST16_m2 : 1;
  vbittype CAN_TX_TRACK_POWER17_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING17_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW17_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST17_m2 : 1;
  vbittype CAN_TX_TRACK_POWER18_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING18_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW18_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST18_m2 : 1;
  vbittype CAN_TX_TRACK_POWER19_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING19_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW19_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST19_m2 : 1;
  vbittype CAN_TX_TRACK_POWER20_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING20_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW20_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST20_m2 : 1;
  vbittype CAN_TX_TRACK_POWER21_m2 : 5;
  vbittype CAN_TX_TRACK_MOVING21_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW21_m2 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST21_m2 : 1;
} ESR_TrackMotionPower_m2;
typedef struct ESR_TrackMotionPower_m3Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER22_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING22_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW22_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST22_m3 : 1;
  vbittype CAN_TX_TRACK_POWER23_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING23_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW23_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST23_m3 : 1;
  vbittype CAN_TX_TRACK_POWER24_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING24_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW24_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST24_m3 : 1;
  vbittype CAN_TX_TRACK_POWER25_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING25_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW25_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST25_m3 : 1;
  vbittype CAN_TX_TRACK_POWER26_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING26_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW26_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST26_m3 : 1;
  vbittype CAN_TX_TRACK_POWER27_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING27_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW27_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST27_m3 : 1;
  vbittype CAN_TX_TRACK_POWER28_m3 : 5;
  vbittype CAN_TX_TRACK_MOVING28_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW28_m3 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST28_m3 : 1;
} ESR_TrackMotionPower_m3;
typedef struct ESR_TrackMotionPower_m4Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER29_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING29_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW29_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST29_m4 : 1;
  vbittype CAN_TX_TRACK_POWER30_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING30_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW30_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST30_m4 : 1;
  vbittype CAN_TX_TRACK_POWER31_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING31_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW31_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST31_m4 : 1;
  vbittype CAN_TX_TRACK_POWER32_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING32_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW32_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST32_m4 : 1;
  vbittype CAN_TX_TRACK_POWER33_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING33_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW33_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST33_m4 : 1;
  vbittype CAN_TX_TRACK_POWER34_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING34_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW34_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST34_m4 : 1;
  vbittype CAN_TX_TRACK_POWER35_m4 : 5;
  vbittype CAN_TX_TRACK_MOVING35_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW35_m4 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST35_m4 : 1;
} ESR_TrackMotionPower_m4;
typedef struct ESR_TrackMotionPower_m5Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER36_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING36_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW36_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST36_m5 : 1;
  vbittype CAN_TX_TRACK_POWER37_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING37_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW37_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST37_m5 : 1;
  vbittype CAN_TX_TRACK_POWER38_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING38_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW38_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST38_m5 : 1;
  vbittype CAN_TX_TRACK_POWER39_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING39_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW39_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST39_m5 : 1;
  vbittype CAN_TX_TRACK_POWER40_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING40_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW40_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST40_m5 : 1;
  vbittype CAN_TX_TRACK_POWER41_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING41_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW41_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST41_m5 : 1;
  vbittype CAN_TX_TRACK_POWER42_m5 : 5;
  vbittype CAN_TX_TRACK_MOVING42_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW42_m5 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST42_m5 : 1;
} ESR_TrackMotionPower_m5;
typedef struct ESR_TrackMotionPower_m6Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER43_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING43_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW43_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST43_m6 : 1;
  vbittype CAN_TX_TRACK_POWER44_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING44_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW44_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST44_m6 : 1;
  vbittype CAN_TX_TRACK_POWER45_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING45_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW45_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST45_m6 : 1;
  vbittype CAN_TX_TRACK_POWER46_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING46_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW46_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST46_m6 : 1;
  vbittype CAN_TX_TRACK_POWER47_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING47_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW47_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST47_m6 : 1;
  vbittype CAN_TX_TRACK_POWER48_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING48_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW48_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST48_m6 : 1;
  vbittype CAN_TX_TRACK_POWER49_m6 : 5;
  vbittype CAN_TX_TRACK_MOVING49_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW49_m6 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST49_m6 : 1;
} ESR_TrackMotionPower_m6;
typedef struct ESR_TrackMotionPower_m7Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER50_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING50_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW50_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST50_m7 : 1;
  vbittype CAN_TX_TRACK_POWER51_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING51_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW51_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST51_m7 : 1;
  vbittype CAN_TX_TRACK_POWER52_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING52_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW52_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST52_m7 : 1;
  vbittype CAN_TX_TRACK_POWER53_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING53_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW53_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST53_m7 : 1;
  vbittype CAN_TX_TRACK_POWER54_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING54_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW54_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST54_m7 : 1;
  vbittype CAN_TX_TRACK_POWER55_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING55_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW55_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST55_m7 : 1;
  vbittype CAN_TX_TRACK_POWER56_m7 : 5;
  vbittype CAN_TX_TRACK_MOVING56_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW56_m7 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST56_m7 : 1;
} ESR_TrackMotionPower_m7;
typedef struct ESR_TrackMotionPower_m8Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER57_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING57_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW57_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST57_m8 : 1;
  vbittype CAN_TX_TRACK_POWER58_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING58_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW58_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST58_m8 : 1;
  vbittype CAN_TX_TRACK_POWER59_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING59_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW59_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST59_m8 : 1;
  vbittype CAN_TX_TRACK_POWER60_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING60_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW60_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST60_m8 : 1;
  vbittype CAN_TX_TRACK_POWER61_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING61_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW61_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST61_m8 : 1;
  vbittype CAN_TX_TRACK_POWER62_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING62_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW62_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST62_m8 : 1;
  vbittype CAN_TX_TRACK_POWER63_m8 : 5;
  vbittype CAN_TX_TRACK_MOVING63_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW63_m8 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST63_m8 : 1;
} ESR_TrackMotionPower_m8;
typedef struct ESR_TrackMotionPower_m9Tag
{
  vbittype CAN_TX_TRACK_CAN_ID_GROUP : 4;
  vbittype CAN_TX_TRACK_ROLLING_COUNT_2_flag : 1;
  vbittype unused0 : 3;
  vbittype CAN_TX_TRACK_POWER64_m9 : 5;
  vbittype CAN_TX_TRACK_MOVING64_m9 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_SLOW64_m9 : 1;
  vbittype CAN_TX_TRACK_MOVABLE_FAST64_m9 : 1;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
} ESR_TrackMotionPower_m9;
typedef struct CAN_TX_FORD_WERS_ASM_PN_1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_ASM_PN_1;
typedef struct CAN_TX_FORD_WERS_ASM_PN_2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_ASM_PN_2;
typedef struct CAN_TX_VOLVO_KDP_ASM_PNTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_VOLVO_KDP_ASM_PN;
typedef struct CAN_TX_FORD_WERS_HW_PN_1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_HW_PN_1;
typedef struct CAN_TX_FORD_WERS_HW_PN_2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_HW_PN_2;
typedef struct CAN_TX_VOLVO_KDP_HW_PNTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_VOLVO_KDP_HW_PN;
typedef struct CAN_TX_FORD_WERS_HOST_SW_PN_1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_HOST_SW_PN_1;
typedef struct CAN_TX_FORD_WERS_HOST_SW_PN_2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_HOST_SW_PN_2;
typedef struct CAN_TX_VOLVO_KDP_HOST_SW_PNTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_VOLVO_KDP_HOST_SW_PN;
typedef struct CAN_TX_FORD_WERS_DIAG_PN_1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_DIAG_PN_1;
typedef struct CAN_TX_FORD_WERS_DIAG_PN_2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_FORD_WERS_DIAG_PN_2;
typedef struct CAN_TX_VOLVO_KDP_DIAG_PNTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} CAN_TX_VOLVO_KDP_DIAG_PN;
typedef struct ESR_Sim1Tag
{
  vbittype CAN_RX_SIM_FUNCTION : 3;
  vbittype CAN_RX_SIM_STATUS : 2;
  vbittype CAN_RX_SIM_TRACK_ID : 2;
  vbittype unused0 : 1;
  vbittype CAN_RX_SIM_ANGLE : 8;
  vbittype CAN_RX_SIM_LAT_POS : 8;
  vbittype CAN_RX_SIM_LAT_RATE : 8;
  vbittype CAN_RX_SIM_RANGE : 8;
  vbittype CAN_RX_SIM_RANGE_ACCEL : 8;
  vbittype CAN_RX_SIM_RANGE_RATE : 8;
  vbittype unused1 : 8;
} ESR_Sim1;
typedef struct ESR_Valid1Tag
{
  vbittype CAN_TX_VALID_LR_SN : 8;
  vbittype CAN_TX_VALID_LR_RANGE_0 : 8;
  vbittype CAN_TX_VALID_LR_RANGE_1 : 8;
  vbittype CAN_TX_VALID_LR_RANGE_RATE_0 : 8;
  vbittype CAN_TX_VALID_LR_RANGE_RATE_1 : 8;
  vbittype CAN_TX_VALID_LR_ANGLE_0 : 8;
  vbittype CAN_TX_VALID_LR_ANGLE_1 : 8;
  vbittype CAN_TX_VALID_LR_POWER : 8;
} ESR_Valid1;
typedef struct ESR_Valid2Tag
{
  vbittype CAN_TX_VALID_MR_SN : 8;
  vbittype CAN_TX_VALID_MR_RANGE_0 : 8;
  vbittype CAN_TX_VALID_MR_RANGE_1 : 8;
  vbittype CAN_TX_VALID_MR_RANGE_RATE_0 : 8;
  vbittype CAN_TX_VALID_MR_RANGE_RATE_1 : 8;
  vbittype CAN_TX_VALID_MR_ANGLE_0 : 8;
  vbittype CAN_TX_VALID_MR_ANGLE_1 : 8;
  vbittype CAN_TX_VALID_MR_POWER : 8;
} ESR_Valid2;
typedef struct ESR_Status5Tag
{
  vbittype CAN_TX_SWBATT_A2D : 8;
  vbittype CAN_TX_IGNP_A2D : 8;
  vbittype CAN_TX_TEMP1_A2D : 8;
  vbittype CAN_TX_TEMP2_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VA_A2D : 8;
  vbittype CAN_TX_SUPPLY_5VDX_A2D : 8;
  vbittype CAN_TX_SUPPLY_3P3V_A2D : 8;
  vbittype CAN_TX_SUPPLY_10V_A2D : 8;
} ESR_Status5;
typedef struct ESR_Status6Tag
{
  vbittype CAN_TX_SUPPLY_1P8V_A2D : 8;
  vbittype CAN_TX_SUPPLY_N5V_A2D : 8;
  vbittype CAN_TX_WAVE_DIFF_A2D : 8;
  vbittype CAN_TX_SYSTEM_POWER_MODE : 3;
  vbittype CAN_TX_VERTICAL_ALIGN_UPDATED : 1;
  vbittype CAN_TX_SW_VERSION_DSP_3RD_BYTE : 4;
  vbittype CAN_TX_FACTORY_ALIGN_STATUS_2_flag : 3;
  vbittype CAN_TX_FACTORY_ALIGN_STATUS_1_flag : 3;
  vbittype CAN_TX_RECOMMEND_UNCONVERGE : 1;
  vbittype CAN_TX_FOUND_TARGET : 1;
  vbittype CAN_TX_FACTORY_MISALIGNMENT : 8;
  vbittype CAN_TX_SERV_ALIGN_UPDATES_DONE : 8;
  vbittype CAN_TX_VERTICAL_MISALIGNMENT : 8;
} ESR_Status6;
typedef struct ESR_Status7Tag
{
  vbittype CAN_TX_ACTIVE_FAULT_0_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_1_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_2_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_3_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_4_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_5_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_6_flag : 8;
  vbittype CAN_TX_ACTIVE_FAULT_7_flag : 8;
} ESR_Status7;
typedef struct ESR_Status8Tag
{
  vbittype CAN_TX_HISTORY_FAULT_0_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_1_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_2_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_3_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_4_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_5_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_6_flag : 8;
  vbittype CAN_TX_HISTORY_FAULT_7_flag : 8;
} ESR_Status8;
typedef struct ESR_Status9Tag
{
  vbittype CAN_TX_AVG_PWR_CWBLKG_0 : 8;
  vbittype CAN_TX_SIDESLIP_ANGLE_0 : 2;
  vbittype unused0 : 2;
  vbittype CAN_TX_AVG_PWR_CWBLKG_1 : 4;
  vbittype CAN_TX_SIDESLIP_ANGLE_1 : 8;
  vbittype CAN_TX_SERIAL_NUM_3RD_BYTE : 8;
  vbittype CAN_TX_FILTERED_XOHP_ACC_CIPV_0 : 1;
  vbittype CAN_TX_WATER_SPRAY_TARGET_ID : 7;
  vbittype CAN_TX_FILTERED_XOHP_ACC_CIPV_1 : 8;
  vbittype CAN_TX_PATH_ID_ACC_2_flag : 8;
  vbittype CAN_TX_PATH_ID_ACC_3_flag : 8;
} ESR_Status9;
typedef struct Vehicle3Tag
{
  vbittype CAN_RX_LAT_ACCEL_0 : 6;
  vbittype CAN_RX_LAT_ACCEL_VALIDITY : 1;
  vbittype CAN_RX_LONG_ACCEL_VALIDITY : 1;
  vbittype CAN_RX_LONG_ACCEL_0 : 5;
  vbittype CAN_RX_LAT_ACCEL_1 : 3;
  vbittype CAN_RX_RADAR_FOV_LR_0 : 4;
  vbittype CAN_RX_LONG_ACCEL_1 : 4;
  vbittype CAN_RX_RADAR_FOV_MR : 7;
  vbittype CAN_RX_RADAR_FOV_LR_1 : 1;
  vbittype CAN_RX_RADAR_HEIGHT : 7;
  vbittype CAN_RX_AUTO_ALIGN_DISABLE : 1;
  vbittype CAN_RX_WHEEL_SLIP : 2;
  vbittype CAN_RX_AUTO_ALIGN_CONVERGED : 1;
  vbittype CAN_RX_AALIGN_AVG_CTR_TOTAL : 3;
  vbittype CAN_RX_SERV_ALIGN_ENABLE : 1;
  vbittype CAN_RX_SERV_ALIGN_TYPE : 1;
  vbittype CAN_RX_SERV_ALIGN_UPDATES_NEED : 8;
  vbittype CAN_RX_ANGLE_MOUNTING_OFFSET : 8;
} Vehicle3;
typedef struct Vehicle4Tag
{
  vbittype CAN_RX_FAC_ALIGN_MAX_NT : 7;
  vbittype CAN_RX_FAC_ALIGN_CMD_2_flag : 1;
  vbittype CAN_RX_FAC_ALIGN_SAMP_REQ : 7;
  vbittype CAN_RX_FAC_ALIGN_CMD_1_flag : 1;
  vbittype CAN_RX_FAC_TGT_MTG_OFFSET : 8;
  vbittype CAN_RX_FAC_TGT_MTG_SPACE_HOR : 8;
  vbittype CAN_RX_FAC_TGT_MTG_SPACE_VER : 8;
  vbittype CAN_RX_FAC_TGT_RANGE_1_flag : 8;
  vbittype CAN_RX_FAC_TGT_RANGE_R2M : 8;
  vbittype CAN_RX_FAC_TGT_RANGE_M2T : 8;
} Vehicle4;
typedef struct Vehicle5Tag
{
  vbittype CAN_RX_OVERSTEER_UNDERSTEER : 8;
  vbittype CAN_RX_BEAMWIDTH_VERT : 7;
  vbittype CAN_RX_YAW_RATE_BIAS_SHIFT : 1;
  vbittype CAN_RX_FUNNEL_OFFSET_LEFT : 8;
  vbittype CAN_RX_FUNNEL_OFFSET_RIGHT : 8;
  vbittype CAN_RX_CW_BLOCKAGE_THRESHOLD : 8;
  vbittype CAN_RX_DISTANCE_REAR_AXLE : 8;
  vbittype CAN_RX_WHEELBASE : 8;
  vbittype CAN_RX_STEERING_GEAR_RATIO : 8;
} Vehicle5;
typedef struct Vehicle6Tag
{
  vbittype CAN_VOLVO_FA_MIN_VSPEED_SHORT : 8;
  vbittype CAN_VOLVO_FA_AALIGN_ESTIMATE : 8;
  vbittype CAN_VOLVO_FA_RANGE_MAX_SHORT : 8;
  vbittype CAN_RX_INNER_FUNNEL_OFFSET_LEFT : 8;
  vbittype CAN_RX_INNER_FUNNEL_OFFSET_RIGHT : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
} Vehicle6;
typedef struct MMR_XCP_Inst_ReqTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_Req;
typedef struct MMR_XCP_Inst_RespTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_Resp;
typedef struct MMR_XCP_Inst_DAQ01Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ01;
typedef struct MMR_XCP_Inst_DAQ02Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ02;
typedef struct MMR_XCP_Inst_DAQ03Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ03;
typedef struct MMR_XCP_Inst_DAQ04Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ04;
typedef struct MMR_XCP_Inst_DAQ05Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ05;
typedef struct MMR_XCP_Inst_DAQ06Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ06;
typedef struct MMR_XCP_Inst_DAQ07Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ07;
typedef struct MMR_XCP_Inst_DAQ08Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ08;
typedef struct MMR_XCP_Inst_DAQ09Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ09;
typedef struct MMR_XCP_Inst_DAQ10Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ10;
typedef struct MMR_XCP_Inst_DAQ11Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ11;
typedef struct MMR_XCP_Inst_DAQ12Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ12;
typedef struct MMR_XCP_Inst_DAQ13Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ13;
typedef struct MMR_XCP_Inst_DAQ14Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ14;
typedef struct MMR_XCP_Inst_DAQ15Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ15;
typedef struct MMR_XCP_Inst_DAQ16Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_XCP_Inst_DAQ16;
typedef struct ACM_Inst_ReqTag
{
  vbittype command_code : 8;
  vbittype command_ctr : 8;
  vbittype cc_byte_1_flag : 8;
  vbittype cc_byte_2_flag : 8;
  vbittype cc_word_1_flag_0 : 8;
  vbittype cc_word_1_flag_1 : 8;
  vbittype cc_word_2_flag_0 : 8;
  vbittype cc_word_2_flag_1 : 8;
} ACM_Inst_Req;
typedef struct MMR_Host_Inst_ReqTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Host_Inst_Req;
typedef struct MMR_Host_Inst_RespTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Host_Inst_Resp;
typedef struct ACM_Inst_RespTag
{
  vbittype PID : 8;
  vbittype command_return_code : 8;
  vbittype rtn_cmd_counter : 8;
  vbittype Data_3_flag : 8;
  vbittype Data_4_flag : 8;
  vbittype Data_5_flag : 8;
  vbittype Data_6_flag : 8;
  vbittype Data_7_flag : 8;
} ACM_Inst_Resp;
typedef struct MMR_DSP_Inst_ReqTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_DSP_Inst_Req;
typedef struct MMR_DSP_Inst_RespTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_DSP_Inst_Resp;
typedef struct ACM_Inst_DAQ1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} ACM_Inst_DAQ1;
typedef struct ACM_Inst_DAQ2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} ACM_Inst_DAQ2;
typedef struct MMR_Inst_DAQ1Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_DAQ1;
typedef struct MMR_Inst_DAQ2Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_DAQ2;
typedef struct MMR_Inst_DAQ3Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_DAQ3;
typedef struct MMR_Inst_DAQ4Tag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_DAQ4;
typedef struct MMR_Inst_Req_FLASHTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_Req_FLASH;
typedef struct MMR_Inst_Resp_FLASHTag
{
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype unused3 : 8;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype unused6 : 8;
  vbittype unused7 : 8;
} MMR_Inst_Resp_FLASH;



union F_Master_Time_Sync_LRUon
{
   uint8 F_Master_Time_Sync_LR_Buffer[7];
   F_Master_Time_Sync_LR F_Master_Time_Sync_LR_Layout;
}F_Master_Time_Sync_LR_u;

union F_Vehicle_Path_Estimate_LRUon
{
   uint8 F_Vehicle_Path_Estimate_LR_Buffer[8];
   F_Vehicle_Path_Estimate_LR F_Vehicle_Path_Estimate_LR_Layout;
}F_Vehicle_Path_Estimate_LR_u;

union F_Vehicle_Path_Data_2_LRUon
{
   uint8 F_Vehicle_Path_Data_2_LR_Buffer[7];
   F_Vehicle_Path_Data_2_LR F_Vehicle_Path_Data_2_LR_Layout;
}F_Vehicle_Path_Data_2_LR_u;

union Body_Info_FOB_LRUon
{
   uint8 Body_Info_FOB_LR_Buffer[6];
   Body_Info_FOB_LR Body_Info_FOB_LR_Layout;
}Body_Info_FOB_LR_u;

union R_SRR_Object_Header_LRUon
{
   uint8 R_SRR_Object_Header_LR_Buffer[8];
   R_SRR_Object_Header_LR R_SRR_Object_Header_LR_Layout;
}R_SRR_Object_Header_LR_u,RSRRDiagStatus_LR_u;

union R_SRR_Object_Track1_LRUon
{
   uint8 R_SRR_Object_Track1_LR_Buffer[8];
   R_SRR_Object_Track1_LR R_SRR_Object_Track1_LR_Layout;
}R_SRR_Object_Track1_LR_u;

union R_SRR_Object_Track2_LRUon
{
   uint8 R_SRR_Object_Track2_LR_Buffer[8];
   R_SRR_Object_Track2_LR R_SRR_Object_Track2_LR_Layout;
}R_SRR_Object_Track2_LR_u;

union R_SRR_Object_Track3_LRUon
{
   uint8 R_SRR_Object_Track3_LR_Buffer[8];
   R_SRR_Object_Track3_LR R_SRR_Object_Track3_LR_Layout;
}R_SRR_Object_Track3_LR_u;

union R_SRR_Object_Track4_LRUon
{
   uint8 R_SRR_Object_Track4_LR_Buffer[8];
   R_SRR_Object_Track4_LR R_SRR_Object_Track4_LR_Layout;
}R_SRR_Object_Track4_LR_u;

union R_SRR_Object_Track5_LRUon
{
   uint8 R_SRR_Object_Track5_LR_Buffer[8];
   R_SRR_Object_Track5_LR R_SRR_Object_Track5_LR_Layout;
}R_SRR_Object_Track5_LR_u;

union R_SRR_Object_Track6_LRUon
{
   uint8 R_SRR_Object_Track6_LR_Buffer[8];
   R_SRR_Object_Track6_LR R_SRR_Object_Track6_LR_Layout;
}R_SRR_Object_Track6_LR_u;

union R_SRR_Object_Track7_LRUon
{
   uint8 R_SRR_Object_Track7_LR_Buffer[8];
   R_SRR_Object_Track7_LR R_SRR_Object_Track7_LR_Layout;
}R_SRR_Object_Track7_LR_u;

union R_SRR_Object_Track8_LRUon
{
   uint8 R_SRR_Object_Track8_LR_Buffer[8];
   R_SRR_Object_Track8_LR R_SRR_Object_Track8_LR_Layout;
}R_SRR_Object_Track8_LR_u;

union R_SRR_Object_Track9_LRUon
{
   uint8 R_SRR_Object_Track9_LR_Buffer[8];
   R_SRR_Object_Track9_LR R_SRR_Object_Track9_LR_Layout;
}R_SRR_Object_Track9_LR_u;

union R_SRR_Object_Track10_LRUon
{
   uint8 R_SRR_Object_Track10_LR_Buffer[8];
   R_SRR_Object_Track10_LR R_SRR_Object_Track10_LR_Layout;
}R_SRR_Object_Track10_LR_u;

union ESR_Status1Uon
{
   uint8 ESR_Status1_Buffer[8];
   ESR_Status1 ESR_Status1_Layout;
}ESR_Status1_u;

union ESR_Status2Uon
{
   uint8 ESR_Status2_Buffer[8];
   ESR_Status2 ESR_Status2_Layout;
}ESR_Status2_u;

union ESR_Status3Uon
{
   uint8 ESR_Status3_Buffer[8];
   ESR_Status3 ESR_Status3_Layout;
}ESR_Status3_u;

union ESR_Status4Uon
{
   uint8 ESR_Status4_Buffer[8];
   ESR_Status4 ESR_Status4_Layout;
}ESR_Status4_u;

union Vehicle1Uon
{
   uint8 Vehicle1_Buffer[8];
   Vehicle1 Vehicle1_Layout;
}Vehicle1_u;

union Vehicle2Uon
{
   uint8 Vehicle2_Buffer[8];
   Vehicle2 Vehicle2_Layout;
}Vehicle2_u;

union ESR_Track01Uon
{
   uint8 ESR_Track01_Buffer[8];
   ESR_Track01 ESR_Track01_Layout;
}ESR_Track01_u;

union ESR_Track02Uon
{
   uint8 ESR_Track02_Buffer[8];
   ESR_Track02 ESR_Track02_Layout;
}ESR_Track02_u;

union ESR_Track03Uon
{
   uint8 ESR_Track03_Buffer[8];
   ESR_Track03 ESR_Track03_Layout;
}ESR_Track03_u;

union ESR_Track04Uon
{
   uint8 ESR_Track04_Buffer[8];
   ESR_Track04 ESR_Track04_Layout;
}ESR_Track04_u;

union ESR_Track05Uon
{
   uint8 ESR_Track05_Buffer[8];
   ESR_Track05 ESR_Track05_Layout;
}ESR_Track05_u;

union ESR_Track06Uon
{
   uint8 ESR_Track06_Buffer[8];
   ESR_Track06 ESR_Track06_Layout;
}ESR_Track06_u;

union ESR_Track07Uon
{
   uint8 ESR_Track07_Buffer[8];
   ESR_Track07 ESR_Track07_Layout;
}ESR_Track07_u;

union ESR_Track08Uon
{
   uint8 ESR_Track08_Buffer[8];
   ESR_Track08 ESR_Track08_Layout;
}ESR_Track08_u;

union ESR_Track09Uon
{
   uint8 ESR_Track09_Buffer[8];
   ESR_Track09 ESR_Track09_Layout;
}ESR_Track09_u;

union ESR_Track10Uon
{
   uint8 ESR_Track10_Buffer[8];
   ESR_Track10 ESR_Track10_Layout;
}ESR_Track10_u;

union ESR_Track11Uon
{
   uint8 ESR_Track11_Buffer[8];
   ESR_Track11 ESR_Track11_Layout;
}ESR_Track11_u;

union ESR_Track12Uon
{
   uint8 ESR_Track12_Buffer[8];
   ESR_Track12 ESR_Track12_Layout;
}ESR_Track12_u;

union ESR_Track13Uon
{
   uint8 ESR_Track13_Buffer[8];
   ESR_Track13 ESR_Track13_Layout;
}ESR_Track13_u;

union ESR_Track14Uon
{
   uint8 ESR_Track14_Buffer[8];
   ESR_Track14 ESR_Track14_Layout;
}ESR_Track14_u;

union ESR_Track15Uon
{
   uint8 ESR_Track15_Buffer[8];
   ESR_Track15 ESR_Track15_Layout;
}ESR_Track15_u;

union ESR_Track16Uon
{
   uint8 ESR_Track16_Buffer[8];
   ESR_Track16 ESR_Track16_Layout;
}ESR_Track16_u;

union ESR_Track17Uon
{
   uint8 ESR_Track17_Buffer[8];
   ESR_Track17 ESR_Track17_Layout;
}ESR_Track17_u;

union ESR_Track18Uon
{
   uint8 ESR_Track18_Buffer[8];
   ESR_Track18 ESR_Track18_Layout;
}ESR_Track18_u;

union ESR_Track19Uon
{
   uint8 ESR_Track19_Buffer[8];
   ESR_Track19 ESR_Track19_Layout;
}ESR_Track19_u;

union ESR_Track20Uon
{
   uint8 ESR_Track20_Buffer[8];
   ESR_Track20 ESR_Track20_Layout;
}ESR_Track20_u;

union ESR_Track21Uon
{
   uint8 ESR_Track21_Buffer[8];
   ESR_Track21 ESR_Track21_Layout;
}ESR_Track21_u;

union ESR_Track22Uon
{
   uint8 ESR_Track22_Buffer[8];
   ESR_Track22 ESR_Track22_Layout;
}ESR_Track22_u;

union ESR_Track23Uon
{
   uint8 ESR_Track23_Buffer[8];
   ESR_Track23 ESR_Track23_Layout;
}ESR_Track23_u;

union ESR_Track24Uon
{
   uint8 ESR_Track24_Buffer[8];
   ESR_Track24 ESR_Track24_Layout;
}ESR_Track24_u;

union ESR_Track25Uon
{
   uint8 ESR_Track25_Buffer[8];
   ESR_Track25 ESR_Track25_Layout;
}ESR_Track25_u;

union ESR_Track26Uon
{
   uint8 ESR_Track26_Buffer[8];
   ESR_Track26 ESR_Track26_Layout;
}ESR_Track26_u;

union ESR_Track27Uon
{
   uint8 ESR_Track27_Buffer[8];
   ESR_Track27 ESR_Track27_Layout;
}ESR_Track27_u;

union ESR_Track28Uon
{
   uint8 ESR_Track28_Buffer[8];
   ESR_Track28 ESR_Track28_Layout;
}ESR_Track28_u;

union ESR_Track29Uon
{
   uint8 ESR_Track29_Buffer[8];
   ESR_Track29 ESR_Track29_Layout;
}ESR_Track29_u;

union ESR_Track30Uon
{
   uint8 ESR_Track30_Buffer[8];
   ESR_Track30 ESR_Track30_Layout;
}ESR_Track30_u;

union ESR_Track31Uon
{
   uint8 ESR_Track31_Buffer[8];
   ESR_Track31 ESR_Track31_Layout;
}ESR_Track31_u;

union ESR_Track32Uon
{
   uint8 ESR_Track32_Buffer[8];
   ESR_Track32 ESR_Track32_Layout;
}ESR_Track32_u;

union ESR_Track33Uon
{
   uint8 ESR_Track33_Buffer[8];
   ESR_Track33 ESR_Track33_Layout;
}ESR_Track33_u;

union ESR_Track34Uon
{
   uint8 ESR_Track34_Buffer[8];
   ESR_Track34 ESR_Track34_Layout;
}ESR_Track34_u;

union ESR_Track35Uon
{
   uint8 ESR_Track35_Buffer[8];
   ESR_Track35 ESR_Track35_Layout;
}ESR_Track35_u;

union ESR_Track36Uon
{
   uint8 ESR_Track36_Buffer[8];
   ESR_Track36 ESR_Track36_Layout;
}ESR_Track36_u;

union ESR_Track37Uon
{
   uint8 ESR_Track37_Buffer[8];
   ESR_Track37 ESR_Track37_Layout;
}ESR_Track37_u;

union ESR_Track38Uon
{
   uint8 ESR_Track38_Buffer[8];
   ESR_Track38 ESR_Track38_Layout;
}ESR_Track38_u;

union ESR_Track39Uon
{
   uint8 ESR_Track39_Buffer[8];
   ESR_Track39 ESR_Track39_Layout;
}ESR_Track39_u;

union ESR_Track40Uon
{
   uint8 ESR_Track40_Buffer[8];
   ESR_Track40 ESR_Track40_Layout;
}ESR_Track40_u;

union ESR_Track41Uon
{
   uint8 ESR_Track41_Buffer[8];
   ESR_Track41 ESR_Track41_Layout;
}ESR_Track41_u;

union ESR_Track42Uon
{
   uint8 ESR_Track42_Buffer[8];
   ESR_Track42 ESR_Track42_Layout;
}ESR_Track42_u;

union ESR_Track43Uon
{
   uint8 ESR_Track43_Buffer[8];
   ESR_Track43 ESR_Track43_Layout;
}ESR_Track43_u;

union ESR_Track44Uon
{
   uint8 ESR_Track44_Buffer[8];
   ESR_Track44 ESR_Track44_Layout;
}ESR_Track44_u;

union ESR_Track45Uon
{
   uint8 ESR_Track45_Buffer[8];
   ESR_Track45 ESR_Track45_Layout;
}ESR_Track45_u;

union ESR_Track46Uon
{
   uint8 ESR_Track46_Buffer[8];
   ESR_Track46 ESR_Track46_Layout;
}ESR_Track46_u;

union ESR_Track47Uon
{
   uint8 ESR_Track47_Buffer[8];
   ESR_Track47 ESR_Track47_Layout;
}ESR_Track47_u;

union ESR_Track48Uon
{
   uint8 ESR_Track48_Buffer[8];
   ESR_Track48 ESR_Track48_Layout;
}ESR_Track48_u;

union ESR_Track49Uon
{
   uint8 ESR_Track49_Buffer[8];
   ESR_Track49 ESR_Track49_Layout;
}ESR_Track49_u;

union ESR_Track50Uon
{
   uint8 ESR_Track50_Buffer[8];
   ESR_Track50 ESR_Track50_Layout;
}ESR_Track50_u;

union ESR_Track51Uon
{
   uint8 ESR_Track51_Buffer[8];
   ESR_Track51 ESR_Track51_Layout;
}ESR_Track51_u;

union ESR_Track52Uon
{
   uint8 ESR_Track52_Buffer[8];
   ESR_Track52 ESR_Track52_Layout;
}ESR_Track52_u;

union ESR_Track53Uon
{
   uint8 ESR_Track53_Buffer[8];
   ESR_Track53 ESR_Track53_Layout;
}ESR_Track53_u;

union ESR_Track54Uon
{
   uint8 ESR_Track54_Buffer[8];
   ESR_Track54 ESR_Track54_Layout;
}ESR_Track54_u;

union ESR_Track55Uon
{
   uint8 ESR_Track55_Buffer[8];
   ESR_Track55 ESR_Track55_Layout;
}ESR_Track55_u;

union ESR_Track56Uon
{
   uint8 ESR_Track56_Buffer[8];
   ESR_Track56 ESR_Track56_Layout;
}ESR_Track56_u;

union ESR_Track57Uon
{
   uint8 ESR_Track57_Buffer[8];
   ESR_Track57 ESR_Track57_Layout;
}ESR_Track57_u;

union ESR_Track58Uon
{
   uint8 ESR_Track58_Buffer[8];
   ESR_Track58 ESR_Track58_Layout;
}ESR_Track58_u;

union ESR_Track59Uon
{
   uint8 ESR_Track59_Buffer[8];
   ESR_Track59 ESR_Track59_Layout;
}ESR_Track59_u;

union ESR_Track60Uon
{
   uint8 ESR_Track60_Buffer[8];
   ESR_Track60 ESR_Track60_Layout;
}ESR_Track60_u;

union ESR_Track61Uon
{
   uint8 ESR_Track61_Buffer[8];
   ESR_Track61 ESR_Track61_Layout;
}ESR_Track61_u;

union ESR_Track62Uon
{
   uint8 ESR_Track62_Buffer[8];
   ESR_Track62 ESR_Track62_Layout;
}ESR_Track62_u;

union ESR_Track63Uon
{
   uint8 ESR_Track63_Buffer[8];
   ESR_Track63 ESR_Track63_Layout;
}ESR_Track63_u;

union ESR_Track64Uon
{
   uint8 ESR_Track64_Buffer[8];
   ESR_Track64 ESR_Track64_Layout;
}ESR_Track64_u;

union ESR_TrackMotionPower_m0Uon
{
   uint8 ESR_TrackMotionPower_m0_Buffer[8];
   ESR_TrackMotionPower_m0 ESR_TrackMotionPower_m0_Layout;
}ESR_TrackMotionPower_m0_u;

union ESR_TrackMotionPower_m1Uon
{
   uint8 ESR_TrackMotionPower_m1_Buffer[8];
   ESR_TrackMotionPower_m1 ESR_TrackMotionPower_m1_Layout;
}ESR_TrackMotionPower_m1_u;

union ESR_TrackMotionPower_m2Uon
{
   uint8 ESR_TrackMotionPower_m2_Buffer[8];
   ESR_TrackMotionPower_m2 ESR_TrackMotionPower_m2_Layout;
}ESR_TrackMotionPower_m2_u;

union ESR_TrackMotionPower_m3Uon
{
   uint8 ESR_TrackMotionPower_m3_Buffer[8];
   ESR_TrackMotionPower_m3 ESR_TrackMotionPower_m3_Layout;
}ESR_TrackMotionPower_m3_u;

union ESR_TrackMotionPower_m4Uon
{
   uint8 ESR_TrackMotionPower_m4_Buffer[8];
   ESR_TrackMotionPower_m4 ESR_TrackMotionPower_m4_Layout;
}ESR_TrackMotionPower_m4_u;

union ESR_TrackMotionPower_m5Uon
{
   uint8 ESR_TrackMotionPower_m5_Buffer[8];
   ESR_TrackMotionPower_m5 ESR_TrackMotionPower_m5_Layout;
}ESR_TrackMotionPower_m5_u;

union ESR_TrackMotionPower_m6Uon
{
   uint8 ESR_TrackMotionPower_m6_Buffer[8];
   ESR_TrackMotionPower_m6 ESR_TrackMotionPower_m6_Layout;
}ESR_TrackMotionPower_m6_u;

union ESR_TrackMotionPower_m7Uon
{
   uint8 ESR_TrackMotionPower_m7_Buffer[8];
   ESR_TrackMotionPower_m7 ESR_TrackMotionPower_m7_Layout;
}ESR_TrackMotionPower_m7_u;

union ESR_TrackMotionPower_m8Uon
{
   uint8 ESR_TrackMotionPower_m8_Buffer[8];
   ESR_TrackMotionPower_m8 ESR_TrackMotionPower_m8_Layout;
}ESR_TrackMotionPower_m8_u;

union ESR_TrackMotionPower_m9Uon
{
   uint8 ESR_TrackMotionPower_m9_Buffer[8];
   ESR_TrackMotionPower_m9 ESR_TrackMotionPower_m9_Layout;
}ESR_TrackMotionPower_m9_u;

union CAN_TX_FORD_WERS_ASM_PN_1Uon
{
   uint8 CAN_TX_FORD_WERS_ASM_PN_1_Buffer[8];
   CAN_TX_FORD_WERS_ASM_PN_1 CAN_TX_FORD_WERS_ASM_PN_1_Layout;
}CAN_TX_FORD_WERS_ASM_PN_1_u;

union CAN_TX_FORD_WERS_ASM_PN_2Uon
{
   uint8 CAN_TX_FORD_WERS_ASM_PN_2_Buffer[8];
   CAN_TX_FORD_WERS_ASM_PN_2 CAN_TX_FORD_WERS_ASM_PN_2_Layout;
}CAN_TX_FORD_WERS_ASM_PN_2_u;

union CAN_TX_VOLVO_KDP_ASM_PNUon
{
   uint8 CAN_TX_VOLVO_KDP_ASM_PN_Buffer[8];
   CAN_TX_VOLVO_KDP_ASM_PN CAN_TX_VOLVO_KDP_ASM_PN_Layout;
}CAN_TX_VOLVO_KDP_ASM_PN_u;

union CAN_TX_FORD_WERS_HW_PN_1Uon
{
   uint8 CAN_TX_FORD_WERS_HW_PN_1_Buffer[8];
   CAN_TX_FORD_WERS_HW_PN_1 CAN_TX_FORD_WERS_HW_PN_1_Layout;
}CAN_TX_FORD_WERS_HW_PN_1_u;

union CAN_TX_FORD_WERS_HW_PN_2Uon
{
   uint8 CAN_TX_FORD_WERS_HW_PN_2_Buffer[8];
   CAN_TX_FORD_WERS_HW_PN_2 CAN_TX_FORD_WERS_HW_PN_2_Layout;
}CAN_TX_FORD_WERS_HW_PN_2_u;

union CAN_TX_VOLVO_KDP_HW_PNUon
{
   uint8 CAN_TX_VOLVO_KDP_HW_PN_Buffer[8];
   CAN_TX_VOLVO_KDP_HW_PN CAN_TX_VOLVO_KDP_HW_PN_Layout;
}CAN_TX_VOLVO_KDP_HW_PN_u;

union CAN_TX_FORD_WERS_HOST_SW_PN_1Uon
{
   uint8 CAN_TX_FORD_WERS_HOST_SW_PN_1_Buffer[8];
   CAN_TX_FORD_WERS_HOST_SW_PN_1 CAN_TX_FORD_WERS_HOST_SW_PN_1_Layout;
}CAN_TX_FORD_WERS_HOST_SW_PN_1_u;

union CAN_TX_FORD_WERS_HOST_SW_PN_2Uon
{
   uint8 CAN_TX_FORD_WERS_HOST_SW_PN_2_Buffer[8];
   CAN_TX_FORD_WERS_HOST_SW_PN_2 CAN_TX_FORD_WERS_HOST_SW_PN_2_Layout;
}CAN_TX_FORD_WERS_HOST_SW_PN_2_u;

union CAN_TX_VOLVO_KDP_HOST_SW_PNUon
{
   uint8 CAN_TX_VOLVO_KDP_HOST_SW_PN_Buffer[8];
   CAN_TX_VOLVO_KDP_HOST_SW_PN CAN_TX_VOLVO_KDP_HOST_SW_PN_Layout;
}CAN_TX_VOLVO_KDP_HOST_SW_PN_u;

union CAN_TX_FORD_WERS_DIAG_PN_1Uon
{
   uint8 CAN_TX_FORD_WERS_DIAG_PN_1_Buffer[8];
   CAN_TX_FORD_WERS_DIAG_PN_1 CAN_TX_FORD_WERS_DIAG_PN_1_Layout;
}CAN_TX_FORD_WERS_DIAG_PN_1_u;

union CAN_TX_FORD_WERS_DIAG_PN_2Uon
{
   uint8 CAN_TX_FORD_WERS_DIAG_PN_2_Buffer[8];
   CAN_TX_FORD_WERS_DIAG_PN_2 CAN_TX_FORD_WERS_DIAG_PN_2_Layout;
}CAN_TX_FORD_WERS_DIAG_PN_2_u;

union CAN_TX_VOLVO_KDP_DIAG_PNUon
{
   uint8 CAN_TX_VOLVO_KDP_DIAG_PN_Buffer[8];
   CAN_TX_VOLVO_KDP_DIAG_PN CAN_TX_VOLVO_KDP_DIAG_PN_Layout;
}CAN_TX_VOLVO_KDP_DIAG_PN_u;

union ESR_Sim1Uon
{
   uint8 ESR_Sim1_Buffer[8];
   ESR_Sim1 ESR_Sim1_Layout;
}ESR_Sim1_u;

union ESR_Valid1Uon
{
   uint8 ESR_Valid1_Buffer[8];
   ESR_Valid1 ESR_Valid1_Layout;
}ESR_Valid1_u;

union ESR_Valid2Uon
{
   uint8 ESR_Valid2_Buffer[8];
   ESR_Valid2 ESR_Valid2_Layout;
}ESR_Valid2_u;

union ESR_Status5Uon
{
   uint8 ESR_Status5_Buffer[8];
   ESR_Status5 ESR_Status5_Layout;
}ESR_Status5_u;

union ESR_Status6Uon
{
   uint8 ESR_Status6_Buffer[8];
   ESR_Status6 ESR_Status6_Layout;
}ESR_Status6_u;

union ESR_Status7Uon
{
   uint8 ESR_Status7_Buffer[8];
   ESR_Status7 ESR_Status7_Layout;
}ESR_Status7_u;

union ESR_Status8Uon
{
   uint8 ESR_Status8_Buffer[8];
   ESR_Status8 ESR_Status8_Layout;
}ESR_Status8_u;

union ESR_Status9Uon
{
   uint8 ESR_Status9_Buffer[8];
   ESR_Status9 ESR_Status9_Layout;
}ESR_Status9_u;

union Vehicle3Uon
{
   uint8 Vehicle3_Buffer[8];
   Vehicle3 Vehicle3_Layout;
}Vehicle3_u;

union Vehicle4Uon
{
   uint8 Vehicle4_Buffer[8];
   Vehicle4 Vehicle4_Layout;
}Vehicle4_u;

union Vehicle5Uon
{
   uint8 Vehicle5_Buffer[8];
   Vehicle5 Vehicle5_Layout;
}Vehicle5_u;

union Vehicle6Uon
{
   uint8 Vehicle6_Buffer[8];
   Vehicle6 Vehicle6_Layout;
}Vehicle6_u;

union MMR_XCP_Inst_ReqUon
{
   uint8 MMR_XCP_Inst_Req_Buffer[8];
   MMR_XCP_Inst_Req MMR_XCP_Inst_Req_Layout;
}MMR_XCP_Inst_Req_u;

union MMR_XCP_Inst_RespUon
{
   uint8 MMR_XCP_Inst_Resp_Buffer[8];
   MMR_XCP_Inst_Resp MMR_XCP_Inst_Resp_Layout;
}MMR_XCP_Inst_Resp_u;

union MMR_XCP_Inst_DAQ01Uon
{
   uint8 MMR_XCP_Inst_DAQ01_Buffer[8];
   MMR_XCP_Inst_DAQ01 MMR_XCP_Inst_DAQ01_Layout;
}MMR_XCP_Inst_DAQ01_u;

union MMR_XCP_Inst_DAQ02Uon
{
   uint8 MMR_XCP_Inst_DAQ02_Buffer[8];
   MMR_XCP_Inst_DAQ02 MMR_XCP_Inst_DAQ02_Layout;
}MMR_XCP_Inst_DAQ02_u;

union MMR_XCP_Inst_DAQ03Uon
{
   uint8 MMR_XCP_Inst_DAQ03_Buffer[8];
   MMR_XCP_Inst_DAQ03 MMR_XCP_Inst_DAQ03_Layout;
}MMR_XCP_Inst_DAQ03_u;

union MMR_XCP_Inst_DAQ04Uon
{
   uint8 MMR_XCP_Inst_DAQ04_Buffer[8];
   MMR_XCP_Inst_DAQ04 MMR_XCP_Inst_DAQ04_Layout;
}MMR_XCP_Inst_DAQ04_u;

union MMR_XCP_Inst_DAQ05Uon
{
   uint8 MMR_XCP_Inst_DAQ05_Buffer[8];
   MMR_XCP_Inst_DAQ05 MMR_XCP_Inst_DAQ05_Layout;
}MMR_XCP_Inst_DAQ05_u;

union MMR_XCP_Inst_DAQ06Uon
{
   uint8 MMR_XCP_Inst_DAQ06_Buffer[8];
   MMR_XCP_Inst_DAQ06 MMR_XCP_Inst_DAQ06_Layout;
}MMR_XCP_Inst_DAQ06_u;

union MMR_XCP_Inst_DAQ07Uon
{
   uint8 MMR_XCP_Inst_DAQ07_Buffer[8];
   MMR_XCP_Inst_DAQ07 MMR_XCP_Inst_DAQ07_Layout;
}MMR_XCP_Inst_DAQ07_u;

union MMR_XCP_Inst_DAQ08Uon
{
   uint8 MMR_XCP_Inst_DAQ08_Buffer[8];
   MMR_XCP_Inst_DAQ08 MMR_XCP_Inst_DAQ08_Layout;
}MMR_XCP_Inst_DAQ08_u;

union MMR_XCP_Inst_DAQ09Uon
{
   uint8 MMR_XCP_Inst_DAQ09_Buffer[8];
   MMR_XCP_Inst_DAQ09 MMR_XCP_Inst_DAQ09_Layout;
}MMR_XCP_Inst_DAQ09_u;

union MMR_XCP_Inst_DAQ10Uon
{
   uint8 MMR_XCP_Inst_DAQ10_Buffer[8];
   MMR_XCP_Inst_DAQ10 MMR_XCP_Inst_DAQ10_Layout;
}MMR_XCP_Inst_DAQ10_u;

union MMR_XCP_Inst_DAQ11Uon
{
   uint8 MMR_XCP_Inst_DAQ11_Buffer[8];
   MMR_XCP_Inst_DAQ11 MMR_XCP_Inst_DAQ11_Layout;
}MMR_XCP_Inst_DAQ11_u;

union MMR_XCP_Inst_DAQ12Uon
{
   uint8 MMR_XCP_Inst_DAQ12_Buffer[8];
   MMR_XCP_Inst_DAQ12 MMR_XCP_Inst_DAQ12_Layout;
}MMR_XCP_Inst_DAQ12_u;

union MMR_XCP_Inst_DAQ13Uon
{
   uint8 MMR_XCP_Inst_DAQ13_Buffer[8];
   MMR_XCP_Inst_DAQ13 MMR_XCP_Inst_DAQ13_Layout;
}MMR_XCP_Inst_DAQ13_u;

union MMR_XCP_Inst_DAQ14Uon
{
   uint8 MMR_XCP_Inst_DAQ14_Buffer[8];
   MMR_XCP_Inst_DAQ14 MMR_XCP_Inst_DAQ14_Layout;
}MMR_XCP_Inst_DAQ14_u;

union MMR_XCP_Inst_DAQ15Uon
{
   uint8 MMR_XCP_Inst_DAQ15_Buffer[8];
   MMR_XCP_Inst_DAQ15 MMR_XCP_Inst_DAQ15_Layout;
}MMR_XCP_Inst_DAQ15_u;

union MMR_XCP_Inst_DAQ16Uon
{
   uint8 MMR_XCP_Inst_DAQ16_Buffer[8];
   MMR_XCP_Inst_DAQ16 MMR_XCP_Inst_DAQ16_Layout;
}MMR_XCP_Inst_DAQ16_u;

union ACM_Inst_ReqUon
{
   uint8 ACM_Inst_Req_Buffer[8];
   ACM_Inst_Req ACM_Inst_Req_Layout;
}ACM_Inst_Req_u;

union MMR_Host_Inst_ReqUon
{
   uint8 MMR_Host_Inst_Req_Buffer[8];
   MMR_Host_Inst_Req MMR_Host_Inst_Req_Layout;
}MMR_Host_Inst_Req_u;

union MMR_Host_Inst_RespUon
{
   uint8 MMR_Host_Inst_Resp_Buffer[8];
   MMR_Host_Inst_Resp MMR_Host_Inst_Resp_Layout;
}MMR_Host_Inst_Resp_u;

union ACM_Inst_RespUon
{
   uint8 ACM_Inst_Resp_Buffer[8];
   ACM_Inst_Resp ACM_Inst_Resp_Layout;
}ACM_Inst_Resp_u;

union MMR_DSP_Inst_ReqUon
{
   uint8 MMR_DSP_Inst_Req_Buffer[8];
   MMR_DSP_Inst_Req MMR_DSP_Inst_Req_Layout;
}MMR_DSP_Inst_Req_u;

union MMR_DSP_Inst_RespUon
{
   uint8 MMR_DSP_Inst_Resp_Buffer[8];
   MMR_DSP_Inst_Resp MMR_DSP_Inst_Resp_Layout;
}MMR_DSP_Inst_Resp_u;

union ACM_Inst_DAQ1Uon
{
   uint8 ACM_Inst_DAQ1_Buffer[8];
   ACM_Inst_DAQ1 ACM_Inst_DAQ1_Layout;
}ACM_Inst_DAQ1_u;

union ACM_Inst_DAQ2Uon
{
   uint8 ACM_Inst_DAQ2_Buffer[8];
   ACM_Inst_DAQ2 ACM_Inst_DAQ2_Layout;
}ACM_Inst_DAQ2_u;

union MMR_Inst_DAQ1Uon
{
   uint8 MMR_Inst_DAQ1_Buffer[8];
   MMR_Inst_DAQ1 MMR_Inst_DAQ1_Layout;
}MMR_Inst_DAQ1_u;

union MMR_Inst_DAQ2Uon
{
   uint8 MMR_Inst_DAQ2_Buffer[8];
   MMR_Inst_DAQ2 MMR_Inst_DAQ2_Layout;
}MMR_Inst_DAQ2_u;

union MMR_Inst_DAQ3Uon
{
   uint8 MMR_Inst_DAQ3_Buffer[8];
   MMR_Inst_DAQ3 MMR_Inst_DAQ3_Layout;
}MMR_Inst_DAQ3_u;

union MMR_Inst_DAQ4Uon
{
   uint8 MMR_Inst_DAQ4_Buffer[8];
   MMR_Inst_DAQ4 MMR_Inst_DAQ4_Layout;
}MMR_Inst_DAQ4_u;

union MMR_Inst_Req_FLASHUon
{
   uint8 MMR_Inst_Req_FLASH_Buffer[8];
   MMR_Inst_Req_FLASH MMR_Inst_Req_FLASH_Layout;
}MMR_Inst_Req_FLASH_u;

union MMR_Inst_Resp_FLASHUon
{
   uint8 MMR_Inst_Resp_FLASH_Buffer[8];
   MMR_Inst_Resp_FLASH MMR_Inst_Resp_FLASH_Layout;
}MMR_Inst_Resp_FLASH_u;




uint32 Get_F_Master_Time_Sync_LR_FTimeSyncMstrClock( );
uint16 Get_F_Master_Time_Sync_LR_FTimeSyncMstrChksm( );
uint8 Get_F_Master_Time_Sync_LR_FTimeSyncMstrClockV( );
uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdLRR( );
uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdSRR( );
uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdFCamera( );
uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_CurvatureV( );
uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfstV( );
uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_RollingCount( );
int8 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfst( );
int16 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLatOfst( );
int16 Get_F_Vehicle_Path_Estimate_LR_Vpath_Curvature( );
uint16 Get_F_Vehicle_Path_Estimate_LR_Vpath_Checksum( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVelV( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRateV( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2TravlDirctn( );
int16 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVel( );
int16 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRate( );
int8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVel( );
uint16 Get_F_Vehicle_Path_Data_2_LR_Vpath2_Checksum( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2ModeInfo( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2RollCnt( );
uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVelV( );
uint8 Get_Body_Info_FOB_LR_HighBmAct( );
uint8 Get_Body_Info_FOB_LR_LowBmAct( );
uint8 Get_Body_Info_FOB_LR_WSWprAct( );
uint8 Get_Body_Info_FOB_LR_LftLwBmFld( );
uint8 Get_Body_Info_FOB_LR_RtLwBmFld( );
uint8 Get_Body_Info_FOB_LR_OtsdAmbtLtLvlStatV( );
uint8 Get_Body_Info_FOB_LR_OtsdAmbtLtLvlStat( );
uint8 Get_Body_Info_FOB_LR_SysPwrMdV( );
uint8 Get_Body_Info_FOB_LR_SysPwrMd( );
uint8 Get_Body_Info_FOB_LR_WSWshSwAtv( );
uint8 Get_Body_Info_FOB_LR_TrStLgMdAtv( );
uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn3( );
uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn2( );
uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn1( );
uint8 Get_Body_Info_FOB_LR_DrDoorOpenSwActV( );
uint8 Get_Body_Info_FOB_LR_DrDoorOpenSwAct( );
uint8 Get_Body_Info_FOB_LR_StrgColCommsFlt( );
uint8 Get_Body_Info_FOB_LR_DrvWndPosStat( );
uint8 Get_Body_Info_FOB_LR_InterLghtStat( );
uint8 Get_Body_Info_FOB_LR_StrgColInOutPos( );
uint8 Get_Body_Info_FOB_LR_StrgColUpDwnPos( );
uint8 Get_Body_Info_FOB_LR_CPMAPINFO4( );
uint8 Get_R_SRR_Object_Header_LR_RSrrRollingCnt( );
uint8 Get_R_SRR_Object_Header_LR_RSRRModeCmdFdbk( );
uint16 Get_R_SRR_Object_Header_LR_RSrrTimeStamp( );
uint8 Get_R_SRR_Object_Header_LR_RSRRNumValidTargets( );
uint8 Get_R_SRR_Object_Header_LR_RSrrTimeStampV( );
uint8 Get_RSRRDiagStatus_LR_RSRRSnstvFltPrsntInt( );
uint8 Get_RSRRDiagStatus_LR_RSRRHWFltPrsntInt( );
uint8 Get_RSRRDiagStatus_LR_RSRRAntTngFltPrsnt( );
uint8 Get_RSRRDiagStatus_LR_RSRRCANIDAddrsUnsbl( );
uint8 Get_RSRRDiagStatus_LR_RSRRCANRxErr( );
uint8 Get_RSRRDiagStatus_LR_RSRRCANSgnlSpvFld( );
uint8 Get_RSRRDiagStatus_LR_RSRRDiagSpare( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnPtchUp( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnPtchDn( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnRllLt( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnRllRt( );
uint8 Get_RSRRDiagStatus_LR_RSRRExtIntrfrnc( );
uint8 Get_RSRRDiagStatus_LR_RSRRPlntAlgnInProc( );
uint8 Get_RSRRDiagStatus_LR_RSRRSvcAlgnInPrcs( );
uint8 Get_RSRRDiagStatus_LR_RSRRAlgnFltPrsnt( );
uint8 Get_RSRRDiagStatus_LR_RSRRInitDiagCmplt( );
uint8 Get_RSRRDiagStatus_LR_RSRRAmbTmpOutRngHi( );
uint8 Get_RSRRDiagStatus_LR_RSRRAmbTmpOutRngLw( );
uint8 Get_RSRRDiagStatus_LR_RSRRVltgOutRngHi( );
uint8 Get_RSRRDiagStatus_LR_RSRRVltgOutRngLo( );
uint8 Get_RSRRDiagStatus_LR_RSRRSnsrBlckd( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnYawLt( );
uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnYawRt( );
uint16 Get_R_SRR_Object_Header_LR_RSrrBurstChecksum( );
uint16 Get_R_SRR_Object_Track1_LR_RSrrTrkRange1( );
int16 Get_R_SRR_Object_Track1_LR_RSrrTrkRRate1( );
uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkObjElevation1( );
uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkDynamProp1( );
int16 Get_R_SRR_Object_Track1_LR_RSrrTrkAzimuth1( );
uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkObjID1( );
int8 Get_R_SRR_Object_Track1_LR_RSrrTrkObsRange1( );
uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkMeasStatus1( );
int8 Get_R_SRR_Object_Track1_LR_RSrrTrkRawAzimuth1( );
uint8 Get_R_SRR_Object_Track1_LR_RSrrBurstID1( );
uint16 Get_R_SRR_Object_Track2_LR_RSrrTrkRange2( );
int16 Get_R_SRR_Object_Track2_LR_RSrrTrkRRate2( );
uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkObjElevation2( );
uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkDynamProp2( );
int16 Get_R_SRR_Object_Track2_LR_RSrrTrkAzimuth2( );
uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkObjID2( );
int8 Get_R_SRR_Object_Track2_LR_RSrrTrkObsRange2( );
uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkMeasStatus2( );
int8 Get_R_SRR_Object_Track2_LR_RSrrTrkRawAzimuth2( );
uint8 Get_R_SRR_Object_Track2_LR_RSrrBurstID2( );
uint16 Get_R_SRR_Object_Track3_LR_RSrrTrkRange3( );
int16 Get_R_SRR_Object_Track3_LR_RSrrTrkRRate3( );
uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkObjElevation3( );
uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkDynamProp3( );
int16 Get_R_SRR_Object_Track3_LR_RSrrTrkAzimuth3( );
uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkObjID3( );
int8 Get_R_SRR_Object_Track3_LR_RSrrTrkObsRange3( );
uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkMeasStatus3( );
int8 Get_R_SRR_Object_Track3_LR_RSrrTrkRawAzimuth3( );
uint8 Get_R_SRR_Object_Track3_LR_RSrrBurstID3( );
uint16 Get_R_SRR_Object_Track4_LR_RSrrTrkRange4( );
int16 Get_R_SRR_Object_Track4_LR_RSrrTrkRRate4( );
uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkObjElevation4( );
uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkDynamProp4( );
int16 Get_R_SRR_Object_Track4_LR_RSrrTrkAzimuth4( );
uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkObjID4( );
int8 Get_R_SRR_Object_Track4_LR_RSrrTrkObsRange4( );
uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkMeasStatus4( );
int8 Get_R_SRR_Object_Track4_LR_RSrrTrkRawAzimuth4( );
uint8 Get_R_SRR_Object_Track4_LR_RSrrBurstID4( );
uint16 Get_R_SRR_Object_Track5_LR_RSrrTrkRange5( );
int16 Get_R_SRR_Object_Track5_LR_RSrrTrkRRate5( );
uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkObjElevation5( );
uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkDynamProp5( );
int16 Get_R_SRR_Object_Track5_LR_RSrrTrkAzimuth5( );
uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkObjID5( );
int8 Get_R_SRR_Object_Track5_LR_RSrrTrkObsRange5( );
uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkMeasStatus5( );
int8 Get_R_SRR_Object_Track5_LR_RSrrTrkRawAzimuth5( );
uint8 Get_R_SRR_Object_Track5_LR_RSrrBurstID5( );
uint16 Get_R_SRR_Object_Track6_LR_RSrrTrkRange6( );
int16 Get_R_SRR_Object_Track6_LR_RSrrTrkRRate6( );
uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkObjElevation6( );
uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkDynamProp6( );
int16 Get_R_SRR_Object_Track6_LR_RSrrTrkAzimuth6( );
uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkObjID6( );
int8 Get_R_SRR_Object_Track6_LR_RSrrTrkObsRange6( );
uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkMeasStatus6( );
int8 Get_R_SRR_Object_Track6_LR_RSrrTrkRawAzimuth6( );
uint8 Get_R_SRR_Object_Track6_LR_RSrrBurstID6( );
uint16 Get_R_SRR_Object_Track7_LR_RSrrTrkRange7( );
int16 Get_R_SRR_Object_Track7_LR_RSrrTrkRRate7( );
uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkObjElevation7( );
uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkDynamProp7( );
int16 Get_R_SRR_Object_Track7_LR_RSrrTrkAzimuth7( );
uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkObjID7( );
int8 Get_R_SRR_Object_Track7_LR_RSrrTrkObsRange7( );
uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkMeasStatus7( );
int8 Get_R_SRR_Object_Track7_LR_RSrrTrkRawAzimuth7( );
uint8 Get_R_SRR_Object_Track7_LR_RSrrBurstID7( );
uint16 Get_R_SRR_Object_Track8_LR_RSrrTrkRange8( );
int16 Get_R_SRR_Object_Track8_LR_RSrrTrkRRate8( );
uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkObjElevation8( );
uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkDynamProp8( );
int16 Get_R_SRR_Object_Track8_LR_RSrrTrkAzimuth8( );
uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkObjID8( );
int8 Get_R_SRR_Object_Track8_LR_RSrrTrkObsRange8( );
uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkMeasStatus8( );
int8 Get_R_SRR_Object_Track8_LR_RSrrTrkRawAzimuth8( );
uint8 Get_R_SRR_Object_Track8_LR_RSrrBurstID8( );
uint16 Get_R_SRR_Object_Track9_LR_RSrrTrkRange9( );
int16 Get_R_SRR_Object_Track9_LR_RSrrTrkRRate9( );
uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkObjElevation9( );
uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkDynamProp9( );
int16 Get_R_SRR_Object_Track9_LR_RSrrTrkAzimuth9( );
uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkObjID9( );
int8 Get_R_SRR_Object_Track9_LR_RSrrTrkObsRange9( );
uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkMeasStatus9( );
int8 Get_R_SRR_Object_Track9_LR_RSrrTrkRawAzimuth9( );
uint8 Get_R_SRR_Object_Track9_LR_RSrrBurstID9( );
uint16 Get_R_SRR_Object_Track10_LR_RSrrTrkRange10( );
int16 Get_R_SRR_Object_Track10_LR_RSrrTrkRRate10( );
uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkObjElevation10( );
uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkDynamProp10( );
int16 Get_R_SRR_Object_Track10_LR_RSrrTrkAzimuth10( );
uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkObjID10( );
int8 Get_R_SRR_Object_Track10_LR_RSrrTrkObsRange10( );
uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkMeasStatus10( );
int8 Get_R_SRR_Object_Track10_LR_RSrrTrkRawAzimuth10( );
uint8 Get_R_SRR_Object_Track10_LR_RSrrBurstID10( );
uint16 Get_ESR_Status1_CAN_TX_DSP_TIMESTAMP( );
uint8 Get_ESR_Status1_CAN_TX_ROLLING_COUNT_1_flag( );
int16 Get_ESR_Status1_CAN_TX_RADIUS_CURVATURE_CALC( );
uint8 Get_ESR_Status1_CAN_TX_COMM_ERROR( );
uint16 Get_ESR_Status1_CAN_TX_SCAN_INDEX( );
int16 Get_ESR_Status1_CAN_TX_YAW_RATE_CALC( );
uint16 Get_ESR_Status1_CAN_TX_VEHICLE_SPEED_CALC( );
uint8 Get_ESR_Status2_CAN_TX_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_Status2_CAN_TX_MAXIMUM_TRACKS_ACK( );
uint16 Get_ESR_Status2_CAN_TX_STEERING_ANGLE_ACK( );
uint8 Get_ESR_Status2_CAN_TX_RAW_DATA_MODE( );
uint8 Get_ESR_Status2_CAN_TX_XCVR_OPERATIONAL( );
uint8 Get_ESR_Status2_CAN_TX_INTERNAL_ERROR( );
uint8 Get_ESR_Status2_CAN_TX_RANGE_PERF_ERROR( );
uint8 Get_ESR_Status2_CAN_TX_OVERHEAT_ERROR( );
int8 Get_ESR_Status2_CAN_TX_TEMPERATURE( );
uint8 Get_ESR_Status2_CAN_TX_GROUPING_MODE( );
int8 Get_ESR_Status2_CAN_TX_VEH_SPD_COMP_FACTOR( );
int8 Get_ESR_Status2_CAN_TX_YAW_RATE_BIAS( );
uint16 Get_ESR_Status2_CAN_TX_SW_VERSION_DSP( );
uint8 Get_ESR_Status3_CAN_TX_HW_VERSION( );
uint8 Get_ESR_Status3_CAN_TX_INTERFACE_VERSION( );
uint32 Get_ESR_Status3_CAN_TX_SW_VERSION_HOST( );
uint32 Get_ESR_Status3_CAN_TX_SERIAL_NUM( );
uint8 Get_ESR_Status3_CAN_TX_SW_VERSION_PLD( );
uint8 Get_ESR_Status4_CAN_TX_ROLLING_COUNT_3_flag( );
uint8 Get_ESR_Status4_CAN_TX_MR_LR_MODE( );
uint8 Get_ESR_Status4_CAN_TX_PARTIAL_BLOCKAGE( );
uint8 Get_ESR_Status4_CAN_TX_SIDELOBE_BLOCKAGE( );
uint8 Get_ESR_Status4_CAN_TX_LR_ONLY_GRATING_LOBE_DET( );
uint8 Get_ESR_Status4_CAN_TX_TRUCK_TARGET_DET( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_ACC( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_CMBB_MOVE( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_CMBB_STAT( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_FCW_MOVE( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_FCW_STAT( );
int8 Get_ESR_Status4_CAN_TX_AUTO_ALIGN_ANGLE( );
uint8 Get_ESR_Status4_CAN_TX_PATH_ID_ACC_STAT( );
uint16 Get_Vehicle1_CAN_RX_VEHICLE_SPEED( );
int16 Get_Vehicle1_CAN_RX_YAW_RATE( );
uint8 Get_Vehicle1_CAN_RX_VEHICLE_SPEED_DIRECTION( );
int16 Get_Vehicle1_CAN_RX_RADIUS_CURVATURE( );
uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_RATE_SIGN( );
uint8 Get_Vehicle1_CAN_RX_YAW_RATE_VALIDITY( );
uint16 Get_Vehicle1_CAN_RX_STEERING_ANGLE( );
uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_SIGN( );
uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_VALIDITY( );
uint16 Get_Vehicle1_CAN_RX_STEERING_ANGLE_RATE( );
uint16 Get_Vehicle2_CAN_RX_SCAN_INDEX_ACK( );
int8 Get_Vehicle2_CAN_RX_HIGH_YAW_ANGLE( );
uint8 Get_Vehicle2_CAN_RX_CLEAR_FAULTS( );
uint8 Get_Vehicle2_CAN_RX_USE_ANGLE_MISALIGNMENT( );
uint8 Get_Vehicle2_CAN_RX_LR_ONLY_TRANSMIT( );
uint8 Get_Vehicle2_CAN_RX_MR_ONLY_TRANSMIT( );
int8 Get_Vehicle2_CAN_RX_VOLVO_SHORT_TRACK_ROC( );
int8 Get_Vehicle2_CAN_RX_ANGLE_MISALIGNMENT( );
int8 Get_Vehicle2_CAN_RX_LATERAL_MOUNTING_OFFSET( );
uint8 Get_Vehicle2_CAN_RX_MAXIMUM_TRACKS( );
uint8 Get_Vehicle2_CAN_RX_BLOCKAGE_DISABLE( );
uint8 Get_Vehicle2_CAN_RX_RADAR_CMD_RADIATE( );
uint8 Get_Vehicle2_CAN_RX_RAW_DATA_ENABLE( );
uint8 Get_Vehicle2_CAN_RX_WIPER_STATUS( );
uint8 Get_Vehicle2_CAN_RX_GROUPING_MODE( );
uint8 Get_Vehicle2_CAN_RX_MMR_UPSIDE_DOWN( );
uint8 Get_Vehicle2_CAN_RX_VEHICLE_SPEED_VALIDITY( );
uint8 Get_Vehicle2_CAN_RX_TURN_SIGNAL_STATUS( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track01_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track01_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track01_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track01_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track01_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track01_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track02_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track02_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track02_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track02_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track02_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track02_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track03_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track03_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track03_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track03_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track03_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track03_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track04_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track04_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track04_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track04_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track04_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track04_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track05_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track05_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track05_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track05_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track05_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track05_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track06_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track06_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track06_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track06_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track06_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track06_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track07_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track07_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track07_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track07_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track07_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track07_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track08_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track08_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track08_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track08_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track08_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track08_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track09_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track09_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track09_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track09_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track09_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track09_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track10_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track10_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track10_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track10_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track10_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track10_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track11_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track11_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track11_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track11_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track11_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track11_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track12_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track12_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track12_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track12_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track12_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track12_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track13_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track13_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track13_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track13_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track13_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track13_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track14_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track14_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track14_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track14_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track14_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track14_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track15_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track15_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track15_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track15_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track15_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track15_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track16_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track16_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track16_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track16_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track16_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track16_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track17_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track17_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track17_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track17_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track17_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track17_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track18_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track18_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track18_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track18_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track18_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track18_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track19_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track19_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track19_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track19_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track19_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track19_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track20_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track20_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track20_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track20_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track20_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track20_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track21_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track21_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track21_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track21_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track21_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track21_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track22_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track22_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track22_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track22_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track22_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track22_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track23_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track23_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track23_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track23_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track23_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track23_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track24_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track24_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track24_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track24_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track24_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track24_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track25_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track25_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track25_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track25_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track25_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track25_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track26_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track26_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track26_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track26_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track26_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track26_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track27_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track27_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track27_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track27_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track27_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track27_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track28_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track28_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track28_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track28_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track28_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track28_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track29_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track29_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track29_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track29_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track29_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track29_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track30_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track30_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track30_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track30_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track30_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track30_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track31_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track31_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track31_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track31_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track31_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track31_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track32_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track32_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track32_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track32_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track32_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track32_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track33_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track33_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track33_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track33_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track33_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track33_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track34_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track34_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track34_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track34_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track34_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track34_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track35_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track35_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track35_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track35_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track35_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track35_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track36_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track36_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track36_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track36_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track36_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track36_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track37_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track37_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track37_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track37_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track37_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track37_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track38_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track38_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track38_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track38_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track38_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track38_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track39_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track39_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track39_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track39_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track39_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track39_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track40_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track40_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track40_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track40_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track40_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track40_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track41_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track41_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track41_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track41_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track41_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track41_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track42_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track42_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track42_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track42_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track42_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track42_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track43_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track43_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track43_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track43_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track43_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track43_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track44_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track44_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track44_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track44_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track44_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track44_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track45_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track45_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track45_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track45_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track45_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track45_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track46_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track46_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track46_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track46_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track46_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track46_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track47_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track47_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track47_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track47_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track47_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track47_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track48_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track48_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track48_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track48_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track48_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track48_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track49_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track49_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track49_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track49_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track49_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track49_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track50_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track50_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track50_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track50_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track50_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track50_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track51_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track51_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track51_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track51_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track51_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track51_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track52_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track52_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track52_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track52_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track52_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track52_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track53_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track53_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track53_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track53_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track53_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track53_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track54_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track54_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track54_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track54_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track54_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track54_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track55_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track55_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track55_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track55_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track55_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track55_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track56_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track56_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track56_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track56_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track56_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track56_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track57_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track57_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track57_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track57_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track57_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track57_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track58_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track58_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track58_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track58_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track58_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track58_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track59_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track59_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track59_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track59_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track59_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track59_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track60_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track60_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track60_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track60_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track60_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track60_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track61_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track61_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track61_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track61_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track61_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track61_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track62_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track62_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track62_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track62_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track62_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track62_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track63_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track63_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track63_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track63_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track63_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track63_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_ONCOMING( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_GROUPING_CHANGED( );
int8 Get_ESR_Track64_CAN_TX_TRACK_LAT_RATE( );
int16 Get_ESR_Track64_CAN_TX_TRACK_ANGLE( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_STATUS( );
uint16 Get_ESR_Track64_CAN_TX_TRACK_RANGE( );
int16 Get_ESR_Track64_CAN_TX_TRACK_RANGE_ACCEL( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_WIDTH( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_ROLLING_COUNT( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_BRIDGE_OBJECT( );
int16 Get_ESR_Track64_CAN_TX_TRACK_RANGE_RATE( );
uint8 Get_ESR_Track64_CAN_TX_TRACK_MED_RANGE_MODE( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER01_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING01_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW01_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST01_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER02_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING02_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW02_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST02_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER03_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING03_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW03_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST03_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER04_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING04_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW04_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST04_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER05_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING05_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW05_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST05_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER06_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING06_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW06_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST06_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER07_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING07_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW07_m0( );
uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST07_m0( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER08_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING08_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW08_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST08_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER09_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING09_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW09_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST09_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER10_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING10_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW10_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST10_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER11_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING11_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW11_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST11_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER12_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING12_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW12_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST12_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER13_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING13_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW13_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST13_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER14_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING14_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW14_m1( );
uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST14_m1( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER15_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING15_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW15_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST15_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER16_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING16_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW16_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST16_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER17_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING17_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW17_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST17_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER18_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING18_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW18_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST18_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER19_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING19_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW19_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST19_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER20_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING20_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW20_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST20_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER21_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING21_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW21_m2( );
uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST21_m2( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER22_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING22_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW22_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST22_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER23_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING23_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW23_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST23_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER24_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING24_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW24_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST24_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER25_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING25_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW25_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST25_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER26_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING26_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW26_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST26_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER27_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING27_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW27_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST27_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER28_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING28_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW28_m3( );
uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST28_m3( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER29_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING29_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW29_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST29_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER30_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING30_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW30_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST30_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER31_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING31_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW31_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST31_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER32_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING32_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW32_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST32_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER33_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING33_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW33_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST33_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER34_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING34_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW34_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST34_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER35_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING35_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW35_m4( );
uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST35_m4( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER36_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING36_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW36_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST36_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER37_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING37_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW37_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST37_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER38_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING38_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW38_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST38_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER39_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING39_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW39_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST39_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER40_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING40_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW40_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST40_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER41_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING41_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW41_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST41_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER42_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING42_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW42_m5( );
uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST42_m5( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER43_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING43_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW43_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST43_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER44_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING44_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW44_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST44_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER45_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING45_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW45_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST45_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER46_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING46_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW46_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST46_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER47_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING47_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW47_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST47_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER48_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING48_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW48_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST48_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER49_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING49_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW49_m6( );
uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST49_m6( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER50_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING50_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW50_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST50_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER51_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING51_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW51_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST51_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER52_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING52_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW52_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST52_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER53_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING53_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW53_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST53_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER54_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING54_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW54_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST54_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER55_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING55_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW55_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST55_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER56_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING56_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW56_m7( );
uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST56_m7( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER57_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING57_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW57_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST57_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER58_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING58_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW58_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST58_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER59_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING59_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW59_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST59_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER60_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING60_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW60_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST60_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER61_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING61_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW61_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST61_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER62_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING62_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW62_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST62_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER63_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING63_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW63_m8( );
uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST63_m8( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_CAN_ID_GROUP( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_ROLLING_COUNT_2_flag( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_POWER64_m9( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVING64_m9( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_SLOW64_m9( );
uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_FAST64_m9( );
uint8 Get_ESR_Sim1_CAN_RX_SIM_FUNCTION( );
uint8 Get_ESR_Sim1_CAN_RX_SIM_STATUS( );
uint8 Get_ESR_Sim1_CAN_RX_SIM_TRACK_ID( );
int8 Get_ESR_Sim1_CAN_RX_SIM_ANGLE( );
int8 Get_ESR_Sim1_CAN_RX_SIM_LAT_POS( );
int8 Get_ESR_Sim1_CAN_RX_SIM_LAT_RATE( );
uint8 Get_ESR_Sim1_CAN_RX_SIM_RANGE( );
int8 Get_ESR_Sim1_CAN_RX_SIM_RANGE_ACCEL( );
int8 Get_ESR_Sim1_CAN_RX_SIM_RANGE_RATE( );
uint8 Get_ESR_Valid1_CAN_TX_VALID_LR_SN( );
uint16 Get_ESR_Valid1_CAN_TX_VALID_LR_RANGE( );
int16 Get_ESR_Valid1_CAN_TX_VALID_LR_RANGE_RATE( );
int16 Get_ESR_Valid1_CAN_TX_VALID_LR_ANGLE( );
int8 Get_ESR_Valid1_CAN_TX_VALID_LR_POWER( );
uint8 Get_ESR_Valid2_CAN_TX_VALID_MR_SN( );
uint16 Get_ESR_Valid2_CAN_TX_VALID_MR_RANGE( );
int16 Get_ESR_Valid2_CAN_TX_VALID_MR_RANGE_RATE( );
int16 Get_ESR_Valid2_CAN_TX_VALID_MR_ANGLE( );
int8 Get_ESR_Valid2_CAN_TX_VALID_MR_POWER( );
uint8 Get_ESR_Status5_CAN_TX_SWBATT_A2D( );
uint8 Get_ESR_Status5_CAN_TX_IGNP_A2D( );
uint8 Get_ESR_Status5_CAN_TX_TEMP1_A2D( );
uint8 Get_ESR_Status5_CAN_TX_TEMP2_A2D( );
uint8 Get_ESR_Status5_CAN_TX_SUPPLY_5VA_A2D( );
uint8 Get_ESR_Status5_CAN_TX_SUPPLY_5VDX_A2D( );
uint8 Get_ESR_Status5_CAN_TX_SUPPLY_3P3V_A2D( );
uint8 Get_ESR_Status5_CAN_TX_SUPPLY_10V_A2D( );
uint8 Get_ESR_Status6_CAN_TX_SUPPLY_1P8V_A2D( );
uint8 Get_ESR_Status6_CAN_TX_SUPPLY_N5V_A2D( );
uint8 Get_ESR_Status6_CAN_TX_WAVE_DIFF_A2D( );
uint8 Get_ESR_Status6_CAN_TX_SYSTEM_POWER_MODE( );
uint8 Get_ESR_Status6_CAN_TX_VERTICAL_ALIGN_UPDATED( );
uint8 Get_ESR_Status6_CAN_TX_SW_VERSION_DSP_3RD_BYTE( );
uint8 Get_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_2_flag( );
uint8 Get_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_1_flag( );
uint8 Get_ESR_Status6_CAN_TX_RECOMMEND_UNCONVERGE( );
uint8 Get_ESR_Status6_CAN_TX_FOUND_TARGET( );
int8 Get_ESR_Status6_CAN_TX_FACTORY_MISALIGNMENT( );
uint8 Get_ESR_Status6_CAN_TX_SERV_ALIGN_UPDATES_DONE( );
int8 Get_ESR_Status6_CAN_TX_VERTICAL_MISALIGNMENT( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_0_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_1_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_2_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_3_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_4_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_5_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_6_flag( );
uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_7_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_0_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_1_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_2_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_3_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_4_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_5_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_6_flag( );
uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_7_flag( );
uint16 Get_ESR_Status9_CAN_TX_AVG_PWR_CWBLKG( );
int16 Get_ESR_Status9_CAN_TX_SIDESLIP_ANGLE( );
uint8 Get_ESR_Status9_CAN_TX_SERIAL_NUM_3RD_BYTE( );
int16 Get_ESR_Status9_CAN_TX_FILTERED_XOHP_ACC_CIPV( );
uint8 Get_ESR_Status9_CAN_TX_WATER_SPRAY_TARGET_ID( );
uint8 Get_ESR_Status9_CAN_TX_PATH_ID_ACC_2_flag( );
uint8 Get_ESR_Status9_CAN_TX_PATH_ID_ACC_3_flag( );
int16 Get_Vehicle3_CAN_RX_LAT_ACCEL( );
uint8 Get_Vehicle3_CAN_RX_LAT_ACCEL_VALIDITY( );
uint8 Get_Vehicle3_CAN_RX_LONG_ACCEL_VALIDITY( );
int16 Get_Vehicle3_CAN_RX_LONG_ACCEL( );
uint16 Get_Vehicle3_CAN_RX_RADAR_FOV_LR( );
uint8 Get_Vehicle3_CAN_RX_RADAR_FOV_MR( );
uint8 Get_Vehicle3_CAN_RX_RADAR_HEIGHT( );
uint8 Get_Vehicle3_CAN_RX_AUTO_ALIGN_DISABLE( );
uint8 Get_Vehicle3_CAN_RX_WHEEL_SLIP( );
uint8 Get_Vehicle3_CAN_RX_AUTO_ALIGN_CONVERGED( );
uint8 Get_Vehicle3_CAN_RX_AALIGN_AVG_CTR_TOTAL( );
uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_ENABLE( );
uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_TYPE( );
uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_UPDATES_NEED( );
int8 Get_Vehicle3_CAN_RX_ANGLE_MOUNTING_OFFSET( );
uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_MAX_NT( );
uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_CMD_2_flag( );
uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_SAMP_REQ( );
uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_CMD_1_flag( );
int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_OFFSET( );
int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_HOR( );
int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_VER( );
uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_1_flag( );
uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_R2M( );
uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_M2T( );
int8 Get_Vehicle5_CAN_RX_OVERSTEER_UNDERSTEER( );
uint8 Get_Vehicle5_CAN_RX_BEAMWIDTH_VERT( );
uint8 Get_Vehicle5_CAN_RX_YAW_RATE_BIAS_SHIFT( );
int8 Get_Vehicle5_CAN_RX_FUNNEL_OFFSET_LEFT( );
int8 Get_Vehicle5_CAN_RX_FUNNEL_OFFSET_RIGHT( );
uint8 Get_Vehicle5_CAN_RX_CW_BLOCKAGE_THRESHOLD( );
uint8 Get_Vehicle5_CAN_RX_DISTANCE_REAR_AXLE( );
uint8 Get_Vehicle5_CAN_RX_WHEELBASE( );
uint8 Get_Vehicle5_CAN_RX_STEERING_GEAR_RATIO( );
uint8 Get_Vehicle6_CAN_VOLVO_FA_MIN_VSPEED_SHORT( );
uint8 Get_Vehicle6_CAN_VOLVO_FA_AALIGN_ESTIMATE( );
uint8 Get_Vehicle6_CAN_VOLVO_FA_RANGE_MAX_SHORT( );
int8 Get_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_LEFT( );
int8 Get_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_RIGHT( );
uint8 Get_ACM_Inst_Req_command_code( );
uint8 Get_ACM_Inst_Req_command_ctr( );
uint8 Get_ACM_Inst_Req_cc_byte_1_flag( );
uint8 Get_ACM_Inst_Req_cc_byte_2_flag( );
uint16 Get_ACM_Inst_Req_cc_word_1_flag( );
uint16 Get_ACM_Inst_Req_cc_word_2_flag( );
uint8 Get_ACM_Inst_Resp_PID( );
uint8 Get_ACM_Inst_Resp_command_return_code( );
uint8 Get_ACM_Inst_Resp_rtn_cmd_counter( );
uint8 Get_ACM_Inst_Resp_Data_3_flag( );
uint8 Get_ACM_Inst_Resp_Data_4_flag( );
uint8 Get_ACM_Inst_Resp_Data_5_flag( );
uint8 Get_ACM_Inst_Resp_Data_6_flag( );
uint8 Get_ACM_Inst_Resp_Data_7_flag( );


void Put_F_Master_Time_Sync_LR_FTimeSyncMstrClock(uint32 sigData);
void Put_F_Master_Time_Sync_LR_FTimeSyncMstrChksm(uint16 sigData);
void Put_F_Master_Time_Sync_LR_FTimeSyncMstrClockV(uint8 sigData);
void Put_F_Master_Time_Sync_LR_SensorModeCmdLRR(uint8 sigData);
void Put_F_Master_Time_Sync_LR_SensorModeCmdSRR(uint8 sigData);
void Put_F_Master_Time_Sync_LR_SensorModeCmdFCamera(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_CurvatureV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfstV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_RollingCount(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfst(int8 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLatOfst(int16 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_Curvature(int16 sigData);
void Put_F_Vehicle_Path_Estimate_LR_Vpath_Checksum(uint16 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVelV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRateV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2TravlDirctn(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVel(int16 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRate(int16 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVel(int8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath2_Checksum(uint16 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2ModeInfo(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2RollCnt(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVelV(uint8 sigData);
void Put_Body_Info_FOB_LR_HighBmAct(uint8 sigData);
void Put_Body_Info_FOB_LR_LowBmAct(uint8 sigData);
void Put_Body_Info_FOB_LR_WSWprAct(uint8 sigData);
void Put_Body_Info_FOB_LR_LftLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_LR_RtLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStatV(uint8 sigData);
void Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStat(uint8 sigData);
void Put_Body_Info_FOB_LR_SysPwrMdV(uint8 sigData);
void Put_Body_Info_FOB_LR_SysPwrMd(uint8 sigData);
void Put_Body_Info_FOB_LR_WSWshSwAtv(uint8 sigData);
void Put_Body_Info_FOB_LR_TrStLgMdAtv(uint8 sigData);
void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn3(uint8 sigData);
void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn2(uint8 sigData);
void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn1(uint8 sigData);
void Put_Body_Info_FOB_LR_DrDoorOpenSwActV(uint8 sigData);
void Put_Body_Info_FOB_LR_DrDoorOpenSwAct(uint8 sigData);
void Put_Body_Info_FOB_LR_StrgColCommsFlt(uint8 sigData);
void Put_Body_Info_FOB_LR_DrvWndPosStat(uint8 sigData);
void Put_Body_Info_FOB_LR_InterLghtStat(uint8 sigData);
void Put_Body_Info_FOB_LR_StrgColInOutPos(uint8 sigData);
void Put_Body_Info_FOB_LR_StrgColUpDwnPos(uint8 sigData);
void Put_Body_Info_FOB_LR_CPMAPINFO4(uint8 sigData);
void Put_R_SRR_Object_Header_LR_RSrrRollingCnt(uint8 sigData);
void Put_R_SRR_Object_Header_LR_RSRRModeCmdFdbk(uint8 sigData);
void Put_R_SRR_Object_Header_LR_RSrrTimeStamp(uint16 sigData);
void Put_R_SRR_Object_Header_LR_RSRRNumValidTargets(uint8 sigData);
void Put_R_SRR_Object_Header_LR_RSrrTimeStampV(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRSnstvFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRHWFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRAntTngFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRCANIDAddrsUnsbl(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRCANRxErr(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRCANSgnlSpvFld(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRDiagSpare(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnPtchUp(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnPtchDn(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnRllLt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnRllRt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRExtIntrfrnc(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRPlntAlgnInProc(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRSvcAlgnInPrcs(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRAlgnFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRInitDiagCmplt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRAmbTmpOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRAmbTmpOutRngLw(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRVltgOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRVltgOutRngLo(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRSnsrBlckd(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnYawLt(uint8 sigData);
void Put_RSRRDiagStatus_LR_RSRRMsalgnYawRt(uint8 sigData);
void Put_R_SRR_Object_Header_LR_RSrrBurstChecksum(uint16 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkRange1(uint16 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkRRate1(int16 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkObjElevation1(uint8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkDynamProp1(uint8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkAzimuth1(int16 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkObjID1(uint8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkObsRange1(int8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkMeasStatus1(uint8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrTrkRawAzimuth1(int8 sigData);
void Put_R_SRR_Object_Track1_LR_RSrrBurstID1(uint8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkRange2(uint16 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkRRate2(int16 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkObjElevation2(uint8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkDynamProp2(uint8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkAzimuth2(int16 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkObjID2(uint8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkObsRange2(int8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkMeasStatus2(uint8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrTrkRawAzimuth2(int8 sigData);
void Put_R_SRR_Object_Track2_LR_RSrrBurstID2(uint8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkRange3(uint16 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkRRate3(int16 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkObjElevation3(uint8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkDynamProp3(uint8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkAzimuth3(int16 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkObjID3(uint8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkObsRange3(int8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkMeasStatus3(uint8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrTrkRawAzimuth3(int8 sigData);
void Put_R_SRR_Object_Track3_LR_RSrrBurstID3(uint8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkRange4(uint16 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkRRate4(int16 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkObjElevation4(uint8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkDynamProp4(uint8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkAzimuth4(int16 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkObjID4(uint8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkObsRange4(int8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkMeasStatus4(uint8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrTrkRawAzimuth4(int8 sigData);
void Put_R_SRR_Object_Track4_LR_RSrrBurstID4(uint8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkRange5(uint16 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkRRate5(int16 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkObjElevation5(uint8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkDynamProp5(uint8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkAzimuth5(int16 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkObjID5(uint8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkObsRange5(int8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkMeasStatus5(uint8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrTrkRawAzimuth5(int8 sigData);
void Put_R_SRR_Object_Track5_LR_RSrrBurstID5(uint8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkRange6(uint16 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkRRate6(int16 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkObjElevation6(uint8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkDynamProp6(uint8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkAzimuth6(int16 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkObjID6(uint8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkObsRange6(int8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkMeasStatus6(uint8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrTrkRawAzimuth6(int8 sigData);
void Put_R_SRR_Object_Track6_LR_RSrrBurstID6(uint8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkRange7(uint16 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkRRate7(int16 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkObjElevation7(uint8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkDynamProp7(uint8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkAzimuth7(int16 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkObjID7(uint8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkObsRange7(int8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkMeasStatus7(uint8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrTrkRawAzimuth7(int8 sigData);
void Put_R_SRR_Object_Track7_LR_RSrrBurstID7(uint8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkRange8(uint16 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkRRate8(int16 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkObjElevation8(uint8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkDynamProp8(uint8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkAzimuth8(int16 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkObjID8(uint8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkObsRange8(int8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkMeasStatus8(uint8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrTrkRawAzimuth8(int8 sigData);
void Put_R_SRR_Object_Track8_LR_RSrrBurstID8(uint8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkRange9(uint16 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkRRate9(int16 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkObjElevation9(uint8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkDynamProp9(uint8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkAzimuth9(int16 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkObjID9(uint8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkObsRange9(int8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkMeasStatus9(uint8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrTrkRawAzimuth9(int8 sigData);
void Put_R_SRR_Object_Track9_LR_RSrrBurstID9(uint8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkRange10(uint16 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkRRate10(int16 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkObjElevation10(uint8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkDynamProp10(uint8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkAzimuth10(int16 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkObjID10(uint8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkObsRange10(int8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkMeasStatus10(uint8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrTrkRawAzimuth10(int8 sigData);
void Put_R_SRR_Object_Track10_LR_RSrrBurstID10(uint8 sigData);
void Put_ESR_Status1_CAN_TX_DSP_TIMESTAMP(uint16 sigData);
void Put_ESR_Status1_CAN_TX_ROLLING_COUNT_1_flag(uint8 sigData);
void Put_ESR_Status1_CAN_TX_RADIUS_CURVATURE_CALC(int16 sigData);
void Put_ESR_Status1_CAN_TX_COMM_ERROR(uint8 sigData);
void Put_ESR_Status1_CAN_TX_SCAN_INDEX(uint16 sigData);
void Put_ESR_Status1_CAN_TX_YAW_RATE_CALC(int16 sigData);
void Put_ESR_Status1_CAN_TX_VEHICLE_SPEED_CALC(uint16 sigData);
void Put_ESR_Status2_CAN_TX_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_Status2_CAN_TX_MAXIMUM_TRACKS_ACK(uint8 sigData);
void Put_ESR_Status2_CAN_TX_STEERING_ANGLE_ACK(uint16 sigData);
void Put_ESR_Status2_CAN_TX_RAW_DATA_MODE(uint8 sigData);
void Put_ESR_Status2_CAN_TX_XCVR_OPERATIONAL(uint8 sigData);
void Put_ESR_Status2_CAN_TX_INTERNAL_ERROR(uint8 sigData);
void Put_ESR_Status2_CAN_TX_RANGE_PERF_ERROR(uint8 sigData);
void Put_ESR_Status2_CAN_TX_OVERHEAT_ERROR(uint8 sigData);
void Put_ESR_Status2_CAN_TX_TEMPERATURE(int8 sigData);
void Put_ESR_Status2_CAN_TX_GROUPING_MODE(uint8 sigData);
void Put_ESR_Status2_CAN_TX_VEH_SPD_COMP_FACTOR(int8 sigData);
void Put_ESR_Status2_CAN_TX_YAW_RATE_BIAS(int8 sigData);
void Put_ESR_Status2_CAN_TX_SW_VERSION_DSP(uint16 sigData);
void Put_ESR_Status3_CAN_TX_HW_VERSION(uint8 sigData);
void Put_ESR_Status3_CAN_TX_INTERFACE_VERSION(uint8 sigData);
void Put_ESR_Status3_CAN_TX_SW_VERSION_HOST(uint32 sigData);
void Put_ESR_Status3_CAN_TX_SERIAL_NUM(uint32 sigData);
void Put_ESR_Status3_CAN_TX_SW_VERSION_PLD(uint8 sigData);
void Put_ESR_Status4_CAN_TX_ROLLING_COUNT_3_flag(uint8 sigData);
void Put_ESR_Status4_CAN_TX_MR_LR_MODE(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PARTIAL_BLOCKAGE(uint8 sigData);
void Put_ESR_Status4_CAN_TX_SIDELOBE_BLOCKAGE(uint8 sigData);
void Put_ESR_Status4_CAN_TX_LR_ONLY_GRATING_LOBE_DET(uint8 sigData);
void Put_ESR_Status4_CAN_TX_TRUCK_TARGET_DET(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_ACC(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_CMBB_MOVE(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_CMBB_STAT(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_FCW_MOVE(uint8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_FCW_STAT(uint8 sigData);
void Put_ESR_Status4_CAN_TX_AUTO_ALIGN_ANGLE(int8 sigData);
void Put_ESR_Status4_CAN_TX_PATH_ID_ACC_STAT(uint8 sigData);
void Put_Vehicle1_CAN_RX_VEHICLE_SPEED(uint16 sigData);
void Put_Vehicle1_CAN_RX_YAW_RATE(int16 sigData);
void Put_Vehicle1_CAN_RX_VEHICLE_SPEED_DIRECTION(uint8 sigData);
void Put_Vehicle1_CAN_RX_RADIUS_CURVATURE(int16 sigData);
void Put_Vehicle1_CAN_RX_STEERING_ANGLE_RATE_SIGN(uint8 sigData);
void Put_Vehicle1_CAN_RX_YAW_RATE_VALIDITY(uint8 sigData);
void Put_Vehicle1_CAN_RX_STEERING_ANGLE(uint16 sigData);
void Put_Vehicle1_CAN_RX_STEERING_ANGLE_SIGN(uint8 sigData);
void Put_Vehicle1_CAN_RX_STEERING_ANGLE_VALIDITY(uint8 sigData);
void Put_Vehicle1_CAN_RX_STEERING_ANGLE_RATE(uint16 sigData);
void Put_Vehicle2_CAN_RX_SCAN_INDEX_ACK(uint16 sigData);
void Put_Vehicle2_CAN_RX_HIGH_YAW_ANGLE(int8 sigData);
void Put_Vehicle2_CAN_RX_CLEAR_FAULTS(uint8 sigData);
void Put_Vehicle2_CAN_RX_USE_ANGLE_MISALIGNMENT(uint8 sigData);
void Put_Vehicle2_CAN_RX_LR_ONLY_TRANSMIT(uint8 sigData);
void Put_Vehicle2_CAN_RX_MR_ONLY_TRANSMIT(uint8 sigData);
void Put_Vehicle2_CAN_RX_VOLVO_SHORT_TRACK_ROC(int8 sigData);
void Put_Vehicle2_CAN_RX_ANGLE_MISALIGNMENT(int8 sigData);
void Put_Vehicle2_CAN_RX_LATERAL_MOUNTING_OFFSET(int8 sigData);
void Put_Vehicle2_CAN_RX_MAXIMUM_TRACKS(uint8 sigData);
void Put_Vehicle2_CAN_RX_BLOCKAGE_DISABLE(uint8 sigData);
void Put_Vehicle2_CAN_RX_RADAR_CMD_RADIATE(uint8 sigData);
void Put_Vehicle2_CAN_RX_RAW_DATA_ENABLE(uint8 sigData);
void Put_Vehicle2_CAN_RX_WIPER_STATUS(uint8 sigData);
void Put_Vehicle2_CAN_RX_GROUPING_MODE(uint8 sigData);
void Put_Vehicle2_CAN_RX_MMR_UPSIDE_DOWN(uint8 sigData);
void Put_Vehicle2_CAN_RX_VEHICLE_SPEED_VALIDITY(uint8 sigData);
void Put_Vehicle2_CAN_RX_TURN_SIGNAL_STATUS(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track01_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track02_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track03_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track04_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track05_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track06_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track07_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track08_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track09_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track10_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track11_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track12_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track13_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track14_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track15_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track16_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track17_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track18_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track19_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track20_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track21_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track22_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track23_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track24_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track25_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track26_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track27_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track28_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track29_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track30_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track31_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track32_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track33_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track34_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track35_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track36_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track37_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track38_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track39_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track40_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track41_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track42_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track43_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track44_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track45_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track46_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track47_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track48_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track49_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track50_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track51_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track52_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track53_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track54_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track55_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track56_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track57_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track58_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track59_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track60_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track61_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track62_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track63_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_ONCOMING(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_LAT_RATE(int8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_ANGLE(int16 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_STATUS(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_RANGE(uint16 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_WIDTH(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_RANGE_RATE(int16 sigData);
void Put_ESR_Track64_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER01_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING01_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW01_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST01_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER02_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING02_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW02_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST02_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER03_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING03_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW03_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST03_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER04_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING04_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW04_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST04_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER05_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING05_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW05_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST05_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER06_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING06_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW06_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST06_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER07_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING07_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW07_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST07_m0(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER08_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING08_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW08_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST08_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER09_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING09_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW09_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST09_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER10_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING10_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW10_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST10_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER11_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING11_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW11_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST11_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER12_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING12_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW12_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST12_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER13_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING13_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW13_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST13_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER14_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING14_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW14_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST14_m1(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER15_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING15_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW15_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST15_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER16_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING16_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW16_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST16_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER17_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING17_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW17_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST17_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER18_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING18_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW18_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST18_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER19_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING19_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW19_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST19_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER20_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING20_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW20_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST20_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER21_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING21_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW21_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST21_m2(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER22_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING22_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW22_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST22_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER23_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING23_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW23_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST23_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER24_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING24_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW24_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST24_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER25_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING25_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW25_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST25_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER26_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING26_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW26_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST26_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER27_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING27_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW27_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST27_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER28_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING28_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW28_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST28_m3(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER29_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING29_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW29_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST29_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER30_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING30_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW30_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST30_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER31_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING31_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW31_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST31_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER32_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING32_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW32_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST32_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER33_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING33_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW33_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST33_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER34_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING34_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW34_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST34_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER35_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING35_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW35_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST35_m4(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER36_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING36_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW36_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST36_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER37_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING37_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW37_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST37_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER38_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING38_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW38_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST38_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER39_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING39_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW39_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST39_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER40_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING40_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW40_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST40_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER41_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING41_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW41_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST41_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER42_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING42_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW42_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST42_m5(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER43_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING43_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW43_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST43_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER44_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING44_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW44_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST44_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER45_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING45_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW45_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST45_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER46_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING46_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW46_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST46_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER47_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING47_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW47_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST47_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER48_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING48_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW48_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST48_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER49_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING49_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW49_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST49_m6(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER50_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING50_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW50_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST50_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER51_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING51_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW51_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST51_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER52_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING52_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW52_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST52_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER53_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING53_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW53_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST53_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER54_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING54_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW54_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST54_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER55_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING55_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW55_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST55_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER56_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING56_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW56_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST56_m7(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER57_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING57_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW57_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST57_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER58_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING58_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW58_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST58_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER59_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING59_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW59_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST59_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER60_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING60_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW60_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST60_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER61_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING61_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW61_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST61_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER62_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING62_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW62_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST62_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER63_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING63_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW63_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST63_m8(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_POWER64_m9(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVING64_m9(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_SLOW64_m9(uint8 sigData);
void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_FAST64_m9(uint8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_FUNCTION(uint8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_STATUS(uint8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_TRACK_ID(uint8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_ANGLE(int8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_LAT_POS(int8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_LAT_RATE(int8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_RANGE(uint8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_RANGE_ACCEL(int8 sigData);
void Put_ESR_Sim1_CAN_RX_SIM_RANGE_RATE(int8 sigData);
void Put_ESR_Valid1_CAN_TX_VALID_LR_SN(uint8 sigData);
void Put_ESR_Valid1_CAN_TX_VALID_LR_RANGE(uint16 sigData);
void Put_ESR_Valid1_CAN_TX_VALID_LR_RANGE_RATE(int16 sigData);
void Put_ESR_Valid1_CAN_TX_VALID_LR_ANGLE(int16 sigData);
void Put_ESR_Valid1_CAN_TX_VALID_LR_POWER(int8 sigData);
void Put_ESR_Valid2_CAN_TX_VALID_MR_SN(uint8 sigData);
void Put_ESR_Valid2_CAN_TX_VALID_MR_RANGE(uint16 sigData);
void Put_ESR_Valid2_CAN_TX_VALID_MR_RANGE_RATE(int16 sigData);
void Put_ESR_Valid2_CAN_TX_VALID_MR_ANGLE(int16 sigData);
void Put_ESR_Valid2_CAN_TX_VALID_MR_POWER(int8 sigData);
void Put_ESR_Status5_CAN_TX_SWBATT_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_IGNP_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_TEMP1_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_TEMP2_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_SUPPLY_5VA_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_SUPPLY_5VDX_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_SUPPLY_3P3V_A2D(uint8 sigData);
void Put_ESR_Status5_CAN_TX_SUPPLY_10V_A2D(uint8 sigData);
void Put_ESR_Status6_CAN_TX_SUPPLY_1P8V_A2D(uint8 sigData);
void Put_ESR_Status6_CAN_TX_SUPPLY_N5V_A2D(uint8 sigData);
void Put_ESR_Status6_CAN_TX_WAVE_DIFF_A2D(uint8 sigData);
void Put_ESR_Status6_CAN_TX_SYSTEM_POWER_MODE(uint8 sigData);
void Put_ESR_Status6_CAN_TX_VERTICAL_ALIGN_UPDATED(uint8 sigData);
void Put_ESR_Status6_CAN_TX_SW_VERSION_DSP_3RD_BYTE(uint8 sigData);
void Put_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_2_flag(uint8 sigData);
void Put_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_1_flag(uint8 sigData);
void Put_ESR_Status6_CAN_TX_RECOMMEND_UNCONVERGE(uint8 sigData);
void Put_ESR_Status6_CAN_TX_FOUND_TARGET(uint8 sigData);
void Put_ESR_Status6_CAN_TX_FACTORY_MISALIGNMENT(int8 sigData);
void Put_ESR_Status6_CAN_TX_SERV_ALIGN_UPDATES_DONE(uint8 sigData);
void Put_ESR_Status6_CAN_TX_VERTICAL_MISALIGNMENT(int8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_0_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_1_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_2_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_3_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_4_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_5_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_6_flag(uint8 sigData);
void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_7_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_0_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_1_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_2_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_3_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_4_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_5_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_6_flag(uint8 sigData);
void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_7_flag(uint8 sigData);
void Put_ESR_Status9_CAN_TX_AVG_PWR_CWBLKG(uint16 sigData);
void Put_ESR_Status9_CAN_TX_SIDESLIP_ANGLE(int16 sigData);
void Put_ESR_Status9_CAN_TX_SERIAL_NUM_3RD_BYTE(uint8 sigData);
void Put_ESR_Status9_CAN_TX_FILTERED_XOHP_ACC_CIPV(int16 sigData);
void Put_ESR_Status9_CAN_TX_WATER_SPRAY_TARGET_ID(uint8 sigData);
void Put_ESR_Status9_CAN_TX_PATH_ID_ACC_2_flag(uint8 sigData);
void Put_ESR_Status9_CAN_TX_PATH_ID_ACC_3_flag(uint8 sigData);
void Put_Vehicle3_CAN_RX_LAT_ACCEL(int16 sigData);
void Put_Vehicle3_CAN_RX_LAT_ACCEL_VALIDITY(uint8 sigData);
void Put_Vehicle3_CAN_RX_LONG_ACCEL_VALIDITY(uint8 sigData);
void Put_Vehicle3_CAN_RX_LONG_ACCEL(int16 sigData);
void Put_Vehicle3_CAN_RX_RADAR_FOV_LR(uint16 sigData);
void Put_Vehicle3_CAN_RX_RADAR_FOV_MR(uint8 sigData);
void Put_Vehicle3_CAN_RX_RADAR_HEIGHT(uint8 sigData);
void Put_Vehicle3_CAN_RX_AUTO_ALIGN_DISABLE(uint8 sigData);
void Put_Vehicle3_CAN_RX_WHEEL_SLIP(uint8 sigData);
void Put_Vehicle3_CAN_RX_AUTO_ALIGN_CONVERGED(uint8 sigData);
void Put_Vehicle3_CAN_RX_AALIGN_AVG_CTR_TOTAL(uint8 sigData);
void Put_Vehicle3_CAN_RX_SERV_ALIGN_ENABLE(uint8 sigData);
void Put_Vehicle3_CAN_RX_SERV_ALIGN_TYPE(uint8 sigData);
void Put_Vehicle3_CAN_RX_SERV_ALIGN_UPDATES_NEED(uint8 sigData);
void Put_Vehicle3_CAN_RX_ANGLE_MOUNTING_OFFSET(int8 sigData);
void Put_Vehicle4_CAN_RX_FAC_ALIGN_MAX_NT(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_ALIGN_CMD_2_flag(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_ALIGN_SAMP_REQ(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_ALIGN_CMD_1_flag(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_OFFSET(int8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_HOR(int8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_VER(int8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_1_flag(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_R2M(uint8 sigData);
void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_M2T(uint8 sigData);
void Put_Vehicle5_CAN_RX_OVERSTEER_UNDERSTEER(int8 sigData);
void Put_Vehicle5_CAN_RX_BEAMWIDTH_VERT(uint8 sigData);
void Put_Vehicle5_CAN_RX_YAW_RATE_BIAS_SHIFT(uint8 sigData);
void Put_Vehicle5_CAN_RX_FUNNEL_OFFSET_LEFT(int8 sigData);
void Put_Vehicle5_CAN_RX_FUNNEL_OFFSET_RIGHT(int8 sigData);
void Put_Vehicle5_CAN_RX_CW_BLOCKAGE_THRESHOLD(uint8 sigData);
void Put_Vehicle5_CAN_RX_DISTANCE_REAR_AXLE(uint8 sigData);
void Put_Vehicle5_CAN_RX_WHEELBASE(uint8 sigData);
void Put_Vehicle5_CAN_RX_STEERING_GEAR_RATIO(uint8 sigData);
void Put_Vehicle6_CAN_VOLVO_FA_MIN_VSPEED_SHORT(uint8 sigData);
void Put_Vehicle6_CAN_VOLVO_FA_AALIGN_ESTIMATE(uint8 sigData);
void Put_Vehicle6_CAN_VOLVO_FA_RANGE_MAX_SHORT(uint8 sigData);
void Put_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_LEFT(int8 sigData);
void Put_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_RIGHT(int8 sigData);
void Put_ACM_Inst_Req_command_code(uint8 sigData);
void Put_ACM_Inst_Req_command_ctr(uint8 sigData);
void Put_ACM_Inst_Req_cc_byte_1_flag(uint8 sigData);
void Put_ACM_Inst_Req_cc_byte_2_flag(uint8 sigData);
void Put_ACM_Inst_Req_cc_word_1_flag(uint16 sigData);
void Put_ACM_Inst_Req_cc_word_2_flag(uint16 sigData);
void Put_ACM_Inst_Resp_PID(uint8 sigData);
void Put_ACM_Inst_Resp_command_return_code(uint8 sigData);
void Put_ACM_Inst_Resp_rtn_cmd_counter(uint8 sigData);
void Put_ACM_Inst_Resp_Data_3_flag(uint8 sigData);
void Put_ACM_Inst_Resp_Data_4_flag(uint8 sigData);
void Put_ACM_Inst_Resp_Data_5_flag(uint8 sigData);
void Put_ACM_Inst_Resp_Data_6_flag(uint8 sigData);
void Put_ACM_Inst_Resp_Data_7_flag(uint8 sigData);
#endif
