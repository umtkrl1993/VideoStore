#include "../include/Database.h"

DatabaseVideoData* DatabaseVideoData::uniqueInstance = NULL;



DatabaseVideoData::DatabaseVideoData()
{
	isListCreated = false;
}


DatabaseVideoData* DatabaseVideoData::getInstance()
{
	databaseMutex.lock();
	if( uniqueInstance == NULL )
	{
		uniqueInstance = new DatabaseVideoData;
	}
	databaseMutex.unlock();

	return uniqueInstance;
}

void DatabaseVideoData::getVideoData( LinkedList<Video>& movieList )
{
	int counter = 0;
	int iNumberOfVideo = 0;
	int numberOfCopy = 0;
	std::string name = " ";
	std::string star1 = " ";
	std::string star2 = " ";
	std::string producer = " ";
	std::string director = " ";
	std::fstream file;
	std::string sNumberOfVideo;

	file.open( filePath,std::fstream::in );
	getline( file, numberOfVideo );

	iNumberOfVideo = std::atoi( line.c_str() );

	while( counter < numberOfVideo )
	{
		getline( file, name );
		getline( file, star1 );
		getline( file, star2 );
		getline( file, producer );
		getline( file, director );
		getline( file, numberOfCopy );
		numberOfCopy = std::atoi( numberOfCopy.c_str() );
		Video v( name, star1, star2, producer, director, numberOfCopy );
		movieList.insert(v);
		counter++;
	}


}
