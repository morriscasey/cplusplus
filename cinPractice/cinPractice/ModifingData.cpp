// Modifiying Data
//
#include <iostream>
#include <string>
#include <iomanip> // for decimal point formatting
using namespace std;

int main()
{

	cout << "Testing" << endl;
	
	string name = "";
	cout << "What's your name? ";
	cin >> name;

	int age = 0;
	cout << "What's your age? ";
	cin >> age;

	//Minimum dating age is half your age plus 7.
	double datingAge = age / 2.0 +7;
	cout << datingAge << endl;
	cout << fixed << setprecision(3) << datingAge << endl;
	cout << "Social norms say age " << setprecision(0) << datingAge << " or above." << endl;
	double bigNum = pow(datingAge, 2);
	double z = sqrt(bignum);
	double x = cos(bignum);

	cout << "Press any key to continue!";
	cin.ignore();
	cin.get();
	return 0;
}