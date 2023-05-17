#include<stdio.h>
int main()
{
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.25,q=18.76;

   printf("%c is store at address %u.\n",a,&a);
   printf("%d is store at address %u.\n",x,&x);
   printf("%f is store at address %u.\n",p,&p);
   printf("%f is store at address %u.\n",q,&q);


    return 0;
}