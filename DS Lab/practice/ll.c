#include<stdio.h>
int main()
{
    int ptr=5, start=ptr,link [10]={-2,8,-2,-1,-2,1,9,-2,6,3};
    char info[10]={' ','K',' ','U',' ','J','N',' ',' ','I'};
    int loc;
    char c='I';
    while(ptr!=-1)
    {
        printf("%c",info[ptr]);
        ptr=link[ptr];
    }
    printf("%d",loc);
    return 0;
}