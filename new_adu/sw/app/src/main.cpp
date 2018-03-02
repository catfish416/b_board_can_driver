#ifdef __cplusplus
extern "C" {
#endif

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include "resue.h"
#include "ipcl.h"
#include "hal_plock.h"
#include "spi_cfg.h"
#include <time.h>

#define MAX_MSG_DATA_LEN    (20)
#define MAX_VALID_DATA_LEN  (18)
#define ARRARY_STATUS_LEN   (16)
#define SPI_INTERVAL_TIME   (300)
#define SPI_SHIFT_TIMES     (8)
#define MAX_DATA_NUM        (3000)
#define TC297_channel       (0x00)
#define DATA_NUM_PER_MSG    (3)
#define DATA_MAGIC_NUM (0xAABBCCDD)
#define MAX_FAIL_TIMES      (3)
/* send command to TC297 enum */
#define START_CMD       (0xAB)
#define STOP_CMD        (0xAC)
#define QUERY_CMD       (0xAD)
#define SET_STATUS_CMD  (0xBC)
#define GET_STATUS_CMD  (0xBD)
/* status machine enum */
#define S_TRANSFERING       (0x11)
#define S_TRANSFER_DONE     (0x22)
#define S_TESTING           (0x33)
#define S_TEST_DONE         (0x44)
#define S_TEST_FAIL         (0x55)
#define S_IDLE              (0x00)

#define MAX_INPUT_LEN       (10)
#define TOTAL_DATA_NUM      (1800)
#define CHECK_TEST_DONE_PER_10_SEC  (10)
#define BAR_WIDTH_PX        400
#define ERR_RETRY_TIMES     3
#define SPEED_VAL_100X      100
#define MAX_SPEED_LIMIT     300

#define DATA_TXT_FILE       "/var/www/cgi-bin/test.txt"
#define LOG_SWITCH_FILE     "/var/www/cgi-bin/log_on"

#define HTTP_HOME_CGI_STR       "http://169.254.108.250/cgi-bin/index.cgi"
#define HTTP_STOP_CGI_STR       "http://169.254.108.250/cgi-bin/stop.cgi"
#define HTTP_START_CGI_STR      "http://169.254.108.250/cgi-bin/start.cgi"
#define HTTP_TRANSFOR_CGI_STR   "http://169.254.108.250/cgi-bin/trans.cgi"
#define BG_PIC_ADDR             "http://169.254.108.250/pic/srdc.jpg"

bool g_log_on = false;

typedef struct test_data
{
    int time_sec;
    float speed_data;
}s_test_data;

typedef struct machine_status
{
  uint8_t type[2];      // set_status: 0xBCBC, get_status: 0xBDBD
  uint8_t status[ARRARY_STATUS_LEN];   // s_transforing: 0x11,  s_trans_Done: 0x22, s_testing: 0x33, s_test_Done: 0x44, s_idle: 0x00
  uint8_t CRC;
  uint8_t Invild;   // 0xAA
 }s_ms;

bool tc297_flag = true;
unsigned int g_array[DATA_NUM_PER_MSG + 1] = {0};

static void ShowErrorInfo(char *fmt, ...)
{
    if (true == g_log_on)
        printf(fmt);
}

void quit_function(int sign_no)
{
    tc297_flag = false;
    printf("\nentry quit\n");
    exit(0);
}

/* for test debug */
void print_message(Frame_Type *msg)
{
    printf("msg:cmd = %d\n", msg->CMD);
    //printf("msg:id = %d\n", msg->BLOCK);
    //printf("msg:data = %f\n", *(float*)(msg->Data));
//    for (int i = 0; i < 16; i++)
//        printf("msg:data[%d] = %x\n", i, (msg->Data[i]));
    printf("msg:CRC = %d\n", msg->CRC);
    printf("msg:Invild = %x\n", msg->Invild);
}
void print_set_status(s_ms *ms)
{
    printf("<BR>");

    printf("ms:type[0] = %x, \n", ms->type[0]);
    printf("ms:type[1] = %x, \n", ms->type[1]);
    for (int i = 0; i < ARRARY_STATUS_LEN; i++)
    {
        printf("ms:status[%d] = %x, \n", i, ms->status[i]);
    }
    
    printf("ms:CRC = %x, \n", ms->CRC);
    printf("ms:Invild = %x<BR>", ms->Invild);
}

void transmit_SPI_message(Frame_Type *message, uint16_t queue_index)
{
    //message->CMD = CMD_W;
    /* 由于数据量增大到1800，这里用2字节表示block                 index */
    message->CMD   = (uint8_t)(queue_index>>8);
    message->BLOCK = (uint8_t)queue_index;

    //memcpy(&(message->CMD), &queue_index, sizeof(queue_index));
    //message->BLOCK = queue_index;
    g_array[DATA_NUM_PER_MSG] = DATA_MAGIC_NUM;
    memcpy(message->Data, (uint8_t*)g_array, sizeof(g_array));
    (void)memset(g_array, 0, sizeof(g_array));
    //memcpy(message->Data, &test_data, sizeof(test_data));
    message->CRC = CRC8_function((uint8_t*)message, MAX_VALID_DATA_LEN);
    message->Invild = 0xAA;
}

void debug_print(void *p, int len)
{
    if (NULL == p || len <= 0)
        return;

    uint8_t *pt = (uint8_t*)p;
    for(int i = 0; i < len; i++)
        printf("debug:[%d] %x\n", i + 1, pt[i]);
}

void clear_spi_channel(void)
{
    Frame_Type temp_msg; 
    (void)memset(&temp_msg, 0xcc, MAX_VALID_DATA_LEN);  // 0xcc to clear channel
    temp_msg.CRC = CRC8_function((uint8_t*)&temp_msg, MAX_VALID_DATA_LEN);
    temp_msg.Invild = 0xAA;
    if (SPI_Transfer(TC297_channel, &temp_msg, NULL, sizeof(temp_msg)) != true)
        printf("%s: spi transfer fail!\n", __FUNCTION__);
    usleep(SPI_INTERVAL_TIME);
}

int check_magic_num()
{

}

int recv_SPI_msg(Frame_Type *msg, uint8_t *pOutput, int output_len)
{
    int ret = -1;
    if (output_len < MAX_MSG_DATA_LEN - 1)
    {
        printf("recv_SPI_msg: output_len err");
        return ret;
    }

    uint8_t rcv_msg[MAX_MSG_DATA_LEN] = {0};
    uint8_t shift_rcv_msg[SPI_SHIFT_TIMES][MAX_MSG_DATA_LEN - 1] = {0};

    transmit_message(CMD_R_R, msg, SPI_SHIFT_TIMES - 1);
    if (SPI_Transfer(TC297_channel, msg, rcv_msg, MAX_MSG_DATA_LEN) != true)
    {
        printf("%s: spi transfer 1 fail!\n", __FUNCTION__);
        return ret;
    }
    usleep(SPI_INTERVAL_TIME);
    if (SPI_Transfer(TC297_channel, msg, rcv_msg, MAX_MSG_DATA_LEN) != true)  // SPI driver bug need to send a invaild data
    {
        printf("%s: spi transfer 2 fail!\n", __FUNCTION__);
        return ret;
    }
    usleep(SPI_INTERVAL_TIME);
    //printf("SPI receive ...<BR>");

   // for debug receive
    for(uint8_t j = 0; j < MAX_MSG_DATA_LEN; j++)
    {
        //printf("rcv[%d]  %x ", j, rcv_msg[j]);
    }
    //printf("<BR>\n");
    for(uint8_t j = 0; j < SPI_SHIFT_TIMES; j++)
    {
        uint8_t temp1 =(0xFF<<(j+1));
        uint8_t temp3 = temp1 >>(j+1);
        uint8_t temp2 = 0xFF <<(SPI_SHIFT_TIMES - 1 - j);
        //  printf("temp3 = %x temp2= %x\n", temp3,temp2);

        for(uint8_t n = 0; n < MAX_MSG_DATA_LEN - 1; n++)
        {
            shift_rcv_msg[j][n] = ((rcv_msg[n] &temp3)<<(j+1)) |(( rcv_msg[n+1] &temp2)>>(7-j));
              //printf("%x  ,",shift_rcv_msg[j][n]);
        }
        //printf("<BR>\n");
        if(0 == CRC8_function(&shift_rcv_msg[j][0], MAX_MSG_DATA_LEN - 1) && 0xcc == shift_rcv_msg[j][3] && 0xcc == shift_rcv_msg[j][5])
        {
            ShowErrorInfo("recv_SPI_data success<BR>");
            memcpy(pOutput, &shift_rcv_msg[j][0], MAX_MSG_DATA_LEN - 1);
            ret = 0;
            break;
        }
    }

    if (ret)
        ShowErrorInfo("CRC failed!<BR>\n");

    clear_spi_channel();

    return ret;
}

int set_get_mcu_status(uint8_t type, uint8_t status, uint8_t *pOutput, int output_len)
{
    if (NULL == pOutput || output_len < MAX_MSG_DATA_LEN)
    {
        printf("%s: input err\n", __FUNCTION__);
        return -1;
    }

    //SPI_Close(TC297_channel);  // ensure to open SPI success

    SPI_Config_T spi_config = DRV_SPI_CFG;
    if (-1 == SPI_Open(TC297_channel, &spi_config))
    {
        printf("%s: spi open fail!\n", __FUNCTION__);
        return -1;
    }

    /* set status */
    struct machine_status ms;
    (void)memset(&ms, 0, sizeof(ms));
    (void)memset(&ms.type, type, sizeof(ms.type));
    (void)memset(ms.status, status, sizeof(ms.status));
    ms.CRC = CRC8_function((uint8_t*)&ms, MAX_VALID_DATA_LEN);
    ms.Invild = 0xAA;

    if (SPI_Transfer(TC297_channel, &ms, NULL, sizeof(ms)) != true)
    {
        printf("%s: spi transfer fail!\n", __FUNCTION__);
        return -1;
    }
    usleep(SPI_INTERVAL_TIME);

    /* recv cmd msg */
    uint8_t recv[MAX_MSG_DATA_LEN] = {0};
    if (recv_SPI_msg((Frame_Type*)&ms, recv, sizeof(recv)) < 0)
    {
        ShowErrorInfo("%s: recv SPI msg fail!<BR>", __FUNCTION__);
        SPI_Close(TC297_channel);
        return -1;
    }

    memcpy(pOutput, recv, MAX_MSG_DATA_LEN);
    SPI_Close(TC297_channel);

    return 0;
}

int send_mcu_cmd(uint8_t cmd, uint8_t *pOutput, int output_len)
{
    if (NULL == pOutput || output_len < MAX_MSG_DATA_LEN)
    {
        printf("%s: input err\n", __FUNCTION__);
        return -1;
    }

    //SPI_Close(TC297_channel);  // ensure to open SPI success

    SPI_Config_T spi_config = DRV_SPI_CFG;
    if (-1 == SPI_Open(TC297_channel, &spi_config))
    {
        printf("%s: spi open fail!\n", __FUNCTION__);
        return -1;
    }

    /* send cmd */
    Frame_Type msg;
    (void)memset(&msg, 0, sizeof(msg));
    (void)memset(&msg, cmd, MAX_VALID_DATA_LEN);
    msg.CRC = CRC8_function((uint8_t*)&msg, MAX_VALID_DATA_LEN);
    msg.Invild = 0xAA;

    if (SPI_Transfer(TC297_channel, &msg, NULL, sizeof(msg)) != true)
    {
        printf("%s: spi transfer fail!\n", __FUNCTION__);
        return -1;
    }
    usleep(SPI_INTERVAL_TIME);

    /* recv cmd msg */
    uint8_t recv[MAX_MSG_DATA_LEN] = {0};
    if (recv_SPI_msg(&msg, recv, sizeof(recv)) < 0)
    {
        printf("%s: recv SPI msg fail!\n", __FUNCTION__);
        SPI_Close(TC297_channel);
        return -1;
    }

    memcpy(pOutput, recv, MAX_MSG_DATA_LEN);
    SPI_Close(TC297_channel);

    return 0;
}

int send_TC297_data(void)
{
    int ret = -1;
    int fail_cnt = 0;

reopen:
    FILE* fp = fopen(DATA_TXT_FILE, "rt");
    if(NULL == fp)
    {
        printf("***** open :%s failed *****\n", DATA_TXT_FILE);
        sleep(10);
        goto reopen;
    }
retry:
    SPI_Config_T spi_config = DRV_SPI_CFG;
    if (-1 == SPI_Open(TC297_channel, &spi_config))
    {
        printf("spi open fail!\n");
        fclose(fp);
        return ret;
    }

    int index       = 0;
    int msg_ID      = 0;
    int speed_num   = 0;

    size_t len  = 0;
    size_t read = 0;
    unsigned int speed_val_100x = 0;
    char *pline = NULL;

    s_test_data data_buf[MAX_DATA_NUM] = {0};

    fseek(fp, 0, SEEK_SET);
    if ((read = getline(&pline, &len, fp)) != -1)   // jump first line
    {
        while ((read = getline(&pline, &len, fp)) != -1)
        {
            sscanf(pline, "%d%f", &data_buf[speed_num].time_sec, &data_buf[speed_num].speed_data);
            speed_val_100x = (unsigned int)(data_buf[speed_num++].speed_data * 100);
            //speed_num++;
            free(pline);
            pline = NULL;

            if (speed_val_100x > SPEED_VAL_100X * MAX_SPEED_LIMIT)
            {
                printf("Speed value %f over MAX: %d, please check test.txt<BR>",
                    data_buf[speed_num++].speed_data, MAX_SPEED_LIMIT);
            }
            g_array[index++] = speed_val_100x;
            if ((index % DATA_NUM_PER_MSG) == 0)
            {
                Frame_Type msg;
                (void)memset(&msg, 0, sizeof(msg));
                transmit_SPI_message(&msg, msg_ID++);
                if (SPI_Transfer(TC297_channel, &msg, NULL, sizeof(msg)) != true)
                {
                    printf("%s: spi transfer fail!\n", __FUNCTION__);
                    return ret;
                }
                index = 0;
                usleep(SPI_INTERVAL_TIME);
            }
        }
    }
    usleep(SPI_INTERVAL_TIME);

    /* check TC297 if recv_num == send_num */
    int recv_num = 0;
    uint8_t recv[MAX_MSG_DATA_LEN] = {0};
    if (send_mcu_cmd(QUERY_CMD, recv, MAX_MSG_DATA_LEN) < 0)
    {
        printf("query TC297 recve_num failed!\n");
        fclose(fp);
        return ret;
    }

    recv_num = (recv[0]<<8)|recv[1];

    ShowErrorInfo("query TC297 sucess, recv_num: %d<BR>", recv_num);
    printf("msg_ID = %d, speed_num = %d, recv_num = %d<BR>", msg_ID, speed_num, recv_num);
#if 0
    bool recv_success = false;
    for (int i = 0; i < MAX_FAIL_TIMES; i++)
    {
        if (recv_num == msg_ID)
        {
            ret = 0;
            recv_success = true;
            printf("send data completed: %d<BR>", speed_num);
            break;
        }
        printf("%s: recv data num: %d, send data num: %d, retry<BR>", __FUNCTION__, recv_num, speed_num);
    }
    if (false == recv_success)
        printf("%s: send data failed!<BR>", __FUNCTION__);
#endif

    if (recv_num == msg_ID)
    {
        ret = 0;
        printf("send data completed: %d<BR>", speed_num);
    }
    else
    {
        /* 若数据传输失败，重传3次 */
        if (fail_cnt != MAX_FAIL_TIMES)
        {
            printf("%s: recv data num: %d, send data num: %d, retry<BR>", __FUNCTION__, recv_num, speed_num);
            fail_cnt++;
            goto retry;
        }
        else
        {
            printf("%s: send data failed!<BR>", __FUNCTION__);
        }
    }

    SPI_Close(TC297_channel);
    fclose(fp);

    return ret;
}

int check_start_cmd_FMS(uint8_t status)
{
    int ret = -1;

    switch(status)
    {
        case S_IDLE:
            printf("<H2><CENTER> TRANSFER DATA FIRST, PLEASE!</CENTER></H2>");
            break;
        case S_TRANSFERING:
            printf("<H2><CENTER> DATA IS TRANSFERING, WAIT A SECOND, PLEASE!</CENTER></H2>");
            break;
        case S_TRANSFER_DONE:
            ret = 0;
            break;
        case S_TESTING:
            printf("<H2><CENTER> TEST IS RUNNING, PLEASE WAIT OR STOP FIRST!</CENTER></H2>");
            break;
        case S_TEST_DONE:
            ret = 0;
            break;
        default:
            printf("<H2><CENTER> wrong status!</CENTER></H2>");
            break;
    }

    return ret;
}

int check_stop_cmd_FMS(uint8_t status)
{
    int ret = -1;

    switch(status)
    {
        case S_IDLE:
            printf("<H2><CENTER> TRANSFER DATA FIRST, PLEASE!</CENTER></H2>");
            break;
        case S_TRANSFERING:
        case S_TESTING:
            ret = 0;
            break;
        case S_TRANSFER_DONE:
        case S_TEST_DONE:
            printf("<H2><CENTER> no test running!</CENTER></H2>");
            /* do nothing */
            break;
        default:
            printf("<H2><CENTER> wrong status!</CENTER></H2>");
            break;
    }

    return ret;
}

int check_transfor_cmd_FMS(uint8_t status)
{
    int ret = -1;

    printf("111 status: 0x%x\n", status);

    switch(status)
    {
        case S_IDLE:
            ret = 0;     
            break;
        case S_TRANSFERING:
        case S_TESTING:
            break;
        case S_TRANSFER_DONE:
        case S_TEST_DONE:
            ret = 0;
            /* do nothing */
            break;
        default:
            printf("<H2><CENTER> wrong status!</CENTER></H2>");
            break;
    }

    return ret;
}

int check_cmd_FMS(uint8_t cmd, uint8_t status)
{
    int ret = -1;

    switch(cmd)
    {
        case START_CMD:
            ret = check_start_cmd_FMS(status);
            break;
        case STOP_CMD:
            ret = check_stop_cmd_FMS(status);
            break;
        default:
            printf("%s: wrong cmd %x\n", __FUNCTION__, cmd);
            break;
    }

    return ret;
}

int check_test_done(void)
{
    int ret = -1;

    s_ms ms;
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        return -1;
    }
    uint8_t status = ms.status[0];

    if (S_TEST_DONE == status)
        ret = 0;
    else if (S_TEST_FAIL == status)
        ret = -2;

    return ret;
}
#if 0   // file upload cgi
#include<stdio.h>   
#include<string.h>   
#include<unistd.h>   
#include<fcntl.h>   
#include<sys/stat.h>   
#include"cgic.h"   
#define BufferLen 1024

