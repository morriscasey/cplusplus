// Title: Data Plan Billing
// Name: Casey Morris
// Date: 4.16.14
// Description: Choose device, plan, and overage to determine cost before tax.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int overage_charge = 15;

	int bill = 0;
	string device_type = " ";
	int existing_plan = 0;
	double usage = 0; // Allow for fractions for data usage.
	int overage = 0;

	cout << "Please type modem or tablet to select your existing device: ";
	cin >> device_type;
	if (device_type == "modem")
	{
		bill += 20; 
	}
	else if (device_type == "tablet")
	{
		bill += 10;
	}
	else
	{
		cout << "The device is not a valid option. Please relaunch application.";
		cin.ignore();
		cin.get();
		return(1);
	}

	cout << "What is your existing plan (4)GB, (6)GB, (8)GB, or (10)GB: ";
	cin >> existing_plan;
	
	if (existing_plan == 4)
	{
		bill += 30;
	}
	else if (existing_plan == 6)
	{
		bill += 40;
	}
	else if (existing_plan == 8)
	{
		bill += 50;
	}
	else if (existing_plan == 10)
	{
		bill +=60;
	}
	else
	{
		cout << "The information given is not valid.";
		cin.ignore();
		cin.get();
		return(1);
	}

	cout << "How much data in GB do you use each month? ";
	cin >> usage;
	if (usage <= existing_plan)
	{
		cout << "Looks like you stay within your plan!\nYour bill before tax is $" << bill << ". " << endl;
	}
	else
	{
		overage = int(usage - existing_plan) + 1; //Cell phone company rounds up data usage if go over 0.1
		bill += (overage * overage_charge);
		cout << "Your bill comes too $" << bill << ".\n";
	}



	cin.ignore();
	cin.get();
	return(0);
}