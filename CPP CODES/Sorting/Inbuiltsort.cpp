// sort(start, end) {Ascending}

// sort(start,end,greater<int>()) {Descending}

#include <iostream>
#include <algorithm>
using namespace std;
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}



int main() {
       int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};

    //    sort(arr , arr+8);
    //    sort(arr+2 , arr+5); //from 2nd index to 5th index
       sort(arr,arr+8,greater<int>());
       printArr(arr , 8);

    return 0;
}
