/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: CruiseShip.h
 * Description: The CruiseShip class inherits from Ship.h, but also stores the max capacity 
 *  of passengers on a Cruise Ship.
 */
#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "Ship.h"

class CruiseShip: public Ship
{
public:
	//Constructor
	CruiseShip(); //Default Constructor

	CruiseShip(string newCruiseName, int newCruiseYearBuilt, int newMaxNumPassengers); // Allows for user input
	
	//Mutator
	void setMaxNumPassengers(int existingMaxNumPassengers); // Changes maximum number of passengers on a cruise ship

	//Accessor
	int getMaxNumPassengers(); // Returns the maximum number of passengers on a cruise ship

	void print(); // Prints the Ship's name and maximum number of passengers

private:
	int maxNumPassengers; // Maximum number of passenger on a cruise ship
};
#endif