//Lab Challenge 2: Pascal’s Triangle
//? Write a C program that generates Pascal’s Triangle up to N rows using loops.
//? Challenge: Implement the same program using a recursive function.

#include<stdio.h>

// Function prototypes
int fact(int n);
int comb(int n, int r);
void pascal(int row, int total);

int main() 
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pascal(0, n); // Recursion start
    return 0;
}

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int comb(int n, int r) 
{
    return fact(n) / (fact(r) * fact(n - r));
}

void pascal(int row, int total)
{
    if (row == total) 
	return;

    for (int s = 0; s < total - row - 1; s++)
        printf("  ");
    for (int col = 0; col <= row; col++)
        printf("%4d", comb(row, col));

    printf("\n");
    pascal(row + 1, total);
}

