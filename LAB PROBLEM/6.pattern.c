#include<stdio.h>
int main()
{
    int n,p,j,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=i;j<i*2;j++)
        {
            printf("%d ",j);
        }
        for(k=j-2;k>=i;k--)
        {
            printf("%d ",k);
        }
         printf("\n");
    }
    return 0;
}