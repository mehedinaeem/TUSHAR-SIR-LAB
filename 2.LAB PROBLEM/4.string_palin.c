#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int len, flag = 0;

    // Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Compute length of string
    len = strlen(str);

    // Check if string is a palindrome
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    // Output result
    if (flag == 0)
    {
        printf("Palindrome? Yes\n");
    }
    else
    {
        printf("Palindrome? No\n");
    }

    return 0;
}
