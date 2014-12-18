/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Stack.h
** Description: Uses node class as a link list that pops or pushes nodes to the head/front of the list
*********/
#ifndef STACK_H
#define STACK_H

#include "Node.h"
class Stack
{
public:
	Stack();  //Default Constructor
	~Stack(); //Destory Constructor

	void Push(int newValue); // add a value to the stack(at the head)
	void Pop(); // remove a value from the stack (at the head)
	int top() const; //Get the value at top of stack

	bool isEmpty() const; // Returns true if head is nullptr
private:
	Node* head; //points to the top of the stack
};
#endif