#ifndef _M2S_MAP_PAR_H
#define _M2S_MAP_PAR_H

#include "resue.h"
typedef struct F_Master_Time_SyncTag
{
  vbittype FTimeSyncMstrClock_0 : 8;
  vbittype FTimeSyncMstrClock_1 : 8;
  vbittype FTimeSyncMstrClock_2 : 8;
  vbittype FTimeSyncMstrClock_3 : 8;
  vbittype FTimeSyncMstrChksm_0 : 3;
  vbittype unused0 : 1;
  vbittype FTimeSyncMstrClockV : 1;
  vbittype unused1 : 3;
  vbittype FTimeSyncMstrChksm_1 : 8;
} F_Master_Time_Sync;
typedef struct PPS_ElevHdSpdTag
{
  vbittype PPSHedng_0 : 3;
  vbittype PPSVelV : 1;
  vbittype PPSElvHedngSpdBrstID : 2;
  vbittype PPSHedngV : 1;
  vbittype PPSElvtnV : 1;
  vbittype PPSHedng_1 : 8;
  vbittype PPSHedng_2 : 8;
  vbittype PPSVel : 8;
  vbittype PPSElvtn_0 : 8;
  vbittype PPSElvtn_1 : 8;
  vbittype PPSElvHdengSpdChksm_0 : 3;
  vbittype PPSElvtn_2 : 5;
  vbittype PPSElvHdengSpdChksm_1 : 8;
} PPS_ElevHdSpd;
typedef struct PPS_SigAcqTimeTag
{
  vbittype PPSSigAcqTm_0 : 8;
  vbittype PPSSigAcqTm_1 : 8;
  vbittype PPSSigAcqTm_2 : 8;
  vbittype PPSSigAcqTm_3 : 8;
  vbittype PPSSigAqTmChksm_0 : 3;
  vbittype unused0 : 2;
  vbittype PPSSigAqTmBrstID : 2;
  vbittype PPSSigAcqTmV : 1;
  vbittype PPSSigAqTmChksm_1 : 8;
} PPS_SigAcqTime;
typedef struct PPS_TimeTag
{
  vbittype PPSCldrDayV : 1;
  vbittype PPSCldrYrV : 1;
  vbittype PPSTmdayV : 1;
  vbittype unused0 : 5;
  vbittype PPSCldrDay_0 : 1;
  vbittype PPSCldrYr : 7;
  vbittype PPSCldrDay_1 : 8;
  vbittype PPSTmday_0 : 8;
  vbittype PPSTmday_1 : 8;
  vbittype PPSTmday_2 : 8;
  vbittype PPSTmChksm_0 : 3;
  vbittype PPSTmBrstID : 2;
  vbittype PPSTmday_3 : 3;
  vbittype PPSTmChksm_1 : 8;
} PPS_Time;
typedef struct ADAS_PositionTag
{
  vbittype AdvDrAstMpPstnCnf : 3;
  vbittype AdvDrAstMpPstnCycCnt : 2;
  vbittype AdvDrAstMpPstnMsgTyp : 3;
  vbittype AdvDrAstMpPstnOfst_0 : 8;
  vbittype AdvDrAstMpPstnOfst_1 : 8;
  vbittype AdvDrAstMpPstnIndx : 2;
  vbittype AdvDrAstMpPstnPthIndx : 6;
  vbittype AdvDrAstMpPsnIdxCrLn_0 : 2;
  vbittype unused0 : 6;
  vbittype AdvDrAstMpPstnAge_0 : 1;
  vbittype AdvDrAstMpPstnProb : 5;
  vbittype AdvDrAstMpPsnIdxCrLn_1 : 2;
  vbittype AdvDrAstMpPstnAge_1 : 8;
  vbittype AdvDrAstMpPstnLftSideOfst : 8;
} ADAS_Position;
typedef struct ADAS_SegmentTag
{
  vbittype AdvDrAstMpSegEffectiveSpeedLimit : 5;
  vbittype AdvDrAstMpSegMessageType : 3;
  vbittype AdvDrAstMpSegOffset_0 : 8;
  vbittype AdvDrAstMpSegOffset_1 : 8;
  vbittype AdvDrAstMpSegPathIndex : 6;
  vbittype AdvDrAstMpSegCyclicCounter : 2;
  vbittype AdvDrAstMpSegNumOfLanes : 4;
  vbittype AdvDrAstMpSegPartOfRoute : 2;
  vbittype AdvDrAstMpSegUpdate : 1;
  vbittype AdvDrAstMpSegRetransmission : 1;
  vbittype AdvDrAstMpSegFormOfWay : 4;
  vbittype unused0 : 1;
  vbittype AdvDrAstMpSegFunctionalRoadClass : 3;
  vbittype AdvDrAstMpSegWidth_0 : 8;
  vbittype unused1 : 2;
  vbittype AdvDrAstMpSegLaneChange : 4;
  vbittype AdvDrAstMpSegWidth_1 : 2;
} ADAS_Segment;
typedef struct ADAS_StubTag
{
  vbittype unused0 : 1;
  vbittype AdvDrAstMpStbPartOfCalculatedRoute : 2;
  vbittype AdvDrAstMpStbUpdate : 1;
  vbittype AdvDrAstMpStbRetransmission : 1;
  vbittype AdvDrAstMpStbMessageType : 3;
  vbittype AdvDrAstMpStbOffset_0 : 8;
  vbittype AdvDrAstMpStbOffset_1 : 8;
  vbittype AdvDrAstMpStbPathIndex : 6;
  vbittype AdvDrAstMpStbCyclicCounter : 2;
  vbittype AdvDrAstMpStbLaneToEnter_0 : 2;
  vbittype AdvDrAstMpStbSubPathIndex : 6;
  vbittype AdvDrAstMpStbLaneToEnter_1 : 8;
  vbittype AdvDrAstMpStbTurnAngle : 8;
  vbittype AdvDrAstMpStbOffsetToLaneEnd : 8;
} ADAS_Stub;
typedef struct ADAS_ProfileShortTag
{
  vbittype AdvDrAstMpPrfShrtProfileType : 5;
  vbittype AdvDrAstMpPrfShrtMessageType : 3;
  vbittype AdvDrAstMpPrfShrtOffset_0 : 8;
  vbittype AdvDrAstMpPrfShrtOffset_1 : 8;
  vbittype AdvDrAstMpPrfShrtPathIndex : 6;
  vbittype AdvDrAstMpPrfShrtCyclicCounter : 2;
  vbittype AdvDrAstMpPrfShrtDistance1_0 : 6;
  vbittype AdvDrAstMpPrfShrtUpdate : 1;
  vbittype AdvDrAstMpPrfShrtRetransmission : 1;
  vbittype AdvDrAstMpPrfShrtValue0_0 : 4;
  vbittype AdvDrAstMpPrfShrtDistance1_1 : 4;
  vbittype AdvDrAstMpPrfShrtValue1_0 : 2;
  vbittype AdvDrAstMpPrfShrtValue0_1 : 6;
  vbittype AdvDrAstMpPrfShrtValue1_1 : 8;
} ADAS_ProfileShort;
typedef struct ADAS_ProfileLongTag
{
  vbittype AdvDrAstMpPrfLngUpdate : 1;
  vbittype AdvDrAstMpPrfLngRetransmission : 1;
  vbittype AdvDrAstMpPrfLngProfileType : 3;
  vbittype AdvDrAstMpStaightOrCurve : 1;
  vbittype AdvDrAstMpCurEntranceOrTerminalPoint : 2;
  vbittype AdvDrAstMpPrfLngOffset_0 : 8;
  vbittype AdvDrAstMpPrfLngOffset_1 : 8;
  vbittype AdvDrAstMpPrfLngPathIndex : 6;
  vbittype AdvDrAstMpPrfLngCyclicCounter : 2;
  vbittype AdvDrAstMpPrfLngValue_0 : 8;
  vbittype AdvDrAstMpPrfLngValue_1 : 8;
  vbittype AdvDrAstMpPrfLngValue_2 : 8;
  vbittype AdvDrAstMpPrfLngValue_3 : 8;
} ADAS_ProfileLong;
typedef struct ADAS_MetadataTag
{
  vbittype AdvDrAstMpMtdtCntryCd_0 : 2;
  vbittype AdvDrAstMpMtdtMnrPrtSbVr : 3;
  vbittype AdvDrAstMpMtdtPrvdr : 3;
  vbittype AdvDrAstMpMtdtCntryCd_1 : 8;
  vbittype AdvDrAstMpMtdtHwVer_0 : 1;
  vbittype AdvDrAstMpMtdtCycCnt : 2;
  vbittype AdvDrAstMpMtdtDrvSd : 1;
  vbittype AdvDrAstMpMtdtMnrPrtVr : 4;
  vbittype AdvDrAstMpMtdtHwVer_1 : 8;
  vbittype AdvDrAstMpMtdtRgnCd_0 : 7;
  vbittype AdvDrAstMpMtdtSpdUnt : 1;
  vbittype AdvDrAstMpMtdtRgnCd_1 : 8;
  vbittype AdvDrAstMpMtdtVerYr : 6;
  vbittype AdvDrAstMpMtdtMjrPrtVr : 2;
  vbittype AdvDrAstMpMtdtMsgTyp : 3;
  vbittype AdvDrAstMpMtdtVerYrQtr : 2;
  vbittype unused0 : 3;
} ADAS_Metadata;
typedef struct ADAS_ProtectionTag
{
  vbittype AdvDrAstMpProtRTrns : 1;
  vbittype AdvDrAstMpProtCycCtMsg : 2;
  vbittype unused0 : 3;
  vbittype AdvDrvAstMpInpSigFld : 1;
  vbittype AdvDrvAstMpHwFlt : 1;
  vbittype AdvDrAstMpProtChksm_0 : 3;
  vbittype unused1 : 5;
  vbittype AdvDrAstMpProtChksm_1 : 8;
  vbittype unused2 : 5;
  vbittype AdvDrAstMpPrtMsgTp : 3;
} ADAS_Protection;
typedef struct Map_Retrans_RequestTag
{
  vbittype unused0 : 2;
  vbittype HrznPrvdRstRq : 1;
  vbittype ADASISMsgTypRetrans : 3;
  vbittype ADASISRwDtMplxdCycCnt : 2;
} Map_Retrans_Request;
typedef struct PPS_PosLongTag
{
  vbittype PPSLong_0 : 8;
  vbittype PPSLong_1 : 8;
  vbittype PPSLong_2 : 8;
  vbittype PPSLong_3 : 8;
  vbittype PPSLongChksm_0 : 3;
  vbittype unused0 : 2;
  vbittype PPSLongV : 1;
  vbittype PPSLongBrstID : 2;
  vbittype PPSLongChksm_1 : 8;
} PPS_PosLong;
typedef struct PPS_PosLatTag
{
  vbittype PPSLat_0 : 8;
  vbittype PPSLat_1 : 8;
  vbittype PPSLat_2 : 8;
  vbittype PPSLat_3 : 8;
  vbittype PPSLatChksm_0 : 3;
  vbittype PPSLatBrstID : 2;
  vbittype PPSLatV : 1;
  vbittype unused0 : 2;
  vbittype PPSLatChksm_1 : 8;
} PPS_PosLat;
typedef struct ADAS_LaneTag
{
  vbittype AdvDrAstMpLnUpdate : 1;
  vbittype AdvDrAstMpLnRetransmission : 1;
  vbittype AdvDrAstMpLnProfileType : 3;
  vbittype AdvDrAstMpLnMessageType : 3;
  vbittype AdvDrAstMpLnOffset_0 : 8;
  vbittype AdvDrAstMpLnOffset_1 : 8;
  vbittype AdvDrAstMpLnPathIndex : 6;
  vbittype AdvDrAstMpLnCyclicCounter : 2;
  vbittype AdvDrAstMpLnLaneChangeRule : 4;
  vbittype AdvDrAstMpLnLaneIndex : 4;
  vbittype AdvDrAstMpLnLaneWidth_0 : 8;
  vbittype AdvDrAstMpLnLaneChange_0 : 1;
  vbittype AdvDrAstMpLnPartOfCalculatedRoute : 2;
  vbittype AdvDrAstMpLnType : 3;
  vbittype AdvDrAstMpLnLaneWidth_1 : 2;
  vbittype unused0 : 3;
  vbittype AdvDrAstMpLaneInitialForwardLaneNumber : 4;
  vbittype AdvDrAstMpLnLaneChange_1 : 1;
} ADAS_Lane;
typedef struct ADAS_TrafficSignTag
{
  vbittype KHI_TrafficSign_Update : 1;
  vbittype KHI_TrafficSign_Retransmission : 1;
  vbittype KHI_TrafficSign_ProfileType : 3;
  vbittype KHI_TrafficSign_MessageType : 3;
  vbittype KHI_TrafficSign_Offset_0 : 8;
  vbittype KHI_TrafficSign_Offset_1 : 8;
  vbittype KHI_TrafficSign_PathIndex : 6;
  vbittype KHI_TrafficSign_CyclicCounter : 2;
  vbittype unused0 : 5;
  vbittype KHI_TrafficSign_Position : 3;
  vbittype KHI_TrafficSign_SubType : 5;
  vbittype KHI_TrafficSign_MajorType : 3;
  vbittype KHI_TrafficSign_Value_0 : 8;
  vbittype KHI_TrafficSign_Value_1 : 8;
} ADAS_TrafficSign;
typedef struct ADAS_LaneMarkTag
{
  vbittype KHI_LaneMark_Update : 1;
  vbittype KHI_LaneMark_Retransmission : 1;
  vbittype KHI_LaneMark_ProfileType : 3;
  vbittype KHI_LaneMark_MessageType : 3;
  vbittype KHI_LaneMark_Offset_0 : 8;
  vbittype KHI_LaneMark_Offset_1 : 8;
  vbittype KHI_LaneMark_PathIndex : 6;
  vbittype KHI_LaneMark_CyclicCounter : 2;
  vbittype KHI_LaneMark_Position_0 : 2;
  vbittype KHI_LaneMark_Type : 6;
  vbittype KHI_LaneMark_Length_0 : 2;
  vbittype unused0 : 1;
  vbittype KHI_LaneMark_Color : 3;
  vbittype KHI_LaneMark_Position_1 : 2;
  vbittype KHI_LaneMark_Length_1 : 8;
  vbittype KHI_LaneMark_Value : 8;
} ADAS_LaneMark;
typedef struct PPEI_Vehicle_Speed_and_DistanceTagm
{
  vbittype VehSpdAvgDrvn_0 : 7;
  vbittype VehSpdAvgDrvnV : 1;
  vbittype VehSpdAvgDrvn_1 : 8;
  vbittype unused0 : 8;
  vbittype unused1 : 8;
  vbittype VehSpdAvgNDrvn_0 : 7;
  vbittype VehSpdAvgNDrvnV : 1;
  vbittype VehSpdAvgNDrvn_1 : 8;
} PPEI_Map_Vehicle_Speed_and_Distance;
typedef struct PPEI_Trans_General_Status_2Tagm
{
  vbittype TransEstGear : 4;
  vbittype TransEstGearV : 1;
  vbittype unused0 : 3;
  vbittype unused1 : 8;
  vbittype unused2 : 8;
  vbittype TrnsShftLvrPos : 4;
  vbittype TrnsShftLvrPosV : 1;
  vbittype unused3 : 3;
  vbittype unused4 : 8;
  vbittype unused5 : 8;
  vbittype TrnsEngdState : 2;
  vbittype TrnsEngdStateV : 1;
  vbittype unused6 : 5;
} PPEI_Map_Trans_General_Status_2;
typedef struct PPS_Navigation_StatusTag
{
  vbittype unused0 : 4;
  vbittype NaviDataCompletelySent : 1;
  vbittype UsCmdOnNav : 3;
} PPS_Navigation_Status;
typedef struct Peripheral_Indication_1Tag
{
  vbittype PrphrlInd0Typ_0 : 1;
  vbittype PrphrlInd0DstX : 6;
  vbittype PrphrlInd0Msk : 1;
  vbittype PrphrlInd0DstY : 6;
  vbittype PrphrlInd0Typ_1 : 2;
  vbittype PrphrlInd1Typ_0 : 1;
  vbittype PrphrlInd1DstX : 6;
  vbittype PrphrlInd1Msk : 1;
  vbittype PrphrlInd1DstY : 6;
  vbittype PrphrlInd1Typ_1 : 2;
  vbittype PrphrlInd2Typ_0 : 1;
  vbittype PrphrlInd2DstX : 6;
  vbittype PrphrlInd2Msk : 1;
  vbittype PrphrlInd2DstY : 6;
  vbittype PrphrlInd2Typ_1 : 2;
  vbittype PrphrlInd3Typ_0 : 1;
  vbittype PrphrlInd3DstX : 6;
  vbittype PrphrlInd3Msk : 1;
  vbittype PrphrlInd3DstY : 6;
  vbittype PrphrlInd3Typ_1 : 2;
} Peripheral_Indication_1;
typedef struct Peripheral_Indication_2Tag
{
  vbittype PrphrlInd4Typ_0 : 1;
  vbittype PrphrlInd4DstX : 6;
  vbittype PrphrlInd4Msk : 1;
  vbittype PrphrlInd4DstY : 6;
  vbittype PrphrlInd4Typ_1 : 2;
  vbittype PrphrlInd5Typ_0 : 1;
  vbittype PrphrlInd5DstX : 6;
  vbittype PrphrlInd5Msk : 1;
  vbittype PrphrlInd5DstY : 6;
  vbittype PrphrlInd5Typ_1 : 2;
  vbittype PrphrlInd6Typ_0 : 1;
  vbittype PrphrlInd6DstX : 6;
  vbittype PrphrlInd6Msk : 1;
  vbittype PrphrlInd6DstY : 6;
  vbittype PrphrlInd6Typ_1 : 2;
  vbittype PrphrlInd7Typ_0 : 1;
  vbittype PrphrlInd7DstX : 6;
  vbittype PrphrlInd7Msk : 1;
  vbittype PrphrlInd7DstY : 6;
  vbittype PrphrlInd7Typ_1 : 2;
} Peripheral_Indication_2;
typedef struct Adaptive_Cruise_Control_IndicationTag
{
  vbittype FOAI_VehAhdIndx_0 : 4;
  vbittype FOAI_VehAhdIndRq : 4;
  vbittype FOAI_VehAhdIndx_1 : 8;
  vbittype FOAI_VehAhdIndy_0 : 8;
  vbittype ACCDrvrSeltdSpd_0 : 4;
  vbittype unused0 : 1;
  vbittype FOAI_VehAhdIndMsk : 1;
  vbittype FOAI_VehAhdIndy_1 : 2;
  vbittype ACCDrvrSeltdSpd_1 : 8;
  vbittype unused1 : 3;
  vbittype ACCTmpUnavlbleIO : 1;
  vbittype Emgysituatnhadlg : 1;
  vbittype DrvrOvrTkReq : 1;
  vbittype ACCDrvrSeltdSpdIO : 1;
  vbittype ACCAct370 : 1;
} Adaptive_Cruise_Control_Indication;
typedef struct APA_IndicationTag
{
  vbittype Devalidpkslt : 8;
} APA_Indication;
typedef struct APA_ControlTag
{
  vbittype unused0 : 6;
  vbittype Pktcurentslot : 1;
  vbittype EAPAFucn : 1;
} APA_Control;

