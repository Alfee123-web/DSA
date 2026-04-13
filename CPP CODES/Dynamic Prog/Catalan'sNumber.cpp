#include <iostream>
#include <vector>
#include <string>
using namespace std;
int CatalanRec(int n)
{ //=>  0(2^n)
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += CatalanRec(i) * CatalanRec(n - i - 1);
    }
    return ans;
}
int CatalanMem(int n, vector<int> &dp)
{ // highly optimised
    // 0(n * n)

    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += CatalanMem(i, dp) * CatalanMem(n - i - 1, dp);
    }
    dp[n] = ans;
}
int CatalanTab(int n)
{ // highly optimised
    // 0(n * n)
    vector<int> dp(n + 1, 0);

    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) // ith catalan
    {
        for (int j = 0; j < i; j++) // 0 to i-1
        {
            // n replace i , i replace j
            //  dp[i] = Cj * Ci - j -1;
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    return dp[n];
}
int main()
{
    int n = 6;
    // vector<int> dp(n + 1, -1);
    //    int n =4;
    for (int i = 0; i <= n; i++)
    {
        // cout<<CatalanRec(i) << " ";
        // cout<<CatalanMem(i , dp)<< " ";
        cout << CatalanTab(i) << " ";
    }

    cout << endl;
    return 0;
}
// 1 1 2 5 14 42 132
