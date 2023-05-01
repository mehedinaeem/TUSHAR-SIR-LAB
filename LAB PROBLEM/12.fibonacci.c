#include <stdio.h>
int fibonacci(int f)
{
    if (f == 0)
        return 0;
    else if (f == 1)
        return 1;
    else
        return (fibonacci(f - 1) + fibonacci(f - 2));
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}