/* Name: Casey Morris
 * Date: 10/7/2014
 * Filename: RetailItemTester.cpp
 * Description: Purpose of this file is to test the class RetailItem. 
 */
#include "RetailItem.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int SIZE = 4;
	// Initialize values for 4 items. The first two use all three values of input description, amount on hand, and price. 
	//   The third item shows how you can enter an item with just the price and quantity. The fourth item shows how the default setting works.
	RetailItem item[SIZE] = 
	{
		RetailItem("Jacket", 12, 59.95),
		RetailItem("Designer Jeans", 40, 34.95),
		RetailItem(20, 24.95),
		RetailItem()
	};
	
	// Outputs the existing initialized data
	for (int counter = 0; counter < SIZE; counter++)
	{
		cout << "Item" << (counter + 1) << ":\n" << "    Description: " << item[counter].getDescription() << "\n    Units on hand: " << item[counter].getUnitsOnHand();
		cout << "\n    Price: $" << item[counter].getPrice() << endl;
	}

	// Change data for the 3rd and 4th item
	item[2].changeDescription("Socks");
	
	item[3].changeDescription("Pants");
	item[3].changeUnitsOnHand(2);
	item[3].changePrice(100.00);

	// Outputs changes that were made
	for (int counter = 0; counter < SIZE; counter++)
	{
		cout << "Item" << (counter + 1) << ":\n" << "    Description: " << item[counter].getDescription() << "\n    Units on hand: " << item[counter].getUnitsOnHand();
		cout << "\n    Price: $" << item[counter].getPrice() << endl;
	}


	cin.ignore();
	cin.get();
	return 0;
}