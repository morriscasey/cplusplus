/*********************************************************************************************************
** Name: Casey Morris																					**
** Date: 9/24/2014
** Time: 1hr																						**
** Program Name: Date Printer																			**
** Purpose: A program that reads a date in the form of mm/dd/yyyy via user input and outputs the date in ** 
** the form of a long date pattern.																		**
*********************************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	// Read input from user
	cout << "Please enter a date to print:";
	string inputDate = "";
	getline(cin, inputDate);
	
	
	// Find the end positions for month and day using the /.
	int monthPos = inputDate.find("/",0);
	int dayPos = inputDate.find("/", monthPos + 1);

	// Declare variables to manipulate month, day, and year
	string month;
	string day;
	string year;

	// Takes the positions found for the dividing line of month and day, then determines how
	// many spaces are needed for month, day, year.
	month = inputDate.substr(0, monthPos);
	day = inputDate.substr(monthPos + 1, dayPos - (monthPos + 1));
	year = inputDate.substr(dayPos + 1, inputDate.size() - (dayPos + 1));

	// Converts string to integers; Since the assumpution is that the user will not put incorect 
	// info.
	int outMonth = atoi(month.c_str());
	int outDay = atoi(day.c_str());
	int outYear = atoi(year.c_str());

	// Once month is entered the switch will output the matching month.
	switch(outMonth)
	{
		case (1):
			cout << "January";
			break;
		case (2):
			cout << "February";
			break;
		case (3):
			cout << "March";
			break;
		case (4):
			cout << "April";
			break;
		case (5):
			cout << "May";
			break;
		case (6):
			cout << "June";
			break;
		case (7):
			cout << "July";
			break;
		case (8):
			cout << "August";
			break;
		case (9):
			cout << "September";
			break;
		case (10):
			cout << "October";
			break;
		case (11):
			cout << "November";
			break;
		case (12):
			cout << "December";
			break;
	}

		

	

	// Output the remaining information
	cout << " " << outDay << ", " << outYear << endl;
	return 0;
}