#include <stdio.h>

int main()
{
    int n;

    // input
    scanf("%d", &n);
    int flag = 0;

    // loop for check prime
    for (int i = ; i <= n; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                {
                    flag++;
                    break;
                }
        }

        // output
        if (flag == 0)
            printf("%d ", i);
    }
    return 0;
}
