/************************************************
* Brett Waugh
* 4 Octover 2017
* Calculates the commission a broker would get. 
*************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	// Declarations.
	double commission, value;

	// Input.
	cout << "This commission calculator is for a standard amount." << endl;
	cout << "Minimum charge of $39." << endl;
	
	cout << "Enter the value of the trade: $"; 
	cin >> value; // Gets the value of the trade. 

	// Calculation.
	if (value < 2500)
		commission = 30 + 0.017 * value;
	else if (value < 6250)
		commission = 56 + 0.0066 * value;
	else if (value < 20000)
		commission = 76 + 0.0034 * value;
	else if (value < 50000)
		commission = 100 + 0.0022 * value;
	else if (value < 500000)
		commission = 155 + 0.0011 * value;
	else
		commission = 255 + 0.0009 * value;

	if (commission < 39)
		commission = 39;

	// Output.
	cout << "Commission: $" << commission << endl;

	return 0;
}