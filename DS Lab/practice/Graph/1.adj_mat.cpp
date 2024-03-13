#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7; // safe zone 1000
int adj_mat[N][N];

void unweighted_graph()
{
    int n, m;
    cout << "Enter number of node: ";
    cin >> n;
    cout << "Enter Number of edge: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {

        int u, v, w;
        cout << "Enter edge " << i + 1 << " path: ";
        cin >> u >> v;
        adj_mat[u][v] = 1;
        adj_mat[v][u] = 1;
    }
    cout << endl;

    cout << "Adjacency matrix representation: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

void weighted_graph()
{
    int n, m;
    cout << "Enter number of node: ";
    cin >> n;
    cout << "Enter Number of edge: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {

        int u, v, w;
        cout << "Enter edge " << i + 1 << " path: ";
        cin >> u >> v >> w;
        adj_mat[u][v] = w;
        adj_mat[v][u] = w;
    }
    cout << endl;

    cout<<"Adjecency matrix representation: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

int main()
{
    while (true)
    {
        
        cout << "option 1: Work with unweighted Graph" << endl;
        cout << "option 2: Work with weighted Graph" << endl;
        cout << "option 0: Exit" << endl;
        cout << "Select option: ";
        int op;
        cin >> op;

        if (op == 1)
        {
            unweighted_graph();
        }
        if (op == 2)
        {
            weighted_graph();
        }
        if (op == 0)
        {
            return 0;
        }
    }
    return 0;
}