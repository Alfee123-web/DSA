#include <iostream>
using namespace std;

int Search(int arr[], int target, int s, int e)
{
    if (s > e)
    {
        return -1;
        // target does not exist in aaray
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (arr[s] <= arr[mid])  // left sorted
    {                                             
        if (arr[s] <= target && target <= arr[mid]) // left call
        {
            return Search(arr, target, s, mid - 1);
        }
        else
            return Search(arr, target, mid + 1, e);
    }
    else // right sorted
    {                                   
        if (arr[mid] < target <= arr[e]) // right call
        {
            return Search(arr, target, mid + 1, e);
        }
        else
        {
            return Search(arr, target, s, mid - 1);
        }
    }
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    cout << Search(arr, 0, 0, n - 1) << endl; //4
    cout << Search(arr, 100, 0, n - 1) << endl; //-1

    return 0;
}
