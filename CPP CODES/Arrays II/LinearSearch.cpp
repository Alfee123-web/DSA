#include <iostream>
using namespace std;

int linSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {

            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 23, 4, 5, 67, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << linSearch(arr, n, 23) << endl;
    return 0;
}
