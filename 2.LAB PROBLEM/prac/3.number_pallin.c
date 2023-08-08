#include <stdio.h>
#include<stdbool.h>

bool pallin(int n)
{
    int x = n;
    int rev = 0;
    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    if (rev == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    pallin(n);

    if(pallin(n))
       printf("pallind");
    else
       printf("Not");
}