#ifndef _LinkedList_H
#define _LinkedList_H
#include "LinkedListADT.h"

template<class Type>
class LinkedList : public LinkedListADT<Type>{
public:
    LinkedList();
    LinkedList(LinkedList<Type>& list); // copy constructor
    virtual ~LinkedList();
    virtual void insert(Type type) throw ( DuplicateElementException ); 
    virtual bool remove(Type type) throw ( ElementNotFoundException );
    LinkedListIterator<Type> begin();
    LinkedListIterator<Type> end();
    Node<Type>* front();

protected:
    Node<Type>* head;
    Node<Type>* last; 

};

#include "../src/LinkedList.cpp"
#endif
