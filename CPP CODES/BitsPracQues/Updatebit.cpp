#include <iostream>
using namespace std;

void changeIthBit(int num, int i, int val)
{
    num = num & ~(1 << i);
    // clear ith bit
    num = num | (val << i);

    cout << num << endl;
}
int main()
{
    changeIthBit(7, 2, 0);
    //    cout<<updateIthBit(7,3,1)<<endl;

    return 0;
}


