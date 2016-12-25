#ifndef _VideoData_H
#define _VideoData_H

#include "../../VideoModule/include/Video.h"


class VideoData
{

public:
    virtual void getVideoInfo( Video& videoData ) = 0;
    virtual void saveVideoInfo( const Video& videoData ) = 0;

};



#endif
