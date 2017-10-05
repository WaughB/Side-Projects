/**************************************************************
* Brett Waugh
* 4 October 2017
* Checks to see if the Universal Product Code (UPC) is valid.
**************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
		first_sum, second_sum, total, check_digit, actual_digit;

	// Input. 
	cout << "Universal Product Code Authenticator.\nThis will confirm that the barcode number"
		 << " is accurate and will be understood by product scanners.\n" 
		 << "If the actual check code and the calculated check code do not match"
		 <<" it has failed. " << endl;
	
	cout << "Enter the first (single) digit: ";
	scanf_s("%1d", &d);

	cout << "Enter first group of five digits: "; 
	scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

	cout << "Enter the second group of five digits: ";
	scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	cout << "Enter the final digit: ";
	scanf_s("%1d", &actual_digit);

	// Calculation. 
	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	check_digit = 9 - ((total - 1) % 10);

	// Output.
	if (actual_digit != check_digit)
		cout << "Check digits do not match.\nTest failed." << endl;
	else
		cout << "Check digits match.\nTest passed." << endl;

	return 0;
}