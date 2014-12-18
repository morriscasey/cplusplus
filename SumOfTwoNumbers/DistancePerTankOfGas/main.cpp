// Distance Per Tank of Gas
// Name: Casey 
// Lab: 2
// Date: 4.7.14

#include <iostream>

using namespace std;

int main()
{
	const double gasTank = 20;
	const double gallonPerMileTown = 21.5;
	const double gallonPerMileHighway = 26.8;
	double distanceTown = gasTank * gallonPerMileTown;
	double distanceHwy = gasTank * gallonPerMileHighway;

	cout << "A car with a " << gasTank << " gallon gas tank and " << gallonPerMileTown << " miles per gallon, can travel " << distanceTown << " miles." << endl;
	cout << "A car with a " << gasTank << " gallon gas tank and " << gallonPerMileHighway << " miles per gallon, can travel " << distanceHwy << " miles." << endl;

	cin.get();
	return(0);
}