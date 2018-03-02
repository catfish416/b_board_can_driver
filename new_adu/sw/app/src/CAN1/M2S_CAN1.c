#include <stdio.h>
#include <string.h>
#include "M2S_CAN1.h"

uint32_t Analy_Can1(uint8_t* Can_Data)
{
	uint32_t Can_ID=0;
    uint8_t  Data_len=0;
	uint8_t Temp_Buffer[8]={0};
	uint8_t i;
		Data_len = Can_Data[0] & 0x0F;
	Can_ID=(Can_Data[1]<<24)|(Can_Data[2]<<16)|(Can_Data[3]<<8)|(Can_Data[4]);
	for(i=0;i< Data_len;i++)
	{
		Temp_Buffer[i]=Can_Data[i+5];
	
	}
		
		switch(Can_ID)
		{
			case 161:
   memcpy( F_Master_Time_Sync_LR_u.F_Master_Time_Sync_LR_Buffer,Temp_Buffer,7);
   break;
case 774:
   memcpy( F_Vehicle_Path_Estimate_LR_u.F_Vehicle_Path_Estimate_LR_Buffer,Temp_Buffer,8);
   break;
case 776:
   memcpy( F_Vehicle_Path_Data_2_LR_u.F_Vehicle_Path_Data_2_LR_Buffer,Temp_Buffer,7);
   break;
case 784:
   memcpy( Body_Info_FOB_LR_u.Body_Info_FOB_LR_Buffer,Temp_Buffer,6);
   break;
case 1184:
   memcpy( R_SRR_Object_Header_LR_u.R_SRR_Object_Header_LR_Buffer,Temp_Buffer,8);
   break;
case 1185:
     memcpy( R_SRR_Object_Track1_LR_u.R_SRR_Object_Track1_LR_Buffer,Temp_Buffer,8);
   break;
case 1186:
   memcpy( R_SRR_Object_Track2_LR_u.R_SRR_Object_Track2_LR_Buffer,Temp_Buffer,8);
   break;
case 1187:
   memcpy( R_SRR_Object_Track3_LR_u.R_SRR_Object_Track3_LR_Buffer,Temp_Buffer,8);
   break;
case 1188:
   memcpy( R_SRR_Object_Track4_LR_u.R_SRR_Object_Track4_LR_Buffer,Temp_Buffer,8);
   break;
case 1189:
   memcpy( R_SRR_Object_Track5_LR_u.R_SRR_Object_Track5_LR_Buffer,Temp_Buffer,8);
   break;
case 1190:
   memcpy( R_SRR_Object_Track6_LR_u.R_SRR_Object_Track6_LR_Buffer,Temp_Buffer,8);
   break;
case 1191:
   memcpy( R_SRR_Object_Track7_LR_u.R_SRR_Object_Track7_LR_Buffer,Temp_Buffer,8);
   break;
case 1192:
   memcpy( R_SRR_Object_Track8_LR_u.R_SRR_Object_Track8_LR_Buffer,Temp_Buffer,8);
   break;
case 1193:
   memcpy( R_SRR_Object_Track9_LR_u.R_SRR_Object_Track9_LR_Buffer,Temp_Buffer,8);
   break;
case 1194:
   memcpy( R_SRR_Object_Track10_LR_u.R_SRR_Object_Track10_LR_Buffer,Temp_Buffer,8);
   break;
case 1248:
   memcpy( ESR_Status1_u.ESR_Status1_Buffer,Temp_Buffer,8);
   break;
case 1249:
   memcpy( ESR_Status2_u.ESR_Status2_Buffer,Temp_Buffer,8);
   break;
case 1250:
   memcpy( ESR_Status3_u.ESR_Status3_Buffer,Temp_Buffer,8);
   break;
case 1251:
   memcpy( ESR_Status4_u.ESR_Status4_Buffer,Temp_Buffer,8);
   break;
case 1264:
   memcpy( Vehicle1_u.Vehicle1_Buffer,Temp_Buffer,8);
   break;
case 1265:
   memcpy( Vehicle2_u.Vehicle2_Buffer,Temp_Buffer,8);
   break;
case 1280:
	   memcpy( ESR_Track01_u.ESR_Track01_Buffer,Temp_Buffer,8);
   break;
case 1281:
   memcpy( ESR_Track02_u.ESR_Track02_Buffer,Temp_Buffer,8);
   break;
case 1282:
   memcpy( ESR_Track03_u.ESR_Track03_Buffer,Temp_Buffer,8);
   break;
case 1283:
   memcpy( ESR_Track04_u.ESR_Track04_Buffer,Temp_Buffer,8);
   break;
case 1284:
   memcpy( ESR_Track05_u.ESR_Track05_Buffer,Temp_Buffer,8);
   break;
case 1285:
   memcpy( ESR_Track06_u.ESR_Track06_Buffer,Temp_Buffer,8);
   break;
case 1286:
   memcpy( ESR_Track07_u.ESR_Track07_Buffer,Temp_Buffer,8);
   break;
case 1287:
   memcpy( ESR_Track08_u.ESR_Track08_Buffer,Temp_Buffer,8);
   break;
case 1288:
   memcpy( ESR_Track09_u.ESR_Track09_Buffer,Temp_Buffer,8);
   break;
case 1289:
   memcpy( ESR_Track10_u.ESR_Track10_Buffer,Temp_Buffer,8);
   break;
case 1290:
   memcpy( ESR_Track11_u.ESR_Track11_Buffer,Temp_Buffer,8);
   break;
case 1291:
   memcpy( ESR_Track12_u.ESR_Track12_Buffer,Temp_Buffer,8);
   break;
case 1292:
   memcpy( ESR_Track13_u.ESR_Track13_Buffer,Temp_Buffer,8);
   break;
case 1293:
   memcpy( ESR_Track14_u.ESR_Track14_Buffer,Temp_Buffer,8);
   break;
case 1294:
   memcpy( ESR_Track15_u.ESR_Track15_Buffer,Temp_Buffer,8);
   break;
case 1295:
   memcpy( ESR_Track16_u.ESR_Track16_Buffer,Temp_Buffer,8);
   break;
case 1296:
   memcpy( ESR_Track17_u.ESR_Track17_Buffer,Temp_Buffer,8);
   break;
case 1297:
   memcpy( ESR_Track18_u.ESR_Track18_Buffer,Temp_Buffer,8);
   break;
case 1298:
   memcpy( ESR_Track19_u.ESR_Track19_Buffer,Temp_Buffer,8);
   break;
case 1299:
   memcpy( ESR_Track20_u.ESR_Track20_Buffer,Temp_Buffer,8);
   break;
case 1300:
   memcpy( ESR_Track21_u.ESR_Track21_Buffer,Temp_Buffer,8);
   break;
case 1301:
   memcpy( ESR_Track22_u.ESR_Track22_Buffer,Temp_Buffer,8);
   break;
case 1302:
   memcpy( ESR_Track23_u.ESR_Track23_Buffer,Temp_Buffer,8);
   break;
case 1303:
   memcpy( ESR_Track24_u.ESR_Track24_Buffer,Temp_Buffer,8);
   break;
case 1304:
   memcpy( ESR_Track25_u.ESR_Track25_Buffer,Temp_Buffer,8);
   break;
case 1305:
   memcpy( ESR_Track26_u.ESR_Track26_Buffer,Temp_Buffer,8);
   break;
case 1306:
   memcpy( ESR_Track27_u.ESR_Track27_Buffer,Temp_Buffer,8);
   break;
case 1307:
   memcpy( ESR_Track28_u.ESR_Track28_Buffer,Temp_Buffer,8);
   break;
case 1308:
   memcpy( ESR_Track29_u.ESR_Track29_Buffer,Temp_Buffer,8);
   break;
case 1309:
   memcpy( ESR_Track30_u.ESR_Track30_Buffer,Temp_Buffer,8);
   break;
case 1310:
   memcpy( ESR_Track31_u.ESR_Track31_Buffer,Temp_Buffer,8);
   break;
case 1311:
   memcpy( ESR_Track32_u.ESR_Track32_Buffer,Temp_Buffer,8);
   break;
case 1312:
   memcpy( ESR_Track33_u.ESR_Track33_Buffer,Temp_Buffer,8);
   break;
case 1313:
   memcpy( ESR_Track34_u.ESR_Track34_Buffer,Temp_Buffer,8);
   break;
case 1314:
   memcpy( ESR_Track35_u.ESR_Track35_Buffer,Temp_Buffer,8);
   break;
case 1315:
   memcpy( ESR_Track36_u.ESR_Track36_Buffer,Temp_Buffer,8);
   break;
case 1316:
   memcpy( ESR_Track37_u.ESR_Track37_Buffer,Temp_Buffer,8);
   break;
case 1317:
   memcpy( ESR_Track38_u.ESR_Track38_Buffer,Temp_Buffer,8);
   break;
case 1318:
   memcpy( ESR_Track39_u.ESR_Track39_Buffer,Temp_Buffer,8);
   break;
case 1319:
   memcpy( ESR_Track40_u.ESR_Track40_Buffer,Temp_Buffer,8);
   break;
case 1320:
   memcpy( ESR_Track41_u.ESR_Track41_Buffer,Temp_Buffer,8);
   break;
case 1321:
   memcpy( ESR_Track42_u.ESR_Track42_Buffer,Temp_Buffer,8);
   break;
case 1322:
   memcpy( ESR_Track43_u.ESR_Track43_Buffer,Temp_Buffer,8);
   break;
case 1323:
   memcpy( ESR_Track44_u.ESR_Track44_Buffer,Temp_Buffer,8);
   break;
case 1324:
   memcpy( ESR_Track45_u.ESR_Track45_Buffer,Temp_Buffer,8);
   break;
case 1325:
   memcpy( ESR_Track46_u.ESR_Track46_Buffer,Temp_Buffer,8);
   break;
case 1326:
   memcpy( ESR_Track47_u.ESR_Track47_Buffer,Temp_Buffer,8);
   break;
case 1327:
   memcpy( ESR_Track48_u.ESR_Track48_Buffer,Temp_Buffer,8);
   break;
case 1328:
   memcpy( ESR_Track49_u.ESR_Track49_Buffer,Temp_Buffer,8);
   break;
case 1329:
   memcpy( ESR_Track50_u.ESR_Track50_Buffer,Temp_Buffer,8);
   break;
case 1330:
   memcpy( ESR_Track51_u.ESR_Track51_Buffer,Temp_Buffer,8);
   break;
case 1331:
   memcpy( ESR_Track52_u.ESR_Track52_Buffer,Temp_Buffer,8);
   break;
case 1332:
   memcpy( ESR_Track53_u.ESR_Track53_Buffer,Temp_Buffer,8);
   break;
case 1333:
   memcpy( ESR_Track54_u.ESR_Track54_Buffer,Temp_Buffer,8);
   break;
case 1334:
   memcpy( ESR_Track55_u.ESR_Track55_Buffer,Temp_Buffer,8);
   break;
case 1335:
   memcpy( ESR_Track56_u.ESR_Track56_Buffer,Temp_Buffer,8);
   break;
case 1336:
   memcpy( ESR_Track57_u.ESR_Track57_Buffer,Temp_Buffer,8);
   break;
case 1337:
   memcpy( ESR_Track58_u.ESR_Track58_Buffer,Temp_Buffer,8);
   break;
case 1338:
   memcpy( ESR_Track59_u.ESR_Track59_Buffer,Temp_Buffer,8);
   break;
case 1339:
   memcpy( ESR_Track60_u.ESR_Track60_Buffer,Temp_Buffer,8);
   break;
case 1340:
   memcpy( ESR_Track61_u.ESR_Track61_Buffer,Temp_Buffer,8);
   break;
case 1341:
   memcpy( ESR_Track62_u.ESR_Track62_Buffer,Temp_Buffer,8);
   break;
case 1342:
   memcpy( ESR_Track63_u.ESR_Track63_Buffer,Temp_Buffer,8);
   break;
case 1343:
   memcpy( ESR_Track64_u.ESR_Track64_Buffer,Temp_Buffer,8);
   break;
case 1344:
   memcpy( ESR_TrackMotionPower_m0_u.ESR_TrackMotionPower_m0_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m1_u.ESR_TrackMotionPower_m1_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m2_u.ESR_TrackMotionPower_m2_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m3_u.ESR_TrackMotionPower_m3_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m4_u.ESR_TrackMotionPower_m4_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m5_u.ESR_TrackMotionPower_m5_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m6_u.ESR_TrackMotionPower_m6_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m7_u.ESR_TrackMotionPower_m7_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m8_u.ESR_TrackMotionPower_m8_Buffer,Temp_Buffer,8);
   memcpy( ESR_TrackMotionPower_m9_u.ESR_TrackMotionPower_m9_Buffer,Temp_Buffer,8);
   break;
case 1456:
   memcpy( CAN_TX_FORD_WERS_ASM_PN_1_u.CAN_TX_FORD_WERS_ASM_PN_1_Buffer,Temp_Buffer,8);
   break;
case 1457:
   memcpy( CAN_TX_FORD_WERS_ASM_PN_2_u.CAN_TX_FORD_WERS_ASM_PN_2_Buffer,Temp_Buffer,8);
   break;
case 1458:
   memcpy( CAN_TX_VOLVO_KDP_ASM_PN_u.CAN_TX_VOLVO_KDP_ASM_PN_Buffer,Temp_Buffer,8);
   break;
case 1459:
   memcpy( CAN_TX_FORD_WERS_HW_PN_1_u.CAN_TX_FORD_WERS_HW_PN_1_Buffer,Temp_Buffer,8);
   break;
case 1460:
   memcpy( CAN_TX_FORD_WERS_HW_PN_2_u.CAN_TX_FORD_WERS_HW_PN_2_Buffer,Temp_Buffer,8);
   break;
case 1461:
   memcpy( CAN_TX_VOLVO_KDP_HW_PN_u.CAN_TX_VOLVO_KDP_HW_PN_Buffer,Temp_Buffer,8);
   break;
case 1462:
   memcpy( CAN_TX_FORD_WERS_HOST_SW_PN_1_u.CAN_TX_FORD_WERS_HOST_SW_PN_1_Buffer,Temp_Buffer,8);
   break;
case 1463:
   memcpy( CAN_TX_FORD_WERS_HOST_SW_PN_2_u.CAN_TX_FORD_WERS_HOST_SW_PN_2_Buffer,Temp_Buffer,8);
   break;
case 1464:
   memcpy( CAN_TX_VOLVO_KDP_HOST_SW_PN_u.CAN_TX_VOLVO_KDP_HOST_SW_PN_Buffer,Temp_Buffer,8);
   break;
case 1468:
   memcpy( CAN_TX_FORD_WERS_DIAG_PN_1_u.CAN_TX_FORD_WERS_DIAG_PN_1_Buffer,Temp_Buffer,8);
   break;
case 1469:
   memcpy( CAN_TX_FORD_WERS_DIAG_PN_2_u.CAN_TX_FORD_WERS_DIAG_PN_2_Buffer,Temp_Buffer,8);
   break;
case 1470:
   memcpy( CAN_TX_VOLVO_KDP_DIAG_PN_u.CAN_TX_VOLVO_KDP_DIAG_PN_Buffer,Temp_Buffer,8);
   break;
case 1472:
   memcpy( ESR_Sim1_u.ESR_Sim1_Buffer,Temp_Buffer,8);
   break;
case 1488:
   memcpy( ESR_Valid1_u.ESR_Valid1_Buffer,Temp_Buffer,8);
   break;
case 1489:
   memcpy( ESR_Valid2_u.ESR_Valid2_Buffer,Temp_Buffer,8);
   break;
case 1508:
   memcpy( ESR_Status5_u.ESR_Status5_Buffer,Temp_Buffer,8);
   break;
case 1509:
   memcpy( ESR_Status6_u.ESR_Status6_Buffer,Temp_Buffer,8);
   break;
case 1510:
   memcpy( ESR_Status7_u.ESR_Status7_Buffer,Temp_Buffer,8);
   break;
case 1511:
   memcpy( ESR_Status8_u.ESR_Status8_Buffer,Temp_Buffer,8);
   break;
case 1512:
   memcpy( ESR_Status9_u.ESR_Status9_Buffer,Temp_Buffer,8);
   break;
case 1522:
   memcpy( Vehicle3_u.Vehicle3_Buffer,Temp_Buffer,8);
   break;
case 1523:
   memcpy( Vehicle4_u.Vehicle4_Buffer,Temp_Buffer,8);
   break;
case 1524:
   memcpy( Vehicle5_u.Vehicle5_Buffer,Temp_Buffer,8);
   break;
case 1525:
   memcpy( Vehicle6_u.Vehicle6_Buffer,Temp_Buffer,8);
   break;
case 1890:
   memcpy( MMR_XCP_Inst_Req_u.MMR_XCP_Inst_Req_Buffer,Temp_Buffer,8);
   break;
case 1891:
   memcpy( MMR_XCP_Inst_Resp_u.MMR_XCP_Inst_Resp_Buffer,Temp_Buffer,8);
   break;
case 1920:
   memcpy( MMR_XCP_Inst_DAQ01_u.MMR_XCP_Inst_DAQ01_Buffer,Temp_Buffer,8);
   break;
case 1921:
   memcpy( MMR_XCP_Inst_DAQ02_u.MMR_XCP_Inst_DAQ02_Buffer,Temp_Buffer,8);
   break;
case 1922:
   memcpy( MMR_XCP_Inst_DAQ03_u.MMR_XCP_Inst_DAQ03_Buffer,Temp_Buffer,8);
   break;
case 1923:
   memcpy( MMR_XCP_Inst_DAQ04_u.MMR_XCP_Inst_DAQ04_Buffer,Temp_Buffer,8);
   break;
case 1924:
   memcpy( MMR_XCP_Inst_DAQ05_u.MMR_XCP_Inst_DAQ05_Buffer,Temp_Buffer,8);
   break;
case 1925:
   memcpy( MMR_XCP_Inst_DAQ06_u.MMR_XCP_Inst_DAQ06_Buffer,Temp_Buffer,8);
   break;
case 1926:
   memcpy( MMR_XCP_Inst_DAQ07_u.MMR_XCP_Inst_DAQ07_Buffer,Temp_Buffer,8);
   break;
case 1927:
   memcpy( MMR_XCP_Inst_DAQ08_u.MMR_XCP_Inst_DAQ08_Buffer,Temp_Buffer,8);
   break;
case 1928:
   memcpy( MMR_XCP_Inst_DAQ09_u.MMR_XCP_Inst_DAQ09_Buffer,Temp_Buffer,8);
   break;
case 1929:
   memcpy( MMR_XCP_Inst_DAQ10_u.MMR_XCP_Inst_DAQ10_Buffer,Temp_Buffer,8);
   break;
case 1930:
   memcpy( MMR_XCP_Inst_DAQ11_u.MMR_XCP_Inst_DAQ11_Buffer,Temp_Buffer,8);
   break;
case 1931:
   memcpy( MMR_XCP_Inst_DAQ12_u.MMR_XCP_Inst_DAQ12_Buffer,Temp_Buffer,8);
   break;
case 1932:
   memcpy( MMR_XCP_Inst_DAQ13_u.MMR_XCP_Inst_DAQ13_Buffer,Temp_Buffer,8);
   break;
case 1933:
   memcpy( MMR_XCP_Inst_DAQ14_u.MMR_XCP_Inst_DAQ14_Buffer,Temp_Buffer,8);
   break;
case 1934:
   memcpy( MMR_XCP_Inst_DAQ15_u.MMR_XCP_Inst_DAQ15_Buffer,Temp_Buffer,8);
   break;
case 1935:
   memcpy( MMR_XCP_Inst_DAQ16_u.MMR_XCP_Inst_DAQ16_Buffer,Temp_Buffer,8);
   break;
case 2016:
   memcpy( ACM_Inst_Req_u.ACM_Inst_Req_Buffer,Temp_Buffer,8);
   break;
case 2017:
   memcpy( MMR_Host_Inst_Req_u.MMR_Host_Inst_Req_Buffer,Temp_Buffer,8);
   break;
case 2019:
   memcpy( MMR_Host_Inst_Resp_u.MMR_Host_Inst_Resp_Buffer,Temp_Buffer,8);
   break;
case 2020:
   memcpy( ACM_Inst_Resp_u.ACM_Inst_Resp_Buffer,Temp_Buffer,8);
   break;
case 2021:
   memcpy( MMR_DSP_Inst_Req_u.MMR_DSP_Inst_Req_Buffer,Temp_Buffer,8);
   break;
case 2022:
   memcpy( MMR_DSP_Inst_Resp_u.MMR_DSP_Inst_Resp_Buffer,Temp_Buffer,8);
   break;
case 2023:
   memcpy( ACM_Inst_DAQ1_u.ACM_Inst_DAQ1_Buffer,Temp_Buffer,8);
   break;
case 2024:
   memcpy( ACM_Inst_DAQ2_u.ACM_Inst_DAQ2_Buffer,Temp_Buffer,8);
   break;
case 2025:
   memcpy( MMR_Inst_DAQ1_u.MMR_Inst_DAQ1_Buffer,Temp_Buffer,8);
   break;
case 2026:
   memcpy( MMR_Inst_DAQ2_u.MMR_Inst_DAQ2_Buffer,Temp_Buffer,8);
   break;
case 2027:
   memcpy( MMR_Inst_DAQ3_u.MMR_Inst_DAQ3_Buffer,Temp_Buffer,8);
   break;
case 2028:
   memcpy( MMR_Inst_DAQ4_u.MMR_Inst_DAQ4_Buffer,Temp_Buffer,8);
   break;
case 2029:
   memcpy( MMR_Inst_Req_FLASH_u.MMR_Inst_Req_FLASH_Buffer,Temp_Buffer,8);
   break;
case 2030:
   memcpy( MMR_Inst_Resp_FLASH_u.MMR_Inst_Resp_FLASH_Buffer,Temp_Buffer,8);
   break;
default:
	//printf("CAN1 error\n");
	break;
		}
return Can_ID;
}