union F_Master_Time_SyncUon
{
   uint8 F_Master_Time_Sync_Buffer[6];
   F_Master_Time_Sync F_Master_Time_Sync_Layout;
}F_Master_Time_Sync_u;

union PPS_ElevHdSpdUon
{
   uint8 PPS_ElevHdSpd_Buffer[8];
   PPS_ElevHdSpd PPS_ElevHdSpd_Layout;
}PPS_ElevHdSpd_u;

union PPS_SigAcqTimeUon
{
   uint8 PPS_SigAcqTime_Buffer[6];
   PPS_SigAcqTime PPS_SigAcqTime_Layout;
}PPS_SigAcqTime_u;

union PPS_TimeUon
{
   uint8 PPS_Time_Buffer[8];
   PPS_Time PPS_Time_Layout;
}PPS_Time_u;

union ADAS_PositionUon
{
   uint8 ADAS_Position_Buffer[8];
   ADAS_Position ADAS_Position_Layout;
}ADAS_Position_u;

union ADAS_SegmentUon
{
   uint8 ADAS_Segment_Buffer[8];
   ADAS_Segment ADAS_Segment_Layout;
}ADAS_Segment_u;

union ADAS_StubUon
{
   uint8 ADAS_Stub_Buffer[8];
   ADAS_Stub ADAS_Stub_Layout;
}ADAS_Stub_u;

