#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int larSubarray(vector<int> arr)
{
    unordered_map<int, int> m;
    //< sum, idx>
    int sum = 0;
    int ans = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        sum += arr[j];

        if (m.count(sum))
        {
            int currL = j - m[sum]; // j - idx
            ans = max(ans, currL);
        }
        else
        {
            m[sum] = j;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
    cout << larSubarray(arr) << endl;
    return 0;
}
// 0(n) //ans = 5