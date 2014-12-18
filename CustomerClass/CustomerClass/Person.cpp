/* Name: Casey Morris
 * Date: 10/27/2014
 * File: Person.cpp
 * Description: This is the implementation file for Person class.
*/
#include <iostream>
#include "Person.h"
#include <string>
using namespace std;


//Constructor default
	Person::Person()
	{
		firstName = "Empty";
		lastName = "Empty";
		address = "Empty";
		city = "Empty";
		state = "na";
		zip = 00000;
		phone = 5555551234;
	}

	//Mutator
	void Person::setLastName(string existingLastName)
	{
		if ((existingLastName.length() > 0) &&  (existingLastName.length() <= 30 ))
		{
			lastName = existingLastName;
		}
		else
		{
			cout << "No last name entered";
		}
	}
	
	void Person::setFirstName(string existingFirstName)
	{
		if ((existingFirstName.length() > 0) &&  (existingFirstName.length() <= 30 ))
		{
			lastName = existingFirstName;
		}
		else
		{
			cout << "No first named enter.";
		}
	}
	
	void Person::setAddress(string existingAddress)
	{
		if ((existingAddress.length() > 0) &&  (existingAddress.length() <= 255 ))
		{
			address = existingAddress;
		}
		else
		{
			cout << "Address not valid!";
		}
	}
	
	void Person::setCity(string existingCity)
	{
		if ((existingCity.length() > 0) && (existingCity.length() <=255))
		{
			city = existingCity;
		}
		else
		{
			cout << "Address not valid!";
		}
	}
	
	void Person::setState(string existingState)
	{
		if ((existingState.length() > 0) && (existingState.length() < 3))
		{
			state = existingState;
		}
		else
		{
			cout << "State not valid, needs to be two letters long!";
		}
	}
	
	void Person::setZip(int existingZip)
	{
		if ((existingZip > 00000) && (existingZip <= 99999))
		{
			zip = existingZip;
		}
	else

		{
			cout << "Zip not valid!";
		}
	}

	void Person::setPhone(int existingPhone)
	{
		if ((existingPhone > 1111111111) && (existingPhone <= 9999999999))
		{
		phone = existingPhone;
		}
		else
		{
			cout << "Phone number should be entered as 2065551234!";
		}
	}


	//Accessor
	// Retrieves the last name of the person
	string Person::getLastName()
	{
		return lastName;
	}

	// Retrieves the first name of the person
	string Person::getFirstName()
	{
		return firstName;
	}
	
	// Retrieves the physical address of the person.
	string Person::getAddress()
	{
		return address;
	}
	
	// Retrieves the city of the person lives in.
	string Person::getCity()
	{
		return city;
	}
	
	// Retrieves the state of the person lives in.
	string Person::getState()
	{
		return state;
	}
	
	// Retrieves the zip the person lives in.
	int Person::getZip()
	{
		return zip;
	}
	
	// Retrieves the phone number of the person
	long long int Person::getPhone()
	{
		return phone;
	}