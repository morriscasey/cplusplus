

#include <iostream>
#include <string>
#include "Node.h"
#include "IntList.h"
#include "Stack.h"
using namespace std;

int main()
{
	IntList myListOfStuff;

	// add four items to the list
	myListOfStuff.appendNode(2);
	myListOfStuff.appendNode(4);
	myListOfStuff.appendNode(6);
	myListOfStuff.appendNode(8);
	
	// display the list from front to back
	myListOfStuff.displayList();

	// Test the IntList.count member function
	cout << "I have " << myListOfStuff.count() << " of nodes in my linked list.";

	// Test displaying Linked List in reverse
	myListOfStuff.displayReverse();

	// keep the window open
	cin.get();
	cin.get();
	return 0;
}