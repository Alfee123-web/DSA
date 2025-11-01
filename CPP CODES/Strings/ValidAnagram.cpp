#include <iostream>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "not valid anagram\n";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if (count[idx] == 0)
        {
            cout << "not valid anagram\n";
            return false;
        }
        count[idx]--;
    }
    cout << "valid anagrams\n";
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    isAnagram(str1, str2);
    return 0;
}
// LEETCODE Q 242
// TIME COMPLEXITY = 0(N)
