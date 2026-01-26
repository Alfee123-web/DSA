#include <iostream>
#include <string>
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

void reverseStack(stack<int> &s)
{ // 0(n)

    // BASE CASE
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverseStack(s);
    pushAtbottom(s, temp);
}
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);

    reverseStack(s);
    printStack(s);
    return 0;
}
// TOTAL TIME = 0(2N)
// 1 2 3
// 3 2 1