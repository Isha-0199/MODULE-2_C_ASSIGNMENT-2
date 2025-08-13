//Write a C program that takes three numbers from the user and determines:
//o The largest number.
//o The smallest number.
//? Challenge: Solve the problem using both if-else and switch-case statements.

#include<stdio.h>
int main()
{
	int a, b, c;
	int large, small;
	
	printf("enter three number (large or small):");
	scanf("%d %d %d",&a, &b, &c);
	
	// find largest number
	if(a>=b && a>=c)
	{
		large = 1;
	}
	else if(b>=a && b>=c)
	{
		large = 2;
	}
	else
	{
		large = 3;
	}
	
	//find smallest number
	if(a<=b && a<=c)
	{
		small = 1;
	}
	else if(b<=c && b<=c)
	{
		small = 2;
	}
	else
	{
		small = 3;
	}
	
	//switch case both small large ke liye
	
	switch(large)
	{
		case 1:
			printf("Largest number is: %d\n",a);
			break;
			
		case 2:
			printf("Largest number is: %d\n",b);
			break;
			
		case 3:
			printf("Largest number is: %d\n",c);
			break;	
	}
	switch(small)
	{
		case 1:
			printf("smallest number is: %d\n",a);
			break;
			
		case 2:
			printf("smallest number is: %d\n",b);
			break;
			
		case 3:
			printf("smallest number is: %d\n",c);
			break;		
	}
	return 0;
}
