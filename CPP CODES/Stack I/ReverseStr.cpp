#include <iostream>
#include <string>
#include <stack>
using namespace std;

string reverseString(string str)
{ // 0(n)
    string ans;
    stack<char> s;

    for (int i = 0; i <= str.size(); i++)
    {
        s.push(str[i]);
    }
    while (!s.empty())
    {
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
}
int main()
{
    string str = "abcd";
    cout << reverseString(str) << endl;
    return 0;
}
// space comp = 0(N)