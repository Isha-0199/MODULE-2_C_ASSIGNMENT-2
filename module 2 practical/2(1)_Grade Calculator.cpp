//Write a C program that takes the marks of a student as input and displays the corresponding
//grade based on the following conditions:
//o Marks > 90: Grade A
//o Marks > 75 and <= 90: Grade B
//o Marks > 50 and <= 75: Grade C
//o Marks <= 50: Grade D
// Use if-else or switch statements for the decision-making process.

#include<stdio.h>

int main()
{
    int marks;
	int Grade;

    printf("Enter student marks : ");
    scanf("%d", &marks);

    if(marks < 0 || marks > 100) 
	{
        printf("Invalid marks...Please enter (1 to 100) \n");
    }
    else if(marks > 90) 
	{
        Grade = 1;
    }
    else if(marks > 75 && marks <= 90) 
	{
        Grade = 2;
    }
    else if(marks > 50 && marks <= 75) 
	{
       Grade = 3;
    }
    else
    {
    	Grade = 4;
	}
	
	switch(Grade)
	{
		case 1: 
			printf("Grade: A\n");
			break;
		
		case 2:
			printf("Grade: B\n");
			break;
			
		case 3:
			printf("Grade: C\n");
			
		case 4:
			printf("Grade: D\n");
			break;
			
		default:
			printf("Invalid choice");
	}

    return 0;
}
