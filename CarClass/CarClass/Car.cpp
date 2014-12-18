/* Name: Casey Morris
 * Date: 10/07/2014
 * Filename: Car.cpp
 * Purpose: The implementation file for Car.h.  
 */
#include "Car.h"
#include <string>
using namespace std;

//Constructor assigns user input to yearModel and make. 
//  The speed member variable is initialized as zero.
Car::Car(int newYearModel, string newMake)
{
	// Checks to make sure a valid year.  First car built around 1807.
	if (newYearModel >= 1800)
	{
		yearModel = newYearModel;
		make = newMake;
		speed = 0;
	}

}
//Mutator(s)
// Accelerate adds 5 to the speed member variable
void Car::accelerate()
{
	speed = speed + 5;
}

// Brake subtracts 5 to the speed member variable
void Car::brake()
{
	if (speed > 0)
	{
	speed = speed - 5;
	}
	else
	{
		speed = 0;
	}
}
	
//Accessor(s)
// getYearModel returns the member value of yearModel
int Car::getYearModel()
{
	return yearModel;
}

// getYearMake returns the member value of make
string Car::getMake()
{
	return make;
}

// getPrice returns the member value of speed
int Car::getSpeed()
{
	return speed;
}