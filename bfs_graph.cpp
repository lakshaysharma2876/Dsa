#include <bits/stdc++.h>

using namespace std;

vector<int> bfsGraph(int N, vector<int> adj[]) {
    bool vis[N] = {false};
    queue<int> bfsQueue;
    bfsQueue.push(0);
    vis[0]= true;

    vector<int> bfs;
    while(!bfsQueue.empty()) {
        int node = bfsQueue.front();
        bfsQueue.pop();
        bfs.push_back(node);

        for(auto it : adj[node]) {
            if(vis[it] == false) {
                bfsQueue.push(it);
                vis[it] = true; 
            }
        }
    }

    return bfs;
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

    vector<int> bfs = bfsGraph(N, adj);
    for(auto it:bfs) cout << it << " ";

    return 0;
}