/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: Ship.h
 * Description: This is a basic design for a ship. You can add the name and year it's built.
 */

#ifndef SHIP_H
#define SHIP_H
#include <string>
using namespace std;

class Ship
{
public:
	// Constructor
	Ship(); // Default Constructor
	Ship(string newName, int newYearBuilt); // Constructor that initializes with user input

	//Mutator
	void setName(string existingName); // Changes existing name of ship to another name
	void setYearBuilt(int existingYearBuilt); // Change the year a ship was built

	//Accessors
	string getName(); // Return the name of the ship
	int getYearBuilt(); // Return the year the ship was built

	virtual void print(); // Displays the ship's name and year it was built

protected:
	string name; // Name of ship
	int yearBuilt; // The year the ship was built


};
#endif