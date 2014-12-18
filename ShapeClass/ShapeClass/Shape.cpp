#include "Shape.h"
#include <string>

//Default constructor
Shape::Shape()
{
	name = "unknown";
	color = "red";
}

//Mutators
void Shape::setColor(string existingColor)
{
	color = existingColor;
}

void Shape::setName(string existingName)
{
	name = existingName;
}

//Accessors
string Shape::getColor()
{
	return color;
}
string Shape::getName()
{
	return name;
}

double Shape::calculateArea() const
{
	
}