// Title: Largest and Smallest using Array
// Date: 5.28.14
// Name: Casey Morris
#include <iostream>
#include <string>
using namespace std;

// Prototypes
void waitToClose();
void initArray (int array[], int i); 
void userEnterlist(int array[], int i); 

int main()
{
	const int index = 10;
	int intList[index];

	
	initArray(intList,index);
	userEnterlist(intList,index);


	int maxInteger = intList[0];
	int minInteger = intList[0];

	for (int i = 0; i < index; i++)
	{
		
		if (intList[i] > maxInteger)
		{
			maxInteger = intList[i];
		}
		else if (intList[i] < minInteger)
		{
			minInteger = intList[i];
		}
	}

	cout << "The max integer is " << maxInteger << " and the min integer is " << minInteger << ". ";

	waitToClose();
	return(0);
}

// Initialize loop with all 0's
void initArray(int array[], int i)
{
	
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}
}

// Manually load integers from user into an array
void userEnterlist(int array[], int index)
{
	for (int i = 0; i < index; i++)
	{
		cout << "Please enter the value for integer " << i+1 << ": ";
		cin >> array[i];
	}
}

// Wait for user to press a key to close program
void waitToClose()
{
	cin.ignore();
	cin.get();
}
