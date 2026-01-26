#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T> // T can be int , char , string
class Stack
{
    // IMPLEMENTATION USING VECTOR WITH TEMPLATE CLASS

    vector<T> vec;

public:
    void push(string val)
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
    T top()
    { // 0(1)
        //  if(isEmpty()){
        //     cout<<"stack is empty";
        //     return -1;
        // }
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
    // Stack<int> s; //we have to define type as well in this
    // Stack<char> s;
    Stack<string> s;

    // s.push(3);
    // s.push(2);
    // s.push(1);

    s.push("alfee");
    s.push("akshat");
    s.push("anshika");

    // s.push('c');
    // s.push('b');
    // s.push('a'); //abc

    while (!s.isEmpty())
    {
        cout << s.top() << " "; // 1 2 3
        s.pop();
    }
    cout << endl;
    return 0;
}