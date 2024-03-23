#include <bits/stdc++.h>
using namespace std;

const int N = 1e8 + 7;
vector<pair<int, int>> adj[N];

// unweighted graph
void unweighted_graph()
{
    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter edge " << i + 1 << " path: ";
        cin >> u >> v;
        adj[u].push_back({v, 0}); 
        adj[v].push_back({u, 0});
    }

    cout << "Adjacency list representation: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        bool first = true;
        for (auto j : adj[i])
        {
            if (!first)
            {
                cout << ", ";
            }

            cout << j.first; 
            first = false;
        }
        cout << endl;
    }
    cout << endl;

    // reset vector
    for (int i = 0; i < m; ++i)
        adj[i].clear();
}

// weighted graph
void weighted_graph()
{
    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cout << "Enter edge " << i + 1 << " path: ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << "Adjacency list representation: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        bool first = true;
        for (auto j : adj[i])
        {
            if (!first)
            {
                cout << ", ";
            }

            cout << "{" << j.first << " " << j.second << "}";
            first = false;
        }
        cout << endl;
    }
    cout << endl;

    // reset vector
    for (int i = 0; i < m; ++i)
        adj[i].clear();
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
