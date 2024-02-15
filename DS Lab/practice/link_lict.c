#include<stdio.h>
void main()
{
    int s=7,p,l,lk[12]={-2,-2,6,-1,-2,11,10,-2,3,4,7,-2};
    char i[12]={"  OT  X NIE "},it='x';
    p=s;
    while (p!=-1)
    {
        if(it==i[p])
        {
            l=p; printf("%d",l);return;
        }
        else p=lk[p];
    }
    printf("item not found in the array");
}