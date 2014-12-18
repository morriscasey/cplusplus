/* Name: Casey Morris
 * Date: 10/16/2014
 * Filename:rationaltester.cpp
 * Description: Built to test the class Rational.  
 */

#include  "rational.h"
#include  <iostream>
using namespace std; 
int main() 
{ 
	Rational p; // p uses the default constructor 
	Rational q(1, 2); // q uses the other constructor 
	Rational b(1); // uses constructor to initialize numerator and defaults the denominator to 1

	cout << b << endl;
	p.setNumerator(1); // set p to be 1/4 
	p.setDenominator(4); 
	p= p + q;
	p= p * q;

	//print out p and q
	p.streamInsert(cout);

	cout << "p is " << p.getNumerator() << "/" << p.getDenominator() << endl; 
	cout << "q is " << q.getNumerator() << "/" << q.getDenominator() << endl; 
	
	Rational r; 
	Rational s; 
	cout << "Enter a rational number (a/b): "; 
	cin >> r; 
	cout << "Enter a rational number (a/b): "; 
	cin >> s; 

	cout << "You entered the rational numbers " << r << " and " << s << endl;
	
	//Confirm +,-,*, and / works with rationals.
	Rational sum = r + s;
	Rational product = r * s;
	Rational difference = r - s;
	Rational divide = r/s;

	// Test greater than, greater than or equal to, and isEqual
	cout << "Changing value of r and s..." << endl;
	r.setNumerator(3);
	r.setDenominator(4);
	
	s.setNumerator(1);
	s. setDenominator(4);

	if (r >= s)
	{
		cout << r << " is greater than or equal to " << s << endl;
		if (r > s)
		{
			cout << "okay..." << r << " is actually greater than " << s << endl;
		}
		else if (r== s)
		{
			cout << "okay..." << r << " is actually equal to " <<  s << endl;
		}
	}
	else
	{
		cout << "Oops, I enter an incorrect rational to test greater than or equal to!" << endl;
	}

	// Test less than, less than or equal to, and isEqual(again)
	cout << "Changing value of r and s again..." << endl;
	r.setNumerator(1);
	r.setDenominator(4);

	s.setNumerator(3);
	s. setDenominator(4);

	if (r <= s)
	{
		cout << r << " is less than or equal to " << s << endl;
		if (r < s)
		{
			cout << "okay..." << r << " is actually less than " << s << endl;
		}
		else if (r== s)
		{
			cout << "okay..." << r  << " is actually equal to " << s << endl;
		}
	}
	else
	{
		cout << "Oops, I enter an incorrect rational to test less than or equal to!" << endl;
	}
	
	// Test the ability to cout new ADT.
	cout << r << " + " << s << " = " << sum << endl;
	cout << r << " * " << s << " = " << product << endl;
	cout << r << " - " << s << " = " << difference << endl;
	cout << r << " / " << s << " = " << divide << endl;
	
	// Test cloning or coping Rational ADT
	Rational t(s); 
	double tFloat = t.convertToFloatingPoint();
	cout << "s copied the rational " << s << " to t " << t << "." << endl;
	cout << "t in decimal equals: " << tFloat << endl; 

	// Test reducing rational **extra credit***
	r.setNumerator(12);
	r.setDenominator(4);

	s.setNumerator(6);
	s. setDenominator(8);
	
	r.reduce();
	s.reduce();

	cout << "r is now reduced to " << r << endl;
	cout << "s is now reduced to " << s << endl;
	cin.ignore();
	cin.get();
	return 0; 
}