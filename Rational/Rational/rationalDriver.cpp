#include <iostream>
#include <string>
#include "Rational.h"
using namespace std;

int main()
{
	cout << "Rational Test" << endl;
	
	Rational a(1,2);
	Rational b(2,3);
	Rational s;
	Rational t;

	s.set_numerator(22);
	s.set_denominator(2);

	cout << s.get_numerator() << " " << s.get_denominator() << endl;
	cin.ignore();
	cin.get();
	return 0;
}