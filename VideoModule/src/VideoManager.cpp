#include "VideoManager.h"

int VideoManager::numberOfVideos = 0 ;

LinkedList<Video>* VideoManager::videoList = new LinkedList<Video>;

bool VideoManager::checkin( const Video& vObject )
{
	bool isFound = false;
	LinkedListIterator<Video> it = VideoManager::videoList->begin();	
	while( !isFound )
	{
		if( *it == vObject )
		{
			isFound = true;
			break;
		}
		++it;
	}		

	Video& temp = *it;
	temp.increaseNumberCopy();
	return true;
}

bool VideoManager::checkout( const Video& vObject )
{


	return true;
}

void VideoManager::getParticularVideoInfo( const string& vName, Video* vObject )
{


	
} 

void VideoManager::print( const Video& vObject )
{



}

void VideoManager::print()
{



}
