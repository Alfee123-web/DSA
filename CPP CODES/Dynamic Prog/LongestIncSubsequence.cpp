#include <iostream>
#include <unordered_set>
#include <algorithm>
// we want unique elements
#include <vector>
using namespace std;
int Lis(vector<int> arr)
{
    unordered_set<int> s(arr.begin(), arr.end());
    // initialize with values of original array = > unique values
    //0(N)

    vector<int> arr2(s.begin(), s.end());
    //ascending order sort => 0(n * logn)
    // add unique values to arr 2
    sort(arr2.begin(), arr2.end());
    // LCS => LIS
    int n = arr.size();
    int m = arr2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (arr[i - 1] == arr2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    vector<int> arr = {50, 3, 10, 7, 40, 80};

    cout << Lis(arr) << endl; // 4
    return 0;
}
// TC = 0(N*N)