#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
class SegmentTree
{
    vector<int> tree;
    int n;
    void buildTree(vector<int> &nums, int s, int e, int node)
    {
        // O(N)
        if (s == e)
        {
            tree[node] = nums[s];
            return;
        }
        int mid = s + (e - s) / 2;
        buildTree(nums, s, mid, 2 * node + 1);
        buildTree(nums, mid + 1, e, 2 * node + 2);

        tree[node] = max(tree[node * 2 + 1], tree[node * 2 + 2]);
    }
    int maxQuery(int qi, int qj, int si, int sj, int node)
    {
        // O(logn)
        if (qi > sj || qj < si)
        {
            // no overlap
            return INT_MIN;
        }
        if (si >= qi && sj <= qj)
        {
            // complete overlap
            return tree[node];
        }
        // partial
        int mid = si + (sj - si) / 2;
        int leftMax = maxQuery(qi, qj, si, mid, 2 * node + 1);
        int rightMax = maxQuery(qi, qj, mid + 1, sj, 2 * node + 2);
        return max(leftMax, rightMax);
    }
    void updateUtil(int idx, int newVal, int start, int end, int node)
    {
        // O(logn)
        if (start == end)
        {
            tree[node] = newVal;
            return;
        }
        int mid = start + (end - start) / 2;
        if (idx >= start && idx <= mid)
        {
            updateUtil(idx, newVal, start, mid, 2 * node + 1);
        }
        else
        {
            updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
        }
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

public:
    SegmentTree(vector<int> &nums)
    {
        n = nums.size();
        tree.resize(4 * n);
        buildTree(nums, 0, n - 1, 0);
    }
    void printTree()
    {
        for (int el : tree)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    int rangeQuery(int qi, int qj)
    {
        return maxQuery(qi, qj, 0, n - 1, 0);
    }
    void updateQuery(int idx, int newVal)
    {
        updateUtil(idx, newVal, 0, n - 1, 0);
    }
};
int main()
{
    vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};
    SegmentTree st(nums);
    st.printTree();

    cout << st.rangeQuery(2, 5) << endl; // 17
    cout << st.rangeQuery(5, 8) << endl; // 4

    st.updateQuery(4, 3);
    cout << st.rangeQuery(0, 8) << endl; // 8
    return 0;
}
// 17 17 4 8 17 3 4 8 -1 2 17 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0