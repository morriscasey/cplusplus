#include <iostream>
#include <string>
#include "Animal.h"
#include "Tiger.h"
#include "Giraffe.h"

using namespace std;
 
int main()
{
	Animal annie;
	annie.setName("Annie");
	annie.eat();

	Animal billy;
	billy.setName("Billy");
	billy.sleep();

	Tiger timmy;
	timmy.setName("Timmy");
	timmy.eat();

	Giraffe george;
	george.eat();

	cin.ignore();
	cin.get();
	return 0;
}