int cgiMain(void){   
    cgiFilePtr file = NULL;   
    int targetFile = 0;
    mode_t mode;
    char name[128];
    char fileNameOnServer[64];
    char contentType[1024];
    char buffer[BufferLen];
    char *tmpStr = NULL;
    int size = 0;
    int got,t;
    cgiHeaderContentType("text/html");
    printf("<div id='Layer1' style='position:absolute; width:100%; height:100%; z-index:-1'>");
    printf("<img src=%s height='100%' width='100%'/>", BG_PIC_ADDR);
    printf("</div>");

    printf("<H1><CENTER> TEST PAGE</CENTER></H1>");
    printf("<HR>");
    printf("<form action=%s method='post'>", HTTP_TRANSFOR_CGI_STR);
    printf("<CENTER><button id='transbtn' name='subject' type='submit' value='click'><H2><CENTER>TRANSFER DATA</CENTER></H2></button></CENTER><BR>");
    printf("</form>");
    printf("<CENTER><button id='startbtn' name='subject' type='submit' value='click' disabled=true><H2><CENTER>START</CENTER></H2></button></CENTER><BR>");

    //取得html页面中file元素的值，应该是文件在客户机上的路径名   
    if (cgiFormFileName("file", name, sizeof(name)) !=cgiFormSuccess) {   
        fprintf(stderr,"could not retrieve filename/n");   
        goto FAIL;   
    }   
    cgiFormFileSize("file", &size);   
    //取得文件类型，不过本例中并未使用   
    cgiFormFileContentType("file", contentType, sizeof(contentType));   
    //目前文件存在于系统临时文件夹中，通常为/tmp，通过该命令打开临时文件。临时文件的名字与用户文件的名字不同，所以不能通过路径/tmp/userfilename的方式获得文件   
    if (cgiFormFileOpen("file", &file) != cgiFormSuccess) {   
        fprintf(stderr,"could not open the file/n");   
        goto FAIL;   
    }   
    t = -1;   
    //从路径名解析出用户文件名   
    while(1){   
        tmpStr=strstr(name+t+1,"//");   
        if(NULL == tmpStr)   
            tmpStr=strstr(name+t+1,"/");//if "//" is not path separator, try "/"   
        if(NULL != tmpStr)   
            t = (int)(tmpStr-name);   
        else   
            break;   
    }   
    strcpy(fileNameOnServer,name+t+1);   
        mode = S_IRWXU|S_IRGRP|S_IROTH;   
    //在当前目录下建立新的文件，第一个参数实际上是路径名，此处的含义是在cgi程序所在的目录（当前目录））建立新文件   
    targetFile=open(fileNameOnServer,O_RDWR|O_CREAT|O_TRUNC|O_APPEND,mode);   
    if(targetFile<0){   
        fprintf(stderr,"could not create the new file,%s/n",fileNameOnServer);   
        goto FAIL;   
    }
    //从系统临时文件中读出文件内容，并放到刚创建的目标文件中   
    while (cgiFormFileRead(file, buffer, BufferLen, &got) == cgiFormSuccess){   
    if(got>0)   
        write(targetFile,buffer,got);   
    }   
    cgiFormFileClose(file);   
    close(targetFile);   
    goto END;

FAIL:   
    fprintf(stderr,"Failed to upload");   
    return -1;   
END:   
    printf("<H2><CENTER>File '%s' has been uploaded successfully!<BR></CENTER></H2>", fileNameOnServer);   
    return 0;   
}   
#endif

