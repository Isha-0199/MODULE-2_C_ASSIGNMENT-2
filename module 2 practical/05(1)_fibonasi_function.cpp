//5. Functions
//LAB EXERCISE 1: Fibonacci Sequence
//? Write a C program that generates the Fibonacci sequence up to N terms using a recursive
//function.
//? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
//and recursive methods. Compare their efficiency.

#include <stdio.h>
int fib_recursive(int n);
int fib_iterative(int n);

int main() 
{
    int n, i;

    printf("Enter number for Fibonacci sequence: ");
    scanf("%d", &n);
    
    printf("Fibonacci Sequence (Recursive): ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", fib_recursive(i));
    }

    
    printf("\n\nNth Fibonacci number using Iterative method: %d", fib_iterative(n - 1));

    printf("\nNth Fibonacci number using Recursive method: %d\n", fib_recursive(n - 1));

    return 0;
}
int fib_recursive(int n) 
{
    if (n == 0) 
    {
        return 0;  
    }
    if (n == 1) 
    {
        return 1;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}


int fib_iterative(int n) 
{
    int a = 0, b = 1, next, i;

    if (n == 0) 
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }
    for (i = 2; i <= n; i++) 
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

