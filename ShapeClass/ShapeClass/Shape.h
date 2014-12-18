#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
public:
	
	//Default constructor
	Shape();

	//Mutators
	void setColor(string existingColor);
	void setName(string existingName);
	
	//Accessors
	string getColor();
	string getName();

	virtual double calculateArea() const;

private:
	string name;
	string color;
	

};

#endif