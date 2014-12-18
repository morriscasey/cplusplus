/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: CargoShip.h
 * Description: The CargoShip class inherits from Ship.h, but also stores cargo capacity in tons. 
 *  of passengers on a Cruise Ship.
 */
#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"

class CargoShip: public Ship
{
public:
	//Constructor
	CargoShip(); //Default Constructor

	CargoShip(string newCargoName, int newCargoYearBuilt, int newCargoCapacity); // Allows for user input
	
	//Mutator
	void setCargoCapacity(int existingCargoCapacity); // Changes the cargo capacity of the cargo ship

	//Accessor
	int getCargoCapacity(); // Returns the cargo capacity of the cargo ship

	void print(); // Prints the Cargo Ship's name and cargo capacity

private:
	int cargoCapacity; // The weight in tons that the cargo ship can hold.
};
#endif