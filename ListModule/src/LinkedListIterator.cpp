#include "../include/LinkedListIterator.h"

template<class Type>
LinkedListIterator<Type>::LinkedListIterator()
{


}

template<class Type>
LinkedListIterator<Type>::LinkedListIterator( Node<Type>* listPtr ) :current( listPtr )
{


}

template<class Type>
LinkedListIterator<Type>::LinkedListIterator( const LinkedListIterator<Type>& it )
{


}

template<class Type>
Type& LinkedListIterator<Type>::operator*()
{

	Type& returnValue = current->info;

	return returnValue;

}


// do not decleare this function as void , instead return LinkedListIterator*
template<class Type>
LinkedListIterator<Type>& LinkedListIterator<Type>::operator++()
{

	if( current->next != 0 )
	{
		current = current->next;
	}

	return *this;	
}

template<class Type>
LinkedListIterator<Type>& LinkedListIterator<Type>::operator++( int dummy )
{
	LinkedListIterator<Type> it(*this);
	if( current->next != 0 )
	{
		current = current->next;
	}

	return it;
}

template<class Type>
bool LinkedListIterator<Type>::operator!=( const LinkedListIterator<Type>& it1 )
{
	if( it1.current->info == current->info )
	{
		return false;
	} 

	return true;
}

