#include <stdlib.h>  

#include <stdio.h>  

#include <string.h>

#include <unistd.h>

#include <fcntl.h> 

#include <poll.h>
#include "hal_gpio.h"

#define MSG(args...) printf(args) 



 int gpio_export(int pin)  

{  

    char buffer[64];  

    int len;  

    int fd;  

  

    fd = open("/sys/class/gpio/export", O_WRONLY);  

    if (fd < 0) {  

        MSG("Failed to open export for writing!\n");  

        return(-1);  

    }  

  

    len = snprintf(buffer, sizeof(buffer), "%d", pin);  

    if (write(fd, buffer, len) < 0) {  

        MSG("Failed to export gpio!");  

        return -1;  

    }  

     

    close(fd);  

    return 0;  

}  


 int gpio_unexport(int pin)  

{  

    char buffer[64];  

    int len;  

    int fd;  

  

    fd = open("/sys/class/gpio/unexport", O_WRONLY);  

    if (fd < 0) {  

        MSG("Failed to open unexport for writing!\n");  

        return -1;  

    }  

  

    len = snprintf(buffer, sizeof(buffer), "%d", pin);  

    if (write(fd, buffer, len) < 0) {  

        MSG("Failed to unexport gpio!");  

        return -1;  

    }  

     

    close(fd);  

    return 0;  

} 


//dir: 0-->IN, 1-->OUT

 int gpio_direction(int pin, int dir)  

{  

    static const char dir_str[] = "in\0out";  

    char path[64];  

    int fd;  

  

    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/direction", pin);  

    fd = open(path, O_WRONLY);  

    if (fd < 0) {  

        MSG("Failed to open gpio direction for writing!\n");  

        return -1;  

    }  

  

    if (write(fd, &dir_str[dir == 0 ? 0 : 3], dir == 0 ? 2 : 3) < 0) {  

        MSG("Failed to set direction!\n");  

        return -1;  

    }  

  

    close(fd);  

    return 0;  

}  


//value: 0-->LOW, 1-->HIGH

int gpio_write(int pin, int value)  

{  

    static const char values_str[] = "01";  

    char path[64];  

    int fd;  

  

    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/value", pin);  

    fd = open(path, O_WRONLY);  

    if (fd < 0) {  

        MSG("Failed to open gpio value for writing!\n");  

        return -1;  

    }  

  

    if (write(fd, &values_str[value == 0 ? 0 : 1], 1) < 0) {  

        MSG("Failed to write value!\n");  

        return -1;  

    }  

  

    close(fd);  

    return 0;  

}


 int gpio_read(int pin)  

{  

    char path[64];  

    char value_str[3];  

    int fd;  

  

    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/value", pin);  

    fd = open(path, O_RDONLY);  

    if (fd < 0) {  

        MSG("Failed to open gpio value for reading!\n");  

        return -1;  

    }  

  

    if (read(fd, value_str, 3) < 0) {  

        MSG("Failed to read value!\n");  

        return -1;  

    }  

  

    close(fd);  

    return (atoi(value_str));

}  


// 0-->none, 1-->rising, 2-->falling, 3-->both

 int gpio_edge(int pin, int edge)

{

const char dir_str[] = "none\0rising\0falling\0both"; 

char ptr;

char path[64];  

    int fd; 

switch(edge){

case 0:

ptr = 0;

break;

case 1:

ptr = 5;

break;

case 2:

ptr = 12;

break;

case 3:

ptr = 20;

break;

default:

ptr = 0;

} 

  

    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/edge", pin);  

    fd = open(path, O_WRONLY);  

    if (fd < 0) {  

        MSG("Failed to open gpio edge for writing!\n");  

        return -1;  

    }  

  

    if (write(fd, &dir_str[ptr], strlen(&dir_str[ptr])) < 0) {  

        MSG("Failed to set edge!\n");  

        return -1;  

    }  

  

    close(fd);  

    return 0;  

}

#if 0
//GPIO1_17

int main()  

{  

int gpio_fd, ret;

struct pollfd fds[1];

char buff[10];

unsigned char cnt = 0;

//LED\u5f15\u811a\u521d\u59cb\u5316

gpio_export(115);

gpio_direction(115, 1);

gpio_write(115, 0);

//\u6309\u952e\u5f15\u811a\u521d\u59cb\u5316

gpio_export(49);

gpio_direction(49, 0);

gpio_edge(49,1);

gpio_fd = open("/sys/class/gpio/gpio49/value",O_RDONLY);

if(gpio_fd < 0){

MSG("Failed to open value!\n");  

return -1;  

}

fds[0].fd = gpio_fd;

fds[0].events  = POLLPRI;

ret = read(gpio_fd,buff,10);

if( ret == -1 )

MSG("read\n");

while(1){

ret = poll(fds,1,0);

if( ret == -1 )

MSG("poll\n");

if( fds[0].revents & POLLPRI){

ret = lseek(gpio_fd,0,SEEK_SET);

if( ret == -1 )

MSG("lseek\n");

ret = read(gpio_fd,buff,10);

if( ret == -1 )

MSG("read\n");

gpio_write(115, cnt++%2);

}

usleep(100000);

}

return 0;

}  
#endif
