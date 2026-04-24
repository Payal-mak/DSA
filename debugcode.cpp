// User Function Template
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {

        // adj = {{{1,1}, {2,6}},{{0,1},{2,3}},{{0,6},{1,3}}}

        vector<vector<vector<int>>> adj(V);
        for (const auto edge : edges)
        {
            int st = edge[0];
            int end = edge[1];
            int weight = edge[2];
            adj[st].push_back({end, weight});
            adj[end].push_back({st, weight});
        }

        // we create min heap priority queue to store vertices
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // to store shortest distance
        vector<int> dist(V, INT_MAX);
        // first push src itself, and distance of src to itself is 0
        dist[src] = 0;
        pq.push({src, 0});

        // mark it as visited
        // visited[src] = true;

        // while the queue is not empty
        while (!pq.empty())
        {
            // as it is min heap, top element will give the pair
            // with smallest distance
            int node = pq.top().first;
            int wt = pq.top().second;
            pq.pop(); // extract that element

            // we will get the (neighbours, weight) vector<int>, of that node in adj list
            for (auto ele : adj[node])
            {
                int neigh = ele[0];
                int weigh = ele[1];

                // wt = The current shortest distance from the source vertex
                // to the node you are processing right now.
                // The weight (cost/length) of the single edge
                // from the current node to one of its neighbors.
                if (wt + weigh < dist[neigh])
                {
                    dist[neigh] = wt + weigh;
                    pq.push({neigh, dist[neigh]});
                }
            }
        }
        return dist;
    }
};