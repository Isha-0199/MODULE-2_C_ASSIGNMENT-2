//Write a C program to demonstrate pointer usage. Use a pointer to modify the
//value of a variable and print the result.
#include <stdio.h>

int main() 
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;// Pointer points to the address of num

    *ptr = *ptr + 10;  
    
    printf("Modified value using pointer = %d\n", num);
    
    return 0;
}

