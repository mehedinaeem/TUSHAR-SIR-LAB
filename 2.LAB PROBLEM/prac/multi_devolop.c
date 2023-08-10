#include <stdio.h>
#include <stdbool.h>

void getMatrixElements(int A[100][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

void multiflyMatrix(int A[100][100], int B[100][100], int C[100][100], int x, int y, int p, int q)
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resultant matrix
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void display(int A[100][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int r1, c1, r2, c2;
    int A[100][100], B[100][100], C[100][100];
    printf("\nEnter 1st matrix row & column: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter 2nd matrix row & column: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("its not follow the rule of matix multi\n");
        printf("Do u want to take input again(y/n):\n");
        printf("if u want press y else press n:");
        char op;
        scanf(" %c", &op);
        if (op == 'y')
        {
            printf("\nEnter 1st matrix row & column: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter 2nd matrix row & column: ");
            scanf("%d %d", &r2, &c2);
        }
        else
        {
            printf("\n\nThe program End\n\n");
            return 0;
        }
    }

    // input matrix
    printf("Enter %d element of 1st matrix: ", r1 * c1);
    getMatrixElements(A, r1, c1);
    printf("Enter %d element of 2nd matrix: ", r2 * c2);
    getMatrixElements(B, r2, c2);

    // Display matrix
    printf("The 1st Matrix is:\n");
    display(A, r1, c1);
    printf("The 2nd Matrix is:\n");
    display(B, r2, c2);

    // multi
    printf("The multi of Matrix is:\n");
    multiflyMatrix(A, B, C, r1, c1, r2, c2);

    while (true)
    {
        printf("if u want to take input again(y/n):\n");
        printf("if take press y else press n: ");
        char op;
        scanf(" %c", &op);
        if (op == 'y')
        {
            main();
        }

        else
        {
            printf("\n\nThe program End\n\n");
            break;
            return 0;
        }
    }

    return 0;
}