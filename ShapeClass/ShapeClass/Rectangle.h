#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Shape
{
public:
	//Default Constructor
	Rectangle();

	// Constructor with user input.
	Rectangle(int initialHeight, int initialWidth);

	//Mutator
	void setHeight(int existingHeight);
	void setWidth(int existingWidth);

	//Accessor
	int getHeight();
	int getWidth();


private:
	int width;
	int height;
};


#endif