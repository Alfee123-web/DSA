// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int *ptr;
//     x = 7;
//     ptr  = &x;
//     cout<< *ptr;
//     return 0;
//}
// ANS = 7

// #include<iostream>
// using namespace std;
// void Multipleby2(int &a , int &b , int &c){
//     a*=2;
//     b*=2;
//     c*=2;
// }
// int main(){
//    int x =1, y=2, z =3;
//    Multipleby2(x,y,z);
//    cout<< x << y << z << "\n";
//     return 0;
// }
// ANS  = 246

#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr = &a;
    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << " , " << ch << endl;
    return 0;
}
//ANS = 129,a