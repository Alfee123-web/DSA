#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int LcsRec(string str1, string str2)
{ // TC O(2^N+M)
    if (str1.size() == 0 || str2.size() == 0)
    {
        return 0;
    }
    int m = str2.size();
    int n = str1.size();

    if (str1[n - 1] == str2[m - 1])
    {
        return 1 + LcsRec(str1.substr(0, n - 1), str2.substr(0, m - 1));
    }
    else
    {
        int ans1 = LcsRec(str1.substr(0, n - 1), str2);
        int ans2 = LcsRec(str1, str2.substr(0, m - 1));
        return max(ans1, ans2);
    }
}
int LcsMem(string str1, string str2, vector<vector<int>> &dp)
{ // TC O(N+M)
    if (str1.size() == 0 || str2.size() == 0)
    {
        return 0;
    }
    int m = str2.size();
    int n = str1.size();

    if (dp[n][m] != -1)
    {
        return dp[n][m]; // if not calculated
    }
    if (str1[n - 1] == str2[m - 1])
    {
        dp[n][m] = 1 + LcsMem(str1.substr(0, n - 1), str2.substr(0, m - 1), dp);
    }
    else
    {
        int ans1 = LcsMem(str1.substr(0, n - 1), str2, dp);
        int ans2 = LcsMem(str1, str2.substr(0, m - 1), dp);
        dp[n][m] = max(ans1, ans2);
    }
    return dp[n][m];
}
int LcsTab(string str1, string str2)
{ // 0(N*M)
    int m = str2.size();
    int n = str1.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
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
    //    string str1 = "abcdge";
    //    string str2 = "abedg";

    //    cout<<LcsRec(str1 , str2) <<endl;//4
    // string str1 = "abcd";
    // string str2 = "aceb";

    string str1 = "abc";
    string str2 = "xyc";
    int m = str2.size();
    int n = str1.size();

    // vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1)); // 2
    // cout << LcsMem(str1, str2, dp) << endl;

    cout << LcsTab(str1, str2) << endl; // 1
    return 0;
}
