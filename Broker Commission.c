/************************************************
* Brett Waugh
* 4 October 2017
* Calculates the commission a broker would get. 
*************************************************/
#include <stdio.h>

using namespace std;

int main()
{
	// Declarations.
	float commission, value;

	// Input.
	printf("This commission calculator is for a standard amount.\n");
	printf("Minimum charge of $39.\n");
	
	printf("Enter the value of the trade: $");
	scanf("%f", &value); // Gets the value of the trade. 

	// Calculation.
	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.00f + 0.0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	// Output.
	printf("Commission: $%.2f\n", commission);

	return 0;
}