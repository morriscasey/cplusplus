// Title: Land Calculation
// Name: Casey
// Lab: 2
// Date: 4.7.14

#include <iostream>

using namespace std;

int main()
{
	double acre = 1.0 / 43560;
	double tractOfland = 389767;
	double numAcres = tractOfland * acre;
	cout << "389,767 square feet is equal to " << numAcres << " acres of land." << endl;


	cin.get();
	return(0);

}