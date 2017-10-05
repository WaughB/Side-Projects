/*********************************
* Brett Waugh
* 4 Octover 2017
* Prints the date in legal form. 
**********************************/
#include <stdio.h>

using namespace std;

int main()
{
	// Declarations.
	int month, day, year;

	// Input.
	printf("Enter the date (mm/dd/yyyy)");
	scanf("%d/%d/%d", &month, &day, &year);

	// Output.
	printf("Dated this %d", day); // Beginning of the final product. 
	
	switch (day) // Necessary for the different ending letters of the date. 
	{
	case 1: case 21: case 31:
		printf("st");
		break;
	case 2: case 22:
		printf("nd");
		break;
	case 3: case 23:
		printf("rd");
		break;
	default: printf("th");
		break;
	}

	printf(" day of ");

	switch (month)
	{
	case 1: printf("January");
		break;
	case 2: printf("February");
		break;
	case 3: printf("March");
		break;
	case 4: printf("April");
		break;
	case 5: printf("May");
		break;
	case 6: printf("June");
		break;
	case 7: printf("July");
		break;
	case 8: printf("August");
		break;
	case 9: printf("September");
		break;
	case 10: printf("October");
		break;
	case 11: printf("November");
		break;
	case 12: printf("December");
		break;
	}

	printf(", %d.\n", year);

	return 0;
}