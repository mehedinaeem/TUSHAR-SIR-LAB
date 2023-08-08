#include<stdio.h>

void sum(int n)
{
    int sum=0;
    while(n>0)
    {
        int x=n%10;
        n/=10;
        sum+=x;
    }
    printf("%d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}