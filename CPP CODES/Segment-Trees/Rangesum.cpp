#include <iostream>
#include <vector>
using namespace std;
class SegmentTree
{
    vector<int> tree; // 4*n
    int n;

public:
    SegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);

        buildTree(arr , 0 , n-1,0);
    }

    void buildTree(vector<int> &arr, int s, int e, int node)
    {
        if (s == e)
        {
            tree[node] = arr[s];
            return;
        }
        int mid = s + (e - s) / 2;

        buildTree(arr, s, mid, 2 * node + 1);     // left
        buildTree(arr, mid + 1, e, 2 * node + 2); // right

        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
    void printTree()
    {
        for (int i = 0; i < tree.size(); i++)
        {
            cout << tree[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    SegmentTree st(arr);
    st.printTree();
    return 0;
}
// tc => 0(N)
// 36 10 26 3 7 11 15 1 2 3 4 5 6 7 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 