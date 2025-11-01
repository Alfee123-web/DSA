// #include <iostream>
// using namespace std;

// int main() {

// //    char ch2 = 'X';
// //    char ch3 = 'b';
// //    char ch4 = 'c';
// //    char ch5 = 'f';
// //    char ch6 = '\t';
//    char ch = 'a';
//    cout<<(int)ch << endl;
//     char ch2 = 'f';

//    int pos1 = ch2 - 'a';
//    cout<<pos1<<endl;

//     char ch3 = 'F';
//    int pos2 = ch3 - 'A';
//    cout<<pos2<<endl;
//     return 0;
// }
// char = 1 byte ( 8 bits)
// ASCII = American Standard Code For Information Interchange
// a = 97 , A = 65 (ASCII value)

#include <iostream>
using namespace std;
#include<cstring>

int main()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << arr << endl;

    // STRING LITERALS = "APNA COLLEGE", "HELLOWORLD", "A"
    // literals are constant value will be always same

    // char work[5] = "code";
    //   cout << work << endl;
    char work[5] ={'c','o','d','e','\0'};
    cout<<strlen(work)<<endl;
    cout << work << endl;
    return 0;
}