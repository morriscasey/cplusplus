
#include "Stack.h"
#include "Node.h"

Stack::Stack()
{
	head = nullptr;
}

Stack::~Stack()
{
	while (head != nullptr)
	{
		pop();
	}
}

void Stack::push(int newValue)
{
	Node* newNode = new Node(newValue);

	if (head == nullptr)		// if the list is empty
	{		
		head = newNode;
	}
	else
	{
		newNode->setNext(head);
		head = newNode;
	}
}

void Stack::pop()
{
	if (head == nullptr)
	{
		return;
	}

	Node* oldHead = head;
	head = head->getNext();
	delete oldHead;
}

int Stack::top() const
{
	if (head == nullptr)
	{
		return -1;
	}
	else
	{
		return head->getValue();
	}
}

bool Stack::isEmpty() const
{
	return head == nullptr;
}


