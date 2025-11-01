#include <iostream>
using namespace std;

class Example
{
public:
    Example()
    {
        cout << "constructor..\n";
    }
    ~Example()
    {
        cout << "Destructor..\n";
    }
};
int main()
{
    int a = 0;
    if (a == 0)
    {
        static Example eg1;
    }

    cout << "code ending ..\n";
    return 0;
}
// OUTPUT WITHOUT STATIC
//  constructor..
//  Destructor..
//  code ending ..

// OUTPUT WITH STATIC
//  constructor..
//  code ending ..
//  Destructor..