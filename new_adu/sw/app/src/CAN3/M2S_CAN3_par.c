
#include "M2S_CAN3_par.h"
void Update_RSRRDiagStatus_RF_ShadowBuffer()
{
   memcpy(RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Buffer,R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Buffer,8);
}

uint32 Get_F_Master_Time_Sync_RF_FTimeSyncMstrClock( )
{
    uint32 rc;
    rc=((uint32)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_0)<<24
    |((uint32)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_1)<<16
    |((uint32)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_2)<<8
    |((uint32)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_3);
    return rc;
}

uint16 Get_F_Master_Time_Sync_RF_FTimeSyncMstrChksm( )
{
    uint16 rc;
    rc=((uint16)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrChksm_0)<<8
    |((uint16)F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrChksm_1);
    return rc;
}

uint8 Get_F_Master_Time_Sync_RF_FTimeSyncMstrClockV( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClockV;
    return rc;
}

uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdLRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdLRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdSRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdSRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_RF_SensorModeCmdFCamera( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdFCamera;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_CurvatureV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_CurvatureV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfstV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLngOfstV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_RF_Vpath_RollingCount( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_RollingCount;
    return rc;
}

int8 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfst( )
{
    int8 rc;
    rc=F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLngOfst;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLatOfst( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLatOfst_0)<<8
    |((int16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLatOfst_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_RF_Vpath_Curvature( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Curvature_0)<<8
    |((int16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Curvature_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Estimate_RF_Vpath_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Checksum_1);
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVelV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRateV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRateV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2TravlDirctn( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2TravlDirctn;
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVel( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVel_0)<<4
    |((int16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVel_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRate( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRate_0)<<8
    |((int16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRate_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-4)-1<<(sizeof(rc)*8)-(8-4));
    }
    return rc;
}

int8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVel( )
{
    int8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LatVel;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Data_2_RF_Vpath2_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath2_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath2_Checksum_1);
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2ModeInfo( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2ModeInfo;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2RollCnt( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2RollCnt;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LatVelV;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_HighBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.HighBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_LowBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.LowBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_WSWprAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.WSWprAct;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_LftLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.LftLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_RtLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.RtLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_OtsdAmbtLtLvlStatV( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.OtsdAmbtLtLvlStatV;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_OtsdAmbtLtLvlStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.OtsdAmbtLtLvlStat;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_SysPwrMdV( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.SysPwrMdV;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_SysPwrMd( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.SysPwrMd;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_WSWshSwAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.WSWshSwAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_TrStLgMdAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.TrStLgMdAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn3( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn3;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn2( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn2;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrvrHndsOnWhlZn1( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn1;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrDoorOpenSwActV( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrDoorOpenSwActV;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrDoorOpenSwAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrDoorOpenSwAct;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_StrgColCommsFlt( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColCommsFlt;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_DrvWndPosStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvWndPosStat;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_InterLghtStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.InterLghtStat;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_StrgColInOutPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColInOutPos;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_StrgColUpDwnPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColUpDwnPos;
    return rc;
}

uint8 Get_Body_Info_FOB_RF_CPMAPINFO4( )
{
    uint8 rc;
    rc=Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.CPMAPINFO4;
    return rc;
}

uint8 Get_R_SRR_Object_Header_RF_RSrrRollingCnt( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrRollingCnt;
    return rc;
}

uint8 Get_R_SRR_Object_Header_RF_RSRRModeCmdFdbk( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSRRModeCmdFdbk;
    return rc;
}

uint16 Get_R_SRR_Object_Header_RF_RSrrTimeStamp( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStamp_0)<<8
    |((uint16)R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStamp_1);
    return rc;
}

uint8 Get_R_SRR_Object_Header_RF_RSRRNumValidTargets( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSRRNumValidTargets;
    return rc;
}

uint8 Get_R_SRR_Object_Header_RF_RSrrTimeStampV( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStampV;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRSnstvFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSnstvFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRHWFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRHWFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRAntTngFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAntTngFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRCANIDAddrsUnsbl( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANIDAddrsUnsbl;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRCANRxErr( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANRxErr;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRCANSgnlSpvFld( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANSgnlSpvFld;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRDiagSpare( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRDiagSpare;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnPtchUp( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnPtchUp;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnPtchDn( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnPtchDn;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnRllLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnRllLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnRllRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnRllRt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRExtIntrfrnc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRExtIntrfrnc;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRPlntAlgnInProc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRPlntAlgnInProc;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRSvcAlgnInPrcs( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSvcAlgnInPrcs;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRAlgnFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAlgnFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRInitDiagCmplt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRInitDiagCmplt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRAmbTmpOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAmbTmpOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRAmbTmpOutRngLw( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAmbTmpOutRngLw;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRVltgOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRVltgOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRVltgOutRngLo( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRVltgOutRngLo;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRSnsrBlckd( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSnsrBlckd;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnYawLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnYawLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_RF_RSRRMsalgnYawRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnYawRt;
    return rc;
}

uint16 Get_R_SRR_Object_Header_RF_RSrrBurstChecksum( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrBurstChecksum_0)<<8
    |((uint16)R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrBurstChecksum_1);
    return rc;
}

uint16 Get_R_SRR_Object_Track1_RF_RSrrTrkRange1( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRange1_0)<<8
    |((uint16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRange1_1);
    return rc;
}

int16 Get_R_SRR_Object_Track1_RF_RSrrTrkRRate1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRRate1_0)<<8
    |((int16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRRate1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkObjElevation1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObjElevation1;
    return rc;
}

uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkDynamProp1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkDynamProp1;
    return rc;
}

int16 Get_R_SRR_Object_Track1_RF_RSrrTrkAzimuth1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkAzimuth1_0)<<8
    |((int16)R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkAzimuth1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkObjID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObjID1;
    return rc;
}

int8 Get_R_SRR_Object_Track1_RF_RSrrTrkObsRange1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObsRange1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_RF_RSrrTrkMeasStatus1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkMeasStatus1;
    return rc;
}

int8 Get_R_SRR_Object_Track1_RF_RSrrTrkRawAzimuth1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRawAzimuth1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_RF_RSrrBurstID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrBurstID1;
    return rc;
}

uint16 Get_R_SRR_Object_Track2_RF_RSrrTrkRange2( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRange2_0)<<8
    |((uint16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRange2_1);
    return rc;
}

int16 Get_R_SRR_Object_Track2_RF_RSrrTrkRRate2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRRate2_0)<<8
    |((int16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRRate2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkObjElevation2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObjElevation2;
    return rc;
}

uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkDynamProp2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkDynamProp2;
    return rc;
}

int16 Get_R_SRR_Object_Track2_RF_RSrrTrkAzimuth2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkAzimuth2_0)<<8
    |((int16)R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkAzimuth2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkObjID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObjID2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_RF_RSrrTrkObsRange2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObsRange2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_RF_RSrrTrkMeasStatus2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkMeasStatus2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_RF_RSrrTrkRawAzimuth2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRawAzimuth2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_RF_RSrrBurstID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrBurstID2;
    return rc;
}

uint16 Get_R_SRR_Object_Track3_RF_RSrrTrkRange3( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRange3_0)<<8
    |((uint16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRange3_1);
    return rc;
}

int16 Get_R_SRR_Object_Track3_RF_RSrrTrkRRate3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRRate3_0)<<8
    |((int16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRRate3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkObjElevation3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObjElevation3;
    return rc;
}

uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkDynamProp3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkDynamProp3;
    return rc;
}

int16 Get_R_SRR_Object_Track3_RF_RSrrTrkAzimuth3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkAzimuth3_0)<<8
    |((int16)R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkAzimuth3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkObjID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObjID3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_RF_RSrrTrkObsRange3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObsRange3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_RF_RSrrTrkMeasStatus3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkMeasStatus3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_RF_RSrrTrkRawAzimuth3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRawAzimuth3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_RF_RSrrBurstID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrBurstID3;
    return rc;
}

uint16 Get_R_SRR_Object_Track4_RF_RSrrTrkRange4( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRange4_0)<<8
    |((uint16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRange4_1);
    return rc;
}

int16 Get_R_SRR_Object_Track4_RF_RSrrTrkRRate4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRRate4_0)<<8
    |((int16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRRate4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkObjElevation4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObjElevation4;
    return rc;
}

uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkDynamProp4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkDynamProp4;
    return rc;
}

int16 Get_R_SRR_Object_Track4_RF_RSrrTrkAzimuth4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkAzimuth4_0)<<8
    |((int16)R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkAzimuth4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkObjID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObjID4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_RF_RSrrTrkObsRange4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObsRange4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_RF_RSrrTrkMeasStatus4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkMeasStatus4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_RF_RSrrTrkRawAzimuth4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRawAzimuth4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_RF_RSrrBurstID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrBurstID4;
    return rc;
}

uint16 Get_R_SRR_Object_Track5_RF_RSrrTrkRange5( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRange5_0)<<8
    |((uint16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRange5_1);
    return rc;
}

int16 Get_R_SRR_Object_Track5_RF_RSrrTrkRRate5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRRate5_0)<<8
    |((int16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRRate5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkObjElevation5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObjElevation5;
    return rc;
}

uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkDynamProp5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkDynamProp5;
    return rc;
}

int16 Get_R_SRR_Object_Track5_RF_RSrrTrkAzimuth5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkAzimuth5_0)<<8
    |((int16)R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkAzimuth5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkObjID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObjID5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_RF_RSrrTrkObsRange5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObsRange5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_RF_RSrrTrkMeasStatus5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkMeasStatus5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_RF_RSrrTrkRawAzimuth5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRawAzimuth5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_RF_RSrrBurstID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrBurstID5;
    return rc;
}

uint16 Get_R_SRR_Object_Track6_RF_RSrrTrkRange6( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRange6_0)<<8
    |((uint16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRange6_1);
    return rc;
}

int16 Get_R_SRR_Object_Track6_RF_RSrrTrkRRate6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRRate6_0)<<8
    |((int16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRRate6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkObjElevation6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObjElevation6;
    return rc;
}

uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkDynamProp6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkDynamProp6;
    return rc;
}

int16 Get_R_SRR_Object_Track6_RF_RSrrTrkAzimuth6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkAzimuth6_0)<<8
    |((int16)R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkAzimuth6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkObjID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObjID6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_RF_RSrrTrkObsRange6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObsRange6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_RF_RSrrTrkMeasStatus6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkMeasStatus6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_RF_RSrrTrkRawAzimuth6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRawAzimuth6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_RF_RSrrBurstID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrBurstID6;
    return rc;
}

uint16 Get_R_SRR_Object_Track7_RF_RSrrTrkRange7( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRange7_0)<<8
    |((uint16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRange7_1);
    return rc;
}

int16 Get_R_SRR_Object_Track7_RF_RSrrTrkRRate7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRRate7_0)<<8
    |((int16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRRate7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkObjElevation7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObjElevation7;
    return rc;
}

uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkDynamProp7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkDynamProp7;
    return rc;
}

int16 Get_R_SRR_Object_Track7_RF_RSrrTrkAzimuth7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkAzimuth7_0)<<8
    |((int16)R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkAzimuth7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkObjID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObjID7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_RF_RSrrTrkObsRange7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObsRange7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_RF_RSrrTrkMeasStatus7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkMeasStatus7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_RF_RSrrTrkRawAzimuth7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRawAzimuth7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_RF_RSrrBurstID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrBurstID7;
    return rc;
}

uint16 Get_R_SRR_Object_Track8_RF_RSrrTrkRange8( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRange8_0)<<8
    |((uint16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRange8_1);
    return rc;
}

int16 Get_R_SRR_Object_Track8_RF_RSrrTrkRRate8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRRate8_0)<<8
    |((int16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRRate8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkObjElevation8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObjElevation8;
    return rc;
}

uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkDynamProp8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkDynamProp8;
    return rc;
}

int16 Get_R_SRR_Object_Track8_RF_RSrrTrkAzimuth8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkAzimuth8_0)<<8
    |((int16)R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkAzimuth8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkObjID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObjID8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_RF_RSrrTrkObsRange8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObsRange8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_RF_RSrrTrkMeasStatus8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkMeasStatus8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_RF_RSrrTrkRawAzimuth8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRawAzimuth8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_RF_RSrrBurstID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrBurstID8;
    return rc;
}

uint16 Get_R_SRR_Object_Track9_RF_RSrrTrkRange9( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRange9_0)<<8
    |((uint16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRange9_1);
    return rc;
}

int16 Get_R_SRR_Object_Track9_RF_RSrrTrkRRate9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRRate9_0)<<8
    |((int16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRRate9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkObjElevation9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObjElevation9;
    return rc;
}

uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkDynamProp9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkDynamProp9;
    return rc;
}

int16 Get_R_SRR_Object_Track9_RF_RSrrTrkAzimuth9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkAzimuth9_0)<<8
    |((int16)R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkAzimuth9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkObjID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObjID9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_RF_RSrrTrkObsRange9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObsRange9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_RF_RSrrTrkMeasStatus9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkMeasStatus9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_RF_RSrrTrkRawAzimuth9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRawAzimuth9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_RF_RSrrBurstID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrBurstID9;
    return rc;
}

uint16 Get_R_SRR_Object_Track10_RF_RSrrTrkRange10( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRange10_0)<<8
    |((uint16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRange10_1);
    return rc;
}

int16 Get_R_SRR_Object_Track10_RF_RSrrTrkRRate10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRRate10_0)<<8
    |((int16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRRate10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkObjElevation10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObjElevation10;
    return rc;
}

uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkDynamProp10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkDynamProp10;
    return rc;
}

int16 Get_R_SRR_Object_Track10_RF_RSrrTrkAzimuth10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkAzimuth10_0)<<8
    |((int16)R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkAzimuth10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkObjID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObjID10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_RF_RSrrTrkObsRange10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObsRange10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_RF_RSrrTrkMeasStatus10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkMeasStatus10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_RF_RSrrTrkRawAzimuth10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRawAzimuth10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_RF_RSrrBurstID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrBurstID10;
    return rc;
}

void Put_F_Master_Time_Sync_RF_FTimeSyncMstrClock(uint32 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_0=(uint8)(sigData>>24);
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_1=(uint8)(sigData>>16);
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_2=(uint8)(sigData>>8);
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClock_3=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_RF_FTimeSyncMstrChksm(uint16 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrChksm_0=(uint8)(sigData>>8);
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrChksm_1=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_RF_FTimeSyncMstrClockV(uint8 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.FTimeSyncMstrClockV=sigData;
}

void Put_F_Master_Time_Sync_RF_SensorModeCmdLRR(uint8 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdLRR=sigData;
}

void Put_F_Master_Time_Sync_RF_SensorModeCmdSRR(uint8 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdSRR=sigData;
}

void Put_F_Master_Time_Sync_RF_SensorModeCmdFCamera(uint8 sigData)
{
    F_Master_Time_Sync_RF_u.F_Master_Time_Sync_RF_Layout.SensorModeCmdFCamera=sigData;
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_CurvatureV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_CurvatureV=sigData;
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfstV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLngOfstV=sigData;
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_RollingCount(uint8 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_RollingCount=sigData;
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLngOfst(int8 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLngOfst=sigData;
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_TrnCtrLatOfst(int16 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLatOfst_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_TrnCtrLatOfst_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_Curvature(int16 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Curvature_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Curvature_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_RF_Vpath_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Estimate_RF_u.F_Vehicle_Path_Estimate_RF_Layout.Vpath_Checksum_1=(uint8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVelV=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRateV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRateV=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2TravlDirctn(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2TravlDirctn=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LongVel(int16 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVel_0=(int8)(sigData>>4);
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LongVel_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2YawRate(int16 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRate_0=(int8)(sigData>>8);
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2YawRate_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVel(int8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LatVel=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath2_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath2_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath2_Checksum_1=(uint8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2ModeInfo(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2ModeInfo=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2RollCnt(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2RollCnt=sigData;
}

void Put_F_Vehicle_Path_Data_2_RF_Vpath_Data2LatVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_RF_u.F_Vehicle_Path_Data_2_RF_Layout.Vpath_Data2LatVelV=sigData;
}

void Put_Body_Info_FOB_RF_HighBmAct(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.HighBmAct=sigData;
}

void Put_Body_Info_FOB_RF_LowBmAct(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.LowBmAct=sigData;
}

void Put_Body_Info_FOB_RF_WSWprAct(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.WSWprAct=sigData;
}

void Put_Body_Info_FOB_RF_LftLwBmFld(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.LftLwBmFld=sigData;
}

void Put_Body_Info_FOB_RF_RtLwBmFld(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.RtLwBmFld=sigData;
}

void Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStatV(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.OtsdAmbtLtLvlStatV=sigData;
}

void Put_Body_Info_FOB_RF_OtsdAmbtLtLvlStat(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.OtsdAmbtLtLvlStat=sigData;
}

void Put_Body_Info_FOB_RF_SysPwrMdV(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.SysPwrMdV=sigData;
}

void Put_Body_Info_FOB_RF_SysPwrMd(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.SysPwrMd=sigData;
}

void Put_Body_Info_FOB_RF_WSWshSwAtv(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.WSWshSwAtv=sigData;
}

void Put_Body_Info_FOB_RF_TrStLgMdAtv(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.TrStLgMdAtv=sigData;
}

void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn3(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn3=sigData;
}

void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn2(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn2=sigData;
}

void Put_Body_Info_FOB_RF_DrvrHndsOnWhlZn1(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvrHndsOnWhlZn1=sigData;
}

void Put_Body_Info_FOB_RF_DrDoorOpenSwActV(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrDoorOpenSwActV=sigData;
}

void Put_Body_Info_FOB_RF_DrDoorOpenSwAct(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrDoorOpenSwAct=sigData;
}

void Put_Body_Info_FOB_RF_StrgColCommsFlt(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColCommsFlt=sigData;
}

void Put_Body_Info_FOB_RF_DrvWndPosStat(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.DrvWndPosStat=sigData;
}

void Put_Body_Info_FOB_RF_InterLghtStat(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.InterLghtStat=sigData;
}

void Put_Body_Info_FOB_RF_StrgColInOutPos(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColInOutPos=sigData;
}

void Put_Body_Info_FOB_RF_StrgColUpDwnPos(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.StrgColUpDwnPos=sigData;
}

void Put_Body_Info_FOB_RF_CPMAPINFO4(uint8 sigData)
{
    Body_Info_FOB_RF_u.Body_Info_FOB_RF_Layout.CPMAPINFO4=sigData;
}

void Put_R_SRR_Object_Header_RF_RSrrRollingCnt(uint8 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrRollingCnt=sigData;
}

void Put_R_SRR_Object_Header_RF_RSRRModeCmdFdbk(uint8 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSRRModeCmdFdbk=sigData;
}

void Put_R_SRR_Object_Header_RF_RSrrTimeStamp(uint16 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStamp_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStamp_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Header_RF_RSRRNumValidTargets(uint8 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSRRNumValidTargets=sigData;
}

void Put_R_SRR_Object_Header_RF_RSrrTimeStampV(uint8 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrTimeStampV=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRSnstvFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSnstvFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRHWFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRHWFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRAntTngFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAntTngFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRCANIDAddrsUnsbl(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANIDAddrsUnsbl=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRCANRxErr(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANRxErr=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRCANSgnlSpvFld(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRCANSgnlSpvFld=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRDiagSpare(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRDiagSpare=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnPtchUp(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnPtchUp=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnPtchDn(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnPtchDn=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnRllLt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnRllLt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnRllRt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnRllRt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRExtIntrfrnc(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRExtIntrfrnc=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRPlntAlgnInProc(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRPlntAlgnInProc=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRSvcAlgnInPrcs(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSvcAlgnInPrcs=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRAlgnFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAlgnFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRInitDiagCmplt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRInitDiagCmplt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRAmbTmpOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAmbTmpOutRngHi=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRAmbTmpOutRngLw(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRAmbTmpOutRngLw=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRVltgOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRVltgOutRngHi=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRVltgOutRngLo(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRVltgOutRngLo=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRSnsrBlckd(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRSnsrBlckd=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnYawLt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnYawLt=sigData;
}

void Put_RSRRDiagStatus_RF_RSRRMsalgnYawRt(uint8 sigData)
{
    RSRRDiagStatus_RF_u.R_SRR_Object_Header_RF_Layout.RSRRMsalgnYawRt=sigData;
}

void Put_R_SRR_Object_Header_RF_RSrrBurstChecksum(uint16 sigData)
{
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrBurstChecksum_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_RF_u.R_SRR_Object_Header_RF_Layout.RSrrBurstChecksum_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkRange1(uint16 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRange1_0=(uint8)(sigData>>8);
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRange1_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkRRate1(int16 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRRate1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRRate1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkObjElevation1(uint8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObjElevation1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkDynamProp1(uint8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkDynamProp1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkAzimuth1(int16 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkAzimuth1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkAzimuth1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkObjID1(uint8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObjID1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkObsRange1(int8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkObsRange1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkMeasStatus1(uint8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkMeasStatus1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrTrkRawAzimuth1(int8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrTrkRawAzimuth1=sigData;
}

void Put_R_SRR_Object_Track1_RF_RSrrBurstID1(uint8 sigData)
{
    R_SRR_Object_Track1_RF_u.R_SRR_Object_Track1_RF_Layout.RSrrBurstID1=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkRange2(uint16 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRange2_0=(uint8)(sigData>>8);
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRange2_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkRRate2(int16 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRRate2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRRate2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkObjElevation2(uint8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObjElevation2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkDynamProp2(uint8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkDynamProp2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkAzimuth2(int16 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkAzimuth2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkAzimuth2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkObjID2(uint8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObjID2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkObsRange2(int8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkObsRange2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkMeasStatus2(uint8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkMeasStatus2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrTrkRawAzimuth2(int8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrTrkRawAzimuth2=sigData;
}

void Put_R_SRR_Object_Track2_RF_RSrrBurstID2(uint8 sigData)
{
    R_SRR_Object_Track2_RF_u.R_SRR_Object_Track2_RF_Layout.RSrrBurstID2=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkRange3(uint16 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRange3_0=(uint8)(sigData>>8);
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRange3_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkRRate3(int16 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRRate3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRRate3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkObjElevation3(uint8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObjElevation3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkDynamProp3(uint8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkDynamProp3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkAzimuth3(int16 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkAzimuth3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkAzimuth3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkObjID3(uint8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObjID3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkObsRange3(int8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkObsRange3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkMeasStatus3(uint8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkMeasStatus3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrTrkRawAzimuth3(int8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrTrkRawAzimuth3=sigData;
}

void Put_R_SRR_Object_Track3_RF_RSrrBurstID3(uint8 sigData)
{
    R_SRR_Object_Track3_RF_u.R_SRR_Object_Track3_RF_Layout.RSrrBurstID3=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkRange4(uint16 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRange4_0=(uint8)(sigData>>8);
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRange4_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkRRate4(int16 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRRate4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRRate4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkObjElevation4(uint8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObjElevation4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkDynamProp4(uint8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkDynamProp4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkAzimuth4(int16 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkAzimuth4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkAzimuth4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkObjID4(uint8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObjID4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkObsRange4(int8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkObsRange4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkMeasStatus4(uint8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkMeasStatus4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrTrkRawAzimuth4(int8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrTrkRawAzimuth4=sigData;
}

void Put_R_SRR_Object_Track4_RF_RSrrBurstID4(uint8 sigData)
{
    R_SRR_Object_Track4_RF_u.R_SRR_Object_Track4_RF_Layout.RSrrBurstID4=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkRange5(uint16 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRange5_0=(uint8)(sigData>>8);
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRange5_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkRRate5(int16 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRRate5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRRate5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkObjElevation5(uint8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObjElevation5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkDynamProp5(uint8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkDynamProp5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkAzimuth5(int16 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkAzimuth5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkAzimuth5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkObjID5(uint8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObjID5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkObsRange5(int8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkObsRange5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkMeasStatus5(uint8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkMeasStatus5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrTrkRawAzimuth5(int8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrTrkRawAzimuth5=sigData;
}

void Put_R_SRR_Object_Track5_RF_RSrrBurstID5(uint8 sigData)
{
    R_SRR_Object_Track5_RF_u.R_SRR_Object_Track5_RF_Layout.RSrrBurstID5=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkRange6(uint16 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRange6_0=(uint8)(sigData>>8);
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRange6_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkRRate6(int16 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRRate6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRRate6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkObjElevation6(uint8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObjElevation6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkDynamProp6(uint8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkDynamProp6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkAzimuth6(int16 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkAzimuth6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkAzimuth6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkObjID6(uint8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObjID6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkObsRange6(int8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkObsRange6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkMeasStatus6(uint8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkMeasStatus6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrTrkRawAzimuth6(int8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrTrkRawAzimuth6=sigData;
}

void Put_R_SRR_Object_Track6_RF_RSrrBurstID6(uint8 sigData)
{
    R_SRR_Object_Track6_RF_u.R_SRR_Object_Track6_RF_Layout.RSrrBurstID6=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkRange7(uint16 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRange7_0=(uint8)(sigData>>8);
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRange7_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkRRate7(int16 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRRate7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRRate7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkObjElevation7(uint8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObjElevation7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkDynamProp7(uint8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkDynamProp7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkAzimuth7(int16 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkAzimuth7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkAzimuth7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkObjID7(uint8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObjID7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkObsRange7(int8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkObsRange7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkMeasStatus7(uint8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkMeasStatus7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrTrkRawAzimuth7(int8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrTrkRawAzimuth7=sigData;
}

void Put_R_SRR_Object_Track7_RF_RSrrBurstID7(uint8 sigData)
{
    R_SRR_Object_Track7_RF_u.R_SRR_Object_Track7_RF_Layout.RSrrBurstID7=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkRange8(uint16 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRange8_0=(uint8)(sigData>>8);
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRange8_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkRRate8(int16 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRRate8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRRate8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkObjElevation8(uint8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObjElevation8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkDynamProp8(uint8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkDynamProp8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkAzimuth8(int16 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkAzimuth8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkAzimuth8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkObjID8(uint8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObjID8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkObsRange8(int8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkObsRange8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkMeasStatus8(uint8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkMeasStatus8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrTrkRawAzimuth8(int8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrTrkRawAzimuth8=sigData;
}

void Put_R_SRR_Object_Track8_RF_RSrrBurstID8(uint8 sigData)
{
    R_SRR_Object_Track8_RF_u.R_SRR_Object_Track8_RF_Layout.RSrrBurstID8=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkRange9(uint16 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRange9_0=(uint8)(sigData>>8);
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRange9_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkRRate9(int16 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRRate9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRRate9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkObjElevation9(uint8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObjElevation9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkDynamProp9(uint8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkDynamProp9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkAzimuth9(int16 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkAzimuth9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkAzimuth9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkObjID9(uint8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObjID9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkObsRange9(int8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkObsRange9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkMeasStatus9(uint8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkMeasStatus9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrTrkRawAzimuth9(int8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrTrkRawAzimuth9=sigData;
}

void Put_R_SRR_Object_Track9_RF_RSrrBurstID9(uint8 sigData)
{
    R_SRR_Object_Track9_RF_u.R_SRR_Object_Track9_RF_Layout.RSrrBurstID9=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkRange10(uint16 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRange10_0=(uint8)(sigData>>8);
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRange10_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkRRate10(int16 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRRate10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRRate10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkObjElevation10(uint8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObjElevation10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkDynamProp10(uint8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkDynamProp10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkAzimuth10(int16 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkAzimuth10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkAzimuth10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkObjID10(uint8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObjID10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkObsRange10(int8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkObsRange10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkMeasStatus10(uint8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkMeasStatus10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrTrkRawAzimuth10(int8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrTrkRawAzimuth10=sigData;
}

void Put_R_SRR_Object_Track10_RF_RSrrBurstID10(uint8 sigData)
{
    R_SRR_Object_Track10_RF_u.R_SRR_Object_Track10_RF_Layout.RSrrBurstID10=sigData;
}

uint8 Get_Mobileye_Generic_Sensor_Brakes( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Brakes;
    return rc;
}

uint8 Get_Mobileye_Generic_Sensor_Left_Blink( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Left_Blink;
    return rc;
}

uint8 Get_Mobileye_Generic_Sensor_Right_blink( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Right_blink;
    return rc;
}

uint8 Get_Mobileye_Generic_Sensor_Wipers( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Wipers;
    return rc;
}

uint8 Get_Mobileye_Generic_Sensor_High_Beam( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.High_Beam;
    return rc;
}

uint8 Get_Mobileye_Generic_Sensor_Reverse_gear( )
{
    uint8 rc;
    rc=Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Reverse_gear;
    return rc;
}

uint16 Get_Mobileye_Generic_Sensor_Vehicle_Speed( )
{
    uint16 rc;
    rc=((uint16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Vehicle_Speed_0)<<8
    |((uint16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Vehicle_Speed_1);
    return rc;
}

int16 Get_Mobileye_Generic_Sensor_Yaw_rate( )
{
    int16 rc;
    rc=((int16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Yaw_rate_0)<<8
    |((int16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Yaw_rate_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_Mobileye_Generic_Sensor_Steering_Wheel_Angle( )
{
    int16 rc;
    rc=((int16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Steering_Wheel_Angle_0)<<8
    |((int16)Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Steering_Wheel_Angle_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

void Put_Mobileye_Generic_Sensor_Brakes(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Brakes=sigData;
}

void Put_Mobileye_Generic_Sensor_Left_Blink(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Left_Blink=sigData;
}

void Put_Mobileye_Generic_Sensor_Right_blink(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Right_blink=sigData;
}

void Put_Mobileye_Generic_Sensor_Wipers(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Wipers=sigData;
}

void Put_Mobileye_Generic_Sensor_High_Beam(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.High_Beam=sigData;
}

void Put_Mobileye_Generic_Sensor_Reverse_gear(uint8 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Reverse_gear=sigData;
}

void Put_Mobileye_Generic_Sensor_Vehicle_Speed(uint16 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Vehicle_Speed_0=(uint8)(sigData>>8);
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Vehicle_Speed_1=(uint8)(sigData);
}

void Put_Mobileye_Generic_Sensor_Yaw_rate(int16 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Yaw_rate_0=(int8)(sigData>>8);
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Yaw_rate_1=(int8)(sigData);
}

void Put_Mobileye_Generic_Sensor_Steering_Wheel_Angle(int16 sigData)
{
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Steering_Wheel_Angle_0=(int8)(sigData>>8);
    Mobileye_Generic_Sensor_u.Mobileye_Generic_Sensor_Layout.Steering_Wheel_Angle_1=(int8)(sigData);
}

uint16 Get_Road_Information_Lane_Assignment_Host_Index_0m( )
{
    uint16 rc;
    rc=((uint16)Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_0m_1)<<2
    |((uint16)Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_0m_0);
    return rc;
}

uint8 Get_Road_Information_Highway_Exit_Left( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Highway_Exit_Left;
    return rc;
}

uint8 Get_Road_Information_Highway_Exit_Right( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Highway_Exit_Right;
    return rc;
}

uint8 Get_Road_Information_Road_Type( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Road_Type;
    return rc;
}

uint8 Get_Road_Information_Construction_Area( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Construction_Area;
    return rc;
}

uint16 Get_Road_Information_NumOfLanes_0m( )
{
    uint16 rc;
    rc=((uint16)Road_Information_u.Road_Information_Layout.NumOfLanes_0m_1)<<2
    |((uint16)Road_Information_u.Road_Information_Layout.NumOfLanes_0m_0);
    return rc;
}

uint8 Get_Road_Information_Lane_Assignment_Host_Index_35m( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_35m;
    return rc;
}

uint8 Get_Road_Information_reserved_bits1( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.reserved_bits1;
    return rc;
}

uint8 Get_Road_Information_SnowDecision( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.SnowDecision;
    return rc;
}

uint8 Get_Road_Information_NumOfLanes_35m( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.NumOfLanes_35m;
    return rc;
}

uint8 Get_Road_Information_Left_is_JPN_HWE( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Left_is_JPN_HWE;
    return rc;
}

uint8 Get_Road_Information_Right_is_JPN_HWE( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Right_is_JPN_HWE;
    return rc;
}

int8 Get_Road_Information_SnowPrediction( )
{
    int8 rc;
    rc=Road_Information_u.Road_Information_Layout.SnowPrediction;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_Road_Information_TLM_decelerationArea( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.TLM_decelerationArea;
    return rc;
}

uint8 Get_Road_Information_Left_decelLaneBoundaryWidth( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Left_decelLaneBoundaryWidth;
    return rc;
}

uint8 Get_Road_Information_Right_decelLaneBoundaryWidth( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.Right_decelLaneBoundaryWidth;
    return rc;
}

uint8 Get_Road_Information_reserved_bits2( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.reserved_bits2;
    return rc;
}

uint8 Get_Road_Information_reserved_bits3( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.reserved_bits3;
    return rc;
}

uint8 Get_Road_Information_protocol_version( )
{
    uint8 rc;
    rc=Road_Information_u.Road_Information_Layout.protocol_version;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_reserved_bits_2_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_2_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_isValid( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_isValid;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_reserved_bits_3_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_3_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_isValid( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_isValid;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_reserved_bits_4_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_4_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_isValid( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_isValid;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_reserved_bits_5_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_5_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_flag( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_flag;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_isValid( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_isValid;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_1_Segment_End( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_Segment_End;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_2_Segment_End( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_Segment_End;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_3_Segment_End( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_Segment_End;
    return rc;
}

uint8 Get_LKA_Right_Lane_C_SF_Confidence_4_Segment_End( )
{
    uint8 rc;
    rc=LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_Segment_End;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_reserved_bits_2_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_2_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_isValid( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_isValid;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_reserved_bits_3_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_3_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_isValid( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_isValid;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_reserved_bits_4_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_4_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_isValid( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_isValid;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_reserved_bits_5_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_5_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_flag( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_flag;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_isValid( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_isValid;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_1_Segment_End( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_Segment_End;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_2_Segment_End( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_Segment_End;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_3_Segment_End( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_Segment_End;
    return rc;
}

uint8 Get_LKA_Left_Lane_C_SF_Confidence_4_Segment_End( )
{
    uint8 rc;
    rc=LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_Segment_End;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_1_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_1_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_1_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_1_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_2_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_2_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_2_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_2_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_3_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_3_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_3_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_3_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_4_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_4_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_4_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_4_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_5_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_5_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_5_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_5_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_6_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_6_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_6_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_6_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_7_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_7_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_7_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_7_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_8_35m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_8_35m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_35m_Lane_Assignment_8_35m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_8_35m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_1_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_1_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_1_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_1_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_2_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_2_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_2_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_2_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_3_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_3_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_3_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_3_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_4_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_4_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_4_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_4_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_5_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_5_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_5_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_5_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_6_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_6_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_6_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_6_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_7_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_7_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_7_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_7_0m_Confidence;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_8_0m_Type( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_8_0m_Type;
    return rc;
}

uint8 Get_Lane_Assignment_0m_Lane_Assignment_8_0m_Confidence( )
{
    uint8 rc;
    rc=Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_8_0m_Confidence;
    return rc;
}

int16 Get_Next_Right_Lane_B_Lane_Model_C1( )
{
    int16 rc;
    rc=((int16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_Model_C1_1)<<8
    |((int16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_Model_C1_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_Next_Right_Lane_B_View_Range_Start( )
{
    uint16 rc;
    rc=((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_Start_1)<<6
    |((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_Start_0);
    return rc;
}

uint16 Get_Next_Right_Lane_B_View_Range_End( )
{
    uint16 rc;
    rc=((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_End_1)<<5
    |((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_End_0);
    return rc;
}

uint16 Get_Next_Right_Lane_B_reserved_bits5( )
{
    uint16 rc;
    rc=((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.reserved_bits5_1)<<1
    |((uint16)Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.reserved_bits5_0);
    return rc;
}

uint8 Get_Next_Right_Lane_B_Lane_mark_color( )
{
    uint8 rc;
    rc=Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_mark_color;
    return rc;
}

int16 Get_Next_Left_Lane_B_Lane_Model_C1( )
{
    int16 rc;
    rc=((int16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_Model_C1_1)<<8
    |((int16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_Model_C1_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_Next_Left_Lane_B_View_Range_Start( )
{
    uint16 rc;
    rc=((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_Start_1)<<6
    |((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_Start_0);
    return rc;
}

uint16 Get_Next_Left_Lane_B_View_Range_End( )
{
    uint16 rc;
    rc=((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_End_1)<<5
    |((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_End_0);
    return rc;
}

uint16 Get_Next_Left_Lane_B_reserved_bits5( )
{
    uint16 rc;
    rc=((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.reserved_bits5_1)<<1
    |((uint16)Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.reserved_bits5_0);
    return rc;
}

uint8 Get_Next_Left_Lane_B_Lane_mark_color( )
{
    uint8 rc;
    rc=Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_mark_color;
    return rc;
}

int32 Get_Next_Right_Lane_A_Lane_Model_C0( )
{
    int32 rc;
    rc=((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_2)<<10
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_1)<<2
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_0);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int32)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_Next_Right_Lane_A_Quality( )
{
    uint8 rc;
    rc=Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Quality;
    return rc;
}

uint8 Get_Next_Right_Lane_A_Lane_Type( )
{
    uint8 rc;
    rc=Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Type;
    return rc;
}

int32 Get_Next_Right_Lane_A_Lane_Model_C2( )
{
    int32 rc;
    rc=((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_2)<<15
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_1)<<7
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

int32 Get_Next_Right_Lane_A_Lane_Model_C3( )
{
    int32 rc;
    rc=((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_2)<<15
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_1)<<7
    |((int32)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

uint16 Get_Next_Right_Lane_A_Width_marking( )
{
    uint16 rc;
    rc=((uint16)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Width_marking_1)<<7
    |((uint16)Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Width_marking_0);
    return rc;
}

int32 Get_Next_Left_Lane_A_Lane_Model_C0( )
{
    int32 rc;
    rc=((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_2)<<10
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_1)<<2
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_0);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int32)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_Next_Left_Lane_A_Quality( )
{
    uint8 rc;
    rc=Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Quality;
    return rc;
}

uint8 Get_Next_Left_Lane_A_Lane_Type( )
{
    uint8 rc;
    rc=Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Type;
    return rc;
}

int32 Get_Next_Left_Lane_A_Lane_Model_C2( )
{
    int32 rc;
    rc=((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_2)<<15
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_1)<<7
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

int32 Get_Next_Left_Lane_A_Lane_Model_C3( )
{
    int32 rc;
    rc=((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_2)<<15
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_1)<<7
    |((int32)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

uint16 Get_Next_Left_Lane_A_Width_marking( )
{
    uint16 rc;
    rc=((uint16)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Width_marking_1)<<7
    |((uint16)Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Width_marking_0);
    return rc;
}

int16 Get_LKA_Right_Lane_B_Lane_Model_C1( )
{
    int16 rc;
    rc=((int16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Model_C1_1)<<8
    |((int16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Model_C1_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_LKA_Right_Lane_B_View_Range_Start( )
{
    uint16 rc;
    rc=((uint16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_Start_1)<<6
    |((uint16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_Start_0);
    return rc;
}

uint16 Get_LKA_Right_Lane_B_View_Range_End( )
{
    uint16 rc;
    rc=((uint16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_End_1)<<5
    |((uint16)LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_End_0);
    return rc;
}

uint8 Get_LKA_Right_Lane_B_reserved2_laneB( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.reserved2_laneB;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OCCLUDED_LM_EXTRAPOLATION;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_OVERRIDE( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OVERRIDE;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_OTHER_SIDE( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OTHER_SIDE;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_DIST_BASED_EXTRAPOLATION( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_DIST_BASED_EXTRAPOLATION;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_Lane_mark_color( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_mark_color;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_Lane_Crossing( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Crossing;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_VRTL_MERGE( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_VRTL_MERGE;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_STD( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_STD;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_HWE_SPAIN( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_HWE_SPAIN;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_GUARDRAIL_SHADOW;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_SOURCE_DIVERGING_LANES( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_DIVERGING_LANES;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_Reserved1_laneB( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Reserved1_laneB;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_PRED_HEADWAY_ORIENTED( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_HEADWAY_ORIENTED;
    return rc;
}

uint8 Get_LKA_Right_Lane_B_TLC( )
{
    uint8 rc;
    rc=LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.TLC;
    return rc;
}

int32 Get_LKA_Right_Lane_A_Lane_Model_C0( )
{
    int32 rc;
    rc=((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_2)<<10
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_1)<<2
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_0);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int32)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_LKA_Right_Lane_A_Quality( )
{
    uint8 rc;
    rc=LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Quality;
    return rc;
}

uint8 Get_LKA_Right_Lane_A_Lane_Type( )
{
    uint8 rc;
    rc=LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Type;
    return rc;
}

int32 Get_LKA_Right_Lane_A_Lane_Model_C2( )
{
    int32 rc;
    rc=((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_2)<<15
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_1)<<7
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

int32 Get_LKA_Right_Lane_A_Lane_Model_C3( )
{
    int32 rc;
    rc=((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_2)<<15
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_1)<<7
    |((int32)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

uint16 Get_LKA_Right_Lane_A_Width_marking( )
{
    uint16 rc;
    rc=((uint16)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Width_marking_1)<<7
    |((uint16)LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Width_marking_0);
    return rc;
}

int16 Get_LKA_Left_Lane_B_Lane_Model_C1( )
{
    int16 rc;
    rc=((int16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Model_C1_1)<<8
    |((int16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Model_C1_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_LKA_Left_Lane_B_View_Range_Start( )
{
    uint16 rc;
    rc=((uint16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_Start_1)<<6
    |((uint16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_Start_0);
    return rc;
}

uint16 Get_LKA_Left_Lane_B_View_Range_End( )
{
    uint16 rc;
    rc=((uint16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_End_1)<<5
    |((uint16)LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_End_0);
    return rc;
}

uint8 Get_LKA_Left_Lane_B_reserved2_laneB( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.reserved2_laneB;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OCCLUDED_LM_EXTRAPOLATION;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_OVERRIDE( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OVERRIDE;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_OTHER_SIDE( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OTHER_SIDE;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_DIST_BASED_EXTRAPOLATION( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_DIST_BASED_EXTRAPOLATION;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_Lane_mark_color( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_mark_color;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_Lane_Crossing( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Crossing;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_VRTL_MERGE( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_VRTL_MERGE;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_STD( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_STD;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_HWE_SPAIN( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_HWE_SPAIN;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_GUARDRAIL_SHADOW;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_SOURCE_DIVERGING_LANES( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_DIVERGING_LANES;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_Reserved1_laneB( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Reserved1_laneB;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_PRED_HEADWAY_ORIENTED( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_HEADWAY_ORIENTED;
    return rc;
}

uint8 Get_LKA_Left_Lane_B_TLC( )
{
    uint8 rc;
    rc=LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.TLC;
    return rc;
}

int32 Get_LKA_Left_Lane_A_Lane_Model_C0( )
{
    int32 rc;
    rc=((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_2)<<10
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_1)<<2
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_0);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int32)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_LKA_Left_Lane_A_Quality( )
{
    uint8 rc;
    rc=LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Quality;
    return rc;
}

uint8 Get_LKA_Left_Lane_A_Lane_Type( )
{
    uint8 rc;
    rc=LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Type;
    return rc;
}

int32 Get_LKA_Left_Lane_A_Lane_Model_C2( )
{
    int32 rc;
    rc=((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_2)<<15
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_1)<<7
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

int32 Get_LKA_Left_Lane_A_Lane_Model_C3( )
{
    int32 rc;
    rc=((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_2)<<15
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_1)<<7
    |((int32)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int32)((1<<8-7)-1<<(sizeof(rc)*8)-(8-7));
    }
    return rc;
}

uint16 Get_LKA_Left_Lane_A_Width_marking( )
{
    uint16 rc;
    rc=((uint16)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Width_marking_1)<<7
    |((uint16)LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Width_marking_0);
    return rc;
}

uint32 Get_ID_TFL0_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TFL0_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TFL1_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TFL1_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TFL2_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TFL2_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TFL3_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TFL3_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TSR0_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TSR0_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TSR1_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TSR1_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TSR2_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TSR2_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_0);
    return rc;
}

uint32 Get_ID_TSR3_Internal_ID0( )
{
    uint32 rc;
    rc=((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_3)<<24
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_2)<<16
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_1)<<8
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_0);
    return rc;
}

uint32 Get_ID_TSR3_Internal_ID1( )
{
    uint32 rc;
    rc=((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_3)<<24
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_2)<<16
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_1)<<8
    |((uint32)ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_0);
    return rc;
}

uint8 Get_TFL_Header_StopSign_Warning( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.StopSign_Warning;
    return rc;
}

uint8 Get_TFL_Header_TFL_Warning( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.TFL_Warning;
    return rc;
}

uint8 Get_TFL_Header_Main_Object_ID( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.Main_Object_ID;
    return rc;
}

uint8 Get_TFL_Header_Number_Of_TFL_Objects( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.Number_Of_TFL_Objects;
    return rc;
}

uint8 Get_TFL_Header_TFL_TTC( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.TFL_TTC;
    return rc;
}

uint8 Get_TFL_Header_StopSign_TTC( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.StopSign_TTC;
    return rc;
}

uint16 Get_TFL_Header_Stop_Line_Dist( )
{
    uint16 rc;
    rc=((uint16)TFL_Header_u.TFL_Header_Layout.Stop_Line_Dist_1)<<8
    |((uint16)TFL_Header_u.TFL_Header_Layout.Stop_Line_Dist_0);
    return rc;
}

uint16 Get_TFL_Header_JNC_Distance( )
{
    uint16 rc;
    rc=((uint16)TFL_Header_u.TFL_Header_Layout.JNC_Distance_1)<<2
    |((uint16)TFL_Header_u.TFL_Header_Layout.JNC_Distance_0);
    return rc;
}

uint8 Get_TFL_Header_Junction_Status( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.Junction_Status;
    return rc;
}

uint8 Get_TFL_Header_TFL_Warning_Supression_By_Driver( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.TFL_Warning_Supression_By_Driver;
    return rc;
}

uint8 Get_TFL_Header_TFL_Warning_Supression_By_Vision( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.TFL_Warning_Supression_By_Vision;
    return rc;
}

uint8 Get_TFL_Header_Stop_Line_Valid( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.Stop_Line_Valid;
    return rc;
}

uint8 Get_TFL_Header_Reserved_1_flag( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.Reserved_1_flag;
    return rc;
}

uint8 Get_TFL_Header_SS_Warning_Supression_By_Vision( )
{
    uint8 rc;
    rc=TFL_Header_u.TFL_Header_Layout.SS_Warning_Supression_By_Vision;
    return rc;
}

uint16 Get_TFL_Message0_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message0_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message0_u.TFL_Message0_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message0_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message0_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message0_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message0_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message0_u.TFL_Message0_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message0_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message0_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message0_u.TFL_Message0_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message0_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message0_u.TFL_Message0_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message0_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message0_u.TFL_Message0_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message0_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message0_u.TFL_Message0_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message1_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message1_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message1_u.TFL_Message1_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message1_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message1_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message1_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message1_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message1_u.TFL_Message1_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message1_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message1_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message1_u.TFL_Message1_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message1_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message1_u.TFL_Message1_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message1_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message1_u.TFL_Message1_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message1_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message1_u.TFL_Message1_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message2_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message2_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message2_u.TFL_Message2_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message2_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message2_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message2_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message2_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message2_u.TFL_Message2_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message2_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message2_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message2_u.TFL_Message2_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message2_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message2_u.TFL_Message2_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message2_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message2_u.TFL_Message2_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message2_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message2_u.TFL_Message2_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message3_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message3_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message3_u.TFL_Message3_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message3_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message3_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message3_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message3_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message3_u.TFL_Message3_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message3_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message3_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message3_u.TFL_Message3_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message3_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message3_u.TFL_Message3_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message3_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message3_u.TFL_Message3_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message3_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message3_u.TFL_Message3_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message4_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message4_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message4_u.TFL_Message4_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message4_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message4_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message4_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message4_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message4_u.TFL_Message4_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message4_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message4_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message4_u.TFL_Message4_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message4_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message4_u.TFL_Message4_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message4_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message4_u.TFL_Message4_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message4_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message4_u.TFL_Message4_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message5_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message5_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message5_u.TFL_Message5_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message5_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message5_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message5_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message5_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message5_u.TFL_Message5_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message5_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message5_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message5_u.TFL_Message5_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message5_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message5_u.TFL_Message5_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message5_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message5_u.TFL_Message5_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message5_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message5_u.TFL_Message5_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message6_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message6_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message6_u.TFL_Message6_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message6_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message6_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message6_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message6_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message6_u.TFL_Message6_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message6_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message6_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message6_u.TFL_Message6_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message6_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message6_u.TFL_Message6_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message6_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message6_u.TFL_Message6_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message6_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message6_u.TFL_Message6_Layout.TFL_assignment;
    return rc;
}

uint16 Get_TFL_Message7_TFL_PosY( )
{
    uint16 rc;
    rc=((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_PosY_1)<<5
    |((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_PosY_0);
    return rc;
}

uint8 Get_TFL_Message7_Object_ID( )
{
    uint8 rc;
    rc=TFL_Message7_u.TFL_Message7_Layout.Object_ID;
    return rc;
}

uint16 Get_TFL_Message7_TFL_PosX( )
{
    uint16 rc;
    rc=((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_PosX_1)<<5
    |((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_PosX_0);
    return rc;
}

uint32 Get_TFL_Message7_TFL_PosZ( )
{
    uint32 rc;
    rc=((uint32)TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_2)<<9
    |((uint32)TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_1)<<1
    |((uint32)TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_0);
    return rc;
}

uint16 Get_TFL_Message7_TFL_Width( )
{
    uint16 rc;
    rc=((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Width_1)<<2
    |((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Width_0);
    return rc;
}

uint8 Get_TFL_Message7_TFL_Color( )
{
    uint8 rc;
    rc=TFL_Message7_u.TFL_Message7_Layout.TFL_Color;
    return rc;
}

uint16 Get_TFL_Message7_TFL_Supp1_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Supp1_Arrow_1)<<3
    |((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Supp1_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message7_TFL_Type( )
{
    uint8 rc;
    rc=TFL_Message7_u.TFL_Message7_Layout.TFL_Type;
    return rc;
}

uint16 Get_TFL_Message7_TFL_Supp3_Arrow( )
{
    uint16 rc;
    rc=((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Supp3_Arrow_1)<<3
    |((uint16)TFL_Message7_u.TFL_Message7_Layout.TFL_Supp3_Arrow_0);
    return rc;
}

uint8 Get_TFL_Message7_TFL_Supp2_Arrow( )
{
    uint8 rc;
    rc=TFL_Message7_u.TFL_Message7_Layout.TFL_Supp2_Arrow;
    return rc;
}

uint8 Get_TFL_Message7_TFL_assignment( )
{
    uint8 rc;
    rc=TFL_Message7_u.TFL_Message7_Layout.TFL_assignment;
    return rc;
}

uint8 Get_TSR0_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR0_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR0_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR0_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR0_u.TSR0_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR0_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR0_u.TSR0_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR0_Approved_Flag( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR0_Filter_type( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR0_Sign_Height( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR0_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR0_Sign_Width( )
{
    uint8 rc;
    rc=TSR0_u.TSR0_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR1_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR1_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR1_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR1_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR1_u.TSR1_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR1_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR1_u.TSR1_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR1_Approved_Flag( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR1_Filter_type( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR1_Sign_Height( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR1_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR1_Sign_Width( )
{
    uint8 rc;
    rc=TSR1_u.TSR1_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR2_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR2_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR2_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR2_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR2_u.TSR2_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR2_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR2_u.TSR2_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR2_Approved_Flag( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR2_Filter_type( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR2_Sign_Height( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR2_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR2_Sign_Width( )
{
    uint8 rc;
    rc=TSR2_u.TSR2_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR3_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR3_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR3_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR3_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR3_u.TSR3_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR3_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR3_u.TSR3_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR3_Approved_Flag( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR3_Filter_type( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR3_Sign_Height( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR3_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR3_Sign_Width( )
{
    uint8 rc;
    rc=TSR3_u.TSR3_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR4_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR4_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR4_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR4_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR4_u.TSR4_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR4_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR4_u.TSR4_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR4_Approved_Flag( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR4_Filter_type( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR4_Sign_Height( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR4_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR4_Sign_Width( )
{
    uint8 rc;
    rc=TSR4_u.TSR4_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR5_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR5_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR5_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR5_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR5_u.TSR5_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR5_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR5_u.TSR5_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR5_Approved_Flag( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR5_Filter_type( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR5_Sign_Height( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR5_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR5_Sign_Width( )
{
    uint8 rc;
    rc=TSR5_u.TSR5_Layout.Sign_Width;
    return rc;
}

uint8 Get_TSR6_Vision_only_Sign_Type( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Vision_only_Sign_Type;
    return rc;
}

uint8 Get_TSR6_Vision_only_Supp_Sign_Type( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Vision_only_Supp_Sign_Type;
    return rc;
}

uint8 Get_TSR6_Sign_Position_X( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Sign_Position_X;
    return rc;
}

int8 Get_TSR6_Sign_Position_Y( )
{
    int8 rc;
    rc=TSR6_u.TSR6_Layout.Sign_Position_Y;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_TSR6_Sign_Position_Z( )
{
    int8 rc;
    rc=TSR6_u.TSR6_Layout.Sign_Position_Z;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_TSR6_Approved_Flag( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Approved_Flag;
    return rc;
}

uint8 Get_TSR6_Filter_type( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Filter_type;
    return rc;
}

uint8 Get_TSR6_Sign_Height( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Sign_Height;
    return rc;
}

uint8 Get_TSR6_No_Entry_Vision_Status( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.No_Entry_Vision_Status;
    return rc;
}

uint8 Get_TSR6_Sign_Width( )
{
    uint8 rc;
    rc=TSR6_u.TSR6_Layout.Sign_Width;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D1( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D1;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D1( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D1;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D2( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D2;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D2( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D2;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D3( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D3;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D3( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D3;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D4( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D4;
    return rc;
}

uint8 Get_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D4( )
{
    uint8 rc;
    rc=Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D4;
    return rc;
}

uint32 Get_ObstacleStatusB_timeStamp( )
{
    uint32 rc;
    rc=((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_3)<<24
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_2)<<16
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_1)<<8
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_0);
    return rc;
}

uint32 Get_ObstacleStatusB_frameIndex( )
{
    uint32 rc;
    rc=((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_3)<<24
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_2)<<16
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_1)<<8
    |((uint32)ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_0);
    return rc;
}

uint8 Get_ObstacleStatusA_NumObstacles( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.NumObstacles;
    return rc;
}

uint8 Get_ObstacleStatusA_Timestamp( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.Timestamp;
    return rc;
}

uint16 Get_ObstacleStatusA_ApplicationVersion_rc( )
{
    uint16 rc;
    rc=((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_rc_1)<<2
    |((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_rc_0);
    return rc;
}

uint8 Get_ObstacleStatusA_ApplicationVersion_minor( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_minor;
    return rc;
}

uint16 Get_ObstacleStatusA_ProtocolVersion( )
{
    uint16 rc;
    rc=((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.ProtocolVersion_1)<<6
    |((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.ProtocolVersion_0);
    return rc;
}

uint8 Get_ObstacleStatusA_LeftCloseRangeCutIn( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.LeftCloseRangeCutIn;
    return rc;
}

uint8 Get_ObstacleStatusA_RightCloseRangeCutIn( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.RightCloseRangeCutIn;
    return rc;
}

uint8 Get_ObstacleStatusA_Close_Car( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.Close_Car;
    return rc;
}

uint8 Get_ObstacleStatusA_Go( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.Go;
    return rc;
}

uint16 Get_ObstacleStatusA_Failsafe( )
{
    uint16 rc;
    rc=((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.Failsafe_1)<<8
    |((uint16)ObstacleStatusA_u.ObstacleStatusA_Layout.Failsafe_0);
    return rc;
}

uint8 Get_ObstacleStatusA_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleStatusA_u.ObstacleStatusA_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataA1_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA1_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA1_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA1_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA1_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA1_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA1_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA1_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA1_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA1_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA1_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA1_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA1_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB1_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB1_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB1_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB1_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB1_u.ObstacleDataB1_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB1_u.ObstacleDataB1_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB1_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB1_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB1_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB1_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB1_u.ObstacleDataB1_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB1_u.ObstacleDataB1_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB1_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB1_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB1_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB1_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB1_u.ObstacleDataB1_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC1_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC1_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC1_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC1_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC1_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC1_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC1_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC1_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA2_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA2_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA2_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA2_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA2_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA2_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA2_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA2_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA2_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA2_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA2_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA2_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA2_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB2_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB2_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB2_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB2_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB2_u.ObstacleDataB2_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB2_u.ObstacleDataB2_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB2_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB2_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB2_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB2_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB2_u.ObstacleDataB2_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB2_u.ObstacleDataB2_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB2_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB2_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB2_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB2_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB2_u.ObstacleDataB2_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC2_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC2_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC2_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC2_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC2_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC2_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC2_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC2_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA3_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA3_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA3_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA3_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA3_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA3_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA3_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA3_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA3_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA3_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA3_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA3_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA3_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB3_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB3_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB3_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB3_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB3_u.ObstacleDataB3_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB3_u.ObstacleDataB3_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB3_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB3_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB3_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB3_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB3_u.ObstacleDataB3_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB3_u.ObstacleDataB3_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB3_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB3_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB3_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB3_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB3_u.ObstacleDataB3_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC3_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC3_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC3_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC3_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC3_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC3_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC3_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC3_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA4_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA4_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA4_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA4_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA4_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA4_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA4_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA4_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA4_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA4_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA4_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA4_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA4_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB4_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB4_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB4_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB4_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB4_u.ObstacleDataB4_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB4_u.ObstacleDataB4_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB4_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB4_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB4_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB4_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB4_u.ObstacleDataB4_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB4_u.ObstacleDataB4_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB4_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB4_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB4_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB4_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB4_u.ObstacleDataB4_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC4_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC4_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC4_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC4_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC4_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC4_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC4_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC4_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA5_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA5_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA5_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA5_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA5_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA5_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA5_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA5_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA5_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA5_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA5_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA5_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA5_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB5_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB5_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB5_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB5_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB5_u.ObstacleDataB5_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB5_u.ObstacleDataB5_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB5_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB5_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB5_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB5_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB5_u.ObstacleDataB5_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB5_u.ObstacleDataB5_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB5_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB5_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB5_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB5_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB5_u.ObstacleDataB5_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC5_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC5_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC5_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC5_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC5_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC5_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC5_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC5_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA6_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA6_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA6_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA6_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA6_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA6_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA6_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA6_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA6_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA6_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA6_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA6_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA6_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB6_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB6_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB6_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB6_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB6_u.ObstacleDataB6_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB6_u.ObstacleDataB6_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB6_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB6_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB6_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB6_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB6_u.ObstacleDataB6_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB6_u.ObstacleDataB6_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB6_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB6_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB6_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB6_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB6_u.ObstacleDataB6_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC6_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC6_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC6_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC6_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC6_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC6_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC6_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC6_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA7_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA7_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA7_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA7_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA7_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA7_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA7_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA7_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA7_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA7_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA7_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA7_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA7_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB7_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB7_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB7_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB7_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB7_u.ObstacleDataB7_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB7_u.ObstacleDataB7_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB7_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB7_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB7_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB7_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB7_u.ObstacleDataB7_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB7_u.ObstacleDataB7_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB7_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB7_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB7_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB7_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB7_u.ObstacleDataB7_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC7_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC7_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC7_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC7_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC7_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC7_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC7_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC7_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA8_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA8_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA8_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA8_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA8_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA8_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA8_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA8_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA8_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA8_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA8_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA8_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA8_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB8_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB8_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB8_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB8_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB8_u.ObstacleDataB8_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB8_u.ObstacleDataB8_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB8_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB8_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB8_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB8_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB8_u.ObstacleDataB8_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB8_u.ObstacleDataB8_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB8_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB8_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB8_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB8_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB8_u.ObstacleDataB8_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC8_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC8_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC8_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC8_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC8_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC8_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC8_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC8_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA9_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA9_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA9_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA9_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA9_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA9_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA9_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA9_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA9_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA9_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA9_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA9_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA9_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB9_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB9_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB9_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB9_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB9_u.ObstacleDataB9_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB9_u.ObstacleDataB9_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB9_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB9_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB9_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB9_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB9_u.ObstacleDataB9_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB9_u.ObstacleDataB9_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB9_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB9_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB9_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB9_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB9_u.ObstacleDataB9_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC9_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC9_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC9_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC9_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC9_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC9_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC9_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC9_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA10_ObstacleID( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleID;
    return rc;
}

uint16 Get_ObstacleDataA10_ObstaclePosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosX_1)<<8
    |((uint16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosX_0);
    return rc;
}

uint8 Get_ObstacleDataA10_reserved_4_flag( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_4_flag;
    return rc;
}

int16 Get_ObstacleDataA10_ObstaclePosY( )
{
    int16 rc;
    rc=((int16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosY_1)<<8
    |((int16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosY_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA10_Move_in_and_Out( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.Move_in_and_Out;
    return rc;
}

uint8 Get_ObstacleDataA10_BlinkerInfo( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.BlinkerInfo;
    return rc;
}

int16 Get_ObstacleDataA10_ObstacleVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleVelX_1)<<8
    |((int16)ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataA10_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataA10_ObstacleType( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleType;
    return rc;
}

uint8 Get_ObstacleDataA10_ObstacleValid( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleValid;
    return rc;
}

uint8 Get_ObstacleDataA10_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_2_flag;
    return rc;
}

uint8 Get_ObstacleDataA10_ObstacleBrakeLights( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleBrakeLights;
    return rc;
}

uint8 Get_ObstacleDataA10_ObstacleStatus( )
{
    uint8 rc;
    rc=ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleStatus;
    return rc;
}

uint8 Get_ObstacleDataB10_ObstacleLength( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleLength;
    return rc;
}

uint8 Get_ObstacleDataB10_ObstacleWidth( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleWidth;
    return rc;
}

uint8 Get_ObstacleDataB10_ObstacleAge( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleAge;
    return rc;
}

uint16 Get_ObstacleDataB10_RadarPosX( )
{
    uint16 rc;
    rc=((uint16)ObstacleDataB10_u.ObstacleDataB10_Layout.RadarPosX_1)<<4
    |((uint16)ObstacleDataB10_u.ObstacleDataB10_Layout.RadarPosX_0);
    return rc;
}

uint8 Get_ObstacleDataB10_reserved_1_flag( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_flag;
    return rc;
}

uint8 Get_ObstacleDataB10_CIPVFlag( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.CIPVFlag;
    return rc;
}

uint8 Get_ObstacleDataB10_ObstacleLane( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleLane;
    return rc;
}

int16 Get_ObstacleDataB10_RadarVelX( )
{
    int16 rc;
    rc=((int16)ObstacleDataB10_u.ObstacleDataB10_Layout.RadarVelX_1)<<8
    |((int16)ObstacleDataB10_u.ObstacleDataB10_Layout.RadarVelX_0);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataB10_reserved_1_b( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_b;
    return rc;
}

uint8 Get_ObstacleDataB10_RadarMatchConfidence( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.RadarMatchConfidence;
    return rc;
}

uint8 Get_ObstacleDataB10_reserved_1_c( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_c;
    return rc;
}

uint8 Get_ObstacleDataB10_MatchedRadarID( )
{
    uint8 rc;
    rc=ObstacleDataB10_u.ObstacleDataB10_Layout.MatchedRadarID;
    return rc;
}

int16 Get_ObstacleDataC10_ObstacleAngleRate( )
{
    int16 rc;
    rc=((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngleRate_1)<<8
    |((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngleRate_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ObstacleDataC10_ObstacleVelY( )
{
    int8 rc;
    rc=ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleVelY;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC10_reserved_5_flag( )
{
    uint8 rc;
    rc=ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_5_flag;
    return rc;
}

int16 Get_ObstacleDataC10_Object_Accel_X( )
{
    int16 rc;
    rc=((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.Object_Accel_X_1)<<8
    |((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.Object_Accel_X_0);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ObstacleDataC10_reserved_3_flag( )
{
    uint8 rc;
    rc=ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_3_flag;
    return rc;
}

uint8 Get_ObstacleDataC10_ObstacleReplaced( )
{
    uint8 rc;
    rc=ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleReplaced;
    return rc;
}

uint8 Get_ObstacleDataC10_reserved_2_flag( )
{
    uint8 rc;
    rc=ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_2_flag;
    return rc;
}

int16 Get_ObstacleDataC10_ObstacleAngle( )
{
    int16 rc;
    rc=((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngle_1)<<8
    |((int16)ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngle_0);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_ObstacleStatusC_grabIndex( )
{
    uint16 rc;
    rc=((uint16)ObstacleStatusC_u.ObstacleStatusC_Layout.grabIndex_1)<<8
    |((uint16)ObstacleStatusC_u.ObstacleStatusC_Layout.grabIndex_0);
    return rc;
}

uint8 Get_ObstacleStatusC_pedalConfGenObjDistFromBumper( )
{
    uint8 rc;
    rc=ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfGenObjDistFromBumper;
    return rc;
}

uint16 Get_ObstacleStatusC_pedalConfusionGeneralObjTTC( )
{
    uint16 rc;
    rc=((uint16)ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfusionGeneralObjTTC_1)<<8
    |((uint16)ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfusionGeneralObjTTC_0);
    return rc;
}

uint32 Get_ObstacleStatusC_reserved_6_flag( )
{
    uint32 rc;
    rc=((uint32)ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_3)<<23
    |((uint32)ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_2)<<15
    |((uint32)ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_1)<<7
    |((uint32)ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_0);
    return rc;
}

void Put_Road_Information_Lane_Assignment_Host_Index_0m(uint16 sigData)
{
    Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_0m_1=(uint8)(sigData>>2);
    Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_0m_0=(uint8)(sigData);
}

void Put_Road_Information_Highway_Exit_Left(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Highway_Exit_Left=sigData;
}

void Put_Road_Information_Highway_Exit_Right(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Highway_Exit_Right=sigData;
}

void Put_Road_Information_Road_Type(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Road_Type=sigData;
}

void Put_Road_Information_Construction_Area(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Construction_Area=sigData;
}

void Put_Road_Information_NumOfLanes_0m(uint16 sigData)
{
    Road_Information_u.Road_Information_Layout.NumOfLanes_0m_1=(uint8)(sigData>>2);
    Road_Information_u.Road_Information_Layout.NumOfLanes_0m_0=(uint8)(sigData);
}

void Put_Road_Information_Lane_Assignment_Host_Index_35m(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Lane_Assignment_Host_Index_35m=sigData;
}

void Put_Road_Information_reserved_bits1(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.reserved_bits1=sigData;
}

void Put_Road_Information_SnowDecision(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.SnowDecision=sigData;
}

void Put_Road_Information_NumOfLanes_35m(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.NumOfLanes_35m=sigData;
}

void Put_Road_Information_Left_is_JPN_HWE(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Left_is_JPN_HWE=sigData;
}

void Put_Road_Information_Right_is_JPN_HWE(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Right_is_JPN_HWE=sigData;
}

void Put_Road_Information_SnowPrediction(int8 sigData)
{
    Road_Information_u.Road_Information_Layout.SnowPrediction=sigData;
}

void Put_Road_Information_TLM_decelerationArea(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.TLM_decelerationArea=sigData;
}

void Put_Road_Information_Left_decelLaneBoundaryWidth(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Left_decelLaneBoundaryWidth=sigData;
}

void Put_Road_Information_Right_decelLaneBoundaryWidth(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.Right_decelLaneBoundaryWidth=sigData;
}

void Put_Road_Information_reserved_bits2(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.reserved_bits2=sigData;
}

void Put_Road_Information_reserved_bits3(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.reserved_bits3=sigData;
}

void Put_Road_Information_protocol_version(uint8 sigData)
{
    Road_Information_u.Road_Information_Layout.protocol_version=sigData;
}

void Put_LKA_Right_Lane_C_reserved_bits_2_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_2_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_1_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_1_isValid(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_isValid=sigData;
}

void Put_LKA_Right_Lane_C_reserved_bits_3_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_3_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_2_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_2_isValid(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_isValid=sigData;
}

void Put_LKA_Right_Lane_C_reserved_bits_4_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_4_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_3_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_3_isValid(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_isValid=sigData;
}

void Put_LKA_Right_Lane_C_reserved_bits_5_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.reserved_bits_5_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_4_flag(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_flag=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_4_isValid(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_isValid=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_1_Segment_End(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_1_Segment_End=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_2_Segment_End(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_2_Segment_End=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_3_Segment_End(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_3_Segment_End=sigData;
}

void Put_LKA_Right_Lane_C_SF_Confidence_4_Segment_End(uint8 sigData)
{
    LKA_Right_Lane_C_u.LKA_Right_Lane_C_Layout.SF_Confidence_4_Segment_End=sigData;
}

void Put_LKA_Left_Lane_C_reserved_bits_2_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_2_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_1_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_1_isValid(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_isValid=sigData;
}

void Put_LKA_Left_Lane_C_reserved_bits_3_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_3_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_2_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_2_isValid(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_isValid=sigData;
}

void Put_LKA_Left_Lane_C_reserved_bits_4_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_4_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_3_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_3_isValid(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_isValid=sigData;
}

void Put_LKA_Left_Lane_C_reserved_bits_5_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.reserved_bits_5_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_4_flag(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_flag=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_4_isValid(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_isValid=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_1_Segment_End(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_1_Segment_End=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_2_Segment_End(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_2_Segment_End=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_3_Segment_End(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_3_Segment_End=sigData;
}

void Put_LKA_Left_Lane_C_SF_Confidence_4_Segment_End(uint8 sigData)
{
    LKA_Left_Lane_C_u.LKA_Left_Lane_C_Layout.SF_Confidence_4_Segment_End=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_1_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_1_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_1_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_1_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_2_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_2_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_2_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_2_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_3_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_3_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_3_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_3_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_4_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_4_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_4_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_4_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_5_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_5_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_5_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_5_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_6_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_6_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_6_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_6_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_7_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_7_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_7_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_7_35m_Confidence=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_8_35m_Type(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_8_35m_Type=sigData;
}

void Put_Lane_Assignment_35m_Lane_Assignment_8_35m_Confidence(uint8 sigData)
{
    Lane_Assignment_35m_u.Lane_Assignment_35m_Layout.Lane_Assignment_8_35m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_1_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_1_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_1_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_1_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_2_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_2_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_2_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_2_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_3_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_3_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_3_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_3_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_4_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_4_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_4_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_4_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_5_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_5_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_5_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_5_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_6_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_6_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_6_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_6_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_7_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_7_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_7_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_7_0m_Confidence=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_8_0m_Type(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_8_0m_Type=sigData;
}

void Put_Lane_Assignment_0m_Lane_Assignment_8_0m_Confidence(uint8 sigData)
{
    Lane_Assignment_0m_u.Lane_Assignment_0m_Layout.Lane_Assignment_8_0m_Confidence=sigData;
}

void Put_Next_Right_Lane_B_Lane_Model_C1(int16 sigData)
{
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_Model_C1_1=(int8)(sigData>>8);
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_Model_C1_0=(int8)(sigData);
}

void Put_Next_Right_Lane_B_View_Range_Start(uint16 sigData)
{
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_Start_1=(uint8)(sigData>>6);
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_Start_0=(uint8)(sigData);
}

void Put_Next_Right_Lane_B_View_Range_End(uint16 sigData)
{
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_End_1=(uint8)(sigData>>5);
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.View_Range_End_0=(uint8)(sigData);
}

void Put_Next_Right_Lane_B_reserved_bits5(uint16 sigData)
{
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.reserved_bits5_1=(uint8)(sigData>>1);
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.reserved_bits5_0=(uint8)(sigData);
}

void Put_Next_Right_Lane_B_Lane_mark_color(uint8 sigData)
{
    Next_Right_Lane_B_u.Next_Right_Lane_B_Layout.Lane_mark_color=sigData;
}

void Put_Next_Left_Lane_B_Lane_Model_C1(int16 sigData)
{
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_Model_C1_1=(int8)(sigData>>8);
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_Model_C1_0=(int8)(sigData);
}

void Put_Next_Left_Lane_B_View_Range_Start(uint16 sigData)
{
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_Start_1=(uint8)(sigData>>6);
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_Start_0=(uint8)(sigData);
}

void Put_Next_Left_Lane_B_View_Range_End(uint16 sigData)
{
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_End_1=(uint8)(sigData>>5);
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.View_Range_End_0=(uint8)(sigData);
}

void Put_Next_Left_Lane_B_reserved_bits5(uint16 sigData)
{
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.reserved_bits5_1=(uint8)(sigData>>1);
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.reserved_bits5_0=(uint8)(sigData);
}

void Put_Next_Left_Lane_B_Lane_mark_color(uint8 sigData)
{
    Next_Left_Lane_B_u.Next_Left_Lane_B_Layout.Lane_mark_color=sigData;
}

void Put_Next_Right_Lane_A_Lane_Model_C0(int32 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_2=(int8)(sigData>>10);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_1=(int8)(sigData>>2);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C0_0=(int8)(sigData);
}

void Put_Next_Right_Lane_A_Quality(uint8 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Quality=sigData;
}

void Put_Next_Right_Lane_A_Lane_Type(uint8 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Type=sigData;
}

void Put_Next_Right_Lane_A_Lane_Model_C2(int32 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_2=(int8)(sigData>>15);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_1=(int8)(sigData>>7);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C2_0=(int8)(sigData);
}

void Put_Next_Right_Lane_A_Lane_Model_C3(int32 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_2=(int8)(sigData>>15);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_1=(int8)(sigData>>7);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Lane_Model_C3_0=(int8)(sigData);
}

void Put_Next_Right_Lane_A_Width_marking(uint16 sigData)
{
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Width_marking_1=(uint8)(sigData>>7);
    Next_Right_Lane_A_u.Next_Right_Lane_A_Layout.Width_marking_0=(uint8)(sigData);
}

void Put_Next_Left_Lane_A_Lane_Model_C0(int32 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_2=(int8)(sigData>>10);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_1=(int8)(sigData>>2);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C0_0=(int8)(sigData);
}

void Put_Next_Left_Lane_A_Quality(uint8 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Quality=sigData;
}

void Put_Next_Left_Lane_A_Lane_Type(uint8 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Type=sigData;
}

void Put_Next_Left_Lane_A_Lane_Model_C2(int32 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_2=(int8)(sigData>>15);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_1=(int8)(sigData>>7);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C2_0=(int8)(sigData);
}

void Put_Next_Left_Lane_A_Lane_Model_C3(int32 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_2=(int8)(sigData>>15);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_1=(int8)(sigData>>7);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Lane_Model_C3_0=(int8)(sigData);
}

void Put_Next_Left_Lane_A_Width_marking(uint16 sigData)
{
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Width_marking_1=(uint8)(sigData>>7);
    Next_Left_Lane_A_u.Next_Left_Lane_A_Layout.Width_marking_0=(uint8)(sigData);
}

void Put_LKA_Right_Lane_B_Lane_Model_C1(int16 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Model_C1_1=(int8)(sigData>>8);
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Model_C1_0=(int8)(sigData);
}

void Put_LKA_Right_Lane_B_View_Range_Start(uint16 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_Start_1=(uint8)(sigData>>6);
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_Start_0=(uint8)(sigData);
}

void Put_LKA_Right_Lane_B_View_Range_End(uint16 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_End_1=(uint8)(sigData>>5);
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.View_Range_End_0=(uint8)(sigData);
}

void Put_LKA_Right_Lane_B_reserved2_laneB(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.reserved2_laneB=sigData;
}

void Put_LKA_Right_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OCCLUDED_LM_EXTRAPOLATION=sigData;
}

void Put_LKA_Right_Lane_B_PRED_OVERRIDE(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OVERRIDE=sigData;
}

void Put_LKA_Right_Lane_B_PRED_OTHER_SIDE(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_OTHER_SIDE=sigData;
}

void Put_LKA_Right_Lane_B_PRED_DIST_BASED_EXTRAPOLATION(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_DIST_BASED_EXTRAPOLATION=sigData;
}

void Put_LKA_Right_Lane_B_Lane_mark_color(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_mark_color=sigData;
}

void Put_LKA_Right_Lane_B_Lane_Crossing(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Lane_Crossing=sigData;
}

void Put_LKA_Right_Lane_B_PRED_SOURCE_VRTL_MERGE(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_VRTL_MERGE=sigData;
}

void Put_LKA_Right_Lane_B_PRED_SOURCE_STD(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_STD=sigData;
}

void Put_LKA_Right_Lane_B_PRED_SOURCE_HWE_SPAIN(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_HWE_SPAIN=sigData;
}

void Put_LKA_Right_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_GUARDRAIL_SHADOW=sigData;
}

void Put_LKA_Right_Lane_B_PRED_SOURCE_DIVERGING_LANES(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_SOURCE_DIVERGING_LANES=sigData;
}

void Put_LKA_Right_Lane_B_Reserved1_laneB(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.Reserved1_laneB=sigData;
}

void Put_LKA_Right_Lane_B_PRED_HEADWAY_ORIENTED(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.PRED_HEADWAY_ORIENTED=sigData;
}

void Put_LKA_Right_Lane_B_TLC(uint8 sigData)
{
    LKA_Right_Lane_B_u.LKA_Right_Lane_B_Layout.TLC=sigData;
}

void Put_LKA_Right_Lane_A_Lane_Model_C0(int32 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_2=(int8)(sigData>>10);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_1=(int8)(sigData>>2);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C0_0=(int8)(sigData);
}

void Put_LKA_Right_Lane_A_Quality(uint8 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Quality=sigData;
}

void Put_LKA_Right_Lane_A_Lane_Type(uint8 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Type=sigData;
}

void Put_LKA_Right_Lane_A_Lane_Model_C2(int32 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_2=(int8)(sigData>>15);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_1=(int8)(sigData>>7);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C2_0=(int8)(sigData);
}

void Put_LKA_Right_Lane_A_Lane_Model_C3(int32 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_2=(int8)(sigData>>15);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_1=(int8)(sigData>>7);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Lane_Model_C3_0=(int8)(sigData);
}

void Put_LKA_Right_Lane_A_Width_marking(uint16 sigData)
{
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Width_marking_1=(uint8)(sigData>>7);
    LKA_Right_Lane_A_u.LKA_Right_Lane_A_Layout.Width_marking_0=(uint8)(sigData);
}

void Put_LKA_Left_Lane_B_Lane_Model_C1(int16 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Model_C1_1=(int8)(sigData>>8);
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Model_C1_0=(int8)(sigData);
}

void Put_LKA_Left_Lane_B_View_Range_Start(uint16 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_Start_1=(uint8)(sigData>>6);
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_Start_0=(uint8)(sigData);
}

void Put_LKA_Left_Lane_B_View_Range_End(uint16 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_End_1=(uint8)(sigData>>5);
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.View_Range_End_0=(uint8)(sigData);
}

void Put_LKA_Left_Lane_B_reserved2_laneB(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.reserved2_laneB=sigData;
}

void Put_LKA_Left_Lane_B_PRED_OCCLUDED_LM_EXTRAPOLATION(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OCCLUDED_LM_EXTRAPOLATION=sigData;
}

void Put_LKA_Left_Lane_B_PRED_OVERRIDE(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OVERRIDE=sigData;
}

void Put_LKA_Left_Lane_B_PRED_OTHER_SIDE(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_OTHER_SIDE=sigData;
}

void Put_LKA_Left_Lane_B_PRED_DIST_BASED_EXTRAPOLATION(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_DIST_BASED_EXTRAPOLATION=sigData;
}

void Put_LKA_Left_Lane_B_Lane_mark_color(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_mark_color=sigData;
}

void Put_LKA_Left_Lane_B_Lane_Crossing(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Lane_Crossing=sigData;
}

void Put_LKA_Left_Lane_B_PRED_SOURCE_VRTL_MERGE(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_VRTL_MERGE=sigData;
}

void Put_LKA_Left_Lane_B_PRED_SOURCE_STD(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_STD=sigData;
}

void Put_LKA_Left_Lane_B_PRED_SOURCE_HWE_SPAIN(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_HWE_SPAIN=sigData;
}

void Put_LKA_Left_Lane_B_PRED_SOURCE_GUARDRAIL_SHADOW(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_GUARDRAIL_SHADOW=sigData;
}

void Put_LKA_Left_Lane_B_PRED_SOURCE_DIVERGING_LANES(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_SOURCE_DIVERGING_LANES=sigData;
}

void Put_LKA_Left_Lane_B_Reserved1_laneB(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.Reserved1_laneB=sigData;
}

void Put_LKA_Left_Lane_B_PRED_HEADWAY_ORIENTED(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.PRED_HEADWAY_ORIENTED=sigData;
}

void Put_LKA_Left_Lane_B_TLC(uint8 sigData)
{
    LKA_Left_Lane_B_u.LKA_Left_Lane_B_Layout.TLC=sigData;
}

void Put_LKA_Left_Lane_A_Lane_Model_C0(int32 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_2=(int8)(sigData>>10);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_1=(int8)(sigData>>2);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C0_0=(int8)(sigData);
}

void Put_LKA_Left_Lane_A_Quality(uint8 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Quality=sigData;
}

void Put_LKA_Left_Lane_A_Lane_Type(uint8 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Type=sigData;
}

void Put_LKA_Left_Lane_A_Lane_Model_C2(int32 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_2=(int8)(sigData>>15);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_1=(int8)(sigData>>7);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C2_0=(int8)(sigData);
}

void Put_LKA_Left_Lane_A_Lane_Model_C3(int32 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_2=(int8)(sigData>>15);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_1=(int8)(sigData>>7);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Lane_Model_C3_0=(int8)(sigData);
}

void Put_LKA_Left_Lane_A_Width_marking(uint16 sigData)
{
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Width_marking_1=(uint8)(sigData>>7);
    LKA_Left_Lane_A_u.LKA_Left_Lane_A_Layout.Width_marking_0=(uint8)(sigData);
}

void Put_ID_TFL0_Internal_ID0(uint32 sigData)
{
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TFL0_Internal_ID1(uint32 sigData)
{
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TFL0_u.ID_TFL0_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TFL1_Internal_ID0(uint32 sigData)
{
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TFL1_Internal_ID1(uint32 sigData)
{
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TFL1_u.ID_TFL1_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TFL2_Internal_ID0(uint32 sigData)
{
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TFL2_Internal_ID1(uint32 sigData)
{
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TFL2_u.ID_TFL2_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TFL3_Internal_ID0(uint32 sigData)
{
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TFL3_Internal_ID1(uint32 sigData)
{
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TFL3_u.ID_TFL3_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TSR0_Internal_ID0(uint32 sigData)
{
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TSR0_Internal_ID1(uint32 sigData)
{
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TSR0_u.ID_TSR0_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TSR1_Internal_ID0(uint32 sigData)
{
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TSR1_Internal_ID1(uint32 sigData)
{
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TSR1_u.ID_TSR1_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TSR2_Internal_ID0(uint32 sigData)
{
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TSR2_Internal_ID1(uint32 sigData)
{
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TSR2_u.ID_TSR2_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_ID_TSR3_Internal_ID0(uint32 sigData)
{
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_3=(uint8)(sigData>>24);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_2=(uint8)(sigData>>16);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_1=(uint8)(sigData>>8);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID0_0=(uint8)(sigData);
}

void Put_ID_TSR3_Internal_ID1(uint32 sigData)
{
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_3=(uint8)(sigData>>24);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_2=(uint8)(sigData>>16);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_1=(uint8)(sigData>>8);
    ID_TSR3_u.ID_TSR3_Layout.Internal_ID1_0=(uint8)(sigData);
}

void Put_TFL_Header_StopSign_Warning(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.StopSign_Warning=sigData;
}

void Put_TFL_Header_TFL_Warning(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.TFL_Warning=sigData;
}

void Put_TFL_Header_Main_Object_ID(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Main_Object_ID=sigData;
}

void Put_TFL_Header_Number_Of_TFL_Objects(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Number_Of_TFL_Objects=sigData;
}

void Put_TFL_Header_TFL_TTC(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.TFL_TTC=sigData;
}

void Put_TFL_Header_StopSign_TTC(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.StopSign_TTC=sigData;
}

void Put_TFL_Header_Stop_Line_Dist(uint16 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Stop_Line_Dist_1=(uint8)(sigData>>8);
    TFL_Header_u.TFL_Header_Layout.Stop_Line_Dist_0=(uint8)(sigData);
}

void Put_TFL_Header_JNC_Distance(uint16 sigData)
{
    TFL_Header_u.TFL_Header_Layout.JNC_Distance_1=(uint8)(sigData>>2);
    TFL_Header_u.TFL_Header_Layout.JNC_Distance_0=(uint8)(sigData);
}

void Put_TFL_Header_Junction_Status(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Junction_Status=sigData;
}

void Put_TFL_Header_TFL_Warning_Supression_By_Driver(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.TFL_Warning_Supression_By_Driver=sigData;
}

void Put_TFL_Header_TFL_Warning_Supression_By_Vision(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.TFL_Warning_Supression_By_Vision=sigData;
}

void Put_TFL_Header_Stop_Line_Valid(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Stop_Line_Valid=sigData;
}

void Put_TFL_Header_Reserved_1_flag(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.Reserved_1_flag=sigData;
}

void Put_TFL_Header_SS_Warning_Supression_By_Vision(uint8 sigData)
{
    TFL_Header_u.TFL_Header_Layout.SS_Warning_Supression_By_Vision=sigData;
}

void Put_TFL_Message0_TFL_PosY(uint16 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message0_Object_ID(uint8 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.Object_ID=sigData;
}

void Put_TFL_Message0_TFL_PosX(uint16 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message0_TFL_PosZ(uint32 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message0_u.TFL_Message0_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message0_TFL_Width(uint16 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message0_u.TFL_Message0_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message0_TFL_Color(uint8 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Color=sigData;
}

void Put_TFL_Message0_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message0_u.TFL_Message0_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message0_TFL_Type(uint8 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Type=sigData;
}

void Put_TFL_Message0_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message0_u.TFL_Message0_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message0_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message0_TFL_assignment(uint8 sigData)
{
    TFL_Message0_u.TFL_Message0_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message1_TFL_PosY(uint16 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message1_Object_ID(uint8 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.Object_ID=sigData;
}

void Put_TFL_Message1_TFL_PosX(uint16 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message1_TFL_PosZ(uint32 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message1_u.TFL_Message1_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message1_TFL_Width(uint16 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message1_u.TFL_Message1_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message1_TFL_Color(uint8 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Color=sigData;
}

void Put_TFL_Message1_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message1_u.TFL_Message1_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message1_TFL_Type(uint8 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Type=sigData;
}

void Put_TFL_Message1_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message1_u.TFL_Message1_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message1_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message1_TFL_assignment(uint8 sigData)
{
    TFL_Message1_u.TFL_Message1_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message2_TFL_PosY(uint16 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message2_Object_ID(uint8 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.Object_ID=sigData;
}

void Put_TFL_Message2_TFL_PosX(uint16 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message2_TFL_PosZ(uint32 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message2_u.TFL_Message2_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message2_TFL_Width(uint16 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message2_u.TFL_Message2_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message2_TFL_Color(uint8 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Color=sigData;
}

void Put_TFL_Message2_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message2_u.TFL_Message2_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message2_TFL_Type(uint8 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Type=sigData;
}

void Put_TFL_Message2_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message2_u.TFL_Message2_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message2_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message2_TFL_assignment(uint8 sigData)
{
    TFL_Message2_u.TFL_Message2_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message3_TFL_PosY(uint16 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message3_Object_ID(uint8 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.Object_ID=sigData;
}

void Put_TFL_Message3_TFL_PosX(uint16 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message3_TFL_PosZ(uint32 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message3_u.TFL_Message3_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message3_TFL_Width(uint16 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message3_u.TFL_Message3_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message3_TFL_Color(uint8 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Color=sigData;
}

void Put_TFL_Message3_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message3_u.TFL_Message3_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message3_TFL_Type(uint8 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Type=sigData;
}

void Put_TFL_Message3_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message3_u.TFL_Message3_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message3_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message3_TFL_assignment(uint8 sigData)
{
    TFL_Message3_u.TFL_Message3_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message4_TFL_PosY(uint16 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message4_Object_ID(uint8 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.Object_ID=sigData;
}

void Put_TFL_Message4_TFL_PosX(uint16 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message4_TFL_PosZ(uint32 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message4_u.TFL_Message4_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message4_TFL_Width(uint16 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message4_u.TFL_Message4_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message4_TFL_Color(uint8 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Color=sigData;
}

void Put_TFL_Message4_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message4_u.TFL_Message4_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message4_TFL_Type(uint8 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Type=sigData;
}

void Put_TFL_Message4_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message4_u.TFL_Message4_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message4_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message4_TFL_assignment(uint8 sigData)
{
    TFL_Message4_u.TFL_Message4_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message5_TFL_PosY(uint16 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message5_Object_ID(uint8 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.Object_ID=sigData;
}

void Put_TFL_Message5_TFL_PosX(uint16 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message5_TFL_PosZ(uint32 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message5_u.TFL_Message5_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message5_TFL_Width(uint16 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message5_u.TFL_Message5_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message5_TFL_Color(uint8 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Color=sigData;
}

void Put_TFL_Message5_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message5_u.TFL_Message5_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message5_TFL_Type(uint8 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Type=sigData;
}

void Put_TFL_Message5_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message5_u.TFL_Message5_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message5_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message5_TFL_assignment(uint8 sigData)
{
    TFL_Message5_u.TFL_Message5_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message6_TFL_PosY(uint16 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message6_Object_ID(uint8 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.Object_ID=sigData;
}

void Put_TFL_Message6_TFL_PosX(uint16 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message6_TFL_PosZ(uint32 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message6_u.TFL_Message6_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message6_TFL_Width(uint16 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message6_u.TFL_Message6_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message6_TFL_Color(uint8 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Color=sigData;
}

void Put_TFL_Message6_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message6_u.TFL_Message6_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message6_TFL_Type(uint8 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Type=sigData;
}

void Put_TFL_Message6_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message6_u.TFL_Message6_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message6_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message6_TFL_assignment(uint8 sigData)
{
    TFL_Message6_u.TFL_Message6_Layout.TFL_assignment=sigData;
}

void Put_TFL_Message7_TFL_PosY(uint16 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosY_1=(uint8)(sigData>>5);
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosY_0=(uint8)(sigData);
}

void Put_TFL_Message7_Object_ID(uint8 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.Object_ID=sigData;
}

void Put_TFL_Message7_TFL_PosX(uint16 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosX_1=(uint8)(sigData>>5);
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosX_0=(uint8)(sigData);
}

void Put_TFL_Message7_TFL_PosZ(uint32 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_2=(uint8)(sigData>>9);
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_1=(uint8)(sigData>>1);
    TFL_Message7_u.TFL_Message7_Layout.TFL_PosZ_0=(uint8)(sigData);
}

void Put_TFL_Message7_TFL_Width(uint16 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Width_1=(uint8)(sigData>>2);
    TFL_Message7_u.TFL_Message7_Layout.TFL_Width_0=(uint8)(sigData);
}

void Put_TFL_Message7_TFL_Color(uint8 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Color=sigData;
}

void Put_TFL_Message7_TFL_Supp1_Arrow(uint16 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Supp1_Arrow_1=(uint8)(sigData>>3);
    TFL_Message7_u.TFL_Message7_Layout.TFL_Supp1_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message7_TFL_Type(uint8 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Type=sigData;
}

void Put_TFL_Message7_TFL_Supp3_Arrow(uint16 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Supp3_Arrow_1=(uint8)(sigData>>3);
    TFL_Message7_u.TFL_Message7_Layout.TFL_Supp3_Arrow_0=(uint8)(sigData);
}

void Put_TFL_Message7_TFL_Supp2_Arrow(uint8 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_Supp2_Arrow=sigData;
}

void Put_TFL_Message7_TFL_assignment(uint8 sigData)
{
    TFL_Message7_u.TFL_Message7_Layout.TFL_assignment=sigData;
}

void Put_TSR0_Vision_only_Sign_Type(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR0_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR0_Sign_Position_X(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Sign_Position_X=sigData;
}

void Put_TSR0_Sign_Position_Y(int8 sigData)
{
    TSR0_u.TSR0_Layout.Sign_Position_Y=sigData;
}

void Put_TSR0_Sign_Position_Z(int8 sigData)
{
    TSR0_u.TSR0_Layout.Sign_Position_Z=sigData;
}

void Put_TSR0_Approved_Flag(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Approved_Flag=sigData;
}

void Put_TSR0_Filter_type(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Filter_type=sigData;
}

void Put_TSR0_Sign_Height(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Sign_Height=sigData;
}

void Put_TSR0_No_Entry_Vision_Status(uint8 sigData)
{
    TSR0_u.TSR0_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR0_Sign_Width(uint8 sigData)
{
    TSR0_u.TSR0_Layout.Sign_Width=sigData;
}

void Put_TSR1_Vision_only_Sign_Type(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR1_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR1_Sign_Position_X(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Sign_Position_X=sigData;
}

void Put_TSR1_Sign_Position_Y(int8 sigData)
{
    TSR1_u.TSR1_Layout.Sign_Position_Y=sigData;
}

void Put_TSR1_Sign_Position_Z(int8 sigData)
{
    TSR1_u.TSR1_Layout.Sign_Position_Z=sigData;
}

void Put_TSR1_Approved_Flag(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Approved_Flag=sigData;
}

void Put_TSR1_Filter_type(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Filter_type=sigData;
}

void Put_TSR1_Sign_Height(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Sign_Height=sigData;
}

void Put_TSR1_No_Entry_Vision_Status(uint8 sigData)
{
    TSR1_u.TSR1_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR1_Sign_Width(uint8 sigData)
{
    TSR1_u.TSR1_Layout.Sign_Width=sigData;
}

void Put_TSR2_Vision_only_Sign_Type(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR2_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR2_Sign_Position_X(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Sign_Position_X=sigData;
}

void Put_TSR2_Sign_Position_Y(int8 sigData)
{
    TSR2_u.TSR2_Layout.Sign_Position_Y=sigData;
}

void Put_TSR2_Sign_Position_Z(int8 sigData)
{
    TSR2_u.TSR2_Layout.Sign_Position_Z=sigData;
}

void Put_TSR2_Approved_Flag(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Approved_Flag=sigData;
}

void Put_TSR2_Filter_type(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Filter_type=sigData;
}

void Put_TSR2_Sign_Height(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Sign_Height=sigData;
}

void Put_TSR2_No_Entry_Vision_Status(uint8 sigData)
{
    TSR2_u.TSR2_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR2_Sign_Width(uint8 sigData)
{
    TSR2_u.TSR2_Layout.Sign_Width=sigData;
}

void Put_TSR3_Vision_only_Sign_Type(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR3_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR3_Sign_Position_X(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Sign_Position_X=sigData;
}

void Put_TSR3_Sign_Position_Y(int8 sigData)
{
    TSR3_u.TSR3_Layout.Sign_Position_Y=sigData;
}

void Put_TSR3_Sign_Position_Z(int8 sigData)
{
    TSR3_u.TSR3_Layout.Sign_Position_Z=sigData;
}

void Put_TSR3_Approved_Flag(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Approved_Flag=sigData;
}

void Put_TSR3_Filter_type(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Filter_type=sigData;
}

void Put_TSR3_Sign_Height(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Sign_Height=sigData;
}

void Put_TSR3_No_Entry_Vision_Status(uint8 sigData)
{
    TSR3_u.TSR3_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR3_Sign_Width(uint8 sigData)
{
    TSR3_u.TSR3_Layout.Sign_Width=sigData;
}

void Put_TSR4_Vision_only_Sign_Type(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR4_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR4_Sign_Position_X(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Sign_Position_X=sigData;
}

void Put_TSR4_Sign_Position_Y(int8 sigData)
{
    TSR4_u.TSR4_Layout.Sign_Position_Y=sigData;
}

void Put_TSR4_Sign_Position_Z(int8 sigData)
{
    TSR4_u.TSR4_Layout.Sign_Position_Z=sigData;
}

void Put_TSR4_Approved_Flag(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Approved_Flag=sigData;
}

void Put_TSR4_Filter_type(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Filter_type=sigData;
}

void Put_TSR4_Sign_Height(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Sign_Height=sigData;
}

void Put_TSR4_No_Entry_Vision_Status(uint8 sigData)
{
    TSR4_u.TSR4_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR4_Sign_Width(uint8 sigData)
{
    TSR4_u.TSR4_Layout.Sign_Width=sigData;
}

void Put_TSR5_Vision_only_Sign_Type(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR5_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR5_Sign_Position_X(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Sign_Position_X=sigData;
}

void Put_TSR5_Sign_Position_Y(int8 sigData)
{
    TSR5_u.TSR5_Layout.Sign_Position_Y=sigData;
}

void Put_TSR5_Sign_Position_Z(int8 sigData)
{
    TSR5_u.TSR5_Layout.Sign_Position_Z=sigData;
}

void Put_TSR5_Approved_Flag(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Approved_Flag=sigData;
}

void Put_TSR5_Filter_type(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Filter_type=sigData;
}

void Put_TSR5_Sign_Height(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Sign_Height=sigData;
}

void Put_TSR5_No_Entry_Vision_Status(uint8 sigData)
{
    TSR5_u.TSR5_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR5_Sign_Width(uint8 sigData)
{
    TSR5_u.TSR5_Layout.Sign_Width=sigData;
}

void Put_TSR6_Vision_only_Sign_Type(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Vision_only_Sign_Type=sigData;
}

void Put_TSR6_Vision_only_Supp_Sign_Type(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Vision_only_Supp_Sign_Type=sigData;
}

void Put_TSR6_Sign_Position_X(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Sign_Position_X=sigData;
}

void Put_TSR6_Sign_Position_Y(int8 sigData)
{
    TSR6_u.TSR6_Layout.Sign_Position_Y=sigData;
}

void Put_TSR6_Sign_Position_Z(int8 sigData)
{
    TSR6_u.TSR6_Layout.Sign_Position_Z=sigData;
}

void Put_TSR6_Approved_Flag(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Approved_Flag=sigData;
}

void Put_TSR6_Filter_type(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Filter_type=sigData;
}

void Put_TSR6_Sign_Height(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Sign_Height=sigData;
}

void Put_TSR6_No_Entry_Vision_Status(uint8 sigData)
{
    TSR6_u.TSR6_Layout.No_Entry_Vision_Status=sigData;
}

void Put_TSR6_Sign_Width(uint8 sigData)
{
    TSR6_u.TSR6_Layout.Sign_Width=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D1(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D1=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D1(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D1=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D2(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D2=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D2(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D2=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D3(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D3=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D3(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D3=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_Sign_Type_D4(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_Sign_Type_D4=sigData;
}

void Put_Vision_Only_TSR_continuous_Vision_only_supp_Sign_Type_D4(uint8 sigData)
{
    Vision_Only_TSR_continuous_u.Vision_Only_TSR_continuous_Layout.Vision_only_supp_Sign_Type_D4=sigData;
}

void Put_ObstacleStatusB_timeStamp(uint32 sigData)
{
    ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_3=(uint8)(sigData>>24);
    ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_2=(uint8)(sigData>>16);
    ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_1=(uint8)(sigData>>8);
    ObstacleStatusB_u.ObstacleStatusB_Layout.timeStamp_0=(uint8)(sigData);
}

void Put_ObstacleStatusB_frameIndex(uint32 sigData)
{
    ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_3=(uint8)(sigData>>24);
    ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_2=(uint8)(sigData>>16);
    ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_1=(uint8)(sigData>>8);
    ObstacleStatusB_u.ObstacleStatusB_Layout.frameIndex_0=(uint8)(sigData);
}

void Put_ObstacleStatusA_NumObstacles(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.NumObstacles=sigData;
}

void Put_ObstacleStatusA_Timestamp(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.Timestamp=sigData;
}

void Put_ObstacleStatusA_ApplicationVersion_rc(uint16 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_rc_1=(uint8)(sigData>>2);
    ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_rc_0=(uint8)(sigData);
}

void Put_ObstacleStatusA_ApplicationVersion_minor(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.ApplicationVersion_minor=sigData;
}

void Put_ObstacleStatusA_ProtocolVersion(uint16 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.ProtocolVersion_1=(uint8)(sigData>>6);
    ObstacleStatusA_u.ObstacleStatusA_Layout.ProtocolVersion_0=(uint8)(sigData);
}

void Put_ObstacleStatusA_LeftCloseRangeCutIn(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.LeftCloseRangeCutIn=sigData;
}

void Put_ObstacleStatusA_RightCloseRangeCutIn(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.RightCloseRangeCutIn=sigData;
}

void Put_ObstacleStatusA_Close_Car(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.Close_Car=sigData;
}

void Put_ObstacleStatusA_Go(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.Go=sigData;
}

void Put_ObstacleStatusA_Failsafe(uint16 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.Failsafe_1=(uint8)(sigData>>8);
    ObstacleStatusA_u.ObstacleStatusA_Layout.Failsafe_0=(uint8)(sigData);
}

void Put_ObstacleStatusA_reserved_3_flag(uint8 sigData)
{
    ObstacleStatusA_u.ObstacleStatusA_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataA1_ObstacleID(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA1_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA1_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA1_ObstaclePosY(int16 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA1_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA1_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA1_ObstacleVelX(int16 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA1_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA1_ObstacleType(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA1_ObstacleValid(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA1_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA1_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA1_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA1_u.ObstacleDataA1_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB1_ObstacleLength(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB1_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB1_ObstacleAge(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB1_RadarPosX(uint16 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB1_u.ObstacleDataB1_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB1_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB1_CIPVFlag(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB1_ObstacleLane(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB1_RadarVelX(int16 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB1_u.ObstacleDataB1_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB1_reserved_1_b(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB1_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB1_reserved_1_c(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB1_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB1_u.ObstacleDataB1_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC1_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC1_ObstacleVelY(int8 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC1_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC1_Object_Accel_X(int16 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC1_u.ObstacleDataC1_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC1_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC1_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC1_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC1_ObstacleAngle(int16 sigData)
{
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC1_u.ObstacleDataC1_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA2_ObstacleID(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA2_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA2_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA2_ObstaclePosY(int16 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA2_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA2_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA2_ObstacleVelX(int16 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA2_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA2_ObstacleType(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA2_ObstacleValid(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA2_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA2_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA2_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA2_u.ObstacleDataA2_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB2_ObstacleLength(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB2_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB2_ObstacleAge(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB2_RadarPosX(uint16 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB2_u.ObstacleDataB2_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB2_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB2_CIPVFlag(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB2_ObstacleLane(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB2_RadarVelX(int16 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB2_u.ObstacleDataB2_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB2_reserved_1_b(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB2_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB2_reserved_1_c(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB2_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB2_u.ObstacleDataB2_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC2_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC2_ObstacleVelY(int8 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC2_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC2_Object_Accel_X(int16 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC2_u.ObstacleDataC2_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC2_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC2_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC2_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC2_ObstacleAngle(int16 sigData)
{
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC2_u.ObstacleDataC2_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA3_ObstacleID(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA3_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA3_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA3_ObstaclePosY(int16 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA3_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA3_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA3_ObstacleVelX(int16 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA3_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA3_ObstacleType(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA3_ObstacleValid(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA3_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA3_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA3_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA3_u.ObstacleDataA3_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB3_ObstacleLength(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB3_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB3_ObstacleAge(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB3_RadarPosX(uint16 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB3_u.ObstacleDataB3_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB3_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB3_CIPVFlag(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB3_ObstacleLane(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB3_RadarVelX(int16 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB3_u.ObstacleDataB3_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB3_reserved_1_b(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB3_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB3_reserved_1_c(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB3_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB3_u.ObstacleDataB3_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC3_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC3_ObstacleVelY(int8 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC3_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC3_Object_Accel_X(int16 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC3_u.ObstacleDataC3_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC3_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC3_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC3_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC3_ObstacleAngle(int16 sigData)
{
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC3_u.ObstacleDataC3_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA4_ObstacleID(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA4_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA4_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA4_ObstaclePosY(int16 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA4_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA4_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA4_ObstacleVelX(int16 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA4_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA4_ObstacleType(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA4_ObstacleValid(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA4_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA4_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA4_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA4_u.ObstacleDataA4_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB4_ObstacleLength(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB4_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB4_ObstacleAge(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB4_RadarPosX(uint16 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB4_u.ObstacleDataB4_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB4_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB4_CIPVFlag(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB4_ObstacleLane(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB4_RadarVelX(int16 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB4_u.ObstacleDataB4_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB4_reserved_1_b(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB4_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB4_reserved_1_c(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB4_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB4_u.ObstacleDataB4_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC4_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC4_ObstacleVelY(int8 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC4_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC4_Object_Accel_X(int16 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC4_u.ObstacleDataC4_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC4_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC4_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC4_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC4_ObstacleAngle(int16 sigData)
{
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC4_u.ObstacleDataC4_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA5_ObstacleID(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA5_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA5_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA5_ObstaclePosY(int16 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA5_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA5_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA5_ObstacleVelX(int16 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA5_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA5_ObstacleType(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA5_ObstacleValid(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA5_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA5_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA5_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA5_u.ObstacleDataA5_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB5_ObstacleLength(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB5_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB5_ObstacleAge(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB5_RadarPosX(uint16 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB5_u.ObstacleDataB5_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB5_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB5_CIPVFlag(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB5_ObstacleLane(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB5_RadarVelX(int16 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB5_u.ObstacleDataB5_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB5_reserved_1_b(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB5_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB5_reserved_1_c(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB5_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB5_u.ObstacleDataB5_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC5_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC5_ObstacleVelY(int8 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC5_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC5_Object_Accel_X(int16 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC5_u.ObstacleDataC5_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC5_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC5_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC5_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC5_ObstacleAngle(int16 sigData)
{
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC5_u.ObstacleDataC5_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA6_ObstacleID(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA6_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA6_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA6_ObstaclePosY(int16 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA6_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA6_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA6_ObstacleVelX(int16 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA6_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA6_ObstacleType(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA6_ObstacleValid(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA6_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA6_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA6_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA6_u.ObstacleDataA6_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB6_ObstacleLength(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB6_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB6_ObstacleAge(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB6_RadarPosX(uint16 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB6_u.ObstacleDataB6_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB6_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB6_CIPVFlag(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB6_ObstacleLane(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB6_RadarVelX(int16 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB6_u.ObstacleDataB6_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB6_reserved_1_b(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB6_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB6_reserved_1_c(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB6_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB6_u.ObstacleDataB6_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC6_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC6_ObstacleVelY(int8 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC6_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC6_Object_Accel_X(int16 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC6_u.ObstacleDataC6_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC6_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC6_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC6_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC6_ObstacleAngle(int16 sigData)
{
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC6_u.ObstacleDataC6_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA7_ObstacleID(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA7_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA7_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA7_ObstaclePosY(int16 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA7_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA7_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA7_ObstacleVelX(int16 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA7_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA7_ObstacleType(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA7_ObstacleValid(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA7_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA7_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA7_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA7_u.ObstacleDataA7_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB7_ObstacleLength(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB7_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB7_ObstacleAge(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB7_RadarPosX(uint16 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB7_u.ObstacleDataB7_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB7_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB7_CIPVFlag(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB7_ObstacleLane(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB7_RadarVelX(int16 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB7_u.ObstacleDataB7_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB7_reserved_1_b(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB7_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB7_reserved_1_c(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB7_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB7_u.ObstacleDataB7_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC7_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC7_ObstacleVelY(int8 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC7_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC7_Object_Accel_X(int16 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC7_u.ObstacleDataC7_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC7_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC7_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC7_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC7_ObstacleAngle(int16 sigData)
{
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC7_u.ObstacleDataC7_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA8_ObstacleID(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA8_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA8_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA8_ObstaclePosY(int16 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA8_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA8_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA8_ObstacleVelX(int16 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA8_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA8_ObstacleType(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA8_ObstacleValid(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA8_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA8_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA8_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA8_u.ObstacleDataA8_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB8_ObstacleLength(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB8_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB8_ObstacleAge(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB8_RadarPosX(uint16 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB8_u.ObstacleDataB8_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB8_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB8_CIPVFlag(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB8_ObstacleLane(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB8_RadarVelX(int16 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB8_u.ObstacleDataB8_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB8_reserved_1_b(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB8_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB8_reserved_1_c(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB8_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB8_u.ObstacleDataB8_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC8_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC8_ObstacleVelY(int8 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC8_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC8_Object_Accel_X(int16 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC8_u.ObstacleDataC8_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC8_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC8_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC8_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC8_ObstacleAngle(int16 sigData)
{
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC8_u.ObstacleDataC8_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA9_ObstacleID(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA9_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA9_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA9_ObstaclePosY(int16 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA9_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA9_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA9_ObstacleVelX(int16 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA9_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA9_ObstacleType(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA9_ObstacleValid(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA9_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA9_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA9_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA9_u.ObstacleDataA9_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB9_ObstacleLength(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB9_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB9_ObstacleAge(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB9_RadarPosX(uint16 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB9_u.ObstacleDataB9_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB9_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB9_CIPVFlag(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB9_ObstacleLane(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB9_RadarVelX(int16 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB9_u.ObstacleDataB9_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB9_reserved_1_b(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB9_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB9_reserved_1_c(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB9_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB9_u.ObstacleDataB9_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC9_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC9_ObstacleVelY(int8 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC9_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC9_Object_Accel_X(int16 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC9_u.ObstacleDataC9_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC9_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC9_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC9_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC9_ObstacleAngle(int16 sigData)
{
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC9_u.ObstacleDataC9_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleDataA10_ObstacleID(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleID=sigData;
}

void Put_ObstacleDataA10_ObstaclePosX(uint16 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosX_1=(uint8)(sigData>>8);
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosX_0=(uint8)(sigData);
}

void Put_ObstacleDataA10_reserved_4_flag(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_4_flag=sigData;
}

void Put_ObstacleDataA10_ObstaclePosY(int16 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosY_1=(int8)(sigData>>8);
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstaclePosY_0=(int8)(sigData);
}

void Put_ObstacleDataA10_Move_in_and_Out(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.Move_in_and_Out=sigData;
}

void Put_ObstacleDataA10_BlinkerInfo(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.BlinkerInfo=sigData;
}

void Put_ObstacleDataA10_ObstacleVelX(int16 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleVelX_1=(int8)(sigData>>8);
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleVelX_0=(int8)(sigData);
}

void Put_ObstacleDataA10_reserved_1_flag(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataA10_ObstacleType(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleType=sigData;
}

void Put_ObstacleDataA10_ObstacleValid(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleValid=sigData;
}

void Put_ObstacleDataA10_reserved_2_flag(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataA10_ObstacleBrakeLights(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleBrakeLights=sigData;
}

void Put_ObstacleDataA10_ObstacleStatus(uint8 sigData)
{
    ObstacleDataA10_u.ObstacleDataA10_Layout.ObstacleStatus=sigData;
}

void Put_ObstacleDataB10_ObstacleLength(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleLength=sigData;
}

void Put_ObstacleDataB10_ObstacleWidth(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleWidth=sigData;
}

void Put_ObstacleDataB10_ObstacleAge(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleAge=sigData;
}

void Put_ObstacleDataB10_RadarPosX(uint16 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.RadarPosX_1=(uint8)(sigData>>4);
    ObstacleDataB10_u.ObstacleDataB10_Layout.RadarPosX_0=(uint8)(sigData);
}

void Put_ObstacleDataB10_reserved_1_flag(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_flag=sigData;
}

void Put_ObstacleDataB10_CIPVFlag(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.CIPVFlag=sigData;
}

void Put_ObstacleDataB10_ObstacleLane(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.ObstacleLane=sigData;
}

void Put_ObstacleDataB10_RadarVelX(int16 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.RadarVelX_1=(int8)(sigData>>8);
    ObstacleDataB10_u.ObstacleDataB10_Layout.RadarVelX_0=(int8)(sigData);
}

void Put_ObstacleDataB10_reserved_1_b(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_b=sigData;
}

void Put_ObstacleDataB10_RadarMatchConfidence(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.RadarMatchConfidence=sigData;
}

void Put_ObstacleDataB10_reserved_1_c(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.reserved_1_c=sigData;
}

void Put_ObstacleDataB10_MatchedRadarID(uint8 sigData)
{
    ObstacleDataB10_u.ObstacleDataB10_Layout.MatchedRadarID=sigData;
}

void Put_ObstacleDataC10_ObstacleAngleRate(int16 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngleRate_1=(int8)(sigData>>8);
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngleRate_0=(int8)(sigData);
}

void Put_ObstacleDataC10_ObstacleVelY(int8 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleVelY=sigData;
}

void Put_ObstacleDataC10_reserved_5_flag(uint8 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_5_flag=sigData;
}

void Put_ObstacleDataC10_Object_Accel_X(int16 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.Object_Accel_X_1=(int8)(sigData>>8);
    ObstacleDataC10_u.ObstacleDataC10_Layout.Object_Accel_X_0=(int8)(sigData);
}

void Put_ObstacleDataC10_reserved_3_flag(uint8 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_3_flag=sigData;
}

void Put_ObstacleDataC10_ObstacleReplaced(uint8 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleReplaced=sigData;
}

void Put_ObstacleDataC10_reserved_2_flag(uint8 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.reserved_2_flag=sigData;
}

void Put_ObstacleDataC10_ObstacleAngle(int16 sigData)
{
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngle_1=(int8)(sigData>>8);
    ObstacleDataC10_u.ObstacleDataC10_Layout.ObstacleAngle_0=(int8)(sigData);
}

void Put_ObstacleStatusC_grabIndex(uint16 sigData)
{
    ObstacleStatusC_u.ObstacleStatusC_Layout.grabIndex_1=(uint8)(sigData>>8);
    ObstacleStatusC_u.ObstacleStatusC_Layout.grabIndex_0=(uint8)(sigData);
}

void Put_ObstacleStatusC_pedalConfGenObjDistFromBumper(uint8 sigData)
{
    ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfGenObjDistFromBumper=sigData;
}

void Put_ObstacleStatusC_pedalConfusionGeneralObjTTC(uint16 sigData)
{
    ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfusionGeneralObjTTC_1=(uint8)(sigData>>8);
    ObstacleStatusC_u.ObstacleStatusC_Layout.pedalConfusionGeneralObjTTC_0=(uint8)(sigData);
}

void Put_ObstacleStatusC_reserved_6_flag(uint32 sigData)
{
    ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_3=(uint8)(sigData>>23);
    ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_2=(uint8)(sigData>>15);
    ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_1=(uint8)(sigData>>7);
    ObstacleStatusC_u.ObstacleStatusC_Layout.reserved_6_flag_0=(uint8)(sigData);
}

