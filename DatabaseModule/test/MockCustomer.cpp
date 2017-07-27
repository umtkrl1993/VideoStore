#include"MockCustomer.h"
#include<iostream>
#include<pthread.h>
#include<signal.h>
#include<stdio.h>
void deattachAndRemoveSHM();
void interruptSignalHandler( int signum )
{
     deattachAndRemoveSHM();
     exit( signum );
}

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

	std::cout<< "Shared memory id is " << shmid << std::endl;
	printf( " Shared memory address is %p \n", shm ); 

}

void write( Video* video )
{

		if( shm != NULL )
		{
			*shm = *video;
		}

		while( 1 )
		{
			sleep( 1 );
		}

}

void* video_writer_thread( void* args )
{

}


void deattachAndRemoveSHM()
{
        shmdt( shm );
        shmctl( shmid, IPC_RMID, NULL );
}       
					  

int main()
{

	Video* video = new Video;
	//std::string videoname = "blackjack";
	std::string starname1 = "umit aykurt";
	std::string starname2 = "berke aykurt";
	std::string producername = "hatice aykurt";
	
	video->videoname = new char[8];
	video->videoname[0] = 'a';
	video->videoname[1] = 'y';
	video->videoname[2] = 's';
	video->videoname[3] = 'e';
	video->videoname[4] = 'g';
	video->videoname[5] = 'u';
	video->videoname[6] = 'l';
	video->videoname[7] = '\0';

	video->starname1 = starname1;
	video->startname2 = starname2;
	video->producername = producername;
	video->numberofcopy = 10;

    signal( SIGINT, interruptSignalHandler );

	shmdt( shm );
	createSharedMemory();
	write( video );
	deattachAndRemoveSHM();

	return 0;
}
