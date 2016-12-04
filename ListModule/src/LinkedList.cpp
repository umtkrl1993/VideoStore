#include "../include/LinkedList.h"


template<class Type>
LinkedList<Type>::LinkedList()
{
	head = NULL;
	last = NULL; 
}

template<class Type>
LinkedList<Type>::LinkedList(LinkedList<Type>& list)
{
	head = NULL;
	last = NULL;

	LinkedListIterator<Type> it; 
	
  	for( it = list.begin(); it != list.end(); it++ )
	{
		insert(*it);
	}
	insert(*it);
}

template<class Type>
LinkedList<Type>::~LinkedList()
{	
	Node<Type>* temp = head;
	while( head != last )
	{
		head = head->next;
		delete temp;
		temp = head;
	}
	delete head;
}

template<class Type>
void LinkedList<Type>::insert( Type type ) throw ( DuplicateElementException )
{

	Node<Type>* newNode = new Node<Type>;
        newNode->info = type;
        newNode->next = NULL;

	if(head == NULL)
	{
		head = newNode;
	    last = newNode;
	}
	else
	{
	    bool isFound = false;
	    Node<Type>* temp = head;
	    while(temp != NULL){
                if(temp->info == type){
		    isFound = true;
		    break;
		}
		temp = temp->next;
	    }
		     
		if( isFound == true )
		{
			std::string message = "Trying to insert a duplicate element";
			throw DuplicateElementException(message);
		}
            last->next = newNode;
            last = newNode;	
	}	
}

template<class Type>
bool LinkedList<Type>::remove( Type type ) throw ( ElementNotFoundException )
{
	Node<Type>* current = head; 
	Node<Type>* back = NULL;
	bool isFound = false;
	while(current != NULL){
	    if(current->info == type){
		isFound = true;
		break;
	    }
	    back = current;
	    current = current->next;
	}

	if( isFound == false )
	{
		std::string message = "Element is not in the list";
		throw ElementNotFoundException( message );
	}
	
	if(current == head && current == last)
	{
	   head == NULL;
	   last == NULL;
	   delete current; // delete struct !!!
	}	
	else if(current == head)
	{
	   head = current->next;
	   delete current;
	}
	else if(current == last)
	{
	   last = back;
	   back->next = NULL;
	   delete current;	   
	}
	else
	{
	   back->next = current->next;
	   delete current;
	}
}

template<class Type>
LinkedListIterator<Type> LinkedList<Type>::begin()
{
	LinkedListIterator<Type> iterator(head); 
	return iterator;
}

template<class Type>
LinkedListIterator<Type> LinkedList<Type>::end()
{
	LinkedListIterator<Type> iterator(last);
	return iterator;
}

template<class Type>
Node<Type>* LinkedList<Type>::front()
{
	return head;
}
