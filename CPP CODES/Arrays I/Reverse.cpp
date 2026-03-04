//  WITH EXTRA SPACE
#include <iostream>
using namespace std;
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
        // i = 0 , j = 4
        // i = 1 , j = 3
        // i = 3 , j = 2....
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }

    printArr(arr, 5);
    return 0;
}
// SPACE COMPLEXITY = O(N)
// TIME COMPLEXITY = O(N)



//  WITHOUT EXTRA SPACE(2 pointer approach)
#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // int temp = arr[start];//swap
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);

        start++;
        end--;
    }
    printArr(arr, n);

    return 0;
}
// SPACE COMPLEXITY = O(1)
// TIME COMPLEXITY = O(N)