#include <iostream>
#include <vector>
using namespace std;


//utility function
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[], int s, int e, int mid )
{
    int i = s;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= e)
    {

        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
//extra loops for single element ([6] , [7]....)
        while (i <= mid)
        {
            temp.push_back(arr[i++]);
        }
        while (j <= e)
        {
            temp.push_back(arr[j++]);
        }

        //copy temp array to original array 
        int x = 0;
        for (int i = s; i <= e; i++)
        {
            //original array
            arr[i] = temp[x++];
        }
        //i = iterator for org array
        //x = iterator for temp array
    
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // DIVIDE
    int mid = s + (e - s) / 2;
    //to avoid problem of overflow

    mergeSort(arr, s, mid); // left half
    mergeSort(arr, mid + 1, e); //right half

    // COMBINE
    merge(arr, s, e ,mid);
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}
