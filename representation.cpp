#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef unordered_set<int> usi;
typedef pair<int, vvi> pivvi;
typedef unordered_map<int, int> umii;
typedef unordered_map<int, umii> umiumii;
typedef unordered_map<int, usi> umiusi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    v[0] = 10;
}
pivvi dummy_graph()
{
    int v = 7;
    vvi edges({{1, 2}, {2, 3}, {3, 4}, {1, 4}, {1, 5}, {5, 7}, {7, 4}});
    return {v, edges};
}
void print_adj_matrix(const vvb &adj_matrix)
{
    int n = adj_matrix.size(); // number of nodes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void make_adj_matrix_un_ud(pivvi &graph)
{
    int nodes = graph.first;
    vvi edges = graph.second;
    vvb adj_matrix(nodes, vector<bool>(nodes, false));
    for (int i = 0; i < edges.size(); i++)
    {
        adj_matrix[edges[i][0] - 1][edges[i][1] - 1] = true;
        adj_matrix[edges[i][1] - 1][edges[i][0] - 1] = true;
    }
    print_adj_matrix(adj_matrix);
}

void make_adj_matrix_uw_d(pivvi &graph)
{
    int nodes = graph.first;
    vvi edges = graph.second;
    vvb adj_matrix(nodes, vector<bool>(nodes, false));
    for (int i = 0; i < edges.size(); i++)
    {
        adj_matrix[edges[i][0] - 1][edges[i][1] - 1] = true;
        // adj_matrix[edges[i][1] - 1][edges[i][0] - 1] = true;
    }
    print_adj_matrix(adj_matrix);
}

void make_adj_list(pivvi &graph)
{
    int nodes = graph.first;
    vvi edges = graph.second;
    umiusi adj_list;
    for (vector<int> &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adj_list[u].insert(v); 
        adj_list[v].insert(u);
    }
}

void print_adj_list(const umiusi &adj_list, int nodes)
{
    cout << "Adjacency List (Unweighted, Undirected):\n";
    for (int i = 1; i <= nodes; i++) // 1-based nodes
    {
        cout << i << ": ";
        // if the node exists in the map, print its neighbors
        if (adj_list.count(i))
        {
            for (int neighbor : adj_list.at(i))
                cout << neighbor << " ";
        }
        cout << "\n";
    }
}

void convert_to_adj_list(vvb &adj_matrix)
{
    //
}

void convert_to_adj_matrix(umiusi &adj_list)
{
    //
}

void convert_to_adj_matrix(umiumii &adj_list)
{
    //
}

void solve()
{
    pivvi graph1 = dummy_graph();
    umiusi adj_list = make_adj_list(graph1); // capture return value
    print_adj_list(adj_list, graph1.first);
}

int main()
{
    solve();
}