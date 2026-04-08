#include <iostream>
#include <vector>
using namespace std;

int countWaysTab(int n)
{ // 0(N)
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

int main()
{
    int n = 4; // 7
    int n = 5; // 13

    cout << countWaysTab(n) << endl;
    return 0;
}