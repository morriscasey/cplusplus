/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: CruiseShip.cpp
 * Description: This is the implementation file for CruiseShip.h. 
 */
#include "CruiseShip.h"
#include <string>
#include <iostream>
using namespace std;

//Constructor
CruiseShip::CruiseShip() : Ship()
{
	maxNumPassengers = 50;  //Default max size
}

CruiseShip::CruiseShip(string newCruiseName, int newCruiseYearBuilt, int newMaxNumPassengers) : Ship(newCruiseName,newCruiseYearBuilt)

{
	maxNumPassengers = newMaxNumPassengers;
}

//Mutator
void CruiseShip::setMaxNumPassengers(int existingMaxNumPassengers)
{
	maxNumPassengers = existingMaxNumPassengers;
}

//Accessor
int CruiseShip::getMaxNumPassengers()
{
	return maxNumPassengers;
}

void CruiseShip::print() 
{
	cout << "The ship, " << name << ", has a maximum capacity of " << maxNumPassengers << " passengers." << endl;
}
