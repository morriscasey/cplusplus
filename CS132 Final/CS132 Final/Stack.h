
#ifndef STACK_H
#define STACK_H

#include "Node.h"

// Dynamic stack
class Stack
{
public:
	Stack();
	~Stack();

	void push(int newValue);	// add a value to the stack (at the head)
	void pop();					// remove a value from the stack (at the head)
	int top() const;			// get the value at the top of the stack

	bool isEmpty() const;		// returns true if the stack is empty
								// returns true if head == nullptr

private:
	Node* head;		// points to the top of the stack
};


#endif