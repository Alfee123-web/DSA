#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findSubsets(string str, string subset)
{
    int n = str.size();
    if (n == 0)
    {
        cout << subset << "\n";
        return;
    }
    char ch = str[0];
    // yes choice
    findSubsets(str.substr(1, n - 1), subset + ch);
    // no choice
    findSubsets(str.substr(1, n - 1), subset);
}
int main()
{
    string str = "abc";
    string subset = "";
    findSubsets(str, subset);
    return 0;
}

// TC = 0(2^n)

// OUTPUT
//  abc
//  ab
//  ac
//  a
//  bc
//  b
//  c