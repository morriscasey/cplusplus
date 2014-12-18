/* Name: Casey Morris
 * Date: 10/27/2014
 * File: Customer.h
 * Description: This Customer class creates a datatype inherits Person.h and adds a whether the user wants to be on a mailing list and 
 *   a ID number.
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"

class Customer: public Person
{
private:
	int customerNumber; //A unique integer for customer
	bool mailingList; // A true or false on whether customer agrees to be on a mailing list.

public:
	//Constructor Default
	// Initializes Customer inheriting the person.h class as well as intializing customer number and mailing list.
	Customer(); 
	
	//Mutators
	// Changes the member variables customer number and mail list.
	void setCustomerNumber(int existingCustomerNumber);
	void setMailingList(bool existingMailingList);

	//Accesors
	// Returns the customer's unique id
	int getCustomerNumber();
	// Returns whether customer agreed to mailing list.
	bool getMailingList();

};
#endif