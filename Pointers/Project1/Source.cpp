#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 4;
	int j = 8;
	double a = 3.0;
	double b = 6.0;
	int I = 0;
	double X = 0.0;

	I = (i/j) + (b % a); //doesn't work due to double not able to mod.

	cin.ignore();
	cin.get();
	return(0);
}