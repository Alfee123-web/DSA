#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int connectNropes(vector<int> ropes)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
    int cost = 0;
    while (pq.size() > 1)
    {
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();
        cost += min1 + min2;
        pq.push(min1 + min2);
    }
    cout << "min cost = " << cost << endl;
    return cost;
}
int main()
{
    vector<int> ropes = {4, 3, 2, 6};
    connectNropes(ropes);

    return 0;
}
// min cost = 29
