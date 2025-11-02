#include<iostream>
using namespace std;
void maxSubarr(int *arr , int n){
    int maxSum = INT16_MIN;
      int   currSum = 0;
    for(int i = 0;i<n;i++){
    
        
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){
            currSum ==0;
        }

    }
    cout<<"Maximum Subarray Sum : "<<maxSum<<endl;
}

int main(){
        int arr[5] = {1, 2, 3, 4, 5};
        // int arr[5] = {-1,-2,-3,-4,-5};
    int n = 5;
    maxSubarr(arr , n);
    return 0;
}
//LOGIC
//  pos + pos = pos 
//  neg + (big)pos = pos 
//  pos + (big)neg = neg 
//  JAISEY HI NEGATIVE AAYE VAISEY HI CURRSUM KO REINITIALIZE KR DENGE ZERO SE
//  BECAUSE ULTIMATELY VO VALUE KO DECREASE HI KREGA...
