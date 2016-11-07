#ifndef _LinkedListIterator_H
#define _LinkedListIterator_H
#include "Node.h"

template<class Type>
class LinkedListIterator
{
public:
	LinkedListIterator();
	LinkedListIterator( Node<Type>* listPtr );
	LinkedListIterator( const LinkedListIterator<Type>& );
	Type& operator*();
	LinkedListIterator<Type>& operator++();
	LinkedListIterator<Type>& operator++( int );
	bool operator!=( const LinkedListIterator<Type>& it1 );
private:
	Node<Type>* current;
};	

#include "../src/LinkedListIterator.cpp"
#endif
