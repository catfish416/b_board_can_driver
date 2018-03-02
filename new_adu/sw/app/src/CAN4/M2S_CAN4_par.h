#ifndef _M2S_CAN4_PAR_H
#define _M2S_CAN4_PAR_H

#include "resue.h"

typedef struct Body_Info_FOB_LFTag
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
} Body_Info_FOB_LF;
typedef struct F_Vehicle_Path_Data_2_LFTag
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
} F_Vehicle_Path_Data_2_LF;
typedef struct F_Master_Time_Sync_LFTag
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
} F_Master_Time_Sync_LF;
typedef struct F_Vehicle_Path_Estimate_LFTag
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
} F_Vehicle_Path_Estimate_LF;
typedef struct R_SRR_Object_Header_LFTag
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
} R_SRR_Object_Header_LF;
typedef struct R_SRR_Object_Track1_LFTag
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
} R_SRR_Object_Track1_LF;
typedef struct R_SRR_Object_Track2_LFTag
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
} R_SRR_Object_Track2_LF;
typedef struct R_SRR_Object_Track3_LFTag
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
} R_SRR_Object_Track3_LF;
typedef struct R_SRR_Object_Track4_LFTag
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
} R_SRR_Object_Track4_LF;
typedef struct R_SRR_Object_Track5_LFTag
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
} R_SRR_Object_Track5_LF;
typedef struct R_SRR_Object_Track6_LFTag
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
} R_SRR_Object_Track6_LF;
typedef struct R_SRR_Object_Track7_LFTag
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
} R_SRR_Object_Track7_LF;
typedef struct R_SRR_Object_Track8_LFTag
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
} R_SRR_Object_Track8_LF;
typedef struct R_SRR_Object_Track9_LFTag
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
} R_SRR_Object_Track9_LF;
typedef struct R_SRR_Object_Track10_LFTag
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
} R_SRR_Object_Track10_LF;


union Body_Info_FOB_LFUon
{
   uint8 Body_Info_FOB_LF_Buffer[6];
   Body_Info_FOB_LF Body_Info_FOB_LF_Layout;
}Body_Info_FOB_LF_u;

union F_Vehicle_Path_Data_2_LFUon
{
   uint8 F_Vehicle_Path_Data_2_LF_Buffer[7];
   F_Vehicle_Path_Data_2_LF F_Vehicle_Path_Data_2_LF_Layout;
}F_Vehicle_Path_Data_2_LF_u;

union F_Master_Time_Sync_LFUon
{
   uint8 F_Master_Time_Sync_LF_Buffer[7];
   F_Master_Time_Sync_LF F_Master_Time_Sync_LF_Layout;
}F_Master_Time_Sync_LF_u;

union F_Vehicle_Path_Estimate_LFUon
{
   uint8 F_Vehicle_Path_Estimate_LF_Buffer[8];
   F_Vehicle_Path_Estimate_LF F_Vehicle_Path_Estimate_LF_Layout;
}F_Vehicle_Path_Estimate_LF_u;

union R_SRR_Object_Header_LFUon
{
   uint8 R_SRR_Object_Header_LF_Buffer[8];
   R_SRR_Object_Header_LF R_SRR_Object_Header_LF_Layout;
}R_SRR_Object_Header_LF_u,RSRRDiagStatus_LF_u;

union R_SRR_Object_Track1_LFUon
{
   uint8 R_SRR_Object_Track1_LF_Buffer[8];
   R_SRR_Object_Track1_LF R_SRR_Object_Track1_LF_Layout;
}R_SRR_Object_Track1_LF_u;

union R_SRR_Object_Track2_LFUon
{
   uint8 R_SRR_Object_Track2_LF_Buffer[8];
   R_SRR_Object_Track2_LF R_SRR_Object_Track2_LF_Layout;
}R_SRR_Object_Track2_LF_u;

union R_SRR_Object_Track3_LFUon
{
   uint8 R_SRR_Object_Track3_LF_Buffer[8];
   R_SRR_Object_Track3_LF R_SRR_Object_Track3_LF_Layout;
}R_SRR_Object_Track3_LF_u;

