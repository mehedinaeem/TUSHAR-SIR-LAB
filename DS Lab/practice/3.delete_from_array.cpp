#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5]={1,2,3,4,5};
    int j=2; // Change this to the index you want to delete
    int n = 5; // Size of the array

    for(int i=j; i<n-1; i++)
    {
        ar[i] = ar[i+1];
    }

    n--; // Decrease the size of the array

    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;
}
