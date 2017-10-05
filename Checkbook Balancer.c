/***********************
* Brett Waugh
* 4 October 2017
* Balances a checkbook. 
************************/
#include <stdio.h>

using namespace std;

int main()
{
	// Declarations.
	int cmd;
	float balance = 0.0f, credit, debit;

	// Input.
	printf("$$$ ACME checkbook-balancing program $$$\n"); // Header.
	
	// Command options. 
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit.\n\n");

	// Start of for loop.
	for (;;)
	{
		printf("Enter a command: ");
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 0: // Clears account. 
			balance = 0.0f;
			break;
		case 1: // Credits account. 
			printf("Enter amount of credit: ");
			scanf("%f",&credit );
			balance += credit;
			break;
		case 2: // Debits account. 
			printf("Enter amount of debit: ");
			scanf("%f", &debit);
			balance -= debit;
			break;
		case 3: // Displays current balance.
			printf("Current balance: $%.2f\n", balance);
			break;
		case 4: // Ends program. 
			printf("Final balance: $%.2f\n", balance);
			return 0;
		default:
			printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit.\n\n");
		} // End switch statement. 
	} // End for loop.
} // End program.