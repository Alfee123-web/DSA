// OUTPUT in Array
 #include<iostream>
 using namespace std;
 int main(){
     int arr[5] = {7,5,52,21,13};

    // int len = sizeof(arr) / sizeof(int);
    int n = sizeof(arr) / sizeof(int);
    // cout<<marks[idx];
     // idx update hoga and always start with 0

    // for(int idx = 0; idx<=len-1 ; idx ++){
    for(int idx = 0; idx<n ; idx ++){
        cout<<arr[idx]<<" ";
    }
    cout<<endl;

    return 0;
}

// INPUT IN ARRAY
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter length of array : ";//we can dynamically allocate size of array during run time
   cin>>n;
    int arr[n];

    // int n = sizeof(arr) / sizeof(int);

    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    for (int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " , ";
    }
    cout << endl;

    return 0;
}
