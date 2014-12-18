// Title: Calculate the tax of a purchase
// Name: Casey 
// Lab: 2
// Date: 4.7.14

#include <iostream>

using namespace std;

int main()
{
	const double stateTax = 0.04;
	const double countryTax = 0.02;
	const double purchaseItem = 52;

	double total = ((purchaseItem * stateTax) + (purchaseItem * countryTax));
	cout << "The total sales tax on $" << purchaseItem << " is " << total << "%." << endl;
	cout << "The total including sales tax is $" << purchaseItem + total << endl;
	

	cin.get();
	return(0);
}