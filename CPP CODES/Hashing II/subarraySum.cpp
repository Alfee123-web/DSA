#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int subArraycount(vector<int> arr, int K)
{
    //sum{i,j} = sum[j] - sum[i]
    unordered_map<int, int> m; // sum , count
    m[0] = 1;
    int sum = 0;
    int ans = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        sum += arr[j];
        if (m.count(sum - K))
        {
            ans += m[sum - K];
        }
        if (m.count(sum))
        {
            m[sum]++;
        }
        else
        {
            m[sum] = 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> arr = {10, 2, -2, -20, 10};//3
    vector<int> arr = {1,2,3};//2
    // int K = -10;
    int K = 3;
    cout<<subArraycount(arr, K)<<endl;
    return 0;
}
