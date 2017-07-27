#ifndef _MOCKCUSTOMER_H
#define _MOCKCUSTOMER_H

#include "VideoDataType.h"
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdlib.h>



#define SHMSZ 134217728

key_t key = 56780;
Video* shm = NULL;
int shmid;

void createSharedMemory();

void write( Video* video );



#endif
