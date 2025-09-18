#include <iostream>
using namespace std;
int rotatedArr(int *arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[start] <= arr[mid])
        {

            if (arr[start] <= target && target < arr[mid])//left sorted array
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < target && target <= arr[end])//right sorted array
            {
                {
                    start = mid + 1;
                }
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    // int arr[8]= {0,1,2,3,4,5,6,7};
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    int result = rotatedArr(arr, n, 3);
    cout<<result<<endl;

    return 0;
}
