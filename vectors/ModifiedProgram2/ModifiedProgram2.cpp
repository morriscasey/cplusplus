// Title: Largest and Smallest using Array
// Date: 5.28.14
// Name: Casey Morris
#include <iostream>
#include <string>
using namespace std;

// Prototypes
void waitToClose(); //Wait for responce from customer to close.
void initArray (int array[], int i); 
void userEnterlist(int array[], int i); 
int findMin(int a[], int size); // finds and returns the smallest value in the array w/given size
int findMax(int a[], int size); // finds and returns the largest value in the array w/given size

int main()
{
	const int index = 1000;
	int intList[index];

	
	initArray(intList,index);
	userEnterlist(intList,index);

	int maxInteger = findMax(intList, index);
	int minInteger = findMin(intList, index);
	

	cout << "The max integer is " << maxInteger << " and the min integer is " << minInteger << ". ";

	waitToClose();
	return(0);
}

// Initialize loop with all 0's
void initArray(int array[], int sizeOFArray)
{
	
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}
}


// Manually load integers from user into an array
void userEnterlist(int array[], const int index)
{
	for (int i = 0; i < index; i++)
	{
		cout << "Please enter the value for integer " << i+1 << ": ";
		cin >> array[i];
	}
}

// finds and returns the smallest value in the array w/given size
int findMin(int a[], int size) 
{
	int min = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

// finds and returns the largest value in the array w/given size
int findMax(int a[], int size)
{
	int max = a[0];
	for (int i = 0; i < size; i++)
	{
		
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

// Wait for user to press a key to close program
void waitToClose()
{
	cin.ignore();
	cin.get();
}
