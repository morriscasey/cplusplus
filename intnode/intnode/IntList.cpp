
#include "IntList.h"
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
	IntNode* theNewNode = new IntNode(num);

	// 2. add it to the end of the list
	// 2a. if the list is empty, make it the front of the list
	if (head == nullptr)
	{
		head = theNewNode;
	}
	else
	{
		// 2b. the list is not empty, so I have to go find the end
		IntNode* current = head;

		while (current->getNextNode() != nullptr)
		{
			current = current->getNextNode();
		}

		current->setNextNode(theNewNode);
	}


}

void IntList::insertNode(int num)
{
	// 1. create the new node
	IntNode* theNewNode = new IntNode(num);

	if (head == nullptr)
	{
		// if the list is empty, the list become the new item
		head = theNewNode;
		return;
	}

	IntNode* current = head;
	IntNode* oneBeforeCurrent = head;

	while (current->getValue() < num && current != nullptr)
	{
		oneBeforeCurrent = current;
		current = current->getNextNode();
	}

	// adjust the pointers to squeeze in the new node
	theNewNode->setNextNode(current);
	oneBeforeCurrent->setNextNode(theNewNode);
}

void IntList::deleteNode(int num)
{
	if (head == nullptr)
	{
		// if the list is empty, I can't delete anything
		// so end the function
		return;
	}

	IntNode* current = head;
	IntNode* oneBeforeCurrent = head;

	while (current->getValue() != num && current != nullptr)
	{
		oneBeforeCurrent = current;
		current = current->getNextNode();
	}

	oneBeforeCurrent->setNextNode(current->getNextNode());

	delete current;

}

void IntList::displayList() const
{
	IntNode* current = head;
	
	// while I haven't reached the end of the list
	while (current != nullptr)
	{
		// print out the current value
		cout << current->getValue() << endl;

		// move forward to the next node
		current = current->getNextNode();
	}
}

bool IntList::isEmpty() const
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
int IntList::length() const
{
	int count = 0;
	IntNode* current = head;
	while (current != nullptr)
	{
		current = current->getNextNode();
		count++;
	}
	return count;

}

	//The first node in the list is at position 0, the second node is at position 1, 
	// and so on. If the value is not found in the list, the search should return -1.
int IntList::find(int value) const
{

	int count = 0;
	IntNode* current = head;
	if (head == nullptr){
	 return count = -1;
	}

	while (current->getValue() != value && current->getNextNode() != nullptr)
	{
			current = current->getNextNode();
			count++;

	}

	if (current->getNextNode() == nullptr)
	{
		return count = -1;
	}
	else
	{
		return count;
	}

}

void IntList::pushBack(int value)
{
	IntNode* current = head;
	IntNode* oneBeforeCurrent = nullptr;  // Nothing before the head
	IntNode* newNode = new IntNode(value); // Create new node

	if (head == nullptr)
	{
		//if the list is empty
		head = newNode;
	}
	else
	{
		while (current != nullptr)
		{
			oneBeforeCurrent = current; // save current into onebeforecurrent
			current = current->getNextNode(); // move current to the next node
		}
	
		// Set one before next point to point to the new node
		oneBeforeCurrent->setNextNode(newNode);
		}
}

void IntList::popBack()
{
	IntNode* current = head;
	IntNode* oneBeforeCurrent = nullptr;  // Nothing before the head

	// if the list is empty, nothing to do, so return
	if (head == nullptr)
	{
		return;
	}
	else
	{
		while (current->getNextNode() != nullptr)
		{
			oneBeforeCurrent = current; // save current into onebeforecurrent
			current = current->getNextNode(); // move current to the next node
		}

		// If oneBeforeCurrent is == to nullptr than the head needs to be assigned to nullptr.
		if (oneBeforeCurrent == nullptr){
			head = nullptr;
		}
		else
		{
		// Changes oneBeforeCurrent to null ptr
		oneBeforeCurrent->setNextNode(nullptr);
		}
		// Deletes the current/last node
		delete current;
	}

}

int IntList::getBack() const
{
	IntNode* current = head;
	// if list is empty returns -1 since values are positive
	if (head == nullptr)
	{
		return -1;
	}
	else
	{
		while(current->getNextNode() != nullptr)
		{
			current = current->getNextNode();
		}

		return current->getValue();
	}

}

void IntList::popFront()
{
	// if the list is empty, nothing to do, so return
	if (head == nullptr)
	{
		return;
	}
	else
	{
		//Create a new node
		IntNode* current = head; 

		// Copies head to next node
		head = current->getNextNode();
		
		// Deletes the current/last node
		delete current;
	}
}

void IntList::pushFront(int value)
{
	// Create new node with value
	IntNode* newNode = new IntNode(value);

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

int IntList::getFront() const
{
	IntNode* current = head;
	// if list is empty returns -1 since values are positive
	if (head == nullptr)
	{
		return -1;
	}
	else
	{		
		return current->getValue();
	}
}

void IntList::insertAt(int position, int value)
{
	IntNode* current = head;
	IntNode* oneBeforeCurrent = nullptr;  // Nothing before the head
	IntNode* newNode = new IntNode(value);
	int i = 0;

	// if the list is empty, set head to new node and return
	if (head == nullptr)
	{
		head= newNode;
		return;
	}

	else
	
	{
		while (i != position && current->getNextNode() != nullptr)
		{
			oneBeforeCurrent = current; // save current into onebeforecurrent
			current = current->getNextNode(); // move current to the next node
			i++;
		}

		if (current->getNextNode() == nullptr) // If current is null pointer, then checks reached the end or found value.
		{
				if (i == position)
				{
					current->setValue(value);
				}
				else // Returns nothing if reached end without finding anything
				{
					return;
				}
		}
		else
		{
			newNode->setNextNode(current); // Assign new node to
			oneBeforeCurrent->setNextNode(newNode);
		}
	}

}

void IntList::removeAt(int position, int value)
{
	IntNode* current = head;
	IntNode* oneBeforeCurrent = nullptr;  // Nothing before the head
	int i = 0;

	while (i != position && current->getNextNode() != nullptr)
	{
		oneBeforeCurrent = current; // save current into onebeforecurrent
		current = current->getNextNode(); // move current to the next node
		i++;
	}
		
	if (current->getNextNode() == nullptr) // If current is null pointer, then checks reached the end or found value.
	{
		if (current->getValue() == value)
		{
			delete current;
			oneBeforeCurrent->setNextNode(nullptr);
		}
		else // Returns nothing if reached end without finding anything
		{
			return;
		}
	}
	else //if value found copy rest of link list and delete node
	{
		oneBeforeCurrent->setNextNode(current->getNextNode());
		delete current;
	}

}

// Deletes the entire list
void IntList::clear()
{
	while (head != nullptr)
	{
		popFront();
	}
}
