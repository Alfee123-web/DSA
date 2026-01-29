#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    stack<int> rev;

    while (!q.empty())
    {
        rev.push(q.front());
        q.pop();
    }

    while (!rev.empty())
    {
        q.push(rev.top());
        rev.pop();
    }
}

int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    reverse(q);
    for (int i = 1; i <= 5; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
//5 4 3 2 1