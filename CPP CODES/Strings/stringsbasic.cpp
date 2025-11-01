#include <iostream>
#include <string>
using namespace std;

int main()
{
    //    string str = "hello";
    //    cout<<str<<endl;
    //    str = "yellow";
    //    cout<<str<<endl;

    // INPUT IN STRING
    //    string str;
    //    getline(cin,str,'$'); //$ = limitor
    //    cout<<str<<endl;
    //     return 0;

    // FOR EACH LOOP
    //  for (char ch : str)
    string str = "apna college";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout<<str[i]<<" ";
    // }
    // cout<<"\n";

    for (char ch : str)
    {
        cout << ch << " , ";
    }
    cout << endl;
    return 0;
}

// KEY POINTS

// Class = entity which has blueprint of an object
//  string str = "hello";
//  string  = class
//  str = object
//  similar to int x = 5;

// c++  strings are dynamic (their size can be changed)