//Write a C program that calculates the factorial of a number using a function.
// Include function declaration, definition, and call.

#include <stdio.h>
// Function declaration
int factorial(int n);

int main() 
{
    int num, result;

    printf("Enter a factorial: ");
    scanf("%d", &num);

    result = factorial(num); // Func call

    printf("Factorial of %d is %d\n",num,result);
    return 0;
}

// Function definition
int factorial(int n) 
{
    int fact = 1;
    for(int i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

