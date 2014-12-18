#include <iostream>
#include <string>
using namespace std;

int main()
{
	// User enters email and saved into a string.
	string emailEntered;
	cout << "Please enter an email address:";
	getline(cin, emailEntered);

	// Filter out user name from emailEntered
	int pos = emailEntered.find("@",0);

	// Saved info before the @ sign as username
	string userName = emailEntered.substr(0,pos);

	// Saved info after the @ sign as domain name; 
	string domainName = emailEntered.substr((pos+1), emailEntered.length());
	
	// Output the user name with domain name split into user friendly info
	cout << "User " << userName << " is on domain " << domainName << endl;


	cin.ignore();
	cin.get();
	return 0;
}