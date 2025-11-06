#include <iostream>
using namespace std;
int validSubstring(string s ){
    int n = s.size();
    int count =0 ;
    //base case
    if( n <= 1){
return n;
    }
    if(s[0] == s[n-1]){ // only 1 letter 
        count++;
    }
    //remove letter from end
    count += validSubstring(s.substr(0, n-1));

    //remove letter from start
    count += validSubstring(s.substr(1));


//remove duplicate substrings 
    count -= validSubstring(s.substr(1,n-2));
    return count;
}
int main() {
   string s = "abcab";
   int count = validSubstring(s);
   cout<<count<<endl; // 7
    return 0;
}