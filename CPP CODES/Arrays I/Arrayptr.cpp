
// #include<iostream>
// using namespace std;
// int main(){
//     // int x = 10;
//     // int *ptr =  &x;

//     // int y = 25;
//     // *ptr =  &y;
//     int arr[5];
//     cout<<arr<<"\n";
//     int y = 25;
//     arr = &y;//not possible arr should not be changed this should be a constant value
//      cout<< *ptr <<"\n" <<endl;
//    }


// INCREMENT DECREMENT OPERATOR

#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int *ptr = &a;

    // cout<< ptr <<"\n";
    // ptr ++; // 1 int ko add kar denaa
    // cout<< ptr<<"\n";

    // char ch = 'a';
    // char *ptr = &ch;

    // cout << ptr << "\n";
    // ptr++; // 1 char ko add kar denaa
    // cout << ptr << "\n";

     int a = 5;
    int *ptr = &a;

    cout << ptr << "\n"; //8 
    // ptr = ptr + 3;

    cout <<(ptr+3) << "\n";//14 = extra 6 digit plus hoke aaya hai


    return 0;
}


// #include<iostream>
// using namespace std;
// void printArr(int *ptr , int n){
//     for (int i = 0; i < n; i++)
//     {
//     // cout<< *ptr <<endl;
//         // ptr = ptr + 1;
//       cout<< *(ptr+i)<<endl;
   
//     }
    
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr) / sizeof(int);

//     printArr(arr , n);
//     return 0;
// }
// }


#include<iostream>
using namespace std;
int main(){  
    int a = 10;
    int *ptr1 = &a;

    int *Ptr2= ptr1 + 3;

    // cout<<ptr2<<"\n";
    cout<<ptr1<<"\n";

    // cout<<ptr2 - ptr1<< "\n";
      return 0;
};
