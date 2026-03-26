#include <iostream>
#include <list>
#include <vector>
using namespace std;

// using adjancency list
//  list<int>[V]
class Graph // undirected
{
    int V;
    list<pair<int, int>> *l;
    // neighbour , wt

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<pair<int, int>>[V];

        // int * arr
        //  arr = new int[V];
    }
    void addedge(int u, int v, int wt) // u --> v
    {
        l[u].push_back({v, wt}); // u ke neighbours me add v, wt
        l[v].push_back({u, wt}); // v ke neighbours me add u, wt
    }
    void print()
    {
        for (int u = 0; u < V; u++) // 0,1,2,3....
        {

            cout << u << " : ";
            for (auto edge : l[u])
            {
                int v = edge.first;
                int weight = edge.second;
                cout <<"["<< v << "," << weight <<"]"<< endl;
            }
        }
    }
};

// we use arr<list<<int>> => dynamic array
// list size = V[vertex]
int main()
{
    Graph graph(5);
    graph.addedge(0, 1, 5);
    graph.addedge(1, 2, 1);
    graph.addedge(1, 3, 3);
    graph.addedge(2, 3, 1);
    graph.addedge(2, 4, 2);

    graph.print();
    return 0;
}
// 0 : [1,5]

// 1 : [0,5]
// [2,1]
// [3,3]

// 2 : [1,1]
// [3,1]
// [4,2]

// 3 : [1,3]
// [2,1]

// 4 : [2,2]
