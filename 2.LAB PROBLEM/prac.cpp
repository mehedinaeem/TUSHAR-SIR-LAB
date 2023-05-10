#include<bits/stdc++.h>
using namespace std;

int greater(int a,b,a[])
{
    if(a>b)
    {
        ar[0]=a;
        a[1]=b;
    }
    else
    {
        ar[0]=b;
        ar[1]=a;
    }
    cout<<ar[0]<<" "<<ar[1];
}
int main()
{
    int ar[2];
    int x,y;
    cin>>x>>y;

    greater(x,y,ar);
    
    
}