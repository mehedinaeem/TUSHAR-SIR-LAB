#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    char ch[100];
    printf("Enter a string: ");
    scanf("%s", ch);
    printf("%d\n", strlen(ch));

    // Loop for printing rows
    for (i = 1; i <= strlen(ch) / 2; i++)
    {
        // Print spaces
        for (int s = 1; s <= strlen(ch) / 2 - i; s++)
        {
            printf("  ");
        }

        // Increasing part of the pattern
        for (j = i; j < i * 2; j++)
        {
            printf("%c ", ch[j - 1]);
        }

        // Decreasing or 2nd part of the pattern
        for (k = j - 2; k >= i; k--)
        {
            printf("%c ", ch[k - 1]);
        }
        printf("\n");
    }

    return 0;
}
