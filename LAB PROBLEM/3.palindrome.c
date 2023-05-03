#include <stdio.h>
int main()
{
    int n, num, rev = 0;
    printf("Enter the number:");
    scanf("%d", &n);

    // overright n for compare after reverse
    num = n;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    // compare reverse & previous n
    if (n == rev)
    {
        printf("YES.The number is palindrome");
    }
    else
    {
        printf("NO.The number is not palindrome");
    }

    return 0;
}
