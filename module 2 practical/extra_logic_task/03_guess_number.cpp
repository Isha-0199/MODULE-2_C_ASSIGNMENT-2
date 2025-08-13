//03 Number Guessing Game

//? Write a C program that implements a simple number guessing game. The program should
//generate a random number between 1 and 100, and the user should guess the number
//within a limited number of attempts.

// ______Challenge: Provide hints to the user if the guessed number is too high or too low.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int secretNumber, guess, attempts = 0, maxAttempts = 7;

    
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n\n", maxAttempts);

    // Loop for user guesses
    while (attempts < maxAttempts)
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber)
		{
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secretNumber, attempts);
            break;
        }
		else if (guess < secretNumber)
		{
            printf("Too low! Try a higher number.\n");
        }
		else
		{
            printf("Too high! Try a lower number.\n");
        }

        printf("Attempts left: %d\n\n", maxAttempts - attempts);
    }

    if (attempts == maxAttempts && guess != secretNumber)
	{
        printf(" Sorry! You've used all your attempts. The correct number was %d.\n", secretNumber);
    }

    return 0;
}

