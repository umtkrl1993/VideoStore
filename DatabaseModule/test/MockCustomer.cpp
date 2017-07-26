#include"MockCustomer.h"
#include<iostream>



void createSharedMemory()
{

	if( ( shmid = shmget(key, SHMSZ, IPC_CREAT | 0666 ) ) < 0 )
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


void write( const Video* video )
{

		if( shm != NULL )
		{
			*shm = *video;
		}

		while( 

}



int main()
{

	Video* video = new Video;
	char videoname[20] = "blackjack";
	char starname1[20] = "umit aykurt";
	char starname2[20] = "berke aykurt";
	char producername[20] = "hatice aykurt";
	

	video->videoname = &videoname[0];
	video->starname1 = &starname1[0];
	video->startname2 = &starname2[0];
	video->producername = &producername[0];
	video->numberofcopy = 10;

	write( video );

	return 0;
}
