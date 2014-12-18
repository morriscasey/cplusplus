/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Stack.cpp
** Description: Implementation file for Stack.h
*********/

#include "Stack.h"

Stack::Stack()
{
	head = nullptr;
}

Stack::~Stack()
{

}

void Stack::Push(int newValue)
{
	// Create new node with value
	Node* newNode = new Node(newValue);

	// if the list is empty, set head to new node and return
	if (head == nullptr)
	{
		head= newNode;
		return;
	}

	else
	{
		// Sets the next node to head making newNode the head. 
		newNode->setNextNode(head);
		head = newNode;
	}
}
void Stack::Pop()
{
	// if the list is empty, nothing to do, so return
	if (head == nullptr)
	{
		return;
	}
	else
	{
		//Create a new node
		Node* current = head; 

		// Copies head to next node
		head = current->getNext();
		
		// Deletes the current/last node
		delete current;
	}
}

int Stack::top() const//Get the value at top of stack
{
	if(!isEmpty()){
		return head->getValue();
	}
	else
	{
		return -1;
	}
}

bool Stack::isEmpty() const // Returns true if head is nullptr
{
	if (head == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}