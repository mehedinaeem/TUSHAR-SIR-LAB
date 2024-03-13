#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
vector<int>adj[N];
bool visited[N];

void dfs(int u)
{
    //cout<<"visiting node: "<<u<<endl;
    cout<<u<<" ";
    visited[u]=true;
    for(int v:adj[u])
    {
        if(visited[v])  continue;
        dfs(v);
    }
    //cout<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"Node "<<i<<": ";
    //     for(int j:adj[i])
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    dfs(1);

    cout<<endl<<"visiting Array\n";
    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<" Status: "<<visited[i]<<endl;
    }

    return 0;
}