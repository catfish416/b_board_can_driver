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
#include <sys/epoll.h>
#include <string.h>

#include "socket_hal_pub.h"

#define BARRIER ':'
#define MAXEVENTS 64

SVR_PORT_S g_server_port_tbl[] = {
    {MODULE_MAP,  0, "/tmp/oshal_socket_server_map"},
    {MODULE_PATH, 0, "/tmp/oshal_socket_server_path"},
    {MODULE_SOCKET_SERVER, 0, "/tmp/oshal_socket_server"},
};

int g_epollfd = -1;
struct epoll_event *g_events = NULL;


int transfor_socket_data(char* data, int lenth, int module_id)
{
    if (NULL == data || lenth >= MAX_SOCKET_DATA_LENGTH || lenth <= 0)
    {
        printf("intput error\n");
        return -1;
    }

    printf("transfor_socket_data entry \n");

    int num = GET_ARRAY_NUM(g_server_port_tbl);
    int i;
    for (i = 0; i < num; i++)
    {
        if (module_id == g_server_port_tbl[i].index)
            break;
    }
    if (num == i)
    {
        printf("module_id: %d is not in the table\n", module_id);
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
    strncpy(cltAddr.sun_path, g_server_port_tbl[i].addr, UNIX_PATH_MAX - 1);

    if (connect(sclient, (sockaddr *)&cltAddr, sizeof(cltAddr)) == SOCKET_ERROR)
    {
        printf("connect error !\n");
        closesocket(sclient);
        return -1;
    }

    printf("transfor data to %s\n", g_server_port_tbl[i].addr);
    printf("data: %s\n", data);

    if (send(sclient, data, lenth, 0) < 0)
    {
        printf("send error !\n");
        closesocket(sclient);
        return -1;
    }
/*
    char recData[MAX_SOCKET_DATA_LENGTH];
    int ret = recv(sclient, recData, MAX_SOCKET_DATA_LENGTH, 0);
    if (ret < 0)
    {
        printf("recv data failed\n");
        return -1;
    }
    recData[ret] = 0x00;
    printf("recieve data: %s\n", recData);
*/
    closesocket(sclient);
    return 0;
}

void* socket_data_handle(void* arg)
{
    printf("socket_data_handle entry \n");

    SOCKET fd = *((SOCKET*)arg);
    char revData[MAX_SOCKET_DATA_LENGTH];

    /* receive socket data */
    int ret = recv(fd, revData, MAX_SOCKET_DATA_LENGTH, 0); // TODO:循环读取直至数据全被读出完毕
    if (ret < 0)
    {
        printf("recv error !");
        return NULL;
    }
    revData[ret] = 0x00;

    printf("socket_data_handle revData: %s\n", revData);
    
    int moduleID = -1;
    (void)sscanf(revData, "%d:", &moduleID);
    char* p = strchr(revData, BARRIER);
    if (NULL == p)
    {
        printf("data format error !\n");
        return NULL;
    }
    char* rawData = p + 1;

    //printf("server recv data: %s\n", rawData);

    /* send socket data */
    // TODO: 消息转发到对应进程
    if (transfor_socket_data(rawData, strlen(rawData) + 1, moduleID) < 0)
    {
        printf("send_socket_data error !\n");
        return NULL;
    }

    /*
    switch (moduleID)
    {
        case MODULE_MAP:
            //TODO: handle msg to MAP
            printf("moduleID:%d, MAP data:%s\n", moduleID, rawData);
            if (send_socket_data(rawData, strlen(rawData)  + 1, MODULE_MAP) < 0)
            {
                printf("send_socket_data error !\n");
                return NULL;
            }
            break;
        case MODULE_PATH:
            //TODO: handle msg to PATH
            printf("moduleID:%d, PATH data:%s\n", moduleID, rawData);
            break;
        default:
            break;
    }
    */

    /* send socket data */
    //char sendData[] = "this data is from server, socket data received\n";
    //send(fd, sendData, strlen(sendData), 0);    // TODO: 做双向通信通道
}

void accept_conn(int serverfd, __attribute__((unused))int epollfd)
{
    struct sockaddr_un remoteAddr;
    (void)memset(&remoteAddr, 0, sizeof(remoteAddr));
    socklen_t nAddrlen = sizeof(remoteAddr);

    printf("server %d waiting for new connection...\n", serverfd);
    /* Block here. Until server accpets a new connection. */
    SOCKET sClient = accept(serverfd, (struct sockaddr *)&remoteAddr, &nAddrlen);
    if (sClient == INVALID_SOCKET)
    {
        printf("accept error !");
        return;   // ignore current socket ,continue while loop.
    }
    printf("A new connection occurs:%s fd = %d \r\n", remoteAddr.sun_path, sClient);

    pthread_t thread_id = 0;
    if (-1 == pthread_create(&thread_id, NULL, socket_data_handle, &sClient))   // one thread processes one client
    {
        printf("pthread_create error !");
        return;  //  break while loop
    }
    (void)pthread_join(thread_id, NULL);

    closesocket(sClient);
    return;
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

static int epoll_init(void)
{
    g_epollfd = epoll_create1(0);
    if (g_epollfd == -1)
    {
        perror("epoll_create");
        return -1;
    }

    /* Buffer where events are returned */
    g_events = (struct epoll_event *)calloc(MAXEVENTS, sizeof(struct epoll_event));
    if (NULL == g_events)
    {
        perror("epoll calloc failed! ");
        return -1;
    }

    return 0;
}

static int epoll_add(int serverfd)
{
    struct epoll_event event;
    (void)memset(&event, 0, sizeof(event));
    event.data.fd = serverfd;
    event.events = EPOLLIN; // LT mode
    //  event.events = EPOLLIN | EPOLLET;

    if (epoll_ctl(g_epollfd, EPOLL_CTL_ADD, serverfd, &event) < 0)
    {
        perror("epoll_ctl");
        return -1;
    }

    return 0;
}

static void epoll_cleanup(void)
{
    if (NULL != g_events)
        free(g_events);

    if (g_epollfd > 0)
        close(g_epollfd);
}

static int is_fd_in_tbl(int fd)
{
    bool ret = false;

    int num = GET_ARRAY_NUM(g_server_port_tbl);
    for (int i = 0; i < num; i++)
    {
        if (fd == g_server_port_tbl[i].fd)
        {
            ret = true;
            printf("fd %d is in the table \n", fd);
            break;
        }
    }

    return ret;
}

int main(int argc, char* argv[])
{
    int num = GET_ARRAY_NUM(g_server_port_tbl);
    printf("num: %d\n", num);

    /* epoll 初始化 */
    if (epoll_init() < 0)
    {
        printf ("epoll_init() failed\n");
        return 0;
    }

#if 1
    /* loop table to create socket server */
    int serverfd = -1;
    for (int i = 0; i < num; i++)
    {
        /* create socket */
        serverfd = create_and_bind(g_server_port_tbl[i].addr);
        if (serverfd < 0)
        {
            printf("create socket server failed\n");
            return 0;
        }
        g_server_port_tbl[i].fd = serverfd;

        /* listen port */
        if (listen(serverfd, MAX_SOCKET_CONN_LIMIT) == SOCKET_ERROR)
        {
            printf("listen error !\n");
            closesocket(serverfd);
            return 0;
        }

        if (epoll_add(serverfd) < 0)
        {
            printf("epoll_add failed \n");
            epoll_cleanup();
            closesocket(serverfd);
            return 0;
        }
    }
#endif

    int count = 0;
    /* The event loop */
    while (1)
    {
        int n = epoll_wait(g_epollfd, g_events, MAXEVENTS, -1);
        printf("epoll_wait ret: %d, serverfd = %d\n", n, serverfd);
        for (int i = 0; i < n; i++)
        {
            if ((g_events[i].events & EPOLLERR) ||
                (g_events[i].events & EPOLLHUP) ||
                (!(g_events[i].events & EPOLLIN)))
            {
                /* An error has occured on this fd, or the socket is not
                   ready for reading (why were we notified then?) */
                fprintf(stderr, "epoll error\n");
                close(g_events[i].data.fd);
                continue;
            }
            else if (is_fd_in_tbl(g_events[i].data.fd))
            {
                /* 此fd在监听list中，则接收数据 */
                accept_conn(g_events[i].data.fd, g_epollfd);
                printf("data recv count: %d\n", ++count);
                continue;
            }
            else
            {
                /* We have data on the fd waiting to be read. Read and
                   display it. We must read whatever data is available
                   completely, as we are running in edge-triggered mode
                   and won't get a notification again for the same
                   data. */
                int done = 0;
                printf("11111111111, %d\n", g_events[i].data.fd);

                while (1)
                {
                    ssize_t count;
                    char buf[512] = {};
                    
                    count = read(g_events[i].data.fd, buf, sizeof(buf));
                    printf("buf:%s \n", buf);
                    if (count == -1)
                    {
                        /* If errno == EAGAIN, that means we have read all
                           data. So go back to the main loop. */
                        if (errno != EAGAIN)
                        {
                            perror("read");
                            done = 1;
                        }
                        break;
                    }
                    else if (count == 0)
                    {
                        /* End of file. The remote has closed the
                           connection. */
                        done = 1;
                        break;
                    }

                    /* Write the buffer to standard output */
                    int ret = write(1, buf, count);
                    if (ret == -1)
                    {
                        perror ("write");
                        abort();
                    }
                }
                if(done)
                {
                    printf ("Closed connection on descriptor %d\n",
                             g_events[i].data.fd);
                    /* Closing the descriptor will make epoll remove it
                       from the set of descriptors which are monitored. */
                    close(g_events[i].data.fd);
                }
            }
        }
    }

    epoll_cleanup();
    closesocket(serverfd);

    return 0;
}
