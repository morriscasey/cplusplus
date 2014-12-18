#include "Pet.h"
#include "Cat.h"
#include "Dog.h"


#include <iostream>
using namespace std;

int main()
{
	Pet* animalHouse[4]; 

	animalHouse[0] = new Cat;
	animalHouse[1] = new Cat;
	animalHouse[2] = new Dog;
	animalHouse[3] = new Dog;

	
	for (int counter = 0; counter < 4; counter++)
	{
		animalHouse[counter]->talk();
	}
	cin.ignore();
	cin.get();
	return 0;
}