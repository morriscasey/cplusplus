// Title: Number Analysis Array
// Name: Casey Morris
// Date: 5.28.14
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Prototypes
void waitToClose(); //Wait for responce from customer to close.
void initArray(int array[], int i); //Initialize array for input. Set values to 0.
void findMin(int a[], int i, int& min); //Find min value and pass value throug parameter reference.
void findMax(int a[], int i, int& max); //Find max value and pass value throug parameter reference.

int main()
{
	const int index = 1000; //Max limit of array
	int min = 0;
	int max = 0;
	int avg = 0;
	int total = 0;
	int integerInput;
	int counter = 0; //Used to make sure not over limit of memory space
	int intList[index];
	string filename;
	ifstream fin;

	initArray(intList, index);

	//enter a file name to input
	cout << "Please enter the text file you would like to use:";
	cin >> filename;
	fin.open(filename);
	if (fin)
	{
		while (fin >> integerInput && counter < index)
		{
			//Add input and count the number to integers to put in array
			intList[counter] = integerInput;
			total += intList[counter];
			findMin(intList,counter,min);
			findMax(intList,counter,max);
			counter += 1;

		}

		avg = (total / (counter - 1));

		cout << "The total: " << total << endl;
		cout << "Min integer: " << min << endl;	
		cout << "Max integer: " << max << endl;
		cout << "Average Integer: " << avg;
	}
	else
	{
		cout << "You have entered an incorrect file. Please re-launch application.";
	}
	waitToClose();
	return(0);
}

// Initialize loop with all 0's
void initArray(int array[], int sizeOFArray)
{
	
	for (int i = 0; i < sizeOFArray; i++)
	{
		array[i] = 0;
	}
}

void findMin(int a[], int i, int& min)
{
	if (i == 0)
	{
		min = a[0];
	}
	else if (a[i] < min)
	{
		min = a[i];
	}
}

void findMax(int a[], int i, int& max)
{
	if (i == 0)
	{
		max = a[0];
	}
	else if (a[i] > max)
	{
		max = a[i];
	}
}

void waitToClose()
{
	cin.ignore();
	cin.get();
}