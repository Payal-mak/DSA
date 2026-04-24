#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <climits>
using namespace std;

unordered_map<int, vector<pair<int, int>>> constructAdj(
    const vector<vector<int>> &edges)
{
    unordered_map<int, vector<pair<int, int>>> adj;
    for (const auto &edge : edges)
    {
        int u = edge[0], v = edge[1], wt = edge[2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    return adj;
}

vector<int> dijkstra(int V, const vector<vector<int>> &edges, int src)
{
    auto adj = constructAdj(edges);

    // min-heap of {dist,node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    vector<int> dist(V, INT_MAX);
    vector<bool> locked(V, false);
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();
        if (locked[u])
            continue;
        locked[u] = true;
        for (auto &[v, w] : adj[u])
        {
            if (!locked[v] && dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main()
{
    int V = 5;
    int src = 0;
    vector<vector<int>> edges = {
        {0, 1, 4}, {0, 2, 8}, {1, 4, 6}, {2, 3, 2}, {3, 4, 10}};

    vector<int> result = dijkstra(V, edges, src);

    for (int d : result)
        cout << d << " ";
    return 0;
}
