#include <iostream>
using namespace std;
void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

void countingSort(int *arr, int n)
{
    int freq[100000] = {0}; // range
    int minVal = INT16_MAX, maxVal = INT16_MIN;

    // first loop is to find out the range
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    // 1ST STEP -0(N)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; // arr[i] = FREQUENCY ARRAY KA INDEX BAN JAYEGA
    }

    // 2ND STEP - 0(range) = max-min
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }

    }
}
int main()
{
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);
    
        printArr(arr, n);
    return 0;
}
// when min to max number ke range is very low in the array and jab positive number honge
