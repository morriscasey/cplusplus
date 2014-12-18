/**********
** Name: Casey Morris
** Date: 11/19/2014
** File: IntNode.cpp
** Description: The implementation file for IntNode.h
**********/

#include "IntNode.h"

IntNode::IntNode()
{
	value = 0;
	nextNode = nullptr;		// book will say nextNode = NULL, or nextNode = 0
}

IntNode::IntNode(int initialValue)
{
	value = initialValue;
	nextNode = nullptr;
}

int IntNode::getValue() const
{
	return value;
}

IntNode* IntNode::getNextNode() const
{
	return nextNode;
}

void IntNode::setValue(int newValue)
{
	value = newValue;
}

void IntNode::setNextNode(IntNode* newNextNode)
{
	nextNode = newNextNode;
}