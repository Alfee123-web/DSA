#include <iostream>
using namespace std;
void clearIthBits(int num, int i)
{
    int bitMask = (~0) << i;
    num = num & bitMask;

    cout << num << endl;
}
int main()
{
    clearIthBits(15, 2);
    return 0;
}
