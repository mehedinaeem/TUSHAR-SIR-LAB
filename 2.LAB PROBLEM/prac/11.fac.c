#include<stdio.h>

int result=1;

void fact(int x)
{
    if(x==1)
       return;
    fact(x-1);
    result*=x;
}
int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    printf("%d",result);
    return 0;
}