#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // priority_queue<int>pq;//descending
    // priority_queue<int , vector<int> , greater<int>>pq;//ascending
    priority_queue<string> pq;

    // pq.push(5);
    // pq.push(10);
    // pq.push(3);

    pq.push("HELLO");
    pq.push("BIEE");
    pq.push("HAPPY");

    while (!pq.empty())
    {
        cout << "top = " << pq.top() << endl;
        pq.pop(); // descending order me print hoga
        // top => always highest priority element(max)
    }
    return 0;
}
// MAX HEAP
//  top = 10
//  top = 5
//  top = 3

// MIN HEAP
//  top = 3
//  top = 5
//  top = 10

// top = HELLO
// top = HAPPY
// top = BIEE