#ifndef _FileVideoData_H
#define _FileVideoData_H

#include "VideoData.h"
#include <mutex>

class FileVideoData : public VideoData
{
public:
	~FileVideoData();
	void getVideoData( LinkedList<Video>& videoList );
	static FileVideoData* getInstance();

private:
	FileVideoData();
	FileVideoData* uniqueInstance;
	std::mutex fileMutex;
	static const char* filePath;



};




#endif
