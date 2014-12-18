/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Node.cpp
** Description: Implementation file for buildin a node.
*********/
#include "Node.h"

Node::Node()
{
	value = 0;
	next = nullptr;		// book will say nextNode = NULL, or nextNode = 0
}

Node::Node(int initialValue)
{
	value = initialValue;
	next = nullptr;
}

void Node::setValue(int newValue)
{
	value = newValue;
}

void Node::setNextNode(Node* newNextNode)
{
	next = newNextNode;
}

Node* Node::getNext() const
{
	return next;
}

int Node::getValue() const
{
	return value;
}