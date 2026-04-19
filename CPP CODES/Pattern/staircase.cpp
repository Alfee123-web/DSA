#include <iostream>
using namespace std;

int main() {
    int n = 8;
   for (int i = 1; i <=n; i++)
   {
    if(i%2 == 0){
        //even
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
    }
    else{
        //odd
        for (int j = 1; j <= i+1; j++)
        {
           cout<<"*";
        }
        
    }
    cout<<endl;
   }

    return 0;
}
