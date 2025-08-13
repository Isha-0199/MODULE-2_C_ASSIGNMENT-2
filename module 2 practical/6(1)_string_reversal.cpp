//6. Strings
//LAB EXERCISE 1: String Reversal
//? Write a C program that takes a string as input and reverses it using a function.
//? Challenge: Write the program without using built-in string handling functions.

#include<stdio.h>

// Function declarations
int getLength(char str[]);
void reverseString(char str[]);

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // For one word; use fgets() if you want full line

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

// Function to calculate string length
int getLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
	{
        len++;
    }
    return len;
}

// Function to reverse string
void reverseString(char str[])
{
    int start = 0;
    int end = getLength(str) - 1;
    char temp;

    while (start < end)
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

