/* Name: Casey Morris
 * Date: 10/29/2014
 * Filename: Ship.cpp
 * Description: This is the implementation file for Ship.h. 
 */

#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

// Constructor(s)
Ship::Ship()
{
	name = "unknown";
	yearBuilt = 1111;
}
	
Ship::Ship(string newName, int newYearBuilt) 
{
	name = newName;
	yearBuilt = newYearBuilt;
}

//Mutator(s)
void Ship::setName(string existingName)
{
	name = existingName;
}

void Ship::setYearBuilt(int existingYearBuilt)
{
	yearBuilt = existingYearBuilt;
}

//Accessor(s)
string Ship::getName()
{
	return name;
}

int Ship::getYearBuilt()
{
	return yearBuilt;
}

void Ship::print() 
{
	cout << "The ship, " << name << ", was built in " << yearBuilt << "." << endl;
}