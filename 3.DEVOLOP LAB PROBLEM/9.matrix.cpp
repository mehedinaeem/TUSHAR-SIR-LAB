#include <bits/stdc++.h>
using namespace std;

int getMatricxElements(int A[100][100],int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> A[i][j];
        }
    }

}
int AddMatricx(int A[][100],int A[][100],int x,int y)
{
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            //int sum[i][j]=0;
            cout<<A[i][j]+=A[i][j]<<" ";
        }
        cout<<endl;
    }
}
int subMatrix()
{
}
int display(int A[100][100],int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int t,r,c;
    cout<<"Input how many matrix u want to take: ";
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Enter "<<i<<" Number matrix rows & columns: ";
        cin>>r>>c;
        int A[100][100];
        cout<<"Take the "<<i<<" th matrix:"<<endl;
        getMatricxElements(A,r,c);
        cout<<"The "<<i<<" ith matrix is:"<<endl;
        display(A,r,c);
        AddMatricx(A,A,r,c);

    }

    return 0;
}