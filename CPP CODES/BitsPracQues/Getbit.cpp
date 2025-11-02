#include <iostream>
using namespace std;


int findIthBit(int num , int i){
    int bitMask = 1 << i ;

    if(!(num & bitMask)){
        return 0;
    }else{
        return 1;
    }

}
int main() {
   cout<< findIthBit(6 , 2)<<endl;//1
   cout<< findIthBit(7 , 1)<<endl;//1
   cout<< findIthBit(7 , 5)<<endl;//0
    return 0;
}



//BITMASK
//Left Shift Operation (1 << i) / mask 
//bitmask vo lenege jaha ith position par 1 ho aur baaki jagah 0 ho

// 1<<0 = 0000001
// 1<<1 = 0000010
// 1<<2 = 0000100