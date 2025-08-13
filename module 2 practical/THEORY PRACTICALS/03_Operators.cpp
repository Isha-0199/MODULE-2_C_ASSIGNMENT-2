//Write a C program that accepts two integers from the user and performs arithmetic, 
//relational, and logical operations on them. Display the results.

#include <stdio.h>
int main()
 {
 	
 	 int a,b;
    printf("Enter The Number :");
    scanf("%d",&a);
    
    printf("Enter The Number:");
    scanf("%d",&b);
    
    printf("\n=== ARITHMATIC OPERATOR ===\n");
    printf("a + b : %d\n", a + b);
    printf("a - B : %d\n",a - b);
    printf("a * b : %d\n",a * b);
    printf("a / b : %d\n", a / b);
    printf("a %% b : %d\n",a % b);
    
    printf("\n=== Relational Operator ===\n");
    printf("a == b : %d\n", a == b);
    printf("a != B : %d\n",a != b);
    printf("a > b : %d\n",a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n",a >= b);
    printf("a <= b : %d\n",a <= b);
    
    printf("\n=== Relational Operator ===\n");
    printf("a && b : %d\n", a && b);
    printf("a || B : %d\n",a || b);
    printf("!a : %d\n",!a);
    printf("!b : %d\n",!b);
    

    return 0;
}


