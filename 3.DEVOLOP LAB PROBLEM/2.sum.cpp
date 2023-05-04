#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int sum=0;
    int count=0;
    while(n>0)
    {
        int x=n%10;
        sum+=x;
        n/=10;
        count++;
    }
    //cout<<sum;
    if(count==3)
    {
        cout<<sum;
    }
    else
    {
        cout<<"plz enter 3 digit number:"<<endl;
        cout<<"Do u want to input again:(y/n): ";
        char c;
        cin>>c;
        if(c=='y' || c=='Y')
        {
            main();
        }
        else
        cout<<"Terminate the program";
    }
    return 0;
}