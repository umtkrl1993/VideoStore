#ifndef _INSERTIONEXCEPTION_H
#define _INSERTIONEXCEPTION_H

#include<exception>

class InsertionException:public std::exception
{
	virtual const char* what() const throw();

};




#endif
