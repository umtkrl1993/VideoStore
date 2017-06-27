#include "MockDatabaseVideoData.h"
#include<iostream>

typedef struct
{
	std::string m_name;
	std::string m_star1;
	std::string m_star2;
	std::string m_producer;
	int m_copyNumber;
	DatabaseVideoData* database;	

}ThreadArgs;

void* insertVideoToDB( void* args )
{
	ThreadArgs argList = *(ThreadArgs*)args;
	Video videoInfo = { argList.m_name, argList.m_star1, argList.m_star2, argList.m_producer ,argList.m_copyNumber };
	DatabaseVideoData* db = argList.database;

	db->saveVideoInfo( videoInfo );
}



int main()
{
	
	DatabaseVideoData* database = DatabaseVideoData::getInstance();

	std::string dbname = "postgres";
	std::string user = "postgres";
	std::string password = "umt.ays.1993";
	std::string host = "127.0.0.1";
	std::string port = "5432";
	
	Video videoInfo;
	videoInfo.m_name = "Demo Video";
	videoInfo.m_star1 = "umit";
	videoInfo.m_star2 = "berke";
	videoInfo.m_producer = "berkay";
	videoInfo.m_copyNumber = 12;

	database->connectToDB( dbname, user, password, host, port );
	//database->saveVideoInfo( videoInfo );

	pthread_t thread;
	ThreadArgs arg = { "Demo 2","udoh", "vesely","obradovic",1,database};

	int rc = pthread_create(&thread, NULL, insertVideoToDB, (void*)&arg );

	pthread_join( thread , NULL ); 
	

	return 0;
}
