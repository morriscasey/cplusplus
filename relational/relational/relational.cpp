// Relational Operators
// Name: Casey
// Date: 4/14/14
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<< "Demo for relational operators" << endl;
	int age = 0;
	cout << "Please enter the custoemr's age: ";
	cin >> age;

	string name = "";
	cout << "Please enter the ustomer's name: ";
	cin >> name;
	
	bool canOrderDrinks = age >= 21;

	if (canOrderDrinks)
	{
	cout << name << " can order drinks" << endl;
	}
	cout << "Okay, we're done here!" << endl;
	

	char junk;
	cin >> junk;
	return(0);
}