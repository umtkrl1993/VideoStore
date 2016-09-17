#include"../include/LinkedList.h"
#include<iostream>

using std::cout;

int main(){

    LinkedList<int> listInteger(20);
    listInteger.insert(12);
    listInteger.insert(13);
    listInteger.insert(14);
    listInteger.insert(15);
    listInteger.insert(16);
    listInteger.insert(17);

   try{
	listInteger.remove(15);
   }
   catch(DuplicateElementException& e){
	cout <<e.message()<<'\n';
   }


return 0;
}
