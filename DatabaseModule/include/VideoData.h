#ifndef _VideoData_H
#define _VideoData_H

#include "../../ListModule/include/LinkedList.h"


class VideoData
{

public:
    virtual void getVideoData( LinkedList<Video>& videoList ) = 0;

};



#endif
