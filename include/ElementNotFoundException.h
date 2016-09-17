#ifndef ELEMENT_NOT_FOUND_EXCEPTION_H
#define ELEMENT_NOT_FOUND_EXCEPTION_H
#include<string>
using std::string;

namespace ExceptionClasses{

class ElementNotFoundException{
public:
    ElementNotFoundException(string& message);
    void printMessage();

private:
    string message;

};

}


#endif
