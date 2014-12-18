/* Name: Casey Morris
 * Date: 10/27/2014
 * File: Customer.cpp
 * Description: This is the implementation file for Customer class.
*/

#include "Customer.h"
#include <iostream>

//Constructor Default
	Customer::Customer() : Person()
	{
		customerNumber = 0;
		mailingList = false;
	}
	
	//Mutators
	void Customer::setCustomerNumber(int existingCustomerNumber)
	{
		customerNumber = existingCustomerNumber;
	}
	
	void Customer::setMailingList(bool existingMailingList)
	{
		mailingList = existingMailingList;
	}

	//Accesors
	int Customer::getCustomerNumber()
	{
		return customerNumber;
	}
	bool Customer::getMailingList()
	{
		return mailingList;
	}