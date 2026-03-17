#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool validanagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    unordered_map<char, int> m;
    // char , freq

    for (int i = 0; i < s.size(); i++)
    {
        if (m.count(s[i]))
        {
            m[s[i]]++;
        }
        else
        {
            m[s[i]] = 1;
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (m.count(t[i]))
        {
            m[t[i]]--;
            if (m[t[i]] == 0)
            {
                m.erase(t[i]);
            }
        }
        else
        {
            return false;
        }
    }
    return m.size() == 0;
}
int main()
{
    string s = "race";
    string t = "care";
    // string s = "tulip";
    // string t = "lipid";
    cout << validanagram(s, t) << endl; // 1

    return 0;
}
// tc => 0(n)