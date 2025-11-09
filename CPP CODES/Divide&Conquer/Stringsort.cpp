#include <iostream>
#include<vector>
using namespace std;
void printArr(string str[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
void merge(string str[] , int s ,int  e ){
 int mid = s + (e-s)/2;
    vector<string>temp;
    int i = s; //start
    int j = mid +1; //start hoga
    while(i <= mid && j <= e){
        if(str[i]<str[j]){
            temp.push_back(str[i++]);
        }else{
            temp.push_back(str[j++]);
        }
    }
    while(i<= mid){
        temp.push_back(str[i++]);
    }
    while(j<=e){
        temp.push_back(str[j++]);
    }
    int x = 0;
for(int i = s ; i <= e; i++){
    str[i] = temp[x++];

}


}
void StringmergeSort(string str[] ,  int s , int e){
    if(s >=  e){
        return;
    }
    //divide
     int mid = s + (e-s)/2;
    StringmergeSort(str  , s , mid); //left 
    StringmergeSort(str, mid+1 , e); //right

    merge(str,  s , e);
}
int main() {
   string str[] = {"sun", "earth" , "mars","mercury"};
   int n = 4;
   StringmergeSort(str, 0 , n-1);
   printArr(str , n);
    return 0;
}
