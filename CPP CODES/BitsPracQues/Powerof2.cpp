#include <iostream>
using namespace std;

bool isPowerof2(int num)
{
    if (!(num & (num - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << isPowerof2(8) << endl;
    cout << isPowerof2(16) << endl;
    cout << isPowerof2(5) << endl;
    return 0;
}