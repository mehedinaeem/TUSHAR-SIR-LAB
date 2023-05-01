#include <stdio.h>

int main()
{
    int A[4][3], B[3][4], C[4][4];

    // Get input from the user for matrix A
    printf("Enter matrix A elements:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Get input from the user for matrix B
    printf("Enter matrix B elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices A and B
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resultant matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
