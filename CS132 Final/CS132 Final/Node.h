
#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node();
	Node(int initialValue);
	
	Node* getNext() const;
	void setNext(Node* newNext);

	int getValue() const;
	void setValue(int newValue);

private:
	int value;
	Node* next;
};


#endif