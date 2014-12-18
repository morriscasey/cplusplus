// Title: Largest and Smallest using Array using a void function for initalization
// Date: 06.02.14
// Name: Casey Morris
#include <iostream>
#include <string>
using namespace std;

// Prototypes
void initialize(int A[], int n, int val); // Initilizes array A[n] with a value of interest.
void waitToClose(); //Wait for responce from customer to close.
//void initArray (int array[], int i); 
void userEnterlist(int array[], int i); 
int findMin(int a[], int size); // finds and returns the smallest value in the array w/given size
int findMax(int a[], int size); // finds and returns the largest value in the array w/given size

int main()
{
	const int index = 10;
	int intList[index];
	int interest = 0;

	
	//initArray(intList,index);
	initialize(intList, index, interest);
	userEnterlist(intList,index);

	int maxInteger = findMin(intList, index);
	int minInteger = findMax(intList, index);
	

	cout << "The max integer is " << maxInteger << " and the min integer is " << minInteger << ". ";

	waitToClose();
	return(0);
}

// Initialize loop with value of interest.
void initialize(int A[], int n, int val)
{
	
	for (int i = 0; i < n; i++)
	{
		A[i] = val;
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
