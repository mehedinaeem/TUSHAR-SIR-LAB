#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=n;i>0;i/=10)
    {
        int x=i%10;
        sum+=x;
    }
    printf("Sum of the digits of the number is: %d",sum);
    return 0;
}