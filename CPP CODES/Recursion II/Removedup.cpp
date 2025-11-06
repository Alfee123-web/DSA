#include <iostream>
using namespace std;
void remDup(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout << ans << endl;
        return;
    }
    int mapIdx = int(str[i] - 'a'); //typecaste
    if (map[mapIdx])  // true 
    { // duplicate
        remDup(str, ans, i + 1, map);
    }
    else
    { // not duplicate
        map[mapIdx] = true;
        remDup(str, ans + str[i], i + 1, map);
    }
}
int main()
{
    string str = "apnnacollege"; //apncoleg
    string ans = "";
    int map[26] = {false};
    remDup(str, ans, 0, map);
    return 0;
}
