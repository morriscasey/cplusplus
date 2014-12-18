// Title: Distance Analyzer
// Name: Casey Morris
// Date: 4.30.2014
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double total_dist = 0;
	double current_distance = 0;
	double smallest_distance = 10000;
	double greatest_distance = -1;
	
	int max_routes = 0;
	int counter = 0;

	cout << "How many routes did you take? ";
	cin >> max_routes;

	if (max_routes > 0) 
	{

		for (counter = 1; counter <= max_routes; counter += 1)
		{
			cout << "Please enter route " << counter << "\'s miles?";
			cin >> current_distance;
		
			if (current_distance < 0)
			{
				cout << "You can't go less than 0 miles!";
				current_distance = 0;
			}
			else
			{
				total_dist += current_distance; // add to total distance
			
				if (smallest_distance > current_distance) //filter 
				{
					smallest_distance = current_distance;
				}
				else if (greatest_distance < current_distance)
				{
				greatest_distance = current_distance;
				}

			}
		}
		cout << "\n\nYour total distance:" << total_dist << "!"<< endl;
		cout << "Your smallest distance between two cities:" << smallest_distance << endl;
		cout << "Your greatest distance between two cities:" << greatest_distance << endl;
		cout << "Your mean(average) distance between two cities:" << (total_dist/max_routes) << endl;
		
	}
	else
	{
		cout << "You will need to pick a number greateer than 0!";
	}

	cin.ignore();
	cin.get();
	return(0);
}