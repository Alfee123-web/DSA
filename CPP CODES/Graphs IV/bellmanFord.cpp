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
void bellmanFord(vector<vector<Edge>> &graph , int V , int src){//O(v.e)
    vector<int>dist(V , INT_MAX);
    dist[src] = 0;

    for(int i = 0; i< V-1;i++){ // V
        for(int u = 0 ;u < V ; u++){ //E
            for(Edge e : graph[u]){
                if(dist[u] != INT_MAX && dist[e.v] > dist[u] + e.wt){
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }
    for(int i = 0; i < V ; i++){
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int V = 5;
    vector<vector<Edge>> graph(V); // size V

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));
    graph[1].push_back(Edge(2, -4));
    graph[2].push_back(Edge(3, 2));
    graph[3].push_back(Edge(4, 4));
    graph[4].push_back(Edge(1,-1));
//  bellmanFord(graph , V, 0);
 bellmanFord(graph , V, 4);

    return 0;
}
// 0 2 -2 0 4
// 2147483647 -1 -5 -3 0 