void print_cur_time(void)
{
    time_t t;
    t = time(NULL);
    gmtime(&t);
    printf(ctime(&t));
}

static void update_log_status(void)
{
    FILE* fp = fopen(LOG_SWITCH_FILE, "rt");

    if(NULL != fp)
    {
        g_log_on = true;
        fclose(fp);
    }
}

/* these are some switch to choose which main to build for different property */
#define BUILD_START_MAIN        0
#define BUILD_STOP_MAIN         0
#define BUILD_TRANS_DATA_MAIN   1

#if 1
/* 这是主函数 */
int main(int argc,   char* argv[])
{
    update_log_status();
/* STOP 指令cgi代码 */
/* =============================================================== */
#if BUILD_STOP_MAIN  // stop 指令cgi代码

    printf("Content type: text/html\n\n");

    printf("<div id='Layer1' style='position:absolute; width:100%; height:100%; z-index:-1'>");
    printf("<img src=%s height='100%' width='100%'/>", BG_PIC_ADDR);
    printf("</div>");

    printf("<H1><CENTER> STOP TEST PAGE</CENTER></H1>");
    printf("<HR>");

    printf("</form>");
    printf("<form action=%s method='post'>", HTTP_START_CGI_STR);
    printf("<CENTER><button name='subject' type='submit' value='click'><H2><CENTER>START</CENTER></H2></button></CENTER><BR>");
    printf("</form>");
    printf("<form action=%s method='post'>", HTTP_HOME_CGI_STR);
    printf("<CENTER><button name='subject' type='submit' value='click'><H2><CENTER>HOME</CENTER></H2></button></CENTER><BR>");
    printf("</form>");

    tc297_flag = true;
    signal(SIGINT, quit_function);

    ShowErrorInfo("********** stop cmd **********<BR>");
    uint8_t cmd = STOP_CMD;

    /* first, get status from TC297 */
    s_ms ms;
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        printf("<H2><CENTER> Stop test failed!</CENTER></H2><BR>");
        return -1;
    }
    uint8_t status = ms.status[0];
    ShowErrorInfo("cmd: 0x%x, status: 0x%x<BR>", cmd, status);
    //printf("cmd: 0x%x, status: 0x%x<BR>", cmd, status);
    /* exec the cmd, according to the status of TC297 */
    uint8_t recv[MAX_MSG_DATA_LEN] = {0};
    if (send_mcu_cmd(cmd, recv, MAX_MSG_DATA_LEN) < 0)
    {
        ShowErrorInfo("send mcu cmd 0x%x failed<BR>", cmd);
        printf("<H2><CENTER> Stop test failed!</CENTER></H2><BR>");
        return -1;
    }
    else
        ShowErrorInfo("send mcu cmd 0x%x success<BR>", cmd);


    /* set TC297 status: TC297 set status to TEST_DONE when start cmd */
    (void)set_get_mcu_status(SET_STATUS_CMD, S_IDLE, (uint8_t*)&ms, sizeof(ms));
    printf("<H2><CENTER> Stop success!</CENTER></H2>");
