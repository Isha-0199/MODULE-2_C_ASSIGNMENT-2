//LAEXERCISE 3: Word Count
//? Write a C program that counts the number of words in a sentence entered by the user.
//? Challenge: Modify the program to find the longest word in the sentence.

#include<stdio.h>

// Function declarations
int countWords(char str[]);
void findLongestWord(char str[]);

int main() {
    char text[200];

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);  // Accepts full sentence with spaces

    int words = countWords(text);
    printf("Total words: %d\n", words);

    findLongestWord(text);

    return 0;
}

// Function to count words
int countWords(char str[]) {
    int i = 0, words = 0;

    while (str[i] != '\0') {
        if ((str[i] != ' ' && str[i] != '\n') &&
            (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\n')) {
            words++;
        }
        i++;
    }

    return words;
}

// Function to find the longest word
void findLongestWord(char str[]) {
    int i = 0, start = 0, len = 0;
    int maxLen = 0, maxStart = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n') 
			break;
        i++;
    }

    printf("Longest word: ");
    for (int j = maxStart; j < maxStart + maxLen; j++) {
        printf("%c", str[j]);
    }
    printf("\n");
}

