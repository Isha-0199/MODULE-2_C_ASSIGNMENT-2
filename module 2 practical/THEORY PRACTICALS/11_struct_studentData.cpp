//Write a C program that defines a structure to store a student's details (name,
//roll number, and marks). Use an array of structures to store details of 3
//students and print them.


#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3]; 

    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf(" %s", &s[i].name); // Reads string with spaces

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n----- Student Details -----\n");
    for(int i = 0; i < 3; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}	

