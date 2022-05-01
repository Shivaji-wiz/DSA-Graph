#include <bits/stdc++.h>
using namespace std;

vector<int> dfs;

void dfs1(int node,vector<int> &vis,vector<int> adj[],vector<int> &dfs){
    dfs.push_back(node);

    vis[node] = 1;

    for(auto it : adj[node]){
        if(!vis[it]){
            dfs1(it,vis,adj,dfs);
        }
    }
}


vector<int> DFSofGraph(int V,vector<int> adj[]){
    vector<int>vis(V+1,0);

    for(int i = 1; i<=V;i++){
        if (!vis[i]){
            dfs1(i,vis,adj,dfs);
        }
    }
    return dfs;
}



int main()
{
    int n, m;
    cin >> n >> m;

    // declare adjacency list
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFSofGraph(n, adj);

    for (auto it : dfs)
    {
        cout << it << " ";
    }
    return 0;
}