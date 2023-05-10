#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=2;
    cin>>n;
    int count=0,flag=0;
    while(count<=n)
    {
        flag=0;
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
            count++;
        }
        i++;
    }
    return 0;
}