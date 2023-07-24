#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    //p=(int*)malloc(5 * sizeof(int));
    p=(int*)calloc(5,sizeof(int));

    if(p==NULL)
       printf("take  no space\n");
    else 
       printf("TAke space\n");

    free(p);

     if(p==NULL)
       printf("take  no space\n");
    else 
       printf("TAke space\n");
    return 0;
}