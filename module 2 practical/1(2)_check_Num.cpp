//Write a C program that takes an integer from the user and checks the following using
//different operators:
//o Whether the number is even or odd.
//o Whether the number is positive, negative, or zero.
//o Whether the number is a multiple of both 3 and 5

#include<stdio.h>
int main()
{
	int num;
	printf("ENTER THE NUMBER IS:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("the number is even \n");
	}
	else
	{
		printf("the number is odd\n");
	}
	
	if(num>0)
	{
		printf("number is the positive number\n");
	}
	else if(num<0)
	{
		printf("number is nagative number \n");
	}
	else
	{
		printf("the number is 0\n");
	}
	
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("the number is not a multiple of both 3 and 5 \n");
	}
	else
	{
		printf("the number is a multiple of both 3 and 5 \n");
	}
	return 0;
}
