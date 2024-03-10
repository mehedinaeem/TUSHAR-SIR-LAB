#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;// safe zone 1000
int adj_mat[N][N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v;
        adj_mat[u][v] = 1; // one line for directed
        adj_mat[v][u] = 1; // 2 line for undirected

        // // for weighted graph
        // adj_mat[u][v] = w; // one line for directed
        // adj_mat[v][u] = w; // 2 line for undirec
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}