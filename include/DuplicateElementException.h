#ifndef _DuplicateElementException_H
#define _DuplicateElementException_H
#include<string>
using std::string;

namespace ExceptionClasses{

class DuplicateElementException{
public:
    DuplicateElementException(string& message);
    void printMessage();
private:
    string message;

};



}

#endif
