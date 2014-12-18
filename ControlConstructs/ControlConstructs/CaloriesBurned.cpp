// Title: Show calories burned starting at 10 mins and going to 30 in 5 minute increments
// Name: Casey Morris
// Date: 4.28.2014
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//used for original kcal program
	int kcal = 0;
	int i = 0;
	
	for (i = 10; i <= 30; i+=5)
	{
		kcal = i * 3.9;
		cout << "At " << i << " minutes, your calories burned is " << kcal << endl; 
	
	}
	cin.ignore();
	cin.get();
	return(0);
}