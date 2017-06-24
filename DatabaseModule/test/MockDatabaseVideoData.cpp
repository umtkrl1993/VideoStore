#include "MockDatabaseVideoData.h"
#include <iostream>
#include <pthread.h>


static pthread_mutex_t instanceMutex;


DatabaseVideoData* DatabaseVideoData::uniqueInstance = NULL;

using namespace std;

DatabaseVideoData::DatabaseVideoData()
{

}

DatabaseVideoData::~DatabaseVideoData()
{
	delete connectionOB;

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
	    connectionOB = new pqxx::connection(  "dbname= '.dbName.' user='.user.' password='.password.' hostaddr='.hostaddr.' port='.port.'" );
	
	    std::cout<< "Connection is successful\n";
	}

	catch( std::exception& e )
	{
	    
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

	if( connectionOB != NULL )
	{

		
	}

}


void DatabaseVideoData::saveVideoInfo( const Video& videoData )
{


}
