
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << sizeof(int) << endl;
//     cout << sizeof(short int) << endl;
//     cout << sizeof(long long int) << endl;
//     cout << sizeof(long int) << endl;
//     cout << sizeof(long double) << endl;
//     return 0;
// }
// 1  byte = 8 bits

// Data Type Modifiers
//  int = 2^31 to 2^31 - 1
//  long >= 4 bytes(int , double)
//  short = 2 bytes
//  signed = same as int(positive as well as negative)
//  unsigned = store non-negative no. only(+ve)
//  long long = same as long int

// Binary to Decimal

// #include <iostream>
// using namespace std;

// void bintoDec(int num)
// {
//     int n = num;
//     int decNum = 0;
//     int pow = 1; // 2^0 2^1....
//     while (n >0)
//     {
//         int lastdigit = n % 10;
//         decNum += lastdigit * pow;
//         pow = pow * 2;
//         n /= 10;
//     }
//     cout << decNum << endl;
// }
// int main()
// {
//     bintoDec(1011);
//     return 0;
// }

// Decimal to Binary
#include <iostream>
using namespace std;
void dectoBin(int decNum)
{
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 10^0 10^1 ...

    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    cout << binNum << endl;
}
int main()
{
    dectoBin(4);
    return 0;
}