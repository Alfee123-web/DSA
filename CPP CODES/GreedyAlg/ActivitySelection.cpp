#include <iostream>
#include <vector>
using namespace std;

int maxActivities(vector<int> start, vector<int> end)
{
    //     sort on end time
    //     select A0
    cout << "selecting A0\n";
    int count = 1;
    int currEndtime = end[0];
    for (int i = 1; i <= start.size(); i++)
    {
        if (start[i] >= currEndtime)
        {
            // non-overlapping
            cout << "selecting A" << i << endl;
            count++;
            currEndtime = end[i];
        }
    }
    return count;
}
int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9}; // exp ans = 4
    cout << maxActivities(start, end);
    return 0;
}
