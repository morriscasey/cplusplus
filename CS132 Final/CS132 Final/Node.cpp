
#include "Node.h"


Node::Node()
{
	value = 0;
	next = nullptr;
}


Node::Node(int initialValue)
{
	value = initialValue;
	next = nullptr;
}


Node* Node::getNext() const
{
	return next;
}


void Node::setNext(Node* newNext)
{
	next = newNext;
}


int Node::getValue() const
{
	return value;
}


void Node::setValue(int newValue)
{
	value = newValue;
}