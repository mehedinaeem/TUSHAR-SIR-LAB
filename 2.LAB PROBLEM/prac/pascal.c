#include <stdio.h>
int main()
{
    printf("Enter N: ");
    int n, c = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            //add here 2 space
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
                //here 1 space before %d and 2 after
            printf(" %d  ", c);
        }
        printf("\n\n");
    }
    
    return 0;
}