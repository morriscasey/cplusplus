/* Name: Casey Morris
 * Date: 10/07/2014
 * Filename: Car.cpp
 * Purpose: File test the class Car.h.  Creates a car object, accelerates the speed of the car by +5 for 5 counts, and deaccelerates
 *   or brakes -5 for 5 counts. 
 */
#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

int main()
{
	
	Car vehicle1(2004, "Ford");
	cout << "My cool " << vehicle1.getYearModel() << " " << vehicle1.getMake() << "Focus can go 0 to 25 in 5 counts!\n\n";

	cout << "Accelerating...\n";
	for (int counter = 1; counter < 6; counter++)
	{
		cout << "Count " << (counter) << endl;
		vehicle1.accelerate();
		cout << vehicle1.getSpeed() << endl;
	}
	cout << "Braking...\n";
	for (int counter = 5; counter > 0; counter--)
	{
		cout << "Count " << (counter) << endl;
		vehicle1.brake();
		cout << vehicle1.getSpeed() << endl;
	}

	cin.ignore();
	cin.get();
	return 0;
}