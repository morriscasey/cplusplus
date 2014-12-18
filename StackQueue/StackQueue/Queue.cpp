/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Queue.cpp
** Description: Implementation file for Queue.h
*********/

#include "Queue.h"

	Queue::Queue()
	{
		head = nullptr;
		tail = nullptr;
	}
	
	Queue::~Queue()
	{
	
	}

	void Queue::enqueue(int newValue) // add node at the tail(push back)
	{
		Node* newNode = new Node(newValue); // Create new node

		if (head == nullptr && tail == nullptr)
		{
			//if the list is empty
			head = newNode;
			tail = newNode;
		}
		else
		{
			//Takes tail and assigns the next ptr to new node and assigns the new node to tail
			tail->setNextNode(newNode);
			tail = newNode;
		}
	}
	void Queue::dequeue() // remove node at the head (pop front)
	{
		// if the list is empty, nothing to do, so return
		if (head == nullptr && tail == nullptr)
		{
			return;
		}
		else
		{
			//Create a new node
			Node* current = head; 

			// Copies head to next node
			head = current->getNext();
			// checks to see if head becomes nullptr which means the list is empty and sets tail to null
			if (head == nullptr)
			{
				tail = nullptr;
			}
		
			// Deletes the current/last node
			delete current;
		}
	}
	int Queue::peek() const // get the value of head
	{
		// Returns nothing if head set to nullptr
		if(head == nullptr)
		{
			return -1;
		}
		else
		{
			return head->getValue();
		}

	}

	bool Queue::isEmpty() const // returns true if head == nullptr
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