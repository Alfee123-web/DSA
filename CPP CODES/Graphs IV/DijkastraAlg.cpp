#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <list>
#include <climits>
using namespace std;
class Edge
{
public:
    int v; // destination
    int wt;
    Edge(int v, int wt)
    {
        this->v = v;
        this->wt = wt;
    }
    // EDGE RELAXATION
};
void dijkstra(int src, vector<vector<Edge>> &graph, int V)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // min heap pair(dis[v] , v)

    vector<int> dist(V, INT_MAX);
    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second; // u = vertex
        pq.pop();

        vector<Edge> edges = graph[u];
        for (Edge e : edges)
        {
            // e.v , e.wt
            if (dist[e.v] > dist[u] + e.wt)
            {
                dist[e.v] = dist[u] + e.wt;
                pq.push(make_pair(dist[e.v], e.v));
            }
        }
    }
    for (int d : dist)
    {
        cout << d << " ";
    }
    cout << endl;
}

int main()
{
    int V = 6;
    vector<vector<Edge>> graph(V); // size V

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));
    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));
    graph[2].push_back(Edge(4, 3));
    graph[3].push_back(Edge(5, 1));
    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));

    dijkstra(0, graph, V);
    // 0 2 3 8 6 9

    dijkstra(1, graph, V);
    //2147483647 0 1 6 4 7 
    return 0;
}

// TC => O(V + E) * LOG(N)
//LOG(N) => PRIORITY QUEUE
