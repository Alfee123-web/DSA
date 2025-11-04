// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     //initialisation,condition,updation,
//     for (num =1; num<=5; num++){
//         //if num>=0 then infinite loop
//         cout<<num<<"\n";
//     }
//     cout<<endl;
//     cout<<"last value of num: "<<num<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     // for(i=1;i<=5;i++){
//     for(i=0;i<5;i++){
//         cout<<"Apna College"<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int  n;
//     cout << "Enter n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

// SUM OF N NATURAL NUMBERS
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int n;
//      cout << "enter n :";
//      cin >> n;
//      int sum = 0;
//      for (int i = 1; i <= n; i++)
//      {
//          sum = sum + i;
//      }
//          cout << "sum is :" << sum << endl;

//     return 0;
// }
// sum of first n natural number = n(n+1)/2 mathematical formula

// #include <iostream>
// using namespace std;
// int main()
// {
//     int count = 1; // initialisation
//     while (count < 3)
//     {
//         cout << count;
//         count++; // updation
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 18;
//     int i = 1;

//     while (i < n)
//     {
//         cout << "apna college" << endl;
//         i++; // updation
//     }

//     return 0;
// }

// SQUARE PATTERN
//  #include <iostream>
//  using namespace std;
//  int main()
//  {

//     for (int i = 1; i <= 4; i++)
//     {
//         cout << "****" << endl;
//     }

//     return 0;
// }

// FROM N TO 1
//  #include <iostream>
//  using namespace std;
//  int main()
//  {

//     int n = 10;

//     for (int i = n; i >=1 ; i--)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

// SUM OF DIGIT OF NUMBERS
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n = 12345;
//     int sum = 0;
//     while (n > 0)
//     {

//         int dig = n % 10; // remainder = 3

//         sum += dig;
//         n = n / 10; // quotient = 12
//     }
//     cout << sum << endl;

//     return 0;
// }

// print sum of odd digits using while loop
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n = 12345;
//     int sum = 0;
//     while (n > 0)
//     {

//         int dig = n % 10; // remainder = 3
//         if (dig % 2 != 0)//odd number
//         {
//             sum += dig;
//         }

//         n = n / 10; // quotient = 12
//     }
//     cout << sum << endl;

//     return 0;
// }

// digit in reverse order
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 12345;
//     while (n > 0)
//     {
//         int dig = n % 10;
//         cout << dig;
//         n /= 10;
//     }
//     cout << endl;

//     return 0;
// }

// reverse number and print result
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 1234;

//     int rev = 0;
//     while (n > 0)
//     {
//         int dig = n % 10;
//         rev = rev * 10 + dig;
//         n = n / 10;
//     }
//     cout << "result:" << rev << endl;
//     return 0;
// }

// LOGIC
// 1234 = 1*10 power 3
// 1234 = 2*10 power 2
// 1234 = 3*10 power 1
//  rev =  0 * 10 + 4 = 4
//  rev =  4 * 10 + 3 = 43
//  rev =  43 * 10 + 2 = 432
//  rev =  432 * 10 + 1 = 4321

// DO WHILE LOOP
//  it will always run one time even if the condition is false or true
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     do
//     {
//         cout << i << "";
//         i++;//updation
//     } while (i <= 5);//condition
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;

//     do
//     {
//         cout << "enter n:";
//         cin >> n;
//         if(n%10==0){
//             break;
//         }
//         cout<<"you entered "<<n<<endl;
//     } while (true); // infinite loop
//     return 0;
// }

// CONTINUE STATEMENT
//  #include <iostream>
//  using namespace std;
//  int main()
//  {

// for(int i = 1; i<=10; i++){
//     if(i==3){
//         continue;
//     }
//     cout<<i<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     do
//     {
//         cout << "Enter n: ";
//         cin >> n;
//         if (n % 10 == 0)
//         {
//             continue;
//         }
//         cout << "you entered " << n << endl;

//     } while (true);

//     return 0;
// }

// PRIME NUMBER
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 9;
//     bool isPrime = true;

//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }; // not a prime number
//     }
//     if (isPrime)//means true 
//     {
//         cout << "Prime number" << endl;
//     }
//     else
//     {
//         cout << "Not prime" << endl;
//     }
//     return 0;
// }


