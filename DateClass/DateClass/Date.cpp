/* Name: Casey Morris
 * Date: 10/5/2014
 * Filename: Date.cpp
 * Purpose: File contains member functions that allow access to the private variables declared, input values, 
 *   and prints out values. If value entered is incorrect or not entered, the functions with default the values to 1/1/1970.
*/
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

// Constructor(s)
// Default constructor that initializes the date to 1/1/1970
Date::Date()
{
	day = 1;
	month = 1;
	year = 1970;
}

// Constructor that initializes the date with values provided from the client.
Date::Date(int initialMonth, int initialDay, int initialYear)
{
	if ((initialMonth <= 12 && initialMonth >= 1) && (initialDay <= 31 && initialDay >= 1))
	{
		month = initialMonth;
		day = initialDay;
		year = initialYear;
	}
	else
	{
		month = 1;
		day = 1;
		year = 1970;
		cout << "You have entered an invalid date of " << initialMonth << "/" << initialDay << "/" << initialYear << endl;
		cout << "Initialized date to default of " << month << "/" << day << "/" << year << endl; 
	}
}

// Mutator(s)
// Mutator that changes the date with values provided from the client.
void Date::changeDate(int newMonth, int newDay, int newYear)
{
	if ((newMonth <= 12 && newMonth >= 1) && (newDay <= 31 && newDay >= 1))
	{
		month = newMonth;
		day = newDay;
		year = newYear;
	}
	else
	{
		month = 1;
		day = 1;
		year = 1970;
		cout << "You have entered an invalid date of " << newMonth << "/" << newDay << "/" << newYear << endl;
		cout << "Initialized date to default of " << month << "/" << day << "/" << year << endl;
	}
}
	
// Accessor(s)
// Accessor that sends the date cout in MM/DD/YY form (12/25/2014).
void Date::printShortForm() const
{
	cout << month << "/" << day << "/" << year << endl;
}

// Accessor that sends the date to cout in Month Day, Year form (December 25, 2014)
void Date::printLongForm() const
{
	if (month == 1)
		cout << "January ";
	if (month == 2)
		cout << "February ";
	if (month == 3)
		cout << "March ";
	if (month == 4)
		cout << "April ";
	if (month == 5)
		cout << "May ";
	if (month == 6)
		cout << "June ";
	if (month == 7)
		cout << "July ";
	if (month == 8)
		cout << "August ";
	if (month == 9)
		cout << "September ";
	if (month == 10)
		cout << "October ";
	if (month == 11)
		cout << "November ";
	if (month == 12)
		cout << "December ";

	cout << day << ", " << year << endl;
}

// Accessor that sends the date to cout in Day Month Year form (25 December 2014)
void Date::printInternationalLongForm() const
{
	cout << day << " ";
	if (month == 1)
		cout << "January ";
	if (month == 2)
		cout << "February ";
	if (month == 3)
		cout << "March ";
	if (month == 4)
		cout << "April ";
	if (month == 5)
		cout << "May ";
	if (month == 6)
		cout << "June ";
	if (month == 7)
		cout << "July ";
	if (month == 8)
		cout << "August ";
	if (month == 9)
		cout << "September ";
	if (month == 10)
		cout << "October ";
	if (month == 11)
		cout << "November ";
	if (month == 12)
		cout << "December ";
	cout << year << endl;
}

//Auxiliary
void Date::streamInsert(ostream& out) const
{
	cout << day << "/" << month << "/" << year;
}

void Date::streamExtract(istream& in)
{
	char slash;
	cin >> day >> slash >> month >> slash >> year;
}

// Operator overload << will allow a anyone who is using the class to send a Date directly to cout.
//    The << operator should call date.streamInsert(out);
ostream& operator<<(ostream& out, const Date& date)
{
	date.streamInsert(out);
	return out;
}

// Operator overload >> will allow anyone who is using the class to receive a Date directly from cin. 
istream& operator>>(istream& in, Date& date)
{
	date.streamExtract(in);
	return in;
}