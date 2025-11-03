#include <iostream>
using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    
}

int sort01(int a[], int n) {
    int st = 0, end = n-1;

    while(st<=end){
        if(a[st] < a[end]){
            st++;
        }
        else if(a[st] == 1 && a[end] == 1) {
            end--;
        }
        else{
            swap(a[st], a[end]);
            st++;
            end--;
        }
    }
    printArray(a,n);
}

int main() {
    int a[] = {1,1,0,0,1,0,1};
    int n = sizeof(a)/sizeof(int);
    printArray(a,n);

    sort01(a,n);
    
    return 0;
} 
