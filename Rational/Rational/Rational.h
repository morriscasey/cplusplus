#ifndef RATIONAL_H //include guards
#define RATIONAL_H
class Rational
{
public:
	// Allowed operations go

	//CONSTRUCTORS- allow me to initialize variables
	Rational::Rational();
	Rational::Rational(int initial_num, int initial_den);
	//MUTATORS
	void set_numerator(int new_num);
	void set_denominator(int new_den);

	//ACCESORS or INSPECTORS
	int get_numerator();
	int get_denominator();

private:
	// Where the data goes
	int numerator;
	int denominator;
};
#endif