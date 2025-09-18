//FIND CHARACTER LOWERCASE OR UPPERCASE
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character:";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Upper case"<<endl;
     } else{
            cout<<"Lower case"<<endl;
        }
    

    return 0;
}