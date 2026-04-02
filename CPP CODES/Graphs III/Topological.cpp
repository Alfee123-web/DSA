#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool isUndir;

public:
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }
    void addedge(int u, int v)
    {
        l[u].push_back(v);
        if (isUndir)
        {
            l[v].push_back(u);
        }
    }
    void topHelper(int src, vector<bool> &vis, stack<int> &s)
    { // dfs , 0(V+E)

        vis[src] = true;
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!vis[v])
            {
                topHelper(v, vis, s);
            }
        }
        s.push(src); // backtracking
    }

    void dfsToplogical()
    { // call disconnected components
        vector<bool> vis(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                topHelper(i, vis, s);
            }
        }
        while (s.size() > 0)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};
int main()
{
    Graph graph(6, false);
    graph.addedge(2, 3);
    graph.addedge(3, 1);
    graph.addedge(4, 0);
    graph.addedge(4, 1);
    graph.addedge(5, 0);
    graph.addedge(5, 2);
    graph.dfsToplogical();

    return 0;
}
// 5 4 2 3 1 0
