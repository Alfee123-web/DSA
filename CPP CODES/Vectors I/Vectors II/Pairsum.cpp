// TWO POINTER APPROACH
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int currsum = 0;
    vector<int> ans;

    while (start < end)
    {
        currsum = arr[start] + arr[end];
        if (currsum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currsum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
}
int main()
{
    vector<int>vec = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(vec , target);
    cout<<ans[0]<<" , "<<ans[1];
    return 0;
}
// leetcode = 167
