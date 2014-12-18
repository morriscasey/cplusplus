//Title: Emergency Landing
//Name: Casey Morris
//Date: 5.14.2014
//Description: User inputs long and lat then the applicaiton calculates the 3 closest landing areas
//   based on a text file.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() 
{
	double lat = 0.0;
	double lon = 0.0;
	char comma = ',';
	int seqNum = 0;
	string airport = "";
	string city = "";
	string country = "";
	string airportCode1 = "";
	string airportCode2 = "";
	double latDestination = 0;
	double lonDestination = 0;
	double unknown1 = 0;
	double unknown2 = 0;
	string direction = 0;



	//User is prompted for latitude andlongitude
	cout << "Please enter your latitude and longitude(ex: 34.123,-9.163): ";
	cin >> lat >> comma >> lon;

	//***debug
	cout << lat << "," << lon;

	//Read file with world's airports
	ifstream fin("worldAirports.txt");
	
	fin >> seqNum >> airport >> city >> country >> airportCode1 >> airportCode2 >> latDestination >> lonDestination >> unknown1 >> unknown2 >> direction;
	//if (fin)
	//{
		//Calculate the 3 nearest distances
		//while (fin >> seqNum >> airport >> city >> country >> airportCode1 >> airportCode2 >> latDestination >> lonDestination >> unknown1 >> unknown2 >> direction) 

			//{
				cout << seqNum << airport << city << country << airportCode1 << airportCode2 << latDestination << lonDestination << unknown1 << unknown2 << direction << endl;
			//}
		//Print out the name, city, and lat-lon coordinates, and the distance to reach the closest airport
	
	//}
	//else
	//{
	//	cout << "Oh no! It looks like the file has moved." << endl;
	//	cout << "Please report issue." << endl;
	//}
	fin.close();
	cin.ignore();
	cin.get();
	return(0);
}