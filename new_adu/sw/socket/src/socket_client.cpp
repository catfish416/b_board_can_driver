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

#include "socket_hal_pub.h"


int main(int argc, char* argv[])
{
    SOCKET sclient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(sclient == INVALID_SOCKET)
    {
        printf("invalid socket !");
        return 0;
    }

    sockaddr_in serAddr;
    (void)memset(&serAddr, 0, sizeof(serAddr));
    serAddr.sin_family = AF_INET;
    serAddr.sin_port = htons(SOCKET_PORT);
    serAddr.sin_addr.s_addr = inet_addr(SOCKET_SERVER_ADDR);    //trans char * to in_addr_t
    if (connect(sclient, (sockaddr *)&serAddr, sizeof(serAddr)) == SOCKET_ERROR)
    {
        printf("connect error !");
        closesocket(sclient);
        return 0;
    }
    char sendData[] = "hello，TCP server，this is client!\n";
    send(sclient, sendData, strlen(sendData), 0);

    char recData[MAX_SOCKET_DATA_LENGTH];
    int ret = recv(sclient, recData, MAX_SOCKET_DATA_LENGTH, 0);
    if(ret > 0)
    {
        recData[ret] = 0x00;
        printf("%s\n", recData);
    }

    closesocket(sclient);
    return 0;
}
