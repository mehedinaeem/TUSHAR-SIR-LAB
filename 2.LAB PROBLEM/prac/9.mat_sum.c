#include <stdio.h>
#include<math.h>
const int n=100;

void get_matrix(int A[][n], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void print_matrix(int A[][n], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
void sub(int A[][n], int B[][n],int C[][n],int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int A[r][n], B[r][n], C[r][n];

    printf("Enter %d ele: ", r * c);
    get_matrix(A, r, c);
    get_matrix(B, r, c);

     printf("The mat:\n");
    print_matrix(A, r, c);
    print_matrix(B, r, c);

    printf("sub");
    sub(A,B,C,r,c);
    print_matrix(C,r,c);

    return 0;
}