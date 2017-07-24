#ifndef _VIDEOINFO_H
#define _VIDEOINFO_H
#include<string>

typedef struct VideoInfo
{
	std::string m_videoName;
	std::string m_starName1;
	std::string m_starName2;
	std::string m_producerName;
	int m_copyNumber;

	VideoInfo( const std::string& videoName, const std::string& starName1, const std::string& starName2, const std::string& producerName, int copyNumber ) :
			m_videoName( videoName ),
			m_starName1 ( starName1 ),
			m_starName2 ( starName2 ),
			m_producerName ( producerName )

	{
			m_copyNumber = copyNumber;
	}

}VideoInfo:


#endif
