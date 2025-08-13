//Write a C program that uses the break statement to stop printing numbers when it reaches 5.
// Modify the program to skip printing the number 3 using the continue statement.

#include <stdio.h>

int main() {
    int i;

    printf("Using break:\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 5)
            break; // Stop is 5
        printf("%d ", i);
    }

    printf("\n\nUsing continue:\n");
    
    for (i = 1; i <= 5; i++) 
	{
        if (i == 3)
            continue; // Skip i is 3
        printf("%d ", i);
    }

    return 0;
}

