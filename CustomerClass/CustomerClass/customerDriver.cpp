/* Name: Casey Morris
 * Date: 10/27/2014
 * File: customerDriver.cpp
 * Description: The application test the class Customer.h to confirm it is inheriting from Person.h
*/

#include <iostream>
#include "Customer.h"
#include <string>
using namespace std;

int main()
{
	// Test that default settings from  Customer.h is inheriting from Person.h
	Customer cust1;
	cout << "Default name for Cust1: " << cust1.getFirstName() << endl;
	cout << "Default phone Number for Cust1: " << cust1.getPhone() << endl;
	cout << "Default address for Cust1: " << cust1.getAddress() << endl;
	cout << "Default city for Cust1: " << cust1.getCity() << endl;
	cout << "Default state for Cust1: " << cust1.getState() << endl;
	cout << "Default zip for Cust1: " << cust1.getZip() << endl;
	//Confirming Customer.h member variables are being assigned to default.
	cout << "Default customer number for Cust1: " << cust1.getCustomerNumber() << endl;
	cout << "Default setting for mailing list in Cust1: " << cust1.getMailingList() << endl;

	// Testing mutator inheritance from Person.h
	cust1.setState("WA");
	cust1.setCity("Auburn");
	cust1.setAddress("123 main st");
	
	// Confirm that mutator works for Customer's member functions
	cust1.setMailingList(true);
	cust1.setCustomerNumber(1234321);

	cout << "Corrected Cust1's address: " << endl;
	cout << "\t" << cust1.getAddress() << "\n\t" << cust1.getCity() << "," << cust1.getState() << " " << cust1.getZip() << endl;

	//Confirm that accessors for Customer's member functions work
	cout << "Is Cust1 on our mailing list? ";
	bool isOnList = cust1.getMailingList();
	if (isOnList)
	{
		cout << "Yes!" << endl;
	}

	else
	{
		cout << "No!" << endl;
	}

	cout << "Their customer number is " << cust1.getCustomerNumber();



	cin.ignore();
	cin.get();
	return 0;
}