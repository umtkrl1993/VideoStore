#ifndef _DatabaseAPI_H
#define _DatabaseAPI_H
#include <fstream>
#include <mutex>
#include "VideoData.h"



class DatabaseVideoData : public VideoData
{
	public:
	~DatabaseVideoData();
	static DatabaseVideoData* getInstance();
	void getVideoData( LinkedList<Video>& );

	private:
	DatabaseVideoData();
	DatabaseVideoData* uniqueInstance;
	bool isListCreated;
	static std::mutex databaseMutex;


};


#endif
