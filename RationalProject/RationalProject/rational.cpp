/* Name: Casey Morris
 * Date: 10/16/2014
 * Filename:rational.cpp
 * Description: The implementation file that contains basic arithmetic functions for using rationals. Examples include adding,
 *   subtracting, <, >=, reducing, etc...
 */

#include "rational.h" 
#include <iostream>

using namespace std;

// default constructor 
Rational::Rational() 
{ 
	numeratorValue = 0; 
	denominatorValue = 1; 
} 
// a constructor that takes two parameters 
Rational::Rational(int numer, int denom) 
{ 
	numeratorValue = numer; 
	denominatorValue = denom; 
} 

//Allows initialization with another rational
Rational::Rational(const Rational& r)
{
	numeratorValue = r.numeratorValue;
	denominatorValue = r.denominatorValue;
}

// Destorys constructor
Rational::~Rational()
{
	//no cleanup required
}

// operator - (assignment operator)
Rational& Rational::operator=(const Rational& r)
{
	numeratorValue = r.getNumerator();
	denominatorValue = r.getDenominator();
	return *this;

}
// member functions (accessors) 
int Rational::getNumerator() const 
{ 
	return numeratorValue; 
} 
int Rational::getDenominator() const 
{ 
	return denominatorValue; 
} 
// member functions (mutators) 
void Rational::setNumerator(int numer)
{
	numeratorValue = numer; 
} 
void Rational::setDenominator(int denom) {
	denominatorValue = denom;
}

Rational Rational::add(const Rational& r) const
{
	int n = numeratorValue * r.getDenominator() + denominatorValue * r.getNumerator();
	int d = denominatorValue * r.getDenominator();
	Rational result(n,d);
	return result;

}

Rational Rational::multiply(const Rational& r) const
{
	int n = numeratorValue * r.getNumerator();
	int d = denominatorValue * r.getDenominator();
	Rational result(n,d);
	return result;
} 

Rational Rational::subtract(const Rational& r) const
{
	int n = numeratorValue * r.getDenominator() - denominatorValue * r.getNumerator();
	int d = r.getDenominator() * denominatorValue;
	Rational result(n,d);
	return result;

}

Rational Rational::divide(const Rational& r) const
{
	int n = numeratorValue * r.getDenominator();
	int d = denominatorValue * r.getNumerator();
	Rational result(n,d);
	return result;
} 

bool Rational::isEqual(const Rational& r) const
{
	return ((numeratorValue == r.getNumerator()) && (denominatorValue == r.getDenominator()));
}

bool Rational::isLess(const Rational& r) const
{
	double decimalFirstRational = numeratorValue / (double)denominatorValue;
	double decimalSecondRational = r.numeratorValue / (double)r.denominatorValue;

	if (decimalFirstRational < decimalSecondRational)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void Rational::streamInsert(ostream& out) const
{
	out << numeratorValue << "/" << denominatorValue;
}

void Rational::streamExtract(istream& in)
{
	char slash;
	in >> numeratorValue;
	in >> slash;
	in >> denominatorValue;
}

void Rational::reduce()
{
	bool foundGCD = false;
	int GCD;
	int nummer = numeratorValue;
	int denom = denominatorValue;
	int swapGCD = 0;
	while (!foundGCD)
	{
		if (nummer == 0 )
		{
			GCD = denom;
			foundGCD = true;
		}
		else
		{
			swapGCD = nummer;
			nummer = denom % nummer;
			denom = swapGCD;
		}
	}
	numeratorValue = numeratorValue/GCD;
	denominatorValue = denominatorValue/GCD;
	
}

double Rational::convertToFloatingPoint() const
{
	double convertRational = numeratorValue / (double)denominatorValue;
	return convertRational;
}
Rational operator+(const Rational& left, const Rational& right)
{
	return left.add(right);
}
Rational operator*(const Rational& left, const Rational& right)
{
	return left.multiply(right);
}

Rational operator-(const Rational& left, const Rational& right)
{
	return left.subtract(right);
}
Rational operator/(const Rational& left, const Rational& right)
{
	return left.divide(right);
}

bool operator==(const Rational& left, const Rational& right)
{
	return left.isEqual(right);
}

bool operator<(const Rational& left, const Rational& right)
{
	return left.isLess(right);
}

bool operator<=(const Rational& left, const Rational& right)
{
	return (left.isLess(right) || left.isEqual(right));
}

bool operator>(const Rational& left, const Rational& right)
{
	return right.isLess(left);
}

bool operator>=(const Rational& left, const Rational& right)
{
	return (right.isLess(left) || right.isEqual(left));
}

ostream& operator<<(ostream& left, const Rational& right)
{
	right.streamInsert(left);
	return left;
}

istream& operator>>(istream& in, Rational& r)
{
	r.streamExtract(in);
	return in;
}

