#include <iostream>
#include <vector>
using namespace std;
int knapsackRec(vector<int> val, vector<int> wt, int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    int itemWt = wt[n - 1]; // index
    int itemVal = val[n - 1];

    if (itemWt <= W)
    {                                                                 // valid wt
        int ans1 = knapsackRec(val, wt, W - itemWt, n - 1) + itemVal; // include
        int ans2 = knapsackRec(val, wt, W, n - 1);                    // exclude

        return max(ans1, ans2);
    }
    else
    {
       return  knapsackRec(val, wt, W, n - 1); // exclude
    }
}

int main()
{
    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};
    int W = 7;
    int n = 5;
    cout<<knapsackRec(val, wt, W, n)<<endl;//75
    return 0;
}
// TC = o(2^N)