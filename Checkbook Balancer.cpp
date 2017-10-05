/************************
* Brett Waugh
* 4 October 2017
* Balances a checkbook. 
************************/
#include <iostream>

using namespace std;

int main()
{
	// Declarations.
	int cmd;
	double balance = 0, credit, debit;

	// Input.
	cout << "$$$ ACME checkbook-balancing program $$$" << endl; // Header.
	
	// Command options. 
	cout << "Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit." << endl;

	// Start of for loop.
	for (;;)
	{
		cout << "Enter a command: ";
		cin >> cmd;
		switch (cmd)
		{
		case 0: // Clears account. 
			balance = 0;
			break;
		case 1: // Credits account. 
			cout << "Enter amount of credit: ";
			cin >> credit;
			balance += credit;
			break;
		case 2: // Debits account. 
			cout << "Enter amount of debit: ";
			cin >> debit;
			balance -= debit;
			break;
		case 3: // Displays current balance.
			cout << "Current balance: $" << balance << endl;
			break;
		case 4: // Ends program. 
			cout << "Final balance: $" << balance << endl;
			return 0;
		default:
			cout << "Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit." << endl;
		} // End switch statement. 
	} // End for loop.
} // End program.