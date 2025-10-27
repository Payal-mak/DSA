#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 10;
bool visited[MAX_NODES];
bool adjacenceyMatrix[MAX_NODES][MAX_NODES];


void BFS(int startnode, int total_nodes)
{
    queue<int> q;
    q.push(startnode);
    visited[startnode] = true;

    while(!q.empty()){
        int currentnode;
        currentnode = q.front();
        cout << currentnode << " ";
        q.pop();

        for(int i = 0; i < total_nodes; i++){
            if(adjacenceyMatrix[currentnode][i] = true && !visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main()
{
    int total_nodes, edges;
    cout << "enter the number of nodes: ";
    cin >> total_nodes;

    cout << "enter the number of edges: ";
    cin >> edges;

    // define the adjaceny matrix with false
    for (int i = 0; i < total_nodes; i++)
    {
        for (int j = 0; j < total_nodes; j++)
        {
            adjacenceyMatrix[i][j] = false;
        }
    }

    cout << "enter the edges (u,v)" << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacenceyMatrix[u][v] = true;
        adjacenceyMatrix[v][u] = true; // for undirected graph only

    }
    int startnode;
    cout << "the starting node of BFS: ";
    cin >> startnode;

    BFS(startnode, total_nodes);
    return 0;
}