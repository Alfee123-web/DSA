#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph // undirected
{
    int V;
    list<int> *l;
    bool isUndr;

public:
    Graph(int V, bool isUndr = true)
    {
        this->V = V;
        l = new list<int>[V];
        // int * arr
        //  arr = new int[V];
        this->isUndr = isUndr; // directed graph
    }
    void addedge(int u, int v) // u --> v
    {
        l[u].push_back(v); // u ke neighbours me add v
        if (isUndr)
        { // false
            l[v].push_back(u);
        }
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
    bool directedCyclehelper(int src, vector<bool> &vis, vector<bool> &recPath)
    {
        // dfs = 0(V+ E)
        vis[src] = true;
        recPath[src] = true; // add rec path

        for (int v : l[src])
        {
            if (!vis[v])
            { // unvisited
                if (directedCyclehelper(v, vis, recPath))
                {
                    return true;
                    // src = neighbour , par = src
                }
            }
            else
            { // neighbour already visited & exist recpath
                if (recPath[v])
                {
                    return true;
                }
            }
        }
        recPath[src] = false; // delete node
        return false;
    }

    bool isCycledirected()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V , false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (directedCyclehelper(i, vis, recPath))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{

    Graph graph(4, false);

    // directed graph
    graph.addedge(1, 0);
    graph.addedge(0, 2);
    graph.addedge(2, 3);
//   graph.addedge(3, 0); // 0

    cout << graph.isCycledirected() << endl; // 1
    
}
