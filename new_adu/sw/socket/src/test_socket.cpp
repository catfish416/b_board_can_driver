#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <malloc.h>
#include <sys/ioctl.h>
#include <stdarg.h>
#include <fcntl.h>
#include <linux/un.h>
#include <getopt.h>

#include "socket_hal_pub.h"

#define PADBIT (8)
#if 0
/**
 * Routine to send msg to driver
 *
 * @param module_id - module index
 * @param data - pointer to data to transmit
 * @param lenth -  data buffer length
 *
 * @return 0 if successful; error -1
 */

int send_socket_data_api(int module_id, char* data, int lenth)
{
    if (NULL == data || lenth >= MAX_SOCKET_DATA_LENGTH || lenth <= 0)
    {
        printf("intput error\n");
        return -1;
    }

    SOCKET sclient = socket(PF_LOCAL, SOCK_STREAM, 0);
    if (sclient == INVALID_SOCKET)
    {
        printf("invalid socket !\n");
        return -1;
    }

    sockaddr_un cltAddr;
    (void)memset(&cltAddr, 0, sizeof(cltAddr));
    cltAddr.sun_family = AF_LOCAL;
    strncpy(cltAddr.sun_path, "/tmp/oshal_socket_server_path", UNIX_PATH_MAX - 1);
    if (connect(sclient, (sockaddr *)&cltAddr, sizeof(cltAddr)) == SOCKET_ERROR)
    {
        printf("connect error !\n");
        closesocket(sclient);
        return -1;
    }
/*
    char* sendData = (char*)malloc(sizeof(char) * (lenth + 1 + PADBIT));
    if (NULL == sendData)
    {
        printf("malloc failed !\n");
        closesocket(sclient);
        return -1;
    }
    (void)memset(sendData, 0, lenth + 1);
    
    if (snprintf(sendData, lenth + PADBIT, "%d:%s", module_id, (char*)data) < 0)
    {
        printf("snprintf failed!\n");
        closesocket(sclient);
        free(sendData);
        return -1;
    }
*/
    //int pid = -1;
    //if ((pid = fork()) < 0)
    //    perror("fork error");
    //else if(pid > 0)
    //{
    //    printf("send data proc\n");

        //char sendData[MAX_SOCKET_DATA_LENGTH + 8] = {};
        char* sendData = (char*)malloc(sizeof(char) * (lenth + 1 + PADBIT));
        if (NULL == sendData)
        {
            printf("malloc failed !\n");
            closesocket(sclient);
            return -1;
        }
        (void)memset(sendData, 0, lenth + 1);

        if (snprintf(sendData, lenth + PADBIT, "%d:%s", module_id, (char*)data) < 0)
        {
            printf("snprintf failed!\n");
            closesocket(sclient);
            free(sendData);
            return -1;
        }
        if (send(sclient, sendData, strlen(sendData) + 1, 0) < 0)
        {
            printf("send error !\n");
            closesocket(sclient);
            free(sendData);
            return -1;
        }
        free(sendData);
    //}
    //else
    //{
        printf("recv data proc\n");
        char recData[MAX_SOCKET_DATA_LENGTH];
        int ret = recv(sclient, recData, MAX_SOCKET_DATA_LENGTH, 0);
        if (ret < 0)
        {
            printf("recv data failed\n");
            return -1;
        }
        recData[ret] = 0x00;
        printf("%s\n", recData);
    //}

    printf("44444\n\n");
    closesocket(sclient);
    return 0;
}
#endif

