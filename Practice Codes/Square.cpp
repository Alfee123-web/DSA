#include<iostream>
using namespace std;
int main(){
    int n = 4;
 
   char ch = 'A';
       for ( int i = 1; i <=n ; i++){
        // Char ch = 'A';
        for(int j=1; j<=n;j++){
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
  
    return 0;
}
