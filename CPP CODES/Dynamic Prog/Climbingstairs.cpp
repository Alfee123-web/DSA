#include <iostream>
#include <vector>
using namespace std;
int countWaysRec(int n)
// O(2^ N)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return countWaysRec(n - 1) + countWaysRec(n - 2);
}
int countWaysMem(int n, vector<int> &dp)
{ // 0(N)
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = countWaysRec(n - 1) + countWaysRec(n - 2);
    return dp[n];
}
int countWaysTab(int n)
{ // 0(N)
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    //    cout<<countWaysRec(4)<<endl; 5
    //    cout<<countWaysRec(5)<<endl; 8
    //    cout<<countWaysRec(3)<<endl; 3

    int n = 5; // 8
    //    vector<int> dp(n+1 , -1);
    //    cout<<countWaysMem(n ,dp)<<endl;
    
    cout << countWaysTab(n) << endl;
    return 0;
}
