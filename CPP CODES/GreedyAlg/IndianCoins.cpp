#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinChange(vector<int> coins, int V)
{
    int ans = 0;
    int n = coins.size();
    for (int i = n-1; i >= 0 && V > 0; i--)
    {
        if (V >= coins[i])
        {
            ans += V / coins[i];
            V = V % coins[i];
        }
    }
    cout << ans << endl;
    return ans;
}
int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    // int V = 590;
    int V = 1099; // 8
    getMinChange(coins, V);
    return 0;
}
// tc => 0(N) , N=> total no. of coins size
//4 => output
