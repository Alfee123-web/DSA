#include <iostream>
using namespace std;
int fp(int n){
    if(n == 1  || n ==2){
        return n;
    }
    return fp(n-1) + (n-1) * fp(n-2); // single + pair
}
int main() {
    cout<<fp(3)<<endl;
   cout<<fp(5)<<endl;
   cout<<fp(1)<<endl;
   cout<<fp(2)<<endl;
   cout<<fp(4)<<endl;
    return 0;
}
