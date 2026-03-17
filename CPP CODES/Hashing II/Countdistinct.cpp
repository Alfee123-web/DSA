#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int countD(vector<int> arr)
{
    unordered_set<int> s;

    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    for (int el : s)
    {
        cout << el << " ";
    }
    cout << endl;
    return s.size();
}

int main()
{
    vector<int> arr = {4, 3, 2, 5, 6, 7, 3, 4, 2, 1};
    cout << countD(arr) << endl; // 7
    return 0;
}
// 1 7 6 4 3 2 5 