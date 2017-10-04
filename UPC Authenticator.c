/**************************************************************
* Brett Waugh
* 4 Octover 2017
* Checks to see if the Universal Product Code (UPC) is valid.
**************************************************************/
#include <stdio.h>

int main(void)
{
	// Declarations. 
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
	first_sum, second_sum, total, check_digit, actual_digit;
	
	// Input. 
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	
	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	
	printf("Enter the final digit: ");
	scanf("%1d", &actual_digit);
	
	// Calculation. 
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	
	check_digit = 9-((total-1)%10);
	
	// Output.
	printf("Calculated check digit: %d\n", check_digit);
	printf("Actual check digit: %d\n", actual_digit);

	return 0;
}