#endif

/* TRANS DATA 指令cgi代码 */
/* =============================================================== */
#if BUILD_TRANS_DATA_MAIN // 数据传输正式代码

    printf("Content type: text/html\n\n");

    printf("<body>");
    printf("<div id='Layer1' style='position:absolute; width:100%; height:100%; z-index:-1'>");
    printf("<img src=%s height='100%' width='100%'/>", BG_PIC_ADDR);
    printf("</div>");

    printf("<H1><CENTER> TEST PAGE</CENTER></H1>");
    printf("<HR>");
    
    printf("<CENTER><button id='transbtn' name='subject' type='submit' value='click' disabled=true><H2><CENTER>TRANSFER DATA</CENTER></H2></button></CENTER><BR>");

    printf("<form action=%s method='post'>", HTTP_START_CGI_STR);
    printf("<H2><CENTER><p>press test times=<input type='txt' size='5' name='count'></p></CENTER></H2>");
    printf("<CENTER><button name='subject' type='submit' value='click' onclick='showprogress()'><H2><CENTER>START</CENTER></H2></button></CENTER><BR>");
    printf("</form>");

/*
printf("<H2><CENTER> Transfor data success!</CENTER></H2>");
printf("</body>");

return 0;
*/    

    tc297_flag = true;
    signal(SIGINT, quit_function);

    /* first, get status from TC297 */
    s_ms ms;
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        printf("<H2><CENTER> Trasnfor data failed!</CENTER></H2><BR>");
        return -1;
    }

    //print_set_status(&ms);

    uint8_t status = ms.status[0];

    if (S_TEST_FAIL == status)
    {
        printf("<H2><CENTER> CAR ERROR, PLEASE CHECK CAR!</CENTER></H2><BR>");
        return -1;
    }


    /* second, check machine status */
    if (check_transfor_cmd_FMS(status) < 0)
    {
        ShowErrorInfo("check transfor cmd FMS failed!<BR>");
        printf("<H2><CENTER> Trasnfor data failed!</CENTER></H2><BR>");
        return -1;
    }

    set_get_mcu_status(SET_STATUS_CMD, S_TRANSFERING, (uint8_t*)&ms, sizeof(ms));

