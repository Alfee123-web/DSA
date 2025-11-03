#include <iostream>
using namespace std;

void secondLar(int *arr, int n){
    int max = INT32_MIN;
    int smax = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
    }
        for (int i = 0; i < n; i++)
    {
        if(arr[i] > smax && arr[i] != max) smax = arr[i];
    }

    cout<<"Second Largest : "<<smax<<endl;
    
}

int main() {
    int arr[] ={4,6,7,9,1};
    int n = sizeof(arr)/sizeof(int);

    secondLar(arr, n);
   
    return 0;
}