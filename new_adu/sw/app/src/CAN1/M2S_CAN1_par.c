#include "M2S_CAN1_par.h"


void Update_RSRRDiagStatus_LR_ShadowBuffer()
{
   memcpy(RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Buffer,R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Buffer,8);
}


uint32 Get_F_Master_Time_Sync_LR_FTimeSyncMstrClock( )
{
    uint32 rc;
    rc=((uint32)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_0)<<24
    |((uint32)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_1)<<16
    |((uint32)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_2)<<8
    |((uint32)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_3);
    return rc;
}

uint16 Get_F_Master_Time_Sync_LR_FTimeSyncMstrChksm( )
{
    uint16 rc;
    rc=((uint16)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrChksm_0)<<8
    |((uint16)F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrChksm_1);
    return rc;
}

uint8 Get_F_Master_Time_Sync_LR_FTimeSyncMstrClockV( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClockV;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdLRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdLRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdSRR( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdSRR;
    return rc;
}

uint8 Get_F_Master_Time_Sync_LR_SensorModeCmdFCamera( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdFCamera;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_CurvatureV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_CurvatureV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfstV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLngOfstV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Estimate_LR_Vpath_RollingCount( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_RollingCount;
    return rc;
}

int8 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfst( )
{
    int8 rc;
    rc=F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLngOfst;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLatOfst( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLatOfst_0)<<8
    |((int16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLatOfst_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Estimate_LR_Vpath_Curvature( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Curvature_0)<<8
    |((int16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Curvature_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Estimate_LR_Vpath_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Checksum_1);
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVelV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRateV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRateV;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2TravlDirctn( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2TravlDirctn;
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVel( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVel_0)<<4
    |((int16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVel_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRate( )
{
    int16 rc;
    rc=((int16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRate_0)<<8
    |((int16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRate_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-4)-1<<(sizeof(rc)*8)-(8-4));
    }
    return rc;
}

int8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVel( )
{
    int8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LatVel;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_F_Vehicle_Path_Data_2_LR_Vpath2_Checksum( )
{
    uint16 rc;
    rc=((uint16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath2_Checksum_0)<<8
    |((uint16)F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath2_Checksum_1);
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2ModeInfo( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2ModeInfo;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2RollCnt( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2RollCnt;
    return rc;
}

uint8 Get_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVelV( )
{
    uint8 rc;
    rc=F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LatVelV;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_HighBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.HighBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_LowBmAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.LowBmAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_WSWprAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.WSWprAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_LftLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.LftLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_RtLwBmFld( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.RtLwBmFld;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_OtsdAmbtLtLvlStatV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.OtsdAmbtLtLvlStatV;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_OtsdAmbtLtLvlStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.OtsdAmbtLtLvlStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_SysPwrMdV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.SysPwrMdV;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_SysPwrMd( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.SysPwrMd;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_WSWshSwAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.WSWshSwAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_TrStLgMdAtv( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.TrStLgMdAtv;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn3( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn3;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn2( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn2;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrvrHndsOnWhlZn1( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn1;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrDoorOpenSwActV( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrDoorOpenSwActV;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrDoorOpenSwAct( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrDoorOpenSwAct;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_StrgColCommsFlt( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColCommsFlt;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_DrvWndPosStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvWndPosStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_InterLghtStat( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.InterLghtStat;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_StrgColInOutPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColInOutPos;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_StrgColUpDwnPos( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColUpDwnPos;
    return rc;
}

uint8 Get_Body_Info_FOB_LR_CPMAPINFO4( )
{
    uint8 rc;
    rc=Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.CPMAPINFO4;
    return rc;
}

uint8 Get_R_SRR_Object_Header_LR_RSrrRollingCnt( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrRollingCnt;
    return rc;
}

uint8 Get_R_SRR_Object_Header_LR_RSRRModeCmdFdbk( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSRRModeCmdFdbk;
    return rc;
}

uint16 Get_R_SRR_Object_Header_LR_RSrrTimeStamp( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStamp_0)<<8
    |((uint16)R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStamp_1);
    return rc;
}

uint8 Get_R_SRR_Object_Header_LR_RSRRNumValidTargets( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSRRNumValidTargets;
    return rc;
}

uint8 Get_R_SRR_Object_Header_LR_RSrrTimeStampV( )
{
    uint8 rc;
    rc=R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStampV;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRSnstvFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSnstvFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRHWFltPrsntInt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRHWFltPrsntInt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRAntTngFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAntTngFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRCANIDAddrsUnsbl( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANIDAddrsUnsbl;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRCANRxErr( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANRxErr;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRCANSgnlSpvFld( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANSgnlSpvFld;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRDiagSpare( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRDiagSpare;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnPtchUp( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnPtchUp;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnPtchDn( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnPtchDn;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnRllLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnRllLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnRllRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnRllRt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRExtIntrfrnc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRExtIntrfrnc;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRPlntAlgnInProc( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRPlntAlgnInProc;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRSvcAlgnInPrcs( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSvcAlgnInPrcs;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRAlgnFltPrsnt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAlgnFltPrsnt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRInitDiagCmplt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRInitDiagCmplt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRAmbTmpOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAmbTmpOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRAmbTmpOutRngLw( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAmbTmpOutRngLw;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRVltgOutRngHi( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRVltgOutRngHi;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRVltgOutRngLo( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRVltgOutRngLo;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRSnsrBlckd( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSnsrBlckd;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnYawLt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnYawLt;
    return rc;
}

uint8 Get_RSRRDiagStatus_LR_RSRRMsalgnYawRt( )
{
    uint8 rc;
    rc=RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnYawRt;
    return rc;
}

uint16 Get_R_SRR_Object_Header_LR_RSrrBurstChecksum( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrBurstChecksum_0)<<8
    |((uint16)R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrBurstChecksum_1);
    return rc;
}

uint16 Get_R_SRR_Object_Track1_LR_RSrrTrkRange1( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRange1_0)<<8
    |((uint16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRange1_1);
  // printf("TrkRange1 = %d\n",rc);
    return rc;
}

int16 Get_R_SRR_Object_Track1_LR_RSrrTrkRRate1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRRate1_0)<<8
    |((int16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRRate1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkObjElevation1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObjElevation1;
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkDynamProp1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkDynamProp1;
    return rc;
}

int16 Get_R_SRR_Object_Track1_LR_RSrrTrkAzimuth1( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkAzimuth1_0)<<8
    |((int16)R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkAzimuth1_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkObjID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObjID1;
	//printf("ObjID = %d\n",rc);
    return rc;
}

int8 Get_R_SRR_Object_Track1_LR_RSrrTrkObsRange1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObsRange1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LR_RSrrTrkMeasStatus1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkMeasStatus1;
    return rc;
}

int8 Get_R_SRR_Object_Track1_LR_RSrrTrkRawAzimuth1( )
{
    int8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRawAzimuth1;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track1_LR_RSrrBurstID1( )
{
    uint8 rc;
    rc=R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrBurstID1;
    return rc;
}

uint16 Get_R_SRR_Object_Track2_LR_RSrrTrkRange2( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRange2_0)<<8
    |((uint16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRange2_1);
    return rc;
}

int16 Get_R_SRR_Object_Track2_LR_RSrrTrkRRate2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRRate2_0)<<8
    |((int16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRRate2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkObjElevation2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObjElevation2;
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkDynamProp2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkDynamProp2;
    return rc;
}

int16 Get_R_SRR_Object_Track2_LR_RSrrTrkAzimuth2( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkAzimuth2_0)<<8
    |((int16)R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkAzimuth2_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkObjID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObjID2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_LR_RSrrTrkObsRange2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObsRange2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LR_RSrrTrkMeasStatus2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkMeasStatus2;
    return rc;
}

int8 Get_R_SRR_Object_Track2_LR_RSrrTrkRawAzimuth2( )
{
    int8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRawAzimuth2;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track2_LR_RSrrBurstID2( )
{
    uint8 rc;
    rc=R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrBurstID2;
    return rc;
}

uint16 Get_R_SRR_Object_Track3_LR_RSrrTrkRange3( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRange3_0)<<8
    |((uint16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRange3_1);
    return rc;
}

int16 Get_R_SRR_Object_Track3_LR_RSrrTrkRRate3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRRate3_0)<<8
    |((int16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRRate3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkObjElevation3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObjElevation3;
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkDynamProp3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkDynamProp3;
    return rc;
}

int16 Get_R_SRR_Object_Track3_LR_RSrrTrkAzimuth3( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkAzimuth3_0)<<8
    |((int16)R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkAzimuth3_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkObjID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObjID3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_LR_RSrrTrkObsRange3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObsRange3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LR_RSrrTrkMeasStatus3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkMeasStatus3;
    return rc;
}

int8 Get_R_SRR_Object_Track3_LR_RSrrTrkRawAzimuth3( )
{
    int8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRawAzimuth3;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track3_LR_RSrrBurstID3( )
{
    uint8 rc;
    rc=R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrBurstID3;
    return rc;
}

uint16 Get_R_SRR_Object_Track4_LR_RSrrTrkRange4( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRange4_0)<<8
    |((uint16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRange4_1);
    return rc;
}

int16 Get_R_SRR_Object_Track4_LR_RSrrTrkRRate4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRRate4_0)<<8
    |((int16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRRate4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkObjElevation4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObjElevation4;
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkDynamProp4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkDynamProp4;
    return rc;
}

int16 Get_R_SRR_Object_Track4_LR_RSrrTrkAzimuth4( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkAzimuth4_0)<<8
    |((int16)R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkAzimuth4_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkObjID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObjID4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_LR_RSrrTrkObsRange4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObsRange4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LR_RSrrTrkMeasStatus4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkMeasStatus4;
    return rc;
}

int8 Get_R_SRR_Object_Track4_LR_RSrrTrkRawAzimuth4( )
{
    int8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRawAzimuth4;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track4_LR_RSrrBurstID4( )
{
    uint8 rc;
    rc=R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrBurstID4;
    return rc;
}

uint16 Get_R_SRR_Object_Track5_LR_RSrrTrkRange5( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRange5_0)<<8
    |((uint16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRange5_1);
    return rc;
}

int16 Get_R_SRR_Object_Track5_LR_RSrrTrkRRate5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRRate5_0)<<8
    |((int16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRRate5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkObjElevation5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObjElevation5;
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkDynamProp5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkDynamProp5;
    return rc;
}

int16 Get_R_SRR_Object_Track5_LR_RSrrTrkAzimuth5( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkAzimuth5_0)<<8
    |((int16)R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkAzimuth5_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkObjID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObjID5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_LR_RSrrTrkObsRange5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObsRange5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LR_RSrrTrkMeasStatus5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkMeasStatus5;
    return rc;
}

int8 Get_R_SRR_Object_Track5_LR_RSrrTrkRawAzimuth5( )
{
    int8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRawAzimuth5;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track5_LR_RSrrBurstID5( )
{
    uint8 rc;
    rc=R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrBurstID5;
    return rc;
}

uint16 Get_R_SRR_Object_Track6_LR_RSrrTrkRange6( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRange6_0)<<8
    |((uint16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRange6_1);
    return rc;
}

int16 Get_R_SRR_Object_Track6_LR_RSrrTrkRRate6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRRate6_0)<<8
    |((int16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRRate6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkObjElevation6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObjElevation6;
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkDynamProp6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkDynamProp6;
    return rc;
}

int16 Get_R_SRR_Object_Track6_LR_RSrrTrkAzimuth6( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkAzimuth6_0)<<8
    |((int16)R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkAzimuth6_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkObjID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObjID6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_LR_RSrrTrkObsRange6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObsRange6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LR_RSrrTrkMeasStatus6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkMeasStatus6;
    return rc;
}

int8 Get_R_SRR_Object_Track6_LR_RSrrTrkRawAzimuth6( )
{
    int8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRawAzimuth6;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track6_LR_RSrrBurstID6( )
{
    uint8 rc;
    rc=R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrBurstID6;
    return rc;
}

uint16 Get_R_SRR_Object_Track7_LR_RSrrTrkRange7( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRange7_0)<<8
    |((uint16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRange7_1);
    return rc;
}

int16 Get_R_SRR_Object_Track7_LR_RSrrTrkRRate7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRRate7_0)<<8
    |((int16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRRate7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkObjElevation7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObjElevation7;
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkDynamProp7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkDynamProp7;
    return rc;
}

int16 Get_R_SRR_Object_Track7_LR_RSrrTrkAzimuth7( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkAzimuth7_0)<<8
    |((int16)R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkAzimuth7_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkObjID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObjID7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_LR_RSrrTrkObsRange7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObsRange7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LR_RSrrTrkMeasStatus7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkMeasStatus7;
    return rc;
}

int8 Get_R_SRR_Object_Track7_LR_RSrrTrkRawAzimuth7( )
{
    int8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRawAzimuth7;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track7_LR_RSrrBurstID7( )
{
    uint8 rc;
    rc=R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrBurstID7;
    return rc;
}

uint16 Get_R_SRR_Object_Track8_LR_RSrrTrkRange8( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRange8_0)<<8
    |((uint16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRange8_1);
    return rc;
}

int16 Get_R_SRR_Object_Track8_LR_RSrrTrkRRate8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRRate8_0)<<8
    |((int16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRRate8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkObjElevation8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObjElevation8;
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkDynamProp8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkDynamProp8;
    return rc;
}

int16 Get_R_SRR_Object_Track8_LR_RSrrTrkAzimuth8( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkAzimuth8_0)<<8
    |((int16)R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkAzimuth8_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkObjID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObjID8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_LR_RSrrTrkObsRange8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObsRange8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LR_RSrrTrkMeasStatus8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkMeasStatus8;
    return rc;
}

int8 Get_R_SRR_Object_Track8_LR_RSrrTrkRawAzimuth8( )
{
    int8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRawAzimuth8;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track8_LR_RSrrBurstID8( )
{
    uint8 rc;
    rc=R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrBurstID8;
    return rc;
}

uint16 Get_R_SRR_Object_Track9_LR_RSrrTrkRange9( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRange9_0)<<8
    |((uint16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRange9_1);
    return rc;
}

int16 Get_R_SRR_Object_Track9_LR_RSrrTrkRRate9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRRate9_0)<<8
    |((int16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRRate9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkObjElevation9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObjElevation9;
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkDynamProp9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkDynamProp9;
    return rc;
}

int16 Get_R_SRR_Object_Track9_LR_RSrrTrkAzimuth9( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkAzimuth9_0)<<8
    |((int16)R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkAzimuth9_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkObjID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObjID9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_LR_RSrrTrkObsRange9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObsRange9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LR_RSrrTrkMeasStatus9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkMeasStatus9;
    return rc;
}

int8 Get_R_SRR_Object_Track9_LR_RSrrTrkRawAzimuth9( )
{
    int8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRawAzimuth9;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track9_LR_RSrrBurstID9( )
{
    uint8 rc;
    rc=R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrBurstID9;
    return rc;
}

uint16 Get_R_SRR_Object_Track10_LR_RSrrTrkRange10( )
{
    uint16 rc;
    rc=((uint16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRange10_0)<<8
    |((uint16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRange10_1);
    return rc;
}

int16 Get_R_SRR_Object_Track10_LR_RSrrTrkRRate10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRRate10_0)<<8
    |((int16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRRate10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkObjElevation10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObjElevation10;
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkDynamProp10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkDynamProp10;
    return rc;
}

int16 Get_R_SRR_Object_Track10_LR_RSrrTrkAzimuth10( )
{
    int16 rc;
    rc=((int16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkAzimuth10_0)<<8
    |((int16)R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkAzimuth10_1);
    if(rc>((1<<10)-1))
    {
     rc=rc|(int16)((1<<8-3)-1<<(sizeof(rc)*8)-(8-3));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkObjID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObjID10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_LR_RSrrTrkObsRange10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObsRange10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LR_RSrrTrkMeasStatus10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkMeasStatus10;
    return rc;
}

int8 Get_R_SRR_Object_Track10_LR_RSrrTrkRawAzimuth10( )
{
    int8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRawAzimuth10;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_R_SRR_Object_Track10_LR_RSrrBurstID10( )
{
    uint8 rc;
    rc=R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrBurstID10;
    return rc;
}

uint16 Get_ESR_Status1_CAN_TX_DSP_TIMESTAMP( )
{
    uint16 rc;
    rc=((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_DSP_TIMESTAMP_0)<<1
    |((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_DSP_TIMESTAMP_1);
    return rc;
}

uint8 Get_ESR_Status1_CAN_TX_ROLLING_COUNT_1_flag( )
{
    uint8 rc;
    rc=ESR_Status1_u.ESR_Status1_Layout.CAN_TX_ROLLING_COUNT_1_flag;
    return rc;
}

int16 Get_ESR_Status1_CAN_TX_RADIUS_CURVATURE_CALC( )
{
    int16 rc;
    rc=((int16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_RADIUS_CURVATURE_CALC_0)<<8
    |((int16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_RADIUS_CURVATURE_CALC_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Status1_CAN_TX_COMM_ERROR( )
{
    uint8 rc;
    rc=ESR_Status1_u.ESR_Status1_Layout.CAN_TX_COMM_ERROR;
    return rc;
}

uint16 Get_ESR_Status1_CAN_TX_SCAN_INDEX( )
{
    uint16 rc;
    rc=((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_SCAN_INDEX_0)<<8
    |((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_SCAN_INDEX_1);
    return rc;
}

int16 Get_ESR_Status1_CAN_TX_YAW_RATE_CALC( )
{
    int16 rc;
    rc=((int16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_YAW_RATE_CALC_0)<<4
    |((int16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_YAW_RATE_CALC_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_ESR_Status1_CAN_TX_VEHICLE_SPEED_CALC( )
{
    uint16 rc;
    rc=((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_VEHICLE_SPEED_CALC_0)<<8
    |((uint16)ESR_Status1_u.ESR_Status1_Layout.CAN_TX_VEHICLE_SPEED_CALC_1);
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_MAXIMUM_TRACKS_ACK( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_MAXIMUM_TRACKS_ACK;
    return rc;
}

uint16 Get_ESR_Status2_CAN_TX_STEERING_ANGLE_ACK( )
{
    uint16 rc;
    rc=((uint16)ESR_Status2_u.ESR_Status2_Layout.CAN_TX_STEERING_ANGLE_ACK_0)<<8
    |((uint16)ESR_Status2_u.ESR_Status2_Layout.CAN_TX_STEERING_ANGLE_ACK_1);
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_RAW_DATA_MODE( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_RAW_DATA_MODE;
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_XCVR_OPERATIONAL( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_XCVR_OPERATIONAL;
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_INTERNAL_ERROR( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_INTERNAL_ERROR;
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_RANGE_PERF_ERROR( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_RANGE_PERF_ERROR;
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_OVERHEAT_ERROR( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_OVERHEAT_ERROR;
    return rc;
}

int8 Get_ESR_Status2_CAN_TX_TEMPERATURE( )
{
    int8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_TEMPERATURE;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Status2_CAN_TX_GROUPING_MODE( )
{
    uint8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_GROUPING_MODE;
    return rc;
}

int8 Get_ESR_Status2_CAN_TX_VEH_SPD_COMP_FACTOR( )
{
    int8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_VEH_SPD_COMP_FACTOR;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int8 Get_ESR_Status2_CAN_TX_YAW_RATE_BIAS( )
{
    int8 rc;
    rc=ESR_Status2_u.ESR_Status2_Layout.CAN_TX_YAW_RATE_BIAS;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_ESR_Status2_CAN_TX_SW_VERSION_DSP( )
{
    uint16 rc;
    rc=((uint16)ESR_Status2_u.ESR_Status2_Layout.CAN_TX_SW_VERSION_DSP_0)<<8
    |((uint16)ESR_Status2_u.ESR_Status2_Layout.CAN_TX_SW_VERSION_DSP_1);
    return rc;
}

uint8 Get_ESR_Status3_CAN_TX_HW_VERSION( )
{
    uint8 rc;
    rc=ESR_Status3_u.ESR_Status3_Layout.CAN_TX_HW_VERSION;
    return rc;
}

uint8 Get_ESR_Status3_CAN_TX_INTERFACE_VERSION( )
{
    uint8 rc;
    rc=ESR_Status3_u.ESR_Status3_Layout.CAN_TX_INTERFACE_VERSION;
    return rc;
}

uint32 Get_ESR_Status3_CAN_TX_SW_VERSION_HOST( )
{
    uint32 rc;
    rc=((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_0)<<16
    |((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_1)<<8
    |((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_2);
    return rc;
}

uint32 Get_ESR_Status3_CAN_TX_SERIAL_NUM( )
{
    uint32 rc;
    rc=((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_0)<<16
    |((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_1)<<8
    |((uint32)ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_2);
    return rc;
}

uint8 Get_ESR_Status3_CAN_TX_SW_VERSION_PLD( )
{
    uint8 rc;
    rc=ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_PLD;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_ROLLING_COUNT_3_flag( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_ROLLING_COUNT_3_flag;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_MR_LR_MODE( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_MR_LR_MODE;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PARTIAL_BLOCKAGE( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PARTIAL_BLOCKAGE;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_SIDELOBE_BLOCKAGE( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_SIDELOBE_BLOCKAGE;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_LR_ONLY_GRATING_LOBE_DET( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_LR_ONLY_GRATING_LOBE_DET;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_TRUCK_TARGET_DET( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_TRUCK_TARGET_DET;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_ACC( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_ACC;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_CMBB_MOVE( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_CMBB_MOVE;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_CMBB_STAT( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_CMBB_STAT;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_FCW_MOVE( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_FCW_MOVE;
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_FCW_STAT( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_FCW_STAT;
    return rc;
}

int8 Get_ESR_Status4_CAN_TX_AUTO_ALIGN_ANGLE( )
{
    int8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_AUTO_ALIGN_ANGLE;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Status4_CAN_TX_PATH_ID_ACC_STAT( )
{
    uint8 rc;
    rc=ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_ACC_STAT;
    return rc;
}

uint16 Get_Vehicle1_CAN_RX_VEHICLE_SPEED( )
{
    uint16 rc;
    rc=((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_0)<<3
    |((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_1);
    return rc;
}

int16 Get_Vehicle1_CAN_RX_YAW_RATE( )
{
    int16 rc;
    rc=((int16)Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_0)<<8
    |((int16)Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_1);
    if(rc>((1<<11)-1))
    {
     rc=rc|(int16)((1<<8-4)-1<<(sizeof(rc)*8)-(8-4));
    }
    return rc;
}

uint8 Get_Vehicle1_CAN_RX_VEHICLE_SPEED_DIRECTION( )
{
    uint8 rc;
    rc=Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_DIRECTION;
    return rc;
}

int16 Get_Vehicle1_CAN_RX_RADIUS_CURVATURE( )
{
    int16 rc;
    rc=((int16)Vehicle1_u.Vehicle1_Layout.CAN_RX_RADIUS_CURVATURE_0)<<8
    |((int16)Vehicle1_u.Vehicle1_Layout.CAN_RX_RADIUS_CURVATURE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_RATE_SIGN( )
{
    uint8 rc;
    rc=Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_SIGN;
    return rc;
}

uint8 Get_Vehicle1_CAN_RX_YAW_RATE_VALIDITY( )
{
    uint8 rc;
    rc=Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_VALIDITY;
    return rc;
}

uint16 Get_Vehicle1_CAN_RX_STEERING_ANGLE( )
{
    uint16 rc;
    rc=((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_0)<<5
    |((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_1);
    return rc;
}

uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_SIGN( )
{
    uint8 rc;
    rc=Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_SIGN;
    return rc;
}

uint8 Get_Vehicle1_CAN_RX_STEERING_ANGLE_VALIDITY( )
{
    uint8 rc;
    rc=Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_VALIDITY;
    return rc;
}

uint16 Get_Vehicle1_CAN_RX_STEERING_ANGLE_RATE( )
{
    uint16 rc;
    rc=((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_0)<<8
    |((uint16)Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_1);
    return rc;
}

uint16 Get_Vehicle2_CAN_RX_SCAN_INDEX_ACK( )
{
    uint16 rc;
    rc=((uint16)Vehicle2_u.Vehicle2_Layout.CAN_RX_SCAN_INDEX_ACK_0)<<8
    |((uint16)Vehicle2_u.Vehicle2_Layout.CAN_RX_SCAN_INDEX_ACK_1);
    return rc;
}

int8 Get_Vehicle2_CAN_RX_HIGH_YAW_ANGLE( )
{
    int8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_HIGH_YAW_ANGLE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_CLEAR_FAULTS( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_CLEAR_FAULTS;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_USE_ANGLE_MISALIGNMENT( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_USE_ANGLE_MISALIGNMENT;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_LR_ONLY_TRANSMIT( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_LR_ONLY_TRANSMIT;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_MR_ONLY_TRANSMIT( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_MR_ONLY_TRANSMIT;
    return rc;
}

int8 Get_Vehicle2_CAN_RX_VOLVO_SHORT_TRACK_ROC( )
{
    int8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_VOLVO_SHORT_TRACK_ROC;
    if(rc>((1<<4-1)-1))
    {
     rc=rc|(int8)((1<<8-4)-1<<(sizeof(rc)*8)-(8-4));
    }
    return rc;
}

int8 Get_Vehicle2_CAN_RX_ANGLE_MISALIGNMENT( )
{
    int8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_ANGLE_MISALIGNMENT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_Vehicle2_CAN_RX_LATERAL_MOUNTING_OFFSET( )
{
    int8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_LATERAL_MOUNTING_OFFSET;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_MAXIMUM_TRACKS( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_MAXIMUM_TRACKS;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_BLOCKAGE_DISABLE( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_BLOCKAGE_DISABLE;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_RADAR_CMD_RADIATE( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_RADAR_CMD_RADIATE;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_RAW_DATA_ENABLE( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_RAW_DATA_ENABLE;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_WIPER_STATUS( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_WIPER_STATUS;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_GROUPING_MODE( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_GROUPING_MODE;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_MMR_UPSIDE_DOWN( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_MMR_UPSIDE_DOWN;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_VEHICLE_SPEED_VALIDITY( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_VEHICLE_SPEED_VALIDITY;
    return rc;
}

uint8 Get_Vehicle2_CAN_RX_TURN_SIGNAL_STATUS( )
{
    uint8 rc;
    rc=Vehicle2_u.Vehicle2_Layout.CAN_RX_TURN_SIGNAL_STATUS;
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track01_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track01_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track01_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track01_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track01_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track01_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track02_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track02_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track02_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track02_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track02_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track02_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track03_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track03_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track03_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track03_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track03_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track03_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track04_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track04_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track04_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track04_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track04_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track04_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track05_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track05_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track05_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track05_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track05_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track05_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track06_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track06_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track06_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track06_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track06_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track06_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track07_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track07_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track07_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track07_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track07_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track07_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track08_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track08_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track08_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track08_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track08_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track08_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track09_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track09_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track09_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track09_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track09_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track09_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track10_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track10_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track10_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track10_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track10_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track10_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track11_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track11_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track11_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track11_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track11_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track11_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track12_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track12_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track12_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track12_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track12_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track12_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track13_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track13_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track13_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track13_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track13_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track13_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track14_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track14_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track14_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track14_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track14_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track14_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track15_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track15_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track15_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track15_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track15_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track15_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track16_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track16_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track16_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track16_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track16_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track16_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track17_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track17_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track17_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track17_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track17_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track17_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track18_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track18_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track18_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track18_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track18_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track18_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track19_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track19_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track19_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track19_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track19_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track19_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track20_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track20_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track20_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track20_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track20_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track20_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track21_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track21_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track21_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track21_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track21_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track21_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track22_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track22_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track22_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track22_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track22_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track22_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track23_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track23_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track23_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track23_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track23_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track23_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track24_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track24_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track24_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track24_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track24_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track24_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track25_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track25_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track25_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track25_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track25_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track25_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track26_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track26_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track26_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track26_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track26_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track26_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track27_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track27_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track27_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track27_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track27_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track27_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track28_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track28_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track28_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track28_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track28_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track28_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track29_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track29_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track29_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track29_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track29_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track29_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track30_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track30_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track30_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track30_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track30_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track30_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track31_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track31_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track31_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track31_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track31_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track31_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track32_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track32_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track32_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track32_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track32_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track32_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track33_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track33_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track33_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track33_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track33_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track33_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track34_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track34_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track34_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track34_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track34_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track34_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track35_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track35_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track35_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track35_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track35_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track35_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track36_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track36_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track36_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track36_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track36_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track36_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track37_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track37_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track37_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track37_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track37_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track37_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track38_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track38_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track38_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track38_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track38_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track38_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track39_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track39_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track39_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track39_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track39_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track39_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track40_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track40_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track40_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track40_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track40_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track40_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track41_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track41_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track41_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track41_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track41_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track41_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track42_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track42_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track42_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track42_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track42_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track42_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track43_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track43_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track43_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track43_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track43_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track43_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track44_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track44_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track44_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track44_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track44_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track44_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track45_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track45_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track45_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track45_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track45_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track45_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track46_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track46_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track46_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track46_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track46_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track46_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track47_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track47_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track47_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track47_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track47_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track47_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track48_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track48_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track48_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track48_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track48_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track48_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track49_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track49_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track49_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track49_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track49_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track49_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track50_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track50_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track50_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track50_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track50_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track50_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track51_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track51_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track51_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track51_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track51_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track51_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track52_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track52_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track52_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track52_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track52_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track52_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track53_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track53_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track53_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track53_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track53_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track53_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track54_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track54_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track54_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track54_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track54_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track54_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track55_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track55_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track55_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track55_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track55_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track55_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track56_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track56_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track56_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track56_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track56_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track56_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track57_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track57_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track57_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track57_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track57_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track57_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track58_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track58_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track58_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track58_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track58_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track58_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track59_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track59_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track59_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track59_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track59_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track59_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track60_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track60_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track60_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track60_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track60_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track60_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track61_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track61_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track61_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track61_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track61_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track61_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track62_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track62_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track62_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track62_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track62_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track62_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track63_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track63_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track63_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track63_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track63_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track63_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_ONCOMING( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ONCOMING;
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_GROUPING_CHANGED( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_GROUPING_CHANGED;
    return rc;
}

int8 Get_ESR_Track64_CAN_TX_TRACK_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_LAT_RATE;
    if(rc>((1<<6-1)-1))
    {
     rc=rc|(int8)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

int16 Get_ESR_Track64_CAN_TX_TRACK_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ANGLE_0)<<5
    |((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_STATUS( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_STATUS;
    return rc;
}

uint16 Get_ESR_Track64_CAN_TX_TRACK_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_0)<<8
    |((uint16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_1);
    return rc;
}

int16 Get_ESR_Track64_CAN_TX_TRACK_RANGE_ACCEL( )
{
    int16 rc;
    rc=((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_ACCEL_0)<<8
    |((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_ACCEL_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_WIDTH( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_WIDTH;
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_ROLLING_COUNT( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ROLLING_COUNT;
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_BRIDGE_OBJECT( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_BRIDGE_OBJECT;
    return rc;
}

int16 Get_ESR_Track64_CAN_TX_TRACK_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_RATE_0)<<8
    |((int16)ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_RATE_1);
    if(rc>((1<<13)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_ESR_Track64_CAN_TX_TRACK_MED_RANGE_MODE( )
{
    uint8 rc;
    rc=ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_MED_RANGE_MODE;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER01_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER01_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING01_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING01_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW01_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW01_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST01_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST01_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER02_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER02_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING02_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING02_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW02_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW02_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST02_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST02_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER03_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER03_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING03_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING03_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW03_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW03_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST03_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST03_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER04_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER04_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING04_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING04_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW04_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW04_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST04_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST04_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER05_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER05_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING05_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING05_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW05_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW05_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST05_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST05_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER06_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER06_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING06_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING06_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW06_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW06_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST06_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST06_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER07_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER07_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING07_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING07_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW07_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW07_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST07_m0( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST07_m0;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER08_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER08_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING08_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING08_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW08_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW08_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST08_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST08_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER09_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER09_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING09_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING09_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW09_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW09_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST09_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST09_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER10_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER10_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING10_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING10_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW10_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW10_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST10_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST10_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER11_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER11_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING11_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING11_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW11_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW11_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST11_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST11_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER12_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER12_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING12_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING12_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW12_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW12_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST12_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST12_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER13_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER13_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING13_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING13_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW13_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW13_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST13_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST13_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER14_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER14_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING14_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING14_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW14_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW14_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST14_m1( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST14_m1;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER15_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER15_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING15_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING15_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW15_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW15_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST15_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST15_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER16_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER16_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING16_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING16_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW16_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW16_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST16_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST16_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER17_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER17_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING17_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING17_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW17_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW17_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST17_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST17_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER18_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER18_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING18_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING18_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW18_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW18_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST18_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST18_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER19_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER19_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING19_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING19_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW19_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW19_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST19_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST19_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER20_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER20_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING20_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING20_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW20_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW20_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST20_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST20_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER21_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER21_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING21_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING21_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW21_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW21_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST21_m2( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST21_m2;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER22_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER22_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING22_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING22_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW22_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW22_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST22_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST22_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER23_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER23_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING23_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING23_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW23_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW23_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST23_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST23_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER24_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER24_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING24_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING24_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW24_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW24_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST24_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST24_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER25_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER25_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING25_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING25_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW25_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW25_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST25_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST25_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER26_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER26_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING26_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING26_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW26_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW26_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST26_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST26_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER27_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER27_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING27_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING27_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW27_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW27_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST27_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST27_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER28_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER28_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING28_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING28_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW28_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW28_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST28_m3( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST28_m3;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER29_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER29_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING29_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING29_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW29_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW29_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST29_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST29_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER30_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER30_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING30_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING30_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW30_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW30_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST30_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST30_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER31_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER31_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING31_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING31_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW31_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW31_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST31_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST31_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER32_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER32_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING32_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING32_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW32_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW32_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST32_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST32_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER33_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER33_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING33_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING33_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW33_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW33_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST33_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST33_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER34_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER34_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING34_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING34_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW34_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW34_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST34_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST34_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER35_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER35_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING35_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING35_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW35_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW35_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST35_m4( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST35_m4;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER36_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER36_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING36_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING36_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW36_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW36_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST36_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST36_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER37_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER37_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING37_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING37_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW37_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW37_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST37_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST37_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER38_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER38_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING38_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING38_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW38_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW38_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST38_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST38_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER39_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER39_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING39_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING39_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW39_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW39_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST39_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST39_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER40_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER40_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING40_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING40_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW40_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW40_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST40_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST40_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER41_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER41_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING41_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING41_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW41_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW41_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST41_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST41_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER42_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER42_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING42_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING42_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW42_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW42_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST42_m5( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST42_m5;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER43_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER43_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING43_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING43_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW43_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW43_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST43_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST43_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER44_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER44_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING44_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING44_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW44_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW44_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST44_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST44_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER45_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER45_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING45_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING45_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW45_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW45_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST45_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST45_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER46_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER46_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING46_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING46_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW46_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW46_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST46_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST46_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER47_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER47_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING47_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING47_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW47_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW47_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST47_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST47_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER48_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER48_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING48_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING48_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW48_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW48_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST48_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST48_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER49_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER49_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING49_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING49_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW49_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW49_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST49_m6( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST49_m6;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER50_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER50_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING50_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING50_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW50_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW50_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST50_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST50_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER51_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER51_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING51_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING51_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW51_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW51_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST51_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST51_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER52_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER52_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING52_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING52_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW52_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW52_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST52_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST52_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER53_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER53_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING53_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING53_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW53_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW53_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST53_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST53_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER54_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER54_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING54_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING54_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW54_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW54_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST54_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST54_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER55_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER55_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING55_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING55_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW55_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW55_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST55_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST55_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER56_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER56_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING56_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING56_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW56_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW56_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST56_m7( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST56_m7;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER57_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER57_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING57_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING57_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW57_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW57_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST57_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST57_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER58_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER58_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING58_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING58_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW58_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW58_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST58_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST58_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER59_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER59_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING59_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING59_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW59_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW59_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST59_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST59_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER60_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER60_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING60_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING60_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW60_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW60_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST60_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST60_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER61_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER61_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING61_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING61_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW61_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW61_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST61_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST61_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER62_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER62_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING62_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING62_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW62_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW62_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST62_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST62_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER63_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER63_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING63_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING63_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW63_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW63_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST63_m8( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST63_m8;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_CAN_ID_GROUP( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_CAN_ID_GROUP;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_ROLLING_COUNT_2_flag( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_POWER64_m9( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_POWER64_m9;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVING64_m9( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVING64_m9;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_SLOW64_m9( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVABLE_SLOW64_m9;
    return rc;
}

uint8 Get_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_FAST64_m9( )
{
    uint8 rc;
    rc=ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVABLE_FAST64_m9;
    return rc;
}

uint8 Get_ESR_Sim1_CAN_RX_SIM_FUNCTION( )
{
    uint8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_FUNCTION;
    return rc;
}

uint8 Get_ESR_Sim1_CAN_RX_SIM_STATUS( )
{
    uint8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_STATUS;
    return rc;
}

uint8 Get_ESR_Sim1_CAN_RX_SIM_TRACK_ID( )
{
    uint8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_TRACK_ID;
    return rc;
}

int8 Get_ESR_Sim1_CAN_RX_SIM_ANGLE( )
{
    int8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_ANGLE;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ESR_Sim1_CAN_RX_SIM_LAT_POS( )
{
    int8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_LAT_POS;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ESR_Sim1_CAN_RX_SIM_LAT_RATE( )
{
    int8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_LAT_RATE;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Sim1_CAN_RX_SIM_RANGE( )
{
    uint8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE;
    return rc;
}

int8 Get_ESR_Sim1_CAN_RX_SIM_RANGE_ACCEL( )
{
    int8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE_ACCEL;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ESR_Sim1_CAN_RX_SIM_RANGE_RATE( )
{
    int8 rc;
    rc=ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE_RATE;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Valid1_CAN_TX_VALID_LR_SN( )
{
    uint8 rc;
    rc=ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_SN;
    return rc;
}

uint16 Get_ESR_Valid1_CAN_TX_VALID_LR_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_0)<<8
    |((uint16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_1);
    return rc;
}

int16 Get_ESR_Valid1_CAN_TX_VALID_LR_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_RATE_0)<<8
    |((int16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_RATE_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_ESR_Valid1_CAN_TX_VALID_LR_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_ANGLE_0)<<8
    |((int16)ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_ANGLE_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ESR_Valid1_CAN_TX_VALID_LR_POWER( )
{
    int8 rc;
    rc=ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_POWER;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Valid2_CAN_TX_VALID_MR_SN( )
{
    uint8 rc;
    rc=ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_SN;
    return rc;
}

uint16 Get_ESR_Valid2_CAN_TX_VALID_MR_RANGE( )
{
    uint16 rc;
    rc=((uint16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_0)<<8
    |((uint16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_1);
    return rc;
}

int16 Get_ESR_Valid2_CAN_TX_VALID_MR_RANGE_RATE( )
{
    int16 rc;
    rc=((int16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_RATE_0)<<8
    |((int16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_RATE_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int16 Get_ESR_Valid2_CAN_TX_VALID_MR_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_ANGLE_0)<<8
    |((int16)ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_ANGLE_1);
    if(rc>((1<<15)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_ESR_Valid2_CAN_TX_VALID_MR_POWER( )
{
    int8 rc;
    rc=ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_POWER;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_SWBATT_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SWBATT_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_IGNP_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_IGNP_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_TEMP1_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_TEMP1_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_TEMP2_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_TEMP2_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_SUPPLY_5VA_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_5VA_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_SUPPLY_5VDX_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_5VDX_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_SUPPLY_3P3V_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_3P3V_A2D;
    return rc;
}

uint8 Get_ESR_Status5_CAN_TX_SUPPLY_10V_A2D( )
{
    uint8 rc;
    rc=ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_10V_A2D;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_SUPPLY_1P8V_A2D( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SUPPLY_1P8V_A2D;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_SUPPLY_N5V_A2D( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SUPPLY_N5V_A2D;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_WAVE_DIFF_A2D( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_WAVE_DIFF_A2D;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_SYSTEM_POWER_MODE( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SYSTEM_POWER_MODE;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_VERTICAL_ALIGN_UPDATED( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_VERTICAL_ALIGN_UPDATED;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_SW_VERSION_DSP_3RD_BYTE( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SW_VERSION_DSP_3RD_BYTE;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_2_flag( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_ALIGN_STATUS_2_flag;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_1_flag( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_ALIGN_STATUS_1_flag;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_RECOMMEND_UNCONVERGE( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_RECOMMEND_UNCONVERGE;
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_FOUND_TARGET( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FOUND_TARGET;
    return rc;
}

int8 Get_ESR_Status6_CAN_TX_FACTORY_MISALIGNMENT( )
{
    int8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_MISALIGNMENT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Status6_CAN_TX_SERV_ALIGN_UPDATES_DONE( )
{
    uint8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SERV_ALIGN_UPDATES_DONE;
    return rc;
}

int8 Get_ESR_Status6_CAN_TX_VERTICAL_MISALIGNMENT( )
{
    int8 rc;
    rc=ESR_Status6_u.ESR_Status6_Layout.CAN_TX_VERTICAL_MISALIGNMENT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_0_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_0_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_1_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_1_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_2_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_2_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_3_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_3_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_4_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_4_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_5_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_5_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_6_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_6_flag;
    return rc;
}

uint8 Get_ESR_Status7_CAN_TX_ACTIVE_FAULT_7_flag( )
{
    uint8 rc;
    rc=ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_7_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_0_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_0_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_1_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_1_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_2_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_2_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_3_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_3_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_4_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_4_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_5_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_5_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_6_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_6_flag;
    return rc;
}

uint8 Get_ESR_Status8_CAN_TX_HISTORY_FAULT_7_flag( )
{
    uint8 rc;
    rc=ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_7_flag;
    return rc;
}

uint16 Get_ESR_Status9_CAN_TX_AVG_PWR_CWBLKG( )
{
    uint16 rc;
    rc=((uint16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_AVG_PWR_CWBLKG_0)<<4
    |((uint16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_AVG_PWR_CWBLKG_1);
    return rc;
}

int16 Get_ESR_Status9_CAN_TX_SIDESLIP_ANGLE( )
{
    int16 rc;
    rc=((int16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SIDESLIP_ANGLE_0)<<8
    |((int16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SIDESLIP_ANGLE_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-2)-1<<(sizeof(rc)*8)-(8-2));
    }
    return rc;
}

uint8 Get_ESR_Status9_CAN_TX_SERIAL_NUM_3RD_BYTE( )
{
    uint8 rc;
    rc=ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SERIAL_NUM_3RD_BYTE;
    return rc;
}

int16 Get_ESR_Status9_CAN_TX_FILTERED_XOHP_ACC_CIPV( )
{
    int16 rc;
    rc=((int16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_FILTERED_XOHP_ACC_CIPV_0)<<8
    |((int16)ESR_Status9_u.ESR_Status9_Layout.CAN_TX_FILTERED_XOHP_ACC_CIPV_1);
    if(rc>((1<<8)-1))
    {
     rc=rc|(int16)((1<<8-1)-1<<(sizeof(rc)*8)-(8-1));
    }
    return rc;
}

uint8 Get_ESR_Status9_CAN_TX_WATER_SPRAY_TARGET_ID( )
{
    uint8 rc;
    rc=ESR_Status9_u.ESR_Status9_Layout.CAN_TX_WATER_SPRAY_TARGET_ID;
    return rc;
}

uint8 Get_ESR_Status9_CAN_TX_PATH_ID_ACC_2_flag( )
{
    uint8 rc;
    rc=ESR_Status9_u.ESR_Status9_Layout.CAN_TX_PATH_ID_ACC_2_flag;
    return rc;
}

uint8 Get_ESR_Status9_CAN_TX_PATH_ID_ACC_3_flag( )
{
    uint8 rc;
    rc=ESR_Status9_u.ESR_Status9_Layout.CAN_TX_PATH_ID_ACC_3_flag;
    return rc;
}

int16 Get_Vehicle3_CAN_RX_LAT_ACCEL( )
{
    int16 rc;
    rc=((int16)Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_0)<<3
    |((int16)Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_1);
    if(rc>((1<<8)-1))
    {
     rc=rc|(int16)((1<<8-6)-1<<(sizeof(rc)*8)-(8-6));
    }
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_LAT_ACCEL_VALIDITY( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_VALIDITY;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_LONG_ACCEL_VALIDITY( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_VALIDITY;
    return rc;
}

int16 Get_Vehicle3_CAN_RX_LONG_ACCEL( )
{
    int16 rc;
    rc=((int16)Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_0)<<4
    |((int16)Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_1);
    if(rc>((1<<8)-1))
    {
     rc=rc|(int16)((1<<8-5)-1<<(sizeof(rc)*8)-(8-5));
    }
    return rc;
}

uint16 Get_Vehicle3_CAN_RX_RADAR_FOV_LR( )
{
    uint16 rc;
    rc=((uint16)Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_LR_0)<<1
    |((uint16)Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_LR_1);
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_RADAR_FOV_MR( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_MR;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_RADAR_HEIGHT( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_HEIGHT;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_AUTO_ALIGN_DISABLE( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_AUTO_ALIGN_DISABLE;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_WHEEL_SLIP( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_WHEEL_SLIP;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_AUTO_ALIGN_CONVERGED( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_AUTO_ALIGN_CONVERGED;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_AALIGN_AVG_CTR_TOTAL( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_AALIGN_AVG_CTR_TOTAL;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_ENABLE( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_ENABLE;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_TYPE( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_TYPE;
    return rc;
}

uint8 Get_Vehicle3_CAN_RX_SERV_ALIGN_UPDATES_NEED( )
{
    uint8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_UPDATES_NEED;
    return rc;
}

int8 Get_Vehicle3_CAN_RX_ANGLE_MOUNTING_OFFSET( )
{
    int8 rc;
    rc=Vehicle3_u.Vehicle3_Layout.CAN_RX_ANGLE_MOUNTING_OFFSET;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_MAX_NT( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_MAX_NT;
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_CMD_2_flag( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_CMD_2_flag;
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_SAMP_REQ( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_SAMP_REQ;
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_ALIGN_CMD_1_flag( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_CMD_1_flag;
    return rc;
}

int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_OFFSET( )
{
    int8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_OFFSET;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_HOR( )
{
    int8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_SPACE_HOR;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_VER( )
{
    int8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_SPACE_VER;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_1_flag( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_1_flag;
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_R2M( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_R2M;
    return rc;
}

uint8 Get_Vehicle4_CAN_RX_FAC_TGT_RANGE_M2T( )
{
    uint8 rc;
    rc=Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_M2T;
    return rc;
}

int8 Get_Vehicle5_CAN_RX_OVERSTEER_UNDERSTEER( )
{
    int8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_OVERSTEER_UNDERSTEER;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_BEAMWIDTH_VERT( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_BEAMWIDTH_VERT;
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_YAW_RATE_BIAS_SHIFT( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_YAW_RATE_BIAS_SHIFT;
    return rc;
}

int8 Get_Vehicle5_CAN_RX_FUNNEL_OFFSET_LEFT( )
{
    int8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_FUNNEL_OFFSET_LEFT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_Vehicle5_CAN_RX_FUNNEL_OFFSET_RIGHT( )
{
    int8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_FUNNEL_OFFSET_RIGHT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_CW_BLOCKAGE_THRESHOLD( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_CW_BLOCKAGE_THRESHOLD;
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_DISTANCE_REAR_AXLE( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_DISTANCE_REAR_AXLE;
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_WHEELBASE( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_WHEELBASE;
    return rc;
}

uint8 Get_Vehicle5_CAN_RX_STEERING_GEAR_RATIO( )
{
    uint8 rc;
    rc=Vehicle5_u.Vehicle5_Layout.CAN_RX_STEERING_GEAR_RATIO;
    return rc;
}

uint8 Get_Vehicle6_CAN_VOLVO_FA_MIN_VSPEED_SHORT( )
{
    uint8 rc;
    rc=Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_MIN_VSPEED_SHORT;
    return rc;
}

uint8 Get_Vehicle6_CAN_VOLVO_FA_AALIGN_ESTIMATE( )
{
    uint8 rc;
    rc=Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_AALIGN_ESTIMATE;
    return rc;
}

uint8 Get_Vehicle6_CAN_VOLVO_FA_RANGE_MAX_SHORT( )
{
    uint8 rc;
    rc=Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_RANGE_MAX_SHORT;
    return rc;
}

int8 Get_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_LEFT( )
{
    int8 rc;
    rc=Vehicle6_u.Vehicle6_Layout.CAN_RX_INNER_FUNNEL_OFFSET_LEFT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

int8 Get_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_RIGHT( )
{
    int8 rc;
    rc=Vehicle6_u.Vehicle6_Layout.CAN_RX_INNER_FUNNEL_OFFSET_RIGHT;
    if(rc>((1<<8-1)-1))
    {
     rc=rc|(int8)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint8 Get_ACM_Inst_Req_command_code( )
{
    uint8 rc;
    rc=ACM_Inst_Req_u.ACM_Inst_Req_Layout.command_code;
    return rc;
}

uint8 Get_ACM_Inst_Req_command_ctr( )
{
    uint8 rc;
    rc=ACM_Inst_Req_u.ACM_Inst_Req_Layout.command_ctr;
    return rc;
}

uint8 Get_ACM_Inst_Req_cc_byte_1_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_byte_1_flag;
    return rc;
}

uint8 Get_ACM_Inst_Req_cc_byte_2_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_byte_2_flag;
    return rc;
}

uint16 Get_ACM_Inst_Req_cc_word_1_flag( )
{
    uint16 rc;
    rc=((uint16)ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_1_flag_0)<<8
    |((uint16)ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_1_flag_1);
    return rc;
}

uint16 Get_ACM_Inst_Req_cc_word_2_flag( )
{
    uint16 rc;
    rc=((uint16)ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_2_flag_0)<<8
    |((uint16)ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_2_flag_1);
    return rc;
}

uint8 Get_ACM_Inst_Resp_PID( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.PID;
    return rc;
}

uint8 Get_ACM_Inst_Resp_command_return_code( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.command_return_code;
    return rc;
}

uint8 Get_ACM_Inst_Resp_rtn_cmd_counter( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.rtn_cmd_counter;
    return rc;
}

uint8 Get_ACM_Inst_Resp_Data_3_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_3_flag;
    return rc;
}

uint8 Get_ACM_Inst_Resp_Data_4_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_4_flag;
    return rc;
}

uint8 Get_ACM_Inst_Resp_Data_5_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_5_flag;
    return rc;
}

uint8 Get_ACM_Inst_Resp_Data_6_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_6_flag;
    return rc;
}

uint8 Get_ACM_Inst_Resp_Data_7_flag( )
{
    uint8 rc;
    rc=ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_7_flag;
    return rc;
}

void Put_F_Master_Time_Sync_LR_FTimeSyncMstrClock(uint32 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_0=(uint8)(sigData>>24);
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_1=(uint8)(sigData>>16);
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_2=(uint8)(sigData>>8);
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClock_3=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_LR_FTimeSyncMstrChksm(uint16 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrChksm_0=(uint8)(sigData>>8);
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrChksm_1=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_LR_FTimeSyncMstrClockV(uint8 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.FTimeSyncMstrClockV=sigData;
}

void Put_F_Master_Time_Sync_LR_SensorModeCmdLRR(uint8 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdLRR=sigData;
}

void Put_F_Master_Time_Sync_LR_SensorModeCmdSRR(uint8 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdSRR=sigData;
}

void Put_F_Master_Time_Sync_LR_SensorModeCmdFCamera(uint8 sigData)
{
    F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Layout.SensorModeCmdFCamera=sigData;
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_CurvatureV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_CurvatureV=sigData;
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfstV(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLngOfstV=sigData;
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_RollingCount(uint8 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_RollingCount=sigData;
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLngOfst(int8 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLngOfst=sigData;
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_TrnCtrLatOfst(int16 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLatOfst_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_TrnCtrLatOfst_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_Curvature(int16 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Curvature_0=(int8)(sigData>>8);
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Curvature_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Estimate_LR_Vpath_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Layout.Vpath_Checksum_1=(uint8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVelV=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRateV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRateV=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2TravlDirctn(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2TravlDirctn=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LongVel(int16 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVel_0=(int8)(sigData>>4);
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LongVel_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2YawRate(int16 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRate_0=(int8)(sigData>>8);
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2YawRate_1=(int8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVel(int8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LatVel=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath2_Checksum(uint16 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath2_Checksum_0=(uint8)(sigData>>8);
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath2_Checksum_1=(uint8)(sigData);
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2ModeInfo(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2ModeInfo=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2RollCnt(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2RollCnt=sigData;
}

void Put_F_Vehicle_Path_Data_2_LR_Vpath_Data2LatVelV(uint8 sigData)
{
    F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Layout.Vpath_Data2LatVelV=sigData;
}

void Put_Body_Info_FOB_LR_HighBmAct(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.HighBmAct=sigData;
}

void Put_Body_Info_FOB_LR_LowBmAct(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.LowBmAct=sigData;
}

void Put_Body_Info_FOB_LR_WSWprAct(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.WSWprAct=sigData;
}

void Put_Body_Info_FOB_LR_LftLwBmFld(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.LftLwBmFld=sigData;
}

void Put_Body_Info_FOB_LR_RtLwBmFld(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.RtLwBmFld=sigData;
}

void Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStatV(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.OtsdAmbtLtLvlStatV=sigData;
}

void Put_Body_Info_FOB_LR_OtsdAmbtLtLvlStat(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.OtsdAmbtLtLvlStat=sigData;
}

void Put_Body_Info_FOB_LR_SysPwrMdV(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.SysPwrMdV=sigData;
}

void Put_Body_Info_FOB_LR_SysPwrMd(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.SysPwrMd=sigData;
}

void Put_Body_Info_FOB_LR_WSWshSwAtv(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.WSWshSwAtv=sigData;
}

void Put_Body_Info_FOB_LR_TrStLgMdAtv(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.TrStLgMdAtv=sigData;
}

void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn3(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn3=sigData;
}

void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn2(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn2=sigData;
}

void Put_Body_Info_FOB_LR_DrvrHndsOnWhlZn1(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvrHndsOnWhlZn1=sigData;
}

void Put_Body_Info_FOB_LR_DrDoorOpenSwActV(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrDoorOpenSwActV=sigData;
}

void Put_Body_Info_FOB_LR_DrDoorOpenSwAct(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrDoorOpenSwAct=sigData;
}

void Put_Body_Info_FOB_LR_StrgColCommsFlt(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColCommsFlt=sigData;
}

void Put_Body_Info_FOB_LR_DrvWndPosStat(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.DrvWndPosStat=sigData;
}

void Put_Body_Info_FOB_LR_InterLghtStat(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.InterLghtStat=sigData;
}

void Put_Body_Info_FOB_LR_StrgColInOutPos(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColInOutPos=sigData;
}

void Put_Body_Info_FOB_LR_StrgColUpDwnPos(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.StrgColUpDwnPos=sigData;
}

void Put_Body_Info_FOB_LR_CPMAPINFO4(uint8 sigData)
{
    Body_Info_FOB_LR_u.Body_Info_FOB_LR_Layout.CPMAPINFO4=sigData;
}

void Put_R_SRR_Object_Header_LR_RSrrRollingCnt(uint8 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrRollingCnt=sigData;
}

void Put_R_SRR_Object_Header_LR_RSRRModeCmdFdbk(uint8 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSRRModeCmdFdbk=sigData;
}

void Put_R_SRR_Object_Header_LR_RSrrTimeStamp(uint16 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStamp_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStamp_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Header_LR_RSRRNumValidTargets(uint8 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSRRNumValidTargets=sigData;
}

void Put_R_SRR_Object_Header_LR_RSrrTimeStampV(uint8 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrTimeStampV=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRSnstvFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSnstvFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRHWFltPrsntInt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRHWFltPrsntInt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRAntTngFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAntTngFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRCANIDAddrsUnsbl(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANIDAddrsUnsbl=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRCANRxErr(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANRxErr=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRCANSgnlSpvFld(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRCANSgnlSpvFld=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRDiagSpare(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRDiagSpare=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnPtchUp(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnPtchUp=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnPtchDn(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnPtchDn=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnRllLt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnRllLt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnRllRt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnRllRt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRExtIntrfrnc(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRExtIntrfrnc=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRPlntAlgnInProc(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRPlntAlgnInProc=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRSvcAlgnInPrcs(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSvcAlgnInPrcs=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRAlgnFltPrsnt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAlgnFltPrsnt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRInitDiagCmplt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRInitDiagCmplt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRAmbTmpOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAmbTmpOutRngHi=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRAmbTmpOutRngLw(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRAmbTmpOutRngLw=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRVltgOutRngHi(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRVltgOutRngHi=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRVltgOutRngLo(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRVltgOutRngLo=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRSnsrBlckd(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRSnsrBlckd=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnYawLt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnYawLt=sigData;
}

void Put_RSRRDiagStatus_LR_RSRRMsalgnYawRt(uint8 sigData)
{
    RSRRDiagStatus_LR_u.R_SRR_Object_Header_LR_Layout.RSRRMsalgnYawRt=sigData;
}

void Put_R_SRR_Object_Header_LR_RSrrBurstChecksum(uint16 sigData)
{
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrBurstChecksum_0=(uint8)(sigData>>8);
    R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Layout.RSrrBurstChecksum_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkRange1(uint16 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRange1_0=(uint8)(sigData>>8);
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRange1_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkRRate1(int16 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRRate1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRRate1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkObjElevation1(uint8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObjElevation1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkDynamProp1(uint8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkDynamProp1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkAzimuth1(int16 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkAzimuth1_0=(int8)(sigData>>8);
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkAzimuth1_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkObjID1(uint8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObjID1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkObsRange1(int8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkObsRange1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkMeasStatus1(uint8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkMeasStatus1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrTrkRawAzimuth1(int8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrTrkRawAzimuth1=sigData;
}

void Put_R_SRR_Object_Track1_LR_RSrrBurstID1(uint8 sigData)
{
    R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Layout.RSrrBurstID1=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkRange2(uint16 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRange2_0=(uint8)(sigData>>8);
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRange2_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkRRate2(int16 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRRate2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRRate2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkObjElevation2(uint8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObjElevation2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkDynamProp2(uint8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkDynamProp2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkAzimuth2(int16 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkAzimuth2_0=(int8)(sigData>>8);
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkAzimuth2_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkObjID2(uint8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObjID2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkObsRange2(int8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkObsRange2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkMeasStatus2(uint8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkMeasStatus2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrTrkRawAzimuth2(int8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrTrkRawAzimuth2=sigData;
}

void Put_R_SRR_Object_Track2_LR_RSrrBurstID2(uint8 sigData)
{
    R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Layout.RSrrBurstID2=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkRange3(uint16 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRange3_0=(uint8)(sigData>>8);
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRange3_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkRRate3(int16 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRRate3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRRate3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkObjElevation3(uint8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObjElevation3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkDynamProp3(uint8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkDynamProp3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkAzimuth3(int16 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkAzimuth3_0=(int8)(sigData>>8);
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkAzimuth3_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkObjID3(uint8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObjID3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkObsRange3(int8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkObsRange3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkMeasStatus3(uint8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkMeasStatus3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrTrkRawAzimuth3(int8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrTrkRawAzimuth3=sigData;
}

void Put_R_SRR_Object_Track3_LR_RSrrBurstID3(uint8 sigData)
{
    R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Layout.RSrrBurstID3=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkRange4(uint16 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRange4_0=(uint8)(sigData>>8);
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRange4_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkRRate4(int16 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRRate4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRRate4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkObjElevation4(uint8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObjElevation4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkDynamProp4(uint8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkDynamProp4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkAzimuth4(int16 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkAzimuth4_0=(int8)(sigData>>8);
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkAzimuth4_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkObjID4(uint8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObjID4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkObsRange4(int8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkObsRange4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkMeasStatus4(uint8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkMeasStatus4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrTrkRawAzimuth4(int8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrTrkRawAzimuth4=sigData;
}

void Put_R_SRR_Object_Track4_LR_RSrrBurstID4(uint8 sigData)
{
    R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Layout.RSrrBurstID4=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkRange5(uint16 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRange5_0=(uint8)(sigData>>8);
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRange5_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkRRate5(int16 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRRate5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRRate5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkObjElevation5(uint8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObjElevation5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkDynamProp5(uint8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkDynamProp5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkAzimuth5(int16 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkAzimuth5_0=(int8)(sigData>>8);
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkAzimuth5_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkObjID5(uint8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObjID5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkObsRange5(int8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkObsRange5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkMeasStatus5(uint8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkMeasStatus5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrTrkRawAzimuth5(int8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrTrkRawAzimuth5=sigData;
}

void Put_R_SRR_Object_Track5_LR_RSrrBurstID5(uint8 sigData)
{
    R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Layout.RSrrBurstID5=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkRange6(uint16 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRange6_0=(uint8)(sigData>>8);
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRange6_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkRRate6(int16 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRRate6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRRate6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkObjElevation6(uint8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObjElevation6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkDynamProp6(uint8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkDynamProp6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkAzimuth6(int16 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkAzimuth6_0=(int8)(sigData>>8);
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkAzimuth6_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkObjID6(uint8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObjID6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkObsRange6(int8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkObsRange6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkMeasStatus6(uint8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkMeasStatus6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrTrkRawAzimuth6(int8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrTrkRawAzimuth6=sigData;
}

void Put_R_SRR_Object_Track6_LR_RSrrBurstID6(uint8 sigData)
{
    R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Layout.RSrrBurstID6=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkRange7(uint16 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRange7_0=(uint8)(sigData>>8);
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRange7_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkRRate7(int16 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRRate7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRRate7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkObjElevation7(uint8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObjElevation7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkDynamProp7(uint8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkDynamProp7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkAzimuth7(int16 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkAzimuth7_0=(int8)(sigData>>8);
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkAzimuth7_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkObjID7(uint8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObjID7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkObsRange7(int8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkObsRange7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkMeasStatus7(uint8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkMeasStatus7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrTrkRawAzimuth7(int8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrTrkRawAzimuth7=sigData;
}

void Put_R_SRR_Object_Track7_LR_RSrrBurstID7(uint8 sigData)
{
    R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Layout.RSrrBurstID7=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkRange8(uint16 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRange8_0=(uint8)(sigData>>8);
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRange8_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkRRate8(int16 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRRate8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRRate8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkObjElevation8(uint8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObjElevation8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkDynamProp8(uint8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkDynamProp8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkAzimuth8(int16 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkAzimuth8_0=(int8)(sigData>>8);
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkAzimuth8_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkObjID8(uint8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObjID8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkObsRange8(int8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkObsRange8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkMeasStatus8(uint8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkMeasStatus8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrTrkRawAzimuth8(int8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrTrkRawAzimuth8=sigData;
}

void Put_R_SRR_Object_Track8_LR_RSrrBurstID8(uint8 sigData)
{
    R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Layout.RSrrBurstID8=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkRange9(uint16 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRange9_0=(uint8)(sigData>>8);
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRange9_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkRRate9(int16 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRRate9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRRate9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkObjElevation9(uint8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObjElevation9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkDynamProp9(uint8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkDynamProp9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkAzimuth9(int16 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkAzimuth9_0=(int8)(sigData>>8);
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkAzimuth9_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkObjID9(uint8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObjID9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkObsRange9(int8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkObsRange9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkMeasStatus9(uint8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkMeasStatus9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrTrkRawAzimuth9(int8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrTrkRawAzimuth9=sigData;
}

void Put_R_SRR_Object_Track9_LR_RSrrBurstID9(uint8 sigData)
{
    R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Layout.RSrrBurstID9=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkRange10(uint16 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRange10_0=(uint8)(sigData>>8);
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRange10_1=(uint8)(sigData);
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkRRate10(int16 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRRate10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRRate10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkObjElevation10(uint8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObjElevation10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkDynamProp10(uint8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkDynamProp10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkAzimuth10(int16 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkAzimuth10_0=(int8)(sigData>>8);
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkAzimuth10_1=(int8)(sigData);
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkObjID10(uint8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObjID10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkObsRange10(int8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkObsRange10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkMeasStatus10(uint8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkMeasStatus10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrTrkRawAzimuth10(int8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrTrkRawAzimuth10=sigData;
}

void Put_R_SRR_Object_Track10_LR_RSrrBurstID10(uint8 sigData)
{
    R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Layout.RSrrBurstID10=sigData;
}

void Put_ESR_Status1_CAN_TX_DSP_TIMESTAMP(uint16 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_DSP_TIMESTAMP_0=(uint8)(sigData>>1);
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_DSP_TIMESTAMP_1=(uint8)(sigData);
}

void Put_ESR_Status1_CAN_TX_ROLLING_COUNT_1_flag(uint8 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_ROLLING_COUNT_1_flag=sigData;
}

void Put_ESR_Status1_CAN_TX_RADIUS_CURVATURE_CALC(int16 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_RADIUS_CURVATURE_CALC_0=(int8)(sigData>>8);
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_RADIUS_CURVATURE_CALC_1=(int8)(sigData);
}

void Put_ESR_Status1_CAN_TX_COMM_ERROR(uint8 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_COMM_ERROR=sigData;
}

void Put_ESR_Status1_CAN_TX_SCAN_INDEX(uint16 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_SCAN_INDEX_0=(uint8)(sigData>>8);
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_SCAN_INDEX_1=(uint8)(sigData);
}

void Put_ESR_Status1_CAN_TX_YAW_RATE_CALC(int16 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_YAW_RATE_CALC_0=(int8)(sigData>>4);
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_YAW_RATE_CALC_1=(int8)(sigData);
}

void Put_ESR_Status1_CAN_TX_VEHICLE_SPEED_CALC(uint16 sigData)
{
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_VEHICLE_SPEED_CALC_0=(uint8)(sigData>>8);
    ESR_Status1_u.ESR_Status1_Layout.CAN_TX_VEHICLE_SPEED_CALC_1=(uint8)(sigData);
}

void Put_ESR_Status2_CAN_TX_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_Status2_CAN_TX_MAXIMUM_TRACKS_ACK(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_MAXIMUM_TRACKS_ACK=sigData;
}

void Put_ESR_Status2_CAN_TX_STEERING_ANGLE_ACK(uint16 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_STEERING_ANGLE_ACK_0=(uint8)(sigData>>8);
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_STEERING_ANGLE_ACK_1=(uint8)(sigData);
}

void Put_ESR_Status2_CAN_TX_RAW_DATA_MODE(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_RAW_DATA_MODE=sigData;
}

void Put_ESR_Status2_CAN_TX_XCVR_OPERATIONAL(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_XCVR_OPERATIONAL=sigData;
}

void Put_ESR_Status2_CAN_TX_INTERNAL_ERROR(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_INTERNAL_ERROR=sigData;
}

void Put_ESR_Status2_CAN_TX_RANGE_PERF_ERROR(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_RANGE_PERF_ERROR=sigData;
}

void Put_ESR_Status2_CAN_TX_OVERHEAT_ERROR(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_OVERHEAT_ERROR=sigData;
}

void Put_ESR_Status2_CAN_TX_TEMPERATURE(int8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_TEMPERATURE=sigData;
}

void Put_ESR_Status2_CAN_TX_GROUPING_MODE(uint8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_GROUPING_MODE=sigData;
}

void Put_ESR_Status2_CAN_TX_VEH_SPD_COMP_FACTOR(int8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_VEH_SPD_COMP_FACTOR=sigData;
}

void Put_ESR_Status2_CAN_TX_YAW_RATE_BIAS(int8 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_YAW_RATE_BIAS=sigData;
}

void Put_ESR_Status2_CAN_TX_SW_VERSION_DSP(uint16 sigData)
{
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_SW_VERSION_DSP_0=(uint8)(sigData>>8);
    ESR_Status2_u.ESR_Status2_Layout.CAN_TX_SW_VERSION_DSP_1=(uint8)(sigData);
}

void Put_ESR_Status3_CAN_TX_HW_VERSION(uint8 sigData)
{
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_HW_VERSION=sigData;
}

void Put_ESR_Status3_CAN_TX_INTERFACE_VERSION(uint8 sigData)
{
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_INTERFACE_VERSION=sigData;
}

void Put_ESR_Status3_CAN_TX_SW_VERSION_HOST(uint32 sigData)
{
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_0=(uint8)(sigData>>16);
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_1=(uint8)(sigData>>8);
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_HOST_2=(uint8)(sigData);
}

void Put_ESR_Status3_CAN_TX_SERIAL_NUM(uint32 sigData)
{
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_0=(uint8)(sigData>>16);
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_1=(uint8)(sigData>>8);
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SERIAL_NUM_2=(uint8)(sigData);
}

void Put_ESR_Status3_CAN_TX_SW_VERSION_PLD(uint8 sigData)
{
    ESR_Status3_u.ESR_Status3_Layout.CAN_TX_SW_VERSION_PLD=sigData;
}

void Put_ESR_Status4_CAN_TX_ROLLING_COUNT_3_flag(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_ROLLING_COUNT_3_flag=sigData;
}

void Put_ESR_Status4_CAN_TX_MR_LR_MODE(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_MR_LR_MODE=sigData;
}

void Put_ESR_Status4_CAN_TX_PARTIAL_BLOCKAGE(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PARTIAL_BLOCKAGE=sigData;
}

void Put_ESR_Status4_CAN_TX_SIDELOBE_BLOCKAGE(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_SIDELOBE_BLOCKAGE=sigData;
}

void Put_ESR_Status4_CAN_TX_LR_ONLY_GRATING_LOBE_DET(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_LR_ONLY_GRATING_LOBE_DET=sigData;
}

void Put_ESR_Status4_CAN_TX_TRUCK_TARGET_DET(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_TRUCK_TARGET_DET=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_ACC(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_ACC=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_CMBB_MOVE(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_CMBB_MOVE=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_CMBB_STAT(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_CMBB_STAT=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_FCW_MOVE(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_FCW_MOVE=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_FCW_STAT(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_FCW_STAT=sigData;
}

void Put_ESR_Status4_CAN_TX_AUTO_ALIGN_ANGLE(int8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_AUTO_ALIGN_ANGLE=sigData;
}

void Put_ESR_Status4_CAN_TX_PATH_ID_ACC_STAT(uint8 sigData)
{
    ESR_Status4_u.ESR_Status4_Layout.CAN_TX_PATH_ID_ACC_STAT=sigData;
}

void Put_Vehicle1_CAN_RX_VEHICLE_SPEED(uint16 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_0=(uint8)(sigData>>3);
    Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_1=(uint8)(sigData);
}

void Put_Vehicle1_CAN_RX_YAW_RATE(int16 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_0=(int8)(sigData>>8);
    Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_1=(int8)(sigData);
}

void Put_Vehicle1_CAN_RX_VEHICLE_SPEED_DIRECTION(uint8 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_VEHICLE_SPEED_DIRECTION=sigData;
}

void Put_Vehicle1_CAN_RX_RADIUS_CURVATURE(int16 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_RADIUS_CURVATURE_0=(int8)(sigData>>8);
    Vehicle1_u.Vehicle1_Layout.CAN_RX_RADIUS_CURVATURE_1=(int8)(sigData);
}

void Put_Vehicle1_CAN_RX_STEERING_ANGLE_RATE_SIGN(uint8 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_SIGN=sigData;
}

void Put_Vehicle1_CAN_RX_YAW_RATE_VALIDITY(uint8 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_YAW_RATE_VALIDITY=sigData;
}

void Put_Vehicle1_CAN_RX_STEERING_ANGLE(uint16 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_0=(uint8)(sigData>>5);
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_1=(uint8)(sigData);
}

void Put_Vehicle1_CAN_RX_STEERING_ANGLE_SIGN(uint8 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_SIGN=sigData;
}

void Put_Vehicle1_CAN_RX_STEERING_ANGLE_VALIDITY(uint8 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_VALIDITY=sigData;
}

void Put_Vehicle1_CAN_RX_STEERING_ANGLE_RATE(uint16 sigData)
{
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_0=(uint8)(sigData>>8);
    Vehicle1_u.Vehicle1_Layout.CAN_RX_STEERING_ANGLE_RATE_1=(uint8)(sigData);
}

void Put_Vehicle2_CAN_RX_SCAN_INDEX_ACK(uint16 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_SCAN_INDEX_ACK_0=(uint8)(sigData>>8);
    Vehicle2_u.Vehicle2_Layout.CAN_RX_SCAN_INDEX_ACK_1=(uint8)(sigData);
}

void Put_Vehicle2_CAN_RX_HIGH_YAW_ANGLE(int8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_HIGH_YAW_ANGLE=sigData;
}

void Put_Vehicle2_CAN_RX_CLEAR_FAULTS(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_CLEAR_FAULTS=sigData;
}

void Put_Vehicle2_CAN_RX_USE_ANGLE_MISALIGNMENT(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_USE_ANGLE_MISALIGNMENT=sigData;
}

void Put_Vehicle2_CAN_RX_LR_ONLY_TRANSMIT(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_LR_ONLY_TRANSMIT=sigData;
}

void Put_Vehicle2_CAN_RX_MR_ONLY_TRANSMIT(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_MR_ONLY_TRANSMIT=sigData;
}

void Put_Vehicle2_CAN_RX_VOLVO_SHORT_TRACK_ROC(int8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_VOLVO_SHORT_TRACK_ROC=sigData;
}

void Put_Vehicle2_CAN_RX_ANGLE_MISALIGNMENT(int8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_ANGLE_MISALIGNMENT=sigData;
}

void Put_Vehicle2_CAN_RX_LATERAL_MOUNTING_OFFSET(int8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_LATERAL_MOUNTING_OFFSET=sigData;
}

void Put_Vehicle2_CAN_RX_MAXIMUM_TRACKS(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_MAXIMUM_TRACKS=sigData;
}

void Put_Vehicle2_CAN_RX_BLOCKAGE_DISABLE(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_BLOCKAGE_DISABLE=sigData;
}

void Put_Vehicle2_CAN_RX_RADAR_CMD_RADIATE(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_RADAR_CMD_RADIATE=sigData;
}

void Put_Vehicle2_CAN_RX_RAW_DATA_ENABLE(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_RAW_DATA_ENABLE=sigData;
}

void Put_Vehicle2_CAN_RX_WIPER_STATUS(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_WIPER_STATUS=sigData;
}

void Put_Vehicle2_CAN_RX_GROUPING_MODE(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_GROUPING_MODE=sigData;
}

void Put_Vehicle2_CAN_RX_MMR_UPSIDE_DOWN(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_MMR_UPSIDE_DOWN=sigData;
}

void Put_Vehicle2_CAN_RX_VEHICLE_SPEED_VALIDITY(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_VEHICLE_SPEED_VALIDITY=sigData;
}

void Put_Vehicle2_CAN_RX_TURN_SIGNAL_STATUS(uint8 sigData)
{
    Vehicle2_u.Vehicle2_Layout.CAN_RX_TURN_SIGNAL_STATUS=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track01_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track01_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track01_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track01_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track01_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track01_u.ESR_Track01_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track02_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track02_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track02_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track02_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track02_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track02_u.ESR_Track02_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track03_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track03_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track03_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track03_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track03_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track03_u.ESR_Track03_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track04_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track04_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track04_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track04_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track04_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track04_u.ESR_Track04_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track05_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track05_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track05_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track05_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track05_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track05_u.ESR_Track05_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track06_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track06_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track06_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track06_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track06_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track06_u.ESR_Track06_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track07_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track07_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track07_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track07_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track07_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track07_u.ESR_Track07_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track08_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track08_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track08_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track08_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track08_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track08_u.ESR_Track08_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track09_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track09_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track09_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track09_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track09_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track09_u.ESR_Track09_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track10_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track10_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track10_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track10_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track10_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track10_u.ESR_Track10_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track11_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track11_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track11_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track11_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track11_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track11_u.ESR_Track11_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track12_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track12_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track12_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track12_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track12_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track12_u.ESR_Track12_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track13_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track13_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track13_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track13_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track13_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track13_u.ESR_Track13_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track14_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track14_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track14_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track14_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track14_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track14_u.ESR_Track14_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track15_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track15_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track15_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track15_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track15_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track15_u.ESR_Track15_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track16_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track16_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track16_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track16_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track16_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track16_u.ESR_Track16_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track17_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track17_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track17_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track17_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track17_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track17_u.ESR_Track17_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track18_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track18_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track18_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track18_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track18_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track18_u.ESR_Track18_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track19_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track19_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track19_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track19_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track19_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track19_u.ESR_Track19_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track20_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track20_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track20_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track20_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track20_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track20_u.ESR_Track20_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track21_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track21_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track21_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track21_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track21_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track21_u.ESR_Track21_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track22_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track22_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track22_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track22_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track22_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track22_u.ESR_Track22_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track23_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track23_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track23_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track23_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track23_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track23_u.ESR_Track23_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track24_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track24_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track24_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track24_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track24_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track24_u.ESR_Track24_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track25_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track25_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track25_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track25_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track25_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track25_u.ESR_Track25_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track26_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track26_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track26_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track26_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track26_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track26_u.ESR_Track26_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track27_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track27_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track27_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track27_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track27_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track27_u.ESR_Track27_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track28_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track28_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track28_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track28_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track28_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track28_u.ESR_Track28_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track29_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track29_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track29_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track29_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track29_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track29_u.ESR_Track29_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track30_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track30_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track30_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track30_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track30_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track30_u.ESR_Track30_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track31_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track31_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track31_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track31_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track31_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track31_u.ESR_Track31_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track32_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track32_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track32_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track32_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track32_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track32_u.ESR_Track32_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track33_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track33_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track33_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track33_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track33_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track33_u.ESR_Track33_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track34_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track34_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track34_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track34_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track34_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track34_u.ESR_Track34_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track35_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track35_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track35_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track35_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track35_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track35_u.ESR_Track35_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track36_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track36_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track36_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track36_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track36_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track36_u.ESR_Track36_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track37_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track37_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track37_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track37_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track37_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track37_u.ESR_Track37_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track38_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track38_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track38_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track38_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track38_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track38_u.ESR_Track38_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track39_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track39_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track39_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track39_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track39_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track39_u.ESR_Track39_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track40_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track40_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track40_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track40_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track40_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track40_u.ESR_Track40_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track41_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track41_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track41_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track41_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track41_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track41_u.ESR_Track41_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track42_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track42_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track42_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track42_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track42_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track42_u.ESR_Track42_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track43_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track43_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track43_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track43_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track43_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track43_u.ESR_Track43_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track44_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track44_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track44_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track44_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track44_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track44_u.ESR_Track44_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track45_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track45_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track45_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track45_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track45_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track45_u.ESR_Track45_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track46_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track46_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track46_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track46_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track46_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track46_u.ESR_Track46_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track47_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track47_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track47_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track47_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track47_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track47_u.ESR_Track47_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track48_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track48_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track48_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track48_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track48_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track48_u.ESR_Track48_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track49_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track49_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track49_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track49_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track49_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track49_u.ESR_Track49_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track50_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track50_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track50_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track50_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track50_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track50_u.ESR_Track50_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track51_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track51_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track51_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track51_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track51_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track51_u.ESR_Track51_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track52_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track52_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track52_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track52_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track52_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track52_u.ESR_Track52_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track53_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track53_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track53_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track53_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track53_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track53_u.ESR_Track53_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track54_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track54_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track54_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track54_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track54_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track54_u.ESR_Track54_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track55_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track55_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track55_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track55_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track55_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track55_u.ESR_Track55_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track56_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track56_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track56_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track56_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track56_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track56_u.ESR_Track56_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track57_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track57_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track57_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track57_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track57_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track57_u.ESR_Track57_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track58_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track58_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track58_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track58_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track58_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track58_u.ESR_Track58_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track59_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track59_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track59_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track59_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track59_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track59_u.ESR_Track59_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track60_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track60_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track60_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track60_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track60_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track60_u.ESR_Track60_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track61_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track61_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track61_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track61_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track61_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track61_u.ESR_Track61_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track62_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track62_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track62_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track62_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track62_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track62_u.ESR_Track62_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track63_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track63_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track63_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track63_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track63_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track63_u.ESR_Track63_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_ONCOMING(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ONCOMING=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_GROUPING_CHANGED(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_GROUPING_CHANGED=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_LAT_RATE(int8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_LAT_RATE=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_ANGLE(int16 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ANGLE_0=(int8)(sigData>>5);
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Track64_CAN_TX_TRACK_STATUS(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_STATUS=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_RANGE(uint16 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_0=(uint8)(sigData>>8);
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Track64_CAN_TX_TRACK_RANGE_ACCEL(int16 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_ACCEL_0=(int8)(sigData>>8);
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_ACCEL_1=(int8)(sigData);
}

void Put_ESR_Track64_CAN_TX_TRACK_WIDTH(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_WIDTH=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_ROLLING_COUNT(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_ROLLING_COUNT=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_BRIDGE_OBJECT(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_BRIDGE_OBJECT=sigData;
}

void Put_ESR_Track64_CAN_TX_TRACK_RANGE_RATE(int16 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Track64_CAN_TX_TRACK_MED_RANGE_MODE(uint8 sigData)
{
    ESR_Track64_u.ESR_Track64_Layout.CAN_TX_TRACK_MED_RANGE_MODE=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER01_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER01_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING01_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING01_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW01_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW01_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST01_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST01_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER02_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER02_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING02_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING02_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW02_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW02_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST02_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST02_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER03_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER03_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING03_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING03_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW03_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW03_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST03_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST03_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER04_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER04_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING04_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING04_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW04_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW04_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST04_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST04_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER05_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER05_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING05_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING05_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW05_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW05_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST05_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST05_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER06_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER06_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING06_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING06_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW06_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW06_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST06_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST06_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_POWER07_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_POWER07_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVING07_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVING07_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_SLOW07_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_SLOW07_m0=sigData;
}

void Put_ESR_TrackMotionPower_m0_CAN_TX_TRACK_MOVABLE_FAST07_m0(uint8 sigData)
{
    ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Layout.CAN_TX_TRACK_MOVABLE_FAST07_m0=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER08_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER08_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING08_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING08_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW08_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW08_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST08_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST08_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER09_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER09_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING09_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING09_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW09_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW09_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST09_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST09_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER10_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER10_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING10_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING10_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW10_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW10_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST10_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST10_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER11_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER11_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING11_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING11_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW11_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW11_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST11_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST11_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER12_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER12_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING12_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING12_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW12_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW12_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST12_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST12_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER13_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER13_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING13_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING13_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW13_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW13_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST13_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST13_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_POWER14_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_POWER14_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVING14_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVING14_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_SLOW14_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_SLOW14_m1=sigData;
}

void Put_ESR_TrackMotionPower_m1_CAN_TX_TRACK_MOVABLE_FAST14_m1(uint8 sigData)
{
    ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Layout.CAN_TX_TRACK_MOVABLE_FAST14_m1=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER15_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER15_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING15_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING15_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW15_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW15_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST15_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST15_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER16_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER16_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING16_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING16_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW16_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW16_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST16_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST16_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER17_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER17_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING17_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING17_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW17_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW17_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST17_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST17_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER18_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER18_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING18_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING18_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW18_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW18_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST18_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST18_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER19_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER19_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING19_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING19_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW19_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW19_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST19_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST19_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER20_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER20_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING20_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING20_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW20_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW20_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST20_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST20_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_POWER21_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_POWER21_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVING21_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVING21_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_SLOW21_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_SLOW21_m2=sigData;
}

void Put_ESR_TrackMotionPower_m2_CAN_TX_TRACK_MOVABLE_FAST21_m2(uint8 sigData)
{
    ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Layout.CAN_TX_TRACK_MOVABLE_FAST21_m2=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER22_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER22_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING22_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING22_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW22_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW22_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST22_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST22_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER23_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER23_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING23_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING23_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW23_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW23_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST23_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST23_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER24_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER24_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING24_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING24_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW24_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW24_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST24_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST24_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER25_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER25_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING25_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING25_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW25_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW25_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST25_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST25_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER26_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER26_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING26_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING26_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW26_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW26_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST26_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST26_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER27_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER27_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING27_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING27_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW27_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW27_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST27_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST27_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_POWER28_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_POWER28_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVING28_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVING28_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_SLOW28_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_SLOW28_m3=sigData;
}

void Put_ESR_TrackMotionPower_m3_CAN_TX_TRACK_MOVABLE_FAST28_m3(uint8 sigData)
{
    ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Layout.CAN_TX_TRACK_MOVABLE_FAST28_m3=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER29_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER29_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING29_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING29_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW29_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW29_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST29_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST29_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER30_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER30_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING30_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING30_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW30_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW30_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST30_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST30_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER31_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER31_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING31_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING31_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW31_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW31_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST31_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST31_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER32_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER32_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING32_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING32_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW32_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW32_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST32_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST32_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER33_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER33_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING33_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING33_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW33_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW33_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST33_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST33_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER34_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER34_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING34_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING34_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW34_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW34_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST34_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST34_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_POWER35_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_POWER35_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVING35_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVING35_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_SLOW35_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_SLOW35_m4=sigData;
}

void Put_ESR_TrackMotionPower_m4_CAN_TX_TRACK_MOVABLE_FAST35_m4(uint8 sigData)
{
    ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Layout.CAN_TX_TRACK_MOVABLE_FAST35_m4=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER36_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER36_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING36_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING36_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW36_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW36_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST36_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST36_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER37_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER37_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING37_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING37_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW37_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW37_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST37_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST37_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER38_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER38_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING38_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING38_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW38_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW38_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST38_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST38_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER39_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER39_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING39_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING39_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW39_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW39_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST39_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST39_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER40_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER40_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING40_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING40_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW40_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW40_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST40_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST40_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER41_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER41_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING41_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING41_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW41_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW41_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST41_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST41_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_POWER42_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_POWER42_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVING42_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVING42_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_SLOW42_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_SLOW42_m5=sigData;
}

void Put_ESR_TrackMotionPower_m5_CAN_TX_TRACK_MOVABLE_FAST42_m5(uint8 sigData)
{
    ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Layout.CAN_TX_TRACK_MOVABLE_FAST42_m5=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER43_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER43_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING43_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING43_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW43_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW43_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST43_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST43_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER44_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER44_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING44_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING44_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW44_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW44_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST44_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST44_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER45_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER45_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING45_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING45_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW45_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW45_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST45_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST45_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER46_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER46_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING46_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING46_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW46_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW46_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST46_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST46_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER47_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER47_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING47_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING47_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW47_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW47_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST47_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST47_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER48_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER48_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING48_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING48_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW48_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW48_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST48_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST48_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_POWER49_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_POWER49_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVING49_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVING49_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_SLOW49_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_SLOW49_m6=sigData;
}

void Put_ESR_TrackMotionPower_m6_CAN_TX_TRACK_MOVABLE_FAST49_m6(uint8 sigData)
{
    ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Layout.CAN_TX_TRACK_MOVABLE_FAST49_m6=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER50_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER50_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING50_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING50_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW50_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW50_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST50_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST50_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER51_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER51_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING51_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING51_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW51_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW51_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST51_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST51_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER52_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER52_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING52_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING52_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW52_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW52_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST52_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST52_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER53_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER53_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING53_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING53_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW53_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW53_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST53_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST53_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER54_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER54_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING54_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING54_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW54_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW54_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST54_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST54_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER55_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER55_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING55_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING55_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW55_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW55_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST55_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST55_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_POWER56_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_POWER56_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVING56_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVING56_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_SLOW56_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_SLOW56_m7=sigData;
}

void Put_ESR_TrackMotionPower_m7_CAN_TX_TRACK_MOVABLE_FAST56_m7(uint8 sigData)
{
    ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Layout.CAN_TX_TRACK_MOVABLE_FAST56_m7=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER57_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER57_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING57_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING57_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW57_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW57_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST57_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST57_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER58_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER58_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING58_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING58_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW58_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW58_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST58_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST58_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER59_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER59_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING59_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING59_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW59_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW59_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST59_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST59_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER60_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER60_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING60_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING60_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW60_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW60_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST60_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST60_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER61_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER61_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING61_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING61_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW61_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW61_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST61_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST61_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER62_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER62_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING62_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING62_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW62_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW62_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST62_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST62_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_POWER63_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_POWER63_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVING63_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVING63_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_SLOW63_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_SLOW63_m8=sigData;
}

void Put_ESR_TrackMotionPower_m8_CAN_TX_TRACK_MOVABLE_FAST63_m8(uint8 sigData)
{
    ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Layout.CAN_TX_TRACK_MOVABLE_FAST63_m8=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_CAN_ID_GROUP(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_CAN_ID_GROUP=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_ROLLING_COUNT_2_flag(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_ROLLING_COUNT_2_flag=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_POWER64_m9(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_POWER64_m9=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVING64_m9(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVING64_m9=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_SLOW64_m9(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVABLE_SLOW64_m9=sigData;
}

void Put_ESR_TrackMotionPower_m9_CAN_TX_TRACK_MOVABLE_FAST64_m9(uint8 sigData)
{
    ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Layout.CAN_TX_TRACK_MOVABLE_FAST64_m9=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_FUNCTION(uint8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_FUNCTION=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_STATUS(uint8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_STATUS=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_TRACK_ID(uint8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_TRACK_ID=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_ANGLE(int8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_ANGLE=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_LAT_POS(int8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_LAT_POS=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_LAT_RATE(int8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_LAT_RATE=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_RANGE(uint8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_RANGE_ACCEL(int8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE_ACCEL=sigData;
}

void Put_ESR_Sim1_CAN_RX_SIM_RANGE_RATE(int8 sigData)
{
    ESR_Sim1_u.ESR_Sim1_Layout.CAN_RX_SIM_RANGE_RATE=sigData;
}

void Put_ESR_Valid1_CAN_TX_VALID_LR_SN(uint8 sigData)
{
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_SN=sigData;
}

void Put_ESR_Valid1_CAN_TX_VALID_LR_RANGE(uint16 sigData)
{
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_0=(uint8)(sigData>>8);
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Valid1_CAN_TX_VALID_LR_RANGE_RATE(int16 sigData)
{
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Valid1_CAN_TX_VALID_LR_ANGLE(int16 sigData)
{
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_ANGLE_0=(int8)(sigData>>8);
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Valid1_CAN_TX_VALID_LR_POWER(int8 sigData)
{
    ESR_Valid1_u.ESR_Valid1_Layout.CAN_TX_VALID_LR_POWER=sigData;
}

void Put_ESR_Valid2_CAN_TX_VALID_MR_SN(uint8 sigData)
{
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_SN=sigData;
}

void Put_ESR_Valid2_CAN_TX_VALID_MR_RANGE(uint16 sigData)
{
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_0=(uint8)(sigData>>8);
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_1=(uint8)(sigData);
}

void Put_ESR_Valid2_CAN_TX_VALID_MR_RANGE_RATE(int16 sigData)
{
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_RATE_0=(int8)(sigData>>8);
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_RANGE_RATE_1=(int8)(sigData);
}

void Put_ESR_Valid2_CAN_TX_VALID_MR_ANGLE(int16 sigData)
{
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_ANGLE_0=(int8)(sigData>>8);
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Valid2_CAN_TX_VALID_MR_POWER(int8 sigData)
{
    ESR_Valid2_u.ESR_Valid2_Layout.CAN_TX_VALID_MR_POWER=sigData;
}

void Put_ESR_Status5_CAN_TX_SWBATT_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SWBATT_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_IGNP_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_IGNP_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_TEMP1_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_TEMP1_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_TEMP2_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_TEMP2_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_SUPPLY_5VA_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_5VA_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_SUPPLY_5VDX_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_5VDX_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_SUPPLY_3P3V_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_3P3V_A2D=sigData;
}

void Put_ESR_Status5_CAN_TX_SUPPLY_10V_A2D(uint8 sigData)
{
    ESR_Status5_u.ESR_Status5_Layout.CAN_TX_SUPPLY_10V_A2D=sigData;
}

void Put_ESR_Status6_CAN_TX_SUPPLY_1P8V_A2D(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SUPPLY_1P8V_A2D=sigData;
}

void Put_ESR_Status6_CAN_TX_SUPPLY_N5V_A2D(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SUPPLY_N5V_A2D=sigData;
}

void Put_ESR_Status6_CAN_TX_WAVE_DIFF_A2D(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_WAVE_DIFF_A2D=sigData;
}

void Put_ESR_Status6_CAN_TX_SYSTEM_POWER_MODE(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SYSTEM_POWER_MODE=sigData;
}

void Put_ESR_Status6_CAN_TX_VERTICAL_ALIGN_UPDATED(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_VERTICAL_ALIGN_UPDATED=sigData;
}

void Put_ESR_Status6_CAN_TX_SW_VERSION_DSP_3RD_BYTE(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SW_VERSION_DSP_3RD_BYTE=sigData;
}

void Put_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_2_flag(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_ALIGN_STATUS_2_flag=sigData;
}

void Put_ESR_Status6_CAN_TX_FACTORY_ALIGN_STATUS_1_flag(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_ALIGN_STATUS_1_flag=sigData;
}

void Put_ESR_Status6_CAN_TX_RECOMMEND_UNCONVERGE(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_RECOMMEND_UNCONVERGE=sigData;
}

void Put_ESR_Status6_CAN_TX_FOUND_TARGET(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FOUND_TARGET=sigData;
}

void Put_ESR_Status6_CAN_TX_FACTORY_MISALIGNMENT(int8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_FACTORY_MISALIGNMENT=sigData;
}

void Put_ESR_Status6_CAN_TX_SERV_ALIGN_UPDATES_DONE(uint8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_SERV_ALIGN_UPDATES_DONE=sigData;
}

void Put_ESR_Status6_CAN_TX_VERTICAL_MISALIGNMENT(int8 sigData)
{
    ESR_Status6_u.ESR_Status6_Layout.CAN_TX_VERTICAL_MISALIGNMENT=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_0_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_0_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_1_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_1_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_2_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_2_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_3_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_3_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_4_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_4_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_5_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_5_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_6_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_6_flag=sigData;
}

void Put_ESR_Status7_CAN_TX_ACTIVE_FAULT_7_flag(uint8 sigData)
{
    ESR_Status7_u.ESR_Status7_Layout.CAN_TX_ACTIVE_FAULT_7_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_0_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_0_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_1_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_1_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_2_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_2_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_3_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_3_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_4_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_4_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_5_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_5_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_6_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_6_flag=sigData;
}

void Put_ESR_Status8_CAN_TX_HISTORY_FAULT_7_flag(uint8 sigData)
{
    ESR_Status8_u.ESR_Status8_Layout.CAN_TX_HISTORY_FAULT_7_flag=sigData;
}

void Put_ESR_Status9_CAN_TX_AVG_PWR_CWBLKG(uint16 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_AVG_PWR_CWBLKG_0=(uint8)(sigData>>4);
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_AVG_PWR_CWBLKG_1=(uint8)(sigData);
}

void Put_ESR_Status9_CAN_TX_SIDESLIP_ANGLE(int16 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SIDESLIP_ANGLE_0=(int8)(sigData>>8);
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SIDESLIP_ANGLE_1=(int8)(sigData);
}

void Put_ESR_Status9_CAN_TX_SERIAL_NUM_3RD_BYTE(uint8 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_SERIAL_NUM_3RD_BYTE=sigData;
}

void Put_ESR_Status9_CAN_TX_FILTERED_XOHP_ACC_CIPV(int16 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_FILTERED_XOHP_ACC_CIPV_0=(int8)(sigData>>8);
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_FILTERED_XOHP_ACC_CIPV_1=(int8)(sigData);
}

void Put_ESR_Status9_CAN_TX_WATER_SPRAY_TARGET_ID(uint8 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_WATER_SPRAY_TARGET_ID=sigData;
}

void Put_ESR_Status9_CAN_TX_PATH_ID_ACC_2_flag(uint8 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_PATH_ID_ACC_2_flag=sigData;
}

void Put_ESR_Status9_CAN_TX_PATH_ID_ACC_3_flag(uint8 sigData)
{
    ESR_Status9_u.ESR_Status9_Layout.CAN_TX_PATH_ID_ACC_3_flag=sigData;
}

void Put_Vehicle3_CAN_RX_LAT_ACCEL(int16 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_0=(int8)(sigData>>3);
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_1=(int8)(sigData);
}

void Put_Vehicle3_CAN_RX_LAT_ACCEL_VALIDITY(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LAT_ACCEL_VALIDITY=sigData;
}

void Put_Vehicle3_CAN_RX_LONG_ACCEL_VALIDITY(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_VALIDITY=sigData;
}

void Put_Vehicle3_CAN_RX_LONG_ACCEL(int16 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_0=(int8)(sigData>>4);
    Vehicle3_u.Vehicle3_Layout.CAN_RX_LONG_ACCEL_1=(int8)(sigData);
}

void Put_Vehicle3_CAN_RX_RADAR_FOV_LR(uint16 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_LR_0=(uint8)(sigData>>1);
    Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_LR_1=(uint8)(sigData);
}

void Put_Vehicle3_CAN_RX_RADAR_FOV_MR(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_FOV_MR=sigData;
}

void Put_Vehicle3_CAN_RX_RADAR_HEIGHT(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_RADAR_HEIGHT=sigData;
}

void Put_Vehicle3_CAN_RX_AUTO_ALIGN_DISABLE(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_AUTO_ALIGN_DISABLE=sigData;
}

void Put_Vehicle3_CAN_RX_WHEEL_SLIP(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_WHEEL_SLIP=sigData;
}

void Put_Vehicle3_CAN_RX_AUTO_ALIGN_CONVERGED(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_AUTO_ALIGN_CONVERGED=sigData;
}

void Put_Vehicle3_CAN_RX_AALIGN_AVG_CTR_TOTAL(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_AALIGN_AVG_CTR_TOTAL=sigData;
}

void Put_Vehicle3_CAN_RX_SERV_ALIGN_ENABLE(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_ENABLE=sigData;
}

void Put_Vehicle3_CAN_RX_SERV_ALIGN_TYPE(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_TYPE=sigData;
}

void Put_Vehicle3_CAN_RX_SERV_ALIGN_UPDATES_NEED(uint8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_SERV_ALIGN_UPDATES_NEED=sigData;
}

void Put_Vehicle3_CAN_RX_ANGLE_MOUNTING_OFFSET(int8 sigData)
{
    Vehicle3_u.Vehicle3_Layout.CAN_RX_ANGLE_MOUNTING_OFFSET=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_ALIGN_MAX_NT(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_MAX_NT=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_ALIGN_CMD_2_flag(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_CMD_2_flag=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_ALIGN_SAMP_REQ(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_SAMP_REQ=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_ALIGN_CMD_1_flag(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_ALIGN_CMD_1_flag=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_OFFSET(int8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_OFFSET=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_HOR(int8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_SPACE_HOR=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_MTG_SPACE_VER(int8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_MTG_SPACE_VER=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_1_flag(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_1_flag=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_R2M(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_R2M=sigData;
}

void Put_Vehicle4_CAN_RX_FAC_TGT_RANGE_M2T(uint8 sigData)
{
    Vehicle4_u.Vehicle4_Layout.CAN_RX_FAC_TGT_RANGE_M2T=sigData;
}

void Put_Vehicle5_CAN_RX_OVERSTEER_UNDERSTEER(int8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_OVERSTEER_UNDERSTEER=sigData;
}

void Put_Vehicle5_CAN_RX_BEAMWIDTH_VERT(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_BEAMWIDTH_VERT=sigData;
}

void Put_Vehicle5_CAN_RX_YAW_RATE_BIAS_SHIFT(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_YAW_RATE_BIAS_SHIFT=sigData;
}

void Put_Vehicle5_CAN_RX_FUNNEL_OFFSET_LEFT(int8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_FUNNEL_OFFSET_LEFT=sigData;
}

void Put_Vehicle5_CAN_RX_FUNNEL_OFFSET_RIGHT(int8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_FUNNEL_OFFSET_RIGHT=sigData;
}

void Put_Vehicle5_CAN_RX_CW_BLOCKAGE_THRESHOLD(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_CW_BLOCKAGE_THRESHOLD=sigData;
}

void Put_Vehicle5_CAN_RX_DISTANCE_REAR_AXLE(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_DISTANCE_REAR_AXLE=sigData;
}

void Put_Vehicle5_CAN_RX_WHEELBASE(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_WHEELBASE=sigData;
}

void Put_Vehicle5_CAN_RX_STEERING_GEAR_RATIO(uint8 sigData)
{
    Vehicle5_u.Vehicle5_Layout.CAN_RX_STEERING_GEAR_RATIO=sigData;
}

void Put_Vehicle6_CAN_VOLVO_FA_MIN_VSPEED_SHORT(uint8 sigData)
{
    Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_MIN_VSPEED_SHORT=sigData;
}

void Put_Vehicle6_CAN_VOLVO_FA_AALIGN_ESTIMATE(uint8 sigData)
{
    Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_AALIGN_ESTIMATE=sigData;
}

void Put_Vehicle6_CAN_VOLVO_FA_RANGE_MAX_SHORT(uint8 sigData)
{
    Vehicle6_u.Vehicle6_Layout.CAN_VOLVO_FA_RANGE_MAX_SHORT=sigData;
}

void Put_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_LEFT(int8 sigData)
{
    Vehicle6_u.Vehicle6_Layout.CAN_RX_INNER_FUNNEL_OFFSET_LEFT=sigData;
}

void Put_Vehicle6_CAN_RX_INNER_FUNNEL_OFFSET_RIGHT(int8 sigData)
{
    Vehicle6_u.Vehicle6_Layout.CAN_RX_INNER_FUNNEL_OFFSET_RIGHT=sigData;
}

void Put_ACM_Inst_Req_command_code(uint8 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.command_code=sigData;
}

void Put_ACM_Inst_Req_command_ctr(uint8 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.command_ctr=sigData;
}

void Put_ACM_Inst_Req_cc_byte_1_flag(uint8 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_byte_1_flag=sigData;
}

void Put_ACM_Inst_Req_cc_byte_2_flag(uint8 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_byte_2_flag=sigData;
}

void Put_ACM_Inst_Req_cc_word_1_flag(uint16 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_1_flag_0=(uint8)(sigData>>8);
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_1_flag_1=(uint8)(sigData);
}

void Put_ACM_Inst_Req_cc_word_2_flag(uint16 sigData)
{
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_2_flag_0=(uint8)(sigData>>8);
    ACM_Inst_Req_u.ACM_Inst_Req_Layout.cc_word_2_flag_1=(uint8)(sigData);
}

void Put_ACM_Inst_Resp_PID(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.PID=sigData;
}

void Put_ACM_Inst_Resp_command_return_code(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.command_return_code=sigData;
}

void Put_ACM_Inst_Resp_rtn_cmd_counter(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.rtn_cmd_counter=sigData;
}

void Put_ACM_Inst_Resp_Data_3_flag(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_3_flag=sigData;
}

void Put_ACM_Inst_Resp_Data_4_flag(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_4_flag=sigData;
}

void Put_ACM_Inst_Resp_Data_5_flag(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_5_flag=sigData;
}

void Put_ACM_Inst_Resp_Data_6_flag(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_6_flag=sigData;
}

void Put_ACM_Inst_Resp_Data_7_flag(uint8 sigData)
{
    ACM_Inst_Resp_u.ACM_Inst_Resp_Layout.Data_7_flag=sigData;
}

