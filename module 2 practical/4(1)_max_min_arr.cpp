//4. Arrays
//LAB EXERCISE 1: Maximum and Minimum in Array
//Write a C program that accepts 10 integers from the user and stores them in an array. The
//program should then find and print the maximum and minimum values in the array.

//Challenge: Extend the program to sort the array in ascending order.


#include<stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;
    int max, min;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Assume first element is max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Display max and min
    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    // Sort array in ascending order (using simple bubble sort)
    for(i = 0; i < 9; i++) 
	{
        for(j = i+1; j < 10; j++)
		{
            if(arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nArray in Ascending Order:\n");
    for(i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

