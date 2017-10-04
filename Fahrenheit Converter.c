/**********************************
* Brett Waugh
* 4 October 2017
* Converts Fahrenheit to Celsius.
***********************************/
#include <stdio.h>

#define FREEZE 32.0f // Freezing point in Fahrenheit. 
#define SCALE (5.0f / 9.0f) // Converstion factor. 


int main(void)
{
	// Declarations. 
	float fahr, cels;
	
	// Input.
	printf("Converts Fahrenheit to Celsius.\n"); // Header.
	
	printf("Enter the tempeture in Fahrenheit...\n"); // Asks for tempeture.
	scanf("%f", &fahr); // Gets fahr.
	
	// Calculation.
	cels = (fahr - FREEZE) * SCALE; // Conversion. 
	
	// Output.
	printf("Tempeture in Celsius is %.1f\n", cels); // Shows degrees in cels.
	
	return 0;
}	