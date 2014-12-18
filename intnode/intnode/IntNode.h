/**********
** Name: Casey Morris
** Date: 11/19/2014
** File: IntNode.h
** Description: Int Node save a value and reference to another node.
**********/

#ifndef INT_NODE_H
#define INT_NODE_H

class IntNode
{
public:
	// Constructor
	IntNode(); // Constructor Default
	IntNode(int initialValue); //Constructor based on user input

	// Accessor(s)
	int getValue() const; // Gets value stored in node and returns value
	IntNode* getNextNode() const; // Gets value of next node and returns location

	// Mutator(s)
	void setValue(int newValue); // Sets the value of node
	void setNextNode(IntNode* newNextNode); // Sets the location of next node

private:
	int value;
	IntNode* nextNode;
};
#endif