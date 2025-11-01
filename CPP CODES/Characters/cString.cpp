#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "world";

    //    str 1 = "apna collge"
    strcpy(str1, "apna college");
    //    strcpy(source , destination)
    
    strcat(str1, str2);
    // concatenation

    char str1[100] = "abc";
    char str2[100] = "xyz";
    cout << strcmp(str1, str2) << endl; // (it will give negative value abc < xyz)
    //if abc = abc it wil give zero
    // xyz > abc it will give positive value

    // cout << str1 << endl;

    return 0;
}