int send_socket_data_api(int module_id, char* data, int lenth, const char *port)
{
    if (NULL == data || lenth >= MAX_SOCKET_DATA_LENGTH || lenth <= 0)
    {
        printf("intput error\n");
        return -1;
    }

    SOCKET sclient = socket(PF_LOCAL, SOCK_STREAM, 0);
    if (sclient == INVALID_SOCKET)
    {
        printf("invalid socket !\n");
        return -1;
    }

    sockaddr_un cltAddr;
    (void)memset(&cltAddr, 0, sizeof(cltAddr));
    cltAddr.sun_family = AF_LOCAL;
    strncpy(cltAddr.sun_path, port, UNIX_PATH_MAX - 1);
    if (connect(sclient, (sockaddr *)&cltAddr, sizeof(cltAddr)) == SOCKET_ERROR)
    {
        printf("connect error !\n");
        closesocket(sclient);
        return -1;
    }

    char* sendData = (char*)malloc(sizeof(char) * (lenth + 1 + PADBIT));
    if (NULL == sendData)
    {
        printf("malloc failed !\n");
        closesocket(sclient);
        return -1;
    }
    (void)memset(sendData, 0, lenth + 1);

    if (snprintf(sendData, lenth + PADBIT, "%d:%s", module_id, (char*)data) < 0)
    {
        printf("snprintf failed!\n");
        closesocket(sclient);
        free(sendData);
        return -1;
    }
    if (send(sclient, sendData, strlen(sendData) + 1, 0) < 0)
    {
        printf("send error !\n");
        closesocket(sclient);
        free(sendData);
        return -1;
    }
    free(sendData);

    printf("recv data proc\n");
    char recData[MAX_SOCKET_DATA_LENGTH];
    int ret = recv(sclient, recData, MAX_SOCKET_DATA_LENGTH, 0);
    if (ret < 0)
    {
        printf("recv data failed\n");
        return -1;
    }
    recData[ret] = 0x00;
    printf("%s\n", recData);

    closesocket(sclient);
    return 0;
}

/******************************************************************************
* 创建并绑定一个socket作为服务器
* 返回值：fd
******************************************************************************/
int create_and_bind(const char *port)
{
    if (NULL == port)
    {
        perror("create_and_bind input NULL");
        return -1;
    }

    //SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);  // ipv4, TCP

    SOCKET serverfd = socket(PF_LOCAL, SOCK_STREAM, 0);
    if (serverfd == INVALID_SOCKET)
    {
        printf("socket error !");
        return -1;
    }

    /* set port reuse */
    int on = 1;
    int ret = setsockopt(serverfd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)) < 0;
    if (ret < 0)
    {
        printf("setsocketopt error !");
        closesocket(serverfd);
        return -1;
    }

    /* bind IP & port */
    /*
    sockaddr_in sin;
    memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = inet_addr(SOCKET_SERVER_ADDR);    //trans char * to in_addr_t
    sin.sin_port = htons(SOCKET_PORT);
    //   sin.sin_addr.s_addr = INADDR_ANY;
    */

    unlink(port);  /* in case it already exists */
    struct sockaddr_un sun;
    (void)memset(&sun, 0, sizeof(sun));
    sun.sun_family = AF_LOCAL;
    strncpy(sun.sun_path, port, UNIX_PATH_MAX - 1);

    ret = bind(serverfd, (LPSOCKADDR)&sun, sizeof(sun));
    if (SOCKET_ERROR == ret)
    {
        printf("bind error !\n");
        closesocket(serverfd);
        return -1;
    }

    printf("bind %d to %s success\n", serverfd, port);

    return serverfd;
}

