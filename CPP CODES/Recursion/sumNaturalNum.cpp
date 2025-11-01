#include <iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    // sum(n) = n  + sum(n-1); recurrence relation 
    return n + sum(n-1);

}
int main() {
   cout<<sum(4)<<endl;
   cout<<sum(5)<<endl;
   cout<<sum(10)<<endl;
    return 0;
}
