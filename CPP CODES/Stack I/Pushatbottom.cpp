#include <iostream>
#include <stack>
using namespace std;

void pushAtbottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val); // push at top = push at bottom
        return;
    }
    int temp = s.top(); // O(n)
    s.pop();
    pushAtbottom(s, val);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    pushAtbottom(s, 4);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
// 1 2 3 4