union ADAS_ProfileShortUon
{
   uint8 ADAS_ProfileShort_Buffer[8];
   ADAS_ProfileShort ADAS_ProfileShort_Layout;
}ADAS_ProfileShort_u;

union ADAS_ProfileLongUon
{
   uint8 ADAS_ProfileLong_Buffer[8];
   ADAS_ProfileLong ADAS_ProfileLong_Layout;
}ADAS_ProfileLong_u;

union ADAS_MetadataUon
{
   uint8 ADAS_Metadata_Buffer[8];
   ADAS_Metadata ADAS_Metadata_Layout;
}ADAS_Metadata_u;

union ADAS_ProtectionUon
{
   uint8 ADAS_Protection_Buffer[4];
   ADAS_Protection ADAS_Protection_Layout;
}ADAS_Protection_u;

union Map_Retrans_RequestUon
{
   uint8 Map_Retrans_Request_Buffer[1];
   Map_Retrans_Request Map_Retrans_Request_Layout;
}Map_Retrans_Request_u;

union PPS_PosLongUon
{
   uint8 PPS_PosLong_Buffer[6];
   PPS_PosLong PPS_PosLong_Layout;
}PPS_PosLong_u;

union PPS_PosLatUon
{
   uint8 PPS_PosLat_Buffer[6];
   PPS_PosLat PPS_PosLat_Layout;
}PPS_PosLat_u;

