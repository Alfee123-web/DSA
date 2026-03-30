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
    bool undirectedCyclehelper(int src, int par, vector<bool> &vis)
    {
        //dfs = 0(V+ E)
vis[src] =  true;
list<int>neighbours = l[src];

for (int v : neighbours)
{
    if(!vis[v]){
        if(undirectedCyclehelper(v , src , vis)){
            return true;
            //src = neighbour , par = src 
        }else{
            if(v!= par){
                //cycle condition
                return true;
                //back edge exist
            }
        }
        
}
return false;
    }

}
    bool isCycle()
    {
        vector<bool> vis(V, false);
        return undirectedCyclehelper(0 , -1,vis);
            }
        
};
int main()
{
    int V = 5;
    Graph graph(V);

    // undirected graph
    graph.addedge(0, 1);
    graph.addedge(0, 2);
    graph.addedge(0, 3);

    graph.addedge(1, 2);
    graph.addedge(3,4);
    cout<<graph.isCycle()<<endl;//1
}

