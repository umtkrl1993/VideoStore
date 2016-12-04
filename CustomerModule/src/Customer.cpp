#include "../include/Customer.h"
#include "../include/MovieList.h"


Customer::Customer()
{
	

}

Customer::~Customer()
{

}

void Customer::performOperations( int interval )
{

	std::this_thread::sleep_for(interval);
	VideoManager* vManager = VideoManager::getInstance();
	vManager->checkout(MovieList::FRIENDS);
	//create a random number and checkout that book
	//wait some seconds then checkin that book

}

std::thread Customer::init( int interval )
{
	return std::thread( [=], { performOperations( internal ); } );
}
