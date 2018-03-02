#define INVALID_SOCKET -1
#define SOCKET_ERROR   -1
#define PSOCKADDR struct sockaddr *
#define LPSOCKADDR struct sockaddr *
#define SOCKADDR_IN sockaddr_in
#define HOSTENT struct hostent
#define PHOSTENT struct hostent *
#define PSOCKLEN_T (socklen_t*)
#define LPCSTR void *

typedef int SOCKET;

#define closesocket(A) close(A)
#define GET_ARRAY_NUM(array) (sizeof(array)/sizeof(array[0]))

#define SOCKET_PORT 8888
#define MAX_SOCKET_CONN_LIMIT 5
#define MAX_SOCKET_DATA_LENGTH (5*1024)   // 5k
#define SOCKET_SERVER_ADDR "127.0.0.1"
#define SOCKET_SERVER "/tmp/oshal_socket_server"

enum module_id {
    MODULE_MAP = 0,
    MODULE_PATH = 1,
    MODULE_SOCKET_SERVER,
};

struct socket_data {
    enum module_id moduleID;
    void* data;
    int length;
};

typedef struct server_port {
    int index;
    int fd;
    char addr[UNIX_PATH_MAX];
}SVR_PORT_S;

/**
 * Routine to send msg to driver
 *
 * @param module_id - module index
 * @param data - pointer to data to transmit
 * @param lenth -  data buffer length
 *
 * @return 0 if successful; error -1
 */
int send_socket_data_api(int module_id, char* data, int lenth);