#ifndef _DuplicateElementException_H
#define _DuplicateElementException_H
#include <string>
#include <iostream>

using std::string;
using std::cout;

namespace ExceptionClasses{

class DuplicateElementException{
public:
	DuplicateElementException();
    DuplicateElementException(string& message);
    void printMessage();
private:
    string message;

};



}

#endif
