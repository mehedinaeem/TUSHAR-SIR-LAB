#include<bits/stdc++.h>
using namespace std;

const int N = 26; // Assuming nodes are characters from 'a' to 'z'
vector<char> adj[N];
bool visited[N];

void dfs(char u, char parent)
{
    cout << u << " ";
    visited[u - 'a'] = true;
    for(char v : adj[u - 'a'])
    {
        if (v != parent && !visited[v - 'a'])
            dfs(v, u);
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++) // Assuming n-1 edges in the tree
    {
        char u, v;
        cin >> u >> v;
        adj[u - 'a'].push_back(v);
        adj[v - 'a'].push_back(u);
    }

    dfs('a', '\0'); // Assuming 'a' is the root of the tree

    cout << endl << "Visiting Array\n";
    for(int i = 0; i < N; i++)
    {
        cout << "Node " << char('a' + i) << " Status: " << visited[i] << endl;
    }

    return 0;
}
