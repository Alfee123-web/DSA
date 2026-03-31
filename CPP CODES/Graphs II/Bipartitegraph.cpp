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
    bool isBipartite()
    {
        queue<int> q;
        vector<bool> vis(V, false);
        vector<int> color(V, -1);


        q.push(0);
        color[0] = 0;
        vis[0] = 0;

        while (q.size() > 0)
        {
            int curr = q.front();
            q.pop();

            list<int> neighbours = l[curr];

            for (int v : neighbours)
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    color[v] = !color[curr]; // opp color
                    q.push(v);
                }
                else
                {
                    if (color[v] == color[curr])
                    { // same color
                        return false;
                    }
                }
            }
        }
        return true;
    }

     // USING ONE VECTOR ONLY - COLOR VECTOR
    //     while (q.size() > 0)
    //     {
    //         int curr = q.front();
    //         q.pop();

    //         list<int> neighbours = l[curr];

    //         for (int v : neighbours)
    //         {
    //             if (color[v] == -1)
    //             {
    //                 color[v] = true;
    //                 color[v] = !color[curr]; // opp color
    //                 q.push(v);
    //             }
    //             else
    //             {
    //                 if (color[v] == color[curr])
    //                 { // same color
    //                     return false;
    //                 }
    //             }
    //         }
    //     }
    //     return true;
    // }
};
int main()
{

    Graph graph(4);

    // undirected bipartite graph
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(1, 3);
    graph.addedge(2, 3);
    // graph.addedge(0, 3);//0

    cout << graph.isBipartite() << endl; // 1
}
