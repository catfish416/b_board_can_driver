#ifndef _M2S_MAP_H
#define _M2S_MAP_H
#include "M2S_Map_par.h"
#define CAN_TO_MAP_MSG(id,type)    Get_##id##_##type
 #define MAP_TO_CAN_MSG(id,type)    Put_##id##_##type

 typedef struct map_timestamp
 {
       uint32_t StubTimeCnt;
       uint32_t LaneMarkTimeCnt;
       uint32_t LaneTimeCnt;
       uint32_t PositionTimeCnt;
       uint32_t ProfileLongTimeCnt;
      uint32_t ProfileShortCnt;
      uint32_t TrafficSignTimeCnt;
 }MAP_TIMESTAMP;

typedef struct rtk
{
   double ylat;
   double ylon;
   double ycrouse_range;
   double ytime_GPGLL;
   double ytime_GPHPR;
}RTK_TRIG;

 
    /*map*/

#define getAdvDrAstMpStbMessageType                      CAN_TO_MAP_MSG(ADAS_Stub,AdvDrAstMpStbMessageType)
#define getAdvDrAstMpStbOffset                                  CAN_TO_MAP_MSG(ADAS_Stub,AdvDrAstMpStbOffset)
#define getAdvDrAstMpStbTurnAngle                            CAN_TO_MAP_MSG(ADAS_Stub,AdvDrAstMpStbTurnAngle)
#define getAdvDrAstMpStbSubPathIndex                     CAN_TO_MAP_MSG(ADAS_Stub,AdvDrAstMpStbSubPathIndex)

#define getKHI_LaneMark_ProfileType                         CAN_TO_MAP_MSG(ADAS_LaneMark,KHI_LaneMark_ProfileType)  
#define getKHI_LaneMark_Offset                                 CAN_TO_MAP_MSG(ADAS_LaneMark,KHI_LaneMark_Offset)
#define getKHI_LaneMark_Position                              CAN_TO_MAP_MSG(ADAS_LaneMark,KHI_LaneMark_Position)
#define getKHI_LaneMark_Value                                   CAN_TO_MAP_MSG(ADAS_LaneMark,KHI_LaneMark_Value)

#define getAdvDrAstMpLnProfileType                            CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnProfileType )
#define getAdvDrAstMpLnLaneIndex                             CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnLaneIndex )
#define getAdvDrAstMpLnLaneChangeRule                    CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnLaneChangeRule) 
#define getAdvDrAstMpLnLaneChange                            CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnLaneChange)
#define getAdvDrAstMpLnPartOfCalculatedRoute           CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnPartOfCalculatedRoute)
#define getAdvDrAstMpLnOffset                                       CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnOffset)
#define getAdvDrAstMpLnLaneWidth                                CAN_TO_MAP_MSG(ADAS_Lane,AdvDrAstMpLnLaneWidth)


#define getAdvDrAstMpPstnMsgTyp                                  CAN_TO_MAP_MSG(ADAS_Position,AdvDrAstMpPstnMsgTyp   )
#define getAdvDrAstMpPstnOfst                                       CAN_TO_MAP_MSG(ADAS_Position,AdvDrAstMpPstnOfst)
#define getAdvDrAstMpPstnLftSideOfst                           CAN_TO_MAP_MSG(ADAS_Position,AdvDrAstMpPstnLftSideOfst)
#define getAdvDrAstMpPsnIdxCrLn                                 CAN_TO_MAP_MSG(ADAS_Position,AdvDrAstMpPsnIdxCrLn)

#define getAdvDrAstMpPrfLngProfileType                       CAN_TO_MAP_MSG(ADAS_ProfileLong, AdvDrAstMpPrfLngProfileType   )

