#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph // undirected
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        // int * arr
        //  arr = new int[V];
    }
    void addedge(int u, int v) // u --> v
    {
        l[u].push_back(v); // u ke neighbours me add v
        l[v].push_back(u); // v ke neighbours me add u
    }
    void print()
    {
        for (int u = 0; u < V; u++) // 0,1,2,3....
        {
            list<int> neighbours = l[u];
            cout << u << " : ";
            for (int v : neighbours)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
    void dfs(int u, vector<bool> &vis)
    {                  //(0(V+ E))
        vis[u] = true; // current node already visited
        cout << u << " ";

        list<int> neighbours = l[u];
        for (int v : neighbours)
        {
            if (!vis[v])
            { // false
                dfs(v, vis);
            }
        }
    }
};

int main()
{
    Graph graph(7);
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(1, 3);
    graph.addedge(2, 4);
    graph.addedge(3, 4);
    graph.addedge(3, 5);
    graph.addedge(4, 5);
    graph.addedge(5, 6);
    vector<bool> vis(7, false);
    graph.dfs(0, vis);

    return 0;
}
//0 1 3 4 2 5 6
