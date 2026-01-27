#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isDuplicate(string ans) //0(N)
{
    stack<char> s;

    for (int i = 0; i < ans.size(); i++)
    {
        char ch = ans[i];
        if (ch != ')')
        { // non closing->opening
            s.push(ch);
        }
        else
        { // closing

            if (s.top() == '(')
            { // duplicate condition
                return true;
            }
            // matching condition
            while(s.top() != '('){
                //until we found an opening bracket at the top pf the stack
                s.pop();
            }
            s.pop();
          
        }
    }
    return false;
}
int main()
{
    string str1 = "((a+b))";         // valid -> 1
    string str2 = "((a+b) + (c+d))"; // invalid -> 0

    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2)<<endl;
    return 0;
}