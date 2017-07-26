#include "PostgresDatabaseInterface.h"
#include <pthread.h>
#include <pqxx/pqxx>


PostgresDatabaseInterface::PostgresDatabaseInterface()
{

}

/*
 *When DatabaseAndUserInfo is provided to constructor it tries to connect to db
 */
PostgresDatabaseInterface::PostgresDatabaseInterface( const DatabaseAndUserInfo& info )
{

}

PostgresDatabaseInterface::~PostgresDatabaseInterface()
{
	delete connectionOBJ;
}

void PostgresDatabaseInterface::connectToDB( const DatabaseAndUserInfo& info )
{
	
		std::string dbname = info.m_dbname;
		std::string username = info.m_username;
		std::string password = info.m_password;
		std::string host = info.m_host;
		std::string port = info.m_port;

		try
		{
				connectionOBJ = new pqxx::connection( "dbname='"+dbname+"'  user='"+username+"'  password='"+password+"'  hostaddr='"+host+"'  port='"+port+"'" );
		}

		catch( std::exception& e )
		{
				std::cout<< "Could not connect to database" <<std::endl;
		}

}

/*
 * Maybe in the future this method could be handled by overloading >> operator
 */
void PostgresDatabaseInterface::saveVideoInformation( const VideoInfo& info ) const
{

		if( connectionOBJ != NULL && connectionOBJ->isOpen() )
		{
			
			std::string videoname = info.m_videoname;
			std::string starname1 = info.m_starname1;
			std::string starname2 = info.m_starname2;
			std::string producername = info.m_producer
			int numberofcopy = info.m_copyNumber;
			std::string snumberofcopy = std::to_string( numberofcopy );

			std::string sql = "INSERT INTO video VALUES ( '"+videoname+"', '"+starname1+"', '"+starname2+"', '"+producername+"', '"+snumberofcopy+"' ) ";

			try
			{
				pqxx::work W( *connectionOBJ );
				W.exec( sql );
				W.commit();
				std::cout << "Insertion into database is successful \n";
			}

			catch( std::exception& e )
			{
				std::cout<<e.what<<std::endl;
			}

		}

		else
		{
			std::cout<< "There is no database connection\n";
		}

}

void PostgresDatabaseInterface::getVideoInformation( VideoInfo& info, const std::string& key ) const
{

		if( connectionOBJ != NULL && connectionOBJ->isOpen() )
		{
			
		   std::string sql = "SELECT *from video where videoname='"+key+"' ";
           pqxx::nontransaction N( *connectionOBJ );
           pqxx::result R( N.exec( sql ) );

           for ( pqxx::result::const_iterator c = R.begin(); c != R.end(); ++c )
           {
               cout << "1. Row column values Video Name , StarName1, StarName2 " <<endl;
			   info.m_name = c["videoname"].as<string>();
			   info.m_star1 = c["videostarname1"].as<string>();
			   info.m_star2 = c["videostarname2"].as<string>();
			   info.m_producer = c["videoproducername"].as<string>();
			   info.m_copyNumber = c["videocopynumber"].as<int>();
			}
		}

		else
		{
			std::cout<< "There is no database connection\n";
		}
	
}
