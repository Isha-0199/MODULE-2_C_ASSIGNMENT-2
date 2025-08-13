//LAB EXERCISE 3: Palindrome Check
//? Write a C program that takes a number as input and checks whether it is a palindrome using a function.
//? Challenge: Modify the program to check if a given string is a palindrome. number check the pelindrome 

#include <stdio.h>
#include <string.h>
void number(int num);
void character(char str[]);
int main()
 {
    int num;
    char str[100];

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the string: ");
    scanf("%s", str);

    number(num);     
    character(str); 

    return 0;
}

void number(int num) 
{
    int rev = 0, original = num, digit;
    for (int temp = num; temp > 0; temp = temp / 10) 
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
    }

    if (original == rev) 
        printf("Number is palindrome.\n");
    else 
        printf("Number is not palindrome.\n");
}

void character(char str[]) 
{
     int len = strlen(str);
     
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            printf("String is not palindrome.\n");
            return;
        }
    }
    printf("String is palindrome.\n");
}

