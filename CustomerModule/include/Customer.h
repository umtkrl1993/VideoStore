#ifndef _Customer_H
#define _Customer_H

#include<string>
#include<thread>
#include "../../ListModule/include/LinkedList.h" //in fact no need to include LinkedList.h
#include "../../VideoModule/include/Video.h"
#include "../../VideoModule/include/VideoManagerSingleton.h"

class Customer
{

public:
    Customer();
    ~Customer();
    void checkIn( std::string& vName );
    void checkout( std::string& vName );
    void performOperations( int interval );
    std::thread initThreads( int interval );

private:
    LinkedList<Video> ownedVideos;
    std::string name;

};


#endif
