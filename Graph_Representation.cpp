#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >>m;

    //declare adj_matrix
    int adj[n+1][n+1];

    for(int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //declare adjacency list
    vector<int>adj1[n+1];
    for(int i = 0;i<m;i++){
        int u,v;
        cin >> u >> v;

        adj1[u].push_back(v);
        adj1[v].push_back(u);

    }

    // declare adjacency list for weighted graph
    vector<pair<int,int>> adj2[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;

        adj2[u].push_back({v,wt});
        adj2[v].push_back({u,wt});
    }

    return 0;
}