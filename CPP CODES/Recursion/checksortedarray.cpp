#include <iostream>
using namespace std;
bool checkSort(int *arr, int n, int i)
{
    //base case 
    if (i == n - 1)
    { // here we are at the last element of the array so it is already sorted
        return true;
    }

    if (arr[i] > arr[i + 1]) // descending order 
    {
        return false;
    }
    return checkSort(arr, n, i + 1);
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}; // sorted : 1
    int arr2[5] = {1, 2, 4, 3, 5}; // unsorted: 0

    cout << checkSort(arr1, 5, 0) << endl;
    cout << checkSort(arr2, 5, 0) << endl;

    return 0;
}
