#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational()
{
	numerator = 0;
	denominator = 1;
}
Rational::Rational(int initial_num, int initial_den)
{
	numerator = initial_num;
	if(initial_den != 0)
	{
		denominator = initial_den;
	}
	else
	{
		cout << "Illegal denominator" << endl;
		denominator = 1;
	}
}
	//MUTATORS
void Rational::set_numerator(int new_num)
{
	numerator = new_num;
}

void Rational::set_denominator(int new_den)
{
	if (new_den != 0)
	{
		denominator = new_den;
	}
}

	//ACCESORS or INSPECTORS
int Rational::get_numerator()
{
	return numerator;
}
int Rational::get_denominator()
{
	return denominator;
}