#ifdef DEBUG_ON 
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        printf("<H2><CENTER> Trasnfor data failed!</CENTER></H2><BR>");
        return -1;
    }
    print_set_status(&ms);
#endif


    /* do transfor data */
    //ShowErrorInfo("***** transfor cmd *****<BR>");
    if (send_TC297_data() < 0 )
    {
        ShowErrorInfo("***** trans data failed! *****<BR>");
        printf("<H2><CENTER> Trasnfor data failed!</CENTER></H2><BR>");
        return -1;
    }

    set_get_mcu_status(SET_STATUS_CMD, S_TRANSFER_DONE, (uint8_t*)&ms, sizeof(ms));

#ifdef DEBUG_ON 
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        printf("<H2><CENTER> Trasnfor data failed!</CENTER></H2><BR>");
        return -1;
    }
    print_set_status(&ms);
#endif
    printf("<H2><CENTER> Transfor data success!</CENTER></H2>");
#endif

/* start 指令cgi代码 */
/* =============================================================== */
#if BUILD_START_MAIN  // start 指令cgi代码
    printf("Content type: text/html\n\n");

    printf("<div id='Layer1' style='position:absolute; width:100%; height:100%; z-index:-1'>");
    printf("<img src=%s height='100%' width='100%'/>", BG_PIC_ADDR);
    printf("</div>");

    printf("<H1><CENTER> START TEST PAGE</CENTER></H1>");
    printf("<HR>");
    //printf("<H2><CENTER> WLTC Test is Running...</CENTER></H2>");
    printf("<form action=%s method='post'>", HTTP_STOP_CGI_STR);
    printf("<CENTER><button name='subject' type='submit' value='click'><H2><CENTER>STOP</CENTER></H2></button></CENTER><BR>");
    printf("</form>");

    /* 1st, get press test times */
    int len = 0;
    int test_times = 0;
    char *lenstr, poststr[MAX_MSG_DATA_LEN];
    char tmp_cnt[10];
    lenstr = getenv("CONTENT_LENGTH");
    if(lenstr == NULL)
        printf("<DIV STYLE=\"COLOR:RED\">Error parameters should be entered!</DIV>\n");
    else{
        len = atoi(lenstr);
        fgets(poststr, len + 1, stdin);
        if(sscanf(poststr, "count=%s", tmp_cnt) != 1){
            printf("<DIV STYLE=\"COLOR:RED\">Error: Parameters are not right!</DIV>\n");
        } else{
            test_times = atoi(tmp_cnt);
            ShowErrorInfo("<DIV STYLE=\"COLOR:GREEN; font-size:15px;font-weight:bold\">n = %d</DIV>\n", test_times);
        }
    }

    if (!test_times)
        test_times = 1;
