//Function definitions go in this file
#include "Point.h"
#include <iostream>
using namespace std;

//Class name :: function name(paramete list)
Point::Point(double initial_x, double initial_y)
{
	x = initial_x;
	y = initial_y;

}

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::set_x_coordinate(double new_x)
{
	if (new_x > 0 && new_x <= 100)
	{
		x = new_x;
	}
	else
	{
	
		cout << "Invalid x coordinate!" << endl;
	}
}

void Point::set_y_coordinate(double new_y)
{
	if (new_y > 0 && new_y <= 100)
	{
		y = new_y;
	}
	else
	{
		cout << "Invalid y coordinate!" << endl;
	}
}

double Point::get_x()
{
	return x;
}

double Point::get_y()
{
	return y;
}