// #include<iostream>
// using namespace std;
// int main(){
//     int n = 8;
//     for(int i = 1; i<=n; i++){

//         for(int j=1 ;j<=n; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// outer loops = no. of rows
// inner loop = no. of columns

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout<<endl;
//         //why j <= i => beacuse no. of stars equal to rows
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n = 4;
//     for(int  i = 1; i<= n ; i++){
//         for(int j = 1; j<=(n-i+1);j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }
// **** = 4 = 4-i+1 = 4
// *** = 3 = 3-i+1 = 3
// ** = 2 = 2-i+1 = 2

// #include<iostream>
// using namespace std;
// int main(){
//    int  n = 5;
//     for ( int i = 1; i<=n ; i++ ){

//         for(int j = 1; j<=i; j++){
//             cout<<j<<" " ;//print value of j onli
//         }
//             cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'A';
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch++<< " "; // print value of j onli
//             // ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// HOLLOW RECTANGLE
//  #include <iostream>
//  using namespace std;
//  int main()
//  {

//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "*"; // FIRST

//         for (int j = 1; j <= n - 1; j++)
//         {
//             if (i == 1 || i == n)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << "*" << endl;
//     }
//         return 0;
//     }
// star + space + star pattern
// star + 3 star + star
// star + 3 space + star
// star + 3 space + star
// star + 3 star + star

//     //INVERTED AND ROTATED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j = 1; j<=n-i;j++){
//             cout<<" ";
//         }
//         //stars

//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// FLOYDS TRIANGLE
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int dig = 1;
//      int n = 5;
//      for(int i = 1; i <=n ; i++){
//          for(int j = 1; j<=i;j++){
//              cout<<dig<<" ";
//              dig++;

//         }
//         cout<<endl;
//     }
//     return 0;
// }




// DIAMOND PATTERN
#include <iostream>
using namespace std;
int main()
{
  int n = 4;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      // spaces
      cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; j++)
    {
      // stars
      cout << "*";
    }
    cout << endl;
  }
//trrick
  for(int i = n;i>=1;i--){
    for(int j = 1;j<=n-i;j++){
      cout<<" ";
    }
  
    for(int j = 1;j<=2*i - 1;j++){
      cout<<"*";
    }
    cout<<endl;

  }
  return 0;
}


// //BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;
// int main(){
// int n = 10;
// for(int i = 1; i<=n;i++){
//     for(int j=1;j<=i;j++){
//     cout<<"*";
//     }
//     //star

//   for(int j = 1;j<=2*(n-i);j++){
// //spaces
//   cout<<" ";
//   }
//   //star
//   for(int j=1;j<=i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }


// //trick
// for(int i = n; i>=1;i--){
//     for(int j=1;j<=i;j++){
//     cout<<"*";
//     }
//     //star

//   for(int j = 1;j<=2*(n-i);j++){
// //spaces
//   cout<<" ";
//   }
//   //star
//   for(int j=1;j<=i;j++){
//     cout<<"*";
//   }
//   cout<<endl;
// }
//   return 0;
// }
