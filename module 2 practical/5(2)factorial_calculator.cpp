//LAB EXERCISE 2: Factorial Calculation
//? Write a C program that calculates the factorial of a given number using a function.
//? Challenge: Implement both an iterative and a recursive version of the factorial function and
//compare their performance for large numbers.

#include<stdio.h>

// Function declarations
int fact_iterative(int num);
int fact_recursive(int num);

int main() 
{
    int num;

    printf("Enter the factorial number: ");
    scanf("%d", &num);

   printf("factorial in Recursive of %d : %d \n",num , fact_recursive(num));
   
   printf("Factorial in iterative of %d : %d \n", num, fact_iterative(num));

    return 0;
}

// Iterative function
int fact_iterative(int num) 
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
	{
        fact *= i;
    }
    return fact;
}

// Recursive function
int fact_recursive(int num)
{
    if(num == 0 || num == 1)
        return 1;
    else
        return num * fact_recursive(num - 1);
}

