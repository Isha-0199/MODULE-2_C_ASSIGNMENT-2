#include <stdio.h>
int main() 
{
    int a[2][2], b[2][2], sum[2][2];
    int a1[3][3], b1[3][3], mul[3][3];
    int i, j, k;

    printf("-------------------Addition of Two 2x2 Matrices-----------------------\n");
    printf("Enter elements for Matrix A (2x2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {		
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (2x2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) 
        {	
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }	
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }	

    
    printf("\nSum of 2x2 matrices:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++)
        {
            printf("%4d", sum[i][j]);
        }   
        printf("\n");
    }

    // ===== 3x3 MATRIX MULTIPLICATION =====
    
    
    printf("------------------Multiplication of Two 3x3 Matrices-----------------------\n");

    printf("\nEnter elements for Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b1[i][j]);
        }
    }


    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            mul[i][j] = 0; 
            for (k = 0; k < 3; k++) 
            {	
                mul[i][j] += a1[i][k] * b1[k][j];
            }
        }
    }
    printf("Multiplication of 3x3 matrices (A * B):\n");
    for (i = 0; i < 3; i++) 
    {	
        for (j = 0; j < 3; j++) 
        {
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

