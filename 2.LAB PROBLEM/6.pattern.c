#include <stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    //thats loop for prints row
    for (int i = 1; i <= n; i++)
    {
        //increasing part of pattern
        for (j = i; j < i * 2; j++)
        {
            printf("%d ", j);
        }

        //decreasing or 2nd part of pattern
        for (k = j - 2; k >= i; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    
    return 0;
}