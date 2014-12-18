// Title: Working with types
// Name: Casey
// Date: 4.7.14

#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "We are working with types in this program." << endl;

	int first = 4.0, second = 3, answer;

	cout << "The value in first is " << first << endl;
	cout << "The value in second is " << second << endl;
	answer = first + second;
	cout << "Adding " << first << " + " << second << " equals "<< answer << endl;

	int quotient = first / second;
	int remainder = first / second;
	cout << "The value of quotinent is " << quotient << endl;
	cout << "The value of remainder is " << remainder << endl;

	string fn = "Bruce";
	string ln = "Wayne";
	string fullName = fn + " " + ln;

	int nameLength = fullName.length();
	cout << nameLength << endl;
	cout << fullName << endl;
	
	
	
	cin.get();
};
