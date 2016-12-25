#ifndef _DatabaseAPI_H
#define _DatabaseAPI_H
#include <mutex>
#include "VideoData.h"
#include <pqxx/pqxx>

class DatabaseVideoData : public VideoData
{
	public:
		~DatabaseVideoData();
		static DatabaseVideoData* getInstance();
		virtual void getVideoData( Video& video );
		virtual void saveVideoData( const Video& video );

	private:
		DatabaseVideoData();
		static DatabaseVideoData* uniqueInstance;


};


#endif
