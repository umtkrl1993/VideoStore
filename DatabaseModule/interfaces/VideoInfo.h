#ifndef _VIDEOINFO_H
#define _VIDEOINFO_H
#include<string>

typedef struct VideoInfo
{
	std::string m_videoname;
	std::string m_starname1;
	std::string m_starname2;
	std::string m_producername;
	int m_copyNumber;

	VideoInfo( const std::string& videoName, const std::string& starName1, const std::string& starName2, const std::string& producerName, int copyNumber ) :
			m_videoname( videoName ),
			m_starname1 ( starName1 ),
			m_starname2 ( starName2 ),
			m_producername ( producerName )

	{
			m_copyNumber = copyNumber;
	}

}VideoInfo:


#endif
