#include<stdio.h>
#include<string.h>

void pallin(char st[])
{
    int count=0;
    for(int i=0;i<strlen(st)/2;i++)
    {
        if(st[i] != st[strlen(st)-i-1])
             count++;
    }
    if(count==0)
       printf("yes");
    else
       printf("No");
}


int main()
{
    char st[100];
    scanf("%s",st);
    
    pallin(st);
    return 0;
}