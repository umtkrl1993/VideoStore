#ifndef _POSGRESDATABASEINTERFACE_H
#define _POSTGRESDATABASEINTERFACE_H

class pqxx::connection;

class PosgresDatabaseInterface : public DatabaseInterface
{
	public:
		 PosgresDatabaseInterface();
		 PostgresDatabaseInterface( const DatabaseAndUserInfo& info );
		~PostgresDatabaseInterface();
		 virtual void connectToDB( const DatabaseAndUserInfo& info );
		 virtual void saveVideoInformation( const VideoInfo& info ) const;
		 virtual void getVideoInformation( VideoInfo& info, const std::string& key ) const;

	private:
		 pqxx::connection* connectionOBJ;
};


#endif


