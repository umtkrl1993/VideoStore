#ifndef _DATARECEIVER_H
#define _DATARECEIVER_H


#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include"VideoDataType.h"

key_t key = 56780;
Video* shm;
int shmid;

void attachSM();


void readData();



#endif
