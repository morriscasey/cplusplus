#include "Pet.h"

Pet::Pet()
{
	name = "Unknown";
}

Pet::Pet(string initialName)
{
	name = initialName;
}

string Pet::getName() const
{
	return name;
}

void Pet::setName(string newName)
{
	name = newName;
}