//Lab Challenge 1: Armstrong Number 
//"	Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3). 
//"	Challenge: 

#include<stdio.h>
#include<math.h>
int Armstrong_check(int num);  
int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (Armstrong_check(number))
    {
	 printf("number is an Armstrong number.\n", number);
	}   
    else
	{
		 printf("number is not an Armstrong number.\n", number);
	}    
       

    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) 
	{
        if (Armstrong_check(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int Armstrong_check(int num) 
{
    int original,sum = 0,digits = 0,temp= num;
	original = num;
    while (temp > 0) 
	{
    	
        digits++; 
        temp = temp / 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

