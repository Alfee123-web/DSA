#include <iostream>
using namespace std;

void func(int arr[]){ //ARR = PARAMETER
arr[0] = 1000;
}

void func2(int *ptr){
ptr[0] = 1000;
}

void printArr(int nums[])
{
    cout << sizeof(nums) << endl; // 8 = size of int pointer
    int n = sizeof(nums) / sizeof(int);
    for(int i = 0; i<n ; i ++){
        cout<<nums[i]<<endl;
    }
}

void printArr(int nums[] , int n ) // array name + array size 
{
  
    for(int i = 0; i<n ; i ++){
        cout<<nums[i]<<endl;
    }
}
// int nums[] basically a pointer

int main()
{
    int a = 5;
    int *ptr= &a;
    cout<< ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    cout<< *arr << endl; //dereference //1

    cout<< *(arr + 1) << endl;//2
    cout<< *(arr + 2)<< endl;//3

    func2(arr); //passing array name is equal to passing a pointer
    cout<<arr[0]<<endl;
    cout << "array size :" << sizeof(arr) << endl; //20 = 5 * 4
    printArr(arr, n);

    return 0;
}
// ARRAYS ARE ALWAYS PASSED BY REFERENCE{pointing to same memory location}
// ARRAY NAME CAN BE CONVERTED INTO A POINTER

// PASS BY REFERENCE = FUNCTION KO ARRAY KI VALUE 
// KO PASS KARTE HAI 

// PASS BY VALUE = SARE CHANGES FUNCTION KE WITHIN REH JAANE
// CHAHIYE
