/***************************************************************************************************************************************
* Brett Waugh
* 7 October 2017
* Calculates the difference of something based on CPI.
* Information from: http://www.usinflationcalculator.com/inflation/consumer-price-index-and-annual-percent-changes-from-1913-to-2008/
****************************************************************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declarations. 
	int firstYear, secondYear; // The base year and the year they want converted to. 
	double givenMoney, calculatedMoney; // Given money and the placeholder for the equivalenet amount. 

	double firstCPI, secondCPI; // Consumer Price Index for the base year and conversion year. 

								// Table of CPI values from site above, from 1913 to 2016.  
	double cpiList[104] = {
		9.9,	  10,	   10.1,	10.9,	 12.8,	  15.1,	   17.3,	20,
		17.9,    16.8,    17.1,    17.1,    17.5,    17.7,    17.4,    17.1,
		17.1,    16.7,    15.2,    13.7,    13,      13.4,    13.7,    13.9,
		14.4,    14.1,    13.9,    14,      14.7,    16.3,    17.3,    17.6,
		18,      19.5,    22.3,    24.1,    23.8,    24.1,    26,      26.5,
		26.7,    26.9,    26.8,    27.2,    28.1,    28.9,    29.1,    29.6,
		29.9,    30.2,    30.6,    31,      31.5,    32.4,    33.4,    34.8,
		36.7,    38.8,    40.5,    41.8,    44.4,    49.3,    53.8,    56.9,
		60.6,    65.2,    72.6,    82.4,    90.9,    96.5,    99.6,    103.9,
		107.6,   109.6,   113.6,   118.3,   124,     130.7,   136.2,   140.3,
		144.5,   148.2,   152.4,   156.9,   160.5,   163,     166.6,   172.2,
		177.1,   179.9,   184,     188.9,   195.3,   201.6,   207.3,   215.303,
		214.537, 218.056, 224.939, 229.594, 232.957, 236.736, 237.017, 240.007, };

	// Header.
	cout << "*****************************************************************************************" << endl;
	cout << "| This program will convert money (USD) between different years.                        |" << endl;
	cout << "| This program is based on BLS data from 1913 to 2016 (2017 has not been validated yet).|" << endl;
	cout << "*****************************************************************************************" << endl;

	// Input.
	cout << "Please enter the amount of money you want to convert. $";
	cin >> givenMoney;

	cout << "Please enter the year that money is from...";
	cin >> firstYear;

	cout << "Please enter the year you want to convert to...";
	cin >> secondYear;

	// Check boundaries.
	if (firstYear < 1913) // If the year is before 1913.
	{
		cout << "Invalid year the money is from. Please enter a year from 1913 to 2016." << endl;
		cin >> firstYear;
	}

	if (firstYear > 2016) // If the year is after 2016. 
	{
		cout << "Invalid year the money is from. Please enter a year from 1913 to 2016." << endl;
		cin >> firstYear;
	}

	if (secondYear < 1913) // If the year is before 1950.
	{
		cout << "Invalid year for converting money. Please enter a year from 1913 to 2016." << endl;
		cin >> secondYear;
	}

	if (secondYear > 2016) // If the year is after 2016.
	{
		cout << "Invalid year for converting money. Please enter a year from 1913 to 2016." << endl;
		cin >> secondYear;
	}

	// Get the CPI for the base year (firstYear).
	firstCPI = cpiList[firstYear - 1913];
	cout << "CPI for " << firstYear << " was " << firstCPI << endl;

	// Get the CPI for conversion year (secondYear).
	secondCPI = cpiList[secondYear - 1913];
	cout << "CPI for " << secondYear << " was " << secondCPI << endl;

	// Calculation.
	// Amount in conversion year (calculatedMoney) is equal to the amount 
	// in the base year (givenMoney) multiplied by the quotient of the 
	// conversion year CPI (secondCPI) and the base year CPI (firstCPI).
	calculatedMoney = givenMoney *(secondCPI / firstCPI);

	// Output. 
	cout << "Converted amount: $" << setprecision(2) << fixed << calculatedMoney << endl;

	cout << "That means" << ", $" << givenMoney << " from " << firstYear 
		<< " is equivalent to $" << setprecision(2) << fixed << calculatedMoney << " from "<< secondYear << "." <<  endl;

	return 0;
}