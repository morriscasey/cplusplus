#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Working with files today" << endl;

	ifstream  fin("MySavedFile.txt");

	int total = 0;
	int number = 0;

	while (fin >> number)
	{
	
			total = total + number;
	
	}

	cout << total;
	fin.close;

	cin.ignore();
	cin.get();
	return(0);
}