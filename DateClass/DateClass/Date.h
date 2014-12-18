/* Name: Casey Morris
 * Date: 10/5/2014
 * Filename: Date.h
 * Purpose: Header file contains variables to store month, day, and year.  The prototypes
 *   include constructor(s), a mutator, and accessor(s).
*/
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	// Constructor(s)
	// Default constructor that initializes the date to 1/1/1970
	Date();

	// Constructor that initializes the date with values provided from the client.
	Date(int initialMonth, int initialDay, int initialYear);

	// Mutator(s)
	// Mutator that changes the date with values provided from the client.
	void changeDate(int newMonth, int newDay, int newYear);
	
	// Accessor(s)
	// Accessor that sends the date cout in MM/DD/YY form (12/25/2014).
	void printShortForm() const;

	// Accessor that sends the date to cout in Month Day, Year form (December 25, 2014)
	void printLongForm() const;

	// Accessor that sends the date to cout in Day Month Year form (25 December 2014)
	void printInternationalLongForm() const;

	// Auxillory that takes an ostream called out and sends the Date in MM/DD/YY format to ostream out
	void streamInsert(ostream& out) const;

	// Auxillory tat takes an istream called in and extract a date in MM/DD/YY format and save the extracted month, day, and year
	//    to the month, day, and year data members.
	void streamExtract(istream& in);
};

// Operator overload
ostream& operator<<(ostream& out, const Date& date);
istream& operator>>(istream& in, Date& date);
#endif