/*read_write.h*/
#ifndef _READ_WRITE_H
#define _READ_WRITE_H
ssize_t readn(int fd,void *buf,size_t count);
ssize_t writen(int fd,void *buf,size_t count);
ssize_t recv_peek(int sockfd,void *buf,size_t len);
ssize_t readline(int sockfd,void *buf,size_t maxline);
#endif