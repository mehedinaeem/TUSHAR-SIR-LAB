#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    
    //input string
    scanf("%s %s", str1,str2);

    int result = strcmp(str1, str2);
   // printf("%d\n",result);
   /*if first is greater the value of result is 1 if
    first is less result =-1 if equal result=0*/

    if (result > 0)
    {
        printf("The first string is greater than the second string.\n");
    }
    else if (result < 0)
    {
        printf("The first string is less than the second string.\n");
    }
    else
    {
        printf("The first string is equal to the second string.\n");
    }

    return 0;
}
