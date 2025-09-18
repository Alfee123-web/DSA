
#include<iostream>
#include<algorithm>
using namespace std;
int appearTwice(int *arr , int n){
   sort(arr, arr + n);

    for(int i = 1;i<n;i++){
        if(arr[i-1]==arr[i]){
            return 1;
        }
    }
   return 0;
}
int main(){
    int arr[] = {2,4,5,1,1,6,7};
    int n = sizeof(arr) / sizeof(int);

    int result = appearTwice(arr , n);
    cout<<result<<endl;
    return 0;
}