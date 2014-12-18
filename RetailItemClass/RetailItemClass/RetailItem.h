/* Name: Casey Morris
 * Date: 10/7/2014
 * Filename: RetailItem.cpp
 * Description: A prototype of constructors, accesors, and mutators used in adding an item object.  In the private section, the header
 *  is storing the string description, integer unitsOnHand, and decimal point price.
 */
#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>
using namespace std;


class RetailItem
{
private:
	string description; // String that holds a brief description of the item
	int unitsOnHand; // Int that holds the number of units currently in inventory
	double price;  // Double that holds the item's retail price.

public:
	//Constructor(s)
	RetailItem();  // Default constructor that initializes variables with 0s.
	RetailItem(string newDescription, int newUnitsOnHand, double newPrice); // Accepts user input for all variables
	RetailItem(int newUnitsOnHand, double newPrice);  // Initializes user input for unit amount and price.  Description value is ""
	
	//Mutator(s)
	void changeDescription(string existingDescription); // Changes existing value of description to new value
	void changeUnitsOnHand(int existingUnitsOnHand); // Changes existing value of the units available to new value
	void changePrice(double existingPrice); // Changes the price of existing item
	
	//Accessor(s)
	string getDescription(); // Returns the value of the private variable description.
	int getUnitsOnHand();   // Returns the value of the private variable unitsOnHand.
	double getPrice();    // Returns the value of the private variable price.
};
#endif