#include "../include/DuplicateElementException.h"

namespace ExceptionClasses{

DuplicateElementException::DuplicateElementException()
{


}

DuplicateElementException::DuplicateElementException( string& message ){

	this->message = message;

}

void DuplicateElementException::printMessage(){

	cout<<"Exception : " << message << '\n';

}

}
