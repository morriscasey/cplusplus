#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

int main()
{
	Point p1(2,4);
	Point p2;
	p1.set_x_coordinate = 3;
	p1.set_y_coordinate = 9;

	cout << p2.get_x << p2.get_y << endl;
	cout << p1.get_x << p1.get_y << endl;
	cin.ignore();
	cin.get();

	return 0;
}