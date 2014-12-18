// Description: This class intializes an Animal class with a funciton to eat and sleep
#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
class Animal
{
public:
	Animal();
	void eat();
	void sleep();
	//getter
	string getName();
	//setter
	void setName(string changeName);

protected:
	string name;
};
#endif