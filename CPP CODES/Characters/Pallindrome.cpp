#include <iostream>
#include<cstring>
using namespace std;


bool isPallindrome(char word[] , int n){

    int st = 0; int end = n-1;
    while(st < end){
        if(word[st]!= word[end]){
       cout<< "Not a pallindrome\n";
       return false;
        }
        st++;
        end--;
    }

        cout<<"Pallindrome\n";
        return true;
}

int main() {
   char word[] = "racecar";
   isPallindrome(word , strlen(word));

    return 0;
}
//LEETCODE 125 SOLVE