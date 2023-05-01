#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    //row
    for (int i = n; i > 0; i--)
    {
        //column
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}