for (int i = 0; i < test_times; i++){
    printf("<style>");
    printf("  .text{");
    printf("    position:fixed;");
    printf("    left:850px;");
    printf("    top:250px;");
    printf("  }");
    printf("</style>");

    printf("<div <H2><CENTER> WLTC Test is Running...[%d/%d]</CENTER></H2></div>", i + 1, test_times);
    fflush(stdout);

/*
printf("<H2><CENTER> Start success!</CENTER></H2><BR>");
return 0;
*/

    tc297_flag = true;
    signal(SIGINT, quit_function);

    ShowErrorInfo("********** start cmd **********<BR>");
    uint8_t cmd = START_CMD;

    /* first, get status from TC297 */
    s_ms ms;
    (void)memset(&ms, 0, sizeof(ms));
    if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
    {
        ShowErrorInfo("get mcu status failed!<BR>");
        printf("<H2><CENTER> Start test failed!</CENTER></H2><BR>");
        return -1;
    }
    uint8_t status = ms.status[0];
    ShowErrorInfo("cmd: 0x%x, status: 0x%x<BR>", cmd, status);

    /* second, check machine status */
    if (check_cmd_FMS(cmd, status) < 0)
    {
        ShowErrorInfo("check start cmd FMS failed!<BR>");
        printf("<H2><CENTER> Start test failed!</CENTER></H2><BR>");
        return -1;
    }

    /* exec the cmd, according to the status of TC297 */
    uint8_t recv[MAX_MSG_DATA_LEN] = {0};
    if (send_mcu_cmd(cmd, recv, MAX_MSG_DATA_LEN) < 0)
    {
        ShowErrorInfo("send mcu cmd 0x%x failed<BR>", cmd);
        printf("<H2><CENTER> Start test failed!</CENTER></H2><BR>");
    }
    else
        ShowErrorInfo("send mcu cmd 0x%x success<BR>", cmd);

    /* get TC297 status to check if S_TESTING; TC297 set status to S_TESTING when start cmd, 
        and S_TEST_DONE when finished test */
/*
    (void)set_get_mcu_status(SET_STATUS_CMD, S_TESTING, (uint8_t*)&ms, sizeof(ms));
    printf("<H2><CENTER> Start success!</CENTER></H2><BR>");
*/

    /* 2nd check if start success last for 5s */
    bool start_success = false;
    for (int i = 0; i < 10; i++)
    {
        (void)memset(&ms, 0, sizeof(ms));
        if (set_get_mcu_status(GET_STATUS_CMD, 0, (uint8_t*)&ms, sizeof(ms)) < 0)
        {
            ShowErrorInfo("get mcu status failed!<BR>");
            printf("<H2><CENTER> Start test failed!</CENTER></H2><BR>");
            return -1;
        }
        status = ms.status[0];
        if (S_TESTING == status)
        {
            start_success = true;
            printf("<H2><CENTER> Start success!</CENTER></H2><BR>");
            break;
        }
        else
        {
            usleep(1000*500);   // check every 0.5s
        }
    }
    if (false == start_success)
    {
        printf("<H2><CENTER> Start test failed after retry 5s!</CENTER></H2><BR>");
        return -1;
    }

    /* 3rd, progress bar begin */
    printf("<style>");
    printf("  .bar{");
    printf("    position:absolute;");
    printf("    left:760px;");
    //printf("    top:300px;");
    printf("  }");
    printf("</style>");

    printf("start time: \n");
    print_cur_time();

    int recv_num = 0;
    uint8_t recv_buf[MAX_MSG_DATA_LEN] = {0};
    if (send_mcu_cmd(QUERY_CMD, recv_buf, MAX_MSG_DATA_LEN) < 0)
    {
        printf("query TC297 recve_num failed!\n");
        return -1;
    }

    recv_num = (recv_buf[0]<<8)|recv_buf[1];
    ShowErrorInfo("total num = %d<BR>", recv_num);

//int total = 120;
    int total = recv_num * DATA_NUM_PER_MSG;
    printf("<div class='bar' id='t1' style='width:%dpx; height:2px; border:1px solid #0000FF;'></div>", BAR_WIDTH_PX-1);

    float per_f = (float)BAR_WIDTH_PX/total;
    int times_int = BAR_WIDTH_PX/total;

    for (int i = 1; i < total + 1; i++) {
        times_int = (int)(per_f * (i));
        printf("<div class='bar' style='width: %dpx; height: 3px; background-color: #0000FF'></div>", times_int);
        fflush(stdout);
        sleep(1);
    }
    printf("end time: ");
    print_cur_time();
    /* progress bar end */

    /* 4th, check if test has been done */
    bool test_done = false;
    int ret = -1;
    for (int i = 0; i < (total/CHECK_TEST_DONE_PER_10_SEC + ERR_RETRY_TIMES); i++)
    {
        ret = check_test_done();
        if (0 == ret)  // check if test done every 5 seconds, last for 1 min
        {
            test_done = true;
            break;
        }
        else if (-2 == ret)
        {
            printf("<H2><CENTER> Test failed!</CENTER></H2>");
            break;
        }
        sleep(CHECK_TEST_DONE_PER_10_SEC);
    }
    if (true == test_done)
        printf("<H2><CENTER> Test done!</CENTER></H2>");
    else
        printf("<H2><CENTER> Test failed!</CENTER></H2>");
}

