/***************************************************************************************************
* Brett Waugh
* 23 October 2017
* Calculates the difference between two states, or User inputted CPI, to see the difference in pay. 
* Information from: 
***************************************************************************************************/

#include <stdio.h>

int main(void)
{
	// Declarations. 
	int firstLocal, secondLocal; // The two areas being considered. 

	float salary1, salary2; // The two salaries being compared. 

	float CPI1, CPI2; // The Consumer Price Index for both locations. 

	float convertedSalary1;

	char repeat; // If the User wants to enter more values or not. 

	// Header.
	printf("******************************************************************\n");
	printf("| This program will convert money (USD) between different CPIs.  |\n");
	printf("| Potential applications include comparing two jobs based on how |\n");
	printf("| much money you would actually be making in that area.          |\n");
	printf("******************************************************************\n");

	// Start of loop.
	do {

		// Input.
		printf("Please enter the first salary. $");
		scanf("%f", &salary1);

		printf("Please enter the CPI for that area: ");
		scanf("%d", &CPI1);

		printf("Please enter the second salary. $");
		scanf("%f", &salary2);

		printf("Please enter the CPI for that area: ");
		scanf("%d", &CPI2);

		// Calculation.
		// Amount in conversion salary (calculatedSalary) is equal to the amount 
		// in the base area (salary1) multiplied by the quotient of the 
		// conversion area CPI (CPI2) and the base salary CPI (CPI1).
		convertedSalary1 = salary1 *(CPI2 / CPI1);

		// Output. 
		printf("--------------------------------------------------------------------------------------------\n");

		printf("Converted first salary amount: $%.2f.\n", convertedSalary1);

		if (convertedSalary1 > salary2)
		{
			printf("Based on these two salaries and CPIs, the first area gives you more purchasing power.\n");
		}
		else if (convertedSalary1 < salary2)
		{
			printf("Based on these two salaries and CPIs, the second area gives you more purchasing power.\n");
		}
		else
		{
			printf("Based on these two salaries and CPIs, the purchasing power is the same in both locations.\n");
		}

		printf("--------------------------------------------------------------------------------------------\n");

		// Check to see if the User wants to continue or quit. 	
		printf("Continue? (y, n): ");
		scanf(" %c", &repeat);

		printf("\n*****************************************************************************************\n");

	} while (repeat != 'n');

	// If the user wants to quit.
	return 0;
}
