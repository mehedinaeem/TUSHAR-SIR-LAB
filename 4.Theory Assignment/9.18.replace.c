#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100]; 
    gets(str1);
    int n = strlen(str1);
    //printf("%s\n", str1);
    int count = 0;

    for (int i = 0, j = 0; i < n; i++, j++)
    {
        if (str1[i] == ' ')
        {
            count++;
            str2[j++] = ' '; 
            str2[j] = ' ';
        }
        else
        {
            str2[j] = str1[i];
        }
    }

    str2[n + count] = '\0'; 
    printf("%s", str2);

    return 0;
}
