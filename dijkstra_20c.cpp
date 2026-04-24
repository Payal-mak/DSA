#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

// n = number of vertices, m = number of edges
// adj = adjacency list: adj[u] = { {v, weight}, ... }
// Returns: vector of shortest distances and a parent array for path reconstruction
pair<vector<ll>, vector<int>> dijkstra(int n,
                                       const vector<vector<pair<int, int>>> &adj,
                                       int source)
{
    // TODO: implement Dijkstra here
    // dist.assign(n+1, INF);
    // parent.assign(n+1, -1);
    // priority_queue<...> pq;
    // ...
    return {{}, {}}; // placeholder
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w}); // undirected
    }

    // call your dijkstra function
    // auto [dist, parent] = dijkstra(n, adj, 1);

    // TODO: reconstruct path from parent and print
    // if no path to n, print -1

    return 0;
}
