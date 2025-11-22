#include <iostream>
#include <string>
#include <vector>
using namespace std;

void permutations(string str, string ans)
{

    int n = str.size();
    if (n == 0)
    {
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        // "abcdefgh" , i = 2 = > "ab" + "defg" => str.substr(0 , i) + str.substr(i+1,n-i-1)
        // i = 2 charcater c remove

        // we will take i se ek pehle string and i se ek baad
        string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);

        permutations(nextStr, ans + ch); // ith char choice to add in permutation
    }
}
int main()
{
    string str = "abc";
    string ans = "";
    permutations(str, ans);
    return 0;
}

// TC = 0(n!)
// SC = 0(n)

// OUTPUT

// abc
// acb
// bac
// bca
// cab
// cba