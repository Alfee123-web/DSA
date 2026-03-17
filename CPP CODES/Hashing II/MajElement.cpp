#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void majElement(vector<int> nums2)
{
    int n = nums2.size();
    int freq = 0;
    unordered_map<int, int> m;
    // element , frequency
    for (int i = 0; i < n; i++)
    {
        if (m.count(nums2[i]))
        {
            m[nums2[i]]++;
        }
        else
        {
            m[nums2[i]] = 1;
        }
    }

    for (pair<int, int> p : m)
    {
        if (p.second > n / 3)
        {
            cout << p.first << " ";
        }
    }
    cout << endl;
}
int main()
{
    vector<int> nums1 = {1, 3, 2, 5, 1, 3, 1, 5, 1};
    vector<int> nums2 = {1, 2};
    // majElement(nums1);//1 
      majElement(nums2);//2 1


    return 0;
}
// map  = search0(1) => average const time
// do not occupy as such extra memory space
