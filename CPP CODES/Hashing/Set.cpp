#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    cout << s.size() << endl;
    // s.erase(3);
    //    if(s.find(3) != s.end()){
    //       cout<<"3 exists"<<endl;
    //    }else{
    //     cout<<"do not exists"<<endl;
    //    }
    for (auto el : s)
    {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
// 1 2 3 5 => ordered