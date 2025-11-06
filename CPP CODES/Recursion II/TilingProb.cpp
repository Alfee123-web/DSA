#include <iostream>
using namespace std;


int tp(int n){ // 2 * n
   if(n ==0 || n == 1){
    return 1;
   }
   return tp(n-1) + tp(n-2); // vertical + horizontal
}
int main() {
   cout<<tp(1)<<endl;;
   cout<<tp(2)<<endl;
   cout<<tp(3)<<endl;
   cout<<tp(4)<<endl;
   cout<<tp(5)<<endl;
    return 0;
}