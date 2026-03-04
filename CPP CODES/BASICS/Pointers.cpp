// ADDRESS OF OPERATOR
//& => gives address of a variable
// 0x se start hoga = hexadecimal number (16 base)
// 0 to 9 and a to z
// int  = 4 bytes , pointer= 8 bytes...

// #include<iostream>
// using namespace std;
// int main(){
//     // int a = 5;
//     // int *ptr = &a;

//     int pi = 3.14;
//     int *ptr = &pi;
//     // cout<<&pi<<" = "<<ptr<<endl;
//     // cout<<sizeof(ptr)<<endl;

//     int **pptr =&ptr; //pointer to pointer
//     cout<<&ptr<<" = "<<pptr<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a = 10;
// int *ptr = &a;
// cout<<&a<<endl;
// cout<<*(&a)<<endl;// * = dereference operator which will return
// //value of a itself

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int *ptr = NULL;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;//not possible

//     return 0;
// }

// PASSING ARGUMENTS
//  #include<iostream>
//  using namespace std;

// // void ChangeA(int param){
// //     param = 20;
// //     cout<< param <<"\n";
// // }

// // pass by reference using pointer
// void ChangeA(int *ptr){
//     *ptr = 20;
//     cout<< *ptr <<"\n";
// }
// int main(){
//     int a = 10;
//     ChangeA(&a);

//     cout<< a << "\n";
//     return 0;
// }
// pass by value = parameter is a copy of actual argument variable in memory
// pass by refernce/address = pass reference of argument to the function



// REFERENCE VARIABLES(alias = same thing diff names)
// #include <iostream>
// using namespace std;

// // pass by reference using reference variables
// void ChangeA(int &param)
// {
//     param = 20;
//     cout << param << "\n";
// }
// int main()
// {
//     // int a = 10;
//     // int &b = a;
//     // b = 25;
//     // cout<<b<<"\n";

//     int a = 10;
//     ChangeA(a);
//     cout << a << "\n";
//     return 0;
// }



// QUES 1
// #include <iostream>
// using namespace std;
// int main(){
//     int x =5;
//     int y = 10;
//     int *ptr1 = &x , *ptr2 = &y;
//     ptr2 = ptr1;

//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<&x<<endl;

//     return 0;
// }


//QUES 2


#include <iostream>
using namespace std;
int main(){
float *a ,b;

    return 0;
}
//a = float pointer
//b = normal float value
