#include "../include/LinkedList.h"
#include <iostream>

using std::cout;

int main(){
    //it is an error no to create listInteger as an object, why ?
    LinkedList<int>* listInteger = new LinkedList<int>;
    try
    {
    listInteger->insert(12);
    listInteger->insert(13);
    listInteger->insert(14);
    listInteger->insert(15);
    listInteger->insert(16);
    listInteger->insert(17);
    }
   catch( DuplicateElementException& e)
   {


   }

   try{
	listInteger->remove(15);
   }
   catch(ElementNotFoundException& e){
	 e.printMessage();
   }


return 0;
}
