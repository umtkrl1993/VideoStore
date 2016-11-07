#include "../../VideoModule/include/Video.h"
#include "../include/LinkedList.h"
#include "../include/LinkedListIterator.h"

int main(){

	LinkedList<Video>* list = new LinkedList<Video>;

	Video v("computer engineer", "umit", "berke", "berkay", "hatice", "icterra", 10);
	Video v1("electirical engineer", "berke", "berkay", "umit", "hatice", "icterra", 3);
	
	list->insert(v);
	list->insert(v1);


	return 0;
}
