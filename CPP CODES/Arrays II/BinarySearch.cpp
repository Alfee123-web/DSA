//SORTED ARRAY
#include <iostream>
using namespace std;
int binSearch(int *arr, int n, int key)
{
    int first = 0;
    int last = n - 1;
    while (first <= last)
    {

        int mid = (first + last) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])//second half
        {
            first = mid + 1;
        }
        else//first half
        {
            last = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    
    cout<<binSearch(arr , n ,7)<<endl;
    return 0;
}
//TIME COMPLEXITY = O(log n)