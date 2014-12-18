// Title: Number Analysis
// Name: Casey Morris
// Date: 5.28.14
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string filename;
	ifstream input;
	int value;
	vector<int> numList;
	int maxInteger;
	int minInteger;
	int total = 0;
	int average = 0;

	//asks the user for a file name. Assume the file contains a series of numbers, each written on a separate line.
	cout << "Please enter the text file you would like to use: ";
	cin >> filename;

	input.open(filename);

	if (input)
	{
		//read the contents of the file into a vector
		while (input >> value)
		{
			numList.push_back(value);
		}
		input.close();

		maxInteger = numList[0];
		minInteger = numList[0];

		for (unsigned int i = 0; i < numList.size();i++)
		{
			total += numList[i]; //assigns the total of the numbers in the vector 
			

			if (numList[i] > maxInteger)
			{
				maxInteger = numList[i];    //assigns the highest number in the vector
				
			}
			else if (numList[i] < minInteger)
			{
				minInteger = numList[i]; 	//assigns the lowest number in the vector
				
			}
		}

		average = total/numList.size(); // calculates the average of integers.
		
		cout << "The total: " << total << endl;
		cout << "Min integer: " << minInteger << endl;	
		cout << "Max integer: " << maxInteger << endl;
		cout << "Average Integer: " << average;
	}
	else
	{
		cout << "You have entered an incorrect file. Goodbye!";
	}
	cin.ignore();
	cin.get();
	return(0);
}