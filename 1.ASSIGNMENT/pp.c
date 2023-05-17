#include<stdio.h>
int main()
{
    int a=20;
    a=10;
    int *p;
    p=&a;
    a=220;
    printf("%d",a);
    return 0;
}