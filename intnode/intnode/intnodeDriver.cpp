/**********
** Name: Casey Morris
** Date: 11/19/2014
** File: intnodeDriver.cpp
** Description: Test IntList 
**********/

#include <iostream>
#include <string>
#include "IntNode.h"
#include "IntList.h"
using namespace std;

int main()
{
	IntList testList1;
	IntList testList2;

	//
	cout << "Link List1 Append 3 nodes and Display:"<< endl;
	testList1.appendNode(2);
	testList1.appendNode(4);
	testList1.appendNode(6);
	testList1.displayList();

	//Test a link list without any nodes
	cout << "Link List2 Display:" << endl;
	testList2.displayList();
	
	cout << "Link List1 Delete Node with value of 4:"<< endl;
	testList1.deleteNode(4);
	cout << "Link List1 After delete" << endl;
	testList1.displayList();

	cout << "Link List2 Delete Node with value of 4:"<< endl;
	testList2.deleteNode(4);
	cout << "Link List1 After delete" << endl;
	testList2.displayList();
	
	// Test Link List1 pushBack() and popBack() functions
	testList1.pushBack(23);
	cout << "Push Back from Link List1: " << endl;
	testList1.displayList();
	testList1.popBack();
	cout << "Pop Back from Link List1: " << endl;
	testList1.displayList();

	// Test Link List2 pushBack() and popBack() functions
	testList2.pushBack(23);
	cout << "Push Back from Link List2: " << endl;
	testList2.displayList();
	testList2.popBack();
	cout << "Pop Back from Link List2: " << endl;
	testList2.displayList();
	
	

	// Test List 1 pushFront() and popFront() functions
	testList1.pushFront(200);
	cout << "Push Front Link List1: " << endl;
	testList1.displayList();
	testList1.popFront();
	cout << "Pop Front Link List1: " << endl;
	testList1.displayList();

	// Test List 2 pushFront() and popFront() functions
	testList2.pushFront(200);
	cout << "Push Front Link List2: " << endl;
	testList2.displayList();
	testList2.popFront();
	cout << "Pop Front Link List2: " << endl;
	testList2.displayList();

	cout << "After insert Link List1: " << endl;
	testList1.insertNode(3);
	testList1.displayList();

	cout << "After insert Link List2: " << endl;
	testList2.insertNode(3);
	testList2.displayList();

	// Test Link List1 getFront() and getBack() function
	cout << "Front Value from Link List1: " << testList1.getFront() << endl;
	cout << "Back Value from Link List1: " << testList1.getBack() << endl;

	// Test Link List2 getFront() and getBack() function
	cout << "Front Value from Link List2: " << testList2.getFront() << endl;
	cout << "Back Value from Link List2: " << testList2.getBack() << endl;

	// Test Link List1 insetAt() and removeAt() function
	testList1.insertAt(1,200);
	cout << "Link List1 Insert at: " << endl;
	testList1.displayList();
	testList1.removeAt(1,200);
	cout <<"Link List1 Remove at: " << endl;
	testList1.displayList();

	// Test Link List2 insetAt() and removeAt() function
	// This shouldn't work since we only have a node at position 0;
	testList2.insertAt(1,200);
	cout << "Link List2 Insert at: " << endl;
	testList2.displayList();
	 testList2.removeAt(1,200);
	cout <<"Link List2 Remove at: " << endl;
	testList2.displayList();
	

	//Test Link List1 find
	int pos = testList1.find(2);
	cout << "Value 3 in Link List1 is at position: " << pos << endl;

	//Test Link List2 find
	int pos2 = testList2.find(2);
	cout << "Value 3 in Link List2 is at position: " << pos2 << endl;
	
	// Clear all link lists
	testList1.clear();
	testList2.clear();
	cout << "Link List one displays:" << endl;
	testList1.displayList();
	cout << "Link List two displays:" << endl;
	testList2.displayList();

	
	cin.get();
	cin.get();
	return 0;
}