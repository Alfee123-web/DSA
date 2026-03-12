#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
void heapify(int i, vector<int> &arr, int n)//logn
// n represents size of heap
{
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    int maxIdx = i;
    if (left < n && arr[left] > arr[maxIdx])
    {
        maxIdx = left;
    }
    if (right < n && arr[right] > arr[maxIdx])
    {
        maxIdx = right;
    }
    if (maxIdx != i)
    {
        swap(arr[i], arr[maxIdx]);
        heapify(maxIdx, arr, n);
    }
}
void heapSort(vector<int> &arr)//(n * logn)
{
    // step 1 = > build max heap
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) // backwards loop
    {
        heapify(i, arr, n);
    }
    // step 2 => taking smaller element to their correct position
    for (int i = n - 1; i >= 0; i--)//0(n * logn)
    {
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}
int main()
{
    vector<int> arr = {1, 4, 2, 5, 3};
    heapSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// 1 2 3 4 5 => MAX HEAP
//0(n * logn)
