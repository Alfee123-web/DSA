#include <iostream>
#include<cstring>
using namespace std;

void revArray(char word[] , int n){
    int st = 0 , end = n - 1;
 while(st < end){
swap(word[st], word[end]);
st ++;
end --;
 }
}
//TIME COMPLEXITY = 0(N/2)
int main() {
   char word[] = "Alfee";

   revArray(word , strlen(word));
   cout<<"reverse :" <<word<<endl;

    return 0;
}
