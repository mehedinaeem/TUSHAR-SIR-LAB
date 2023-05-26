#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000];
    char substring[100];

    printf("Enter a line of text: ");
    gets(text);

    printf("Enter a substring: ");
    scanf("%s", substring);

    int count = 0;
    char* position = text;

    while ((position = strstr(position, substring)) != NULL)
    {
        count++;
        position += strlen(substring);
    }

    printf(" '%s' occurs %d times given text.\n", substring, count);

    return 0;
}
