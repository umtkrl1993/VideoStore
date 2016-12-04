#include "../include/LinkedList.h"
#include <iostream>
#include <vector>
using std::cout;

static LinkedList<int> listInteger;
static void testLinkedListInsert();
static void testLinkedListRemove();
static void testLinkedListIterator();
static void testLinkedListIteratorForSpecificList( LinkedList<int> );
static void testLinkedListCopyConstructor();

int main(){

	testLinkedListInsert();
	testLinkedListIterator();
	testLinkedListRemove();
	
    return 0; 
}

static void testLinkedListInsert()
{
	try	
	{
	   listInteger.insert(12);
           listInteger.insert(13);
   	   listInteger.insert(14);
           listInteger.insert(15);
           listInteger.insert(16);
   	   listInteger.insert(17);
	}

	catch( DuplicateElementException& e )
	{
		cout<< "Exception is caught\n" <<endl;
	}
}

static void testLinkedListRemove()
{
	try
	{
		listInteger.remove(13);	
	}
	catch( ElementNotFoundException& e )
	{
		cout<< "Exception is caught\n" <<endl;
	}
}

static void testLinkedListIterator()
{
	for( LinkedListIterator<int> it1 = listInteger.begin(); it1 != listInteger.end(); ++it1 )
	{
		cout<< *it1 <<endl ;
	}
}

static void testLinkedListIteratorForSpecificList( LinkedList<int> listInteger )
{
	for( LinkedListIterator<int> it2 = listInteger.begin(); it2 != listInteger.end(); ++it2 )
	{
		cout<< *it2 <<endl;
	}
}
static void testLinkedListCopyConstructor()
{
	LinkedList<int> listInteger2( listInteger );
	testLinkedListIteratorForSpecificList( listInteger2 );
}

