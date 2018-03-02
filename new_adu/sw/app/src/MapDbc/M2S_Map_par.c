#include "M2S_Map_par.h"
void Put_F_Master_Time_Sync_FTimeSyncMstrClock(uint32 sigData)
{
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_0=(uint8)(sigData>>24);
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_1=(uint8)(sigData>>16);
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_2=(uint8)(sigData>>8);
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_3=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_FTimeSyncMstrChksm(uint16 sigData)
{
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrChksm_0=(uint8)(sigData>>8);
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrChksm_1=(uint8)(sigData);
}

void Put_F_Master_Time_Sync_FTimeSyncMstrClockV(uint8 sigData)
{
    F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClockV=sigData;
}

void Put_PPS_ElevHdSpd_PPSHedng(uint32 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_0=(uint8)(sigData>>16);
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_1=(uint8)(sigData>>8);
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_2=(uint8)(sigData);
}

void Put_PPS_ElevHdSpd_PPSVelV(uint8 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSVelV=sigData;
}

void Put_PPS_ElevHdSpd_PPSElvHedngSpdBrstID(uint8 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHedngSpdBrstID=sigData;
}

void Put_PPS_ElevHdSpd_PPSHedngV(uint8 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedngV=sigData;
}

void Put_PPS_ElevHdSpd_PPSElvtnV(uint8 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtnV=sigData;
}

void Put_PPS_ElevHdSpd_PPSVel(uint8 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSVel=sigData;
}

void Put_PPS_ElevHdSpd_PPSElvtn(uint32 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_0=(uint8)(sigData>>13);
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_1=(uint8)(sigData>>5);
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_2=(uint8)(sigData);
}

void Put_PPS_ElevHdSpd_PPSElvHdengSpdChksm(uint16 sigData)
{
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHdengSpdChksm_0=(uint8)(sigData>>8);
    PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHdengSpdChksm_1=(uint8)(sigData);
}

void Put_PPS_SigAcqTime_PPSSigAcqTm(uint32 sigData)
{
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_0=(uint8)(sigData>>24);
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_1=(uint8)(sigData>>16);
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_2=(uint8)(sigData>>8);
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_3=(uint8)(sigData);
}

void Put_PPS_SigAcqTime_PPSSigAqTmChksm(uint16 sigData)
{
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmChksm_0=(uint8)(sigData>>8);
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmChksm_1=(uint8)(sigData);
}

void Put_PPS_SigAcqTime_PPSSigAqTmBrstID(uint8 sigData)
{
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmBrstID=sigData;
}

void Put_PPS_SigAcqTime_PPSSigAcqTmV(uint8 sigData)
{
    PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTmV=sigData;
}

void Put_PPS_Time_PPSCldrDayV(uint8 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSCldrDayV=sigData;
}

void Put_PPS_Time_PPSCldrYrV(uint8 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSCldrYrV=sigData;
}

void Put_PPS_Time_PPSTmdayV(uint8 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSTmdayV=sigData;
}

void Put_PPS_Time_PPSCldrDay(uint16 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSCldrDay_0=(uint8)(sigData>>8);
    PPS_Time_u.PPS_Time_Layout.PPSCldrDay_1=(uint8)(sigData);
}

void Put_PPS_Time_PPSCldrYr(uint8 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSCldrYr=sigData;
}

void Put_PPS_Time_PPSTmday(uint32 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSTmday_0=(uint8)(sigData>>19);
    PPS_Time_u.PPS_Time_Layout.PPSTmday_1=(uint8)(sigData>>11);
    PPS_Time_u.PPS_Time_Layout.PPSTmday_2=(uint8)(sigData>>3);
    PPS_Time_u.PPS_Time_Layout.PPSTmday_3=(uint8)(sigData);
}

void Put_PPS_Time_PPSTmChksm(uint16 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSTmChksm_0=(uint8)(sigData>>8);
    PPS_Time_u.PPS_Time_Layout.PPSTmChksm_1=(uint8)(sigData);
}

void Put_PPS_Time_PPSTmBrstID(uint8 sigData)
{
    PPS_Time_u.PPS_Time_Layout.PPSTmBrstID=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnCnf(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnCnf=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnCycCnt(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnCycCnt=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnMsgTyp(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnMsgTyp=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnOfst(uint16 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnOfst_0=(uint8)(sigData>>8);
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnOfst_1=(uint8)(sigData);
}

void Put_ADAS_Position_AdvDrAstMpPstnIndx(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnIndx=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnPthIndx(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnPthIndx=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPsnIdxCrLn(uint16 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPsnIdxCrLn_0=(uint8)(sigData>>2);
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPsnIdxCrLn_1=(uint8)(sigData);
}

void Put_ADAS_Position_AdvDrAstMpPstnAge(uint16 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnAge_0=(uint8)(sigData>>8);
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnAge_1=(uint8)(sigData);
}

void Put_ADAS_Position_AdvDrAstMpPstnProb(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnProb=sigData;
}

void Put_ADAS_Position_AdvDrAstMpPstnLftSideOfst(uint8 sigData)
{
    ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnLftSideOfst=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegEffectiveSpeedLimit(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegEffectiveSpeedLimit=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegMessageType(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegMessageType=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegOffset(uint16 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegOffset_0=(uint8)(sigData>>8);
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegOffset_1=(uint8)(sigData);
}

void Put_ADAS_Segment_AdvDrAstMpSegPathIndex(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegPathIndex=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegCyclicCounter(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegCyclicCounter=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegNumOfLanes(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegNumOfLanes=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegPartOfRoute(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegPartOfRoute=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegUpdate(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegUpdate=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegRetransmission(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegRetransmission=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegFormOfWay(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegFormOfWay=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegFunctionalRoadClass(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegFunctionalRoadClass=sigData;
}

void Put_ADAS_Segment_AdvDrAstMpSegWidth(uint16 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegWidth_0=(uint8)(sigData>>2);
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegWidth_1=(uint8)(sigData);
}

void Put_ADAS_Segment_AdvDrAstMpSegLaneChange(uint8 sigData)
{
    ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegLaneChange=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbPartOfCalculatedRoute(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbPartOfCalculatedRoute=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbUpdate(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbUpdate=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbRetransmission(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbRetransmission=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbMessageType(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbMessageType=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbOffset(uint16 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffset_0=(uint8)(sigData>>8);
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffset_1=(uint8)(sigData);
}

void Put_ADAS_Stub_AdvDrAstMpStbPathIndex(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbPathIndex=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbCyclicCounter(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbCyclicCounter=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbLaneToEnter(uint16 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbLaneToEnter_0=(uint8)(sigData>>8);
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbLaneToEnter_1=(uint8)(sigData);
}

void Put_ADAS_Stub_AdvDrAstMpStbSubPathIndex(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbSubPathIndex=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbTurnAngle(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbTurnAngle=sigData;
}

void Put_ADAS_Stub_AdvDrAstMpStbOffsetToLaneEnd(uint8 sigData)
{
    ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffsetToLaneEnd=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtProfileType(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtProfileType=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtMessageType(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtMessageType=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtOffset(uint16 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtOffset_0=(uint8)(sigData>>8);
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtOffset_1=(uint8)(sigData);
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtPathIndex(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtPathIndex=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtCyclicCounter(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtCyclicCounter=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtDistance1(uint16 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtDistance1_0=(uint8)(sigData>>4);
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtDistance1_1=(uint8)(sigData);
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtUpdate(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtUpdate=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtRetransmission(uint8 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtRetransmission=sigData;
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue0(uint16 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue0_0=(uint8)(sigData>>6);
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue0_1=(uint8)(sigData);
}

void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue1(uint16 sigData)
{
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue1_0=(uint8)(sigData>>8);
    ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue1_1=(uint8)(sigData);
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngUpdate(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngUpdate=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngRetransmission(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngRetransmission=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngProfileType(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngProfileType=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpStaightOrCurve(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpStaightOrCurve=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpCurEntranceOrTerminalPoint(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpCurEntranceOrTerminalPoint=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngOffset(uint16 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngOffset_0=(uint8)(sigData>>8);
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngOffset_1=(uint8)(sigData);
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngPathIndex(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngPathIndex=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngCyclicCounter(uint8 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngCyclicCounter=sigData;
}

void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngValue(uint32 sigData)
{
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_0=(uint8)(sigData>>24);
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_1=(uint8)(sigData>>16);
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_2=(uint8)(sigData>>8);
    ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_3=(uint8)(sigData);
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtCntryCd(uint16 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCntryCd_0=(uint8)(sigData>>8);
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCntryCd_1=(uint8)(sigData);
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtSbVr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMnrPrtSbVr=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtPrvdr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtPrvdr=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtHwVer(uint16 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtHwVer_0=(uint8)(sigData>>8);
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtHwVer_1=(uint8)(sigData);
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtCycCnt(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCycCnt=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtDrvSd(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtDrvSd=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtVr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMnrPrtVr=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtRgnCd(uint16 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtRgnCd_0=(uint8)(sigData>>8);
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtRgnCd_1=(uint8)(sigData);
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtSpdUnt(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtSpdUnt=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtVerYr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtVerYr=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtMjrPrtVr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMjrPrtVr=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtMsgTyp(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMsgTyp=sigData;
}

void Put_ADAS_Metadata_AdvDrAstMpMtdtVerYrQtr(uint8 sigData)
{
    ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtVerYrQtr=sigData;
}

void Put_ADAS_Protection_AdvDrAstMpProtRTrns(uint8 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtRTrns=sigData;
}

void Put_ADAS_Protection_AdvDrAstMpProtCycCtMsg(uint8 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtCycCtMsg=sigData;
}

void Put_ADAS_Protection_AdvDrvAstMpInpSigFld(uint8 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrvAstMpInpSigFld=sigData;
}

void Put_ADAS_Protection_AdvDrvAstMpHwFlt(uint8 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrvAstMpHwFlt=sigData;
}

void Put_ADAS_Protection_AdvDrAstMpProtChksm(uint16 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtChksm_0=(uint8)(sigData>>8);
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtChksm_1=(uint8)(sigData);
}

void Put_ADAS_Protection_AdvDrAstMpPrtMsgTp(uint8 sigData)
{
    ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpPrtMsgTp=sigData;
}

void Put_Map_Retrans_Request_HrznPrvdRstRq(uint8 sigData)
{
    Map_Retrans_Request_u.Map_Retrans_Request_Layout.HrznPrvdRstRq=sigData;
}

void Put_Map_Retrans_Request_ADASISMsgTypRetrans(uint8 sigData)
{
    Map_Retrans_Request_u.Map_Retrans_Request_Layout.ADASISMsgTypRetrans=sigData;
}

void Put_Map_Retrans_Request_ADASISRwDtMplxdCycCnt(uint8 sigData)
{
    Map_Retrans_Request_u.Map_Retrans_Request_Layout.ADASISRwDtMplxdCycCnt=sigData;
}

void Put_PPS_PosLong_PPSLong(int32 sigData)
{
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_0=(int8)(sigData>>24);
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_1=(int8)(sigData>>16);
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_2=(int8)(sigData>>8);
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_3=(int8)(sigData);
}

void Put_PPS_PosLong_PPSLongChksm(uint16 sigData)
{
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLongChksm_0=(uint8)(sigData>>8);
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLongChksm_1=(uint8)(sigData);
}

void Put_PPS_PosLong_PPSLongV(uint8 sigData)
{
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLongV=sigData;
}

void Put_PPS_PosLong_PPSLongBrstID(uint8 sigData)
{
    PPS_PosLong_u.PPS_PosLong_Layout.PPSLongBrstID=sigData;
}

void Put_PPS_PosLat_PPSLat(int32 sigData)
{
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_0=(int8)(sigData>>24);
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_1=(int8)(sigData>>16);
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_2=(int8)(sigData>>8);
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_3=(int8)(sigData);
}

void Put_PPS_PosLat_PPSLatChksm(uint16 sigData)
{
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLatChksm_0=(uint8)(sigData>>8);
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLatChksm_1=(uint8)(sigData);
}

void Put_PPS_PosLat_PPSLatBrstID(uint8 sigData)
{
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLatBrstID=sigData;
}

void Put_PPS_PosLat_PPSLatV(uint8 sigData)
{
    PPS_PosLat_u.PPS_PosLat_Layout.PPSLatV=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnUpdate(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnUpdate=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnRetransmission(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnRetransmission=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnProfileType(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnProfileType=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnMessageType(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnMessageType=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnOffset(uint16 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnOffset_0=(uint8)(sigData>>8);
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnOffset_1=(uint8)(sigData);
}

void Put_ADAS_Lane_AdvDrAstMpLnPathIndex(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnPathIndex=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnCyclicCounter(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnCyclicCounter=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnLaneChangeRule(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChangeRule=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnLaneIndex(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneIndex=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnLaneWidth(uint16 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneWidth_0=(uint8)(sigData>>2);
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneWidth_1=(uint8)(sigData);
}

void Put_ADAS_Lane_AdvDrAstMpLnLaneChange(uint16 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChange_0=(uint8)(sigData>>1);
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChange_1=(uint8)(sigData);
}

void Put_ADAS_Lane_AdvDrAstMpLnPartOfCalculatedRoute(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnPartOfCalculatedRoute=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLnType(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnType=sigData;
}

void Put_ADAS_Lane_AdvDrAstMpLaneInitialForwardLaneNumber(uint8 sigData)
{
    ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLaneInitialForwardLaneNumber=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_Update(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Update=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_Retransmission(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Retransmission=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_ProfileType(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_ProfileType=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_MessageType(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_MessageType=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_Offset(uint16 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Offset_0=(uint8)(sigData>>8);
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Offset_1=(uint8)(sigData);
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_PathIndex(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_PathIndex=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_CyclicCounter(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_CyclicCounter=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_Position(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Position=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_SubType(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_SubType=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_MajorType(uint8 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_MajorType=sigData;
}

void Put_ADAS_TrafficSign_KHI_TrafficSign_Value(uint16 sigData)
{
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Value_0=(uint8)(sigData>>8);
    ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Value_1=(uint8)(sigData);
}

void Put_ADAS_LaneMark_KHI_LaneMark_Update(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Update=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_Retransmission(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Retransmission=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_ProfileType(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_ProfileType=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_MessageType(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_MessageType=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_Offset(uint16 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Offset_0=(uint8)(sigData>>8);
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Offset_1=(uint8)(sigData);
}

void Put_ADAS_LaneMark_KHI_LaneMark_PathIndex(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_PathIndex=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_CyclicCounter(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_CyclicCounter=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_Position(uint16 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Position_0=(uint8)(sigData>>2);
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Position_1=(uint8)(sigData);
}

void Put_ADAS_LaneMark_KHI_LaneMark_Type(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Type=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_Length(uint16 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Length_0=(uint8)(sigData>>8);
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Length_1=(uint8)(sigData);
}

void Put_ADAS_LaneMark_KHI_LaneMark_Color(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Color=sigData;
}

void Put_ADAS_LaneMark_KHI_LaneMark_Value(uint8 sigData)
{
    ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Value=sigData;
}

void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvn(uint16 sigData)
{
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvn_0=(uint8)(sigData>>8);
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvn_1=(uint8)(sigData);
}

void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvnV(uint8 sigData)
{
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvnV=sigData;
}

void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvn(uint16 sigData)
{
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvn_0=(uint8)(sigData>>8);
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvn_1=(uint8)(sigData);
}

void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvnV(uint8 sigData)
{
    PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvnV=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TransEstGear(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TransEstGear=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TransEstGearV(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TransEstGearV=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPos(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsShftLvrPos=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPosV(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsShftLvrPosV=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TrnsEngdState(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsEngdState=sigData;
}

void Put_Map_PPEI_Trans_General_Status_2_TrnsEngdStateV(uint8 sigData)
{
    PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsEngdStateV=sigData;
}

void Put_PPS_Navigation_Status_NaviDataCompletelySent(uint8 sigData)
{
    PPS_Navigation_Status_u.PPS_Navigation_Status_Layout.NaviDataCompletelySent=sigData;
}

void Put_PPS_Navigation_Status_UsCmdOnNav(uint8 sigData)
{
    PPS_Navigation_Status_u.PPS_Navigation_Status_Layout.UsCmdOnNav=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd0Typ(uint16 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_1_PrphrlInd0DstX(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0DstX=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd0Msk(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Msk=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd0DstY(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0DstY=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd1Typ(uint16 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_1_PrphrlInd1DstX(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1DstX=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd1Msk(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Msk=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd1DstY(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1DstY=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd2Typ(uint16 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_1_PrphrlInd2DstX(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2DstX=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd2Msk(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Msk=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd2DstY(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2DstY=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd3Typ(uint16 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_1_PrphrlInd3DstX(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3DstX=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd3Msk(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Msk=sigData;
}

void Put_Peripheral_Indication_1_PrphrlInd3DstY(uint8 sigData)
{
    Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3DstY=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd4Typ(uint16 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_2_PrphrlInd4DstX(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4DstX=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd4Msk(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Msk=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd4DstY(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4DstY=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd5Typ(uint16 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_2_PrphrlInd5DstX(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5DstX=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd5Msk(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Msk=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd5DstY(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5DstY=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd6Typ(uint16 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_2_PrphrlInd6DstX(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6DstX=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd6Msk(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Msk=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd6DstY(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6DstY=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd7Typ(uint16 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Typ_0=(uint8)(sigData>>2);
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Typ_1=(uint8)(sigData);
}

void Put_Peripheral_Indication_2_PrphrlInd7DstX(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7DstX=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd7Msk(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Msk=sigData;
}

void Put_Peripheral_Indication_2_PrphrlInd7DstY(uint8 sigData)
{
    Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7DstY=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndx(uint16 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndx_0=(uint8)(sigData>>8);
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndx_1=(uint8)(sigData);
}

void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndRq(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndRq=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndy(int16 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndy_0=(int8)(sigData>>2);
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndy_1=(int8)(sigData);
}

void Put_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpd(uint16 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpd_0=(uint8)(sigData>>8);
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpd_1=(uint8)(sigData);
}

void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndMsk(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndMsk=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_ACCTmpUnavlbleIO(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCTmpUnavlbleIO=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_Emgysituatnhadlg(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.Emgysituatnhadlg=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_DrvrOvrTkReq(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.DrvrOvrTkReq=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpdIO(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpdIO=sigData;
}

void Put_Adaptive_Cruise_Control_Indication_ACCAct370(uint8 sigData)
{
    Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCAct370=sigData;
}

void Put_APA_Indication_Devalidpkslt(uint8 sigData)
{
    APA_Indication_u.APA_Indication_Layout.Devalidpkslt=sigData;
}

void Put_APA_Control_Pktcurentslot(uint8 sigData)
{
    APA_Control_u.APA_Control_Layout.Pktcurentslot=sigData;
}

void Put_APA_Control_EAPAFucn(uint8 sigData)
{
    APA_Control_u.APA_Control_Layout.EAPAFucn=sigData;
}



uint32 Get_F_Master_Time_Sync_FTimeSyncMstrClock( )
{
    uint32 rc;
    rc=((uint32)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_0)<<24
    |((uint32)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_1)<<16
    |((uint32)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_2)<<8
    |((uint32)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClock_3);
    return rc;
}

uint16 Get_F_Master_Time_Sync_FTimeSyncMstrChksm( )
{
    uint16 rc;
    rc=((uint16)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrChksm_0)<<8
    |((uint16)F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrChksm_1);
    return rc;
}

uint8 Get_F_Master_Time_Sync_FTimeSyncMstrClockV( )
{
    uint8 rc;
    rc=F_Master_Time_Sync_u.F_Master_Time_Sync_Layout.FTimeSyncMstrClockV;
    return rc;
}

uint32 Get_PPS_ElevHdSpd_PPSHedng( )
{
    uint32 rc;
    rc=((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_0)<<16
    |((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_1)<<8
    |((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedng_2);
    return rc;
}

uint8 Get_PPS_ElevHdSpd_PPSVelV( )
{
    uint8 rc;
    rc=PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSVelV;
    return rc;
}

uint8 Get_PPS_ElevHdSpd_PPSElvHedngSpdBrstID( )
{
    uint8 rc;
    rc=PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHedngSpdBrstID;
    return rc;
}

uint8 Get_PPS_ElevHdSpd_PPSHedngV( )
{
    uint8 rc;
    rc=PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSHedngV;
    return rc;
}

uint8 Get_PPS_ElevHdSpd_PPSElvtnV( )
{
    uint8 rc;
    rc=PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtnV;
    return rc;
}

uint8 Get_PPS_ElevHdSpd_PPSVel( )
{
    uint8 rc;
    rc=PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSVel;
    return rc;
}

uint32 Get_PPS_ElevHdSpd_PPSElvtn( )
{
    uint32 rc;
    rc=((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_0)<<13
    |((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_1)<<5
    |((uint32)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvtn_2);
    return rc;
}

uint16 Get_PPS_ElevHdSpd_PPSElvHdengSpdChksm( )
{
    uint16 rc;
    rc=((uint16)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHdengSpdChksm_0)<<8
    |((uint16)PPS_ElevHdSpd_u.PPS_ElevHdSpd_Layout.PPSElvHdengSpdChksm_1);
    return rc;
}

uint32 Get_PPS_SigAcqTime_PPSSigAcqTm( )
{
    uint32 rc;
    rc=((uint32)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_0)<<24
    |((uint32)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_1)<<16
    |((uint32)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_2)<<8
    |((uint32)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTm_3);
    return rc;
}

uint16 Get_PPS_SigAcqTime_PPSSigAqTmChksm( )
{
    uint16 rc;
    rc=((uint16)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmChksm_0)<<8
    |((uint16)PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmChksm_1);
    return rc;
}

uint8 Get_PPS_SigAcqTime_PPSSigAqTmBrstID( )
{
    uint8 rc;
    rc=PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAqTmBrstID;
    return rc;
}

uint8 Get_PPS_SigAcqTime_PPSSigAcqTmV( )
{
    uint8 rc;
    rc=PPS_SigAcqTime_u.PPS_SigAcqTime_Layout.PPSSigAcqTmV;
    return rc;
}

uint8 Get_PPS_Time_PPSCldrDayV( )
{
    uint8 rc;
    rc=PPS_Time_u.PPS_Time_Layout.PPSCldrDayV;
    return rc;
}

uint8 Get_PPS_Time_PPSCldrYrV( )
{
    uint8 rc;
    rc=PPS_Time_u.PPS_Time_Layout.PPSCldrYrV;
    return rc;
}

uint8 Get_PPS_Time_PPSTmdayV( )
{
    uint8 rc;
    rc=PPS_Time_u.PPS_Time_Layout.PPSTmdayV;
    return rc;
}

uint16 Get_PPS_Time_PPSCldrDay( )
{
    uint16 rc;
    rc=((uint16)PPS_Time_u.PPS_Time_Layout.PPSCldrDay_0)<<8
    |((uint16)PPS_Time_u.PPS_Time_Layout.PPSCldrDay_1);
    return rc;
}

uint8 Get_PPS_Time_PPSCldrYr( )
{
    uint8 rc;
    rc=PPS_Time_u.PPS_Time_Layout.PPSCldrYr;
    return rc;
}

uint32 Get_PPS_Time_PPSTmday( )
{
    uint32 rc;
    rc=((uint32)PPS_Time_u.PPS_Time_Layout.PPSTmday_0)<<19
    |((uint32)PPS_Time_u.PPS_Time_Layout.PPSTmday_1)<<11
    |((uint32)PPS_Time_u.PPS_Time_Layout.PPSTmday_2)<<3
    |((uint32)PPS_Time_u.PPS_Time_Layout.PPSTmday_3);
    return rc;
}

uint16 Get_PPS_Time_PPSTmChksm( )
{
    uint16 rc;
    rc=((uint16)PPS_Time_u.PPS_Time_Layout.PPSTmChksm_0)<<8
    |((uint16)PPS_Time_u.PPS_Time_Layout.PPSTmChksm_1);
    return rc;
}

uint8 Get_PPS_Time_PPSTmBrstID( )
{
    uint8 rc;
    rc=PPS_Time_u.PPS_Time_Layout.PPSTmBrstID;
    return rc;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnCnf( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnCnf;
    return rc;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnCycCnt( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnCycCnt;
    return rc;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnMsgTyp( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnMsgTyp;
    return rc;
}

double Get_ADAS_Position_AdvDrAstMpPstnOfst( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnOfst_0)<<8
    |((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnOfst_1);
	temp = rc *0.1;
    return temp;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnIndx( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnIndx;
    return rc;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnPthIndx( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnPthIndx;
    return rc;
}

uint16 Get_ADAS_Position_AdvDrAstMpPsnIdxCrLn( )
{
    uint16 rc;
    rc=((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPsnIdxCrLn_0)<<2
    |((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPsnIdxCrLn_1);
    return rc;
}

uint16 Get_ADAS_Position_AdvDrAstMpPstnAge( )
{
    uint16 rc;
    rc=((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnAge_0)<<8
    |((uint16)ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnAge_1);
    return rc;
}

uint8 Get_ADAS_Position_AdvDrAstMpPstnProb( )
{
    uint8 rc;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnProb;
    return rc;
}

double Get_ADAS_Position_AdvDrAstMpPstnLftSideOfst( )
{
    uint8 rc;
	double temp;
    rc=ADAS_Position_u.ADAS_Position_Layout.AdvDrAstMpPstnLftSideOfst;
	 temp =  rc* 0.1;
    return temp;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegEffectiveSpeedLimit( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegEffectiveSpeedLimit;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegMessageType( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegMessageType;
    return rc;
}

double Get_ADAS_Segment_AdvDrAstMpSegOffset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegOffset_0)<<8
    |((uint16)ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegOffset_1);
	temp = rc*0.1;
    return temp;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegPathIndex( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegPathIndex;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegCyclicCounter( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegCyclicCounter;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegNumOfLanes( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegNumOfLanes;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegPartOfRoute( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegPartOfRoute;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegUpdate( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegUpdate;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegRetransmission( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegRetransmission;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegFormOfWay( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegFormOfWay;
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegFunctionalRoadClass( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegFunctionalRoadClass;
    return rc;
}

uint16 Get_ADAS_Segment_AdvDrAstMpSegWidth( )
{
    uint16 rc;
    rc=((uint16)ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegWidth_0)<<2
    |((uint16)ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegWidth_1);
    return rc;
}

uint8 Get_ADAS_Segment_AdvDrAstMpSegLaneChange( )
{
    uint8 rc;
    rc=ADAS_Segment_u.ADAS_Segment_Layout.AdvDrAstMpSegLaneChange;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbPartOfCalculatedRoute( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbPartOfCalculatedRoute;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbUpdate( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbUpdate;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbRetransmission( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbRetransmission;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbMessageType( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbMessageType;
    return rc;
}

double Get_ADAS_Stub_AdvDrAstMpStbOffset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffset_0)<<8
    |((uint16)ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffset_1);
	temp = rc *0.1;
     return temp;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbPathIndex( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbPathIndex;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbCyclicCounter( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbCyclicCounter;
    return rc;
}

uint16 Get_ADAS_Stub_AdvDrAstMpStbLaneToEnter( )
{
    uint16 rc;
    rc=((uint16)ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbLaneToEnter_0)<<8
    |((uint16)ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbLaneToEnter_1);
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbSubPathIndex( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbSubPathIndex;
    return rc;
}

double Get_ADAS_Stub_AdvDrAstMpStbTurnAngle( )
{
    double rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbTurnAngle * 1.417;
    return rc;
}

uint8 Get_ADAS_Stub_AdvDrAstMpStbOffsetToLaneEnd( )
{
    uint8 rc;
    rc=ADAS_Stub_u.ADAS_Stub_Layout.AdvDrAstMpStbOffsetToLaneEnd;
    return rc;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtProfileType( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtProfileType;
    return rc;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtMessageType( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtMessageType;
    return rc;
}

double Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtOffset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtOffset_0)<<8
    |((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtOffset_1);
	temp = rc *0.1;
    return temp;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtPathIndex( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtPathIndex;
    return rc;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtCyclicCounter( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtCyclicCounter;
    return rc;
}

uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtDistance1( )
{
    uint16 rc;
    rc=((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtDistance1_0)<<4
    |((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtDistance1_1);
    return rc;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtUpdate( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtUpdate;
    return rc;
}

uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtRetransmission( )
{
    uint8 rc;
    rc=ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtRetransmission;
    return rc;
}

uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue0( )
{
    uint16 rc;
    rc=((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue0_0)<<6
    |((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue0_1);
    return rc;
}

uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue1( )
{
    uint16 rc;
    rc=((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue1_0)<<8
    |((uint16)ADAS_ProfileShort_u.ADAS_ProfileShort_Layout.AdvDrAstMpPrfShrtValue1_1);
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngUpdate( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngUpdate;
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngRetransmission( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngRetransmission;
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngProfileType( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngProfileType;
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpStaightOrCurve( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpStaightOrCurve;
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpCurEntranceOrTerminalPoint( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpCurEntranceOrTerminalPoint;
    return rc;
}

double Get_ADAS_ProfileLong_AdvDrAstMpPrfLngOffset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngOffset_0)<<8
    |((uint16)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngOffset_1);
	temp = rc *0.1;
    return temp;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngPathIndex( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngPathIndex;
    return rc;
}

uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngCyclicCounter( )
{
    uint8 rc;
    rc=ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngCyclicCounter;
    return rc;
}

uint32 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngValue( )
{
    uint32 rc;
    rc=((uint32)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_0)<<24
    |((uint32)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_1)<<16
    |((uint32)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_2)<<8
    |((uint32)ADAS_ProfileLong_u.ADAS_ProfileLong_Layout.AdvDrAstMpPrfLngValue_3);
    return rc;
}

uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtCntryCd( )
{
    uint16 rc;
    rc=((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCntryCd_0)<<8
    |((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCntryCd_1);
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtSbVr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMnrPrtSbVr;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtPrvdr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtPrvdr;
    return rc;
}

uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtHwVer( )
{
    uint16 rc;
    rc=((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtHwVer_0)<<8
    |((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtHwVer_1);
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtCycCnt( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtCycCnt;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtDrvSd( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtDrvSd;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtVr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMnrPrtVr;
    return rc;
}

uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtRgnCd( )
{
    uint16 rc;
    rc=((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtRgnCd_0)<<8
    |((uint16)ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtRgnCd_1);
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtSpdUnt( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtSpdUnt;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtVerYr;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMjrPrtVr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMjrPrtVr;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMsgTyp( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtMsgTyp;
    return rc;
}

uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYrQtr( )
{
    uint8 rc;
    rc=ADAS_Metadata_u.ADAS_Metadata_Layout.AdvDrAstMpMtdtVerYrQtr;
    return rc;
}

uint8 Get_ADAS_Protection_AdvDrAstMpProtRTrns( )
{
    uint8 rc;
    rc=ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtRTrns;
    return rc;
}

uint8 Get_ADAS_Protection_AdvDrAstMpProtCycCtMsg( )
{
    uint8 rc;
    rc=ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtCycCtMsg;
    return rc;
}

uint8 Get_ADAS_Protection_AdvDrvAstMpInpSigFld( )
{
    uint8 rc;
    rc=ADAS_Protection_u.ADAS_Protection_Layout.AdvDrvAstMpInpSigFld;
    return rc;
}

uint8 Get_ADAS_Protection_AdvDrvAstMpHwFlt( )
{
    uint8 rc;
    rc=ADAS_Protection_u.ADAS_Protection_Layout.AdvDrvAstMpHwFlt;
    return rc;
}

uint16 Get_ADAS_Protection_AdvDrAstMpProtChksm( )
{
    uint16 rc;
    rc=((uint16)ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtChksm_0)<<8
    |((uint16)ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpProtChksm_1);
    return rc;
}

uint8 Get_ADAS_Protection_AdvDrAstMpPrtMsgTp( )
{
    uint8 rc;
    rc=ADAS_Protection_u.ADAS_Protection_Layout.AdvDrAstMpPrtMsgTp;
    return rc;
}

uint8 Get_Map_Retrans_Request_HrznPrvdRstRq( )
{
    uint8 rc;
    rc=Map_Retrans_Request_u.Map_Retrans_Request_Layout.HrznPrvdRstRq;
    return rc;
}

uint8 Get_Map_Retrans_Request_ADASISMsgTypRetrans( )
{
    uint8 rc;
    rc=Map_Retrans_Request_u.Map_Retrans_Request_Layout.ADASISMsgTypRetrans;
    return rc;
}

uint8 Get_Map_Retrans_Request_ADASISRwDtMplxdCycCnt( )
{
    uint8 rc;
    rc=Map_Retrans_Request_u.Map_Retrans_Request_Layout.ADASISRwDtMplxdCycCnt;
    return rc;
}

int32 Get_PPS_PosLong_PPSLong( )
{
    int32 rc;
    rc=((int32)PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_0)<<24
    |((int32)PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_1)<<16
    |((int32)PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_2)<<8
    |((int32)PPS_PosLong_u.PPS_PosLong_Layout.PPSLong_3);
    if(rc>((1<<31)-1))
    {
     rc=rc|(int32)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_PPS_PosLong_PPSLongChksm( )
{
    uint16 rc;
    rc=((uint16)PPS_PosLong_u.PPS_PosLong_Layout.PPSLongChksm_0)<<8
    |((uint16)PPS_PosLong_u.PPS_PosLong_Layout.PPSLongChksm_1);
    return rc;
}

uint8 Get_PPS_PosLong_PPSLongV( )
{
    uint8 rc;
    rc=PPS_PosLong_u.PPS_PosLong_Layout.PPSLongV;
    return rc;
}

uint8 Get_PPS_PosLong_PPSLongBrstID( )
{
    uint8 rc;
    rc=PPS_PosLong_u.PPS_PosLong_Layout.PPSLongBrstID;
    return rc;
}

int32 Get_PPS_PosLat_PPSLat( )
{
    int32 rc;
    rc=((int32)PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_0)<<24
    |((int32)PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_1)<<16
    |((int32)PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_2)<<8
    |((int32)PPS_PosLat_u.PPS_PosLat_Layout.PPSLat_3);
    if(rc>((1<<31)-1))
    {
     rc=rc|(int32)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_PPS_PosLat_PPSLatChksm( )
{
    uint16 rc;
    rc=((uint16)PPS_PosLat_u.PPS_PosLat_Layout.PPSLatChksm_0)<<8
    |((uint16)PPS_PosLat_u.PPS_PosLat_Layout.PPSLatChksm_1);
    return rc;
}

uint8 Get_PPS_PosLat_PPSLatBrstID( )
{
    uint8 rc;
    rc=PPS_PosLat_u.PPS_PosLat_Layout.PPSLatBrstID;
    return rc;
}

uint8 Get_PPS_PosLat_PPSLatV( )
{
    uint8 rc;
    rc=PPS_PosLat_u.PPS_PosLat_Layout.PPSLatV;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnUpdate( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnUpdate;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnRetransmission( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnRetransmission;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnProfileType( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnProfileType;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnMessageType( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnMessageType;
    return rc;
}

double Get_ADAS_Lane_AdvDrAstMpLnOffset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnOffset_0)<<8
    |((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnOffset_1);
	temp = rc*0.1;
    return temp;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnPathIndex( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnPathIndex;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnCyclicCounter( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnCyclicCounter;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneChangeRule( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChangeRule;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneIndex( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneIndex;
    return rc;
}

double Get_ADAS_Lane_AdvDrAstMpLnLaneWidth( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneWidth_0)<<2
    |((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneWidth_1);
	temp = rc *0.1;
    return temp;
}

uint16 Get_ADAS_Lane_AdvDrAstMpLnLaneChange( )
{
    uint16 rc;
    rc=((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChange_0)<<1
    |((uint16)ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnLaneChange_1);
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnPartOfCalculatedRoute( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnPartOfCalculatedRoute;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLnType( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLnType;
    return rc;
}

uint8 Get_ADAS_Lane_AdvDrAstMpLaneInitialForwardLaneNumber( )
{
    uint8 rc;
    rc=ADAS_Lane_u.ADAS_Lane_Layout.AdvDrAstMpLaneInitialForwardLaneNumber;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Update( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Update;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Retransmission( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Retransmission;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_ProfileType( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_ProfileType;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MessageType( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_MessageType;
    return rc;
}

double Get_ADAS_TrafficSign_KHI_TrafficSign_Offset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Offset_0)<<8
    |((uint16)ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Offset_1);
	temp = rc * 0.1;
    return temp;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_PathIndex( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_PathIndex;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_CyclicCounter( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_CyclicCounter;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Position( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Position;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_SubType( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_SubType;
    return rc;
}

uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MajorType( )
{
    uint8 rc;
    rc=ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_MajorType;
    return rc;
}

uint16 Get_ADAS_TrafficSign_KHI_TrafficSign_Value( )
{
    uint16 rc;
    rc=((uint16)ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Value_0)<<8
    |((uint16)ADAS_TrafficSign_u.ADAS_TrafficSign_Layout.KHI_TrafficSign_Value_1);
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_Update( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Update;
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_Retransmission( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Retransmission;
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_ProfileType( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_ProfileType;
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_MessageType( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_MessageType;
    return rc;
}

double Get_ADAS_LaneMark_KHI_LaneMark_Offset( )
{
    uint16 rc;
	double temp;
    rc=((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Offset_0)<<8
    |((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Offset_1);
	temp = rc* 0.1;
    return temp;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_PathIndex( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_PathIndex;
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_CyclicCounter( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_CyclicCounter;
    return rc;
}

uint16 Get_ADAS_LaneMark_KHI_LaneMark_Position( )
{
    uint16 rc;
    rc=((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Position_0)<<2
    |((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Position_1);
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_Type( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Type;
    return rc;
}

uint16 Get_ADAS_LaneMark_KHI_LaneMark_Length( )
{
    uint16 rc;
    rc=((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Length_0)<<8
    |((uint16)ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Length_1);
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_Color( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Color;
    return rc;
}

uint8 Get_ADAS_LaneMark_KHI_LaneMark_Value( )
{
    uint8 rc;
    rc=ADAS_LaneMark_u.ADAS_LaneMark_Layout.KHI_LaneMark_Value;
    return rc;
}

double Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvn( )
{
    uint16 rc;
	double temp;
    rc=((uint16)PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvn_0)<<8
    |((uint16)PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvn_1);
	temp = rc *0.015625;
    return temp;
}

uint8 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvnV( )
{
    uint8 rc;
    rc=PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgDrvnV;
    return rc;
}

uint16 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvn( )
{
    uint16 rc;
    rc=((uint16)PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvn_0)<<8
    |((uint16)PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvn_1);
    return rc;
}

uint8 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvnV( )
{
    uint8 rc;
    rc=PPEI_Vehicle_Speed_and_Distance_umap.PPEI_Map_Vehicle_Speed_and_Distance_Layout.VehSpdAvgNDrvnV;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TransEstGear( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TransEstGear;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TransEstGearV( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TransEstGearV;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPos( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsShftLvrPos;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPosV( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsShftLvrPosV;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsEngdState( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsEngdState;
    return rc;
}

uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsEngdStateV( )
{
    uint8 rc;
    rc=PPEI_Trans_General_Status_2_umap.PPEI_Map_Trans_General_Status_2_Layout.TrnsEngdStateV;
    return rc;
}

uint8 Get_PPS_Navigation_Status_NaviDataCompletelySent( )
{
    uint8 rc;
    rc=PPS_Navigation_Status_u.PPS_Navigation_Status_Layout.NaviDataCompletelySent;
    return rc;
}

uint8 Get_PPS_Navigation_Status_UsCmdOnNav( )
{
    uint8 rc;
    rc=PPS_Navigation_Status_u.PPS_Navigation_Status_Layout.UsCmdOnNav;
    return rc;
}

uint16 Get_Peripheral_Indication_1_PrphrlInd0Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Typ_0)<<2
    |((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd0DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd0Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd0DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd0DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_1_PrphrlInd1Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Typ_0)<<2
    |((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd1DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd1Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd1DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd1DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_1_PrphrlInd2Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Typ_0)<<2
    |((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd2DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd2Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd2DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd2DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_1_PrphrlInd3Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Typ_0)<<2
    |((uint16)Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd3DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd3Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_1_PrphrlInd3DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_1_u.Peripheral_Indication_1_Layout.PrphrlInd3DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_2_PrphrlInd4Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Typ_0)<<2
    |((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd4DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd4Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd4DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd4DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_2_PrphrlInd5Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Typ_0)<<2
    |((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd5DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd5Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd5DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd5DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_2_PrphrlInd6Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Typ_0)<<2
    |((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd6DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd6Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd6DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd6DstY;
    return rc;
}

uint16 Get_Peripheral_Indication_2_PrphrlInd7Typ( )
{
    uint16 rc;
    rc=((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Typ_0)<<2
    |((uint16)Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Typ_1);
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd7DstX( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7DstX;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd7Msk( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7Msk;
    return rc;
}

uint8 Get_Peripheral_Indication_2_PrphrlInd7DstY( )
{
    uint8 rc;
    rc=Peripheral_Indication_2_u.Peripheral_Indication_2_Layout.PrphrlInd7DstY;
    return rc;
}

uint16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndx( )
{
    uint16 rc;
    rc=((uint16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndx_0)<<8
    |((uint16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndx_1);
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndRq( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndRq;
    return rc;
}

int16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndy( )
{
    int16 rc;
    rc=((int16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndy_0)<<2
    |((int16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndy_1);
    if(rc>((1<<9)-1))
    {
     rc=rc|(int16)((1<<8-8)-1<<(sizeof(rc)*8)-(8-8));
    }
    return rc;
}

uint16 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpd( )
{
    uint16 rc;
    rc=((uint16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpd_0)<<8
    |((uint16)Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpd_1);
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndMsk( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.FOAI_VehAhdIndMsk;
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_ACCTmpUnavlbleIO( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCTmpUnavlbleIO;
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_Emgysituatnhadlg( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.Emgysituatnhadlg;
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_DrvrOvrTkReq( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.DrvrOvrTkReq;
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpdIO( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCDrvrSeltdSpdIO;
    return rc;
}

uint8 Get_Adaptive_Cruise_Control_Indication_ACCAct370( )
{
    uint8 rc;
    rc=Adaptive_Cruise_Control_Indication_u.Adaptive_Cruise_Control_Indication_Layout.ACCAct370;
    return rc;
}

uint8 Get_APA_Indication_Devalidpkslt( )
{
    uint8 rc;
    rc=APA_Indication_u.APA_Indication_Layout.Devalidpkslt;
    return rc;
}

uint8 Get_APA_Control_Pktcurentslot( )
{
    uint8 rc;
    rc=APA_Control_u.APA_Control_Layout.Pktcurentslot;
    return rc;
}

uint8 Get_APA_Control_EAPAFucn( )
{
    uint8 rc;
    rc=APA_Control_u.APA_Control_Layout.EAPAFucn;
    return rc;
}




