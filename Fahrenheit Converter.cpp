/**********************************
* Brett Waugh
* 4 October 2017
* Converts Fahrenheit to Celsius.
***********************************/
#include <iostream>

using namespace std;

int main()
{
	// Declarations
	double fahr, cels;

	// Input. 
	cout << "Converts Fahrenheit to Celsius." << endl; // Header. 

	cout << "Enter the tempeture in Fahrenheit..." << endl;
	cin >> fahr;

	// Calculation.
	cels = (fahr - 32) /1.8;

	// Output.
	cout << "Tempeture in Celsius is " << cels << endl;

	return 0;
}