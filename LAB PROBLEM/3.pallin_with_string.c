#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;

    // Input
    printf("Enter an integer or string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check for palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    // Output
    if (flag == 1)
    {
        printf("Palindrome? No\n");
    }
    else
    {
        printf("Palindrome? Yes\n");
    }

    return 0;
}
