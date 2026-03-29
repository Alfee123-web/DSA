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
    void dfsHelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;
        list<int> neighbours = l[u];
        for (int v : neighbours)
        {

            if (!vis[v])
            {
                dfsHelper(v, vis);
            }
        }
    };

    void dfs()
    {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfsHelper(i, vis);
                // starting point = i
                cout<<endl;
            }
        }
        cout << endl;
    }

    void bfshelper(int st , vector<bool> &vis)
    { //(0(V + E))
        queue<int> q;
      
        q.push(st);
        vis[st] = true;

        while (q.size() > 0)
        {
            int u = q.front(); // curr vertex
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for (int v : neighbours)
            //to ensure that one node is added only once to queue
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
    void bfs(){
        vector<bool> vis(V , false);
        for (int i = 0; i < V; i++)
        {
            if(!vis[i]){
                bfshelper(i , vis);
                cout<<endl;
            }
        }
        
    }
};
int main()
{
    Graph graph(10);//10 = nodes
    graph.addedge(1, 6);
    graph.addedge(6, 4);
    graph.addedge(4, 3);
    graph.addedge(4, 9);
    graph.addedge(3, 8);
    graph.addedge(3, 7);
    graph.addedge(2, 5);
    graph.addedge(2, 0);
graph.dfs();
graph.bfs();
    return 0;
}
// 0 2 5 
// 1 6 4 3 8 7 9

// 0 2 5
// 1 6 4 3 9 8 7
