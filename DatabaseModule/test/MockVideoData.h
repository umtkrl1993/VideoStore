#ifndef _VideoData_H
#define _VideoData_H
#include<string>

typedef struct
{

std::string m_name;
std::string m_start1;
std::string m_start2;
std::string m_producer;
int m_copyNumber
}Video;

class VideoData
{

public:
    virtual void getVideoInfo( Video& videoData ) = 0;
    virtual void saveVideoInfo( const Video& videoData ) = 0;

};



#endif
