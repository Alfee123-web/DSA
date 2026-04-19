#include <iostream>
using namespace std;

int main() {
   for (int i = 1; i <= 6; i++)
   {
    for (int j = 1; j <= 20; j++)
    {
        if(i==1 || j == 1 || i == 6 || j == 20){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
    cout<<endl;
   }
   
    return 0;
}
