#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
void changeArr(int arr[], int n, int i)
{
    if (i == n)
    { // base case i = 5
        printArr(arr, n);
        return;
    }
    arr[i] = i + 1; // we have to write this line before function call
    changeArr(arr, n, i + 1);
    arr[i] -= 2; // back traversing
}
int main()
{
    int arr[5] = {0};
    int n = 5;

    return 0;
}
// arr = 1,2,3,4,5
// arr =-1,0,1,2,3
