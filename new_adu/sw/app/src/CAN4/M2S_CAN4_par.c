#include "M2S_CAN4_par.h"
void Update_RSRRDiagStatus_LF_ShadowBuffer()
{
   memcpy(RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Buffer,R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Buffer,8);
}
uint8 Get_Body_Info_FOB_LF_HighBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.HighBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_LowBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.LowBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_WSWprAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.WSWprAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_LftLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.LftLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_RtLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.RtLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_OtsdAmbtLtLvlStatV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.OtsdAmbtLtLvlStatV;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_OtsdAmbtLtLvlStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.OtsdAmbtLtLvlStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_SysPwrMdV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.SysPwrMdV;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_SysPwrMd( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.SysPwrMd;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_WSWshSwAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.WSWshSwAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_TrStLgMdAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.TrStLgMdAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn3( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn3;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn2( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn2;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrvrHndsOnWhlZn1( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn1;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrDoorOpenSwActV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrDoorOpenSwActV;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrDoorOpenSwAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrDoorOpenSwAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_StrgColCommsFlt( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColCommsFlt;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_DrvWndPosStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvWndPosStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_InterLghtStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.InterLghtStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_StrgColInOutPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColInOutPos;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_StrgColUpDwnPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColUpDwnPos;
    return rc;
}

uint8 Get_Body_Info_FOB_LF_CPMAPINFO4( )
{
    uint8 rc;
    rc=Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.CPMAPINFO4;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVelV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRateV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRateV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2TravlDirctn( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2TravlDirctn;
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVel( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVel_0)<<4
    |((int16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVel_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRate( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRate_0)<<8
    |((int16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRate_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-4)-1<<(sizeof(rc)*8)-(8-4));
    }
    return rc;
}

int8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVel( )
{
    int8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LatVel;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Data_2_LF_Vpath2_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath2_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath2_Checksum_1);
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2ModeInfo( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2ModeInfo;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2RollCnt( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2RollCnt;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LatVelV;
    return rc;
}

uint32 Get_F_Master_Time_Sync_LF_FTimeSyncMstrClock( )
{
    uint32 rc;
    rc=((uint32)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_0)<<24
    |((uint32)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_1)<<16
    |((uint32)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_2)<<8
    |((uint32)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_3);
    return rc;
}

uint16 Get_F_Master_Time_Sync_LF_FTimeSyncMstrChksm( )
{
    uint16 rc;
    rc=((uint16)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrChksm_0)<<8
    |((uint16)F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrChksm_1);
    return rc;
}

uint8 Get_F_Master_Time_Sync_LF_FTimeSyncMstrClockV( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClockV;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdLRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdLRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdSRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdSRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LF_SensorModeCmdFCamera( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdFCamera;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_CurvatureV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_CurvatureV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfstV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLngOfstV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LF_Vpath_RollingCount( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_RollingCount;
    return rc;
}

int8 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfst( )
{
    int8 rc;
    rc=F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLngOfst;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLatOfst( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLatOfst_0)<<8
    |((int16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLatOfst_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_LF_Vpath_Curvature( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Curvature_0)<<8
    |((int16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Curvature_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Estimate_LF_Vpath_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Checksum_1);
    return rc;
}

uint8 Get_R_SRR_Object_Header_LF_RSrrRollingCnt( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrRollingCnt;
    return rc;
}

uint8 Get_R_SRR_Object_Header_LF_RSRRModeCmdFdbk( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSRRModeCmdFdbk;
    return rc;
}

uint16 Get_R_SRR_Object_Header_LF_RSrrTimeStamp( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStamp_0)<<8
    |((uint16)R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStamp_1);
    return rc;
}

uint8 Get_R_SRR_Object_Header_LF_RSRRNumValidTargets( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSRRNumValidTargets;
    return rc;
}

uint8 Get_R_SRR_Object_Header_LF_RSrrTimeStampV( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStampV;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRSnstvFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSnstvFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRHWFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRHWFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRAntTngFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAntTngFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRCANIDAddrsUnsbl( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANIDAddrsUnsbl;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRCANRxErr( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANRxErr;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRCANSgnlSpvFld( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANSgnlSpvFld;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRDiagSpare( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRDiagSpare;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnPtchUp( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnPtchUp;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnPtchDn( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnPtchDn;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnRllLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnRllLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnRllRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnRllRt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRExtIntrfrnc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRExtIntrfrnc;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRPlntAlgnInProc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRPlntAlgnInProc;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRSvcAlgnInPrcs( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSvcAlgnInPrcs;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRAlgnFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAlgnFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRInitDiagCmplt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRInitDiagCmplt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRAmbTmpOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAmbTmpOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRAmbTmpOutRngLw( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAmbTmpOutRngLw;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRVltgOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRVltgOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRVltgOutRngLo( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRVltgOutRngLo;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRSnsrBlckd( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSnsrBlckd;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnYawLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnYawLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LF_RSRRMsalgnYawRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnYawRt;
    return rc;
}

uint16 Get_R_SRR_Object_Header_LF_RSrrBurstChecksum( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrBurstChecksum_0)<<8
    |((uint16)R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrBurstChecksum_1);
    return rc;
}

uint16 Get_R_SRR_Object_Track1_LF_RSrrTrkRange1( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRange1_0)<<8
    |((uint16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRange1_1);
    return rc;
}

int16 Get_R_SRR_Object_Track1_LF_RSrrTrkRRate1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRRate1_0)<<8
    |((int16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRRate1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkObjElevation1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObjElevation1;
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkDynamProp1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkDynamProp1;
    return rc;
}

int16 Get_R_SRR_Object_Track1_LF_RSrrTrkAzimuth1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkAzimuth1_0)<<8
    |((int16)R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkAzimuth1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkObjID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObjID1;
    return rc;
}

int8 Get_R_SRR_Object_Track1_LF_RSrrTrkObsRange1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObsRange1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LF_RSrrTrkMeasStatus1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkMeasStatus1;
    return rc;
}

int8 Get_R_SRR_Object_Track1_LF_RSrrTrkRawAzimuth1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRawAzimuth1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LF_RSrrBurstID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrBurstID1;
    return rc;
}

uint16 Get_R_SRR_Object_Track2_LF_RSrrTrkRange2( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRange2_0)<<8
    |((uint16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRange2_1);
    return rc;
}

int16 Get_R_SRR_Object_Track2_LF_RSrrTrkRRate2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRRate2_0)<<8
    |((int16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRRate2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkObjElevation2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObjElevation2;
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkDynamProp2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkDynamProp2;
    return rc;
}

int16 Get_R_SRR_Object_Track2_LF_RSrrTrkAzimuth2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkAzimuth2_0)<<8
    |((int16)R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkAzimuth2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkObjID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObjID2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_LF_RSrrTrkObsRange2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObsRange2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LF_RSrrTrkMeasStatus2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkMeasStatus2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_LF_RSrrTrkRawAzimuth2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRawAzimuth2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LF_RSrrBurstID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrBurstID2;
    return rc;
}

uint16 Get_R_SRR_Object_Track3_LF_RSrrTrkRange3( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRange3_0)<<8
    |((uint16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRange3_1);
    return rc;
}

int16 Get_R_SRR_Object_Track3_LF_RSrrTrkRRate3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRRate3_0)<<8
    |((int16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRRate3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkObjElevation3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObjElevation3;
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkDynamProp3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkDynamProp3;
    return rc;
}

int16 Get_R_SRR_Object_Track3_LF_RSrrTrkAzimuth3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkAzimuth3_0)<<8
    |((int16)R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkAzimuth3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkObjID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObjID3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_LF_RSrrTrkObsRange3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObsRange3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LF_RSrrTrkMeasStatus3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkMeasStatus3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_LF_RSrrTrkRawAzimuth3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRawAzimuth3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LF_RSrrBurstID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrBurstID3;
    return rc;
}

uint16 Get_R_SRR_Object_Track4_LF_RSrrTrkRange4( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRange4_0)<<8
    |((uint16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRange4_1);
    return rc;
}

int16 Get_R_SRR_Object_Track4_LF_RSrrTrkRRate4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRRate4_0)<<8
    |((int16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRRate4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkObjElevation4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObjElevation4;
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkDynamProp4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkDynamProp4;
    return rc;
}

int16 Get_R_SRR_Object_Track4_LF_RSrrTrkAzimuth4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkAzimuth4_0)<<8
    |((int16)R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkAzimuth4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkObjID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObjID4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_LF_RSrrTrkObsRange4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObsRange4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LF_RSrrTrkMeasStatus4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkMeasStatus4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_LF_RSrrTrkRawAzimuth4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRawAzimuth4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LF_RSrrBurstID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrBurstID4;
    return rc;
}

uint16 Get_R_SRR_Object_Track5_LF_RSrrTrkRange5( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRange5_0)<<8
    |((uint16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRange5_1);
    return rc;
}

int16 Get_R_SRR_Object_Track5_LF_RSrrTrkRRate5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRRate5_0)<<8
    |((int16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRRate5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkObjElevation5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObjElevation5;
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkDynamProp5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkDynamProp5;
    return rc;
}

int16 Get_R_SRR_Object_Track5_LF_RSrrTrkAzimuth5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkAzimuth5_0)<<8
    |((int16)R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkAzimuth5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkObjID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObjID5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_LF_RSrrTrkObsRange5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObsRange5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LF_RSrrTrkMeasStatus5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkMeasStatus5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_LF_RSrrTrkRawAzimuth5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRawAzimuth5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LF_RSrrBurstID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrBurstID5;
    return rc;
}

uint16 Get_R_SRR_Object_Track6_LF_RSrrTrkRange6( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRange6_0)<<8
    |((uint16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRange6_1);
    return rc;
}

int16 Get_R_SRR_Object_Track6_LF_RSrrTrkRRate6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRRate6_0)<<8
    |((int16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRRate6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkObjElevation6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObjElevation6;
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkDynamProp6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkDynamProp6;
    return rc;
}

int16 Get_R_SRR_Object_Track6_LF_RSrrTrkAzimuth6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkAzimuth6_0)<<8
    |((int16)R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkAzimuth6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkObjID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObjID6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_LF_RSrrTrkObsRange6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObsRange6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LF_RSrrTrkMeasStatus6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkMeasStatus6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_LF_RSrrTrkRawAzimuth6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRawAzimuth6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LF_RSrrBurstID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrBurstID6;
    return rc;
}

uint16 Get_R_SRR_Object_Track7_LF_RSrrTrkRange7( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRange7_0)<<8
    |((uint16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRange7_1);
    return rc;
}

int16 Get_R_SRR_Object_Track7_LF_RSrrTrkRRate7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRRate7_0)<<8
    |((int16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRRate7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkObjElevation7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObjElevation7;
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkDynamProp7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkDynamProp7;
    return rc;
}

int16 Get_R_SRR_Object_Track7_LF_RSrrTrkAzimuth7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkAzimuth7_0)<<8
    |((int16)R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkAzimuth7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkObjID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObjID7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_LF_RSrrTrkObsRange7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObsRange7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LF_RSrrTrkMeasStatus7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkMeasStatus7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_LF_RSrrTrkRawAzimuth7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRawAzimuth7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LF_RSrrBurstID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrBurstID7;
    return rc;
}

uint16 Get_R_SRR_Object_Track8_LF_RSrrTrkRange8( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRange8_0)<<8
    |((uint16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRange8_1);
    return rc;
}

int16 Get_R_SRR_Object_Track8_LF_RSrrTrkRRate8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRRate8_0)<<8
    |((int16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRRate8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkObjElevation8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObjElevation8;
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkDynamProp8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkDynamProp8;
    return rc;
}

int16 Get_R_SRR_Object_Track8_LF_RSrrTrkAzimuth8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkAzimuth8_0)<<8
    |((int16)R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkAzimuth8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkObjID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObjID8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_LF_RSrrTrkObsRange8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObsRange8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LF_RSrrTrkMeasStatus8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkMeasStatus8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_LF_RSrrTrkRawAzimuth8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRawAzimuth8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LF_RSrrBurstID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrBurstID8;
    return rc;
}

uint16 Get_R_SRR_Object_Track9_LF_RSrrTrkRange9( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRange9_0)<<8
    |((uint16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRange9_1);
    return rc;
}

int16 Get_R_SRR_Object_Track9_LF_RSrrTrkRRate9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRRate9_0)<<8
    |((int16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRRate9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkObjElevation9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObjElevation9;
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkDynamProp9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkDynamProp9;
    return rc;
}

int16 Get_R_SRR_Object_Track9_LF_RSrrTrkAzimuth9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkAzimuth9_0)<<8
    |((int16)R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkAzimuth9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkObjID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObjID9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_LF_RSrrTrkObsRange9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObsRange9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LF_RSrrTrkMeasStatus9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkMeasStatus9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_LF_RSrrTrkRawAzimuth9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRawAzimuth9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LF_RSrrBurstID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrBurstID9;
    return rc;
}

uint16 Get_R_SRR_Object_Track10_LF_RSrrTrkRange10( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRange10_0)<<8
    |((uint16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRange10_1);
    return rc;
}

int16 Get_R_SRR_Object_Track10_LF_RSrrTrkRRate10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRRate10_0)<<8
    |((int16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRRate10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkObjElevation10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObjElevation10;
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkDynamProp10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkDynamProp10;
    return rc;
}

int16 Get_R_SRR_Object_Track10_LF_RSrrTrkAzimuth10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkAzimuth10_0)<<8
    |((int16)R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkAzimuth10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkObjID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObjID10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_LF_RSrrTrkObsRange10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObsRange10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LF_RSrrTrkMeasStatus10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkMeasStatus10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_LF_RSrrTrkRawAzimuth10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRawAzimuth10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LF_RSrrBurstID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrBurstID10;
    return rc;
}

void Put_Body_Info_FOB_LF_HighBmAct(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.HighBmAct=sigData;
}

void Put_Body_Info_FOB_LF_LowBmAct(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.LowBmAct=sigData;
}

void Put_Body_Info_FOB_LF_WSWprAct(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.WSWprAct=sigData;
}

void Put_Body_Info_FOB_LF_LftLwBmFld(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.LftLwBmFld=sigData;
}

void Put_Body_Info_FOB_LF_RtLwBmFld(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.RtLwBmFld=sigData;
}

void Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStatV(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.OtsdAmbtLtLvlStatV=sigData;
}

void Put_Body_Info_FOB_LF_OtsdAmbtLtLvlStat(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.OtsdAmbtLtLvlStat=sigData;
}

void Put_Body_Info_FOB_LF_SysPwrMdV(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.SysPwrMdV=sigData;
}

void Put_Body_Info_FOB_LF_SysPwrMd(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.SysPwrMd=sigData;
}

void Put_Body_Info_FOB_LF_WSWshSwAtv(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.WSWshSwAtv=sigData;
}

void Put_Body_Info_FOB_LF_TrStLgMdAtv(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.TrStLgMdAtv=sigData;
}

void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn3(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn3=sigData;
}

void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn2(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn2=sigData;
}

void Put_Body_Info_FOB_LF_DrvrHndsOnWhlZn1(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvrHndsOnWhlZn1=sigData;
}

void Put_Body_Info_FOB_LF_DrDoorOpenSwActV(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrDoorOpenSwActV=sigData;
}

void Put_Body_Info_FOB_LF_DrDoorOpenSwAct(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrDoorOpenSwAct=sigData;
}

void Put_Body_Info_FOB_LF_StrgColCommsFlt(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColCommsFlt=sigData;
}

void Put_Body_Info_FOB_LF_DrvWndPosStat(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.DrvWndPosStat=sigData;
}

void Put_Body_Info_FOB_LF_InterLghtStat(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.InterLghtStat=sigData;
}

void Put_Body_Info_FOB_LF_StrgColInOutPos(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColInOutPos=sigData;
}

void Put_Body_Info_FOB_LF_StrgColUpDwnPos(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.StrgColUpDwnPos=sigData;
}

void Put_Body_Info_FOB_LF_CPMAPINFO4(uint8 sigData)
{
    Body_Info_FOB_LF_u.Body_Info_FOB_LF_Layout.CPMAPINFO4=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVelV=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRateV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRateV=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2TravlDirctn(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2TravlDirctn=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LongVel(int16 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVel_0=(int8)(sigData>>4);
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LongVel_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2YawRate(int16 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRate_0=(int8)(sigData>>8);
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2YawRate_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVel(int8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LatVel=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath2_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath2_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath2_Checksum_1=(uint8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2ModeInfo(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2ModeInfo=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2RollCnt(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2RollCnt=sigData;
}

void Put_F_Vehicle_Path_Data_2_LF_Vpath_Data2LatVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LF_u.F_Vehicle_Path_Data_2_LF_Layout.Vpath_Data2LatVelV=sigData;
}

void Put_F_Master_Time_Sync_LF_FTimeSyncMstrClock(uint32 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_0=(uint8)(sigData>>24);
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_1=(uint8)(sigData>>16);
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_2=(uint8)(sigData>>8);
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClock_3=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_LF_FTimeSyncMstrChksm(uint16 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrChksm_0=(uint8)(sigData>>8);
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrChksm_1=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_LF_FTimeSyncMstrClockV(uint8 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.FTimeSyncMstrClockV=sigData;
}

void Put_F_Master_Time_Sync_LF_SensorModeCmdLRR(uint8 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdLRR=sigData;
}

void Put_F_Master_Time_Sync_LF_SensorModeCmdSRR(uint8 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdSRR=sigData;
}

void Put_F_Master_Time_Sync_LF_SensorModeCmdFCamera(uint8 sigData)
{
    F_Master_Time_Sync_LF_u.F_Master_Time_Sync_LF_Layout.SensorModeCmdFCamera=sigData;
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_CurvatureV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_CurvatureV=sigData;
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfstV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLngOfstV=sigData;
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_RollingCount(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_RollingCount=sigData;
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLngOfst(int8 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLngOfst=sigData;
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_TrnCtrLatOfst(int16 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLatOfst_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_TrnCtrLatOfst_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_Curvature(int16 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Curvature_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Curvature_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_LF_Vpath_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Estimate_LF_u.F_Vehicle_Path_Estimate_LF_Layout.Vpath_Checksum_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Header_LF_RSrrRollingCnt(uint8 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrRollingCnt=sigData;
}

void Put_R_SRR_Object_Header_LF_RSRRModeCmdFdbk(uint8 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSRRModeCmdFdbk=sigData;
}

void Put_R_SRR_Object_Header_LF_RSrrTimeStamp(uint16 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStamp_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStamp_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Header_LF_RSRRNumValidTargets(uint8 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSRRNumValidTargets=sigData;
}

void Put_R_SRR_Object_Header_LF_RSrrTimeStampV(uint8 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrTimeStampV=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRSnstvFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSnstvFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRHWFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRHWFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRAntTngFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAntTngFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRCANIDAddrsUnsbl(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANIDAddrsUnsbl=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRCANRxErr(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANRxErr=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRCANSgnlSpvFld(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRCANSgnlSpvFld=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRDiagSpare(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRDiagSpare=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnPtchUp(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnPtchUp=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnPtchDn(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnPtchDn=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnRllLt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnRllLt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnRllRt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnRllRt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRExtIntrfrnc(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRExtIntrfrnc=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRPlntAlgnInProc(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRPlntAlgnInProc=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRSvcAlgnInPrcs(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSvcAlgnInPrcs=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRAlgnFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAlgnFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRInitDiagCmplt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRInitDiagCmplt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRAmbTmpOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAmbTmpOutRngHi=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRAmbTmpOutRngLw(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRAmbTmpOutRngLw=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRVltgOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRVltgOutRngHi=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRVltgOutRngLo(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRVltgOutRngLo=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRSnsrBlckd(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRSnsrBlckd=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnYawLt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnYawLt=sigData;
}

void Put_RSRRDiagStatus_LF_RSRRMsalgnYawRt(uint8 sigData)
{
    RSRRDiagStatus_LF_u.R_SRR_Object_Header_LF_Layout.RSRRMsalgnYawRt=sigData;
}

void Put_R_SRR_Object_Header_LF_RSrrBurstChecksum(uint16 sigData)
{
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrBurstChecksum_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_LF_u.R_SRR_Object_Header_LF_Layout.RSrrBurstChecksum_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkRange1(uint16 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRange1_0=(uint8)(sigData>>8);
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRange1_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkRRate1(int16 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRRate1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRRate1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkObjElevation1(uint8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObjElevation1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkDynamProp1(uint8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkDynamProp1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkAzimuth1(int16 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkAzimuth1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkAzimuth1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkObjID1(uint8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObjID1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkObsRange1(int8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkObsRange1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkMeasStatus1(uint8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkMeasStatus1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrTrkRawAzimuth1(int8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrTrkRawAzimuth1=sigData;
}

void Put_R_SRR_Object_Track1_LF_RSrrBurstID1(uint8 sigData)
{
    R_SRR_Object_Track1_LF_u.R_SRR_Object_Track1_LF_Layout.RSrrBurstID1=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkRange2(uint16 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRange2_0=(uint8)(sigData>>8);
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRange2_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkRRate2(int16 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRRate2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRRate2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkObjElevation2(uint8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObjElevation2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkDynamProp2(uint8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkDynamProp2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkAzimuth2(int16 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkAzimuth2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkAzimuth2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkObjID2(uint8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObjID2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkObsRange2(int8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkObsRange2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkMeasStatus2(uint8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkMeasStatus2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrTrkRawAzimuth2(int8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrTrkRawAzimuth2=sigData;
}

void Put_R_SRR_Object_Track2_LF_RSrrBurstID2(uint8 sigData)
{
    R_SRR_Object_Track2_LF_u.R_SRR_Object_Track2_LF_Layout.RSrrBurstID2=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkRange3(uint16 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRange3_0=(uint8)(sigData>>8);
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRange3_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkRRate3(int16 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRRate3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRRate3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkObjElevation3(uint8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObjElevation3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkDynamProp3(uint8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkDynamProp3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkAzimuth3(int16 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkAzimuth3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkAzimuth3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkObjID3(uint8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObjID3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkObsRange3(int8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkObsRange3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkMeasStatus3(uint8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkMeasStatus3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrTrkRawAzimuth3(int8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrTrkRawAzimuth3=sigData;
}

void Put_R_SRR_Object_Track3_LF_RSrrBurstID3(uint8 sigData)
{
    R_SRR_Object_Track3_LF_u.R_SRR_Object_Track3_LF_Layout.RSrrBurstID3=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkRange4(uint16 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRange4_0=(uint8)(sigData>>8);
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRange4_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkRRate4(int16 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRRate4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRRate4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkObjElevation4(uint8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObjElevation4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkDynamProp4(uint8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkDynamProp4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkAzimuth4(int16 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkAzimuth4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkAzimuth4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkObjID4(uint8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObjID4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkObsRange4(int8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkObsRange4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkMeasStatus4(uint8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkMeasStatus4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrTrkRawAzimuth4(int8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrTrkRawAzimuth4=sigData;
}

void Put_R_SRR_Object_Track4_LF_RSrrBurstID4(uint8 sigData)
{
    R_SRR_Object_Track4_LF_u.R_SRR_Object_Track4_LF_Layout.RSrrBurstID4=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkRange5(uint16 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRange5_0=(uint8)(sigData>>8);
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRange5_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkRRate5(int16 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRRate5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRRate5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkObjElevation5(uint8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObjElevation5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkDynamProp5(uint8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkDynamProp5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkAzimuth5(int16 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkAzimuth5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkAzimuth5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkObjID5(uint8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObjID5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkObsRange5(int8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkObsRange5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkMeasStatus5(uint8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkMeasStatus5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrTrkRawAzimuth5(int8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrTrkRawAzimuth5=sigData;
}

void Put_R_SRR_Object_Track5_LF_RSrrBurstID5(uint8 sigData)
{
    R_SRR_Object_Track5_LF_u.R_SRR_Object_Track5_LF_Layout.RSrrBurstID5=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkRange6(uint16 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRange6_0=(uint8)(sigData>>8);
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRange6_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkRRate6(int16 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRRate6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRRate6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkObjElevation6(uint8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObjElevation6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkDynamProp6(uint8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkDynamProp6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkAzimuth6(int16 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkAzimuth6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkAzimuth6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkObjID6(uint8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObjID6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkObsRange6(int8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkObsRange6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkMeasStatus6(uint8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkMeasStatus6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrTrkRawAzimuth6(int8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrTrkRawAzimuth6=sigData;
}

void Put_R_SRR_Object_Track6_LF_RSrrBurstID6(uint8 sigData)
{
    R_SRR_Object_Track6_LF_u.R_SRR_Object_Track6_LF_Layout.RSrrBurstID6=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkRange7(uint16 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRange7_0=(uint8)(sigData>>8);
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRange7_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkRRate7(int16 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRRate7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRRate7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkObjElevation7(uint8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObjElevation7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkDynamProp7(uint8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkDynamProp7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkAzimuth7(int16 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkAzimuth7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkAzimuth7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkObjID7(uint8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObjID7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkObsRange7(int8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkObsRange7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkMeasStatus7(uint8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkMeasStatus7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrTrkRawAzimuth7(int8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrTrkRawAzimuth7=sigData;
}

void Put_R_SRR_Object_Track7_LF_RSrrBurstID7(uint8 sigData)
{
    R_SRR_Object_Track7_LF_u.R_SRR_Object_Track7_LF_Layout.RSrrBurstID7=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkRange8(uint16 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRange8_0=(uint8)(sigData>>8);
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRange8_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkRRate8(int16 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRRate8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRRate8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkObjElevation8(uint8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObjElevation8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkDynamProp8(uint8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkDynamProp8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkAzimuth8(int16 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkAzimuth8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkAzimuth8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkObjID8(uint8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObjID8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkObsRange8(int8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkObsRange8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkMeasStatus8(uint8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkMeasStatus8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrTrkRawAzimuth8(int8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrTrkRawAzimuth8=sigData;
}

void Put_R_SRR_Object_Track8_LF_RSrrBurstID8(uint8 sigData)
{
    R_SRR_Object_Track8_LF_u.R_SRR_Object_Track8_LF_Layout.RSrrBurstID8=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkRange9(uint16 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRange9_0=(uint8)(sigData>>8);
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRange9_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkRRate9(int16 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRRate9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRRate9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkObjElevation9(uint8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObjElevation9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkDynamProp9(uint8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkDynamProp9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkAzimuth9(int16 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkAzimuth9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkAzimuth9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkObjID9(uint8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObjID9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkObsRange9(int8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkObsRange9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkMeasStatus9(uint8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkMeasStatus9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrTrkRawAzimuth9(int8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrTrkRawAzimuth9=sigData;
}

void Put_R_SRR_Object_Track9_LF_RSrrBurstID9(uint8 sigData)
{
    R_SRR_Object_Track9_LF_u.R_SRR_Object_Track9_LF_Layout.RSrrBurstID9=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkRange10(uint16 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRange10_0=(uint8)(sigData>>8);
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRange10_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkRRate10(int16 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRRate10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRRate10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkObjElevation10(uint8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObjElevation10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkDynamProp10(uint8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkDynamProp10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkAzimuth10(int16 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkAzimuth10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkAzimuth10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkObjID10(uint8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObjID10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkObsRange10(int8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkObsRange10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkMeasStatus10(uint8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkMeasStatus10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrTrkRawAzimuth10(int8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrTrkRawAzimuth10=sigData;
}

void Put_R_SRR_Object_Track10_LF_RSrrBurstID10(uint8 sigData)
{
    R_SRR_Object_Track10_LF_u.R_SRR_Object_Track10_LF_Layout.RSrrBurstID10=sigData;
}

