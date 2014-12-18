/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: CargoShip.cpp
 * Description: This is the implementation file for CargoShip.h. 
 */
#include "CargoShip.h"
#include <string>
#include <iostream>
using namespace std;

//Constructor
CargoShip::CargoShip() : Ship()
{
	cargoCapacity = 160;  // Default capcity in tons based on frozen seafood
}

CargoShip::CargoShip(string newCargoName, int newCargoYearBuilt, int newCargoCapacity) : Ship(newCargoName,newCargoYearBuilt)

{
	cargoCapacity = newCargoCapacity;
}

//Mutator
void CargoShip::setCargoCapacity(int existingCargoCapacity)
{
	cargoCapacity = existingCargoCapacity;
}

//Accessor
int CargoShip::getCargoCapacity()
{
	return cargoCapacity;
}

void CargoShip::print() 
{
	cout << "The ship, " << name << ", has a cargo capacity of " << cargoCapacity << " tons." << endl;
}