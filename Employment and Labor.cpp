/***********************************************
* Brett Waugh
* 9 October 2017
* Program will calculate the Unemployment rate,
* Labor Force Participation rate, and the 
* Employment Population ratio.
************************************************/

#include <iostream>

using namespace std;

double calcUR();

double calcLFPR();

double calcEPR();

int getOption();

int main()
{
	// Declarations.
	int option; // Selects which process to run.

	char repeat = 'y'; // Decides if the User wants to keep going. 

	cout.precision(3);

	// Input.
	cout << "*************************************" << endl; // Header.
	cout << "*       Please selection an option  *" << endl;
	cout << "* 1        Unemployment Rate        *" << endl; 
	cout << "* 2 Labor Force Participation Rate  * " << endl;
	cout << "* 3   Employment Population Ratio   *" << endl;
	cout << "* 4         All of the above        * " << endl;
	cout << "*************************************" << endl;

	do // To see if the User wants to run it multiple times. 
	{
		switch (getOption()) // Function call so that option is reset each time. 
		{
		case 1: // Unemployment Rate.
			cout << "The unemployment rate is " << calcUR() << "%."<< endl;
			cout << "-------------------------------------" << endl;
			break;
		case 2: // Labor Force Participation Rate.
			cout << "The labor force participation rate is " << calcLFPR() << "%" << endl;
			cout << "-------------------------------------" << endl;
			break;
		case 3: // Employment Population Ratio.
			cout << "The emplyment population ratio is " << calcEPR() << "%." << endl;
			cout << "-------------------------------------" << endl;
			break;
		default: // All of the above. 
			cout << "The unemployment rate is " << calcUR() << "%." << endl;
			cout << "-------------------------------------" << endl;
			cout << "The labor force participation rate is " << calcLFPR() << "%." << endl;
			cout << "-------------------------------------" << endl;
			cout << "The employment population ratio is " << calcEPR() << "%." << endl;
			cout << "-------------------------------------" << endl;
			break;
		}
		cout << "Would you like to enter another option?(y n) ";
		cin >> repeat;
	} while (repeat != 'n');

	return 0;
}

/* Returns the Unemployment Rate. */
double calcUR() 
{
	// Declarations.
	double employed, labor, unemploy, rate;

	// Input.
	cout << "How many people are employed? ";
	cin >> employed;

	cout << "What is the size of the labor force? ";
	cin >> labor;

	// Calculations. 
	unemploy = labor - employed; // To get the number of unemployed persons. 

	rate = (unemploy / labor) * 100;  

	return rate;
}

/* Returns the Labor Force Participation Rate.*/
double calcLFPR()
{
	// Declarations. 
	double working, labor, rate;

	// Input.
	cout << "What is the size of the working-age population? ";
	cin >> working;

	cout << "What is the size of the labor force? ";
	cin >> labor;

	// Calculation. 
	rate = (labor / working) * 100;

	return rate;
}

/* Returns the Employment Population Ratio. */
double calcEPR() 
{
	// Declarations.
	double employed, working, ratio;

	// Input.
	cout << "How many people are employed? ";
	cin >> employed;
	
	cout << "What is the size of the working-age population? ";
	cin >> working;

	// Calculation.
	ratio = (employed / working) * 100;

	return ratio;
}

/* Gets the option from the main menu. */
int getOption()
{
	int selection;

	cout << "Option: ";
	cin >> selection;

	return selection;
}