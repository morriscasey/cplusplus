//Title: Emergency Landing
//Name: Casey Morris
//Date: 5.14.2014
//Description: User inputs long and lat then the applicaiton calculates the 3 closest landing areas
//   based on a text file.
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.141592653589793;
	const double earthRadius = 6371;
	int seq = 0;
	
	//Variables to read in text data
	string airportName = "";
	string city = "";
	string country = "";
	string callSign1 = "";
	string callSign2 = "";
	double latDestination;
	double lonDestination;
	string unknown1 = "";
	string unknown2 = "";
	string direction = "";

	//Existing latitude and longitude
	double currentLat, currentLon;
	double firstSuggestion = 1000000.0;
	double secondSuggestion = 1000000.0;
	double thirdSuggestion = 1000000.0;
	// First Suggestion
	double miles = 0;
	double firstLat = 0;
	double firstLon = 0;
	string firstAirport = "";
	string firstCity = "";
	// Second Suggestion
	double secondLat = 0;
	double secondLon = 0;
	string secondAirport = "";
	string secondCity = "";
	// Third Suggestion
	double thirdLat = 0;
	double thirdLon = 0;
	string thirdAirport = "";
	string thirdCity = "";
	// Used when reading in currentLat and currentLon
	char comma = ',';

	//enter current coordinates
	cout << "Please enter the lat and long (Ex: 14.2234,-116.2322): ";
	cin >> currentLat >> comma >> currentLon;

	//open text file
	ifstream fin("worldAirports.txt");
	if (fin)
	{
		cout << "Loading data...." << endl << endl;
		//Reads each line in to the strings provided
		while (fin >> seq >> airportName >> city >> country >> callSign1 >> callSign2 >> latDestination >> lonDestination >> unknown1 >> unknown2 >> direction)
		{
		
			double dLat = latDestination-currentLat;
			double dLon = lonDestination-currentLon;

			double dLatRadians = dLat * (PI/180); 
			double dLonRadians = dLon * (PI/180);

			double b = (pow((sin(dLonRadians/2)),2) * cos(currentLat*(PI/180)) * cos(latDestination*(PI/180)));
			double a = pow((sin(dLatRadians/2)),2) + b;
			double c = 2 * (atan2((sqrt(a)),(sqrt(1-a))));

			double distanceKm = earthRadius * c;
			miles = distanceKm * 0.621371;

			if (miles < firstSuggestion)
			{
				//Mileage filter through each suggestion.
				thirdSuggestion = secondSuggestion;
				secondSuggestion = firstSuggestion;
				firstSuggestion = miles;

				//Fields needed for three recommendations gets filtered.
				thirdLat = secondLat;
				thirdLon = secondLon;
				thirdAirport = secondAirport;
				thirdCity = secondCity;
	
				secondLat = firstLat;
				secondLon = firstLon;
				secondAirport = firstAirport;
				secondCity = firstCity;

				firstLat = latDestination;
				firstLon = lonDestination;
				firstAirport = airportName;
				firstCity =  city;
			}
			else if (miles < secondSuggestion)
			{
			
				thirdSuggestion = secondSuggestion;
				secondSuggestion = miles;

				//Fields needed for three recommendations gets filtered.
				thirdLat = secondLat;
				thirdLon = secondLon;
				thirdAirport = secondAirport;
				thirdCity = secondCity;
	
				secondLat = latDestination;
				secondLon = lonDestination;
				secondAirport = airportName;
				secondCity = city;
			}
			else if (miles < thirdSuggestion)
			{
				thirdSuggestion = miles;

				thirdLat = latDestination;
				thirdLon = lonDestination;
				thirdAirport = airportName;
				thirdCity = city;
			}	
		}
	}
	else
	{
		cout << "I moved!";
	}
	
	fin.close();
	
	cout << firstAirport << "in " << firstCity << " is " << firstSuggestion << " miles away.\nTheir coordinates are " << firstLat << "," << firstLon << endl << endl;
	cout << secondAirport << "in " << secondCity << " is " << secondSuggestion << " miles away.\nTheir coordinates are " << secondLat << "," << secondLon << endl << endl;
	cout << thirdAirport << "in " << secondCity << " is " << thirdSuggestion << " miles away.\nTheir coordinates are " << thirdLat << "," << thirdLon << endl;



	cin.ignore();
	cin.get();
	return(0);
}

