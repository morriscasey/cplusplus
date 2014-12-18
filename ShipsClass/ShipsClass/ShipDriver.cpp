#include "CruiseShip.h"
#include "CargoShip.h"
#include "Ship.h"
#include <iostream>

int main()
{
	Ship *fleetShips[6] =
	{
		new CargoShip("Cargo1",1945, 250),
		new CruiseShip("Cruise'n",1980, 5),
		new Ship("S.S.Minow", 1964),
		new Ship(),
		new CruiseShip(),
		new CargoShip()
	};

	for (int counter = 0; counter < 6; counter++)
	{
		fleetShips[counter]->print();
	}


	/*
	CruiseShip ship1;
	CruiseShip ship2("bob",1922, 20);
	cout << ship1.getName() << " " << ship1.getYearBuilt() << ship1.getMaxNumPassengers() << endl;
	//ship1.print();
	cout << ship2.getName() << " " << ship2.getYearBuilt() << ship2.getMaxNumPassengers() << endl;
	ship2.print();
	*/
	cin.ignore();
	cin.get();
	return 0;

}