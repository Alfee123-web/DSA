#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<double, int> p1, pair<double, int> p2)
{
    return p1.first > p2.first;
     //descending order 
    // based on their ratio value
}
int fractionalKnapsack(vector<int> val, vector<int> wt, int W)
{
    int n = val.size();
    vector<pair<double, int>> ratio(n, make_pair(0, 0));
    // pair (ratio , idx) -> (double , int)

    for (int i = 0; i < n; i++) // 0(n)
    {
        double r = val[i] / (double)wt[i];
        ratio[i] = make_pair(r, i);
    }
    sort(ratio.begin(), ratio.end(), compare); // 0(log(n))
    //descending order 

    int ans = 0;
    for (int i = 0; i < n; i++) // 0(n)
    {
        int idx = ratio[i].second; // wt , val ka index
        if (wt[idx] <= W)
        {
            ans += val[idx];
            W -= wt[idx];
        }
        else
        {
            ans += ratio[i].first * W;
            // ratio[i].first => actual ratio value
            W = 0;
            break;
        }
    }
    cout << ans << endl;
    return ans;
}
int main()
{
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    // weight capacity
    fractionalKnapsack(val, wt, W);
    return 0;
}
// TC => N(log(N))
// ans => 240