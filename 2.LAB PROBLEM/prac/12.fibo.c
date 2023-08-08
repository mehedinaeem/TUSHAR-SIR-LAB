#include<stdio.h>

int fibo(int f)
{
    if(f==0)
       return 0;
    if(f==1)
      return 1;
    else
      return(fibo(f-1)+fibo(f-2));
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}