union ADAS_LaneUon
{
   uint8 ADAS_Lane_Buffer[8];
   ADAS_Lane ADAS_Lane_Layout;
}ADAS_Lane_u;

union ADAS_TrafficSignUon
{
   uint8 ADAS_TrafficSign_Buffer[8];
   ADAS_TrafficSign ADAS_TrafficSign_Layout;
}ADAS_TrafficSign_u;

union ADAS_LaneMarkUon
{
   uint8 ADAS_LaneMark_Buffer[8];
   ADAS_LaneMark ADAS_LaneMark_Layout;
}ADAS_LaneMark_u;

union PPEI_Vehicle_Speed_and_DistanceUonm
{
   uint8 PPEI_Vehicle_Speed_and_Distance_Buffer[6];
   PPEI_Map_Vehicle_Speed_and_Distance PPEI_Map_Vehicle_Speed_and_Distance_Layout;
}PPEI_Vehicle_Speed_and_Distance_umap;

union PPEI_Trans_General_Status_2Uonm
{
   uint8 PPEI_Trans_General_Status_2_Buffer[7];
   PPEI_Map_Trans_General_Status_2 PPEI_Map_Trans_General_Status_2_Layout;
}PPEI_Trans_General_Status_2_umap;

union PPS_Navigation_StatusUon
{
   uint8 PPS_Navigation_Status_Buffer[1];
   PPS_Navigation_Status PPS_Navigation_Status_Layout;
}PPS_Navigation_Status_u;

union Peripheral_Indication_1Uon
{
   uint8 Peripheral_Indication_1_Buffer[8];
   Peripheral_Indication_1 Peripheral_Indication_1_Layout;
}Peripheral_Indication_1_u;

union Peripheral_Indication_2Uon
{
   uint8 Peripheral_Indication_2_Buffer[8];
   Peripheral_Indication_2 Peripheral_Indication_2_Layout;
}Peripheral_Indication_2_u;

union Adaptive_Cruise_Control_IndicationUon
{
   uint8 Adaptive_Cruise_Control_Indication_Buffer[6];
   Adaptive_Cruise_Control_Indication Adaptive_Cruise_Control_Indication_Layout;
}Adaptive_Cruise_Control_Indication_u;

union APA_IndicationUon
{
   uint8 APA_Indication_Buffer[1];
   APA_Indication APA_Indication_Layout;
}APA_Indication_u;