int create_socket_server(const char *port)
{
    int serverfd = create_and_bind(port);
    if (serverfd < 0)
        return -1;

    /* listen port */
    if (listen(serverfd, MAX_SOCKET_CONN_LIMIT) == SOCKET_ERROR)
    {
        printf("listen error !\n");
        closesocket(serverfd);
        return -1;
    }

    while(1)
    {
        /* accept */
        struct sockaddr_un remoteAddr;
        (void)memset(&remoteAddr, 0, sizeof(remoteAddr));
        socklen_t nAddrlen = sizeof(remoteAddr);

        printf("server %d waiting for new connection...\n", serverfd);
        /* Block here. Until server accpets a new connection. */
        SOCKET sClient = accept(serverfd, (struct sockaddr *)&remoteAddr, &nAddrlen);
        if (sClient == INVALID_SOCKET)
        {
            printf("accept error !");
            continue;   // ignore current socket ,continue while loop.
        }
        printf("A new connection occurs:%s fd = %d \r\n", remoteAddr.sun_path, sClient);

        /* receive socket data */
        char revData[MAX_SOCKET_DATA_LENGTH];

        int ret = recv(sClient, revData, MAX_SOCKET_DATA_LENGTH, 0); // TODO:循环读取直至数据全被读出完毕
        if (ret < 0)
        {
            printf("recv error !");
            continue;
        }
        revData[ret] = 0x00;

        printf("test server revData: %s\n", revData);
        closesocket(sClient);
    }

    closesocket(serverfd);
    return 0;
}

#define PRESS_TEST_2_POW_NUM 2
#define TEST_PORT_MAP "/tmp/oshal_socket_server_map"
#define TEST_PORT_PATH "/tmp/oshal_socket_server_path"
#define SEND_MSG_NUM 4

static void mul_process_press_test(void)
{
    char sendData[] = "hello，TCP server，this is mul process press test";

    /* pid press test */
    for (int i = 0; i < PRESS_TEST_2_POW_NUM; i++)
    {
        fork();
        printf("pid: %d\n", getpid());
        send_socket_data_api(MODULE_MAP, sendData, strlen(sendData), SOCKET_SERVER);
        printf("send over pid: %d. test %d/\%d\n", getpid(), i + 1, PRESS_TEST_2_POW_NUM);
    }

    return;
}

static void loop_test(void)
{
    char sendData[] = "hello，TCP server，this is from client!xxxx";

    char output[MAX_SOCKET_DATA_LENGTH - 1] = {};
    for(int i = 0; i < SEND_MSG_NUM; i++)
    {
        (void)memset(output, 0, sizeof(output));
        (void)snprintf(output, strlen(sendData) + 8, "%s, %d\n", sendData, i);
        send_socket_data_api(MODULE_PATH, output, strlen(output), SOCKET_SERVER);
    }

    return;
}

/* this function is for unit test */
int main(int argc, char* argv[])
{
    char *cmd = argv[0];

    char optstring[] = "lp";    // p:mul process press; l:loop test
    int opt = getopt(argc, argv, optstring);
    if (-1 == opt)
    {
        printf("getopt error\n");
        return 0;
    }


    int pid = -1;
    if ((pid = fork()) < 0)
        perror("fork error");
    else if(pid > 0)
    {
        printf("recv data proc\n");
        //create_socket_server(TEST_PORT_MAP);
        create_socket_server(TEST_PORT_PATH);
    }
    else
    {
        printf("send data proc\n");
        //send_socket_data_api(MODULE_MAP, sendData, strlen(sendData), SOCKET_SERVER);
        switch(opt)
        {
            case 'l':
                printf("loop test\n");
                loop_test();
                break;
            case 'p':
                printf("press test\n");
                mul_process_press_test();
                break;
            default:
                printf("arg error\n");
                break;
        }


    }

    #if 0
    char output[MAX_SOCKET_DATA_LENGTH - 1] = {};
    for(int i = 0; i < 4; i++)
    {
        (void)memset(output, 0, sizeof(output));
        (void)snprintf(output, strlen(sendData) + 8, "%s, %d\n", sendData, i);
        // for test
        if (i%2 == 0)
        {
            if (send_socket_data_api(MODULE_MAP, output, strlen(output)) < 0)
            {
                printf("send_socket_data_api failed!\n");
                return -1;
            }
        }
        else
        {
            if (send_socket_data_api(MODULE_PATH, output, strlen(output)) < 0)
            {
                printf("send_socket_data_api failed!\n");
                return -1;
            }
        }
        sleep(1);
    }
    #endif

    return 0;
}
