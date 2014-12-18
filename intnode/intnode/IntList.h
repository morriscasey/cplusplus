/**********
** Name: Casey Morris
** Date: 11/19/2014
** File: IntList.h
** Description: IntList provides different functionality for link lists
**********/
#ifndef INT_LIST_H
#define INT_LIST_H
#include "IntNode.h"
class IntList
{
public:
	//Constructor
	IntList(); // Default constructor

	void appendNode(int num); // Append node to existing
	void insertNode(int num); // Insert node to existing node
	void deleteNode(int num); // Removes node
	

	bool isEmpty() const; //Checks to see if list is empty or not
	int length() const; // Counts the nodes to determine the length
	int find(int value) const; // returns position in the list where value is found, or -1 if not found

	// Push and Pop functions
	void popFront(); // Removes the node from front of list
	void pushFront(int value); //Adds the node to front of list
	void pushBack(int value); // Add new node to the end of the list, with the provided value
	void popBack(); //Removes the node at the back of the list.
	
	// Accessors
	void displayList() const; // Displays the current list of nodes
	int getBack() const; // Returns value stored at end of list
	int getFront() const; // Retrieves a node from the front

	void insertAt(int position, int value); // Insert a node at a specific position
	void removeAt(int position, int value); // Remove a node a a specfici position

	void clear(); // Delete link list


private:
	IntNode* head;


};
#endif