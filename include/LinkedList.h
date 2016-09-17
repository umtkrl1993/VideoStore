#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include"LinkedListADT.h"

template<class Type>
class LinkedList : public LinkedListADT<Type>{
public:
    LinkedList();
    ~LinkedList();
    void insert(Type type) throw(DuplicateElementException); 
    bool remove(Type type) throw(ElementNotFoundException);
    LinkedListIterator<Type>& begin();
    LinkedListIterator<Type>& end();
    Node<Type>* front();
protected:
    Node<Type>* head;
    Node<Type>* last; 

};




#endif