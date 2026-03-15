#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
void slidingWindowMax(vector<int> arr, int K)
{
    priority_queue<pair<int, int>> pq;

    // pq.top()=>sliding window part ? =>  el val , el idx
    // pairs ( arr[i] , i ) => by default val(arr[i]) basis par heap build hojayega and
    // comparison will be on the basis of idx i
    //  store both values val , idx

    // 1st window
    for (int i = 0; i < K; i++)
    {
        pq.push(make_pair(arr[i], i));
    }
    cout << "output : " << pq.top().first << " ";

    for (int i = K; i < arr.size(); i++)
    {
        while (!pq.empty() && pq.top().second <= i - K)
        {
            // outside window
            pq.pop();
        }
        pq.push(make_pair(arr[i], i));
        cout << pq.top().first << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int K = 3;
    slidingWindowMax(arr, K);

    return 0;
}
// output : 3 3 5 5 6 7