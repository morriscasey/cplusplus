/* Name: Casey Morris
 * Date: 10/5/2014
 * Filename: Date.cpp
 * Purpose: This application tests the Date.h class and displays different senarios based on input.
*/
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
	cout << "Test1:\n";
	Date test1;

	cout << "Short Form: ";
	test1.printShortForm();
	
	cout << "Long Form: ";
	test1.printLongForm();
	
	cout << "International Long Form:";
	test1.printInternationalLongForm();
	
	cout << "Test2:\n";
	Date test2(01,12,2014);
	
	cout << "ShortForm: ";
	test2.printShortForm();
	
	cout << "Long Form: ";
	test2.printLongForm();
	
	cout << "International Long Form:";
	test2.printInternationalLongForm();
	
	cout << "Test3:\n";
	Date test3(0,12,2014);
	
	cout << "ShortForm: ";
	test3.printShortForm();
	
	cout << "Long Form: ";
	test3.printLongForm();
	
	cout << "International Long Form:";
	test3.printInternationalLongForm();
	
	cout << "Test4:\n";
	Date test4(12,200,2014);
	
	cout << "ShortForm: ";
	test4.printShortForm();
	
	cout << "Long Form: ";
	test4.printLongForm();
	
	cout << "International Long Form:";
	test4.printInternationalLongForm();
	
	cout << "Change in Test4:\n";
	test4.changeDate(11,11,1996);
	
	cout << "ShortForm: ";
	test4.printShortForm();
	
	cout << "Long Form: ";
	test4.printLongForm();
	
	cout << "International Long Form:";
	test4.printInternationalLongForm();

	Date test5;
	cout << "Please enter a date:";
	cin >> test5;
	cout << "You entered the date " << test5;

	cin.ignore();
	cin.get();
	return 0;
}
