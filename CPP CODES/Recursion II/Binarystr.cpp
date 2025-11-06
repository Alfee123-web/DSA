#include <iostream>
using namespace std;

void BS(int n , string ans , int lastplace){
    if(n == 0){
        cout<< ans <<endl;
        return;
    }
    if(lastplace != 1){
        BS(n-1 , ans + '0' , 0);
        BS(n-1 , ans + '1' , 1);
    }else{
        BS(n-1 , ans + '0' , 0);
    }

}
int main() {
    string ans = "";

   BS(3 ,ans , 0);

    return 0;
}
 //OUTPUT
// 000
// 001
// 010
// 100
// 101