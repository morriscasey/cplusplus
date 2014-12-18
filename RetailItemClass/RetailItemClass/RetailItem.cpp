/* Name: Casey Morris
 * Date: 10/7/2014
 * Filename: RetailItem.cpp
 * Description: This is the member functions for RetailItem.  There are three constructors built, the first is a default constructor, second allows 
 *   user input for all three private variables, and the third initializes price and units available with user input. The description field is 
 *   initialized with "".  My mutators allow user to change description, unitsOnHand, and price individually. The accessors return the value of 
 *   each description, unitsOnHand, and price.
 */
#include "RetailItem.h"
#include <string>
using namespace std;

//Constructor(s)
RetailItem::RetailItem()
{
	description = "";
	unitsOnHand = 0;
	price = 0.00;
}

RetailItem::RetailItem(string newDescription, int newUnitsOnHand, double newPrice)
{
	description = newDescription;
	unitsOnHand = newUnitsOnHand;
	price = newPrice;
}

RetailItem::RetailItem(int newUnitsOnHand, double newPrice)
{
	description = "";
	unitsOnHand = newUnitsOnHand;
	price = newPrice;
}

//Mutator(s)
void RetailItem::changeDescription(string existingDescription)
{
	description = existingDescription;
}

void RetailItem::changeUnitsOnHand(int existingUnitsOnHand)
{
	unitsOnHand = existingUnitsOnHand;
}
void RetailItem::changePrice(double existingPrice)
{
	price = existingPrice;
}

//Accessor(s)
string RetailItem::getDescription()
{
	return description;
}

int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}

double RetailItem::getPrice()
{
	return price;
}