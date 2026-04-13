#include <iostream>
#include <vector>
#include <string>
using namespace std;
int mountainRan(int n)
{
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
    int pairs = 3;
    cout << mountainRan(pairs) << endl; // 5
}
