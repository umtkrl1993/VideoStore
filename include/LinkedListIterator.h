#ifndef LINKED_LIST_ITERATOR_H
#define LINKED_LIST_ITERATOR_H
#include"Node.h"

template<class Type>
class LinkedListIterator{
public:
   LinkedListIterator(Node<Type>* listPtr);
   Type& operator*();
   void operator++();
private:
   Node<Type>* current;
};	


#endif
