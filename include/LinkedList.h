#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include"LinkedListADT.h"

template<class Type>
class LinkedList : public LinkedListADT<Type>{
public:
    LinkedList(int capasity);
    bool insert(Type type); 
    bool remove(Type type) throw(DuplicateElementException);
    LinkedListIterator<Type>& begin();
    LinkedListIterator<Type>& end();
    Node* front();
 
    




};




#endif