union R_SRR_Object_Track4_LFUon
{
   uint8 R_SRR_Object_Track4_LF_Buffer[8];
   R_SRR_Object_Track4_LF R_SRR_Object_Track4_LF_Layout;
}R_SRR_Object_Track4_LF_u;

union R_SRR_Object_Track5_LFUon
{
   uint8 R_SRR_Object_Track5_LF_Buffer[8];
   R_SRR_Object_Track5_LF R_SRR_Object_Track5_LF_Layout;
}R_SRR_Object_Track5_LF_u;

union R_SRR_Object_Track6_LFUon
{
   uint8 R_SRR_Object_Track6_LF_Buffer[8];
   R_SRR_Object_Track6_LF R_SRR_Object_Track6_LF_Layout;
}R_SRR_Object_Track6_LF_u;

union R_SRR_Object_Track7_LFUon
{
   uint8 R_SRR_Object_Track7_LF_Buffer[8];
   R_SRR_Object_Track7_LF R_SRR_Object_Track7_LF_Layout;
}R_SRR_Object_Track7_LF_u;

union R_SRR_Object_Track8_LFUon
{
   uint8 R_SRR_Object_Track8_LF_Buffer[8];
   R_SRR_Object_Track8_LF R_SRR_Object_Track8_LF_Layout;
}R_SRR_Object_Track8_LF_u;

union R_SRR_Object_Track9_LFUon
{
   uint8 R_SRR_Object_Track9_LF_Buffer[8];
   R_SRR_Object_Track9_LF R_SRR_Object_Track9_LF_Layout;
}R_SRR_Object_Track9_LF_u;

union R_SRR_Object_Track10_LFUon
{
   uint8 R_SRR_Object_Track10_LF_Buffer[8];
   R_SRR_Object_Track10_LF R_SRR_Object_Track10_LF_Layout;
}R_SRR_Object_Track10_LF_u;


