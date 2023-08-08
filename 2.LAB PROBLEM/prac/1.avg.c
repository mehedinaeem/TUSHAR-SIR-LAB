#include<stdio.h>

void bitwise(int a,int b);
void avg(float x,float y);

void avg(float x,float y)
{
    float avg=(x+y)/2;
    printf("%0.2f\n\n",avg);
}

void bitwise(int a,int b)
{
    int bitwise_or=a | b;
    int bitwise_and=a & b;

    printf("%d-----%d\n",bitwise_or,bitwise_and);
}

void shift(int a,int b)
{
    int left_shift=a<<2;
    int right_shift=b>>1;
    printf("Shift--->%d     %d",left_shift,right_shift);
}

int main()
{
    int i1,i2;
    float f1,f2;
    scanf("%d %d",&i1,&i2);
    scanf("%f %f",&f1,&f2);
    
    avg(f1,f2);
    bitwise(i1,i2);
    shift(i1,i2);

    return 0;
}