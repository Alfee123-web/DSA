// ANS 1
// #include<iostream>
// using namespace std;

// int reverse(int n){
//     int rev = 0 ;
// int num = n;
// while(n>0){
//     int dig = n  % 10;
//     rev = rev * 10 + dig;
//     n = n /10;
// }
//     return rev;

// }

// bool isPall(int n){
// if(n<0){
//     return false;
// }
// return(n == reverse(n));
// }

// int main(){
//   int num = 123;
// if(isPall(num)){
//     cout<<"Pallindrome"<<endl;

// }else{
//     cout<<"Not a Pallindrome"<<endl;

//     return 0;
// }

// }

// ANS 2
// #include <iostream>
// using namespace std;

// int Sum(int num)
// {
//     int digsum = 0;
//     int digit;
//     while (num > 0)
//     {
//         digit = num % 10;
//         digsum += digit;
//         num /= 10;
//     }
//     return digsum;
// }
// int main()
// {
//     int s = Sum(7623);
//     cout << "Sum of digits of number: " << s << endl;
//     return 0;
// }


// ANS 3
// #include<iostream>
// using namespace std;
// int Calc(int a  ,  int b){
//     int val1 = a*2;
//     int val2 = b*2;
//     int val3 = 2 * a * b;
//     int result  = val1 + val2 + val3;
//     return result;
// }
// int main(){
// int c = Calc(3,2);
// cout<<"Output is: "<<c<<endl;
//     return 0;
// }


// ANS 4
// #include<iostream>
// using namespace std;

// int Larg(int a , int b , int c){
//     if(a>=b && a>=c){
//        return a;
//      } else if(b>= a && b>=c){
//          return b;

//         }else{
//             return c;
//         }
    
//     }
// int main(){
//     int l = Larg(2,3,10);
//         cout<<"Largest is : "<<l<<endl;
    
//     return 0;
// }


//ANS 5 
#include<iostream>
using namespace std;
char Findnextch(char ch){
   
    if(ch == 'Z'){
        return 'A';
    }
     char next = ch + 1; 
    return next;
}
int main(){
    char f = Findnextch('Z');
    cout<<f<<endl;
    return 0;
}