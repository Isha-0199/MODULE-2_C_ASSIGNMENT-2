//LAB EXERCISE 2: Multiplication Table
//? Write a C program that takes an integer input from the user and prints its multiplication
//table using a for loop.
//? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include<stdio.h>

int main()
{
    int no, range, i;

    printf("Enter the number for table : ");
    scanf("%d", &no);

    printf("Enter the number of range : ");
    scanf("%d", &range);

    printf("Multiplication table of %d to the %d:\n", num,range);
    for (i = 1; i <= range; i++) 
	{
        printf("%d x %d = %d\n", no, i, no * i);
    }

    return 0;
}
