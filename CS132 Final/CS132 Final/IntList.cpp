
#include "IntList.h"
#include "Stack.h"
#include <iostream>
using namespace std;

IntList::IntList()
{
	head = nullptr;
}

void IntList::appendNode(int num)
{
	// add a new node to the end of the list with num as the value

	// 1. create the new node
	Node* theNewNode = new Node(num);

	// 2. add it to the end of the list
	// 2a. if the list is empty, make it the front of the list
	if (head == nullptr)
	{
		head = theNewNode;
	}
	else
	{
		// 2b. the list is not empty, so I have to go find the end
		Node* current = head;

		while (current->getNext() != nullptr)
		{
			current = current->getNext();
		}

		current->setNext(theNewNode);
	}
}

void IntList::insertNode(int num)
{
	// 1. create the new node
	Node* theNewNode = new Node(num);

	if (head == nullptr)
	{
		// if the list is empty, the list become the new item
		head = theNewNode;
		return;
	}

	Node* current = head;
	Node* oneBeforeCurrent = head;

	while (current->getValue() < num && current != nullptr)
	{
		oneBeforeCurrent = current;
		current = current->getNext();
	}

	// adjust the pointers to squeeze in the new node
	theNewNode->setNext(current);
	oneBeforeCurrent->setNext(theNewNode);
}

void IntList::deleteNode(int num)
{
	if (head == nullptr)
	{
		// if the list is empty, I can't delete anything
		// so end the function
		return;
	}

	Node* current = head;
	Node* oneBeforeCurrent = head;

	while (current->getValue() != num && current != nullptr)
	{
		oneBeforeCurrent = current;
		current = current->getNext();
	}

	oneBeforeCurrent->setNext(current->getNext());

	delete current;

}

void IntList::displayList() const
{
	Node* current = head;
	
	// while I haven't reached the end of the list
	while (current != nullptr)
	{
		// print out the current value
		cout << current->getValue() << endl;

		// move forward to the next node
		current = current->getNext();
	}
}

int IntList::count() const
{
	int count = 0;
	Node* current = head;
	while (current != nullptr)
	{
		current = current->getNext();
		count++;
	}
	return count;
}

void IntList::displayReverse() const
{
	Stack s; //Creates a new stack
	Node* current = head; //Makes a copy of head pointer to current. 
	while (current != nullptr) // Loops till current equals nullptr
	{
		s.push(current->getValue()); // Pushes current value to stack 's'
		current= current->getNext(); // Moves the current pointer to next node
	}
	while(!s.isEmpty())  // Uses is empty to loop through stack
	{
		cout << s.top();  //Displays top of stack 
		s.pop(); // Pops the stack
	}
}