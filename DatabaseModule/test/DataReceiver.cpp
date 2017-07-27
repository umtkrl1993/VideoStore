#include "DataReceiver.h"
#define SHMSZ 134217728
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
void attachSM()
{

		if( ( shmid = shmget(key, SHMSZ, 0666 ) ) < 0 )
		{
			std::cerr<<"shmget";
			exit( 1 );		
		}

		if( ( shm = ( Video* ) shmat( shmid, 0, 0 ) ) == ( Video* ) -1 )
		{
			std::cerr<<"shmat";
			exit( 1 );
		}

		std::cout<< "Shared memory id " << shmid << std::endl;
		printf( "Shared memory address is %p \n", shm );
}

void readData()
{

				std::cout<<"Number of copies" << shm->numberofcopy <<std::endl;
				printf( "Video name is %s\n", shm->videoname );
}

int main()
{

	attachSM();
	readData();

	return 0;
}







