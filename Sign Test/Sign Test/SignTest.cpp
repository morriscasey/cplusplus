// Title: Sign Test
// Name: Casey Morris
// Date: 4.16.14
// Description: Reads a single integer and outputs if it is positive or negative.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 0;
	cout << "Choose a number to determine if negative or positive? ";
	cin >> number;

	if (number == 0) // Checks to see if equal to 0
	{
		cout << "This number is equal to zero." << endl;
	}
	else if (number > 0) // Checks to see if greater than 0
	{
		cout << "The number "<< number << " is positive." << endl;
	}
	else if (number < 0) // Checks to see if less than 0
	{
		cout << "The number "<< number << " is negative." << endl;
	}
	else
		cout << "You have pressed an incorrect key." << endl; // Tells user if key pressed doesn't match a number.

	cin.ignore();
	cin.get();
	return(0);
}