#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5]={1,2,3,4,5};
    int j=4;
    while(j>=2)
    {
        ar[j+1]=ar[j];
        j--;
    }
    ar[2]=10;
    for(int i=0;i<6;i++)
    {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}