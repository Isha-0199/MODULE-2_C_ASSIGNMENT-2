//LAB EXERCISE 3: Sum of Array Elements
//? Write a C program that takes N numbers from the user and stores them in an array. The
//program should then calculate and display the sum of all array elements.
//? Challenge: Modify the program to also find the average of the numbers.

#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    float average;


    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum
    }

    average = sum / n;

    printf("\nSum of all elements = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

