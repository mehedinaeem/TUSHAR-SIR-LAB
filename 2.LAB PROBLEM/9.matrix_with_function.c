#include <stdio.h>

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

void AddMatrixElements(int A[100][100], int B[100][100], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

void SubMatrixElements(int A[100][100], int B[100][100], int x, int y)
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", A[i][j] - B[i][j]);
        }
        printf("\n");
    }
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
}

int main()
{
    int r, c;
    printf("Enter row & column: ");
    scanf("%d %d", &r, &c);
    int A[100][100], B[100][100];

    // input matrix
    printf("Enter %d element of 1st matrix: ", r * c);
    getMatrixElements(A, r, c);
    printf("Enter %d element of 2nd matrix: ", r * c);
    getMatrixElements(B, r, c);

    // Display matrix
    printf("The 1st Matrix is:\n");
    display(A, r, c);
    printf("The 2nd Matrix is:\n");
    display(B, r, c);

    // sum of matrix
    printf("The Sum is:\n");
    AddMatrixElements(A, B, r, c);

    // sub of matrix
    printf("The Sub is:\n");
    SubMatrixElements(A, B, r, c);

    return 0;
}