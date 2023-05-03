#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    while (1)
    {
        printf("Enter the number of rows and columns for matrix A : ");
        scanf("%d %d", &r1, &c1);

        printf("Enter the number of rows and columns for matrix B : ");
        scanf("%d %d", &r2, &c2);

        if (c1 != r2)
        {
            printf("Error: Matrix multiplication not possible with the given dimensions.\n");

            // check take input or not again
            char repeat;
            printf("Do you want to perform matrix multiplication again? (y/n): ");
            scanf(" %c", &repeat);
            if (repeat != 'y' && repeat != 'Y')
            {
                printf("Terminate the program");
                break;
            }
            continue;
        }

        int A[r1][c1], B[r2][c2], C[r1][c2];

        // Get input from the user for matrix A
        printf("Enter matrix A elements:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        // Get input from the user for matrix B
        printf("Enter matrix B elements:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        // Multiply matrices A and B
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display the resultant matrix
        printf("Resultant matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }

        // Ask the user if they want to perform matrix multiplication again
        char repeat;
        printf("Do you want to perform matrix multiplication again? (y/n): ");
        scanf(" %c", &repeat);
        if (repeat != 'y' && repeat != 'Y')
        {
            printf("Terminate the program");
            break;
        }
    }

    return 0;
}
