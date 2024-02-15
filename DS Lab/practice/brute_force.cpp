#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bool flag=false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (ar[i] + ar[j] == t)
            {
                cout << ar[i] << " " << ar[j];
                return 0;
                flag=true;
            }
        }
    }
    if(!flag)
        cout<<"Not possible"<<endl;
    return 0;
}