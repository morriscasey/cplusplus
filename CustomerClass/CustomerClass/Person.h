/* Name: Casey Morris
 * Date: 10/27/2014
 * File: Person.h
 * Description: This Person class creates a datatype to store first name, last name, address, city, state, zip, and phone number.
*/
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
	//Constructor default
	Person(); // Intializes the person data type with default settings.

	//Mutator
	// All the set mutators check the values given and changes the member data.
	void setLastName(string existingLastName);
	void setFirstName(string existingFirstName);
	void setAddress(string existingAddress);
	void setCity(string existingCity);
	void setState(string existingState);
	void setZip(int existingZip);
	void setPhone(int existingPhone);


	//Accessor
	// Retrieves the member values stored for the class.
	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	int getZip();
	long long int getPhone();

private:
	string lastName; // The last name size is 30 characters. If over 30 and under 1, an error message is shown
	string firstName; // The last name size is 30 characters. If over 30 and under 1, an error message is shown
	string address; // Address has to be between 1 through 255 characters
	string city;  // City size is between 1 and 255 characters
	string state; // State max and min length will is 2 characters long.
	int zip; //Zip is an integer with a length of 5 digits.
	long long int phone; //Phone number is 10-digits long




};
#endif