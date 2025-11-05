#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    { // BASECASE : is smallest problem where solution is known
        return 1;
    }
    // 0! = 1
    // 1! = 1

    return n * factorial(n - 1);
}

void func(int n)
{
    if (n == 0)
    { // base case
        return;
    }

    //   cout<<n<<" ";
    //   func(n-1); descending order

    func(n - 1);
    cout << n << " "; // ascending order
}
// work = cout n ko
// assume = print n -1
// base case => n = 0 return kar denge
int main()
{
    int ans = factorial(4);
    cout << ans << endl;

    // func(5);
    return 0;
}

// Recursion = it is a method of solving computational problems where the solution depends on solutions
// to smaller instances of the same problem
// 1 Base case /smallest problem
// 2 in each function call ? kya work karwaana hai
// 3 how to call inner function
