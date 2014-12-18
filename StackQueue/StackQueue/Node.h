/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: Node.h
** Description: Used to build a node with value store as integer and pointer that stores the next memory location.
*********/
#ifndef NODE_H
#define NODE_H
class Node
{
public:

	//Constructor
	Node();
	Node(int initialValue);
	
	//Mutator
	void setValue(int newValue);
	void setNextNode(Node* newNextNode);

	//Accessor
	Node* getNext() const;
	int getValue() const;
	
private:
	int value;
	Node* next;
};
#endif