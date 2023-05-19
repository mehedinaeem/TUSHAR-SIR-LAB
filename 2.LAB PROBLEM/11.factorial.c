#include <stdio.h>

// function
int fact(int m)
{

    if (m == 1)
        return 1;
    else
    {
        int f = m * fact(m - 1);
        return f;
    }
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int result = fact(n);
    printf("%d", result);

    return 0;
}
