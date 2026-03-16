#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // key , value
    unordered_map<string, int> m;

    // internally = insert(overloading)
    m["china"] = 150;
    m["india"] = 150;
    m["us"] = 50;
    m["nepal"] = 10;
    cout << m["india"] << endl;
    for (pair<string, int> country : m)
    {
        cout << country.first << " , " << country.second << endl;
    }
    m.erase("nepal");
    if (m.count("nepal"))
    {
        cout << "nepal exists\n";
    }
    else
    {
        cout << "do not exist\n";
    }

    // m.erase("nepal");
    return 0;
}
// 150
// nepal , 10
// us , 50
// india , 150
// china , 150
// do not exist
