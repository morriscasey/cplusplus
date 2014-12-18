#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Working with files today" << endl;

	// set up the file streamm for writing
	ofstream fout("MySavedFile.txt");
	fout << "Hello again!" << endl;
	fout << "What is going on here?" << endl;

	fout.close();

	ifstream fin("MySavedFile.txt");
	string greeting = "";
	getline(fin, greeting);
	cout << greeting;

	cin.ignore();
	cin.get();
	return(0);
}