// Title: Pointer Example
#include <iostream>
#include <string>
using namespace std;

void keepWindowOpen();

int main()
{
	cout << "This is a point variable demo." << endl;
	int num = 12;
	int* p1; // store address of num 
	double another = 4.5;
	cout << "My num is " << num << endl;
	cout << "num's address is " << &num << endl;
	cout << "num's address is " << reinterpret_cast<int>(&num) << endl;
	cout << "num's size is " << sizeof(num) << endl;
	p1 = &num;
	cout << "p1's value " << p1 << endl;
	cout << "p1's address" << &p1 << endl;
	int* p3;
	p3 = p1;
	
	cout << " --- p3's value is " << p3 << endl;
	cout << " --- p3 dereferencing is " << *p3 << endl;

	cout << "another is " << another << endl;


	//create an array to 5 elements
	//indexs are - through 4
	int listofNums[5] = {2,4,6,8,10};
	cout << "listOfNums is " << listofNums << endl;
	cout << "address of listOfNumbs is" << &listofNums << endl;
	cout << "the total size in bytes" << sizeof(listofNums) << endl;

	cout  << "listofNums[2] is " << listofNums[2] << endl;
	cout  << "listofNums + 2 is " << *(listofNums + 2) << endl;
	cout << "listofNums is " << *(listofNums) << endl;


	keepWindowOpen();
	return(0);
}

void keepWindowOpen()
{
	cin.ignore();
	cin.get();
}
