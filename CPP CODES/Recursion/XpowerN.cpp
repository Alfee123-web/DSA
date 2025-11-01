#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int halfpower = power(x, n / 2);
    int halfpowerSquare = halfpower * halfpower;
    if (n % 2 != 0)
    { // n = odd
        return x * halfpowerSquare;
    }
    return halfpowerSquare; // even
}
int main()
{
cout<<power(2, 5)<<endl;
cout<<power(3, 3)<<endl;
    return 0;
}

// TIME COMPLEXITY = O(logN) similary in bin search problem is divided into half

// n odd = 2^5 = 2 * 2^n/2 * 2^n/2
// n even = 2^4 = 2^2 * 2^2
// 10 => 5 => 2 => 1 => 0 (half half hota jayega powers )
// n => n/2 => n=> 4 ....