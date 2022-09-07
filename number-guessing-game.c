/*
    Program:    Number Guessing Game
    Author:     Shivek Sharma
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// Function that generate a number in the range [1, N] and checks if the
// generated number is the same as the guessed number or not
void guess(int N)
{
	int number, guess, numberofguess = 1;

	//Seed random number generator
	srand(time(NULL));

	// Generate a random number
	number = rand() % N + 1;

	printf("Guess a number between 1 and %d\n\n", N);

	// Using a do-while loop that will work until user guesses
	// the correct number
	do {

		if (numberofguess > 10) {
			printf("\nYou Loose! Try Again.\n");
			break;
		}

		// User guessing the number
		scanf("%d", &guess);

		if (guess > number)
		{
			printf("Lower number please!\n\n");
			numberofguess++;
		}

		else if (number > guess)
		{
			printf("Higher number please!\n\n");
			numberofguess++;
		}

		// Printing number of times user has taken to guess
		// the number
		else
			printf("\nCongrats! You guessed the number in %d attempts.\n", numberofguess);

	} while (guess != number);
}


int main()
{
	int N = 100;

	guess(N);

	return 0;
}