uint8 Get_Body_Info_FOB_LF_HighBmAct( );
uint8 Get_Body_Info_FOB_LF_LowBmAct( );
uint8 Get_Body_Info_FOB_LF_WSWprAct( );
uint8 Get_Body_Info_FOB_LF_LftLwBmFld( );
uint8 Get_Body_Info_FOB_LF_RtLwBmFld( );
uint8 Get_Body_Info_FOB_LF_OtsdAmbtLtLvlStatV( );
uint8 Get_Body_Info_FOB_LF_OtsdAmbtLtLvlStat( );
uint8 Get_Body_Info_FOB_LF_SysPwrMdV( );
uint8 Get_Body_Info_FOB_LF_SysPwrMd( );
uint8 Get_Body_Info_FOB_LF_WSWshSwAtv( );
uint8 Get_Body_Info_FOB_LF_TrStLgMdAtv( );
uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn3( );
uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn2( );
uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn1( );
uint8 Get_Body_Info_FOB_LF_DrDoorOpenSwActV( );
uint8 Get_Body_Info_FOB_LF_DrDoorOpenSwAct( );
uint8 Get_Body_Info_FOB_LF_StrgColCommsFlt( );
uint8 Get_Body_Info_FOB_LF_DrvWndPosStat( );
uint8 Get_Body_Info_FOB_LF_InterLghtStat( );
uint8 Get_Body_Info_FOB_LF_StrgColInOutPos( );
uint8 Get_Body_Info_FOB_LF_StrgColUpDwnPos( );
uint8 Get_Body_Info_FOB_LF_CPMAPINFO4( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVelV( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRateV( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2TravlDirctn( );
int16 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVel( );
int16 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRate( );
int8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVel( );
uint16 Get_F_Vehicle_Path_Data_2_LF_Vpath2_Checksum( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2ModeInfo( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2RollCnt( );
uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVelV( );
uint32 Get_F_Master_Time_Sync_LF_FTimeSyncMstrClock( );
uint16 Get_F_Master_Time_Sync_LF_FTimeSyncMstrChksm( );
uint8 Get_F_Master_Time_Sync_LF_FTimeSyncMstrClockV( );
uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdLRR( );
uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdSRR( );
uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdFCamera( );
uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_CurvatureV( );
uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfstV( );
uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_RollingCount( );
int8 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfst( );
int16 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLatOfst( );
int16 Get_F_Vehicle_Path_Estimate_LF_Vpath_Curvature( );
uint16 Get_F_Vehicle_Path_Estimate_LF_Vpath_Checksum( );
uint8 Get_R_SRR_Object_Header_LF_RSrrRollingCnt( );
uint8 Get_R_SRR_Object_Header_LF_RSRRModeCmdFdbk( );
uint16 Get_R_SRR_Object_Header_LF_RSrrTimeStamp( );
uint8 Get_R_SRR_Object_Header_LF_RSRRNumValidTargets( );
uint8 Get_R_SRR_Object_Header_LF_RSrrTimeStampV( );
uint8 Get_RSRRDiagStatus_LF_RSRRSnstvFltPrsntInt( );
uint8 Get_RSRRDiagStatus_LF_RSRRHWFltPrsntInt( );
uint8 Get_RSRRDiagStatus_LF_RSRRAntTngFltPrsnt( );
uint8 Get_RSRRDiagStatus_LF_RSRRCANIDAddrsUnsbl( );
uint8 Get_RSRRDiagStatus_LF_RSRRCANRxErr( );
uint8 Get_RSRRDiagStatus_LF_RSRRCANSgnlSpvFld( );
uint8 Get_RSRRDiagStatus_LF_RSRRDiagSpare( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnPtchUp( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnPtchDn( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnRllLt( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnRllRt( );
uint8 Get_RSRRDiagStatus_LF_RSRRExtIntrfrnc( );
uint8 Get_RSRRDiagStatus_LF_RSRRPlntAlgnInProc( );
uint8 Get_RSRRDiagStatus_LF_RSRRSvcAlgnInPrcs( );
uint8 Get_RSRRDiagStatus_LF_RSRRAlgnFltPrsnt( );
uint8 Get_RSRRDiagStatus_LF_RSRRInitDiagCmplt( );
uint8 Get_RSRRDiagStatus_LF_RSRRAmbTmpOutRngHi( );
uint8 Get_RSRRDiagStatus_LF_RSRRAmbTmpOutRngLw( );
uint8 Get_RSRRDiagStatus_LF_RSRRVltgOutRngHi( );
uint8 Get_RSRRDiagStatus_LF_RSRRVltgOutRngLo( );
uint8 Get_RSRRDiagStatus_LF_RSRRSnsrBlckd( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnYawLt( );
uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnYawRt( );
uint16 Get_R_SRR_Object_Header_LF_RSrrBurstChecksum( );
uint16 Get_R_SRR_Object_Track1_LF_RSrrTrkRange1( );
int16 Get_R_SRR_Object_Track1_LF_RSrrTrkRRate1( );
uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkObjElevation1( );
uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkDynamProp1( );
int16 Get_R_SRR_Object_Track1_LF_RSrrTrkAzimuth1( );
uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkObjID1( );
int8 Get_R_SRR_Object_Track1_LF_RSrrTrkObsRange1( );
uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkMeasStatus1( );
int8 Get_R_SRR_Object_Track1_LF_RSrrTrkRawAzimuth1( );
uint8 Get_R_SRR_Object_Track1_LF_RSrrBurstID1( );
uint16 Get_R_SRR_Object_Track2_LF_RSrrTrkRange2( );
int16 Get_R_SRR_Object_Track2_LF_RSrrTrkRRate2( );
uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkObjElevation2( );
uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkDynamProp2( );
int16 Get_R_SRR_Object_Track2_LF_RSrrTrkAzimuth2( );
uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkObjID2( );
int8 Get_R_SRR_Object_Track2_LF_RSrrTrkObsRange2( );
uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkMeasStatus2( );
int8 Get_R_SRR_Object_Track2_LF_RSrrTrkRawAzimuth2( );
uint8 Get_R_SRR_Object_Track2_LF_RSrrBurstID2( );
uint16 Get_R_SRR_Object_Track3_LF_RSrrTrkRange3( );
int16 Get_R_SRR_Object_Track3_LF_RSrrTrkRRate3( );
uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkObjElevation3( );
uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkDynamProp3( );
int16 Get_R_SRR_Object_Track3_LF_RSrrTrkAzimuth3( );
uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkObjID3( );
int8 Get_R_SRR_Object_Track3_LF_RSrrTrkObsRange3( );
uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkMeasStatus3( );
int8 Get_R_SRR_Object_Track3_LF_RSrrTrkRawAzimuth3( );
uint8 Get_R_SRR_Object_Track3_LF_RSrrBurstID3( );
uint16 Get_R_SRR_Object_Track4_LF_RSrrTrkRange4( );
int16 Get_R_SRR_Object_Track4_LF_RSrrTrkRRate4( );
uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkObjElevation4( );
uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkDynamProp4( );
int16 Get_R_SRR_Object_Track4_LF_RSrrTrkAzimuth4( );
uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkObjID4( );
int8 Get_R_SRR_Object_Track4_LF_RSrrTrkObsRange4( );
uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkMeasStatus4( );
int8 Get_R_SRR_Object_Track4_LF_RSrrTrkRawAzimuth4( );
uint8 Get_R_SRR_Object_Track4_LF_RSrrBurstID4( );
uint16 Get_R_SRR_Object_Track5_LF_RSrrTrkRange5( );
int16 Get_R_SRR_Object_Track5_LF_RSrrTrkRRate5( );
uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkObjElevation5( );
uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkDynamProp5( );
int16 Get_R_SRR_Object_Track5_LF_RSrrTrkAzimuth5( );
uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkObjID5( );
int8 Get_R_SRR_Object_Track5_LF_RSrrTrkObsRange5( );
uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkMeasStatus5( );
int8 Get_R_SRR_Object_Track5_LF_RSrrTrkRawAzimuth5( );
uint8 Get_R_SRR_Object_Track5_LF_RSrrBurstID5( );
uint16 Get_R_SRR_Object_Track6_LF_RSrrTrkRange6( );
int16 Get_R_SRR_Object_Track6_LF_RSrrTrkRRate6( );
uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkObjElevation6( );
uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkDynamProp6( );
int16 Get_R_SRR_Object_Track6_LF_RSrrTrkAzimuth6( );
uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkObjID6( );
int8 Get_R_SRR_Object_Track6_LF_RSrrTrkObsRange6( );
uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkMeasStatus6( );
int8 Get_R_SRR_Object_Track6_LF_RSrrTrkRawAzimuth6( );
uint8 Get_R_SRR_Object_Track6_LF_RSrrBurstID6( );
uint16 Get_R_SRR_Object_Track7_LF_RSrrTrkRange7( );
int16 Get_R_SRR_Object_Track7_LF_RSrrTrkRRate7( );
uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkObjElevation7( );
uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkDynamProp7( );
int16 Get_R_SRR_Object_Track7_LF_RSrrTrkAzimuth7( );
uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkObjID7( );
int8 Get_R_SRR_Object_Track7_LF_RSrrTrkObsRange7( );
uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkMeasStatus7( );
int8 Get_R_SRR_Object_Track7_LF_RSrrTrkRawAzimuth7( );
uint8 Get_R_SRR_Object_Track7_LF_RSrrBurstID7( );
uint16 Get_R_SRR_Object_Track8_LF_RSrrTrkRange8( );
int16 Get_R_SRR_Object_Track8_LF_RSrrTrkRRate8( );
uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkObjElevation8( );
uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkDynamProp8( );
int16 Get_R_SRR_Object_Track8_LF_RSrrTrkAzimuth8( );
uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkObjID8( );
int8 Get_R_SRR_Object_Track8_LF_RSrrTrkObsRange8( );
uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkMeasStatus8( );
int8 Get_R_SRR_Object_Track8_LF_RSrrTrkRawAzimuth8( );
uint8 Get_R_SRR_Object_Track8_LF_RSrrBurstID8( );
uint16 Get_R_SRR_Object_Track9_LF_RSrrTrkRange9( );
int16 Get_R_SRR_Object_Track9_LF_RSrrTrkRRate9( );
uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkObjElevation9( );
uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkDynamProp9( );
int16 Get_R_SRR_Object_Track9_LF_RSrrTrkAzimuth9( );
uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkObjID9( );
int8 Get_R_SRR_Object_Track9_LF_RSrrTrkObsRange9( );
uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkMeasStatus9( );
int8 Get_R_SRR_Object_Track9_LF_RSrrTrkRawAzimuth9( );
uint8 Get_R_SRR_Object_Track9_LF_RSrrBurstID9( );
uint16 Get_R_SRR_Object_Track10_LF_RSrrTrkRange10( );
int16 Get_R_SRR_Object_Track10_LF_RSrrTrkRRate10( );
uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkObjElevation10( );
uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkDynamProp10( );
int16 Get_R_SRR_Object_Track10_LF_RSrrTrkAzimuth10( );
uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkObjID10( );
int8 Get_R_SRR_Object_Track10_LF_RSrrTrkObsRange10( );
uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkMeasStatus10( );
int8 Get_R_SRR_Object_Track10_LF_RSrrTrkRawAzimuth10( );
uint8 Get_R_SRR_Object_Track10_LF_RSrrBurstID10( );


void Put_Body_Info_FOB_LF_HighBmAct(uint8 sigData);
void Put_Body_Info_FOB_LF_LowBmAct(uint8 sigData);
void Put_Body_Info_FOB_LF_WSWprAct(uint8 sigData);
void Put_Body_Info_FOB_LF_LftLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_LF_RtLwBmFld(uint8 sigData);
void Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStatV(uint8 sigData);
void Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStat(uint8 sigData);
void Put_Body_Info_FOB_LF_SysPwrMdV(uint8 sigData);
void Put_Body_Info_FOB_LF_SysPwrMd(uint8 sigData);
void Put_Body_Info_FOB_LF_WSWshSwAtv(uint8 sigData);
void Put_Body_Info_FOB_LF_TrStLgMdAtv(uint8 sigData);
void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn3(uint8 sigData);
void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn2(uint8 sigData);
void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn1(uint8 sigData);
void Put_Body_Info_FOB_LF_DrDoorOpenSwActV(uint8 sigData);
void Put_Body_Info_FOB_LF_DrDoorOpenSwAct(uint8 sigData);
void Put_Body_Info_FOB_LF_StrgColCommsFlt(uint8 sigData);
void Put_Body_Info_FOB_LF_DrvWndPosStat(uint8 sigData);
void Put_Body_Info_FOB_LF_InterLghtStat(uint8 sigData);
void Put_Body_Info_FOB_LF_StrgColInOutPos(uint8 sigData);
void Put_Body_Info_FOB_LF_StrgColUpDwnPos(uint8 sigData);
void Put_Body_Info_FOB_LF_CPMAPINFO4(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVelV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRateV(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2TravlDirctn(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVel(int16 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRate(int16 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVel(int8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath2_Checksum(uint16 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2ModeInfo(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2RollCnt(uint8 sigData);
void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVelV(uint8 sigData);
void Put_F_Master_Time_Sync_LF_FTimeSyncMstrClock(uint32 sigData);
void Put_F_Master_Time_Sync_LF_FTimeSyncMstrChksm(uint16 sigData);
void Put_F_Master_Time_Sync_LF_FTimeSyncMstrClockV(uint8 sigData);
void Put_F_Master_Time_Sync_LF_SensorModeCmdLRR(uint8 sigData);
void Put_F_Master_Time_Sync_LF_SensorModeCmdSRR(uint8 sigData);
void Put_F_Master_Time_Sync_LF_SensorModeCmdFCamera(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_CurvatureV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfstV(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_RollingCount(uint8 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfst(int8 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLatOfst(int16 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_Curvature(int16 sigData);
void Put_F_Vehicle_Path_Estimate_LF_Vpath_Checksum(uint16 sigData);
void Put_R_SRR_Object_Header_LF_RSrrRollingCnt(uint8 sigData);
void Put_R_SRR_Object_Header_LF_RSRRModeCmdFdbk(uint8 sigData);
void Put_R_SRR_Object_Header_LF_RSrrTimeStamp(uint16 sigData);
void Put_R_SRR_Object_Header_LF_RSRRNumValidTargets(uint8 sigData);
void Put_R_SRR_Object_Header_LF_RSrrTimeStampV(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRSnstvFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRHWFltPrsntInt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRAntTngFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRCANIDAddrsUnsbl(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRCANRxErr(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRCANSgnlSpvFld(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRDiagSpare(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnPtchUp(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnPtchDn(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnRllLt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnRllRt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRExtIntrfrnc(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRPlntAlgnInProc(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRSvcAlgnInPrcs(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRAlgnFltPrsnt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRInitDiagCmplt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRAmbTmpOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRAmbTmpOutRngLw(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRVltgOutRngHi(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRVltgOutRngLo(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRSnsrBlckd(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnYawLt(uint8 sigData);
void Put_RSRRDiagStatus_LF_RSRRMsalgnYawRt(uint8 sigData);
void Put_R_SRR_Object_Header_LF_RSrrBurstChecksum(uint16 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkRange1(uint16 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkRRate1(int16 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkObjElevation1(uint8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkDynamProp1(uint8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkAzimuth1(int16 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkObjID1(uint8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkObsRange1(int8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkMeasStatus1(uint8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrTrkRawAzimuth1(int8 sigData);
void Put_R_SRR_Object_Track1_LF_RSrrBurstID1(uint8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkRange2(uint16 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkRRate2(int16 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkObjElevation2(uint8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkDynamProp2(uint8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkAzimuth2(int16 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkObjID2(uint8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkObsRange2(int8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkMeasStatus2(uint8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrTrkRawAzimuth2(int8 sigData);
void Put_R_SRR_Object_Track2_LF_RSrrBurstID2(uint8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkRange3(uint16 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkRRate3(int16 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkObjElevation3(uint8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkDynamProp3(uint8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkAzimuth3(int16 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkObjID3(uint8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkObsRange3(int8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkMeasStatus3(uint8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrTrkRawAzimuth3(int8 sigData);
void Put_R_SRR_Object_Track3_LF_RSrrBurstID3(uint8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkRange4(uint16 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkRRate4(int16 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkObjElevation4(uint8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkDynamProp4(uint8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkAzimuth4(int16 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkObjID4(uint8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkObsRange4(int8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkMeasStatus4(uint8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrTrkRawAzimuth4(int8 sigData);
void Put_R_SRR_Object_Track4_LF_RSrrBurstID4(uint8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkRange5(uint16 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkRRate5(int16 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkObjElevation5(uint8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkDynamProp5(uint8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkAzimuth5(int16 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkObjID5(uint8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkObsRange5(int8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkMeasStatus5(uint8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrTrkRawAzimuth5(int8 sigData);
void Put_R_SRR_Object_Track5_LF_RSrrBurstID5(uint8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkRange6(uint16 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkRRate6(int16 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkObjElevation6(uint8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkDynamProp6(uint8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkAzimuth6(int16 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkObjID6(uint8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkObsRange6(int8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkMeasStatus6(uint8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrTrkRawAzimuth6(int8 sigData);
void Put_R_SRR_Object_Track6_LF_RSrrBurstID6(uint8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkRange7(uint16 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkRRate7(int16 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkObjElevation7(uint8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkDynamProp7(uint8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkAzimuth7(int16 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkObjID7(uint8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkObsRange7(int8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkMeasStatus7(uint8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrTrkRawAzimuth7(int8 sigData);
void Put_R_SRR_Object_Track7_LF_RSrrBurstID7(uint8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkRange8(uint16 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkRRate8(int16 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkObjElevation8(uint8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkDynamProp8(uint8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkAzimuth8(int16 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkObjID8(uint8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkObsRange8(int8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkMeasStatus8(uint8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrTrkRawAzimuth8(int8 sigData);
void Put_R_SRR_Object_Track8_LF_RSrrBurstID8(uint8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkRange9(uint16 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkRRate9(int16 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkObjElevation9(uint8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkDynamProp9(uint8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkAzimuth9(int16 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkObjID9(uint8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkObsRange9(int8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkMeasStatus9(uint8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrTrkRawAzimuth9(int8 sigData);
void Put_R_SRR_Object_Track9_LF_RSrrBurstID9(uint8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkRange10(uint16 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkRRate10(int16 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkObjElevation10(uint8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkDynamProp10(uint8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkAzimuth10(int16 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkObjID10(uint8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkObsRange10(int8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkMeasStatus10(uint8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrTrkRawAzimuth10(int8 sigData);
void Put_R_SRR_Object_Track10_LF_RSrrBurstID10(uint8 sigData);
#endif
