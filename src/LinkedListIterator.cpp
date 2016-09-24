#include "../include/LinkedListIterator.h"

template<class Type>
LinkedListIterator<Type>::LinkedListIterator( Node<Type>* listPtr ) :current( listPtr ){


}

template<class Type>
Type& LinkedListIterator<Type>::operator*(){

	Type &returnValue = current->info;

	return returnValue;

}

template<class Type>
void LinkedListIterator<Type>::operator++(){

	if( current->next != 0 ){
		current = current->next;
	}
	
}

template<class Type>
void LinkedListIterator<Type>::operator++( int dummy )
{

	if( current->next != 0 )
	{
		current = current->next;
	}
	
}
