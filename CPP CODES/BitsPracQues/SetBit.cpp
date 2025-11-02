#include <iostream>
using namespace std;

int setIthBit(int num, int i)
{
    int bitMask = 1 << i;

    return (num | bitMask);
}
int main()
{
    cout<< setIthBit(6, 3) << endl;//14
    return 0;
}

// LOGIC = OR  operation
//  0 | 1 = 1
//  1 | 1 = 1
// 0 => make it 1
// 1 => same as 1
