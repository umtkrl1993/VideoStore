#include "../include/VideoManagerSingleton.h"



VideoManager* VideoManager::uniqueInstance = NULL ;

VideoManager::VideoManager()
{


}

/*
 * There must be one object of this class because there is only one video list
 */
VideoManager* VideoManager::getInstance()
{
	videoMutex.lock();
	if( uniqueInstance == NULL )
	{
		uniqueInstance = new VideoManager;
	}	
	videoMutex.unlock();
	
	return uniqueInstance;
}

/**
 * @parameter a video object to checkin
 * @return true if video is found in the list
 * Actually comparing just video names and increasing the number of copies might be better !
 */
bool VideoManager::checkin( const Video& vObject )
{
	bool isVideoFound = false;

	for( LinkedListIterator<Video> it = videoList.begin(); it != videoList.end(); it++ )
	{
		if( *it == vObject )
		{
			(*it).increaseNumberCopy();
			isVideoFound = true;
			break;
		}
	}
	
	return isVideoFound;
}

/**
 * @parameter a video object to checkout
 * @return true if video is found in the list and remaining number > 0
 */
bool VideoManager::checkout( const Video& vObject )
{
	bool isVideoFound = false;

	for( LinkedListIterator<Video> it = videoList.begin(); it != videoList.end(); it++ )
	{
		if( *it == vObject )
		{
			Video& video = (*it);

			if ( video.isVideoAvailable() == true )
			{
				isVideoFound == true;
				video.decreaseNumberCopy();
			}
		}
	}
	return isVideoFound;
}

/*
 * @parameter vName which is video name to get its info
 * vPointer to fill with video info
 */
void VideoManager::getParticularVideoInfo( const string& vName, Video* vPointer)
{

}

void VideoManager::print()
{



}
