//IMPORTANT **
#include <iostream>
using namespace std;


void oddOReven(int num){
    if (!(num & 1 )) // 0 ka NOT gives us a TRUE value
    {
      cout<<"even\n";
    }else{
        cout<<"odd\n";
    }
    
}
int main() {
   oddOReven(5);
   oddOReven(8);
    return 0;
}


//LOGIC / bitmask ( & operator jis value ke saath lia hai ) = are used to access specific bits in a byte of data
// odd = right most bit => 1
// even = right most bit => 0

// ans = 0  (even) , 1 (odd)
//6 & 0 = 0
//8 & 0 = 0
// 6 & 1 = 000
// 8 & 1 = 0000
// {basicalyy har even no. ke sath 1 ka & leneg to 0 ayega}
