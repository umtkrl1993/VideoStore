#ifndef LINKED_LIST_ADT_H
#define LINKED_LIST_ADT_H
#include"Node.h"
#include"DuplicateElementException.h"
#include"LinkedListIterator.h"
using ExceptionClasses::DuplicateElementException;

template<class Type>
class LinkedListADT{
public:
    virtual bool insert(Type type) = 0;
    virtual bool remove(Type type) throw(DuplicateElementException) = 0;
    virtual LinkedListIterator<Type>& begin() = 0;
    virtual LinkedListIterator<Type>& end() = 0;
    virtual Node<Type>* front() = 0;

protected:
    Node<Type>* head;
    Node<Type>* last;
};


#endif
