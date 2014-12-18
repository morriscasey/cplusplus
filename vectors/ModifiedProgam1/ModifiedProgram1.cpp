// Title: Largest and Smallest Vectors with Min and Max functions
// Name: Casey Morris
// Dates: 5.21.14
// Description: Write a program that lets the user enter 10 integer values into a vector. The program should then display 
// the largest and smallest values in the array. (Calculate the min and max after the values are saved into the vector.)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Protoypes
void waitToEnter(); //Waits for user to press a key to exit
int findMin(const vector<int>& v); // finds and returns the smallest value in the vector
int findMax(const vector<int>& v); // finds and returns the largest value in the vector

int main()
{
	vector<int> integer;
	int intInput;
	int maxInteger = 0;
	int minInteger = 0;
	
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter integer value number " << (i + 1) << ": ";
		cin >> intInput; 
		integer.push_back(intInput);
	}

	minInteger = findMin(integer);
	maxInteger = findMax(integer);

	cout << "The max integer is " << maxInteger << " and the min integer is " << minInteger << ". ";


	waitToEnter();
	return(0);
}

// finds and returns the smallest value in the vector
int findMin(const vector<int>& v) 
{
	int min = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		 if (v[i] < min)
			min = v[i];
	}
		
	return min;
}

// finds and returns the largest value in the vector
int findMax(const vector<int>& v) 
{
	int max = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
		
	return max;
}


void waitToEnter()
{
	cin.ignore();
	cin.get();
}