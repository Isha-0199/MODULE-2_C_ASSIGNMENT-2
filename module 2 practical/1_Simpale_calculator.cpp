//
//LAB EXERCISE 1: Simple Calculator
//? Write a C program that acts as a simple calculator. The program should take two numbers
//and an operator as input from the user and perform the respective operation (addition,
//subtraction, multiplication, division, or modulus) using operators.
//? Challenge: Extend the program to handle invalid operator inputs.


#include<stdio.h>
main()
{
	int no1, no2,result;
	char choice;
	
	printf("ENTER ONE NUMBER:");
	scanf("%d",&no1);
	
	printf("\nENTER YOUR CHOICE(+, -, *, /, %):");
	scanf(" %c",&choice);
	
	printf("\nENTER TWO NUMBER:");
	scanf("%d",&no2);
	
	
	
	switch(choice)
	{
		case '+':
			
			result = no1 + no2;
			printf("result: %d",result);
			break;
			
		case '-':
			
			result = no1 - no2;
			printf("result: %d",result);
			break;
			
		case '*':
			
			result = no1 * no2;
			printf("result: %d",result);
			break;
			
		case '/':
			
			result = no1 / no2;
			printf("result: %d",result);
			break;
			
		case '%':
			
			result = no1 % no2;
			printf("result: %d",result);
			break;
		
		default:
			printf("\nINVALID CHOICE:");
			break;
	}
}	
