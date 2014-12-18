// Calculates energy drinks consumed
// Name: Casey
// Lab: 2
// Date: 4.7.14

#include <iostream>

using namespace std;

int main()
{
	const int totalSurveyed = 12467;
	int custPurchasedMore = totalSurveyed * 0.14;
	int preferredCitrus = custPurchasedMore * 0.64;

	cout << "Out of " << totalSurveyed << ", approximately " << custPurchasedMore << " drank one or more energy drinks!" << endl;
	cout << "Out of " << custPurchasedMore << " that drank more energy drinks, " << preferredCitrus << " prefer drinking citrus!" << endl;

	cin.get();
	return(0);
}