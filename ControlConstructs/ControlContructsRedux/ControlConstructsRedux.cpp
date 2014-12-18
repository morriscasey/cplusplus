// Title: Show calories burned starting at 10 mins to users choose of time based on 5 minute increments
// Name: Casey Morris
// Date: 4.28.2014
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//used for original kcal program
	int kcal = 0;
	int i = 0;

	//used for modified kcal program
	int workout_mins = 0;

	cout << "How many minutes did you work out? ";
	cin >> workout_mins;
	
	for (i = 10; i <= workout_mins; i+=5)
	{
		kcal = i * 3.9;
		cout << "At " << i << " minutes, your calories burned is " << kcal << endl; 
	
	}
	cin.ignore();
	cin.get();
	return(0);
}