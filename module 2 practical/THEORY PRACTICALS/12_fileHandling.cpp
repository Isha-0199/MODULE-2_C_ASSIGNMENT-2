//Write a C program to create a file, write a string into it, close the file, then
//open the file again to read and display its contents.
#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Welcome to File Handling in C!";
    char ch;

    fp = fopen("exy.txt", "w"); // "w" creates or overwrites file
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fputs(str, fp);  // Write string to file
    fclose(fp);

    fp = fopen("exy.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  
    }

    fclose(fp);
    return 0;
}

