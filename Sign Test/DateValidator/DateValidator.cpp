// Title: Date Validator
// Name: Casey Morris
// Date: 4.16.14
// Description: Application takes a date(mm dd yyyy) and outputs whether the date is valid.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month = 0;
	int day = 0;
	int year = 0;
	int end_date = 0;
	bool leap_year = false;
	bool valid_month = false;



	// Enter date to check
	cout << "Please enter a date (mm dd yyyy): ";
	cin >> month  >> day >> year;
	

	// Determine valid leap year
	if (year % 4 != 0) // If not divisable by 4 evenly
	{
		leap_year = false;
	}
	else if (year % 100 != 0)
	{
		leap_year = true;
	}
	else if (year % 400 == 0)
	{
		leap_year = true;
	}
	else
	{
		leap_year = false;
	}


	// Determine the month is valid
	if (month >= 1 && month <= 12)
	{
		valid_month = true;
	}
	else
	{
		valid_month = false;
	}

	// Determine the date is valid
	if (month % 2 == 1) // Determines if the month is odd 
	{
		end_date = 31;
	}
	else if (month % 2 == 0 && month == 2) // Determines if the month is Feb and whether to add a day or not.
	{
		if(leap_year == true)
		{
			end_date = 29;
		}
		else
		{
			end_date = 28;
		}
	}
	else
	{
		end_date = 30; // Any other even month set to 30 days.
	}

	if (valid_month == false)
	{
		cout << "Invalid month: " << month << endl;
	}
	else if (day < 1 || day > end_date)
	{
		cout << "Invalid day of the month: " << day << endl;
	}
	else
	{
		cout << month << "/" << day << "/" << year << " is a valid date." << endl;
	}
	



	cin.ignore();
	cin.get();
	return(0);
}