#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t); 
    adj[t].push_back(s);
}

void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s){
    visited[s] = true;

    cout << s << " ";

    for (int i : adj[s])
        if (visited[i] == false)
            DFSRec(adj, visited, i);
}

void DFS(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(), false);
    DFSRec(adj, visited, s);
}

int main(){
    int V = 5; // Number of vertices in the graph

    vector<vector<int>> adj(V);

    vector<vector<int>> edges={{1, 2},{1, 0},{2, 0},{2, 3},{2, 4}};

    for (auto &e : edges)
        addEdge(adj, e[0], e[1]);

    int source = 1; 
    cout << "DFS from source: " << source << endl;
    DFS(adj, source); 

    return 0;
}
