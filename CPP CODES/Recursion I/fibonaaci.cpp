#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int ans = fibonacci(0); // 0
    int ans = fibonacci(1); // 1
    int ans = fibonacci(2); // 1
    int ans = fibonacci(3); // 2
    int ans = fibonacci(4); // 3
    int ans = fibonacci(5); // 5
    int ans = fibonacci(6); // 8
    int ans = fibonacci(7); // 13
    cout << ans << endl;
    return 0;
}

// BASE CASE = fib(0) => 0 , fib(1) => 1
// we have to find out fib(n-1) , fib(n-2)
// then we have to add them
//whenever a function is called after that it will automatically removed from stack memory
