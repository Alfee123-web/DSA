#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minVal = i; // loop to find min
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[minVal])
            {
                minVal = j;
            }
        }
        swap(arr[minVal], arr[i]);
    }
    print(arr, n);
}

int main()
{
    int arr[6] = {1, 4, 5, 6, 7, 3};
    selectionSort(arr, 6);
    return 0;
}
//TIME COMPLEXITY = 0(N2)
// idea = smallest ko forward push krenge
