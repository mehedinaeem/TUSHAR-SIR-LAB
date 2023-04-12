#include <stdio.h>
int main()
{
    int r, c, i, j;
    // input row & column
    printf("Enter row & column: ");
    scanf("%d %d", &r, &c);
    int ara1[r][c];
    int ara2[r][c];

    // input ara1
    printf("Enter 1st matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }

    // input ara2
    printf("Enter 2nd matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    // find sum
    printf("The sum is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ara1[i][j] + ara2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
