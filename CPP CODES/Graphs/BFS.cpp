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

    void bfs()
    { //(0(V + E))
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;

        while (q.size() > 0)
        {
            int u = q.front(); // curr vertex
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
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
    graph.addedge(4,5);
    graph.addedge(5,6);
    graph.bfs();

    return 0;
}
// /0 1 2 3 4 5 6