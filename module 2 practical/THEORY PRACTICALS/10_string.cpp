//Write a C program that takes two strings from the user and concatenates them using strcat().
// Display the concatenated string and its length using strlen().

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char result[200];           

    printf("Enter first string: ");
    gets(str1); 

    printf("Enter second string: ");
    gets(str2);

    strcpy(result, str1);
    strcat(result, str2);
    
    printf("Concatenated string: %s \n", result);
    printf("Length of string: %lu \n", strlen(result));

    return 0;
}

