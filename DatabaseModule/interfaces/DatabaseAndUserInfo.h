#ifndef _DATABASEANDUSERINFO_H
#define _DATABASEANDUSERINFO_H

typedef struct DatabaseAndUserInfo
{
	std::string m_dbname;
	std::string m_username;
	std::string m_password;
	std::string m_host;
	std::string m_port;

	DatabaseAndUserInfo( const std::string& p_dbname,  const std::string& p_username, const std::string& p_password, const std::string& p_host, const std::string& p_port ):
			m_dbname( p_dbname ),
			m_username( p_username ),
			m_password( p_password ),
			m_host( p_host ),
			m_port( p_port )
		{

		}

}DatabaseAndUserInfo;



#endif
