/********************************************************
* Brett Waugh
* 26 October 2017
* Total Increase in the Money Supply 
* Program will calculate how much money a bank receives
* when a person deposits money in it. Using the simple
* deposit multiplier, which assumes all funds deposited
* in the bank and banks lending out all excess reserves. 
*********************************************************/

#include <iostream>

using namespace std;

double simpleDepositMultiplier(double);

double totalChangeInDeposits(double, double);

int main()
{
	// Declarations.
	double deposit; 

	double reserveRatio;

	// Input.
	cout << "Enter the initial deposit: $";
	cin >> deposit;

	cout << "Enter the required reserve ratio (r) as a percentage: ";
	cin >> reserveRatio;

	// Output.
	cout << "The total change in deposits is $" << totalChangeInDeposits(deposit, simpleDepositMultiplier(reserveRatio)) << "." << endl;
	return 0;
}

double simpleDepositMultiplier(double reserve)
{
	reserve /= 100; // Because was entered as a percentage. 
	
	return 1/reserve; // 1/r equation. 
}

double totalChangeInDeposits(double deposit, double multiplier)
{
	return deposit * multiplier; // Initial deposity multiplied by the multiplier. 
}