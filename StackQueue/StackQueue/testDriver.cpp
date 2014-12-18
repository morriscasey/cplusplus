/*********
** Name: Casey Morris
** Date: 11/28/2014
** Filename: testDriver.cpp
** Description: File tests the use of stacks and queues.
*********/
#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"
#include "Queue.h"

int main()
{
	// Push plates onto link list
	Stack plates;
	plates.Push(2);
	plates.Push(8);
	plates.Push(4);

	cout << plates.top() << endl;
	plates.Pop();
	cout << plates.top() << endl;

	Queue checkOutLine;
	checkOutLine.enqueue(3);
	checkOutLine.enqueue(7);
	checkOutLine.enqueue(1);

	cout << checkOutLine.peek() << endl;
	checkOutLine.dequeue();
	cout << checkOutLine.peek() << endl;

	while(!plates.isEmpty())
	{
		plates.Pop();
	}

	cin.ignore();
	cin.get();
	return 0;
}