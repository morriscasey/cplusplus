/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Queue.h
** Description: Takes node class and puts new entries to the tail/back of a node list. If dequeueing a node, the head/front node is removed.
*********/

#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue
{
public:
	Queue();
	~Queue();

	void enqueue(int newValue); // add node at the tail(push back)
	void dequeue(); // remove node at the head (pop front)
	int peek() const; // get the value of head

	bool isEmpty() const; // returns true if head == nullptr 

private:
	Node* head;
	Node* tail;
};
#endif