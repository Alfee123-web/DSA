#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> m; // store key-value pairs
    m[101] = "rahul";
    m[102] = "neha";
    m[103] = "alfee";

    m[101] = "rajat";
    //    update

    cout << m[101] << endl;

    cout << m[102] << endl;

    cout << m[103] << endl;

    cout << m.count(101) << endl; // 1
    cout << m.count(120) << endl; // 0

    for (auto it : m)
    {
        cout << "key = " << it.first << " , " << "value = " << it.second << endl;
        cout << "double = " << it.first * 2 << endl;
    }

    return 0;
}