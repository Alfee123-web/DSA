#include <iostream>
#include <vector>
using namespace std;
// int fib(int n){//O(2^N)
//     if(n == 0 || n ==1 ){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }
// int fibDp(int n , vector<int> f){//O(N)
//     if(n == 0 || n ==1 ){
//         return n;
//     }
//     if(f[n] != -1){
//         return f[n];
//     }
// f[n] = fib(n-1) + fib(n-2);//store
//     return f[n];
// }
int fibTab(int n)
{

    vector<int> fib(n + 1, 0);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main()
{
    int n = 7;
    // vector<int> f(n+1 , -1);//size = n+1 , value = -1
    // cout<<fibDp(n ,f)<<endl;
    cout << fibTab(n) << endl;

    return 0;
}
// 8
// 13