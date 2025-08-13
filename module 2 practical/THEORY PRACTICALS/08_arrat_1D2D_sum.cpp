//Write a C program that stores 5 integers in a one-dimensional array and prints them.
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include <stdio.h>

int main() 
{
    // 1D Array - Store and Print 5 Integers
    int arr[5];
    printf("Enter 5 integers:\n");
    
    for(int i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("You entered (1D array):\n");
    
    for(int i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // 2D Array store & Calculate Sum
    int matrix[3][3];
    int sum = 0;

    printf("Enter a 3x3 matrix: \n");
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // sum
        }
    }

    printf("Matrix is:\n");
    
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Sum of all matrix elements = %d\n", sum);

    return 0;
}

