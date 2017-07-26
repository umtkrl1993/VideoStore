#ifndef _MOCKCUSTOMER_H
#define _MOCKCUSTOMER_H

#include "VideoDataType.h"
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <stdlib.h>



#define SHMSZ 4096

key_t key = 5678;
Video* shm = NULL;
int shmid;

void createSharedMemory();

void write( const Video* video );



#endif
