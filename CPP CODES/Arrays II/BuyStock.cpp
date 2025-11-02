#include <iostream>
using namespace std;
void maxProfit(int *prices, int n)
{
    int bestBuy[100000]; // max array size = 10^5
    bestBuy[0] = INT16_MAX;//(minimum/ +infinity)
  
    for (int i = 1; i < n - 1; i++)//0(N)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        cout << bestBuy[i] << " , ";
    }

    int maxProfit = 0;
    for(int i = 0;i<n;i++){//0(N)
        int currProfit = prices[i] - bestBuy[i]; //sell - buy 
        maxProfit = max(maxProfit , currProfit);
    }
    cout <<"Max Profit: " <<maxProfit << endl;
}
int main()
{
    int prices[6] = {7, 1, 5, 6, 3, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);
    return 0;
}



//TIME COMPLEXITY = 0(N)

//assume every day = sell day
//ith day = sell day
// best buy = example i = 2 to usse pehle ki jitni value hai
//prices[i - 1] = isse ek index pehle wala price nikal lenge
// uska min nikal lenge then compare to prices wala array then bestbuy me
// dono ka min aa jayega
