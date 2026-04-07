#include <iostream>
#include <vector>
using namespace std;
class DisjointSet
{
public:
    int n;
    vector<int> par;
    vector<int> rank;
    DisjointSet(int n)
    {
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            par.push_back(i);
            rank.push_back(0);
        }
    }
    int find(int x)
    {
        if (par[x] == x)
        {
            return x;
        }
        return par[x] = find(par[x]);
        //PATH COMPRESSION => OPTIMIZATION
    }
    void unionByRank(int a, int b)//constant TC
       {
        int parA = find(a);
        int parB = find(b);

        if (rank[parA] == rank[parB])
        {
            par[parB] = parA;
            rank[parA]++;
        }
        else if (rank[parA] > rank[parB])
        {
            par[parB] = parA;
        }
        else
        {
            par[parA] = parB;
        }
    }
    void getInfo()
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << ":" << par[i] << " ," << rank[i] << endl;
        }
    }
};
int main()
{
    DisjointSet dj(6);
    dj.unionByRank(0, 2);
    cout << dj.find(2) << endl;
    dj.unionByRank(1, 3);
    dj.unionByRank(2, 5);
    dj.unionByRank(0, 3);
    cout << dj.find(2) << endl;
    dj.unionByRank(0, 4);
    dj.getInfo();
    return 0;
}

// 0
// 0
// 0:0 ,2
// 1:0 ,1
// 2:0 ,0
// 3:1 ,0
// 4:0 ,0
// 5:0 ,0
