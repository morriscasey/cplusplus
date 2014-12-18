#include <iostream>
#include <string>
using namespace std;

void keepWindowOpen();
void printWelcome();
string askForAString(string question);

int main()
{
	printWelcome();
	string name = askForAString("What is your name? ");
	string adjective = askForAString("Please enter an adjective: ");

	cout << "Have a " << adjective << " day, " << name << "!" << endl;

	keepWindowOpen();
	return 0;
}

void keepWindowOpen()
{
	cout << "Press any key to continue...";
	cin.ignore();
	cin.get();
}

void printWelcome()
{
	cout << "Welcome to the program!" << endl;
}

string askForAString(string question)
{
	cout << question;
	string answer;
	cin >> answer;
	return answer;
}