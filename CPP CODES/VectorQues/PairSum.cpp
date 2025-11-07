#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> arr, int target)
{
    vector<int> ans;
    // two pointer approach
      int sum = 0;
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
      int sum = arr[start ] + arr[end];
        if (sum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (sum > target)
        { // left
            end--;
        }
        else
        { // right
            start++;
        }
    }
}
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = PairSum(vec, target);
    cout << ans[0] << ", " << ans[1];

    return 0;
}
