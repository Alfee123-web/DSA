// #include <iostream>
// using namespace std;
// void sayHello(){
//     cout << "Hello\n";
// }

// // int main()//execution start hoga
// // {
// //     sayHello(); // function call
// //     sayHello();
// //     sayHello();
// //     return 0;
// // }

// void assistant(){
//     sayHello(); // forward declaration = main se phle declare kar dena
//     cout<<"work done \n";
// }
// int main(){//execution start hoga

//     assistant();
//     return 0;
// }

// // SYNATX WITH PARAMETERS
// #include <iostream>
// using namespace std;

// // int sum(int a, int b)
// // { // parameters
// //     int sum = a + b;
// //     return sum;
// // }
// int sum(int a, int b=1)//int b = 1 (default parameters)
// { // parameters
//     int sum = a + b;
//     return sum;
// }
// int diff(int a, int b)
// { // parameters
//     int diff = a - b;
//     return diff;
// }

// int main()
// {
//     int s = sum(2); // 2,4 = arguments
//     //default parameters cannot be first digit
//     cout << "sum : " << s << endl;
//     int d = diff(10, 5); // 2,4 = arguments
//     cout << "diff : " << d << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int product(int a , int b){
//     int product = a *b;
//     return product;
// }
// int main(){
//     ;
//     int p = product(3,8);
//     cout<<"Product: "<<p<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// //even = true , odd = false
// bool isEven(int a){
//     if(a%2==0){
//         return true;
//      } else{
//             return false;
//         }
//     }

// int main(){

//    cout<<isEven(20)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     cout << "factorial:" << fact << endl;
//     return fact;
// }

// int main()
// {
//     fact(2);
//     fact(3);
//     fact(4);
//     fact(5);
//     fact(6);
//     return 0;
// }

// current function = is always at the top of the stack
// scope =  area where a var can be accessed as used

// PRIME NUMBER
//  #include <iostream>
//  using namespace std;

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }

//     for (int i = 2; i <= n-1; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool isPrime2(int n ){
//       if (n == 1)
//     {
//         return false;
//     }
//     for (int i =2; i*i <= n; i++)
//     {
//     if(n%i==0){
//         return false;
//     }
//     return true;
//     }

// }
//     int main()
//     {
// cout<<isPrime(3)<<endl;
//         return 0;
//     }

// BINARY COEFFICIENT
//  #include<iostream>
//  using namespace std;
//  int fact(int n){
//  int fact =1;
//  for(int i = 1;i<=n;i++){
//      fact = fact*i;
//  }
//      return fact;
//  }

// int binCoeff(int n , int r){
//    int val1 = fact(n);
//    int val2 = fact(r);
//    int val3 = fact(n-r);

//    int result = val1 / (val2 * val3);
//    return result;
// }
// int main(){
//     cout<<binCoeff(4,2)<<endl;
//     return 0;
// }


//Function overloading
//multiple functions with same name and diff parameters 
// #include <iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int sum = a + b;

//     cout << sum << endl;
//     return sum;
// }
// int sum(int a, int b,int c)
// {
//     int sum = a + b + c;

//     cout << sum << endl;
//     return sum;
// }

// double sum(double a, double b)
// {

//     double sum = a + b;

//     cout << sum << endl;
//     return sum;
// }

// int main()
// {
//     sum(2, 3);
//     sum(12, 3);
//     sum(12, 2, 3);
//     sum(2.3, 3.1);//5.4  if we use double function instead of int wala function
//     return 0;
// }


#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return true;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int allPrimes(int n){
       for(int i = 2;i<=n;i++){
    if(isPrime(i)){ //true
        cout<< i <<" ";
    }
    cout<<endl;
}
}
int main(){
allPrimes(13);
    return 0;
}
