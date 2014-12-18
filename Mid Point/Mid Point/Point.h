#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;
class Point
{
public:
	// Default Constructor: initializes the coordinates to 0
	Point();

	//Constructor 1: initializes the x and y coordinates based on user input
	Point(int newXCoord, int newYCoord);

	//Mutator(s)
	void setXCoord(int existingXCoord); // Sets the member variable xCoordinate
	void setYCoord(int existingYCoord); // Sets the memvber variable yCoordinate

	//Accessor(s)
	int getXCoord(); // Returns the xCoordinate value 
	int getYCoord(); // Returns the yCoordinat value

	//Auxillory
	void streamInsert(ostream& out) const;

private:
	int xCoordinate;
	int yCoordinate;

};

// Overload operators
ostream& operator<<(ostream& out, const Point& p);
#endif