union APA_ControlUon
{
   uint8 APA_Control_Buffer[1];
   APA_Control APA_Control_Layout;
}APA_Control_u;
void Put_F_Master_Time_Sync_FTimeSyncMstrClock(uint32 sigData);
void Put_F_Master_Time_Sync_FTimeSyncMstrChksm(uint16 sigData);
void Put_F_Master_Time_Sync_FTimeSyncMstrClockV(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSHedng(uint32 sigData);
void Put_PPS_ElevHdSpd_PPSVelV(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSElvHedngSpdBrstID(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSHedngV(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSElvtnV(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSVel(uint8 sigData);
void Put_PPS_ElevHdSpd_PPSElvtn(uint32 sigData);
void Put_PPS_ElevHdSpd_PPSElvHdengSpdChksm(uint16 sigData);
void Put_PPS_SigAcqTime_PPSSigAcqTm(uint32 sigData);
void Put_PPS_SigAcqTime_PPSSigAqTmChksm(uint16 sigData);
void Put_PPS_SigAcqTime_PPSSigAqTmBrstID(uint8 sigData);
void Put_PPS_SigAcqTime_PPSSigAcqTmV(uint8 sigData);
void Put_PPS_Time_PPSCldrDayV(uint8 sigData);
void Put_PPS_Time_PPSCldrYrV(uint8 sigData);
void Put_PPS_Time_PPSTmdayV(uint8 sigData);
void Put_PPS_Time_PPSCldrDay(uint16 sigData);
void Put_PPS_Time_PPSCldrYr(uint8 sigData);
void Put_PPS_Time_PPSTmday(uint32 sigData);
void Put_PPS_Time_PPSTmChksm(uint16 sigData);
void Put_PPS_Time_PPSTmBrstID(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnCnf(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnCycCnt(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnMsgTyp(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnOfst(uint16 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnIndx(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnPthIndx(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPsnIdxCrLn(uint16 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnAge(uint16 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnProb(uint8 sigData);
void Put_ADAS_Position_AdvDrAstMpPstnLftSideOfst(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegEffectiveSpeedLimit(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegMessageType(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegOffset(uint16 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegPathIndex(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegCyclicCounter(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegNumOfLanes(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegPartOfRoute(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegUpdate(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegRetransmission(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegFormOfWay(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegFunctionalRoadClass(uint8 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegWidth(uint16 sigData);
void Put_ADAS_Segment_AdvDrAstMpSegLaneChange(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbPartOfCalculatedRoute(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbUpdate(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbRetransmission(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbMessageType(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbOffset(uint16 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbPathIndex(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbCyclicCounter(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbLaneToEnter(uint16 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbSubPathIndex(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbTurnAngle(uint8 sigData);
void Put_ADAS_Stub_AdvDrAstMpStbOffsetToLaneEnd(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtProfileType(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtMessageType(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtOffset(uint16 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtPathIndex(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtCyclicCounter(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtDistance1(uint16 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtUpdate(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtRetransmission(uint8 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue0(uint16 sigData);
void Put_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue1(uint16 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngUpdate(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngRetransmission(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngProfileType(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpStaightOrCurve(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpCurEntranceOrTerminalPoint(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngOffset(uint16 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngPathIndex(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngCyclicCounter(uint8 sigData);
void Put_ADAS_ProfileLong_AdvDrAstMpPrfLngValue(uint32 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtCntryCd(uint16 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtSbVr(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtPrvdr(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtHwVer(uint16 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtCycCnt(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtDrvSd(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtVr(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtRgnCd(uint16 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtSpdUnt(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtVerYr(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtMjrPrtVr(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtMsgTyp(uint8 sigData);
void Put_ADAS_Metadata_AdvDrAstMpMtdtVerYrQtr(uint8 sigData);
void Put_ADAS_Protection_AdvDrAstMpProtRTrns(uint8 sigData);
void Put_ADAS_Protection_AdvDrAstMpProtCycCtMsg(uint8 sigData);
void Put_ADAS_Protection_AdvDrvAstMpInpSigFld(uint8 sigData);
void Put_ADAS_Protection_AdvDrvAstMpHwFlt(uint8 sigData);
void Put_ADAS_Protection_AdvDrAstMpProtChksm(uint16 sigData);
void Put_ADAS_Protection_AdvDrAstMpPrtMsgTp(uint8 sigData);
void Put_Map_Retrans_Request_HrznPrvdRstRq(uint8 sigData);
void Put_Map_Retrans_Request_ADASISMsgTypRetrans(uint8 sigData);
void Put_Map_Retrans_Request_ADASISRwDtMplxdCycCnt(uint8 sigData);
void Put_PPS_PosLong_PPSLong(int32 sigData);
void Put_PPS_PosLong_PPSLongChksm(uint16 sigData);
void Put_PPS_PosLong_PPSLongV(uint8 sigData);
void Put_PPS_PosLong_PPSLongBrstID(uint8 sigData);
void Put_PPS_PosLat_PPSLat(int32 sigData);
void Put_PPS_PosLat_PPSLatChksm(uint16 sigData);
void Put_PPS_PosLat_PPSLatBrstID(uint8 sigData);
void Put_PPS_PosLat_PPSLatV(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnUpdate(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnRetransmission(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnProfileType(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnMessageType(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnOffset(uint16 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnPathIndex(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnCyclicCounter(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnLaneChangeRule(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnLaneIndex(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnLaneWidth(uint16 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnLaneChange(uint16 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnPartOfCalculatedRoute(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLnType(uint8 sigData);
void Put_ADAS_Lane_AdvDrAstMpLaneInitialForwardLaneNumber(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_Update(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_Retransmission(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_ProfileType(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_MessageType(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_Offset(uint16 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_PathIndex(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_CyclicCounter(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_Position(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_SubType(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_MajorType(uint8 sigData);
void Put_ADAS_TrafficSign_KHI_TrafficSign_Value(uint16 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Update(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Retransmission(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_ProfileType(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_MessageType(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Offset(uint16 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_PathIndex(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_CyclicCounter(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Position(uint16 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Type(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Length(uint16 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Color(uint8 sigData);
void Put_ADAS_LaneMark_KHI_LaneMark_Value(uint8 sigData);
void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvn(uint16 sigData);
void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvnV(uint8 sigData);
void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvn(uint16 sigData);
void Put_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvnV(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TransEstGear(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TransEstGearV(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPos(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPosV(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TrnsEngdState(uint8 sigData);
void Put_Map_PPEI_Trans_General_Status_2_TrnsEngdStateV(uint8 sigData);
void Put_PPS_Navigation_Status_NaviDataCompletelySent(uint8 sigData);
void Put_PPS_Navigation_Status_UsCmdOnNav(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd0Typ(uint16 sigData);
void Put_Peripheral_Indication_1_PrphrlInd0DstX(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd0Msk(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd0DstY(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd1Typ(uint16 sigData);
void Put_Peripheral_Indication_1_PrphrlInd1DstX(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd1Msk(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd1DstY(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd2Typ(uint16 sigData);
void Put_Peripheral_Indication_1_PrphrlInd2DstX(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd2Msk(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd2DstY(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd3Typ(uint16 sigData);
void Put_Peripheral_Indication_1_PrphrlInd3DstX(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd3Msk(uint8 sigData);
void Put_Peripheral_Indication_1_PrphrlInd3DstY(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd4Typ(uint16 sigData);
void Put_Peripheral_Indication_2_PrphrlInd4DstX(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd4Msk(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd4DstY(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd5Typ(uint16 sigData);
void Put_Peripheral_Indication_2_PrphrlInd5DstX(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd5Msk(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd5DstY(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd6Typ(uint16 sigData);
void Put_Peripheral_Indication_2_PrphrlInd6DstX(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd6Msk(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd6DstY(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd7Typ(uint16 sigData);
void Put_Peripheral_Indication_2_PrphrlInd7DstX(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd7Msk(uint8 sigData);
void Put_Peripheral_Indication_2_PrphrlInd7DstY(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndx(uint16 sigData);
void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndRq(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndy(int16 sigData);
void Put_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpd(uint16 sigData);
void Put_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndMsk(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_ACCTmpUnavlbleIO(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_Emgysituatnhadlg(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_DrvrOvrTkReq(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpdIO(uint8 sigData);
void Put_Adaptive_Cruise_Control_Indication_ACCAct370(uint8 sigData);
void Put_APA_Indication_Devalidpkslt(uint8 sigData);
void Put_APA_Control_Pktcurentslot(uint8 sigData);
void Put_APA_Control_EAPAFucn(uint8 sigData);


uint32 Get_F_Master_Time_Sync_FTimeSyncMstrClock( );
uint16 Get_F_Master_Time_Sync_FTimeSyncMstrChksm( );
uint8 Get_F_Master_Time_Sync_FTimeSyncMstrClockV( );
uint32 Get_PPS_ElevHdSpd_PPSHedng( );
uint8 Get_PPS_ElevHdSpd_PPSVelV( );
uint8 Get_PPS_ElevHdSpd_PPSElvHedngSpdBrstID( );
uint8 Get_PPS_ElevHdSpd_PPSHedngV( );
uint8 Get_PPS_ElevHdSpd_PPSElvtnV( );
uint8 Get_PPS_ElevHdSpd_PPSVel( );
uint32 Get_PPS_ElevHdSpd_PPSElvtn( );
uint16 Get_PPS_ElevHdSpd_PPSElvHdengSpdChksm( );
uint32 Get_PPS_SigAcqTime_PPSSigAcqTm( );
uint16 Get_PPS_SigAcqTime_PPSSigAqTmChksm( );
uint8 Get_PPS_SigAcqTime_PPSSigAqTmBrstID( );
uint8 Get_PPS_SigAcqTime_PPSSigAcqTmV( );
uint8 Get_PPS_Time_PPSCldrDayV( );
uint8 Get_PPS_Time_PPSCldrYrV( );
uint8 Get_PPS_Time_PPSTmdayV( );
uint16 Get_PPS_Time_PPSCldrDay( );
uint8 Get_PPS_Time_PPSCldrYr( );
uint32 Get_PPS_Time_PPSTmday( );
uint16 Get_PPS_Time_PPSTmChksm( );
uint8 Get_PPS_Time_PPSTmBrstID( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnCnf( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnCycCnt( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnMsgTyp( );
double Get_ADAS_Position_AdvDrAstMpPstnOfst( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnIndx( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnPthIndx( );
uint16 Get_ADAS_Position_AdvDrAstMpPsnIdxCrLn( );
uint16 Get_ADAS_Position_AdvDrAstMpPstnAge( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnProb( );
double Get_ADAS_Position_AdvDrAstMpPstnLftSideOfst( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegEffectiveSpeedLimit( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegMessageType( );
double Get_ADAS_Segment_AdvDrAstMpSegOffset( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegPathIndex( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegCyclicCounter( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegNumOfLanes( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegPartOfRoute( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegUpdate( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegRetransmission( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegFormOfWay( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegFunctionalRoadClass( );
uint16 Get_ADAS_Segment_AdvDrAstMpSegWidth( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegLaneChange( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbPartOfCalculatedRoute( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbUpdate( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbRetransmission( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbMessageType( );
double Get_ADAS_Stub_AdvDrAstMpStbOffset( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbPathIndex( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbCyclicCounter( );
uint16 Get_ADAS_Stub_AdvDrAstMpStbLaneToEnter( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbSubPathIndex( );
double Get_ADAS_Stub_AdvDrAstMpStbTurnAngle( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbOffsetToLaneEnd( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtProfileType( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtMessageType( );
double Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtOffset( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtPathIndex( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtCyclicCounter( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtDistance1( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtUpdate( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtRetransmission( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue0( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue1( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngUpdate( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngRetransmission( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngProfileType( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpStaightOrCurve( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpCurEntranceOrTerminalPoint( );
double Get_ADAS_ProfileLong_AdvDrAstMpPrfLngOffset( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngPathIndex( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngCyclicCounter( );
uint32 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngValue( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtCntryCd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtSbVr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtPrvdr( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtHwVer( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtCycCnt( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtDrvSd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtVr( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtRgnCd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtSpdUnt( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMjrPrtVr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMsgTyp( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYrQtr( );
uint8 Get_ADAS_Protection_AdvDrAstMpProtRTrns( );
uint8 Get_ADAS_Protection_AdvDrAstMpProtCycCtMsg( );
uint8 Get_ADAS_Protection_AdvDrvAstMpInpSigFld( );
uint8 Get_ADAS_Protection_AdvDrvAstMpHwFlt( );
uint16 Get_ADAS_Protection_AdvDrAstMpProtChksm( );
uint8 Get_ADAS_Protection_AdvDrAstMpPrtMsgTp( );
uint8 Get_Map_Retrans_Request_HrznPrvdRstRq( );
uint8 Get_Map_Retrans_Request_ADASISMsgTypRetrans( );
uint8 Get_Map_Retrans_Request_ADASISRwDtMplxdCycCnt( );
int32 Get_PPS_PosLong_PPSLong( );
uint16 Get_PPS_PosLong_PPSLongChksm( );
uint8 Get_PPS_PosLong_PPSLongV( );
uint8 Get_PPS_PosLong_PPSLongBrstID( );
int32 Get_PPS_PosLat_PPSLat( );
uint16 Get_PPS_PosLat_PPSLatChksm( );
uint8 Get_PPS_PosLat_PPSLatBrstID( );
uint8 Get_PPS_PosLat_PPSLatV( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnUpdate( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnRetransmission( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnProfileType( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnMessageType( );
double Get_ADAS_Lane_AdvDrAstMpLnOffset( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnPathIndex( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnCyclicCounter( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneChangeRule( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneIndex( );
double Get_ADAS_Lane_AdvDrAstMpLnLaneWidth( );
uint16 Get_ADAS_Lane_AdvDrAstMpLnLaneChange( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnPartOfCalculatedRoute( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnType( );
uint8 Get_ADAS_Lane_AdvDrAstMpLaneInitialForwardLaneNumber( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Update( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Retransmission( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_ProfileType( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MessageType( );
double Get_ADAS_TrafficSign_KHI_TrafficSign_Offset( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_PathIndex( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_CyclicCounter( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Position( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_SubType( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MajorType( );
uint16 Get_ADAS_TrafficSign_KHI_TrafficSign_Value( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Update( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Retransmission( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_ProfileType( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_MessageType( );
double Get_ADAS_LaneMark_KHI_LaneMark_Offset( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_PathIndex( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_CyclicCounter( );
uint16 Get_ADAS_LaneMark_KHI_LaneMark_Position( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Type( );
uint16 Get_ADAS_LaneMark_KHI_LaneMark_Length( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Color( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Value( );
uint16 Get_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvn( );
uint8 Get_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvnV( );
uint16 Get_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvn( );
uint8 Get_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvnV( );
uint8 Get_PPEI_Trans_General_Status_2_TransEstGear( );
uint8 Get_PPEI_Trans_General_Status_2_TransEstGearV( );
uint8 Get_PPEI_Trans_General_Status_2_TrnsShftLvrPos( );
uint8 Get_PPEI_Trans_General_Status_2_TrnsShftLvrPosV( );
uint8 Get_PPEI_Trans_General_Status_2_TrnsEngdState( );
uint8 Get_PPEI_Trans_General_Status_2_TrnsEngdStateV( );
uint8 Get_PPS_Navigation_Status_NaviDataCompletelySent( );
uint8 Get_PPS_Navigation_Status_UsCmdOnNav( );
uint16 Get_Peripheral_Indication_1_PrphrlInd0Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd1Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd2Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd3Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd4Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd5Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd6Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd7Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7DstY( );
uint16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndx( );
uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndRq( );
int16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndy( );
uint16 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpd( );
uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndMsk( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCTmpUnavlbleIO( );
uint8 Get_Adaptive_Cruise_Control_Indication_Emgysituatnhadlg( );
uint8 Get_Adaptive_Cruise_Control_Indication_DrvrOvrTkReq( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpdIO( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCAct370( );
uint8 Get_APA_Indication_Devalidpkslt( );
uint8 Get_APA_Control_Pktcurentslot( );
uint8 Get_APA_Control_EAPAFucn( );
uint32 Get_F_Master_Time_Sync_FTimeSyncMstrClock( );
uint16 Get_F_Master_Time_Sync_FTimeSyncMstrChksm( );
uint8 Get_F_Master_Time_Sync_FTimeSyncMstrClockV( );
uint32 Get_PPS_ElevHdSpd_PPSHedng( );
uint8 Get_PPS_ElevHdSpd_PPSVelV( );
uint8 Get_PPS_ElevHdSpd_PPSElvHedngSpdBrstID( );
uint8 Get_PPS_ElevHdSpd_PPSHedngV( );
uint8 Get_PPS_ElevHdSpd_PPSElvtnV( );
uint8 Get_PPS_ElevHdSpd_PPSVel( );
uint32 Get_PPS_ElevHdSpd_PPSElvtn( );
uint16 Get_PPS_ElevHdSpd_PPSElvHdengSpdChksm( );
uint32 Get_PPS_SigAcqTime_PPSSigAcqTm( );
uint16 Get_PPS_SigAcqTime_PPSSigAqTmChksm( );
uint8 Get_PPS_SigAcqTime_PPSSigAqTmBrstID( );
uint8 Get_PPS_SigAcqTime_PPSSigAcqTmV( );
uint8 Get_PPS_Time_PPSCldrDayV( );
uint8 Get_PPS_Time_PPSCldrYrV( );
uint8 Get_PPS_Time_PPSTmdayV( );
uint16 Get_PPS_Time_PPSCldrDay( );
uint8 Get_PPS_Time_PPSCldrYr( );
uint32 Get_PPS_Time_PPSTmday( );
uint16 Get_PPS_Time_PPSTmChksm( );
uint8 Get_PPS_Time_PPSTmBrstID( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnCnf( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnCycCnt( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnMsgTyp( );
double Get_ADAS_Position_AdvDrAstMpPstnOfst( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnIndx( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnPthIndx( );
uint16 Get_ADAS_Position_AdvDrAstMpPsnIdxCrLn( );
uint16 Get_ADAS_Position_AdvDrAstMpPstnAge( );
uint8 Get_ADAS_Position_AdvDrAstMpPstnProb( );
double Get_ADAS_Position_AdvDrAstMpPstnLftSideOfst( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegEffectiveSpeedLimit( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegMessageType( );
double Get_ADAS_Segment_AdvDrAstMpSegOffset( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegPathIndex( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegCyclicCounter( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegNumOfLanes( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegPartOfRoute( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegUpdate( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegRetransmission( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegFormOfWay( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegFunctionalRoadClass( );
uint16 Get_ADAS_Segment_AdvDrAstMpSegWidth( );
uint8 Get_ADAS_Segment_AdvDrAstMpSegLaneChange( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbPartOfCalculatedRoute( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbUpdate( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbRetransmission( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbMessageType( );
double Get_ADAS_Stub_AdvDrAstMpStbOffset( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbPathIndex( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbCyclicCounter( );
uint16 Get_ADAS_Stub_AdvDrAstMpStbLaneToEnter( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbSubPathIndex( );
double Get_ADAS_Stub_AdvDrAstMpStbTurnAngle( );
uint8 Get_ADAS_Stub_AdvDrAstMpStbOffsetToLaneEnd( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtProfileType( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtMessageType( );
double Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtOffset( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtPathIndex( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtCyclicCounter( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtDistance1( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtUpdate( );
uint8 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtRetransmission( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue0( );
uint16 Get_ADAS_ProfileShort_AdvDrAstMpPrfShrtValue1( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngUpdate( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngRetransmission( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngProfileType( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpStaightOrCurve( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpCurEntranceOrTerminalPoint( );
double Get_ADAS_ProfileLong_AdvDrAstMpPrfLngOffset( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngPathIndex( );
uint8 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngCyclicCounter( );
uint32 Get_ADAS_ProfileLong_AdvDrAstMpPrfLngValue( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtCntryCd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtSbVr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtPrvdr( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtHwVer( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtCycCnt( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtDrvSd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMnrPrtVr( );
uint16 Get_ADAS_Metadata_AdvDrAstMpMtdtRgnCd( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtSpdUnt( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMjrPrtVr( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtMsgTyp( );
uint8 Get_ADAS_Metadata_AdvDrAstMpMtdtVerYrQtr( );
uint8 Get_ADAS_Protection_AdvDrAstMpProtRTrns( );
uint8 Get_ADAS_Protection_AdvDrAstMpProtCycCtMsg( );
uint8 Get_ADAS_Protection_AdvDrvAstMpInpSigFld( );
uint8 Get_ADAS_Protection_AdvDrvAstMpHwFlt( );
uint16 Get_ADAS_Protection_AdvDrAstMpProtChksm( );
uint8 Get_ADAS_Protection_AdvDrAstMpPrtMsgTp( );
uint8 Get_Map_Retrans_Request_HrznPrvdRstRq( );
uint8 Get_Map_Retrans_Request_ADASISMsgTypRetrans( );
uint8 Get_Map_Retrans_Request_ADASISRwDtMplxdCycCnt( );
int32 Get_PPS_PosLong_PPSLong( );
uint16 Get_PPS_PosLong_PPSLongChksm( );
uint8 Get_PPS_PosLong_PPSLongV( );
uint8 Get_PPS_PosLong_PPSLongBrstID( );
int32 Get_PPS_PosLat_PPSLat( );
uint16 Get_PPS_PosLat_PPSLatChksm( );
uint8 Get_PPS_PosLat_PPSLatBrstID( );
uint8 Get_PPS_PosLat_PPSLatV( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnUpdate( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnRetransmission( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnProfileType( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnMessageType( );
double Get_ADAS_Lane_AdvDrAstMpLnOffset( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnPathIndex( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnCyclicCounter( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneChangeRule( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnLaneIndex( );
double Get_ADAS_Lane_AdvDrAstMpLnLaneWidth( );
uint16 Get_ADAS_Lane_AdvDrAstMpLnLaneChange( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnPartOfCalculatedRoute( );
uint8 Get_ADAS_Lane_AdvDrAstMpLnType( );
uint8 Get_ADAS_Lane_AdvDrAstMpLaneInitialForwardLaneNumber( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Update( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Retransmission( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_ProfileType( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MessageType( );
double Get_ADAS_TrafficSign_KHI_TrafficSign_Offset( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_PathIndex( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_CyclicCounter( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_Position( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_SubType( );
uint8 Get_ADAS_TrafficSign_KHI_TrafficSign_MajorType( );
uint16 Get_ADAS_TrafficSign_KHI_TrafficSign_Value( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Update( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Retransmission( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_ProfileType( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_MessageType( );
double Get_ADAS_LaneMark_KHI_LaneMark_Offset( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_PathIndex( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_CyclicCounter( );
uint16 Get_ADAS_LaneMark_KHI_LaneMark_Position( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Type( );
uint16 Get_ADAS_LaneMark_KHI_LaneMark_Length( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Color( );
uint8 Get_ADAS_LaneMark_KHI_LaneMark_Value( );
double Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvn( );
uint8 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgDrvnV( );
uint16 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvn( );
uint8 Get_Map_PPEI_Vehicle_Speed_and_Distance_VehSpdAvgNDrvnV( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TransEstGear( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TransEstGearV( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPos( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsShftLvrPosV( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsEngdState( );
uint8 Get_Map_PPEI_Trans_General_Status_2_TrnsEngdStateV( );
uint8 Get_PPS_Navigation_Status_NaviDataCompletelySent( );
uint8 Get_PPS_Navigation_Status_UsCmdOnNav( );
uint16 Get_Peripheral_Indication_1_PrphrlInd0Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd0DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd1Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd1DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd2Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd2DstY( );
uint16 Get_Peripheral_Indication_1_PrphrlInd3Typ( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3DstX( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3Msk( );
uint8 Get_Peripheral_Indication_1_PrphrlInd3DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd4Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd4DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd5Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd5DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd6Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd6DstY( );
uint16 Get_Peripheral_Indication_2_PrphrlInd7Typ( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7DstX( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7Msk( );
uint8 Get_Peripheral_Indication_2_PrphrlInd7DstY( );
uint16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndx( );
uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndRq( );
int16 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndy( );
uint16 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpd( );
uint8 Get_Adaptive_Cruise_Control_Indication_FOAI_VehAhdIndMsk( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCTmpUnavlbleIO( );
uint8 Get_Adaptive_Cruise_Control_Indication_Emgysituatnhadlg( );
uint8 Get_Adaptive_Cruise_Control_Indication_DrvrOvrTkReq( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCDrvrSeltdSpdIO( );
uint8 Get_Adaptive_Cruise_Control_Indication_ACCAct370( );
uint8 Get_APA_Indication_Devalidpkslt( );
uint8 Get_APA_Control_Pktcurentslot( );
uint8 Get_APA_Control_EAPAFucn( );
#endif