#define getAdvDrAstMpPrfLngOffset                                CAN_TO_MAP_MSG(ADAS_ProfileLong, AdvDrAstMpPrfLngOffset  )
#define getAdvDrAstMpCurEntranceOrTerminalPoint       CAN_TO_MAP_MSG(ADAS_ProfileLong, AdvDrAstMpCurEntranceOrTerminalPoint  )
#define getAdvDrAstMpStaightOrCurve                             CAN_TO_MAP_MSG(ADAS_ProfileLong, AdvDrAstMpStaightOrCurve )
#define getAdvDrAstMpPrfLngValue                                    CAN_TO_MAP_MSG(ADAS_ProfileLong,AdvDrAstMpPrfLngValue  )
#define getMessageCompleteFlag                                        CAN_TO_MAP_MSG(PPS_Navigation_Status,NaviDataCompletelySent)

#define getAdvDrAstMpPrfShrtProfileType                         CAN_TO_MAP_MSG(ADAS_ProfileShort,AdvDrAstMpPrfShrtProfileType)

#define getAdvDrAstMpPrfShrtOffset                                  CAN_TO_MAP_MSG(ADAS_ProfileShort,AdvDrAstMpPrfShrtOffset)
#define getAdvDrAstMpPrfShrtValue0                                 CAN_TO_MAP_MSG(ADAS_ProfileShort,AdvDrAstMpPrfShrtValue0)
#define getAdvDrAstMpPrfShrtValue1                                 CAN_TO_MAP_MSG(ADAS_ProfileShort,AdvDrAstMpPrfShrtValue1)



#define  getAdvDrAstMpSegMessageType                        CAN_TO_MAP_MSG(ADAS_Segment,AdvDrAstMpSegMessageType)
#define  getAdvDrAstMpSegOffset                                    CAN_TO_MAP_MSG(ADAS_Segment,AdvDrAstMpSegOffset)
#define  getAdvDrAstMpSegNumOfLanes                         CAN_TO_MAP_MSG(ADAS_Segment,AdvDrAstMpSegNumOfLanes)



#define  getTrafficProfileType                                             CAN_TO_MAP_MSG(ADAS_TrafficSign,KHI_TrafficSign_ProfileType)
#define  getKHI_TrafficSign_Offset                                   CAN_TO_MAP_MSG(ADAS_TrafficSign,KHI_TrafficSign_Offset)
#define  getKHI_TrafficSign_Value                                    CAN_TO_MAP_MSG(ADAS_TrafficSign,KHI_TrafficSign_Value)
#define  getKHI_TrafficSign_Position                                  CAN_TO_MAP_MSG(ADAS_TrafficSign,KHI_TrafficSign_Position)
#define  getVehicleSpeed                                                    CAN_TO_MAP_MSG(Map_PPEI_Vehicle_Speed_and_Distance,VehSpdAvgDrvn)
extern uint32_t Analy_Map(uint8_t* Can_Data);
extern uint32_t getStubTimeCnt(void);
extern uint32_t getLaneMarkTimeCnt(void);
extern uint32_t getLaneTimeCnt(void)  ;
extern uint32_t getPositionTimeCnt(void) ;
extern uint32_t getProfileLongTimeCnt(void) ; 
extern uint32_t getProfileShortCnt(void);
extern uint32_t getTrafficSignTimeCnt(void);  
extern double getRTK_GPS_LATITUDE(void);
extern double getRTK_GPS_LONGITUDE(void) ;                                       
extern double getRTK_GPS_TS(void);                                                       
extern double  getRTK_GPS_YAW(void);   
extern double getClearAllFlag(void) ;
extern double getX_UTM(void);
extern double getORIG_X_UTM(void);
extern double getY_UTM(void); 
extern double getORIG_Y_UTM(void);
extern double getHeadingAngle(void);
extern double getPositionMap_Index(void);
extern double getPositionMapInput(int32_t index);
extern double getProfileLongMapInput(int32_t index);
extern double getProfileShortMap1Input(int32_t index);
extern double getSegmentMap(int32_t index);
extern double getLaneMap(int32_t index);
extern double getEnd_Point(int32_t index);
extern double getEgoTrackPoint (int32_t index);
extern double getVehicleState(int32_t index);


#endif
