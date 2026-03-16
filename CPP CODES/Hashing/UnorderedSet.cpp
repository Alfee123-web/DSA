#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    cout << s.size() << endl;
    s.erase(3);
    if (s.find(3) != s.end())
    {
        cout << "3 exists" << endl;
    }
    else
    {
        cout << "do not exists" << endl;
    }
    for (auto el : s)
    {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
// 4
//  do not exists

// 5 4 2 1
