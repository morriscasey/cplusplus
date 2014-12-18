#include <iostream>
#include <string>
using namespace std;

void keepWindowOpen();
int number(int a, int& b);

int main()
{
	int a = 0;
	int b = 14;
	
	int c = number(a,b);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	keepWindowOpen();

}

int number(int a, int& b)
{
	int bob = 0;
	b = a;
	bob = b;
	return bob;
}

void keepWindowOpen()
{
	cout << "Press any key to continue...";
	cin.ignore();
	cin.get();
}