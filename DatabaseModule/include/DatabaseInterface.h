#ifndef _DATABASEINTERFACE_H
#define _DATABASEINTERFACE_H
#include<string>

class DatabaseInterface
{
		virtual void connectToDB( const DatabaseAndUserInfo& info ) = 0;
		virtual void saveVideoInformation( const VideoInfo& info ) const = 0;
		virtual void getVideoInformation( VideoInfo& info, const std::string& key ) const = 0 ;
};




#endif
