#include <assert.h>
#include <string.h>
#include <sys/shm.h>
#include "shmfifo.h"

CLinuxShmFifo::CLinuxShmFifo(int key, unsigned int size,unsigned int blocks)
{
    shmfifo_init(key,size,blocks);
}

CLinuxShmFifo::~CLinuxShmFifo()
{
   shmfifo_destroy( );
}

void CLinuxShmFifo::shmfifo_init(int key, unsigned int blksize,unsigned int blocks)
{
   int shmid;
   fifo = (struct shmfifo_t *)malloc(sizeof(struct shmfifo_t));
	assert(fifo!= NULL);
	memset(fifo,0,sizeof(struct shmfifo_t));

	shmid  = shmget(key,0,0);
	int size = sizeof(struct shmhead_t) + blksize * blocks;

  if(shmid == -1)
  {
     fifo->shmid = shmget(key,size,IPC_CREAT | 0666);
	 if(fifo->shmid ==  -1)
	 {
	     ERR_EXIT("shmget fail!!");
	 }
	  fifo->p_shm = (struct shmhead_t*)shmat(fifo->shmid,NULL,0);
	 if(fifo->p_shm == (struct shmhead_t*)-1)
	 	 ERR_EXIT("shmat fail!");
	 fifo->p_payload = (unsigned char*)(fifo->p_shm+1);

	 fifo->p_shm->blksize = blksize;
	 fifo->p_shm->blocks = blocks;
	 fifo->p_shm->rd_index = 0;
	 fifo->p_shm->wd_index = 0;

	 fifo->sem_mutex = sem_create(key);
	 fifo->sem_full = sem_create(key+1);
	 fifo->sem_empty = sem_create(key+2);
	 
	 sem_setval(fifo->sem_mutex,1);
	 sem_setval(fifo->sem_full,blocks);
	 sem_setval(fifo->sem_empty,0);
	
  }
  else
  {
      printf("enter open\n");
      fifo->shmid = shmid;
	  fifo->p_shm = (struct shmhead_t*)shmat(fifo->shmid,NULL,0);
	  if(fifo->p_shm == (struct shmhead_t*)-1)
	 	 ERR_EXIT("shmat fail!!");
	  fifo->p_payload = (unsigned char*)(fifo->p_shm+1);
	  fifo->sem_mutex = sem_open(key);
	  fifo->sem_full = sem_open(key+1);
	  fifo->sem_empty = sem_open(key+2);
	 // sem_setval(fifo->sem_mutex,1);
	 // sem_setval(fifo->sem_full,blocks);
	 // sem_setval(fifo->sem_empty,0);
	  
  }
	
}

void CLinuxShmFifo::shmfifo_put(unsigned char *buf)
{
   
    sem_p(fifo->sem_full);
    sem_p(fifo->sem_mutex);
    memcpy(fifo->p_payload + fifo->p_shm->blksize* fifo->p_shm->wd_index,buf,fifo->p_shm->blksize);
	fifo->p_shm->wd_index = (fifo->p_shm->wd_index+1)%fifo->p_shm->blocks;
    sem_v(fifo->sem_mutex);
	sem_v(fifo->sem_empty);
	
   
}

void  CLinuxShmFifo::shmfifo_get(unsigned char *buf)
{
    
    sem_p(fifo->sem_empty);
    sem_p(fifo->sem_mutex);
    memcpy(buf,fifo->p_payload + fifo->p_shm->blksize* fifo->p_shm->rd_index,fifo->p_shm->blksize);
	fifo->p_shm->rd_index = (fifo->p_shm->rd_index+1)%fifo->p_shm->blocks;
    sem_v(fifo->sem_mutex);
	sem_v(fifo->sem_full);
  
   
}

void  CLinuxShmFifo:: shmfifo_destroy(void)
{
	sem_delete(fifo->sem_mutex);
	sem_delete(fifo->sem_empty);
    sem_delete(fifo->sem_full);
			
	shmdt(fifo->p_shm);
	shmctl(fifo->shmid,IPC_RMID,0);
	free(fifo);
}




int CLinuxShmFifo::sem_create(key_t key)
{
    int semid =  semget(key,1, 0666 | IPC_CREAT | IPC_EXCL);
	if(semid == -1)
	ERR_EXIT("semget fali create");
	return semid;
}

int CLinuxShmFifo::sem_open(key_t key)
{
     int semid =  semget(key,0, 0);
	if(semid == -1)
	ERR_EXIT("semget fail open");
	return semid;
}

int CLinuxShmFifo::sem_p(int semid)
{
    struct sembuf sb = {0,-1,0};
	int ret = semop(semid,&sb,1);
	if(ret==-1){
		if(errno == ERANGE)
		 ERR_EXIT("sem P fail");
		}
	  
	return ret;
}


int CLinuxShmFifo::sem_v(int semid)
	
{
    struct sembuf sb = {0,1,0};
	int ret = semop(semid,&sb,1);
	if(ret==-1)
	{
	   printf("semop=%d\n",sb.sem_op);	
	   ERR_EXIT("sem v fail");	
	}
	return ret;
}


int CLinuxShmFifo::sem_delete(int semid)
{
    int ret = semctl(semid,0,IPC_RMID,0);
	if(ret==-1)
	ERR_EXIT("sem delete fail");	
	return ret;
	
}
int CLinuxShmFifo::sem_setval(int semid,int val)
{
    union semun su;
	su.val = val;
    int ret = semctl(semid,0,SETVAL,su);
	if(ret==-1)
	ERR_EXIT("sem setval fail");	
	return ret;
}

int CLinuxShmFifo::sem_getval(int semid)
{
    int ret = semctl(semid,0,GETVAL,0);
	if(ret==-1)
	ERR_EXIT("sem getval fail");	
	
	return ret;
}
int CLinuxShmFifo::sem_setmode(int semid, char *mode)
{
   union semun su;
   struct semid_ds sem;
   su.buf = &sem;
   int ret = semctl(semid,0,IPC_STAT,su);
   if(ret==-1)
	ERR_EXIT("sem setmod IPC_STAT fail");	
   printf("current permission is %o\n",su.buf->sem_perm.mode);
   sscanf(mode,"%o",(unsigned int*)&su.buf->sem_perm.mode);
   ret = semctl(semid,0,IPC_SET,su);
   if(ret==-1)
	ERR_EXIT("sem setmod IPC_SET fail");
   printf("permissions update....\n");
   return ret;
}

int CLinuxShmFifo::sem_getmode(int semid)
{
   union semun su;
   struct semid_ds sem;
   su.buf = &sem;
   int ret = semctl(semid, 0,IPC_STAT,su);
   if(ret==-1)
	ERR_EXIT("sem setmod IPC_STAT fail");
    printf("current permissions is %o\n",su.buf->sem_perm.mode);
	return ret;
}


