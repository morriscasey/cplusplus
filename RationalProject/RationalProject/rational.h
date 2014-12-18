/* Name: Casey Morris
 * Date: 10/16/2014
 * Filename:rational.h
 * Description: Specification file that describes what each member function will do.
 */
#ifndef RATIONAL_H 
#define RATIONAL_H 
#include <iostream>
using namespace std;

class Rational 
{ 
public: 
	// --- member functions --- 
	//default constructor 
	// sets the rational object to 0/1
	Rational(); 
	// a second constructor 
	// initializes object based on users input. if use only enters the numerator, the denominator defaults to 1.
	Rational(int numer, int denom = 1); 

	// Copy constructor 
	Rational(const Rational& r);

	// Destructor
	~Rational();

	// assinment operator (overloading operator =)
	Rational& operator=(const Rational& r);

	// accessors 
	// Retrieves the numerator value of object
	int getNumerator() const; 
	
	// Retrieves the denominator value of object
	int getDenominator() const; 
	// mutators 
	// Set the numerator value of object
	void setNumerator(int numer); 

	// Set the denominator value of object
	void setDenominator(int denom); 
	
	// facilitators 
	Rational add(const Rational& r) const; // adds 2 rational numbers.

	Rational multiply(const Rational& r) const; // multiplies 2 rational numbers.

	Rational subtract(const Rational& r) const; // subtracts 2 rational numbers.

	Rational divide(const Rational& r) const; // divides 2 rational numbers.

	bool isEqual(const Rational& r) const; // compares  2 rational numbers to determine if they are equal and returns true/false

	bool isLess(const Rational& r) const; // compares  fist rational number with second to determine if less than second rational and returns true/false

	void streamInsert(ostream& out = cout) const; // Allows output of rational to ostream and default to cout

	void streamExtract(istream& in = cin); // Alows input of rational to istream and default to cin

	void reduce();  // Reduces fraction based on greatest common denominator

	double convertToFloatingPoint() const;  // Converts rational to decimal

private: 
	// --- data members --- 
	int numeratorValue; // Holds the numerator value of object
	int denominatorValue; // Holds the denominator value of object
};

//operator overloads
Rational operator+(const Rational& left, const Rational& right); // Allows for use of operator + with Rational datatype.

Rational operator*(const Rational& left, const Rational& right); // Allows for use of operator * with Rational datatype.

Rational operator-(const Rational& left, const Rational& right); // Allows for use of operator - with Rational datatype.

Rational operator/(const Rational& left, const Rational& right); // Allows for use of operator / with Rational datatype.

bool operator==(const Rational& left, const Rational& right); // Allows for use of operator ==  with Rational datatype.

bool operator<(const Rational& left, const Rational& right); // Allows for use of operator < with Rational datatype.

bool operator<=(const Rational& left, const Rational& right); // Allows for use of operator <= with Rational datatype.

bool operator>(const Rational& left, const Rational& right); // Allows for use of operator >  with Rational datatype.

bool operator>=(const Rational& left, const Rational& right); // Allows for use of operator >= with Rational datatype.

ostream& operator<<(ostream& left, const Rational& right); // Allows for use of operator << with Rational datatype.

istream& operator>>(istream& in, Rational& r); // Allows for use of operator >>  with Rational datatype.

#endif