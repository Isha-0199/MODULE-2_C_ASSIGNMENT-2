//3. Loops
//LAB EXERCISE 1: Prime Number Check
//? Write a C program that checks whether a given number is a prime number or not using a for
//loop.
//? Challenge: Modify the program to print all prime numbers between 1 and a given number.

#include<stdio.h>
int main()
{
	int num,count = 0;
	printf("Enter Number For Checking Prime Number:");
	scanf("%d",&num);
	for(int i = 1; i <= num; i++)
	{
		if(num%i == 0)
		{
			count++; 
		}
	}
	if(num <= 1)
	{
		printf("Number is not Prime Number %d:\n",num);
	}
	else if(count == 2)
	{
		printf("Number iS prime number %d:\n",num);
	}
	else
	{
		printf("Number is not prime number.\n", num);
	}
	
	printf("\nPrime numbers between 1 and %d are:\n", num);
	
	for(int j = 2 ; j <= num ; j++)
	{
		count = 0;
		
		for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", j);
        }

	}
	return 0;
}
