#include <iostream>
using namespace std;

int clearIthBit(int num, int i)
{
    int bitMask = ~(i << 1);
    return num & bitMask;
}
int main()
{
    cout<< clearIthBit(6, 1) << endl; // 4
    return 0; 
}