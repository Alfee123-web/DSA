#include <iostream>
#include <vector>

using namespace std;

class Stack
{
    // IMPLEMENTATION USING VECTOR
    vector<int> vec;

public:
    void push(int val)
    { // 0(1)
        vec.push_back(val);
    }
    void pop()
    { // 0(1)
        if (isEmpty())
        {
            cout << "stack is empty";
            return;
        }
        vec.pop_back();
    }
    int top()
    { // 0(1)
        if (isEmpty())
        {
            cout << "stack is empty";
            return -1;
        }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " "; // 1 2 3
        s.pop();
    }
    return 0;
}
