#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
	name = "empty";
}
void Animal::eat()
{
	cout << name << " is eating: crunch crunch gulp" << endl;
}

void Animal::sleep()
{
	cout << name << " is zzzzzzz...." << endl;
}

string Animal::getName()
{
	return name;
}
	//setter
void Animal::setName(string changeName)
{
	name = changeName;
}
