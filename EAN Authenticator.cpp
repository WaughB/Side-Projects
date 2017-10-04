/**************************************************************
* Brett Waugh
* 4 Octover 2017
* Checks to see if the European Article Number (EAN) is valid.
**************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
		first_sum, second_sum, total, check_digit, actual_digit;

	// Input. 
	cout << "European Article Number Authenticator.\nThis will confirm that the barcode number"
		 << " is accurate and will be understood by product scanners.\n" 
		 << "If the actual check code and the calculated check code do not match"
		 <<" it has failed. " << endl;
	
	cout << "Enter the first (single) digit: ";
	scanf_s("%1d", &i1);

	cout << "Enter first group of five digits: "; 
	scanf_s("%1d%1d%1d%1d%1d", &i2, &i3, &i4, &i5, &i6);

	cout << "Enter the second group of six digits: ";
	scanf_s("%1d%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11, &i12);

	cout << "Enter the final digit: ";
	scanf_s("%1d", &actual_digit);

	// Calculation. 
	first_sum = i2 + i4 + i6 + i8 + i10 + i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = (3 * first_sum + second_sum)-1;

	check_digit = 9 - (total % 10);

	// Output.
	if (actual_digit != check_digit)
		cout << "Check digits do not match.\nTest failed." << endl;
	else
		cout << "Check digits match.\nTest passed." << endl;

	return 0;
}