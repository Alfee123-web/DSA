#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<pair<int, int>> *l; // int , int : neighbour + wt
    bool isUndir;

public:
    Graph(int V, bool isUndir = true)
    {
        this->V = V;
        l = new list<pair<int, int>>[V];
        this->isUndir = isUndir;
    }
    void addedge(int u, int v, int wt) // u--> weighted edge
    {
        l[u].push_back(make_pair(v, wt));
        if (isUndir)
        {
            l[v].push_back(make_pair(u, wt));
        }
    }
    void primsAlgo(int src)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        //(wt,v)-> min heap
        vector<bool> mst(V, false);
        pq.push(make_pair(0, src));//mst set 
        int ans = 0;

        while (pq.size() > 0)
        {
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if (!mst[u])
            {
                mst[u] = true;
                ans += wt;
            
                list<pair<int, int>> neighbours = l[u];
                // for (pair<int, int> n : neighbours)
                for (const auto& n : l[u])
                
                {
                    int v = n.first;
                    int currwt = n.second;
                    pq.push(make_pair(currwt, v));
                }
            }
        }
           cout << "final cost of mst " << ans << endl;
     
    }
};
int main()
{
    Graph graph(4);
    graph.addedge(0, 1, 10);
    graph.addedge(0, 2, 15);
    graph.addedge(0, 3, 30);
    graph.addedge(1, 3, 40);
    graph.addedge(2, 3, 50);
    graph.primsAlgo(0);
    return 0;
}
//final cost of mst 55