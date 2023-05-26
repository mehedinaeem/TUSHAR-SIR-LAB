#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int length1=0,length2=0;
    
    //input string
    scanf("%s %s", str1,str2);
    
    int i=0;
    while(str1[i]!='\0')
    {
        length1++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        length2++;
        i++;
    }
    
    /*if first is greater the value of result is 1 if
    first is less result =-1 if equal result=0*/

    int result=length1-length2;

    if (result > 0)
    {
        printf("first is greater.\n");
    }
    else if (result < 0)
    {
        printf("first is less.\n");
    }
    else
    {
        printf("equal.\n");
    }

    return 0;
}
