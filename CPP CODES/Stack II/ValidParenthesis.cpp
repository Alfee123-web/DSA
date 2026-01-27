#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isValid(string str) //0(N)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        { // opening
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }

            // matching condition
            int top = s.top();
            if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    // if(s.empty()){
    //     return true;
    // }else{
    //     return false;
    // }

    // or
    return s.empty();
}
int main()
{
    string str1 = "([}])";  // invalid -> 0
    string str2 = "([{}])"; // valid  -> 1

    cout << isValid(str1) << endl;
    cout << isValid(str2) << endl;
    return 0;
}