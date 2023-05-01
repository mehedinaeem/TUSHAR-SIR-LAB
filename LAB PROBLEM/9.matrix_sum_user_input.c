#include <stdio.h>
int main()
{
    int r, c, i, j;
    // input row & column
    printf("Enter the number of rows and columns of the first matrix:");
    scanf("%d %d", &r, &c);
    int A[r][c];
    int B[r][c];

    // input ara1
    printf("Enter the %d elements of the matrix A: ", r * c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // input ara2
    printf("Enter the %d elements of the matrix B: ", r * c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // The first matrix
    printf("The first matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // The 2nd matrix
    printf("The second matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // find sum
    printf("The sum of the two entered matrices is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
