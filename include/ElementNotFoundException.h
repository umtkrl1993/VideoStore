#ifndef _ElementNotFoundException_H
#define _ElementNotFoundException_H
#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::endl;
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
