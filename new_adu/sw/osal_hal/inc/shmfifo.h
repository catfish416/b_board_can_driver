#ifndef _SHMFIFO_H_
#define _SHMFIFO_H_

#include <sys/ipc.h>
#include <sys/sem.h>
#include "define.h"

struct shmhead_t
{
    unsigned int blksize;
	unsigned int blocks;
	unsigned int rd_index;
	unsigned int wd_index;
};

typedef struct shmfifo_t
{
   struct shmhead_t *p_shm;
   unsigned char *p_payload;
   int shmid;
   int sem_mutex;
   int sem_full;
   int sem_empty;
}SHMFIFO;

union semun
{
   int val;  /*value for SETVAL*/
   struct semid_ds *buf;  /*buffer for IPC_STAT IPC_SET*/
   unsigned short *array;  /*array for GETALL  SETALL*/
   /*linux specific part*/
   struct seminfo *__buf;/*buf for info*/
};

class CLinuxShmFifo
{
	public:

       CLinuxShmFifo(int key, unsigned int blksize,unsigned int blocks);
       ~CLinuxShmFifo( );
       void shmfifo_init(int key, unsigned int blksize,unsigned int blocks);
       void shmfifo_put(unsigned char *buf);
       void shmfifo_get(unsigned char *buf);
       void shmfifo_destroy(void);

   private:
   	
   	  SHMFIFO *fifo; 
	  int sem_create(key_t key);
      int sem_open(key_t key);
      int sem_p(int semid);
      int sem_v(int semid);
      int sem_delete(int semid);
      int sem_setval(int semid,int val);
      int sem_getval(int semid);
      int sem_setmode(int semid, char *mode);
      int sem_getmode(int semid);
	  
};

#endif

