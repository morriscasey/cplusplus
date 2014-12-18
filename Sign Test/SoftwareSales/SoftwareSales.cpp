// Title: Software Sales
// Name: Casey Morris
// Date: 4.16.14
// Description: Recalculate the total cost of purchase based on the quantity.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const double retail_price = 99.00;
	int amount = 0;
	double discount = 0;
	
	cout << "Please enter the amount of units you would like to purchase? ";
	cin >> amount;

	if (amount <= 0)
	{
		cout << "The amount you entered is not valid. Please relaunch application.";
		cin.ignore();
		cin.get();
		return(1);
	}
	else if (amount >= 10 && amount < 20)
	{
		discount = 0.20;
	}
	else if (amount >= 20 && amount < 50)
	{
		discount = 0.30;
	}
	else if (amount > 50 && amount < 100)
	{
		discount = 0.50;
	}
	else if (amount >= 100)
	{
		discount = 0.50;
	}
	else
		discount = 0;

	cout << "Your total balance based on " << amount << " units comes to $" << fixed << setprecision(2) << (amount * (retail_price + (retail_price * discount))) << endl;

cin.ignore();
cin.get();
return(0);
}