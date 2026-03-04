#include <iostream>
using namespace std;

void print(int *arr , int n)
    {
    for (int i = 0; i < n ; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
void insertionSort(int  *arr, int n){
    for(int i = 1; i<n;i++){
        int curr = arr[i];
        int prev = i-1; //backward loop
       while (prev>=0 && arr[prev] > curr){//bade elements peeche ki traf push honge       
       swap(arr[prev], arr[prev + 1]);
       prev--;
       }
       arr[prev+1]= curr;
       // prev ki value jaha honi chahiye waha ek pehle hai uski position
    }
    print(arr , n);
}

int main() {
   int arr[5] = {5,4,1,2,3};
   int n = sizeof(arr) / sizeof(int);

 insertionSort(arr , 5);

 
    return 0;
}
//TIME COMPLEXITY = 0(N2)