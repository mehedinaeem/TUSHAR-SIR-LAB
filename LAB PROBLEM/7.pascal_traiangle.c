#include<stdio.h>
int main()
{
    int r,c=1;
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        for(int s=1;s<=r-i;s++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                c=1;
            else
                c=c*(i-j+1)/j;
            printf("%d ",c);
        }
       printf("\n");
    }
    return 0;
}