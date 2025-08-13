//LAB EXERCISE 2: Count Vowels and Consonants
//? Write a C program that takes a string from the user and counts the number of vowels and
//consonants in the string.
//? Challenge: Extend the program to also count digits and special characters.

#include<stdio.h>

// Function declaration
void countChar(char str[]);

int main() 
{
    char text[200];

    printf("Enter a string: ");
    scanf(" %[^\n]", text);  // To read full line including spaces

    countChar(text);

    return 0;
}

// Function to count vowels, consonants, digits, and special characters
void countChar(char str[]) {
    int i = 0;
    int vowels = 0, consonant = 0, digit = 0, special = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        // Check for vowels
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32; // convert to lowercase

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants (alphabets excluding vowels)
        else if ((ch >= 'a' && ch <= 'z')) {
            consonant++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digit++;
        }
        // All other characters are special characters (including space)
        else {
            special++;
        }

        i++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonant);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);
}

