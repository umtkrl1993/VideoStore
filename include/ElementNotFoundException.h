#ifndef _ElementNotFoundException_H
#define _ElementNotFoundException_H
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
