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
    bool pathHelper(int src, int dest, vector<bool> &vis)
    {

        if (src == dest)
        {
            return true;
        }
        vis[src] = true;
        list<int> neighbours = l[src];

        for (int v : neighbours)
        {
            if (!vis[v])
            {
                if (pathHelper(v, dest, vis)) // true
                {
                    return true;
                }
            }
        }

        return false;
    }
    bool hasPath(int src, int des)
    {
        vector<bool> vis(V, false);
        return pathHelper(src, 5, vis);
    }
};

// we use arr<list<<int>> => dynamic array
// list size = V[vertex]
int main()
{
    Graph graph(8);
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(1, 3);
    graph.addedge(2, 4);
    graph.addedge(3, 4);
    graph.addedge(3, 5);
    graph.addedge(4, 5);
    // graph.addedge(5, 6);
    cout << graph.hasPath(0, 5) << endl; // 1
    // cout<<graph.hasPath(5,6)<<endl; // 0
    return 0;
}