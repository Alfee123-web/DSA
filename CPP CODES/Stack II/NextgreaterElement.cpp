#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

void nextGreater(vector<int> arr, vector<int> ans)
{ // 0(N)
    stack<int> s;
    int idx = arr.size() - 1; // last index
    ans[idx] = -1;
    s.push(arr[idx]);

    for (int idx = idx - 1; idx >= 0; idx--)//backward loop
    {
        int curr = arr[idx];
        while (!s.empty() & s.top() <= curr)
        { //
            s.pop();
        }
        if (s.empty())
        {
            ans[idx] = -1;
        }
        else
        {
            ans[idx] = s.top();
        }

        s.push(curr);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreater(arr, ans);

    return 0;
}
//8,-1,1,3,-1