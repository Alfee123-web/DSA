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

    void pathHelper(int src, int dest, vector<bool> vis, string &path)//0(V+E)
    {
        if (src == dest)
        {
            cout << path << dest<<endl;
            return;
        }
        vis[src] = true;
        // path.push_back(src);//5
        path += to_string(src);
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!vis[v])
            {
                pathHelper(v, dest, vis, path);
            }
        }
        path = path.substr(0, path.size() - 1);
        vis[src] = false;
        //to create multiple branches /levels in recursion
    }
    void printAllpaths(int src, int dest)
    {
        vector<bool> vis(V, false);
        string path = "";
        pathHelper(src, dest, vis, path);
    }
};
int main()
{

    Graph graph(6, false);

    graph.addedge(0, 3);
    graph.addedge(2, 3);
    graph.addedge(3, 1);
    graph.addedge(4, 0);
    graph.addedge(4, 1);
    graph.addedge(5, 0);
    graph.addedge(5, 2);

    graph.printAllpaths(5, 1);
}
// 5031
// 5231