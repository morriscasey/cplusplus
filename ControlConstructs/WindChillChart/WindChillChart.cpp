// Title: Wind Chill Chart
// Name: Casey Morris
// Date: 4.30.14
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int temp = 0;
	int wind = 0;
	double  wind_chill;

	cout << "   ";

	// Draws out upper part of chart
	for (temp = 40; temp >= -45; temp -= 5)
	{
		cout << setw(4) << temp;
	}
	cout << endl; // adjustment to compensate for setw(4)
	cout << endl;

	for (wind = 5; wind <= 60; wind += 5)
	{
		// adds a zero 
		if (wind >= 0 && wind < 10)
		{
			cout << "0";
		}
		cout << wind << " ";
		for (temp = 40; temp >= -45; temp -= 5)
		{
				
				// -- Calculate wind chill factor
				wind_chill = 35.74 + (0.6215 * temp) - 35.75 * (pow(wind,0.16)) + 0.4275 * temp * (pow(wind,0.16));
				//cout << setw(4) << wind;
				// -- changed decimal
				cout << fixed << setw(4) << setprecision(0) << wind_chill;
		}
		cout << endl;
	}

	cin.ignore();
	cin.get();
	return(0);
}