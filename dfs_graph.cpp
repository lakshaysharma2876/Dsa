#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<int> adj[], vector<int>& ls, bool vis[]) {
    vis[node] = true;
    ls.push_back(node);
    for(auto it : adj[node]) {
        if(vis[it] == false) dfs(it,adj,ls,vis);
    }
}

vector<int> dfsGraph(int N, vector<int> adj[]) {
    bool vis[N] = {false};
    int start = 0;
    vector<int> ls;
    dfs(start,adj,ls,vis);
    return ls;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> adj[N];
    int u,v;
    for(int i=0; i<M; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dfs = dfsGraph(N, adj);
    for(auto it:dfs) cout << it << " ";

    return 0;
}