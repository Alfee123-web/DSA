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
    // use queue => FIFO
    // queue => push node whose indeg = 0
    // repeatedly pop and us node ke neighbour ko indeg --;
    void indegree(vector<int> &indeg)
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                indeg[v]++;
                // indeg = tell us about independent dependencies
            }
        }
    }

    void toplogicalSort2()
    {
        vector<int> indeg(V, 0);
        indegree(indeg);
        queue<int> q;
        //starting point always exist indeg = 0]
               for (int i = 0; i < V; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }
        while (q.size() > 0)
        {
            int curr = q.front();
            q.pop();
            cout << curr << " ";

            list<int> neighnbours = l[curr];
            for (int v : neighnbours)
            {
                indeg[v]--;
                if (indeg[v] == 0)
                { // no pending dependencies
                    q.push(v);
                }
            }
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
    graph.toplogicalSort2();
    return 0;
}
// 4 5 0 2 3 1 
