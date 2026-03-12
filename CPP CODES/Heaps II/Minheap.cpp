#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
void heapify(int i, vector<int> &arr, int n)
// n represents size of heap
{
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    int minIdx = i;
    if (left < n && arr[left] < arr[minIdx])
    {
        minIdx = left;
    }
    if (right < n && arr[right] < arr[minIdx])
    {
        minIdx = right;
    }
    if (minIdx != i)
    {
        swap(arr[i], arr[minIdx]);
        heapify(minIdx, arr, n);
    }
}
void heapSort(vector<int> &arr)
{
    // step 1 = > build max heap
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) // backwards loop
    {
        heapify(i, arr, n);
    }
    // step 2 => taking smaller element to their correct position
    for (int i = n - 1; i >= 0; i--)
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
//5 4 3 2 1  