#endif

#if 0   // 废弃，该方式已不采用
        /* 2个参数：接收PC侧操作指令。s：开始测试；p：停止测试 */
        char optstring[] = "sptq";    // s:start  p:stop
        int opt = getopt(argc, argv, optstring);
        if (-1 == opt)
        {
            printf("getopt error\n");
            return -1;
        }

        switch(opt)
        {
            case 's':
                printf("***** start cmd *****\n");
                //send_TC297_cmd(START_CMD);
                //send_mcu_cmd(STR_START_CMD);
                break;
            case 'p':
                printf("***** stop cmd *****\n");
                //send_TC297_cmd(STOP_CMD);
                //send_mcu_cmd(STR_STOP_CMD);
                break;
            case 'q':
                printf("***** stop cmd *****\n");
                //send_TC297_cmd(STOP_CMD);
                //send_mcu_cmd(STR_QUERY_CMD);
                break;
            case 't':
                printf("***** stop cmd *****\n");
                //send_TC297_cmd(STOP_CMD);
                //send_TC297_data();
                break;
            default:
                printf("***** arg error *****\n");
                break;
        }
//        return 0;
#endif
#if 0
    while(1)
    {
        pause();
        printf("\npause()\n");
        if(tc297_flag == false)
            break;
    }
    printf(".....Ctrl+C quit\n");
#endif
    return 0;
}
#endif

#ifdef __cplusplus
}
#endif /* end of __cplusplus */
