// Binary to Decimal

#include <iostream>
using namespace std;

void bintoDec(int num)
{
    int n = num;
    int decNum = 0;
    int pow = 1; // 2^0 2^1....
    while (n >0)
    {
        int lastdigit = n % 10;
        decNum += lastdigit * pow;
        pow = pow * 2;
        n /= 10;
    }
    cout << decNum << endl;
}
int main()
{
    bintoDec(1011);
    return 0;
}
