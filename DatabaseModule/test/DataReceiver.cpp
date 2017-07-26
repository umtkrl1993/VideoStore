#include "DataReceiver.h"
#define SHMSZ 4096
#include<stdlib.h>
#include<iostream>

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

}


void readData()
{

		while( 1 )
		{
			Video* video = shm;

			if( video != NULL )
				std::cout<<"Number of copies" << video->numberofcopy <<std::endl;

		}
}



int main()
{

	attachSM();
	readData();


	return 0;
}







