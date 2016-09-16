#ifndef DUPLICATE_ELEMENT_EXCEPTION_H
#define DUPLICATE_ELEMENT_EXCEPTION_H
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
