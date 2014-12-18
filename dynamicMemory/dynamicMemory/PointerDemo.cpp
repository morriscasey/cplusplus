#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "This is the pointer / dynamic memory demo." << endl;

	int* p = new int(6);
	unsigned int* q = new unsigned int(150000000000);

	cout << "Address of inside p: "<< p << endl;
	cout << "The value of p: " << *p << endl;
	
	cout << "Address of inside q: "<< q << endl;
	cout << "The value of q: " << *q << endl;
	
	delete p;
	delete q;

	cin.ignore();
	cin.get();
}