#ifndef _DatabaseAPI_H
#define _DatabaseAPI_H
#include <mutex>
#include "MockVideoData.h"
#include <pqxx/pqxx>

class DatabaseVideoData : public VideoData
{
	public:
		~DatabaseVideoData();
		static DatabaseVideoData* getInstance();
		virtual void connectToDB( const std::string& dbName, const std::string &user, const std::string& password, const std::string& host, const std::string& port );
		virtual void getVideoData( Video& video );
		virtual void saveVideoData( const Video& video );

	private:
		DatabaseVideoData();
		static DatabaseVideoData* uniqueInstance;
		pqxx::connection* connectionOBJ;


};


#endif
