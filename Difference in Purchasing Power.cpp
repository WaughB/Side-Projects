/*******************************************************************************
* Brett Waugh
* 24 October 2017
* Calculates the difference in purchasing power between two User inputted areas.
*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declarations. 
	int firstLocal, secondLocal; // The two areas being considered. 

	double salary1, salary2; // The two salaries being compared. 

	double CPI1, CPI2; // The Consumer Price Index for both locations. 

	double convertedSalary1;

	char repeat = 'y'; // If the User wants to enter more values or not. 

	// Header.
	cout << "******************************************************************" << endl;
	cout << "| This program will convert money (USD) between different CPIs.  |" << endl;
	cout << "| Potential applications include comparing two jobs based on how |" << endl;
	cout << "| much money you would actually be making in that area.          |" << endl;
	cout << "******************************************************************" << endl;

	// Start of loop.
	do {

		// Input.
		cout << "Please enter the first salary. $";
		cin >> salary1;

		cout << "Please enter the CPI for that area: ";
		cin >> CPI1;

		cout << "Please enter the second salary. $";
		cin >> salary2;

		cout << "Please enter the CPI for that area: ";
		cin >> CPI2;

		// Calculation.
		// Amount in conversion salary (calculatedSalary) is equal to the amount 
		// in the base area (salary1) multiplied by the quotient of the 
		// conversion area CPI (CPI2) and the base salary CPI (CPI1).
		convertedSalary1 = salary1 *(CPI2 / CPI1);

		// Output. 
		cout << "--------------------------------------------------------------------------------------------" << endl;

		cout << "Converted first salary amount: $" << setprecision(2) << fixed << convertedSalary1 << endl;

		if (convertedSalary1 > salary2)
		{
			cout << "Based on these two salaries and CPIs, the first area gives you more purchasing power." << endl;
		}
		else if (convertedSalary1 < salary2)
		{
			cout << "Based on these two salaries and CPIs, the second area gives you more purchasing power." << endl;
		}
		else
		{
			cout << "Based on these two salaries and CPIs, the purchasing power is the same in both locations." << endl;
		}

		cout << "--------------------------------------------------------------------------------------------" << endl;

		// Check to see if the User wants to continue or quit. 	
		cout << "Continue? (y, n): ";
		cin >> repeat;

		cout << "*****************************************************************************************" << endl;

	} while (repeat != 'n');

	// If the user wants to quit.
	return 0;
}
