#include <iostream>
using namespace std;

int main() {
//    string str = "apna college";
   string str = "I love coding in C++";
   //member functions 
//    cout<<str.length()<<endl;
//    cout<<str[2]<<endl;
//    cout<<str.at(2)<<endl;
//    cout<<str.substr(1,5)<<endl;

   cout<< str.find("C++")<<endl;
   cout<< str.find("pyhton")<<endl; //garbage value
    return 0;
}