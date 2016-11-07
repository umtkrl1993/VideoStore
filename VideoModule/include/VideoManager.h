#ifndef _VideoManager_H
#define _VideoManager_H
#include "Video.h"
#include "LinkedList.h"
#include <string>

using std::string;

class VideoManager
{
public:
    static bool checkin( const Video& vObject);
    static bool checkout( const Video& vObject);
    static void getParticularVideoInfo( const string& vName ,Video* vObject);
    static void print( const Video& vObject );
    static void print();

private:
    static LinkedList<Video>* videoList;    
    static int numberOfVideos;

};



#endif
