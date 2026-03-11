#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;


struct ComparePair
{
    // memory allocation =-> inside stack
    bool operator()(pair<string, int> p1, pair<string, int> p2)
    {
        return p1.second < p2.second;
    }
};
int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;
    // default heap => max heap on the basis of first propertry

    pq.push(make_pair("aman", 100));
    pq.push(make_pair("akshat", 200));
    pq.push(make_pair("alfee", 300));

    while (!pq.empty())
    {
        cout << "top = " << pq.top().first << " ," << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}
