// Title: Modified Distance Analyzer
// Name: Casey Morris
// Description: User decides either to import or type value. Once decided the program analyzes the data received.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename = "";
	string fromName = "";
	string toName = "";
	string greatestToName;
	string greatestFromName;
	string smallestToName;
	string smallestFromName;

	double currentDistance = 0.0;
	double mean = 0.0;
	double totalDistance = 0.0;
	double greatest = 0.0;
	double smallest = 10000.0;
	
	int count = 0;
	

	char choice = ' ';
	bool correct_input = false;
	

	//Loops error message until y or n given.
	while (correct_input != true)
	{
		// Prompt user for descission.
		cout << "Would you like to enter the routes manually(y/n)? ";
		cin >> choice;


		if (choice == 'y')
		{
			//manually enter route count
			cout << "How many routes will be entering? ";
			cin >> count;
			for (int i=1; i <= count; i++)
			{
				//Prompt user to enter distances manually
				cout << "Please enter route" << i << "'s distance in miles: ";
				cin >> currentDistance;

				//Add current distance to total
				totalDistance += currentDistance;

				// Conditional to determine if smallest or largest;
				if (greatest < currentDistance)
				{
					greatest = currentDistance;
					//Converts integer to string to enter manual route
					string convertToText = "Route" + to_string(i);
				    greatestToName = convertToText;
					greatestFromName = convertToText;
				}
				else if (smallest > currentDistance)
				{
					smallest = currentDistance;
					string convertToText = "Route" + to_string(i);
					smallestToName = convertToText;
					smallestFromName = convertToText;
				}
			
			}

			//completes correct_input loop
			correct_input = true;
		}
		else if (choice == 'n')
		{
			// prompts to load text file
			cout << "Please type the directory and file to imput?";
			cin >> filename;
			ifstream fin(filename);

			while (!fin)
			{
				 //file not correct get an error message
				cout << "The file provided is not correct!";
				cout << "Please type the directory and file to imput?";
				cin >> filename;

			}

			//read in input from txtfile
			while (fin >> fromName >> toName >> currentDistance) 
			{
				//counter for mean
				count += 1;
			
				// Adds the distances together
				totalDistance += currentDistance;

				// Conditional to determine if smallest or largest;
				if (greatest < currentDistance)
				{
					greatest = currentDistance;
					greatestToName = toName;
					greatestFromName = fromName;
				}
				else if (smallest > currentDistance)
				{
					smallest = currentDistance;
					smallestToName = toName;
					smallestFromName = fromName;
				}
			
			}		
			//completes correct_input loop
			correct_input = true;
			fin.close();
			
		}
		else 
		{
			cout << "The information given is not valid!" << endl;
			//correct_input loop stays active
			correct_input = false;
		}
	}
	// displays calculated information
	cout << "Total distance: " << totalDistance << " miles." << endl;
	cout << "Mean(average) distance between two cities: " << (totalDistance/count) << " miles. " << endl;
	cout << "The route between " << smallestFromName << " to " << smallestToName << " is the smallest distance at " << smallest << " miles." << endl;
	cout << "The route between " << greatestFromName << " to " << greatestToName << " is the greatest distance at " << greatest << " miles." << endl;


		

	
	cin.ignore();
	cin.get();
	return(0);


}