//Explain the use of break, continue, and goto statements in C. Provide examples of each.


#include <stdio.h>
int main() 
{
	//break statement
    for (int i = 1; i <= 10; i++)
	{
        if (i == 5)
            break;  // Exit
        printf("%d ", i);
    }
    //comtinue statement
    printf("\n");
    for (int i = 1; i <= 5; i++) 
	{
        if (i == 3)
            continue;  // Skip printing 3
        printf("%d ", i);
    }
    
//    goto statements
	printf("\n");
    int i = 1;

	start: // label
    	printf("%d ", i);
    	i++;

    if (i <= 5) 
	{
        goto start; // jump back to label
    }
    printf("Loop finished!\n");
    
    return 0;
}

