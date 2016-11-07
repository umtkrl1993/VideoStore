#ifndef _VideoManagerSingleton_H            
#define _VideoManagerSingleton_H
#include "Video.h"
#include "LinkedList.h"
#include <string>

using std::string;

class VideoManager {
public:
    static VideoManager& getInstance();
    bool checkin( const Video& vObject );
    bool checkout( const Video& vObject );
	void getParticularVideoInfo( const string& vName, Video& vObject );
	void print();

private:
    VideoManager();
    LinkedList<Video>* videoList;
    int numberOfVideos;
    static VideoManager* uniqueInstance;
   
};





#endif
