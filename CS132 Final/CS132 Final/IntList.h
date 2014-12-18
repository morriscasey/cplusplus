
#ifndef INT_LIST_H
#define INT_LIST_H

#include "Node.h"

class IntList
{
public:
	IntList();
	void appendNode(int num);
	void insertNode(int num);
	void deleteNode(int num);
	void displayList() const;

	//Function counts the number of nodes in a linked list and returnes the result in int.
	int count() const;

	//Displays the Linked List in reverse using a Stack.
	void displayReverse() const;


private:
	Node* head;		// this keeps track of the front of the list

};




#endif