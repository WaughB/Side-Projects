/************************
* Brett Waugh		    *
* 24 September 2017	    *
* A game of Black Jack.	*
*************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flipCard();

int main()
{
	// Variable to see if keep playing. 
	char keepPlaying = 'y';

	// Variable for another card.
	char hitMe =0;

	// Variables to keep track of wins and losses.
	int win = 0;
	int loss = 0;
	int tie = 0;

	// Welcome message.
	cout << "******************************" << endl;
	cout << "*    Welcome to the table!   *" << endl;
	cout << "******************************" << endl;

	do {
		// Enumeration with constants that represent game status.
		enum Status { TIE, WON, LOST }; // All caps in constants. 

		Status gameStatus; // Can contain CONTINUE, WON, or LOST.

		// Randomize random number generator using current time.
		srand(time(0));

		int sumOfHand = flipCard(); // First card flip.
		sumOfHand += flipCard(); // Second card flip.
		
		cout << "Hand:\t\t" << sumOfHand << endl; // Shows sum of original hand. 

		// Asks if additional cards are needed after the first hand. 
		do 
		{
			cout << "Would you like another card? (y, n)" << endl;
			cin >> hitMe; // Asks if Player wants another card.

			if (hitMe == 'y') // Condition for getting another card.
			{
				sumOfHand += flipCard(); // Updates the sum of hand. 
				cout << "Hand:\t\t" << sumOfHand << endl;
			}

			if (sumOfHand > 21)
			{
				cout << "Busted!" << endl;
			}

		} while (sumOfHand <= 21 && hitMe == 'y');

		// Houses hand.
		int houseHand = flipCard();
		houseHand += flipCard();
		cout << "House's hand:\t" << houseHand << endl;

		// Results. //

		// If Player busts.
		if (sumOfHand > 21) 
		{
			gameStatus = LOST;
		}
		else // Player has a valid hand. 
		{
			// If the House does not bust, and scores higher than Player.
			if (houseHand > sumOfHand && houseHand < 22)
			{
				gameStatus = LOST;
			}

			// If the Player has a better valid hand than the House. 
			if (sumOfHand > houseHand)
			{
				gameStatus = WON;
			}

			// If the House and Player have the same hand.
			if (sumOfHand == houseHand)
			{
				gameStatus = TIE;
			}
		}
		
		// Display won or lost message.
		if (gameStatus == WON)
		{
			cout << "******************************" << endl;
			cout << "*         Player Wins        *" << endl;
			cout << "******************************" << endl;
			win++;
		}
		else if(gameStatus == LOST)
		{
			cout << "******************************" << endl;
			cout << "*         Player Lost        *" << endl;
			cout << "******************************" << endl;
			loss++;
		}
		else // gameStatus == TIE
		{
			cout << "******************************" << endl;
			cout << "*         Player Tied        *" << endl;
			cout << "******************************" << endl;
			tie++;
		}

		cout << "Would you like to play again? (y, n)" << endl;
		cin >> keepPlaying;

	} while (keepPlaying == 'y');

	cout << "Results" << endl;
	cout << "W" << win << "\tL" << loss 
		<< "\tT" << tie << endl;
	cout << "Thank you for playing." << endl;

} // End of main. 

  
// Flips card, calculates the sum and displays results.
int flipCard()
{	
	// Picks random card values. 
	int card = 1 + rand() % 13; // Flips a card.

	// Display results of this hand.	
	cout << "Flipped:\t" << card << endl;

	return card; // Returns the card flipped.
}
