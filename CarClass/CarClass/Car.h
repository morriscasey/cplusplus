/* Name: Casey Morris
 * Date: 10/07/2014
 * Filename: Car.cpp
 * Purpose: Header file stores the year the car model was made, the model, and speed.  When object is created the class allows you to accelerate
 *   or brake the speed of object created. If reaches zero than value doesn't decrease anymore.
 */
#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
	int yearModel; // Holds car's year model
	string make; // Hold the make of a car
	int speed; // Holds the car's current speed

public:
	//Constructor(s)
	//Constructor assigns user input to yearModel and make. 
	//  The speed member variable is initialized as zero.
	Car(int newYearModel, string newMake);

	//Mutator(s)
	// Accelerate adds 5 to the speed member variable
	void accelerate();

	// Brake subtracts 5 to the speed member variable
	void brake();
	
	//Accessor(s)
	// getYearModel returns the member value of yearModel
	int getYearModel();

	// getYearMake returns the member value of make
	string getMake();

	// getPrice returns the member value of speed
	int getSpeed();
};
#endif