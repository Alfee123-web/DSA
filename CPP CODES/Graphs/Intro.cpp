#include <iostream>
#include <list>
#include <vector>
using namespace std;

// using adjancency list
//  list<int>[V]
class Graph//undirected
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
    void addedge(int u, int v)//u --> v
    {
        l[u].push_back(v); // u ke neighbours me add v
        l[v].push_back(u); // v ke neighbours me add u
    }
    void print()
    {
        for (int u = 0; u < V; u++)//0,1,2,3....
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
};

// we use arr<list<<int>> => dynamic array
// list size = V[vertex]
int main()
{
    Graph graph(5);
    graph.addedge(0, 1);
    graph.addedge(1, 2);
    graph.addedge(1, 3);
    graph.addedge(2, 3);
    graph.addedge(2, 4);

    graph.print();
    return 0;
}
// 0 : 1 
// 1 : 0 2 3
// 2 : 1 3 4
// 3 : 1 2
// 4 : 2