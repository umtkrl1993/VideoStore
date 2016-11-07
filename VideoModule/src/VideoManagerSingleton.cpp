#include "../include/VideoManagerSingleton.h"

VideoManager VideoManager::uniqueInstance = NULL ;

VideoManager::VideoManager(){

	videoList = new LinkedList<Video>;

	for( LinkedListIterator it = videoList->begin(); it !=

	

}


VideoManager& VideoManager::getInstance(){

	if( uniqueInstance == NULL ){

		uniqueInstance = new VideoManager;
	}	
	
	return uniqueInstance;
}

bool VideoManagerSingleton::checkin( const Video& vObject ){
	
	

	return true;
}

bool VideoManagerSingleton::checkout( const Video& vObject ){


	return true;
}

void VideoManagerSingleton::getParticularVideoInfo( const string& vName, Video* vPointer){

	

}

void VideoManagerSingleton::print(){



}
