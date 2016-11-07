#include "../include/ElementNotFoundException.h"


namespace ExceptionClasses{

ElementNotFoundException::ElementNotFoundException( string& message ){

	this->message = message;

}

void ElementNotFoundException::printMessage(){

	cout<<"Exception : " << message <<endl;
}

}

