#include "MockDatabaseVideoData.h"
#include <iostream>
#include <pthread.h>


static pthread_mutex_t instanceMutex;


DatabaseVideoData* DatabaseVideoData::uniqueInstance = NULL;


DatabaseVideoData::DatabaseVideoData()
{

}

DatabaseVideoData::~DatabaseVideoData()
{
	delete connectionOBJ;
}

DatabaseVideoData* DatabaseVideoData::getInstance()
{
	pthread_mutex_lock( &instanceMutex );
	if( uniqueInstance == NULL )
	{
		uniqueInstance = new DatabaseVideoData;
	}
	pthread_mutex_unlock( &instanceMutex );

	return uniqueInstance;
}


void DatabaseVideoData::connectToDB( const std::string& dbName, const std::string& user, const std::string& password, const std::string& host, const std::string& port )
{

	try
	{
	    std::cout<< "Trying to connect to database\n";
	    connectionOBJ = new pqxx::connection(  "dbname='"+dbName+"'  user='"+user+"'  password='"+password+"'  hostaddr='"+host+"'  port='"+port+"'" );
	
	    std::cout<< "Connection is successful\n";
	}

	catch( std::exception& e )
	{
	    std::cout<<e.what()<<std::endl;
	}

	
}
 
void DatabaseVideoData::getVideoInfo( Video& video )
{

   /**
    try
    {
      pqxx::connection connectToVideoDB( "dbname=Video user=postgres password=123456 hostaddr=127.0.0.1 port=5432" );

       if( connectToVideoDB.is_open() )
       {
           std::string sql = "SELECT id, name, age from company";
           pqxx::nontransaction N( connectToVideoDB );
           pqxx::result R( N.exec( sql ) );

           for ( pqxx::result::const_iterator c = R.begin(); c != R.end(); ++c )
           {
               cout << "1. Row column values Video Name , StarName1, StarName2 " <<endl;
               cout<< "Name =" << c["id"].as<string>() <<endl;
               cout<< "StarName1" <<c["name"].as<string>() <<endl;
               cout<< "StarName2" <<c["age"].as<string>() <<endl;

           }
           connectToVideoDB.disconnect();
       }

       else
       {

       }
    }

    catch( std::exception &e )
    {
        cout << e.what();
    }

  */

	if( connectionOBJ != NULL )
	{
		std::string sql = "SELECT videoname, videostarname1, videostarname2, videoproducername, videocopynumber from video";
		pqxx::nontransaction N(*connectionOBJ);
		pqxx::result R( N.exec( sql ) );
		
			
	}

}


void DatabaseVideoData::saveVideoInfo( const Video& videoData )
{
	if( connectionOBJ != NULL )
	{
		std::string name = videoData.m_name;
		std::string star1 = videoData.m_star1;
		std::string star2 = videoData.m_star2;
		std::string producer = videoData.m_producer;
		int copyNumber = videoData.m_copyNumber;
		std::string sCopyNumber = std::to_string(copyNumber);

		std::string sql = "INSERT INTO video VALUES ('"+name+"', '"+star1+"', '"+star2+"', '"+producer+"', '"+sCopyNumber+"') ";
	
		try
		{
			pqxx::work W(*connectionOBJ);
			W.exec(sql);
			W.commit();
		}

		catch( std::exception& e)
		{
			std::cout<< e.what()<<std::endl;
		}
	}
}
