#include "Point.h"
#include <iostream>
using namespace std;

	// Default Constructor: initializes the coordinates to 0
	Point::Point()
	{
		xCoordinate = 0;
		yCoordinate = 0;
	}

	//Constructor 1: initializes the x and y coordinates based on user input
	Point::Point(int newXCoord, int newYCoord)
	{
		xCoordinate = newXCoord;
		yCoordinate = newYCoord;
	
	}

	//Mutator(s)

	// Sets the member variable xCoordinate
	void Point::setXCoord(int existingXCoord)
	{
		xCoordinate = existingXCoord;
	}

	// Sets the memvber variable yCoordinate
	void Point::setYCoord(int existingYCoord)
	{
		yCoordinate = existingYCoord;
	}

	//Accessor(s)

	// Returns the xCoordinate value 
	int Point::getXCoord()
	{
		return xCoordinate;
	}

	// Returns the yCoordinat value
	int Point::getYCoord()
	{
		return yCoordinate;
	}

	//Auxillory
	void Point::streamInsert(ostream& out) const
	{
		out << "(" << xCoordinate << "," << yCoordinate << ")";
	}

	// Overload operators
ostream& operator<<(ostream& out, const Point& p)
{
	p.streamInsert(out);
	return out;
}
