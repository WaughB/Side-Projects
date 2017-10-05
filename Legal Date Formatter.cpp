/************************************************
* Brett Waugh
* 4 October 2017
* Prints the date in legal form. 
*************************************************/
#include <iostream>

using namespace std;

int main()
{
	// Declarations.
	int month, day, year;

	// Input.
	cout << "Enter the date (mm/dd/yyyy)";
	scanf("%d/%d/%d", &month, &day, &year);

	// Output.
	cout << "Dated this " << day; // Beginning of the final product. 
	
	switch (day) // Necessary for the different ending letters of the date. 
	{
	case 1: case 21: case 31:
		cout << "st";
		break;
	case 2: case 22:
		cout << "nd";
		break;
	case 3: case 23:
		cout << "rd";
		break;
	default: cout << "th";
		break;
	}

	cout << " day of ";

	switch (month)
	{
	case 1: cout << "January";
		break;
	case 2: cout << "February";
		break;
	case 3: cout << "March";
		break;
	case 4: cout << "April";
		break;
	case 5: cout << "May";
		break;
	case 6: cout << "June";
		break;
	case 7: cout << "July";
		break;
	case 8: cout << "August";
		break;
	case 9: cout << "September";
		break;
	case 10: cout << "October";
		break;
	case 11: cout << "November";
		break;
	case 12: cout << "December";
		break;
	}

	cout << ", " <<  year << ". " << endl;

	return 0;
}