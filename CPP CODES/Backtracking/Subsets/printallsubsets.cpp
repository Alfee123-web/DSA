#include <iostream>
#include<vector>

using namespace std;
void printSubsets(vector<int> &arr,vector<int> &ans, int i){ //& = by refernce pass we dont want to create a copy 
   if(i==arr.size()){
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return;

   }

   //include
   ans.push_back(arr[i]);
   printSubsets(arr, ans , i+1);

     ans.pop_back();
     printSubsets(arr, ans , i+1);
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> ans;
   printSubsets(arr, ans , 0);
    return 0;
}


//TC = 0(2^N * n )
//OUTPUT
// 1 2 3 
// 1 2
// 1 3
// 1
// 2 3
// 2
// 3lll