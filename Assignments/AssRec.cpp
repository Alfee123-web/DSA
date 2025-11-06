
#include <iostream>
using namespace std;
// QUES 1 
int BS(int arr[] , int start , int end , int key){
    if(start > end){
        return -1;
    }
    int mid =( start + end) / 2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid] > key){
        //towards left
       return  BS(arr , start , mid -1 , key);
    }
    else{
        //towards right
        return BS(arr , mid + 1 , end , key);
    }
}


//QUES 2
int countOcc(int arr[] , int n , int i , int key){
    if(i == n){
        return -1;
    
    }
    if(arr[i] == key){
        cout<<i<<endl;
    }
    countOcc(arr , n , i + 1 , key);
}
int main() {
   int arr[] = {1,2,3,4,5,6,7};
   cout<<BS(arr , 1, 7, 5)<<endl; // 4 on the basis of 0 indexing 
   cout<<BS(arr , 1, 7 ,2)<<endl;// 1
   cout<<BS(arr , 1, 7 , 7)<<endl ; //6


int arr2[]= {3,2,4,5,6,2,7,2,2};
   cout<<countOcc(arr2,9 , 0 , 2 )<<endl;
   //2 kon kon se index par aya hai 
   //1 5 7 8 
    return 0;
}
