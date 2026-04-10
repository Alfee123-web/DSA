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
        return knapsackRec(val, wt, W, n - 1); // exclude
    }
}

int knapsackMem(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (dp[n][W] != -1)
    {
        // check if exist
        return dp[n][W];
    }
    int itemWt = wt[n - 1]; // index
    int itemVal = val[n - 1];
    if (itemWt <= W)
    {                                                                     // valid wt
        int ans1 = knapsackMem(val, wt, W - itemWt, n - 1, dp) + itemVal; // include
        int ans2 = knapsackMem(val, wt, W, n - 1, dp);                    // exclude

        dp[n][W] = max(ans1, ans2);
    }
    else
    {
        dp[n][W] = knapsackMem(val, wt, W, n - 1, dp); // exclude
    }
    return dp[n][W];
}

int knapsackTab(vector<int> val, vector<int> wt, int W, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            int itemWt = wt[i - 1];
            int itemVal = val[i - 1];

            if (itemWt <= j)
            {
                dp[i][j] = max(itemVal + dp[i - 1][j - itemWt], dp[i - 1][j]);
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][W];
}

int main()
{
    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};
    int W = 7;
    int n = 5;
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    // cout << knapsackRec(val, wt, W, n) << endl;     // 75
    cout << knapsackMem(val, wt, W, n, dp) << endl; // 75

    cout << "Mem matrix: \n";
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << knapsackTab(val, wt, W, n) << endl;

    return 0;
}
// TC = o(2^N) => REC
// TC = 0(n * W) => Mem
// TC = 0(n * W) => Tab

// 75
// Mem matrix:
// -1 -1 -1 -1 -1 -1 -1 -1
// -1 0 15 15 15 -1 15 15
// -1 -1 15 15 15 -1 15 29
// -1 -1 -1 25 25 -1 -1 29
// -1 -1 -1 45 -1 -1 -1 70
// -1 -1 -1 -1 -1 -1 -1 75

// TABULATION
//  0 0 0 0 0 0 0 0
//  0 0 15 15 15 15 15 15
//  0 0 15 15 15 15 15 29
//  0 10 15 25 25 25 25 29
//  0 10 15 45 55 60 70 70
//  0 10 15 45 55 60 70 75
//  75
