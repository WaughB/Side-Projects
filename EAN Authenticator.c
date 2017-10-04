/**************************************************************
* Brett Waugh
* 4 Octover 2017
* Checks to see if the European Article Number (EAN) is valid.
**************************************************************/
#include <stdio.h>

int main(void)
{
	// Declarations. 
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
		first_sum, second_sum, total, check_digit, actual_digit;

	// Input. 
	printf("Enter the first (single) digit: ");
	scanf("%1d", &i1);

	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i2, &i3, &i4, &i5, &i6);

	printf("Enter the second group of six digits: ");
	scanf("%1d%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11, &i12);

	printf("Enter the final digit: ");
	scanf("%1d", &actual_digit);

	// Calculation. 
	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = (3 * first_sum + second_sum)-1;

	check_digit = 9 - (total % 10);

	// Output.
	printf("Calculated check digit: %d\n", check_digit);
	printf("Actual check digit: %d\n", actual_digit);

	return 0;
}