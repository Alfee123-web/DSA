#include <iostream>
#include<vector>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    int i = s - 1; //-1`

    int pivot = arr[e];

    for (int j = s; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[e]);
    // pivotIdx = i
    return i;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int pivotIdx = partition(arr, s, e);

    quickSort(arr, s, pivotIdx - 1); // left half
    quickSort(arr, pivotIdx + 1, e); // right half
}
int main()
{

    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    quickSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}