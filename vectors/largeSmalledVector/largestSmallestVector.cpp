// Title: Largest and Smallest Vectors
// Name: Casey Morris
// Dates: 5.21.14
// Description: Write a program that lets the user enter 10 integer values into a vector. The program should then display 
// the largest and smallest values in the array. (Calculate the min and max after the values are saved into the vector.)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void waitToEnter();

int main()
{
	vector<int> integer;
	int intInput;
	
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter integer value number " << (i + 1) << ": ";
		cin >> intInput; 
		integer.push_back(intInput);
	}

	int maxInteger = integer[0];
	int minInteger = integer[0];

	for (int i = 0; i < integer.size(); i++)
	{
		
		if (integer[i] > maxInteger)
		{
			maxInteger = integer[i];
		}
		else if (integer[i] < minInteger)
		{
			minInteger = integer[i];
		}
	}

	cout << "The max integer is " << maxInteger << " and the min integer is " << minInteger << ". ";


	waitToEnter();
	return(0);
}

void waitToEnter()
{
	cin.ignore();
	cin.get();
}