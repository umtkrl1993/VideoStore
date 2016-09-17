#ifndef LINKED_LIST_ADT_H
#define LINKED_LIST_ADT_H
#include"Node.h"
#include"DuplicateElementException.h"
#include"ElementNotFoundException.h"
#include"LinkedListIterator.h"
using ExceptionClasses::DuplicateElementException;
using ExceptionClasses::ElementNotFoundException;

template<class Type>
class LinkedListADT{
public:
    virtual void insert(Type type) throw(DuplicateElementException)= 0;
    virtual bool remove(Type type) throw(ElementNotFoundException) = 0;
    virtual LinkedListIterator<Type>& begin() = 0;
    virtual LinkedListIterator<Type>& end() = 0;
    virtual Node<Type>* front() = 0;
};


#endif