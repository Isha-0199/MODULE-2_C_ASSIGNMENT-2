//Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
//C Program: Print 1 to 10 using while, for, and do-while loops
#include <stdio.h>

int main() 
{
    int i;

    // while loop
    printf("Using while loop:\n");
    i = 1;
    while (i <= 10) 
	{
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    // for loop
    printf("Using for loop:\n");
    for (i = 1; i <= 10; i++) 
	{
        printf("%d ", i);
    }

    printf("\n\n");

    // do-while loop
    printf("Using do-while loop:\n");
    i = 1;
    do 
	{
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\n");

    return 0;
}
